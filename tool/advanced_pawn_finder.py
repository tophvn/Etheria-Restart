# ==============================================================================
# ADVANCED PAWN FINDER (Tìm Pawn Nâng Cao)
# ==============================================================================
# Script này tìm pawn của người chơi cục bộ bằng cách duyệt qua tất cả các actor
# trong thế giới, tính khoảng cách của chúng từ camera của người chơi và xác định
# actor gần nhất đồng thời sở hữu một CharacterMovementComponent hợp lệ.
# Phương pháp này đáng tin cậy hơn là dựa vào một offset cố định từ PlayerController.

import pymem
import pymem.process
import struct
import math

PROCESS_NAME = "GameUE_cpp-Win64-Shipping.exe"

# Offsets đã xác nhận từ file dump
OFFSET_PLAYERCONTROLLER_CAMERAMANAGER = 0x2b8
OFFSET_CAMERAMANAGER_CACHECAMERA = 0x290
OFFSET_ACTOR_ROOTCOMPONENT = 0x130
OFFSET_SCENECOMPONENT_LOCATION = 0x11c
OFFSET_CHARACTER_MOVEMENTCOMPONENT = 0x288

def get_gworld_ptr(pm):
    """Tìm con trỏ GWorld bằng pattern đã được xác nhận cho game này."""
    try:
        module = pymem.process.module_from_name(pm.process_handle, PROCESS_NAME)
        # Pattern này đã được xác nhận là hoạt động cho game này
        pattern = rb'\x04\x00\x74\x26\x48\x8B\x05....\x48\x85\xC0\x74'
        
        addr = pymem.pattern.pattern_scan_module(pm.process_handle, module, pattern)

        if not addr:
            print("Không tìm thấy GWorld bằng pattern đã biết.")
            return None

        # Tính toán địa chỉ GWorld từ pattern đã tìm thấy
        relative_offset = struct.unpack('<i', pm.read_bytes(addr + 7, 4))[0]
        gworld_ptr_addr = addr + 11 + relative_offset
        return gworld_ptr_addr
        
    except Exception as e:
        print(f"Lỗi khi tìm GWorld: {e}")
        return None

def read_vector3(pm, address):
    """Đọc một FVector (3 float) từ địa chỉ."""
    try:
        x, y, z = struct.unpack('<fff', pm.read_bytes(address, 12))
        # Loại bỏ các giá trị vô lý
        if any(math.isnan(v) or math.isinf(v) or abs(v) > 10_000_000 for v in [x, y, z]):
            return None
        return (x, y, z)
    except:
        return None

def find_camera_location(pm, camera_cache_addr):
    """Quét CameraCache để tìm tọa độ hợp lệ."""
    cache_data = pm.read_bytes(camera_cache_addr, 1520) # Đọc toàn bộ CameraCache
    for offset in range(0, len(cache_data) - 12, 4): # Lặp qua mỗi 4 byte
        try:
            vec = read_vector3(pm, camera_cache_addr + offset)
            if vec and (vec[0] != 0 or vec[1] != 0 or vec[2] != 0):
                print(f"    -> Tìm thấy tọa độ Camera khả nghi tại Cache + {hex(offset)}")
                return vec
        except:
            continue
    return None

def distance(vec1, vec2):
    """Tính khoảng cách giữa 2 vector."""
    if not vec1 or not vec2: return float('inf')
    return math.sqrt(sum([(a - b) ** 2 for a, b in zip(vec1, vec2)]))

def main():
    try:
        pm = pymem.Pymem(PROCESS_NAME)
        print(f"Đã hook vào process: {PROCESS_NAME}")
    except pymem.exception.ProcessNotFound:
        print(f"Không tìm thấy process. Vui lòng chạy game trước.")
        return

    gworld_ptr = get_gworld_ptr(pm)
    
    if not gworld_ptr:
        print("Không tìm thấy GWorld. Dừng script.")
        return

    print(f"Tìm thấy GWorld Ptr tại: {hex(gworld_ptr)}")
    uworld = pm.read_longlong(gworld_ptr)
    print(f"UWorld: {hex(uworld)}")

    game_instance = pm.read_longlong(uworld + 0x180)
    local_players = pm.read_longlong(game_instance + 0x38)
    local_player = pm.read_longlong(local_players)
    player_controller = pm.read_longlong(local_player + 0x30)
    print(f"PlayerController: {hex(player_controller)}")

    camera_manager = pm.read_longlong(player_controller + OFFSET_PLAYERCONTROLLER_CAMERAMANAGER)
    camera_cache_addr = camera_manager + OFFSET_CAMERAMANAGER_CACHECAMERA
    
    print("Đang tìm vị trí Camera tham chiếu...")
    camera_location = find_camera_location(pm, camera_cache_addr)
    
    if not camera_location:
        print("KHÔNG THỂ TÌM THẤY VỊ TRÍ CAMERA HỢP LỆ. Dừng script.")
        return
    print(f"Vị trí Camera tham chiếu được xác định: {camera_location}\n")
    
    persistent_level = pm.read_longlong(uworld + 0x30)
    actors_tarray = persistent_level + 0x98
    actor_count = pm.read_int(actors_tarray + 0x8)
    actors_ptr_list = pm.read_longlong(actors_tarray)

    best_candidate = None
    min_dist = float('inf')

    # Tìm actor gần camera nhất
    for i in range(min(actor_count, 4000)):
        actor_ptr = pm.read_longlong(actors_ptr_list + i * 8)
        if not actor_ptr: continue
        root_component_ptr = pm.read_longlong(actor_ptr + OFFSET_ACTOR_ROOTCOMPONENT)
        if not root_component_ptr: continue
        actor_location = read_vector3(pm, root_component_ptr + OFFSET_SCENECOMPONENT_LOCATION)
        if not actor_location: continue
        
        dist = distance(camera_location, actor_location)
        if dist < min_dist:
            min_dist = dist
            best_candidate = actor_ptr

    if best_candidate and min_dist < 500:
        print(f"[*] ỨNG CỬ VIÊN TỐT NHẤT (PlayerPawn): {hex(best_candidate)} (khoảng cách: {min_dist:.2f} cm)")
        
        movement_comp = pm.read_longlong(best_candidate + OFFSET_CHARACTER_MOVEMENTCOMPONENT)
        if 0 < movement_comp < 0x800000000000:
             print(f"    -> Bằng chứng phụ: Tìm thấy MovementComponent tại {hex(movement_comp)}")
        
        print("\n" + "="*50)
        print("BẮT ĐẦU TRUY VẾT CHUỖI CON TRỎ (2 CẤP)...")
        print("="*50)
        
        controller_memory = pm.read_bytes(player_controller, 0x800) # Đọc 2KB
        path_found = False
        
        # Cấp 1: Con trỏ trực tiếp (như cũ)
        for offset1 in range(0, len(controller_memory) - 8, 8):
            ptr = struct.unpack('<Q', controller_memory[offset1:offset1+8])[0]
            if ptr == best_candidate:
                print(f"  => BINGO (Cấp 1): PlayerController + {hex(offset1)} -> Pawn")
                path_found = True

        # Cấp 2: Quét các đối tượng trung gian
        if not path_found:
            print("\nKhông tìm thấy con trỏ trực tiếp. Bắt đầu quét cấp 2...")
            for offset1 in range(0, len(controller_memory) - 8, 8):
                intermediate_ptr = struct.unpack('<Q', controller_memory[offset1:offset1+8])[0]
                
                # Bỏ qua con trỏ không hợp lệ
                if not (0x10000000000 < intermediate_ptr < 0x800000000000):
                    continue
                
                try:
                    # Đọc đối tượng trung gian
                    intermediate_memory = pm.read_bytes(intermediate_ptr, 0x800)
                    for offset2 in range(0, len(intermediate_memory) - 8, 8):
                        final_ptr = struct.unpack('<Q', intermediate_memory[offset2:offset2+8])[0]
                        if final_ptr == best_candidate:
                            print(f"  => BINGO (Cấp 2): PlayerController + {hex(offset1)} -> + {hex(offset2)} -> Pawn")
                            path_found = True
                except pymem.exception.MemoryReadError:
                    continue
                except Exception:
                    continue
        
        if not path_found:
             print("\nQuét 2 cấp hoàn tất, không tìm thấy đường đi đến Pawn.")

    else:
        print("Không tìm thấy ứng cử viên Pawn nào đủ gần camera.")
        
    input("\nNhấn Enter để thoát...")

if __name__ == "__main__":
    main() 
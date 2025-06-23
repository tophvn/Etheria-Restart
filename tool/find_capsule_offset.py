# ==============================================================================
# FIND CAPSULE COMPONENT OFFSET (Tìm Offset của Capsule Component)
# ==============================================================================
# Script này cố gắng tự động tìm offset của 'CapsuleComponent' bên trong đối tượng
# Pawn của người chơi. Nó thực hiện điều này bằng cách quét bộ nhớ của Pawn để
# tìm một con trỏ khớp với địa chỉ đã biết của CapsuleComponent.

import pymem
import pymem.process
import pymem.pattern
import struct
import time

PROCESS_NAME = "GameUE_cpp-Win64-Shipping.exe"

class FVector:
    def __init__(self, x=0.0, y=0.0, z=0.0):
        self.x = x
        self.y = y
        self.z = z

    def __str__(self):
        return f"X: {self.x:.2f}, Y: {self.y:.2f}, Z: {self.z:.2f}"

    def distance(self, other):
        return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2 + (self.z - other.z) ** 2) ** 0.5

def read_fvector(pm, address):
    try:
        val_bytes = pm.read_bytes(address, 12) # 3 floats * 4 bytes
        x, y, z = struct.unpack('fff', val_bytes)
        return FVector(x, y, z)
    except (struct.error, pymem.exception.MemoryReadError):
        return None
        
def read_float(pm, address):
    try:
        val_bytes = pm.read_bytes(address, 4)
        return struct.unpack('f', val_bytes)[0]
    except (struct.error, pymem.exception.MemoryReadError):
        return None

def is_valid_pointer(addr):
    return addr is not None and 0x100000000000 < addr < 0x7FFFFFFFFFFF

def find_gworld_with_validation(pm):
    """Find the GWorld address using a generic LEA pattern and validation."""
    try:
        game_module = pymem.process.module_from_name(pm.process_handle, PROCESS_NAME)
        if not game_module:
            print(f"Khong the tim thay module: {PROCESS_NAME}")
            return None

        # Generic pattern for LEA RAX, [rip+offset]
        pattern = rb'\x48\x8D\x0D....'
        
        # Scan for all occurrences
        addresses = pymem.pattern.pattern_scan_module(pm.process_handle, game_module, pattern, return_multiple=True)

        for addr in addresses:
            try:
                relative_offset = pm.read_int(addr + 3)
                gworld_ptr_addr = addr + 7 + relative_offset

                # Validation checks
                uworld_addr = pm.read_longlong(gworld_ptr_addr)
                if not is_valid_pointer(uworld_addr):
                    continue
                
                persistent_level_addr = pm.read_longlong(uworld_addr + 0x30)
                if not is_valid_pointer(persistent_level_addr):
                    continue

                actor_count = pm.read_int(persistent_level_addr + 0xA0)
                
                if 1 < actor_count < 20000:
                    print(f"  [+] Tim thay GWorld hop le tai: 0x{gworld_ptr_addr:X} (Actor Count: {actor_count})")
                    return gworld_ptr_addr # Success

            except (pymem.exception.MemoryReadError, struct.error):
                continue
        
        return None # Failed to find a valid GWorld
    except Exception as e:
        print(f"Loi khi tim GWorld: {e}")
        return None

def find_player_pawn_via_gamestate(pm, gworld_addr):
    """Tìm PlayerPawn thông qua GameState, một phương pháp đáng tin cậy hơn."""
    try:
        world_ptr = pm.read_longlong(gworld_addr)
        if not is_valid_pointer(world_ptr):
            return None, "GWorld chua hop le"

        # Lấy GameState từ UWorld (offset 0x120)
        game_state_ptr = pm.read_longlong(world_ptr + 0x120)
        if not is_valid_pointer(game_state_ptr):
            return None, "Khong tim thay GameState"

        # Lấy PlayerArray từ GameState (offset 0x238)
        player_array_ptr = pm.read_longlong(game_state_ptr + 0x238)
        player_count = pm.read_int(game_state_ptr + 0x238 + 8)

        if not is_valid_pointer(player_array_ptr) or player_count == 0:
            return None, f"PlayerArray khong hop le (Count: {player_count})"
        
        # Giả sử người chơi cục bộ là người đầu tiên trong mảng
        # Điều này thường đúng trong các game single-player
        first_player_state_ptr = pm.read_longlong(player_array_ptr)
        if not is_valid_pointer(first_player_state_ptr):
            return None, "Khong tim thay PlayerState dau tien"

        # Lấy Pawn từ PlayerState (offset 0x280)
        player_pawn_ptr = pm.read_longlong(first_player_state_ptr + 0x280)
        if not is_valid_pointer(player_pawn_ptr):
            return None, "Khong the lay Pawn tu PlayerState"

        # Đã tìm thấy!
        return player_pawn_ptr, None

    except Exception as e:
        return None, f"Loi trong luc tim PlayerPawn qua GameState: {e}"

def main():
    try:
        pm = pymem.Pymem(PROCESS_NAME)
        print(f"Da ket noi thanh cong den process: {PROCESS_NAME}")
    except pymem.exception.ProcessNotFound:
        print(f"Khong tim thay process {PROCESS_NAME}. Game da chay chua?")
        return

    print("\nBuoc 1: Tu dong tim GWorld voi logic xac thuc...")
    gworld_addr = find_gworld_with_validation(pm)
    if not gworld_addr:
        print("=> THAT BAI: Khong the tim thay GWorld hop le.")
        return
    print(f"=> THANH CONG: Tim thay GWorld tai: 0x{gworld_addr:X}")
    
    print("\nBuoc 2: Tu dong tim PlayerPawn (qua GameState)...")
    player_pawn_addr, error = find_player_pawn_via_gamestate(pm, gworld_addr)
    if error or not player_pawn_addr:
        print(f"=> THAT BAI: {error}")
        return
    print(f"=> THANH CONG: Tim thay PlayerPawn tai: 0x{player_pawn_addr:X}")
    
    print("-" * 50)
    print(f"Buoc 3: Bat dau quet PlayerPawn tai 0x{player_pawn_addr:X} de tim CapsuleComponent...")
    print("PHAM VI MO RONG: Chung ta se tim mot component co CapsuleRadius trong khoang (1.0, 500.0)")
    print("-" * 50)

    for offset in range(0x100, 0x800, 8):
        try:
            component_ptr = pm.read_longlong(player_pawn_addr + offset)
            if not is_valid_pointer(component_ptr): continue
            
            radius_addr = component_ptr + 0x484
            radius_value = read_float(pm, radius_addr)

            if radius_value is not None and 1.0 < radius_value < 500.0:
                print(f"!!! TIM THAY MATCH !!!")
                print(f"   - Tai offset: 0x{offset:X} cua PlayerPawn")
                print(f"   - Tim thay Component Pointer: 0x{component_ptr:X}")
                print(f"   - Component nay co CapsuleRadius = {radius_value:.2f} (nam o dia chi 0x{radius_addr:X})")
                print("-" * 50)
                print(f"=> KET LUAN: Offset cua CapsuleComponent co the la 0x{offset:X}")
                return

        except pymem.exception.MemoryReadError: continue
    
    print("=> THAT BAI: Da quet xong PlayerPawn nhung khong tim thay offset CapsuleComponent phu hop.")

if __name__ == "__main__":
    main() 
# ==============================================================================
# VERIFY OFFSETS (Xác minh các Offset)
# ==============================================================================
# Script này được sử dụng để xác thực một chuỗi các offset trong bộ nhớ.
# Nó bắt đầu từ một địa chỉ cơ sở và lần lượt đọc các con trỏ tại mỗi offset
# trong chuỗi, xác nhận rằng mỗi con trỏ là hợp lệ. Giúp gỡ lỗi con trỏ đa cấp.

import pymem
import pymem.process

def main():
    PROCESS_NAME = "GameUE_cpp-Win64-Shipping.exe"
    
    try:
        pm = pymem.Pymem(PROCESS_NAME)
        print(f"Da ket noi thanh cong den process: {PROCESS_NAME}")
    except pymem.exception.ProcessNotFound:
        print(f"Khong tim thay process {PROCESS_NAME}. Game da chay chua?")
        return

    pawn_address_str = input("Nhap dia chi PlayerPawn tu menu hack (vi du: 0x15AD8513B90): ")
    try:
        player_pawn_addr = int(pawn_address_str, 16)
    except ValueError:
        print("Dia chi khong hop le. Vui long su dung dinh dang hex (vi du: 0x...).")
        return
        
    print("-" * 40)
    print("BAT DAU KIEM TRA OFFSET:")
    print("-" * 40)

    # Buoc 1: Tim CapsuleComponent
    capsule_comp_offset = 0x290 # Doan cua chung ta
    try:
        capsule_comp_addr = pm.read_longlong(player_pawn_addr + capsule_comp_offset)
        print(f"[BUOC 1] Doc PlayerPawn (0x{player_pawn_addr:X}) + offset 0x{capsule_comp_offset:X}...")
        print(f"   => Tim thay CapsuleComponent tiem nang tai: 0x{capsule_comp_addr:X}")
        print(f"\n   -> HANH DONG: Trong Cheat Engine, them dia chi 0x{capsule_comp_addr:X} nay vao. Xem no co phai la CapsuleComponent khong (dua vao ten/kieu du lieu ma CE hien thi).")
    except Exception as e:
        print(f"LOI: Khong the doc bo nho tai PlayerPawn + 0x{capsule_comp_offset:X}. Error: {e}")
        print("   => Gợi ý: Offset 0x290 cho CapsuleComponent co the da SAI.")
        return

    # Buoc 2: Tim BodyInstance
    body_instance_offset = 0x2E0 # Doan cua chung ta
    body_instance_addr = capsule_comp_addr + body_instance_offset
    print(f"\n[BUOC 2] Tu CapsuleComponent (0x{capsule_comp_addr:X}), gia su FBodyInstance bat dau tai offset 0x{body_instance_offset:X}.")
    print(f"   => Dia chi BodyInstance se la: 0x{body_instance_addr:X}")
    print(f"\n   -> HANH DONG: Trong Cheat Engine, quay lai dia chi CapsuleComponent (0x{capsule_comp_addr:X}) va chon 'Browse this memory region'. Di xuong offset +2E0. Cau truc o day co giong FBodyInstance khong?")

    # Buoc 3: Tim CollisionEnabled
    collision_enabled_offset = 0x20 # Doan cua chung ta
    collision_enabled_addr = body_instance_addr + collision_enabled_offset
    print(f"\n[BUOC 3] Tu BodyInstance (0x{body_instance_addr:X}), gia su CollisionEnabled o offset 0x{collision_enabled_offset:X}.")
    print(f"   => Dia chi cuoi cung cua CollisionEnabled la: 0x{collision_enabled_addr:X}")
    print(f"\n   -> HANH DONG: Theo doi dia chi 0x{collision_enabled_addr:X} nay trong Cheat Engine. Khi ban thay doi gia tri cua no thanh 1, nhan vat co the di xuyen tuong khong?")
    print("-" * 40)

    print("\n=> KET LUAN: Neu buoc nao that bai, offset duoc su dung trong buoc do co kha nang cao la sai. Hay bao cho toi biet buoc nao sai nhe!")

if __name__ == "__main__":
    main() 
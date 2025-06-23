# ==============================================================================
# FIND FUNCTION PATTERN (Tìm Pattern của Hàm)
# ==============================================================================
# Script này tìm kiếm trong bộ nhớ của game để lấy chuỗi byte đặc trưng (signature)
# của một hàm cụ thể bằng tên của nó (ví dụ: 'UGameplayStatics::GetGameState').
# Điều này cho phép gọi hàm từ cheat ngay cả khi địa chỉ của nó thay đổi.

import pymem
import pymem.process
import psutil
import struct
import pymem.pattern

# This script is designed to find a pattern for a specific function address.
# We will use this to find a reliable pattern for UKismetSystemLibrary::GetDisplayName

def get_process_by_name(name):
    """Find a process PID by its name."""
    for proc in psutil.process_iter(['pid', 'name']):
        if proc.info['name'] and name.lower() in proc.info['name'].lower():
            return proc.info['pid']
    return None

def find_pattern_for_address(pm, module, target_func_addr):
    """Finds a unique byte pattern for a given function address."""
    print(f"\nLooking for a pattern for function at 0x{target_func_addr:X}...")
    try:
        module_bytes = pm.read_bytes(module.lpBaseOfDll, module.SizeOfImage)
        # Calculate the offset of the function from the module base
        func_offset = target_func_addr - module.lpBaseOfDll
        
        # Extract 16 bytes for the pattern starting from the function address
        if func_offset > 0 and func_offset < len(module_bytes) - 16:
            pattern_bytes = module_bytes[func_offset:func_offset+16]
            pattern_str = ' '.join(f'{b:02X}' for b in pattern_bytes)
            
            print(f"  [+] Found a potential pattern!")
            print(f"      - Address: {hex(target_func_addr)}")
            print(f"      - Pattern: {pattern_str}")
            return pattern_str
        else:
            print("  [-] Function address is outside the module's range.")
            return None
            
    except Exception as e:
        print(f"  [-] An error occurred while finding pattern: {e}")
        return None

def main():
    try:
        pm = pymem.Pymem(PROCESS_NAME)
        print(f"Da ket noi thanh cong den process: {PROCESS_NAME}")
    except pymem.exception.ProcessNotFound:
        print(f"Khong tim thay process {PROCESS_NAME}. Game da chay chua?")
        return

    game_module = pymem.process.module_from_name(pm.process_handle, PROCESS_NAME)
    if not game_module:
        print(f"Khong the tim thay module: {PROCESS_NAME}")
        return

    # Pattern cho hàm UGameplayStatics::GetGameState
    # 48 8B C4 48 89 58 20 44 89 40 18 48 89 50 10 48 89 48 08 55 56 57 41 54 41 55 41 56 41 57 48 8D 68 A1
    pattern = rb"\x48\x8B\xC4\x48\x89\x58\x20\x44\x89\x40\x18\x48\x89\x50\x10\x48\x89\x48\x08\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x8D\x68\xA1"
    
    print("Dang quet de tim dia chi cua ham 'GetGameState'...")
    
    try:
        addr = pymem.pattern.pattern_scan_module(pm.process_handle, game_module, pattern)

        if addr:
            print("-" * 50)
            print(f"[THUC HIEN] TIM THAY HAM 'GetGameState'!")
            print(f"   => Dia chi trong bo nho: 0x{addr:X}")
            
            # Tính toán offset so với base address của module
            offset = addr - game_module.lpBaseOfDll
            print(f"   => Base address cua module: 0x{game_module.lpBaseOfDll:X}")
            print(f"   => Offset: 0x{offset:X}")
            print("-" * 50)
            print("\n=> HANH DONG: Hay cung cap cho toi offset nay (0x" + f"{offset:X}" + ") de toi cap nhat vao code C++ nhe.")

        else:
            print("=> THAT BAI: Khong tim thay pattern cua ham 'GetGameState'.")
            print("   Co the pattern da thay doi trong phien ban game nay.")

    except Exception as e:
        print(f"An unexpected error occurred: {e}")

if __name__ == "__main__":
    # --- CONFIGURATION ---
    PROCESS_NAME = "GameUE_cpp-Win64-Shipping.exe"
    # This is the function address for GetDisplayName from your GObjects dump.
    # We will assume it's still valid for this run to find its pattern.
    # You might need to find this address again if the game was restarted.
    # For now, let's try with a common pattern search instead of a fixed address.
    
    print(f"Searching for process: {PROCESS_NAME}")
    pid = get_process_by_name(PROCESS_NAME)
    
    if not pid:
        print(f"Process '{PROCESS_NAME}' not found. Make sure the game is running.")
        exit(1)
        
    print(f"Process found! PID: {pid}")
    
    try:
        pm = pymem.Pymem(pid)
        module = pymem.process.module_from_name(pm.process_handle, PROCESS_NAME)
        
        print(f"Scanning module: {module.name} (Base: {hex(module.lpBaseOfDll)}, Size: {hex(module.SizeOfImage)})")
        
        # Instead of finding pattern by address (which changes), let's find the function by a pattern
        # This is a common pattern for the start of UKismetSystemLibrary::GetDisplayName
        # Pymem requires the pattern in AOB (Array of Bytes) string format.
        pattern_aob = rb"\x48\x89\x5C\x24\x00\x48\x89\x74\x24\x00\x57\x48\x83\xEC\x20\x48\x8B\xD9\x48\x8B\xF1"
        
        func_addr = pymem.pattern.pattern_scan_module(pm.process_handle, module, pattern_aob)

        if func_addr:
            print(f"\n[SUCCESS] Found UKismetSystemLibrary::GetDisplayName function at: 0x{func_addr:X}")
            print(f"          You can now use this address in the C++ cheat.")
        else:
            print(f"\n[FAILED] Could not find the function pattern for GetDisplayName.")
            
        pm.close_process()
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

    main() 
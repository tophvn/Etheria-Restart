# ==============================================================================
# SCAN GNAME POOL (Quét tìm GName Pool)
# ==============================================================================
# Script này quét bộ nhớ của game để xác định địa chỉ bắt đầu của GName pool
# (FNamePool). GName pool là một mảng toàn cục lưu trữ tất cả các chuỗi
# (như tên đối tượng, thuộc tính, v.v.) được engine sử dụng.

import pymem
import pymem.process
import psutil
import struct

def get_process_by_name(name):
    """Find a process PID by its name."""
    for proc in psutil.process_iter(['pid', 'name']):
        if proc.info['name'] and name.lower() in proc.info['name'].lower():
            return proc.info['pid']
    return None

def parse_pattern(pattern_str):
    """Parse a pattern string like '48 8D ? ? ?' into bytes and mask."""
    pattern = []
    mask = ""
    for byte in pattern_str.split():
        if byte == "??" or byte == "?":
            pattern.append(0x00)
            mask += '?'
        else:
            pattern.append(int(byte, 16))
            mask += 'x'
    return bytes(pattern), mask

def pattern_scan_module(pm, module, pattern, mask):
    """Scan for a pattern in a module."""
    try:
        module_bytes = pm.read_bytes(module.lpBaseOfDll, module.SizeOfImage)
    except pymem.exception.MemoryReadError:
        return None
        
    pattern_len = len(mask)
    for i in range(len(module_bytes) - pattern_len):
        found = True
        for j in range(pattern_len):
            if mask[j] == 'x' and module_bytes[i + j] != pattern[j]:
                found = False
                break
        if found:
            return module.lpBaseOfDll + i
    return None

def find_gname(pm, module):
    """Find the GName address using a pattern."""
    # This is a common pattern for GName/GNamePool on UE4.26
    pattern_str = "48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B D6"
    pattern, mask = parse_pattern(pattern_str)
    
    addr = pattern_scan_module(pm, module, pattern, mask)
    if not addr:
        return None, -1

    rel_offset = struct.unpack("<i", pm.read_bytes(addr + 3, 4))[0]
    gname_addr = addr + 7 + rel_offset
    
    # After finding the address, try to read the CurrentBlock value (offset +0x8)
    try:
        current_block = pm.read_int(gname_addr + 0x8)
    except:
        current_block = -1 # Failed to read
        
    return gname_addr, current_block

if __name__ == "__main__":
    PROCESS_NAME = "GameUE_cpp-Win64-Shipping.exe"
    
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
        
        gname_addr, current_block = find_gname(pm, module)
        
        if gname_addr:
            print(f"\n[SUCCESS] GName/GNamePool Address found at: 0x{gname_addr:X}")
            if current_block != -1:
                print(f"          Value at offset +0x8 (CurrentBlock?): {current_block}")
            else:
                print("          Could not read the value at offset +0x8.")
        else:
            print("\n[FAILED] GName/GNamePool pattern not found. The pattern might be outdated.")
            
        pm.close_process()
    except (pymem.exception.ProcessNotFound, pymem.exception.CouldNotOpenProcess) as e:
        print(f"Error: Could not open process with PID {pid}. Try running the script as an administrator. Details: {e}")
    except Exception as e:
        print(f"An unexpected error occurred: {e}") 
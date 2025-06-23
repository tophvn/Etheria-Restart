# ==============================================================================
# FIND GWORLD PATTERN (Tìm Pattern của GWorld)
# ==============================================================================
# Script này thực hiện một cuộc tìm kiếm ngược. Với một địa chỉ GWorld hợp lệ
# đã biết, nó sẽ quét bộ nhớ của game để tìm ra chỉ thị/chuỗi byte đã tham chiếu
# đến địa chỉ này. Điều này giúp tìm ra một signature đáng tin cậy cho GWorld.

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

def find_instruction_referencing(pm, module, target_addr):
    """
    Scans the module's memory to find an instruction (LEA or MOV)
    that references the target_addr.
    """
    print(f"\nScanning for instructions that reference 0x{target_addr:X}...")
    
    try:
        module_bytes = pm.read_bytes(module.lpBaseOfDll, module.SizeOfImage)
    except pymem.exception.MemoryReadError:
        print(f"Error: Could not read memory of module {module.name}. Try running as administrator.")
        return None, None

    # We are looking for RIP-relative addressing, common in x64.
    # The instructions are typically:
    # LEA RAX, [rip + offset]  (Opcode: 48 8D 05)
    # MOV RAX, [rip + offset]  (Opcode: 48 8B 05)
    
    opcodes = {
        "LEA": b'\x48\x8D\x05',
        "MOV": b'\x48\x8B\x05'
    }

    for instruction_name, opcode_bytes in opcodes.items():
        for i in range(len(module_bytes) - 7): # 7 bytes is the length of the instruction
            if module_bytes[i:i+3] == opcode_bytes:
                instruction_addr = module.lpBaseOfDll + i
                
                # The next 4 bytes are the 32-bit signed relative offset
                rel_offset = struct.unpack("<i", module_bytes[i+3:i+7])[0]
                
                # The effective address is instruction_address + instruction_length + offset
                effective_addr = instruction_addr + 7 + rel_offset
                
                if effective_addr == target_addr:
                    print(f"  [+] Found a match!")
                    print(f"      - Instruction:      {instruction_name} RAX, [rip+...]")
                    print(f"      - At Address:       {hex(instruction_addr)}")
                    
                    # Extract a pattern around the found instruction
                    pattern_start = max(0, i - 4)
                    pattern_end = min(len(module_bytes), i + 7 + 4)
                    pattern_bytes_list = [f"{b:02X}" for b in module_bytes[pattern_start:pattern_end]]
                    
                    # Create a human-readable pattern with wildcards
                    wildcard_pattern = list(pattern_bytes_list)
                    # The offset part is what changes, so we wildcard it.
                    wildcard_pattern[7:11] = ['??'] * 4 
                    
                    print(f"      - Bytes around it:  {' '.join(pattern_bytes_list)}")
                    print(f"      - Suggested Pattern:  {' '.join(wildcard_pattern)}")
                    
                    return instruction_addr, ' '.join(wildcard_pattern)

    return None, None


if __name__ == "__main__":
    # --- CONFIGURATION ---
    PROCESS_NAME = "GameUE_cpp-Win64-Shipping.exe"
    # This is the KNOWN GOOD address from your tool
    KNOWN_GWORLD_ADDR = 0x7FF6B367E088 
    # --- END CONFIGURATION ---

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
        
        instruction_addr, pattern = find_instruction_referencing(pm, module, KNOWN_GWORLD_ADDR)
        
        if instruction_addr and pattern:
            print(f"\n[SUCCESS] Found the code that references GWorld.")
            print(f"          Use this pattern in your C++ cheat: \"{pattern}\"")
        else:
            print(f"\n[FAILED] Could not find any instruction referencing 0x{KNOWN_GWORLD_ADDR:X}.")
            print(f"          The address might be calculated in a more complex way.")
            
        pm.close_process()
    except (pymem.exception.ProcessNotFound, pymem.exception.CouldNotOpenProcess) as e:
        print(f"Error: Could not open process with PID {pid}. Try running the script as an administrator. Details: {e}")
    except Exception as e:
        print(f"An unexpected error occurred: {e}") 
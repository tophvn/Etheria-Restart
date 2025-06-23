cmake_minimum_required(VERSION 3.16)
project(HackCheatTool)

# Set the C++ standard to 20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Force the use of /Z7 for debug information to avoid PDB file locking issues.
# This embeds debug info into .obj files instead of a shared .pdb file.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /Z7")
set(CMAKE_CXX_FLAGS_DEBUG "/Z7")
set(CMAKE_CXX_FLAGS_RELEASE "/Z7")

# Add source files
set(SOURCES
    HackMain.cpp
    ImGui/imgui.cpp
    ImGui/imgui_demo.cpp
    ImGui/imgui_draw.cpp
    ImGui/imgui_tables.cpp
    ImGui/imgui_widgets.cpp
    imgui/backends/imgui_impl_win32.cpp
    imgui/backends/imgui_impl_dx11.cpp
    imgui/backends/imgui_impl_dx9.cpp
    minhook-master/src/buffer.cpp
    minhook-master/src/hook.cpp
    minhook-master/src/trampoline.cpp
    minhook-master/src/hde/hde32.c
    minhook-master/src/hde/hde64.cpp
)

# Create the DLL
add_library(${PROJECT_NAME} SHARED ${SOURCES})

# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE
    ImGui
    imgui/backends
    minhook-master/include
    minhook-master/src/hde
    .
    Dump/CppSDK/SDK
)

# Link libraries
target_link_libraries(${PROJECT_NAME} 
    d3d11.lib
    d3d9.lib
    d3dcompiler.lib
    dxgi.lib
    dinput8.lib
    xinput.lib
    winmm.lib
) 
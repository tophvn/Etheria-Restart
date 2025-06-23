#include <windows.h>
#include <d3d11.h>
#include <d3d9.h>
#include <dxgi.h>
#include <imgui.h>
#include <imgui_impl_win32.h>
#include <imgui_impl_dx11.h>
#include <imgui_impl_dx9.h>
#include <MinHook.h>
#include <fstream>
#include <TlHelp32.h>
#include "HackConfig.h"
#include <Psapi.h>
#include <vector>
#include <set>
#include <sstream>
#include <map>
#include <unordered_map>
#include <cwchar>
#include <string> // For std::string
#include <cmath>
#pragma comment(lib, "d3d11.lib")

// Khai báo tiền phương để sửa lỗi biên dịch
std::string GetNameByIndex_Safe(int32_t nameIndex);

// Prototype cho helper lấy tên class/object - SẼ BỊ XÓA
// void ReadStringFromUObjectName(uintptr_t uobject, char* out, size_t outSize);

// ====================================================================================
// == KHAI BÁO BIẾN TOÀN CỤC VÀ CON TRỎ HÀM ==
// ====================================================================================

// Con trỏ và địa chỉ
uintptr_t GWorldAddr = 0;
uintptr_t GLocalPlayerController = 0;
uintptr_t GLocalPlayerPawn = 0;
uintptr_t GLocalPlayerMovementComponent = 0;

// Handle to our own DLL module
static HMODULE g_hModule = NULL;

// Map để lưu tên từ FNames.txt
static std::unordered_map<int32_t, std::string> g_nameMap;
static bool g_nameMapLoaded = false;

// Trạng thái hook và UI
static ID3D11Device* g_pd3dDevice = NULL;
static ID3D11DeviceContext* g_pd3dDeviceContext = NULL;
static IDXGISwapChain* g_pSwapChain = NULL;
static ID3D11RenderTargetView* g_mainRenderTargetView = NULL;
static HWND g_hWindow = NULL;
static WNDPROC g_pOldWndProc = NULL;
static bool showMenu = true;
static bool initialized = false;
static int rendererType = 0; // 0=none, 1=DX11, 2=DX9

// Trạng thái ESP
static bool showESP = false;
static std::set<uintptr_t> selectedActors;
static float GLocalPlayerPos[3] = { 0.0f, 0.0f, 0.0f };

// Trạng thái Speed Hack
static bool speedHack = false;
static float speedValue = 3.0f;
static float originalTimeDilation = 1.0f;

// Định nghĩa kiểu con trỏ hàm hook
typedef HRESULT(__stdcall* Present)(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef HRESULT(__stdcall* EndScene)(IDirect3DDevice9* pDevice);

// Con trỏ hàm hook
Present oPresent = nullptr;
EndScene oEndScene = nullptr;

// Forward declaration cho các hàm
void ApplyWorldHacks();
void DrawESP();
void LoadFNamesMap();
LRESULT CALLBACK hkWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

// Hàm helper chỉ đọc memory và trả về kiểu dữ liệu đơn giản để tránh lỗi C2712.
int32_t GetNameIndex_Safe(uintptr_t actor) {
    __try {
        return *(int32_t*)(actor + 0x18);
    }
    __except (EXCEPTION_EXECUTE_HANDLER) {
        return -1; // Lỗi, trả về giá trị sentinel
    }
}

// ====================================================================================
// == CÁC CẤU TRÚC DỮ LIỆU GAME ==
// ====================================================================================

struct MyTArray {
    uintptr_t data;
    int32_t count;
    int32_t max;
};

struct MyULevel {
    char pad_0[0x98];
    MyTArray Actors;
};

struct MyUWorld {
    char pad_0[0x30];
    MyULevel* PersistentLevel;
};

// AActor và USceneComponent sử dụng offset đã được xác minh
struct MyAActor {
    char pad_0[0x130];
    uintptr_t RootComponent; // offset 0x130
};

struct MyUSceneComponent {
    char pad_0[0x11c];
    float RelativeLocation[3]; // offset 0x11c
};

// Thêm các cấu trúc cần thiết
struct MyUGameInstance {
    char pad_0[0x38];
    MyTArray LocalPlayers; // offset 0x38
};

struct MyULocalPlayer {
    char pad_0[0x30];
    uintptr_t PlayerController; // offset 0x30
};

struct FVector {
    float X, Y, Z;
};

// Enums cho logic hack, dựa trên file dump
enum EMovementMode : uint8_t {
    MOVE_None = 0,
    MOVE_Walking = 1,
    MOVE_NavWalking = 2,
    MOVE_Falling = 3,
    MOVE_Swimming = 4,
    MOVE_Flying = 5,
    MOVE_Custom = 6,
    MOVE_MAX = 7
};

enum ECollisionEnabled : uint8_t {
    NoCollision = 0,
    QueryOnly = 1,
    PhysicsOnly = 2,
    QueryAndPhysics = 3,
};

// ====================================================================================
// == CÁC HÀM HELPER VÀ LOGIC HACK ==
// ====================================================================================

bool GetActorData_Safe(MyTArray* actorArray, int index, uintptr_t* outActorAddr, uintptr_t* outRootComp)
{
    __try
    {
        uintptr_t actorAddress = ((uintptr_t*)actorArray->data)[index];
        if (!actorAddress || actorAddress < 0x10000000000) return false;

        *outActorAddr = actorAddress;
        *outRootComp = *(uintptr_t*)(actorAddress + 0x130);
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        return false;
    }
}

void ApplySpeedHack(bool enable) {
    if (!GWorldAddr) return;
    MyUWorld* world = *(MyUWorld**)GWorldAddr;
    if (!world) return;
    MyULevel* level = world->PersistentLevel;
    if (!level) return;
    uintptr_t worldSettings = *(uintptr_t*)((uintptr_t)level + 0x258);
    if (!worldSettings) {
        return;
    }
    float* timeDilation = (float*)(worldSettings + 0x2e8);
    if (!timeDilation) {
        return;
    }
    if (enable) {
        originalTimeDilation = *timeDilation;
        *timeDilation = speedValue; // Dùng giá trị từ slider
    } else {
        *timeDilation = originalTimeDilation;
    }
}

bool ReadFVector_Safe(uintptr_t address, FVector* outVector) {
    __try {
        *outVector = *(FVector*)address;
        return true;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return false;
    }
}

float VectorDistance(const FVector& v1, const FVector& v2) {
    return sqrt(pow(v1.X - v2.X, 2) + pow(v1.Y - v2.Y, 2) + pow(v1.Z - v2.Z, 2));
}

// Tái cấu trúc để sử dụng hàm helper, sửa lỗi C2712 còn lại.
std::string GetNameFromActor(uintptr_t actor) {
    if (!actor) return "NoActor";

    int32_t nameIndex = GetNameIndex_Safe(actor);

    if (nameIndex == -1) {
        return "AccessViolation";
    }
    
    return GetNameByIndex_Safe(nameIndex);
}

// Hàm helper để kiểm tra xem actor có phải là AI Controller không
bool IsAIController(uintptr_t actor) {
    if (!actor) return false;
    std::string name = GetNameFromActor(actor);
    // Tên class chính xác có thể là AAIController_C hoặc tương tự
    return name.find("AIController") != std::string::npos;
}

// Helper an toàn cho MovementMode (offset mới 0x360)
EMovementMode ReadMovementMode(uintptr_t movementComp) {
    __try { return *(EMovementMode*)(movementComp + 0x360); }
    __except (EXCEPTION_EXECUTE_HANDLER) { return EMovementMode::MOVE_None; }
}
void WriteMovementMode(uintptr_t movementComp, EMovementMode mode) {
    __try { *(EMovementMode*)(movementComp + 0x360) = mode; }
    __except (EXCEPTION_EXECUTE_HANDLER) {}
}
// Helper an toàn cho CollisionEnabled
ECollisionEnabled ReadCollisionEnabled(uintptr_t capsuleComp) {
    __try { return *(ECollisionEnabled*)(capsuleComp + 0x130 + 0x19); }
    __except (EXCEPTION_EXECUTE_HANDLER) { return ECollisionEnabled::NoCollision; }
}
void WriteCollisionEnabled(uintptr_t capsuleComp, ECollisionEnabled val) {
    __try { *(ECollisionEnabled*)(capsuleComp + 0x130 + 0x19) = val; }
    __except (EXCEPTION_EXECUTE_HANDLER) {}
}
// Helper an toàn cho bIsActive của component
bool ReadComponentActive(uintptr_t comp) {
    __try { return *(bool*)(comp + 0x8A); }
    __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
}
void WriteComponentActive(uintptr_t comp, bool val) {
    __try { *(bool*)(comp + 0x8A) = val; }
    __except (EXCEPTION_EXECUTE_HANDLER) {}
}

// Helper an toàn để đọc con trỏ, chống crash
uintptr_t ReadPointer(uintptr_t base, uintptr_t offset) {
             __try {
        if (!base) return 0;
        return *(uintptr_t*)(base + offset);
             } __except (EXCEPTION_EXECUTE_HANDLER) {
        return 0;
        }
    }

void FindLocalPlayer() {
    // Reset các con trỏ
    GLocalPlayerController = 0;
    GLocalPlayerPawn = 0;
    GLocalPlayerMovementComponent = 0;

    if (!GWorldAddr || !*(uintptr_t*)GWorldAddr) return;
    MyUWorld* world = *(MyUWorld**)GWorldAddr;
    if (!world || !world->PersistentLevel) return;

    // Bước 1: Lấy PlayerController và vị trí Camera
    uintptr_t gameInstancePtr = 0;
    uintptr_t localPlayerPtr = 0;
    __try {
        gameInstancePtr = *(uintptr_t*)((uintptr_t)world + 0x180);
        if (!gameInstancePtr) return;
        
        MyUGameInstance* gameInstance = (MyUGameInstance*)gameInstancePtr;
        if (gameInstance->LocalPlayers.count == 0) return;
        
        localPlayerPtr = *(uintptr_t*)(gameInstance->LocalPlayers.data);
        if (!localPlayerPtr) return;
        
        MyULocalPlayer* localPlayer = (MyULocalPlayer*)localPlayerPtr;
        GLocalPlayerController = localPlayer->PlayerController;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return;
    }

    if (!GLocalPlayerController) return;

    FVector cameraLocation = { 0 };
    __try {
        uintptr_t cameraManager = *(uintptr_t*)(GLocalPlayerController + 0x2b8);
        if (!cameraManager) return;
        uintptr_t cameraCache = cameraManager + 0x290;
        uintptr_t povLocationAddr = cameraCache + 0x20;
        if (!ReadFVector_Safe(povLocationAddr, &cameraLocation)) return;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return;
    }

    // Bước 2 & 3: Quét và tìm actor gần nhất MÀ CÓ MovementComponent
    MyTArray actors = world->PersistentLevel->Actors;
    float minDistance = FLT_MAX;
    uintptr_t bestPawn = 0;
    uintptr_t bestMovementComponent = 0;

    for (int i = 0; i < actors.count; ++i) {
        uintptr_t actor = 0;
        uintptr_t rootComp = 0;
        FVector actorLocation = { 0 };

        if (GetActorData_Safe(&actors, i, &actor, &rootComp)) {
            if (rootComp && ReadFVector_Safe(rootComp + 0x11c, &actorLocation)) {
                float dist = VectorDistance(cameraLocation, actorLocation);
                if (dist < minDistance && dist < 500.0f) { // Chỉ xét các actor trong bán kính 5m
                    // Kiểm tra xem actor này có MovementComponent hợp lệ không
                    __try {
                        uintptr_t movementComponent = *(uintptr_t*)(actor + 0x288);
                        // Điều kiện kiểm tra con trỏ hợp lệ (lớn hơn 64KB)
                        if (movementComponent > 0x10000) { 
                            minDistance = dist;
                            bestPawn = actor;
                            bestMovementComponent = movementComponent;
                        }
                    } __except (EXCEPTION_EXECUTE_HANDLER) {
                        continue;
                    }
                }
            }
        }
    }

    // Bước 4: Gán các con trỏ đã được xác minh
    if (bestPawn) {
        GLocalPlayerPawn = bestPawn;
        GLocalPlayerMovementComponent = bestMovementComponent;
    }
}

// ====================================================================================
// == LOGIC GIAO DIỆN (UI) VÀ ESP ==
// ====================================================================================

void DrawESP() {
    ImGui::Begin("ESP", nullptr, ImGuiWindowFlags_AlwaysVerticalScrollbar | ImGuiWindowFlags_NoCollapse);

    if (!GWorldAddr || !*(uintptr_t*)GWorldAddr) {
        ImGui::Text("GWorld is not ready.");
        ImGui::End();
        return;
    }

    MyUWorld* world = *(MyUWorld**)GWorldAddr;
    if (!world || !world->PersistentLevel) {
        ImGui::Text("PersistentLevel is NULL.");
        ImGui::End();
        return;
    }

    MyTArray* actorArray = &world->PersistentLevel->Actors;
    if (!actorArray || actorArray->count <= 0 || !actorArray->data) {
        ImGui::Text("Actor array is invalid or empty.");
        ImGui::End();
        return;
    }

    if (ImGui::BeginChild("ESPList", ImVec2(0, 0), true)) {
        int count = actorArray->count;
        int maxLines = 500;
        if (count > maxLines) {
            ImGui::TextColored(ImVec4(1, 0.5, 0, 1), "Warning: Displaying %d/%d actors", maxLines, count);
        }

        for (int i = 0; i < count && i < maxLines; ++i) {
            uintptr_t actorAddr = 0;
            uintptr_t rootComp = 0;

            if (GetActorData_Safe(actorArray, i, &actorAddr, &rootComp))
            {
                float* pos = nullptr;
                if (rootComp && rootComp > 0x10000000000) {
                     pos = (float*)(rootComp + 0x11c);
                }

                // Lấy name index và tên của actor
                int32_t nameIndex = GetNameIndex_Safe(actorAddr);
                std::string actorName = GetNameByIndex_Safe(nameIndex);

                // Cập nhật vị trí player local (nếu có)
                if (pos) {
                    // Giả sử player có vị trí khác 0,0,0
                    if (GLocalPlayerPos[0] == 0.0f && GLocalPlayerPos[1] == 0.0f && GLocalPlayerPos[2] == 0.0f) {
                        GLocalPlayerPos[0] = pos[0];
                        GLocalPlayerPos[1] = pos[1];
                        GLocalPlayerPos[2] = pos[2];
                    }
                }

                float distance = 0.0f;
                if (pos && (GLocalPlayerPos[0] != 0.0f || GLocalPlayerPos[1] != 0.0f))
                {
                    float dx = GLocalPlayerPos[0] - pos[0];
                    float dy = GLocalPlayerPos[1] - pos[1];
                    float dz = GLocalPlayerPos[2] - pos[2];
                    distance = sqrt(dx * dx + dy * dy + dz * dz) / 100.0f;
                }

                char buf[512];
                if (pos) {
                    sprintf_s(buf, "[%d] %s (%.1fm) - Pos: %.1f, %.1f, %.1f", 
                             i, actorName.c_str(), distance, pos[0], pos[1], pos[2]);
                } else {
                    sprintf_s(buf, "[%d] %s (No Position)", i, actorName.c_str());
                }

                ImGui::Text("%s", buf);
            } else {
                ImGui::TextColored(ImVec4(1, 0, 0, 1), "[%d] EXCEPTION reading actor data.", i);
            }
        }
        ImGui::EndChild();
    }
    ImGui::End();
}

void RenderMenu() {
    ImGui::Begin("Hack Menu", &showMenu, ImGuiWindowFlags_AlwaysAutoResize);

    ImGui::Text("Game Hack Tool");
    ImGui::Separator();

    // Chạy logic tìm player và world
    FindLocalPlayer();
    
    // Hiển thị con trỏ (có thể giữ lại hoặc xóa tùy bạn)
    ImGui::Text("PlayerController: 0x%p", (void*)GLocalPlayerController);
    ImGui::Text("PlayerPawn: 0x%p", (void*)GLocalPlayerPawn);
    ImGui::Text("MovementComponent: 0x%p", (void*)GLocalPlayerMovementComponent);
    ImGui::Separator();

    // Hàng rào bảo vệ: Kiểm tra world đã sẵn sàng chưa
    MyUWorld* world = GWorldAddr ? *(MyUWorld**)GWorldAddr : nullptr;
    bool worldValid = world && world->PersistentLevel;

    // Vô hiệu hóa các nút điều khiển nếu world chưa sẵn sàng
    ImGui::BeginDisabled(!worldValid);

    ImGui::Checkbox("ESP", &showESP);
    ImGui::SameLine();
    ImGui::Checkbox("Speed Hack", &speedHack);
    ImGui::SameLine();
    ImGui::SliderFloat("Speed", &speedValue, 1.0f, 10.0f, "%.1f");

    ImGui::EndDisabled();

    ImGui::End();
    
    // Hàng rào bảo vệ: Chỉ gọi các hàm hack khi world đã sẵn sàng
    if (worldValid) {
        if (showESP) {
            DrawESP();
        }
        ApplySpeedHack(speedHack);
    }
}

LRESULT CALLBACK hkWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    if (uMsg == WM_KEYDOWN) {
        if (wParam == VK_INSERT) {
            showMenu = !showMenu;
            return true;
        }
        if (wParam == VK_F9) {
            showESP = !showESP;
            return true;
        }
    }
    if (showMenu && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
        return true;
    return CallWindowProc(g_pOldWndProc, hWnd, uMsg, wParam, lParam);
}

HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
    // Khởi tạo ImGui và render target chỉ 1 lần
    if (!initialized)
    {
        DXGI_SWAP_CHAIN_DESC sd;
        if (SUCCEEDED(pSwapChain->GetDesc(&sd)))
        {
            g_hWindow = sd.OutputWindow;
            ID3D11Device* pDevice = nullptr;
            ID3D11DeviceContext* pContext = nullptr;
            if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
            {
                pDevice->GetImmediateContext(&pContext);
                g_pd3dDevice = pDevice;
                g_pd3dDeviceContext = pContext;
                g_pSwapChain = pSwapChain;
                if (!g_mainRenderTargetView)
                {
                    ID3D11Texture2D* pBackBuffer = nullptr;
                    if (SUCCEEDED(pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer)))
                    {
                        pDevice->CreateRenderTargetView(pBackBuffer, NULL, &g_mainRenderTargetView);
                        pBackBuffer->Release();
                    }
                }
                g_pOldWndProc = (WNDPROC)SetWindowLongPtr(g_hWindow, GWLP_WNDPROC, (LONG_PTR)hkWndProc);
                if (ImGui::GetCurrentContext() == nullptr) {
                    ImGui::CreateContext();
                    ImGuiIO& io = ImGui::GetIO();
                    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
                    ImGui::StyleColorsDark();
                    ImGui_ImplWin32_Init(g_hWindow);
                    ImGui_ImplDX11_Init(pDevice, pContext);
                }
                initialized = true;
                rendererType = 1;
            }
        }
    }
    // Render ImGui đúng 1 lần mỗi frame khi showMenu
    if (initialized && rendererType == 1 && showMenu)
    {
        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();
        RenderMenu();
        ImGui::Render();
        g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    }
    return oPresent(pSwapChain, SyncInterval, Flags);
}

HRESULT __stdcall hkEndScene(IDirect3DDevice9* pDevice)
{
    if (!initialized && rendererType == 0)
    {
        try
        {
            D3DDEVICE_CREATION_PARAMETERS params;
            if (SUCCEEDED(pDevice->GetCreationParameters(&params)))
            {
                g_hWindow = params.hFocusWindow;
                g_pOldWndProc = (WNDPROC)SetWindowLongPtr(g_hWindow, GWLP_WNDPROC, (LONG_PTR)hkWndProc);
                if (ImGui::GetCurrentContext() == nullptr) {
                    ImGui::CreateContext();
                    ImGuiIO& io = ImGui::GetIO();
                    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
                    ImGui::StyleColorsDark();
                    ImGui_ImplWin32_Init(g_hWindow);
                    ImGui_ImplDX9_Init(pDevice);
                }
                initialized = true;
                rendererType = 2;
            }
        }
        catch (...) {}
    }
    if (initialized && rendererType == 2) {
        if (showMenu) {
            try {
                ImGui_ImplDX9_NewFrame();
                ImGui_ImplWin32_NewFrame();
                ImGui::NewFrame();
                RenderMenu();
                ImGui::EndFrame();
                ImGui::Render();
                ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
            } catch (...) {}
        }
    }
    return oEndScene(pDevice);
}

// Pattern scan helper (đã có sẵn)
void* PatternScan(const char* module, const char* pattern, const char* mask) {
    MODULEINFO mInfo = { 0 };
    HMODULE hModule = GetModuleHandleA(module);
    if (!hModule) return nullptr;
    GetModuleInformation(GetCurrentProcess(), hModule, &mInfo, sizeof(MODULEINFO));
    char* base = (char*)mInfo.lpBaseOfDll;
    size_t size = (size_t)mInfo.SizeOfImage;
    size_t patternLen = strlen(mask);
    for (size_t i = 0; i < size - patternLen; ++i) {
        bool found = true;
        for (size_t j = 0; j < patternLen; ++j) {
            if (mask[j] != '?' && pattern[j] != *(base + i + j)) {
                found = false;
                break;
            }
        }
        if (found) return (void*)(base + i);
    }
    return nullptr;
}

void CleanupImGui() {
    if (ImGui::GetCurrentContext()) {
        if (rendererType == 1) { // DX11
            ImGui_ImplDX11_Shutdown();
        } else if (rendererType == 2) { // DX9
            ImGui_ImplDX9_Shutdown();
        }
        ImGui_ImplWin32_Shutdown();
        ImGui::DestroyContext();
    }
    rendererType = 0;
    initialized = false;
}

void AutoFindGWorld() {
    const char* pattern = "\x04\x00\x74\x26\x48\x8B\x05\x00\x00\x00\x00\x48\x85\xC0\x74";
    const char* mask = "xxxxxxx????xxxx";
    
    char* base = (char*)GetModuleHandleA(NULL);
    if (!base) return;

    MODULEINFO mInfo;
    if (!GetModuleInformation(GetCurrentProcess(), (HMODULE)base, &mInfo, sizeof(MODULEINFO))) return;

    for (char* p = base; p < base + mInfo.SizeOfImage - strlen(mask); p++) {
        bool found = true;
        for (size_t i = 0; i < strlen(mask); i++) {
            if (mask[i] != '?' && pattern[i] != p[i]) {
                found = false;
                break;
            }
        }

        if (found) {
            uintptr_t addr = (uintptr_t)p;
            // The relative offset is at addr + 7 from the start of our pattern.
            int32_t offset = *(int32_t*)(addr + 7);
            // The GWorld Ptr Addr = instruction_address + instruction_length + offset
            // Instruction address is addr + 4, length is 7
            uintptr_t gworld_ptr_addr = addr + 11 + offset;

            // Simple validation
            if (gworld_ptr_addr > 0x7FF000000000 && gworld_ptr_addr < 0x7FFFFFFFFFFF) {
                 GWorldAddr = gworld_ptr_addr;
                 return;
            }
        }
    }
}

DWORD WINAPI FinderThread(LPVOID lpReserved) {
    while (GWorldAddr == 0) {
        AutoFindGWorld();
        Sleep(500); // Check every 0.5 seconds
    }
    return 0;
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{
    HMODULE hModule = (HMODULE)lpReserved;
    
    // Load FNames map khi khởi tạo
    LoadFNamesMap();
    
    CreateThread(nullptr, 0, FinderThread, nullptr, 0, nullptr);

    if (MH_Initialize() != MH_OK)
    {
        return 1;
    }
    // Try to hook DirectX 11 Present
    WNDCLASSEXA wc = { sizeof(WNDCLASSEXA), CS_CLASSDC, DefWindowProcA, 0L, 0L, GetModuleHandleA(NULL), NULL, NULL, NULL, NULL, "Dummy", NULL };
    RegisterClassExA(&wc);
    HWND hWnd = CreateWindowA(wc.lpszClassName, "Dummy", WS_OVERLAPPEDWINDOW, 0, 0, 100, 100, NULL, NULL, wc.hInstance, NULL);
    D3D_FEATURE_LEVEL featureLevel;
    DXGI_SWAP_CHAIN_DESC sd = {};
    sd.BufferCount = 1;
    sd.BufferDesc.Width = 100;
    sd.BufferDesc.Height = 100;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
    ID3D11Device* pDevice = nullptr;
    ID3D11DeviceContext* pContext = nullptr;
    IDXGISwapChain* pSwapChain = nullptr;
    if (D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, 0, NULL, 0, D3D11_SDK_VERSION, &sd, &pSwapChain, &pDevice, &featureLevel, &pContext) == S_OK)
    {
        void** pVTable = *reinterpret_cast<void***>(pSwapChain);
        if (MH_CreateHook(pVTable[8], &hkPresent, reinterpret_cast<LPVOID*>(&oPresent)) == MH_OK)
        {
            if (MH_EnableHook(pVTable[8]) == MH_OK)
            {
                // std::ofstream logFile("hack_log.txt", std::ios::app);
                // logFile << "DirectX 11 Present hook created and enabled!" << std::endl;
                // logFile.close();
            }
        }
        pSwapChain->Release();
        pDevice->Release();
        pContext->Release();
    }
    // Try to hook DirectX 9 EndScene
    IDirect3D9* pD3D = Direct3DCreate9(D3D_SDK_VERSION);
    if (pD3D)
    {
        D3DPRESENT_PARAMETERS d3dpp = {};
        d3dpp.Windowed = TRUE;
        d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
        d3dpp.hDeviceWindow = hWnd;
        IDirect3DDevice9* pD3DDevice = nullptr;
        if (SUCCEEDED(pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &pD3DDevice)))
        {
            void** pVTable = *reinterpret_cast<void***>(pD3DDevice);
            if (MH_CreateHook(pVTable[42], &hkEndScene, reinterpret_cast<LPVOID*>(&oEndScene)) == MH_OK)
            {
                if (MH_EnableHook(pVTable[42]) == MH_OK)
                {
                    // std::ofstream logFile("hack_log.txt", std::ios::app);
                    // logFile << "DirectX 9 EndScene hook created and enabled!" << std::endl;
                    // logFile.close();
                }
            }
            pD3DDevice->Release();
        }
        pD3D->Release();
    }
    DestroyWindow(hWnd);
    UnregisterClassA(wc.lpszClassName, wc.hInstance);
    // Wait for END key to cleanup
    while (!GetAsyncKeyState(VK_END))
        Sleep(100);
    // Cleanup
    if (g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = NULL; }
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
    if (g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = NULL; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
    CleanupImGui();
    MH_Uninitialize();
    FreeLibraryAndExitThread(hModule, 0);
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
        g_hModule = hModule; // Store module handle
        DisableThreadLibraryCalls(hModule);
        CreateThread(nullptr, 0, MainThread, hModule, 0, nullptr);
    }
    return TRUE;
}

// Thêm lại hàm GetNameByIndex_Safe
std::string GetNameByIndex_Safe(int32_t nameIndex) {
    if (nameIndex < 0) return "InvalidIndex";
    
    // Đảm bảo đã load FNames map
    if (!g_nameMapLoaded) {
        LoadFNamesMap();
    }
    
    // Tra cứu trong map
    auto it = g_nameMap.find(nameIndex);
    if (it != g_nameMap.end()) {
        return it->second;
    }
    
    // Nếu không tìm thấy, trả về index
    char buffer[128];
    sprintf_s(buffer, "NameIndex_%d", nameIndex);
    return std::string(buffer);
}

void LoadFNamesMap() {
    if (g_nameMapLoaded) return; // Đã load rồi thì không load nữa
    
    char modulePath[MAX_PATH];
    if (g_hModule == NULL || GetModuleFileNameA(g_hModule, modulePath, MAX_PATH) == 0) {
        return; // Không lấy được đường dẫn DLL
    }

    std::string dllPath = modulePath;
    std::string fnamesPath;
    size_t lastSlash = dllPath.find_last_of("\\/");
    if (lastSlash != std::string::npos) {
        fnamesPath = dllPath.substr(0, lastSlash + 1) + "FNames.txt";
    } else {
        return; // Đường dẫn không hợp lệ
    }
    
    std::ifstream file(fnamesPath);
    if (!file.is_open()) {
        return; // Không mở được file thì thôi
    }
    
    std::string line;
    // Bỏ qua các dòng trống hoặc dòng header
    while (std::getline(file, line) && (line.empty() || line[0] != '[')) {
        // Bỏ qua
    }
    
    // Xử lý dòng đầu tiên (nếu có)
    if (!line.empty() && line[0] == '[') {
        size_t endBracket = line.find(']');
        if (endBracket != std::string::npos && endBracket > 1) {
            std::string indexStr = line.substr(1, endBracket - 1);
            std::string name = line.substr(endBracket + 2);
            try {
                g_nameMap[std::stoi(indexStr)] = name;
            } catch (...) {}
        }
    }

    // Xử lý các dòng còn lại
    while (std::getline(file, line)) {
        if (line.empty() || line[0] != '[') continue;
        
        size_t endBracket = line.find(']');
        if (endBracket != std::string::npos && endBracket > 1) {
            std::string indexStr = line.substr(1, endBracket - 1);
            std::string name = line.substr(endBracket + 2);
            
            try {
                g_nameMap[std::stoi(indexStr)] = name;
            } catch (...) {}
        }
    }
    
    file.close();
    g_nameMapLoaded = true;
} 
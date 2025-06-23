
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UKV_FullscreenRTPool;
class UKV_ObjectPool;
class UKV_ObjectPoolLibrary;
class UKV_RenderTargetPool;
class UKV_WidgetPool;

#pragma pack(pop)


static_assert(sizeof(UKV_FullscreenRTPool) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UKV_ObjectPool) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UKV_ObjectPoolLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKV_RenderTargetPool) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(UKV_WidgetPool) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(offsetof(UKV_FullscreenRTPool, AllPools) == 0x0028);
static_assert(offsetof(UKV_ObjectPool, StandingPool) == 0x0030);
static_assert(offsetof(UKV_ObjectPool, TemporaryPool) == 0x0040);
static_assert(offsetof(UKV_ObjectPool, Allocated) == 0x0050);
static_assert(offsetof(UKV_RenderTargetPool, RTSize) == 0x0068);
static_assert(offsetof(UKV_RenderTargetPool, Format) == 0x0070);
static_assert(offsetof(UKV_WidgetPool, WorldContextObject) == 0x0068);
static_assert(offsetof(UKV_WidgetPool, WidgetClass) == 0x0070);

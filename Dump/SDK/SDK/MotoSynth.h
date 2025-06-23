
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UMotoSynthPreset;
class UMotoSynthSource;
class USynthComponentMoto;

#pragma pack(pop)


static_assert(sizeof(FMotoSynthRuntimeSettings) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UMotoSynthPreset) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(FGrainTableEntry) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UMotoSynthSource) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(USynthComponentMoto) == 0x0780); // 1920 bytes (0x0006C0 - 0x000780)
static_assert(offsetof(FMotoSynthRuntimeSettings, AccelerationSource) == 0x0030);
static_assert(offsetof(FMotoSynthRuntimeSettings, DecelerationSource) == 0x0038);
static_assert(offsetof(UMotoSynthPreset, Settings) == 0x0028);
static_assert(offsetof(UMotoSynthSource, RPMCurve) == 0x0030);
static_assert(offsetof(UMotoSynthSource, SourceData) == 0x00B8);
static_assert(offsetof(UMotoSynthSource, SourceDataPCM) == 0x00C8);
static_assert(offsetof(UMotoSynthSource, GrainTable) == 0x00E0);
static_assert(offsetof(USynthComponentMoto, MotoSynthPreset) == 0x06C0);

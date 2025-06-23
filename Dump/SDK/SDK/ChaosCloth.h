
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "ClothingSystemRuntimeCommon.h"
#include "ClothingSystemRuntimeInterface.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UChaosClothConfig;
class UChaosClothSharedSimConfig;
class UChaosClothingSimulationFactory;
class UChaosClothingSimulationInteractor;

/// Enum /Script/ChaosCloth.EChaosClothTetherMode
/// Size: 0x01 (1 bytes)
enum class EChaosClothTetherMode : uint8_t
{
	EChaosClothTetherMode__FastTetherFastLength                                      = 0,
	EChaosClothTetherMode__AccurateTetherFastLength                                  = 1,
	EChaosClothTetherMode__AccurateTetherAccurateLength                              = 2,
	EChaosClothTetherMode__MaxChaosClothTetherMode                                   = 3
};

/// Enum /Script/ChaosCloth.EChaosWeightMapTarget
/// Size: 0x01 (1 bytes)
enum class EChaosWeightMapTarget : uint8_t
{
	EChaosWeightMapTarget__None                                                      = 0,
	EChaosWeightMapTarget__MaxDistance                                               = 1,
	EChaosWeightMapTarget__BackstopDistance                                          = 2,
	EChaosWeightMapTarget__BackstopRadius                                            = 3,
	EChaosWeightMapTarget__AnimDriveMultiplier                                       = 4
};

#pragma pack(pop)


static_assert(sizeof(UChaosClothConfig) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(UChaosClothSharedSimConfig) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UChaosClothingSimulationFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UChaosClothingSimulationInteractor) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(offsetof(UChaosClothConfig, MassMode) == 0x0028);
static_assert(offsetof(UChaosClothConfig, TetherMode) == 0x0058);
static_assert(offsetof(UChaosClothConfig, Gravity) == 0x008C);
static_assert(offsetof(UChaosClothConfig, LinearVelocityScale) == 0x009C);
static_assert(offsetof(UChaosClothSharedSimConfig, Gravity) == 0x0048);

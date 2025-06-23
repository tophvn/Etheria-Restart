
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

class UMagicLeapImageTrackerComponent;
class UMagicLeapImageTrackerFunctionLibrary;

/// Enum /Script/MagicLeapImageTracker.EMagicLeapImageTargetOrientation
/// Size: 0x01 (1 bytes)
enum class EMagicLeapImageTargetOrientation : uint8_t
{
	EMagicLeapImageTargetOrientation__ForwardAxisAsNormal                            = 0,
	EMagicLeapImageTargetOrientation__UpAxisAsNormal                                 = 1
};

/// Enum /Script/MagicLeapImageTracker.EMagicLeapImageTargetStatus
/// Size: 0x01 (1 bytes)
enum class EMagicLeapImageTargetStatus : uint8_t
{
	EMagicLeapImageTargetStatus__Tracked                                             = 0,
	EMagicLeapImageTargetStatus__Unreliable                                          = 1,
	EMagicLeapImageTargetStatus__NotTracked                                          = 2
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapImageTrackerComponent) == 0x0270); // 624 bytes (0x0001F8 - 0x000270)
static_assert(sizeof(UMagicLeapImageTrackerFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapImageTargetState) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMagicLeapImageTargetSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(UMagicLeapImageTrackerComponent, TargetImageTexture) == 0x01F8);
static_assert(offsetof(UMagicLeapImageTrackerComponent, Name) == 0x0200);
static_assert(offsetof(UMagicLeapImageTrackerComponent, AxisOrientation) == 0x0216);
static_assert(offsetof(FMagicLeapImageTargetState, TrackingStatus) == 0x0000);
static_assert(offsetof(FMagicLeapImageTargetState, Location) == 0x0004);
static_assert(offsetof(FMagicLeapImageTargetState, Rotation) == 0x0010);
static_assert(offsetof(FMagicLeapImageTargetSettings, ImageTexture) == 0x0000);
static_assert(offsetof(FMagicLeapImageTargetSettings, Name) == 0x0008);

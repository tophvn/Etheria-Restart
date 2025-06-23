
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

class UFixedFrameRateCustomTimeStep;
class UGenlockedCustomTimeStep;
class UGenlockedTimecodeProvider;
class UTimeManagementBlueprintLibrary;
class UTimeSynchronizationSource;

/// Enum /Script/TimeManagement.EFrameNumberDisplayFormats
/// Size: 0x01 (1 bytes)
enum class EFrameNumberDisplayFormats : uint8_t
{
	EFrameNumberDisplayFormats__NonDropFrameTimecode                                 = 0,
	EFrameNumberDisplayFormats__DropFrameTimecode                                    = 1,
	EFrameNumberDisplayFormats__Seconds                                              = 2,
	EFrameNumberDisplayFormats__Frames                                               = 3,
	EFrameNumberDisplayFormats__MAX_Count                                            = 4
};

/// Enum /Script/TimeManagement.ETimedDataInputState
/// Size: 0x01 (1 bytes)
enum class ETimedDataInputState : uint8_t
{
	ETimedDataInputState__Connected                                                  = 0,
	ETimedDataInputState__Unresponsive                                               = 1,
	ETimedDataInputState__Disconnected                                               = 2
};

/// Enum /Script/TimeManagement.ETimedDataInputEvaluationType
/// Size: 0x01 (1 bytes)
enum class ETimedDataInputEvaluationType : uint8_t
{
	ETimedDataInputEvaluationType__None                                              = 0,
	ETimedDataInputEvaluationType__Timecode                                          = 1,
	ETimedDataInputEvaluationType__PlatformTime                                      = 2
};

#pragma pack(pop)


static_assert(sizeof(UTimeSynchronizationSource) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UFixedFrameRateCustomTimeStep) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UGenlockedCustomTimeStep) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UGenlockedTimecodeProvider) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UTimeManagementBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FTimedDataInputEvaluationData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTimedDataChannelSampleTime) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UFixedFrameRateCustomTimeStep, FixedFrameRate) == 0x0028);

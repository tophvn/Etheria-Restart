
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UMagicLeapEyeTrackerFunctionLibrary;

/// Enum /Script/MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
/// Size: 0x01 (1 bytes)
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t
{
	EMagicLeapEyeTrackingCalibrationStatus__None                                     = 0,
	EMagicLeapEyeTrackingCalibrationStatus__Bad                                      = 1,
	EMagicLeapEyeTrackingCalibrationStatus__Good                                     = 2
};

/// Enum /Script/MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
/// Size: 0x01 (1 bytes)
enum class EMagicLeapEyeTrackingStatus : uint8_t
{
	EMagicLeapEyeTrackingStatus__NotConnected                                        = 0,
	EMagicLeapEyeTrackingStatus__Disabled                                            = 1,
	EMagicLeapEyeTrackingStatus__UserNotPresent                                      = 2,
	EMagicLeapEyeTrackingStatus__UserPresent                                         = 3,
	EMagicLeapEyeTrackingStatus__UserPresentAndWatchingWindow                        = 4
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapEyeTrackerFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapEyeBlinkState) == 0x0002); // 2 bytes (0x000000 - 0x000002)

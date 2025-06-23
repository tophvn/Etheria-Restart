
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMagicLeapEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetEyeBlinkState
	// bool GetEyeBlinkState(FMagicLeapEyeBlinkState& BlinkState);                                                              // [0x131b340] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary.GetCalibrationStatus
	// EMagicLeapEyeTrackingCalibrationStatus GetCalibrationStatus();                                                           // [0x131b310] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/MagicLeapEyeTracker.MagicLeapEyeBlinkState
/// Size: 0x0002 (0x000000 - 0x000002)
class FMagicLeapEyeBlinkState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      LeftEyeBlinked                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      RightEyeBlinked                                             OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Enum /Script/MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
/// Size: 0x03
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t
{
	EMagicLeapEyeTrackingCalibrationStatus__None                                     = 0,
	EMagicLeapEyeTrackingCalibrationStatus__Bad                                      = 1,
	EMagicLeapEyeTrackingCalibrationStatus__Good                                     = 2
};

/// Enum /Script/MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
/// Size: 0x05
enum class EMagicLeapEyeTrackingStatus : uint8_t
{
	EMagicLeapEyeTrackingStatus__NotConnected                                        = 0,
	EMagicLeapEyeTrackingStatus__Disabled                                            = 1,
	EMagicLeapEyeTrackingStatus__UserNotPresent                                      = 2,
	EMagicLeapEyeTrackingStatus__UserPresent                                         = 3,
	EMagicLeapEyeTrackingStatus__UserPresentAndWatchingWindow                        = 4
};


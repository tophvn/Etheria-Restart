
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/EyeTracker.EyeTrackerFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
	// void SetEyeTrackedPlayer(class APlayerController* PlayerController);                                                     // [0x2b24d80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
	// bool IsStereoGazeDataAvailable();                                                                                        // [0x2b24d50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
	// bool IsEyeTrackerConnected();                                                                                            // [0x2b24d20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
	// bool GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData);                                                          // [0x2b24c80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
	// bool GetGazeData(FEyeTrackerGazeData& OutGazeData);                                                                      // [0x2b24bd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/EyeTracker.EyeTrackerStereoGazeData
/// Size: 0x0040 (0x000000 - 0x000040)
class FEyeTrackerStereoGazeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   LeftEyeOrigin                                               OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   LeftEyeDirection                                            OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   RightEyeOrigin                                              OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector)                                   RightEyeDirection                                           OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	SMember(FVector)                                   FixationPoint                                               OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	DMember(float)                                     ConfidenceValue                                             OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Struct /Script/EyeTracker.EyeTrackerGazeData
/// Size: 0x0028 (0x000000 - 0x000028)
class FEyeTrackerGazeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   GazeOrigin                                                  OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   GazeDirection                                               OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   FixationPoint                                               OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	DMember(float)                                     ConfidenceValue                                             OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Enum /Script/EyeTracker.EEyeTrackerStatus
/// Size: 0x03
enum class EEyeTrackerStatus : uint8_t
{
	EEyeTrackerStatus__NotConnected                                                  = 0,
	EEyeTrackerStatus__NotTracking                                                   = 1,
	EEyeTrackerStatus__Tracking                                                      = 2
};


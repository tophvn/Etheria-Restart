
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMagicLeapLightingTrackingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      UseGlobalAmbience                                           OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      UseColorTemp                                                OFFSET(get<bool>, {0xB1, 1, 0, 0})
};

/// Class /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMagicLeapLightEstimationFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid
	// bool IsTrackerValid();                                                                                                   // [0x1334f90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState
	// bool GetColorTemperatureState(FMagicLeapLightEstimationColorTemperatureState& ColorTemperatureState);                    // [0x1334f00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState
	// bool GetAmbientGlobalState(FMagicLeapLightEstimationAmbientGlobalState& GlobalAmbientState);                             // [0x1334e50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker
	// void DestroyTracker();                                                                                                   // [0x1334e30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker
	// bool CreateTracker();                                                                                                    // [0x1334e00] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState
/// Size: 0x0020 (0x000000 - 0x000020)
class FMagicLeapLightEstimationColorTemperatureState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     ColorTemperatureKelvin                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FLinearColor)                              AmbientColor                                                OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	SMember(FTimespan)                                 Timestamp                                                   OFFSET(getStruct<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
/// Size: 0x0018 (0x000000 - 0x000018)
class FMagicLeapLightEstimationAmbientGlobalState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<float>)                             AmbientIntensityNits                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FTimespan)                                 Timestamp                                                   OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Enum /Script/MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
/// Size: 0x04
enum class EMagicLeapLightEstimationCamera : uint8_t
{
	EMagicLeapLightEstimationCamera__Left                                            = 0,
	EMagicLeapLightEstimationCamera__Right                                           = 1,
	EMagicLeapLightEstimationCamera__FarLeft                                         = 2,
	EMagicLeapLightEstimationCamera__FarRight                                        = 3
};


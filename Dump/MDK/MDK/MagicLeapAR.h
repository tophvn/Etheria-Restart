
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AugmentedReality
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapImageTracker
/// dependency: MagicLeapPlanes
/// dependency: MRMesh

/// Class /Script/MagicLeapAR.LuminARSessionFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession
	// void StartLuminARSession(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class ULuminARSessionConfig* Configuration); // [0x1311890] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapAR.LuminARFrameFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace
	// bool LuminARLineTrace(class UObject* WorldContextObject, FVector2D& ScreenPosition, TSet<ELuminARLineTraceChannel> TraceChannels, TArray<FARTraceResult>& OutHitResults); // [0x13115d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState
	// ELuminARTrackingState GetTrackingState();                                                                                // [0x1311580] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MagicLeapAR.LuminARImageTrackingFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULuminARImageTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImageEx
	// class ULuminARCandidateImage* AddLuminRuntimeCandidateImageEx(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, EMagicLeapImageTargetOrientation InAxisOrientation); // [0x1311200] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage
	// class ULuminARCandidateImage* AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary); // [0x1310fd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapAR.LuminAROrigin
/// Size: 0x00C0 (0x000220 - 0x0002E0)
class ALuminAROrigin : public AAROriginActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(class UMRMeshComponent*)                   MRMeshComponent                                             OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UMaterialInterface*)                 PlaneSurfaceMaterial                                        OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class UMaterialInterface*)                 WireframeMaterial                                           OFFSET(get<T>, {0x230, 8, 0, 0})
};

/// Class /Script/MagicLeapAR.LuminARSessionConfig
/// Size: 0x0090 (0x000110 - 0x0001A0)
class ULuminARSessionConfig : public UARSessionConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FMagicLeapPlanesQuery)                     PlanesQuery                                                 OFFSET(getStruct<T>, {0x110, 96, 0, 0})
	DMember(int32_t)                                   MaxPlaneQueryResults                                        OFFSET(get<int32_t>, {0x170, 4, 0, 0})
	DMember(int32_t)                                   MinPlaneArea                                                OFFSET(get<int32_t>, {0x174, 4, 0, 0})
	DMember(bool)                                      bArbitraryOrientationPlaneDetection                         OFFSET(get<bool>, {0x178, 1, 0, 0})
	SMember(FVector)                                   PlaneSearchExtents                                          OFFSET(getStruct<T>, {0x17C, 12, 0, 0})
	CMember(TArray<EMagicLeapPlaneQueryFlags>)         PlaneQueryFlags                                             OFFSET(get<T>, {0x188, 16, 0, 0})
	DMember(bool)                                      bDiscardZeroExtentPlanes                                    OFFSET(get<bool>, {0x198, 1, 0, 0})
	DMember(bool)                                      bDefaultUseUnreliablePose                                   OFFSET(get<bool>, {0x199, 1, 0, 0})
};

/// Class /Script/MagicLeapAR.LuminARLightEstimate
/// Size: 0x0010 (0x000040 - 0x000050)
class ULuminARLightEstimate : public UARBasicLightEstimate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<float>)                             AmbientIntensityNits                                        OFFSET(get<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits
	// TArray<float> GetAmbientIntensityNits();                                                                                 // [0x1311480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MagicLeapAR.LuminARCandidateImage
/// Size: 0x0008 (0x000058 - 0x000060)
class ULuminARCandidateImage : public UARCandidateImage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bUseUnreliablePose                                          OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bImageIsStationary                                          OFFSET(get<bool>, {0x59, 1, 0, 0})
	CMember(EMagicLeapImageTargetOrientation)          AxisOrientation                                             OFFSET(get<T>, {0x5A, 1, 0, 0})


	/// Functions
	// Function /Script/MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose
	// bool GetUseUnreliablePose();                                                                                             // [0x13115b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapAR.LuminARCandidateImage.GetImageIsStationary
	// bool GetImageIsStationary();                                                                                             // [0x1311560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapAR.LuminARCandidateImage.GetAxisOrientation
	// EMagicLeapImageTargetOrientation GetAxisOrientation();                                                                   // [0x1311540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Enum /Script/MagicLeapAR.ELuminARLineTraceChannel
/// Size: 0x06
enum class ELuminARLineTraceChannel : uint8_t
{
	ELuminARLineTraceChannel__None                                                   = 0,
	ELuminARLineTraceChannel__FeaturePoint                                           = 1,
	ELuminARLineTraceChannel__InfinitePlane                                          = 2,
	ELuminARLineTraceChannel__PlaneUsingExtent                                       = 4,
	ELuminARLineTraceChannel__PlaneUsingBoundaryPolygon                              = 8,
	ELuminARLineTraceChannel__FeaturePointWithSurfaceNormal                          = 16
};

/// Enum /Script/MagicLeapAR.ELuminARTrackingState
/// Size: 0x03
enum class ELuminARTrackingState : uint8_t
{
	ELuminARTrackingState__Tracking                                                  = 0,
	ELuminARTrackingState__NotTracking                                               = 1,
	ELuminARTrackingState__StoppedTracking                                           = 2
};


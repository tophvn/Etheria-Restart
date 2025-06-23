
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/CinematicCamera.CameraFilmbackSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FCameraFilmbackSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     SensorWidth                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     SensorHeight                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SensorAspectRatio                                           OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.CameraLensSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FCameraLensSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     MinFocalLength                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxFocalLength                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinFStop                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxFStop                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MinimumFocusDistance                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   DiaphragmBladeCount                                         OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.CameraTrackingFocusSettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FCameraTrackingFocusSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<class AActor*>)             ActorToTrack                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   RelativeOffset                                              OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	DMember(bool)                                      bDrawDebugTrackingFocusPoint                                OFFSET(get<bool>, {0x34, 1, 1, 0})
};

/// Struct /Script/CinematicCamera.CameraFocusSettings
/// Size: 0x0058 (0x000000 - 0x000058)
class FCameraFocusSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(ECameraFocusMethod)                        FocusMethod                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     ManualFocusDistance                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FCameraTrackingFocusSettings)              TrackingFocusSettings                                       OFFSET(getStruct<T>, {0x8, 56, 0, 0})
	DMember(bool)                                      bDrawDebugFocusPlane                                        OFFSET(get<bool>, {0x40, 1, 1, 0})
	SMember(FColor)                                    DebugFocusPlaneColor                                        OFFSET(getStruct<T>, {0x44, 4, 0, 0})
	DMember(bool)                                      bSmoothFocusChanges                                         OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(float)                                     FocusSmoothingInterpSpeed                                   OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     FocusOffset                                                 OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.NamedFilmbackPreset
/// Size: 0x0020 (0x000000 - 0x000020)
class FNamedFilmbackPreset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FCameraFilmbackSettings)                   FilmbackSettings                                            OFFSET(getStruct<T>, {0x10, 12, 0, 0})
};

/// Struct /Script/CinematicCamera.NamedLensPreset
/// Size: 0x0028 (0x000000 - 0x000028)
class FNamedLensPreset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FCameraLensSettings)                       LensSettings                                                OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Class /Script/CinematicCamera.CineCameraComponent
/// Size: 0x0100 (0x0007E0 - 0x0008E0)
class UCineCameraComponent : public UCameraComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2272;

public:
	SMember(FCameraFilmbackSettings)                   FilmbackSettings                                            OFFSET(getStruct<T>, {0x7E0, 12, 0, 0})
	SMember(FCameraFilmbackSettings)                   Filmback                                                    OFFSET(getStruct<T>, {0x7EC, 12, 0, 0})
	SMember(FCameraLensSettings)                       LensSettings                                                OFFSET(getStruct<T>, {0x7F8, 24, 0, 0})
	SMember(FCameraFocusSettings)                      FocusSettings                                               OFFSET(getStruct<T>, {0x810, 88, 0, 0})
	DMember(float)                                     CurrentFocalLength                                          OFFSET(get<float>, {0x868, 4, 0, 0})
	DMember(float)                                     CurrentAperture                                             OFFSET(get<float>, {0x86C, 4, 0, 0})
	DMember(float)                                     CurrentFocusDistance                                        OFFSET(get<float>, {0x870, 4, 0, 0})
	CMember(TArray<FNamedFilmbackPreset>)              FilmbackPresets                                             OFFSET(get<T>, {0x880, 16, 0, 0})
	CMember(TArray<FNamedLensPreset>)                  LensPresets                                                 OFFSET(get<T>, {0x890, 16, 0, 0})
	SMember(FString)                                   DefaultFilmbackPresetName                                   OFFSET(getStruct<T>, {0x8A0, 16, 0, 0})
	SMember(FString)                                   DefaultFilmbackPreset                                       OFFSET(getStruct<T>, {0x8B0, 16, 0, 0})
	SMember(FString)                                   DefaultLensPresetName                                       OFFSET(getStruct<T>, {0x8C0, 16, 0, 0})
	DMember(float)                                     DefaultLensFocalLength                                      OFFSET(get<float>, {0x8D0, 4, 0, 0})
	DMember(float)                                     DefaultLensFStop                                            OFFSET(get<float>, {0x8D4, 4, 0, 0})


	/// Functions
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensPresetByName
	// void SetLensPresetByName(FString InPresetName);                                                                          // [0x2a03de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	// void SetFilmbackPresetByName(FString InPresetName);                                                                      // [0x2a03d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	// void SetCurrentFocalLength(float InFocalLength);                                                                         // [0x2a03cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	// float GetVerticalFieldOfView();                                                                                          // [0x2a03c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	// TArray<FNamedLensPreset> GetLensPresetsCopy();                                                                           // [0x2a03bb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetName
	// FString GetLensPresetName();                                                                                             // [0x2a03b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	// float GetHorizontalFieldOfView();                                                                                        // [0x2a03b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	// TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();                                                                   // [0x2a03a20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	// FString GetFilmbackPresetName();                                                                                         // [0x2a039a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	// FString GetDefaultFilmbackPresetName();                                                                                  // [0x2a038e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CinematicCamera.CameraRig_Crane
/// Size: 0x0030 (0x000220 - 0x000250)
class ACameraRig_Crane : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	DMember(float)                                     CranePitch                                                  OFFSET(get<float>, {0x220, 4, 0, 0})
	DMember(float)                                     CraneYaw                                                    OFFSET(get<float>, {0x224, 4, 0, 0})
	DMember(float)                                     CraneArmLength                                              OFFSET(get<float>, {0x228, 4, 0, 0})
	DMember(bool)                                      bLockMountPitch                                             OFFSET(get<bool>, {0x22C, 1, 0, 0})
	DMember(bool)                                      bLockMountYaw                                               OFFSET(get<bool>, {0x22D, 1, 0, 0})
	CMember(class USceneComponent*)                    TransformComponent                                          OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class USceneComponent*)                    CraneYawControl                                             OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(class USceneComponent*)                    CranePitchControl                                           OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(class USceneComponent*)                    CraneCameraMount                                            OFFSET(get<T>, {0x248, 8, 0, 0})
};

/// Class /Script/CinematicCamera.CameraRig_Rail
/// Size: 0x0020 (0x000220 - 0x000240)
class ACameraRig_Rail : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	DMember(float)                                     CurrentPositionOnRail                                       OFFSET(get<float>, {0x220, 4, 0, 0})
	DMember(bool)                                      bLockOrientationToRail                                      OFFSET(get<bool>, {0x224, 1, 0, 0})
	CMember(class USceneComponent*)                    TransformComponent                                          OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class USplineComponent*)                   RailSplineComponent                                         OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class USceneComponent*)                    RailCameraMount                                             OFFSET(get<T>, {0x238, 8, 0, 0})


	/// Functions
	// Function /Script/CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	// class USplineComponent* GetRailSplineComponent();                                                                        // [0x1602060] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/CinematicCamera.CameraLookatTrackingSettings
/// Size: 0x0050 (0x000000 - 0x000050)
class FCameraLookatTrackingSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bEnableLookAtTracking                                       OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bDrawDebugLookAtTrackingPosition                            OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(float)                                     LookAtTrackingInterpSpeed                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TWeakObjectPtr<class AActor*>)             ActorToTrack                                                OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FVector)                                   RelativeOffset                                              OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	DMember(bool)                                      bAllowRoll                                                  OFFSET(get<bool>, {0x4C, 1, 1, 0})
};

/// Class /Script/CinematicCamera.CineCameraActor
/// Size: 0x0060 (0x0007A0 - 0x000800)
class ACineCameraActor : public ACameraActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2048;

public:
	SMember(FCameraLookatTrackingSettings)             LookatTrackingSettings                                      OFFSET(getStruct<T>, {0x7A0, 80, 0, 0})


	/// Functions
	// Function /Script/CinematicCamera.CineCameraActor.GetCineCameraComponent
	// class UCineCameraComponent* GetCineCameraComponent();                                                                    // [0x2a038c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Enum /Script/CinematicCamera.ECameraFocusMethod
/// Size: 0x04
enum class ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__DoNotOverride                                                = 0,
	ECameraFocusMethod__Manual                                                       = 1,
	ECameraFocusMethod__Tracking                                                     = 2,
	ECameraFocusMethod__Disable                                                      = 3
};


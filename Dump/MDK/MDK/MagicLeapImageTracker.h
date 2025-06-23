
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MagicLeapImageTracker.MagicLeapImageTrackerComponent
/// Size: 0x0078 (0x0001F8 - 0x000270)
class UMagicLeapImageTrackerComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(class UTexture2D*)                         TargetImageTexture                                          OFFSET(get<T>, {0x1F8, 8, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x200, 16, 0, 0})
	DMember(float)                                     LongerDimension                                             OFFSET(get<float>, {0x210, 4, 0, 0})
	DMember(bool)                                      bIsStationary                                               OFFSET(get<bool>, {0x214, 1, 0, 0})
	DMember(bool)                                      bUseUnreliablePose                                          OFFSET(get<bool>, {0x215, 1, 0, 0})
	CMember(EMagicLeapImageTargetOrientation)          AxisOrientation                                             OFFSET(get<T>, {0x216, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSetImageTargetSucceeded                                   OFFSET(getStruct<T>, {0x218, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSetImageTargetFailed                                      OFFSET(getStruct<T>, {0x228, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnImageTargetFound                                          OFFSET(getStruct<T>, {0x238, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnImageTargetLost                                           OFFSET(getStruct<T>, {0x248, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnImageTargetUnreliableTracking                             OFFSET(getStruct<T>, {0x258, 16, 0, 0})


	/// Functions
	// Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
	// bool SetTargetAsync(class UTexture2D* ImageTarget);                                                                      // [0x132b0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
	// bool RemoveTargetAsync();                                                                                                // [0x132b010] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets
	// void SetMaxSimultaneousTargets(int32_t MaxSimultaneousTargets);                                                          // [0x132b040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled
	// bool IsImageTrackingEnabled();                                                                                           // [0x132afe0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets
	// int32_t GetMaxSimultaneousTargets();                                                                                     // [0x132afb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking
	// void EnableImageTracking(bool bEnable);                                                                                  // [0x132af30] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/MagicLeapImageTracker.MagicLeapImageTargetState
/// Size: 0x001C (0x000000 - 0x00001C)
class FMagicLeapImageTargetState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(EMagicLeapImageTargetStatus)               TrackingStatus                                              OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x10, 12, 0, 0})
};

/// Struct /Script/MagicLeapImageTracker.MagicLeapImageTargetSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FMagicLeapImageTargetSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UTexture2D*)                         ImageTexture                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(float)                                     LongerDimension                                             OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bIsStationary                                               OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x1D, 1, 0, 0})
};

/// Enum /Script/MagicLeapImageTracker.EMagicLeapImageTargetOrientation
/// Size: 0x02
enum class EMagicLeapImageTargetOrientation : uint8_t
{
	EMagicLeapImageTargetOrientation__ForwardAxisAsNormal                            = 0,
	EMagicLeapImageTargetOrientation__UpAxisAsNormal                                 = 1
};

/// Enum /Script/MagicLeapImageTracker.EMagicLeapImageTargetStatus
/// Size: 0x03
enum class EMagicLeapImageTargetStatus : uint8_t
{
	EMagicLeapImageTargetStatus__Tracked                                             = 0,
	EMagicLeapImageTargetStatus__Unreliable                                          = 1,
	EMagicLeapImageTargetStatus__NotTracked                                          = 2
};


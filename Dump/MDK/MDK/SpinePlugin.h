
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ProceduralMeshComponent
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/SpinePlugin.SpineAtlasAsset
/// Size: 0x0030 (0x000030 - 0x000060)
class USpineAtlasAsset : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<class UTexture2D*>)                 atlasPages                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   rawData                                                     OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FName)                                     atlasFileName                                               OFFSET(getStruct<T>, {0x58, 8, 0, 0})
};

/// Class /Script/SpinePlugin.SpineBoneDriverComponent
/// Size: 0x0028 (0x0001F8 - 0x000220)
class USpineBoneDriverComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(class AActor*)                             Target                                                      OFFSET(get<T>, {0x1F8, 8, 0, 0})
	SMember(FString)                                   BoneName                                                    OFFSET(getStruct<T>, {0x200, 16, 0, 0})
	DMember(bool)                                      UseComponentTransform                                       OFFSET(get<bool>, {0x210, 1, 0, 0})
	DMember(bool)                                      UsePosition                                                 OFFSET(get<bool>, {0x211, 1, 0, 0})
	DMember(bool)                                      UseRotation                                                 OFFSET(get<bool>, {0x212, 1, 0, 0})
	DMember(bool)                                      UseScale                                                    OFFSET(get<bool>, {0x213, 1, 0, 0})


	/// Functions
	// Function /Script/SpinePlugin.SpineBoneDriverComponent.BeforeUpdateWorldTransform
	// void BeforeUpdateWorldTransform(class USpineSkeletonComponent* Skeleton);                                                // [0x11f0370] Final|Native|Protected 
};

/// Class /Script/SpinePlugin.SpineBoneFollowerComponent
/// Size: 0x0028 (0x0001F8 - 0x000220)
class USpineBoneFollowerComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(class AActor*)                             Target                                                      OFFSET(get<T>, {0x1F8, 8, 0, 0})
	SMember(FString)                                   BoneName                                                    OFFSET(getStruct<T>, {0x200, 16, 0, 0})
	DMember(bool)                                      UseComponentTransform                                       OFFSET(get<bool>, {0x210, 1, 0, 0})
	DMember(bool)                                      UsePosition                                                 OFFSET(get<bool>, {0x211, 1, 0, 0})
	DMember(bool)                                      UseRotation                                                 OFFSET(get<bool>, {0x212, 1, 0, 0})
	DMember(bool)                                      UseScale                                                    OFFSET(get<bool>, {0x213, 1, 0, 0})
};

/// Class /Script/SpinePlugin.TrackEntry
/// Size: 0x0068 (0x000028 - 0x000090)
class UTrackEntry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  animationStart                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AnimationInterrupt                                          OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AnimationEvent                                              OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AnimationComplete                                           OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  animationEnd                                                OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AnimationDispose                                            OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/SpinePlugin.TrackEntry.SetTrackTime
	// void SetTrackTime(float trackTime);                                                                                      // [0x11f4190] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetTrackEnd
	// void SetTrackEnd(float trackEnd);                                                                                        // [0x11f4100] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetTimeScale
	// void SetTimeScale(float TimeScale);                                                                                      // [0x11f4030] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetMixTime
	// void SetMixTime(float mixTime);                                                                                          // [0x11f3380] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetMixDuration
	// void SetMixDuration(float mixDuration);                                                                                  // [0x11f32f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetMixDrawOrderThreshold
	// void SetMixDrawOrderThreshold(float drawOrderThreshold);                                                                 // [0x11f3260] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetMixAttachmentThreshold
	// void SetMixAttachmentThreshold(float drawOrderThreshold);                                                                // [0x11f31d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetLoop
	// void SetLoop(bool Loop);                                                                                                 // [0x11f3140] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetEventThreshold
	// void SetEventThreshold(float eventThreshold);                                                                            // [0x11f30b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetDelay
	// void SetDelay(float Delay);                                                                                              // [0x11f2e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetAnimationStart
	// void SetAnimationStart(float animationStart);                                                                            // [0x11f28a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetAnimationLast
	// void SetAnimationLast(float animationLast);                                                                              // [0x11f2810] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetAnimationEnd
	// void SetAnimationEnd(float animationEnd);                                                                                // [0x11f2780] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetAlphaAttachmentThreshold
	// void SetAlphaAttachmentThreshold(float attachmentThreshold);                                                             // [0x11f23f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetAlpha
	// void SetAlpha(float Alpha);                                                                                              // [0x11f2360] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.isValidAnimation
	// bool isValidAnimation();                                                                                                 // [0x11f44e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetTrackTime
	// float GetTrackTime();                                                                                                    // [0x11f16f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetTrackIndex
	// int32_t GetTrackIndex();                                                                                                 // [0x11f16a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetTrackEnd
	// float GetTrackEnd();                                                                                                     // [0x11f1650] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetTimeScale
	// float GetTimeScale();                                                                                                    // [0x11f1600] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetMixTime
	// float GetMixTime();                                                                                                      // [0x11f10f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetMixDuration
	// float GetMixDuration();                                                                                                  // [0x11f10a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetMixDrawOrderThreshold
	// float GetMixDrawOrderThreshold();                                                                                        // [0x11f1050] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetMixAttachmentThreshold
	// float GetMixAttachmentThreshold();                                                                                       // [0x11f1000] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetLoop
	// bool GetLoop();                                                                                                          // [0x11f0fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetEventThreshold
	// float GetEventThreshold();                                                                                               // [0x11f0f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetDelay
	// float GetDelay();                                                                                                        // [0x11f0f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetAnimationStart
	// float GetAnimationStart();                                                                                               // [0x11f08a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.getAnimationName
	// FString getAnimationName();                                                                                              // [0x11f4390] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetAnimationLast
	// float GetAnimationLast();                                                                                                // [0x11f0850] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetAnimationEnd
	// float GetAnimationEnd();                                                                                                 // [0x11f0800] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.getAnimationDuration
	// float getAnimationDuration();                                                                                            // [0x11f4340] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetAlphaAttachmentThreshold
	// float GetAlphaAttachmentThreshold();                                                                                     // [0x11f05b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetAlpha
	// float GetAlpha();                                                                                                        // [0x11f0560] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SpinePlugin.SpineSkeletonComponent
/// Size: 0x0058 (0x0000B0 - 0x000108)
class USpineSkeletonComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(class USpineAtlasAsset*)                   Atlas                                                       OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class USpineSkeletonDataAsset*)            SkeletonData                                                OFFSET(get<T>, {0xB8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BeforeUpdateWorldTransform                                  OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AfterUpdateWorldTransform                                   OFFSET(getStruct<T>, {0xD0, 16, 0, 0})


	/// Functions
	// Function /Script/SpinePlugin.SpineSkeletonComponent.UpdateWorldTransform
	// void UpdateWorldTransform();                                                                                             // [0x11f4300] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetToSetupPose
	// void SetToSetupPose();                                                                                                   // [0x11f40c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetSlotsToSetupPose
	// void SetSlotsToSetupPose();                                                                                              // [0x11f3ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetSlotColor
	// void SetSlotColor(FString SlotName, FColor Color);                                                                       // [0x11f3c90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetSkins
	// bool SetSkins(TArray<FString>& SkinNames);                                                                               // [0x11f3ad0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetSkin
	// bool SetSkin(FString SkinName);                                                                                          // [0x11f38d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetScaleY
	// void SetScaleY(float ScaleY);                                                                                            // [0x11f37d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetScaleX
	// void SetScaleX(float ScaleX);                                                                                            // [0x11f36d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetBoneWorldPosition
	// void SetBoneWorldPosition(FString BoneName, FVector& Position);                                                          // [0x11f2d50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetBonesToSetupPose
	// void SetBonesToSetupPose();                                                                                              // [0x11f2e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetAttachment
	// bool SetAttachment(FString SlotName, FString attachmentName);                                                            // [0x11f2930] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.ResetPhysicsConstraints
	// void ResetPhysicsConstraints();                                                                                          // [0x11f2320] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.PhysicsTranslate
	// void PhysicsTranslate(float X, float Y);                                                                                 // [0x11f2180] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.PhysicsRotate
	// void PhysicsRotate(float X, float Y, float degrees);                                                                     // [0x11f1f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.HasSlot
	// bool HasSlot(FString SlotName);                                                                                          // [0x11f1d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.HasSkin
	// bool HasSkin(FString SkinName);                                                                                          // [0x11f1b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.HasBone
	// bool HasBone(FString BoneName);                                                                                          // [0x11f1940] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.HasAnimation
	// bool HasAnimation(FString AnimationName);                                                                                // [0x11f1740] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.GetSlots
	// void GetSlots(TArray<FString>& Slots);                                                                                   // [0x11f1400] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.GetSkins
	// void GetSkins(TArray<FString>& Skins);                                                                                   // [0x11f1260] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.GetScaleY
	// float GetScaleY();                                                                                                       // [0x11f1200] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.GetScaleX
	// float GetScaleX();                                                                                                       // [0x11f11a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.GetBoneWorldTransform
	// FTransform GetBoneWorldTransform(FString BoneName);                                                                      // [0x11f0b60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.GetBones
	// void GetBones(TArray<FString>& Bones);                                                                                   // [0x11f0c30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.GetAnimations
	// void GetAnimations(TArray<FString>& Animations);                                                                         // [0x11f08f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.getAnimationDuration
	// float getAnimationDuration(FString AnimationName);                                                                       // [0x11f0600] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SpinePlugin.SpineSkeletonAnimationComponent
/// Size: 0x0100 (0x000108 - 0x000208)
class USpineSkeletonAnimationComponent : public USpineSkeletonComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FMulticastInlineDelegate)                  animationStart                                              OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AnimationInterrupt                                          OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AnimationEvent                                              OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AnimationComplete                                           OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  animationEnd                                                OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AnimationDispose                                            OFFSET(getStruct<T>, {0x158, 16, 0, 0})
	SMember(FString)                                   PreviewAnimation                                            OFFSET(getStruct<T>, {0x168, 16, 0, 0})
	SMember(FString)                                   PreviewSkin                                                 OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	CMember(TSet<UTrackEntry*>)                        trackEntries                                                OFFSET(get<T>, {0x190, 80, 0, 0})
	DMember(bool)                                      bAutoPlaying                                                OFFSET(get<bool>, {0x1E4, 1, 0, 0})


	/// Functions
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.SetTimeScale
	// void SetTimeScale(float TimeScale);                                                                                      // [0x11f3f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.SetPlaybackTime
	// void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);                                                         // [0x11f3510] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.SetPhysicsTimeScale
	// void SetPhysicsTimeScale(float Scale);                                                                                   // [0x11f3410] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.SetEmptyAnimation
	// class UTrackEntry* SetEmptyAnimation(int32_t TrackIndex, float mixDuration);                                             // [0x11f2f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.SetAutoPlay
	// void SetAutoPlay(bool bInAutoPlays);                                                                                     // [0x11f2c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.SetAnimation
	// class UTrackEntry* SetAnimation(int32_t TrackIndex, FString AnimationName, bool Loop);                                   // [0x11f2480] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.GetTimeScale
	// float GetTimeScale();                                                                                                    // [0x11f15a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.GetPhysicsTimeScale
	// float GetPhysicsTimeScale();                                                                                             // [0x11f1140] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.GetCurrent
	// class UTrackEntry* GetCurrent(int32_t TrackIndex);                                                                       // [0x11f0dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.ClearTracks
	// void ClearTracks();                                                                                                      // [0x11f0520] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.ClearTrack
	// void ClearTrack(int32_t TrackIndex);                                                                                     // [0x11f0400] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.AddEmptyAnimation
	// class UTrackEntry* AddEmptyAnimation(int32_t TrackIndex, float mixDuration, float Delay);                                // [0x11f0150] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.AddAnimation
	// class UTrackEntry* AddAnimation(int32_t TrackIndex, FString AnimationName, bool Loop, float Delay);                      // [0x11efdf0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/SpinePlugin.SpineAnimationStateMixData
/// Size: 0x0028 (0x000000 - 0x000028)
class FSpineAnimationStateMixData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   From                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   To                                                          OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(float)                                     Mix                                                         OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Class /Script/SpinePlugin.SpineSkeletonDataAsset
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class USpineSkeletonDataAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(float)                                     DefaultMix                                                  OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(TArray<FSpineAnimationStateMixData>)       MixData                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FString>)                           Bones                                                       OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FString>)                           Slots                                                       OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FString>)                           Skins                                                       OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FString>)                           Animations                                                  OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FString>)                           Events                                                      OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<char>)                              rawData                                                     OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FName)                                     skeletonDataFileName                                        OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/SpinePlugin.SpineSkeletonRendererComponent
/// Size: 0x02C8 (0x0004F8 - 0x0007C0)
class USpineSkeletonRendererComponent : public UProceduralMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1984;

public:
	CMember(class UMaterialInterface*)                 NormalBlendMaterial                                         OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 AdditiveBlendMaterial                                       OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(class UMaterialInterface*)                 MultiplyBlendMaterial                                       OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(class UMaterialInterface*)                 ScreenBlendMaterial                                         OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   atlasNormalBlendMaterials                                   OFFSET(get<T>, {0x518, 16, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   atlasAdditiveBlendMaterials                                 OFFSET(get<T>, {0x528, 16, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   atlasMultiplyBlendMaterials                                 OFFSET(get<T>, {0x538, 16, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   atlasScreenBlendMaterials                                   OFFSET(get<T>, {0x548, 16, 0, 0})
	DMember(float)                                     DepthOffset                                                 OFFSET(get<float>, {0x558, 4, 0, 0})
	SMember(FName)                                     TextureParameterName                                        OFFSET(getStruct<T>, {0x55C, 8, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x564, 16, 0, 0})
	DMember(bool)                                      bCreateCollision                                            OFFSET(get<bool>, {0x574, 1, 0, 0})
	CMember(TArray<FVector>)                           Vertices                                                    OFFSET(get<T>, {0x768, 16, 0, 0})
	CMember(TArray<int32_t>)                           Indices                                                     OFFSET(get<T>, {0x778, 16, 0, 0})
	CMember(TArray<FVector>)                           Normals                                                     OFFSET(get<T>, {0x788, 16, 0, 0})
	CMember(TArray<FVector2D>)                         UVs                                                         OFFSET(get<T>, {0x798, 16, 0, 0})
	CMember(TArray<FColor>)                            Colors                                                      OFFSET(get<T>, {0x7A8, 16, 0, 0})
};

/// Class /Script/SpinePlugin.SpineWidget
/// Size: 0x05E8 (0x000128 - 0x000710)
class USpineWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	SMember(FString)                                   InitialSkin                                                 OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	CMember(class USpineAtlasAsset*)                   Atlas                                                       OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class USpineSkeletonDataAsset*)            SkeletonData                                                OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class UMaterialInterface*)                 NormalBlendMaterial                                         OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(class UMaterialInterface*)                 AdditiveBlendMaterial                                       OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class UMaterialInterface*)                 MultiplyBlendMaterial                                       OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class UMaterialInterface*)                 ScreenBlendMaterial                                         OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FName)                                     TextureParameterName                                        OFFSET(getStruct<T>, {0x168, 8, 0, 0})
	DMember(float)                                     DepthOffset                                                 OFFSET(get<float>, {0x170, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x174, 16, 0, 0})
	SMember(FSlateBrush)                               Brush                                                       OFFSET(getStruct<T>, {0x190, 208, 0, 0})
	SMember(FMargin)                                   SpineBoundMargin                                            OFFSET(getStruct<T>, {0x260, 16, 0, 0})
	SMember(FVector2D)                                 SpinePivot                                                  OFFSET(getStruct<T>, {0x270, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BeforeUpdateWorldTransform                                  OFFSET(getStruct<T>, {0x278, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AfterUpdateWorldTransform                                   OFFSET(getStruct<T>, {0x288, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  animationStart                                              OFFSET(getStruct<T>, {0x298, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AnimationInterrupt                                          OFFSET(getStruct<T>, {0x2A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AnimationEvent                                              OFFSET(getStruct<T>, {0x2B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AnimationComplete                                           OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  animationEnd                                                OFFSET(getStruct<T>, {0x2D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AnimationDispose                                            OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   atlasNormalBlendMaterials                                   OFFSET(get<T>, {0x340, 16, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   atlasAdditiveBlendMaterials                                 OFFSET(get<T>, {0x3A0, 16, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   atlasMultiplyBlendMaterials                                 OFFSET(get<T>, {0x400, 16, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   atlasScreenBlendMaterials                                   OFFSET(get<T>, {0x460, 16, 0, 0})
	CMember(TSet<UTrackEntry*>)                        trackEntries                                                OFFSET(get<T>, {0x6B0, 80, 0, 0})
	DMember(bool)                                      bAutoPlaying                                                OFFSET(get<bool>, {0x700, 1, 0, 0})


	/// Functions
	// Function /Script/SpinePlugin.SpineWidget.UpdateWorldTransform
	// void UpdateWorldTransform();                                                                                             // [0x11f4320] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.Tick
	// void Tick(float DeltaTime, bool CallDelegates);                                                                          // [0x11f4220] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetToSetupPose
	// void SetToSetupPose();                                                                                                   // [0x11f40e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetTimeScale
	// void SetTimeScale(float TimeScale);                                                                                      // [0x11f3fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetSlotsToSetupPose
	// void SetSlotsToSetupPose();                                                                                              // [0x11f3f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetSlotColor
	// void SetSlotColor(FString SlotName, FColor SlotColor);                                                                   // [0x11f3dc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetSkins
	// bool SetSkins(TArray<FString>& SkinNames);                                                                               // [0x11f3bb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetSkin
	// bool SetSkin(FString SkinName);                                                                                          // [0x11f39d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetScaleY
	// void SetScaleY(float ScaleY);                                                                                            // [0x11f3850] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetScaleX
	// void SetScaleX(float ScaleX);                                                                                            // [0x11f3750] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetPlaybackTime
	// void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);                                                         // [0x11f35f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetPhysicsTimeScale
	// void SetPhysicsTimeScale(float Scale);                                                                                   // [0x11f3490] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetEmptyAnimation
	// class UTrackEntry* SetEmptyAnimation(int32_t TrackIndex, float mixDuration);                                             // [0x11f2fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetBonesToSetupPose
	// void SetBonesToSetupPose();                                                                                              // [0x11f2e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetAutoPlay
	// void SetAutoPlay(bool bInAutoPlays);                                                                                     // [0x11f2cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetAttachment
	// bool SetAttachment(FString SlotName, FString attachmentName);                                                            // [0x11f2ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetAnimation
	// class UTrackEntry* SetAnimation(int32_t TrackIndex, FString AnimationName, bool Loop);                                   // [0x11f2600] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.ResetPhysicsConstraints
	// void ResetPhysicsConstraints();                                                                                          // [0x11f2340] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.PhysicsTranslate
	// void PhysicsTranslate(float X, float Y);                                                                                 // [0x11f2250] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.PhysicsRotate
	// void PhysicsRotate(float X, float Y, float degrees);                                                                     // [0x11f2060] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.HasSlot
	// bool HasSlot(FString SlotName);                                                                                          // [0x11f1e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.HasSkin
	// bool HasSkin(FString SkinName);                                                                                          // [0x11f1c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.HasBone
	// bool HasBone(FString BoneName);                                                                                          // [0x11f1a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.HasAnimation
	// bool HasAnimation(FString AnimationName);                                                                                // [0x11f1840] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.GetTimeScale
	// float GetTimeScale();                                                                                                    // [0x11f15d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.GetSlots
	// void GetSlots(TArray<FString>& Slots);                                                                                   // [0x11f14d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SpinePlugin.SpineWidget.GetSkins
	// void GetSkins(TArray<FString>& Skins);                                                                                   // [0x11f1330] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SpinePlugin.SpineWidget.GetScaleY
	// float GetScaleY();                                                                                                       // [0x11f1230] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.GetScaleX
	// float GetScaleX();                                                                                                       // [0x11f11d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.GetPhysicsTimeScale
	// float GetPhysicsTimeScale();                                                                                             // [0x11f1170] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.GetCurrent
	// class UTrackEntry* GetCurrent(int32_t TrackIndex);                                                                       // [0x11f0e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.GetBoneTransform
	// FTransform GetBoneTransform(FString BoneName);                                                                           // [0x11f0a90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.GetBones
	// void GetBones(TArray<FString>& Bones);                                                                                   // [0x11f0d00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SpinePlugin.SpineWidget.GetAnimations
	// void GetAnimations(TArray<FString>& Animations);                                                                         // [0x11f09c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SpinePlugin.SpineWidget.getAnimationDuration
	// float getAnimationDuration(FString AnimationName);                                                                       // [0x11f0700] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.ClearTracks
	// void ClearTracks();                                                                                                      // [0x11f0540] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.ClearTrack
	// void ClearTrack(int32_t TrackIndex);                                                                                     // [0x11f0490] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.AddEmptyAnimation
	// class UTrackEntry* AddEmptyAnimation(int32_t TrackIndex, float mixDuration, float Delay);                                // [0x11f0260] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.AddAnimation
	// class UTrackEntry* AddAnimation(int32_t TrackIndex, FString AnimationName, bool Loop, float Delay);                      // [0x11effa0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/SpinePlugin.SpineEvent
/// Size: 0x0030 (0x000000 - 0x000030)
class FSpineEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   StringValue                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   IntValue                                                    OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x28, 4, 0, 0})
};


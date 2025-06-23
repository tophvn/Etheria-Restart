
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AkAudio
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: CustomPreview
/// dependency: Engine
/// dependency: EthInput
/// dependency: GameCommon
/// dependency: GameFlowsheetRuntime
/// dependency: GameplayTags
/// dependency: Gauntlet
/// dependency: InputCore
/// dependency: KV_ObjectPool
/// dependency: KV_Sequence
/// dependency: LevelSequence
/// dependency: MediaAssets
/// dependency: MovieScene
/// dependency: NavigationSystem
/// dependency: Paper2D
/// dependency: ProceduralMeshComponent
/// dependency: RuntimeLogViewer
/// dependency: SignificanceManager
/// dependency: Slate
/// dependency: SlateCore
/// dependency: SpinePlugin
/// dependency: StorylineRuntime
/// dependency: UMG
/// dependency: XDMaterialLib

/// Class /Script/GameUE.AccessVolume
/// Size: 0x0020 (0x000258 - 0x000278)
class AAccessVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	DMember(bool)                                      bAccessable                                                 OFFSET(get<bool>, {0x260, 1, 0, 0})
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x264, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.AccessVolume.GetAccessable
	// bool GetAccessable();                                                                                                    // [0x15d3b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AccessVolume.CheckPointOverlap
	// bool CheckPointOverlap(FVector& Point);                                                                                  // [0x15d3640] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.AccessVolume.CheckComponentOverlap
	// bool CheckComponentOverlap(class USceneComponent* SceneComponent);                                                       // [0x15d3420] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AccessVolume.CheckActorOverlap
	// bool CheckActorOverlap(class AActor* InActor);                                                                           // [0x15d3380] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.ActorEffect
/// Size: 0x0010 (0x000028 - 0x000038)
class UActorEffect : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ScriptName                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameUE.LuaActorComponent
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class ULuaActorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/GameUE.ActorEffectComponent
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UActorEffectComponent : public ULuaActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<class UActorEffect*>)               EffectTimeline                                              OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/GameUE.ActorPool
/// Size: 0x0018 (0x000028 - 0x000040)
class UActorPool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UClass*)                             Class                                                       OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<class AActor*>)                     PooledActors                                                OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/GameUE.ActorUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UActorUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.ActorUtils.ToggleCharacterDynamicShadow
	// void ToggleCharacterDynamicShadow(class UPrimitiveComponent* InComponent, bool bShadow);                                 // [0x15d5890] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.ActorUtils.SpawnActorByPrimaryId
	// class AActor* SpawnActorByPrimaryId(class UObject* InWorldContextObject, FString InPrimaryId, FTransform& InTransform);  // [0x15d5680] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ActorUtils.SetOnlyOwnerSee
	// void SetOnlyOwnerSee(class AActor* InActor, bool Value);                                                                 // [0x15d51d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.ActorUtils.LineRaycastSocket
	// bool LineRaycastSocket(class UObject* WorldContextObject, FVector& Start, class USkinnedMeshComponent* Comp, FName SocketName); // [0x15d4850] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ActorUtils.LineRaycastAnySockets
	// bool LineRaycastAnySockets(class UObject* WorldContextObject, FVector& Start, class USkinnedMeshComponent* Comp, TArray<FName>& SocketName); // [0x15d46d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ActorUtils.LineRaycastAllSockets
	// bool LineRaycastAllSockets(class UObject* WorldContextObject, FVector& Start, class USkinnedMeshComponent* Comp, TArray<FName>& SocketName); // [0x15d4550] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ActorUtils.GetTransformDistance
	// FTransform GetTransformDistance(FTransform& DestTransform, FTransform& SrcTransform);                                    // [0x15d43d0] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/GameUE.ActorUtils.GetSkeletalSocketTransform
	// FTransform GetSkeletalSocketTransform(class USkinnedMeshComponent* Mesh, FName SocketName);                              // [0x15d42d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ActorUtils.GetRelativeTransform
	// FTransform GetRelativeTransform(class AActor* InActor);                                                                  // [0x15d4210] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ActorUtils.GetPlainNameString
	// FString GetPlainNameString(class UObject* Object);                                                                       // [0x15d4140] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.ActorUtils.GetLevelActorsByTag
	// void GetLevelActorsByTag(class UObject* WorldContextObject, FName Level, FName Tag, TArray<AActor*>& OutActors);         // [0x15d3fa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.ActorUtils.GetComponentByName
	// class UActorComponent* GetComponentByName(class UObject* InWorldContextObject, class AActor* InActor, FName& InName);    // [0x15d3e10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.ActorUtils.GetActorOfClass
	// void GetActorOfClass(class UObject* WorldContextObject, class UClass* ActorClass, class AActor*& OutActor);              // [0x15d3d00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.ActorUtils.GetActorDisplayName
	// FString GetActorDisplayName(class AActor* Actor);                                                                        // [0x15d3c30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.ActorUtils.GetActorByName
	// class AActor* GetActorByName(class UObject* InWorldContextObject, FString InName);                                       // [0x15d3b40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.ActorUtils.FindRandomPointExcept
	// FVector FindRandomPointExcept(class USceneComponent* InComponent, FVector Extent, FVector ExceptCenter, FVector ExceptExtent); // [0x15d3980] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ActorUtils.FindRandomPoint
	// FVector FindRandomPoint(class USceneComponent* InComponent, FVector Extent);                                             // [0x15d3890] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ActorUtils.ConsumeRootMotion
	// FRootMotionMovementParams ConsumeRootMotion(class UObject* WorldContextObject, class USkeletalMeshComponent* InMeshComp); // [0x15d36e0] Final|Native|Static|Public 
	// Function /Script/GameUE.ActorUtils.CheckInsideBox
	// bool CheckInsideBox(FTransform& Transform, FVector& Extent, FVector& Location);                                          // [0x15d34c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ActorUtils.AccumulateRootMotion
	// FTransform AccumulateRootMotion(class AActor* InActor, class USkeletalMeshComponent* InMeshComp, FRootMotionMovementParams& InParam); // [0x15d2eb0] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/GameUE.ActorUtils.AcceptRootMotionWithDrift
	// void AcceptRootMotionWithDrift(class AActor* InActor, FTransform& OriginTransform, FTransform& RMTransform);             // [0x15d2d00] Final|Native|Static|Public|HasOutParms|HasDefaults 
};

/// Class /Script/GameUE.VehicleMovementComponent
/// Size: 0x0358 (0x000138 - 0x000490)
class UVehicleMovementComponent : public UPawnMovementComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	SMember(FMulticastInlineDelegate)                  OnVehicleInertance                                          OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVehicleInertanceEnd                                       OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVehicleHitWall                                            OFFSET(getStruct<T>, {0x158, 16, 0, 0})
	SMember(FRootMotionMovementParams)                 RootMotionParams                                            OFFSET(getStruct<T>, {0x170, 64, 0, 0})
	DMember(float)                                     MaxForwardSpeed                                             OFFSET(get<float>, {0x1B0, 4, 0, 0})
	DMember(float)                                     TurnOffsetRate                                              OFFSET(get<float>, {0x1B4, 4, 0, 0})
	DMember(float)                                     OffsetLimit                                                 OFFSET(get<float>, {0x1B8, 4, 0, 0})
	DMember(float)                                     LerpRate                                                    OFFSET(get<float>, {0x1C0, 4, 0, 0})
	DMember(float)                                     Gravity                                                     OFFSET(get<float>, {0x1C4, 4, 0, 0})
	DMember(float)                                     InertanceIgnoreTime                                         OFFSET(get<float>, {0x1CC, 4, 0, 0})
	DMember(float)                                     ShakeIgnoreHeight                                           OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     InertanceRecoverTime                                        OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     MaxDeltaTime                                                OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(bool)                                      bShowRunningRoute                                           OFFSET(get<bool>, {0x1DC, 1, 0, 0})
	DMember(bool)                                      bUsePhysicalSimulated                                       OFFSET(get<bool>, {0x1DD, 1, 0, 0})
	DMember(float)                                     JumpCameraGravity                                           OFFSET(get<float>, {0x1E0, 4, 0, 0})
	SMember(FString)                                   StartPointSymbol                                            OFFSET(getStruct<T>, {0x1E8, 16, 0, 0})
	CMember(class AMapNavPoint*)                       StartNavPoint                                               OFFSET(get<T>, {0x1F8, 8, 0, 0})
	CMember(TMap<FString, class AMapNavPoint*>)        NavPointDict                                                OFFSET(get<T>, {0x200, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.VehicleMovementComponent.SetVehicleSpeed
	// void SetVehicleSpeed(float VehicleSpeed);                                                                                // [0x165ca30] Final|Native|Public  
	// Function /Script/GameUE.VehicleMovementComponent.SetSideSpeed
	// void SetSideSpeed(float Val);                                                                                            // [0x165c560] Final|Native|Public  
	// Function /Script/GameUE.VehicleMovementComponent.ModifyPath
	// void ModifyPath(FString StartPointName);                                                                                 // [0x165bdb0] Final|Native|Public  
	// Function /Script/GameUE.VehicleMovementComponent.GetNavPointDict
	// TMap<FString, AMapNavPoint*> GetNavPointDict(FString StartPointSymbol);                                                  // [0x165b270] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.VehicleMovementComponent.ActiveRootMotion
	// void ActiveRootMotion(bool bInActive);                                                                                   // [0x165a0b0] Final|Native|Public  
	// Function /Script/GameUE.VehicleMovementComponent.ActiveMovement
	// void ActiveMovement(bool bInActive);                                                                                     // [0x165a020] Final|Native|Public  
};

/// Class /Script/GameUE.AIVehicleMovementComponent
/// Size: 0x0000 (0x000490 - 0x000490)
class UAIVehicleMovementComponent : public UVehicleMovementComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
};

/// Class /Script/GameUE.AnimateSpriteInstance
/// Size: 0x0030 (0x000028 - 0x000058)
class UAnimateSpriteInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UPaperFlipbook*)                     DefaultFlipBook                                             OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UPaperFlipbook*)                     CurrentFlipBook                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UPaperFlipbook*)                     TransFlipBook                                               OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UPaperFlipbook*)                     AimFlipBook                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UPaperSprite*)                       CurrentSprite                                               OFFSET(get<T>, {0x48, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.AnimateSpriteInstance.Tick
	// void Tick(float DeltaTime);                                                                                              // [0x15d5810] Final|Native|Public  
	// Function /Script/GameUE.AnimateSpriteInstance.SetLoop
	// void SetLoop(bool bLoop);                                                                                                // [0x15d4f20] Final|Native|Public  
	// Function /Script/GameUE.AnimateSpriteInstance.SetDefaultFlipBook
	// void SetDefaultFlipBook(class UPaperFlipbook* flipbook);                                                                 // [0x15d4ca0] Final|Native|Public  
	// Function /Script/GameUE.AnimateSpriteInstance.GetCurrentSprite
	// class UPaperSprite* GetCurrentSprite();                                                                                  // [0x15d3f20] Final|Native|Public  
	// Function /Script/GameUE.AnimateSpriteInstance.AnimateSprite
	// void AnimateSprite(class UPaperFlipbook* flipbook, class UPaperFlipbook* InTransFlipBook);                               // [0x15d32b0] Final|Native|Public  
};

/// Class /Script/GameUE.AnimateSpriteComponent
/// Size: 0x00D8 (0x0001F8 - 0x0002D0)
class UAnimateSpriteComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	DMember(int32_t)                                   MaterialIndex                                               OFFSET(get<int32_t>, {0x1F8, 4, 0, 0})
	CMember(class UPaperFlipbook*)                     DefaultFlipBook                                             OFFSET(get<T>, {0x200, 8, 0, 0})
	CMember(class UPaperFlipbook*)                     DefaultTransFlipBook                                        OFFSET(get<T>, {0x208, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                TargetComponent                                             OFFSET(get<T>, {0x210, 8, 0, 0})
	CMember(TMap<EAnimateSpriteSlot, class UAnimateSpriteInstance*>) SlotAnimSpriteInstances                       OFFSET(get<T>, {0x218, 80, 0, 0})
	CMember(TMap<EAnimateSpriteSlot, bool>)            SlotStates                                                  OFFSET(get<T>, {0x268, 80, 0, 0})
	CMember(EAnimateSpriteSlot)                        ActivedSlot                                                 OFFSET(get<T>, {0x2B8, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.AnimateSpriteComponent.SetLoop
	// void SetLoop(EAnimateSpriteSlot Slot, bool bLoop);                                                                       // [0x15d4e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimateSpriteComponent.SetDefaultFlipBook
	// void SetDefaultFlipBook(EAnimateSpriteSlot Slot, class UPaperFlipbook* flipbook);                                        // [0x15d4bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimateSpriteComponent.SequenceTick
	// void SequenceTick();                                                                                                     // [0x15d4a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimateSpriteComponent.ManualTick
	// void ManualTick(float DeltaTime);                                                                                        // [0x15d49b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimateSpriteComponent.EnableAutoTick
	// void EnableAutoTick(bool bEnable);                                                                                       // [0x15d3800] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimateSpriteComponent.AnimateSprite
	// void AnimateSprite(EAnimateSpriteSlot Slot, class UPaperFlipbook* flipbook, class UPaperFlipbook* InTransFlipBook);      // [0x15d31a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimateSpriteComponent.AnimateSequenceSprite
	// void AnimateSequenceSprite(class UPaperFlipbook* flipbook);                                                              // [0x15d3110] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimateSpriteComponent.ActiveSlot
	// void ActiveSlot(EAnimateSpriteSlot Slot, bool bActive);                                                                  // [0x15d3040] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.AnimNotify_Event
/// Size: 0x0038 (0x000038 - 0x000070)
class UAnimNotify_Event : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   NotifyName                                                  OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(EAnimEvent)                                AnimEvent                                                   OFFSET(get<T>, {0x48, 1, 0, 0})
	DMember(char)                                      Index                                                       OFFSET(get<char>, {0x49, 1, 0, 0})
	CMember(EHurtAnimType)                             HurtType                                                    OFFSET(get<T>, {0x4A, 1, 0, 0})
	DMember(float)                                     SlomoRate                                                   OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     SlomoDuration                                               OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(class UAkAudioEvent*)                      AkEvent                                                     OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(float)                                     AkEventDelayTime                                            OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Class /Script/GameUE.AnimFXNotify_Event
/// Size: 0x0040 (0x000070 - 0x0000B0)
class UAnimFXNotify_Event : public UAnimNotify_Event
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<class UParticleSystem*>)    PSTemplate                                                  OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x98, 8, 0, 0})
	SMember(FName)                                     Socket2Name                                                 OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
	DMember(int32_t)                                   Type                                                        OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
};

/// Class /Script/GameUE.AnimNotify_AnimateSprite
/// Size: 0x0010 (0x000038 - 0x000048)
class UAnimNotify_AnimateSprite : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   MaterialIndex                                               OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	CMember(class UPaperFlipbook*)                     flipbook                                                    OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/GameUE.AnimNotify_CvEvent
/// Size: 0x0008 (0x000040 - 0x000048)
class UAnimNotify_CvEvent : public UAnimNotify_AkEventBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UAkAudioEvent*)                      Event                                                       OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/GameUE.AnimNotify_PlaySoftParticleEffect
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UAnimNotify_PlaySoftParticleEffect : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TWeakObjectPtr<class UParticleSystem*>)    PSTemplate                                                  OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<UParticleSystem*>>)  PSTemplateArray                                             OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FVector)                                   LocationOffset                                              OFFSET(getStruct<T>, {0x70, 12, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              OFFSET(getStruct<T>, {0x7C, 12, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x88, 12, 0, 0})
	DMember(int16_t)                                   TranslucencySortPriority                                    OFFSET(get<int16_t>, {0x94, 2, 0, 0})
	DMember(int16_t)                                   PSArrayIndex                                                OFFSET(get<int16_t>, {0x96, 2, 0, 0})
	DMember(bool)                                      Attached                                                    OFFSET(get<bool>, {0xB4, 1, 1, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0xB8, 8, 0, 0})
};

/// Class /Script/GameUE.AnimNotify_FakePlaySoftParticleEffect
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UAnimNotify_FakePlaySoftParticleEffect : public UAnimNotify_PlaySoftParticleEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/GameUE.AnimNotify_SlomoEvent
/// Size: 0x0040 (0x000038 - 0x000078)
class UAnimNotify_SlomoEvent : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     SlomoRate                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     SlomoDuration                                               OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(class UCurveFloat*)                        SlomoCurve                                                  OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/GameUE.AnimNotify_Sound
/// Size: 0x0020 (0x000038 - 0x000058)
class UAnimNotify_Sound : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class USoundBase*)                         Sound                                                       OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(float)                                     VolumeMultiplier                                            OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     PitchMultiplier                                             OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(bool)                                      bFollow                                                     OFFSET(get<bool>, {0x48, 1, 1, 0})
	SMember(FName)                                     AttachName                                                  OFFSET(getStruct<T>, {0x4C, 8, 0, 0})
};

/// Class /Script/GameUE.AnimNotifyState_AnimateSprite
/// Size: 0x0010 (0x000030 - 0x000040)
class UAnimNotifyState_AnimateSprite : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   MaterialIndex                                               OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(class UPaperFlipbook*)                     flipbook                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/GameUE.AnimNotifyState_SoftParticleTimedEffect
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UAnimNotifyState_SoftParticleTimedEffect : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TWeakObjectPtr<class UParticleSystem*>)    PSTemplate                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<UParticleSystem*>>)  PSTemplateArray                                             OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FVector)                                   LocationOffset                                              OFFSET(getStruct<T>, {0x70, 12, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              OFFSET(getStruct<T>, {0x7C, 12, 0, 0})
	DMember(bool)                                      bDestroyAtEnd                                               OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(int16_t)                                   TranslucencySortPriority                                    OFFSET(get<int16_t>, {0x8A, 2, 0, 0})
	DMember(int16_t)                                   PSArrayIndex                                                OFFSET(get<int16_t>, {0x8C, 2, 0, 0})
};

/// Class /Script/GameUE.AnimNotifyState_SoftParticleTrail
/// Size: 0x0060 (0x000030 - 0x000090)
class UAnimNotifyState_SoftParticleTrail : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TWeakObjectPtr<class UParticleSystem*>)    PSTemplate                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<UParticleSystem*>>)  PSTemplateArray                                             OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FName)                                     FirstSocketName                                             OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     SecondSocketName                                            OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	CMember(TEnumAsByte<ETrailWidthMode>)              WidthScaleMode                                              OFFSET(get<T>, {0x78, 1, 0, 0})
	SMember(FName)                                     WidthScaleCurve                                             OFFSET(getStruct<T>, {0x7C, 8, 0, 0})
	DMember(bool)                                      bRecycleSpawnedSystems                                      OFFSET(get<bool>, {0x84, 1, 1, 0})
	DMember(int16_t)                                   TranslucencySortPriority                                    OFFSET(get<int16_t>, {0x88, 2, 0, 0})
	DMember(int16_t)                                   PSArrayIndex                                                OFFSET(get<int16_t>, {0x8A, 2, 0, 0})


	/// Functions
	// Function /Script/GameUE.AnimNotifyState_SoftParticleTrail.OverridePSTemplate
	// class UParticleSystem* OverridePSTemplate(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);   // [0x198a600] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/GameUE.AnimTextBlock
/// Size: 0x01D8 (0x000148 - 0x000320)
class UAnimTextBlock : public UTextLayoutWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	DMember(int32_t)                                   NumBegin                                                    OFFSET(get<int32_t>, {0x148, 4, 0, 0})
	DMember(int32_t)                                   NumFinal                                                    OFFSET(get<int32_t>, {0x14C, 4, 0, 0})
	DMember(float)                                     NumLerpAlpha                                                OFFSET(get<float>, {0x150, 4, 0, 0})
	SMember(FSlateColor)                               ColorAndOpacity                                             OFFSET(getStruct<T>, {0x158, 40, 0, 0})
	SMember(FDelegateProperty)                         ColorAndOpacityDelegate                                     OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x190, 88, 0, 0})
	SMember(FSlateBrush)                               StrikeBrush                                                 OFFSET(getStruct<T>, {0x1F0, 208, 0, 0})
	SMember(FVector2D)                                 ShadowOffset                                                OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	SMember(FLinearColor)                              ShadowColorAndOpacity                                       OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
	SMember(FDelegateProperty)                         ShadowColorAndOpacityDelegate                               OFFSET(getStruct<T>, {0x2D8, 16, 0, 0})
	DMember(float)                                     MinDesiredWidth                                             OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(bool)                                      bWrapWithInvalidationPanel                                  OFFSET(get<bool>, {0x2EC, 1, 0, 0})
	CMember(ETextTransformPolicy)                      TextTransformPolicy                                         OFFSET(get<T>, {0x2ED, 1, 0, 0})
	DMember(bool)                                      bSimpleTextMode                                             OFFSET(get<bool>, {0x2EE, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.AnimTextBlock.SetTextTransformPolicy
	// void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);                                                     // [0x15d5600] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimTextBlock.SetStrikeBrush
	// void SetStrikeBrush(FSlateBrush InStrikeBrush);                                                                          // [0x15d5420] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimTextBlock.SetShadowOffset
	// void SetShadowOffset(FVector2D InShadowOffset);                                                                          // [0x15d53a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.AnimTextBlock.SetShadowColorAndOpacity
	// void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);                                                     // [0x15d5310] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.AnimTextBlock.SetOpacity
	// void SetOpacity(float InOpacity);                                                                                        // [0x15d5290] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimTextBlock.SetNumLerpAlpha
	// void SetNumLerpAlpha(float InNumLerpAlpha);                                                                              // [0x15d5150] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimTextBlock.SetNumFinal
	// void SetNumFinal(int32_t InNumFinal);                                                                                    // [0x15d50c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimTextBlock.SetNumBegin
	// void SetNumBegin(int32_t InNumBegin);                                                                                    // [0x15d5030] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimTextBlock.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                        // [0x15d4fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimTextBlock.SetFont
	// void SetFont(FSlateFontInfo InFontInfo);                                                                                 // [0x15d4d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimTextBlock.SetColorAndOpacity
	// void SetColorAndOpacity(FSlateColor InColorAndOpacity);                                                                  // [0x15d4ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimTextBlock.SetAutoWrapText
	// void SetAutoWrapText(bool InAutoTextWrap);                                                                               // [0x15d4a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimTextBlock.GetNumShow
	// int32_t GetNumShow();                                                                                                    // [0x15d4110] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimTextBlock.GetDynamicOutlineMaterial
	// class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();                                                             // [0x15d3f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimTextBlock.GetDynamicFontMaterial
	// class UMaterialInstanceDynamic* GetDynamicFontMaterial();                                                                // [0x15d3f40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.AnimUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.AnimUtils.GetNotifyTime
	// float GetNotifyTime(class UObject* WorldContextObject, class UAnimSequence* AnimInst, FString NotifyName);               // [0x15d9580] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.AnimUtils.ExtractRootMotion
	// FTransform ExtractRootMotion(class UObject* WorldContextObject, class UAnimSequence* AnimInst, float BeginPos, float EndPos); // [0x15d8f80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.AssetCacheLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAssetCacheLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.AssetCacheLibrary.UnsetCacheAsset
	// void UnsetCacheAsset(int32_t LayerId, FName& Bucket);                                                                    // [0x15d87e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.AssetCacheLibrary.UnregisterAssetLayer
	// void UnregisterAssetLayer(int32_t LayerId);                                                                              // [0x13f9af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.AssetCacheLibrary.SetLayerActived
	// void SetLayerActived(int32_t LayerId, bool bActived);                                                                    // [0x15daae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.AssetCacheLibrary.SetCacheAsset
	// void SetCacheAsset(int32_t LayerId, FName& Bucket, TArray<FString>& Assets);                                             // [0x15d8520] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.AssetCacheLibrary.RemoveCacheSoftClass
	// void RemoveCacheSoftClass(int32_t LayerId, FName& Bucket, TSoftObjectPtr<UClass*>& SoftAsset);                           // [0x15d8680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.AssetCacheLibrary.RemoveCacheSoftAsset
	// void RemoveCacheSoftAsset(int32_t LayerId, FName& Bucket, TWeakObjectPtr<UObject*>& SoftAsset);                          // [0x15d8680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.AssetCacheLibrary.RemoveCacheAsset
	// void RemoveCacheAsset(int32_t LayerId, FName& Bucket, TArray<FString>& Assets);                                          // [0x15d8520] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.AssetCacheLibrary.RegisterStaticBucket
	// void RegisterStaticBucket(FName& Bucket, TArray<FString>& Assets);                                                       // [0x15da320] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.AssetCacheLibrary.RegisterAssetLayer
	// void RegisterAssetLayer(int32_t LayerId, TSet<FName>& Disables);                                                         // [0x15da1a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.AssetCacheLibrary.HasStaticBucket
	// bool HasStaticBucket(FName& Bucket);                                                                                     // [0x15d9bc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.AssetCacheLibrary.GetPrimaryAssetPathFromSoftObject
	// FString GetPrimaryAssetPathFromSoftObject(TWeakObjectPtr<UObject*>& SoftAsset);                                          // [0x15d96e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.AssetCacheLibrary.GetPrimaryAssetPathFromSoftClass
	// FString GetPrimaryAssetPathFromSoftClass(TSoftObjectPtr<UClass*>& SoftAsset);                                            // [0x15d96e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.AssetCacheLibrary.EmptyAssetLayer
	// void EmptyAssetLayer(int32_t LayerId);                                                                                   // [0x13f9af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.AssetCacheLibrary.AddStaticBucket
	// void AddStaticBucket(int32_t LayerId, FName& Bucket);                                                                    // [0x15d87e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.AssetCacheLibrary.AddCacheSoftClass
	// void AddCacheSoftClass(int32_t LayerId, FName& Bucket, TSoftObjectPtr<UClass*>& SoftAsset);                              // [0x15d8680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.AssetCacheLibrary.AddCacheSoftAsset
	// void AddCacheSoftAsset(int32_t LayerId, FName& Bucket, TWeakObjectPtr<UObject*>& SoftAsset);                             // [0x15d8680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.AssetCacheLibrary.AddCacheAsset
	// void AddCacheAsset(int32_t LayerId, FName& Bucket, TArray<FString>& Assets);                                             // [0x15d8520] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.AudioIndoorVolume
/// Size: 0x0028 (0x000258 - 0x000280)
class AAudioIndoorVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x258, 16, 0, 0})
	DMember(bool)                                      bIndoor                                                     OFFSET(get<bool>, {0x268, 1, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x26C, 4, 0, 0})
	SMember(FName)                                     PlayerTag                                                   OFFSET(getStruct<T>, {0x270, 8, 0, 0})
	DMember(bool)                                      InfinitExtend                                               OFFSET(get<bool>, {0x278, 1, 0, 0})
};

/// Class /Script/GameUE.AutomationAgent
/// Size: 0x00F0 (0x000028 - 0x000118)
class UAutomationAgent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	DMember(bool)                                      bUseRandomAccount                                           OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FString)                                   Account                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   Password                                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   RegionId                                                    OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   ServerId                                                    OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	SMember(FString)                                   channelId                                                   OFFSET(getStruct<T>, {0x58, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.AutomationAgent.SetAutomationState
	// void SetAutomationState(FName& Name, int32_t State);                                                                     // [0x15da580] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.AutomationAgent.SetAutomationOption
	// void SetAutomationOption(FName& OptionName, bool bSet);                                                                  // [0x15da4a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.AutomationAgent.Get
	// class UAutomationAgent* Get();                                                                                           // [0x15d9120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.AutomationAgent.EnqueueAutomationNotify
	// void EnqueueAutomationNotify(FName& Name, int32_t Relative);                                                             // [0x15d8eb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.AutomationAgent.CheckAutomationOption
	// bool CheckAutomationOption(FName& OptionName);                                                                           // [0x15d8e10] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.AutomationController
/// Size: 0x0000 (0x000028 - 0x000028)
class UAutomationController : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.AutomationController.AutomationTick
	// void AutomationTick(float DeltaTime);                                                                                    // [0x15d88b0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.AutomationController.AutomationInit
	// void AutomationInit();                                                                                                   // [0xc4c170] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.AutomationHelperLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAutomationHelperLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.AutomationHelperLibrary.GetUserWidgetInViewport
	// class UUserWidget* GetUserWidgetInViewport(class UUIScript* UI, FString InName);                                         // [0x15d9a80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.AutomationHelperLibrary.GetUserWidget
	// class UUserWidget* GetUserWidget(class UUIScript* UI, FString InName);                                                   // [0x15d9a80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.AutomationHelperLibrary.GetUI
	// class UUIScript* GetUI(class UStageScript* StageScript, int32_t ID);                                                     // [0x15d99b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.AutomationHelperLibrary.GetCurrentStage
	// class UStageScript* GetCurrentStage(class UObject* WorldContextObject);                                                  // [0x15d94b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.HotInputInfo
/// Size: 0x0038 (0x000028 - 0x000060)
class UHotInputInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UWidget*)                            Widget                                                      OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(int32_t)                                   Layer                                                       OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FAnchors)                                  Anchor                                                      OFFSET(getStruct<T>, {0x34, 16, 0, 0})
	SMember(FVector2D)                                 Offset                                                      OFFSET(getStruct<T>, {0x44, 8, 0, 0})
	SMember(FDelegateProperty)                         Delegate                                                    OFFSET(getStruct<T>, {0x4C, 16, 0, 0})
};

/// Class /Script/GameUE.BaseInputComponent
/// Size: 0x0230 (0x0000B0 - 0x0002E0)
class UBaseInputComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(class UEthInputComponent*)                 InputComponent                                              OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UWidgetInteractionComponent*)        WidgetInteractComponent                                     OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(float)                                     EditorZoomFactor                                            OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     MobileZoomFactor                                            OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0xE0, 4, 0, 0})


	/// Functions
	// Function /Script/GameUE.BaseInputComponent.UnBindHotKey
	// bool UnBindHotKey(EInputActionName Action, class UHotInputInfo* Info);                                                   // [0x15db030] Final|Native|Public  
	// Function /Script/GameUE.BaseInputComponent.SetZoomEnabled
	// void SetZoomEnabled(bool bZoom);                                                                                         // [0x15daf10] Final|Native|Public  
	// Function /Script/GameUE.BaseInputComponent.SetWidgetInteractionEnabled
	// void SetWidgetInteractionEnabled(bool bEnabled);                                                                         // [0x15dae80] Final|Native|Public  
	// Function /Script/GameUE.BaseInputComponent.SetPriority
	// void SetPriority(int32_t Priority);                                                                                      // [0x15daba0] Final|Native|Public  
	// Function /Script/GameUE.BaseInputComponent.SetHotKeyLayer
	// void SetHotKeyLayer(int32_t Layer);                                                                                      // [0x15da920] Final|Native|Public  
	// Function /Script/GameUE.BaseInputComponent.OnReset
	// void OnReset();                                                                                                          // [0x15d9e40] Final|Native|Public  
	// Function /Script/GameUE.BaseInputComponent.IsHotKeyExist
	// bool IsHotKeyExist(EInputActionName Action, class UHotInputInfo* Info);                                                  // [0x15d9d70] Final|Native|Public  
	// Function /Script/GameUE.BaseInputComponent.GetZoomValue
	// float GetZoomValue();                                                                                                    // [0x15d9b90] Final|Native|Public  
	// Function /Script/GameUE.BaseInputComponent.GetWidgetInteractionComponent
	// class UWidgetInteractionComponent* GetWidgetInteractionComponent();                                                      // [0x15d9b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BaseInputComponent.GetTouchSlide
	// FVector2D GetTouchSlide();                                                                                               // [0x15d9970] Final|Native|Public|HasDefaults 
	// Function /Script/GameUE.BaseInputComponent.GetPriority
	// int32_t GetPriority();                                                                                                   // [0x15d97f0] Final|Native|Public  
	// Function /Script/GameUE.BaseInputComponent.GetInputAxis
	// FVector2D GetInputAxis();                                                                                                // [0x15d9540] Final|Native|Public|HasDefaults 
	// Function /Script/GameUE.BaseInputComponent.GetCurInputModel
	// EInputModel GetCurInputModel();                                                                                          // [0x15d93c0] Final|Native|Public  
	// Function /Script/GameUE.BaseInputComponent.GetCurGamePadModel
	// EGamePadModel GetCurGamePadModel();                                                                                      // [0x15d9380] Final|Native|Public  
	// Function /Script/GameUE.BaseInputComponent.BindHotKeys
	// class UHotInputInfo* BindHotKeys(EInputActionName Action, class UWidget* Widget, int32_t Layer, FAnchors Anchor, FVector2D Offset); // [0x15d8c30] Final|Native|Public|HasDefaults 
};

/// Class /Script/GameUE.LuaActor
/// Size: 0x0000 (0x000220 - 0x000220)
class ALuaActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
};

/// Struct /Script/GameUE.SimpleOscillator
/// Size: 0x0008 (0x000000 - 0x000008)
class FSimpleOscillator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Amplitude                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Class /Script/GameUE.BattleActor
/// Size: 0x0120 (0x000220 - 0x000340)
class ABattleActor : public ALuaActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	DMember(bool)                                      bEnableOscillation                                          OFFSET(get<bool>, {0x220, 1, 0, 0})
	SMember(FSimpleOscillator)                         ZOscillation                                                OFFSET(getStruct<T>, {0x224, 8, 0, 0})
	SMember(FSimpleOscillator)                         YawOscillation                                              OFFSET(getStruct<T>, {0x22C, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             BodyComponent                                               OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(class UDecalComponent*)                    DecalComponent                                              OFFSET(get<T>, {0x240, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.BattleActor.UpdateDecalShadow
	// void UpdateDecalShadow();                                                                                                // [0x15db100] Final|Native|Public  
	// Function /Script/GameUE.BattleActor.SetSimpleOscillator
	// void SetSimpleOscillator(FSimpleOscillator& InZOscillator, FSimpleOscillator& InYawOscillator);                          // [0x15dacc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.BattleActor.SetEnableDecalShadow
	// void SetEnableDecalShadow(bool bEnable);                                                                                 // [0x15da890] Final|Native|Public  
	// Function /Script/GameUE.BattleActor.OscillationBlendOut
	// void OscillationBlendOut();                                                                                              // [0x15d9e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleActor.InitCharacterName
	// void InitCharacterName(FString CharacterName);                                                                           // [0x15d9c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleActor.InitCenterBoneName
	// void InitCenterBoneName();                                                                                               // [0x15d9c50] Final|Native|Public  
	// Function /Script/GameUE.BattleActor.GetSocketName
	// FString GetSocketName(FString SocketName);                                                                               // [0x15d9830] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleActor.GetParticleSystemName
	// FString GetParticleSystemName(FString DefaultPSName, FString AnimStateName);                                             // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.BattleActor.GetCharacterName
	// FString GetCharacterName();                                                                                              // [0x15d92b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleActor.GetCenterBoneLocation
	// FVector GetCenterBoneLocation();                                                                                         // [0x15d9270] Final|Native|Public|HasDefaults 
	// Function /Script/GameUE.BattleActor.GetBodyComponent
	// class USkeletalMeshComponent* GetBodyComponent();                                                                        // [0x15d91c0] Final|Native|Public  
	// Function /Script/GameUE.BattleActor.BeginOscillation
	// void BeginOscillation();                                                                                                 // [0x15d8c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleActor.BattleActor_SetTransform
	// void BattleActor_SetTransform(FTransform& Transform);                                                                    // [0x15d8b30] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.BattleActor.BattleActor_SetRotation
	// void BattleActor_SetRotation(FRotator& Rotation);                                                                        // [0x15d8aa0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.BattleActor.BattleActor_SetLocation
	// void BattleActor_SetLocation(FVector& Location);                                                                         // [0x15d8a10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.BattleActor.BattleActor_GetTransform
	// FTransform BattleActor_GetTransform();                                                                                   // [0x15d89b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.BattleActor.BattleActor_GetRotation
	// FRotator BattleActor_GetRotation();                                                                                      // [0x15d8970] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.BattleActor.BattleActor_GetLocation
	// FVector BattleActor_GetLocation();                                                                                       // [0x15d8930] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.BattleAnimComponent
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UBattleAnimComponent : public ULuaActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/GameUE.BattleAnimComponent.UpdateEffectByAnimCurve
	// void UpdateEffectByAnimCurve(TMap<FName, float>& ActiveCurveMap);                                                        // [0x198a600] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameUE.BattleCameraActor
/// Size: 0x0010 (0x0007A0 - 0x0007B0)
class ABattleCameraActor : public ACameraActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1968;

public:
	CMember(class UCameraAdaptorComponent*)            CameraAdaptorComponent                                      OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(class AActor*)                             Root                                                        OFFSET(get<T>, {0x7A8, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.BattleCameraActor.SetToInitPosition
	// void SetToInitPosition(FVector Location, FRotator Rotation);                                                             // [0x15dada0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraActor.SetRoot
	// void SetRoot(class AActor* InRoot);                                                                                      // [0x15dac30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraActor.SetCameraWorldRotation
	// void SetCameraWorldRotation(FRotator Rotation);                                                                          // [0x15da800] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraActor.SetCameraWorldLocation
	// void SetCameraWorldLocation(FVector Location);                                                                           // [0x15da770] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraActor.SetCameraRelativeRotation
	// void SetCameraRelativeRotation(FRotator Rotation);                                                                       // [0x15da6e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraActor.SetCameraRelativeLocation
	// void SetCameraRelativeLocation(FVector Location);                                                                        // [0x15da650] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraActor.ResetCameraWorldTransform
	// void ResetCameraWorldTransform();                                                                                        // [0x15da480] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraActor.ResetCameraRootTransform
	// void ResetCameraRootTransform();                                                                                         // [0x15da460] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraActor.ResetCameraRelativeTransform
	// void ResetCameraRelativeTransform();                                                                                     // [0x15da440] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraActor.GetRoot
	// class AActor* GetRoot();                                                                                                 // [0x15d9810] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraActor.GetCameraLocalSpaceRotation
	// FRotator GetCameraLocalSpaceRotation();                                                                                  // [0x15d9230] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraActor.GetCameraLocalSpaceLocation
	// FVector GetCameraLocalSpaceLocation();                                                                                   // [0x15d91f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraActor.GetBattleLocalSpaceRotation
	// FRotator GetBattleLocalSpaceRotation();                                                                                  // [0x15d9180] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraActor.GetBattleLocalSpaceLocation
	// FVector GetBattleLocalSpaceLocation();                                                                                   // [0x15d9140] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.BattleCameraShake
/// Size: 0x0018 (0x000178 - 0x000190)
class UBattleCameraShake : public UMatineeCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	DMember(bool)                                      bEnableAttenuation                                          OFFSET(get<bool>, {0x178, 1, 0, 0})
	CMember(EAlphaBlendOption)                         AttenuationBlendCurve                                       OFFSET(get<T>, {0x179, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.BattleCameraShake.StopCameraShake
	// void StopCameraShake(bool bImmediately);                                                                                 // [0x15dafa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraShake.SetInitialSinOffset
	// void SetInitialSinOffset(FVector& InitLocSinOffset, FVector& InitRotSinOffset, float InitFOVSinOffset);                  // [0x15da9b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraShake.PostUpdateShake
	// void PostUpdateShake(float DeltaTime, float Alpha, FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);                // [0x15d9f00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraShake.PostStartShake
	// void PostStartShake(float Scale);                                                                                        // [0x15d9e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraShake.GetCurrentRotSinOffset
	// FVector GetCurrentRotSinOffset();                                                                                        // [0x15d9470] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraShake.GetCurrentLocSinOffset
	// FVector GetCurrentLocSinOffset();                                                                                        // [0x15d9430] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.BattleCameraShake.GetCurrentFOVSinOffset
	// float GetCurrentFOVSinOffset();                                                                                          // [0x15d9400] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.BattleEnvRoot
/// Size: 0x0018 (0x000220 - 0x000238)
class ABattleEnvRoot : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:


	/// Functions
	// Function /Script/GameUE.BattleEnvRoot.VectorToBattleLocalSpace
	// FVector VectorToBattleLocalSpace(FVector& InVector);                                                                     // [0x15e20c0] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/GameUE.BattleEnvRoot.SetEnvRootOffset
	// void SetEnvRootOffset(FVector& Location, FRotator& Rotation);                                                            // [0x15e1990] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/GameUE.BattleEnvRoot.RotationToBattleLocalSpace
	// FRotator RotationToBattleLocalSpace(FRotator& InRotation);                                                               // [0x15e18f0] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/GameUE.BattleEnvRoot.LocationToBattleLocalSpace
	// FVector LocationToBattleLocalSpace(FVector& InLocation);                                                                 // [0x15e1060] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/GameUE.BattleEnvRoot.Env_GetActorTransform
	// FTransform Env_GetActorTransform(class AActor* Actor, EBattleRelativeTransformSpace Space);                              // [0x15e01a0] Final|Native|Static|Public|HasDefaults 
	// Function /Script/GameUE.BattleEnvRoot.Env_GetActorRotation
	// FRotator Env_GetActorRotation(class AActor* Actor, EBattleRelativeTransformSpace Space);                                 // [0x15e00c0] Final|Native|Static|Public|HasDefaults 
	// Function /Script/GameUE.BattleEnvRoot.Env_GetActorLocation
	// FVector Env_GetActorLocation(class AActor* Actor, EBattleRelativeTransformSpace Space);                                  // [0x15dffe0] Final|Native|Static|Public|HasDefaults 
};

/// Struct /Script/GameUE.DissolveParamInfo
/// Size: 0x0090 (0x000000 - 0x000090)
class FDissolveParamInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(float)                                     InitTime                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FString)                                   DissolveType                                                OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bPlayReversedFromEnd                                        OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bResetWhenFinished                                          OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      bIgnoreInvisibleMaterials                                   OFFSET(get<bool>, {0x1A, 1, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         DissolveMaterials                                           OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TMap<FString, class UMaterialInterface*>)  MaterialMapToReplace                                        OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TArray<FString>)                           MeshToIgnore                                                OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/GameUE.MaterialParamValueMap
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FMaterialParamValueMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TMap<FName, float>)                        ScalarParamValueMap                                         OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 VectorParamValueMap                                         OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TMap<FName, class UTexture*>)              TextureParamValueMap                                        OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Class /Script/GameUE.BattleMaterialComponent
/// Size: 0x02E0 (0x0000B0 - 0x000390)
class UBattleMaterialComponent : public ULuaActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(TMap<FString, FDissolveParamInfo>)         DissolveParamMap                                            OFFSET(get<T>, {0xB0, 80, 0, 0})
	CMember(TMap<FString, FMaterialParamValueMap>)     SimpleFxParamMap                                            OFFSET(get<T>, {0x100, 80, 0, 0})
	CMember(TMap<FString, FMaterialParamValueMap>)     CachedSimpleFxParamMap                                      OFFSET(get<T>, {0x150, 80, 0, 0})
	CMember(TMap<FName, float>)                        ScalarParamValueMap                                         OFFSET(get<T>, {0x1A0, 80, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 VectorParamValueMap                                         OFFSET(get<T>, {0x1F0, 80, 0, 0})
	CMember(TMap<FName, class UTexture*>)              TextureParamValueMap                                        OFFSET(get<T>, {0x240, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.BattleMaterialComponent.UpdateAnimationMaterialEffect
	// bool UpdateAnimationMaterialEffect(TMap<FName, float>& ParamMap);                                                        // [0x198a600] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameUE.BattleMaterialComponent.StopDissolve
	// void StopDissolve();                                                                                                     // [0x15e20a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleMaterialComponent.SetSimpleFxMaterial
	// void SetSimpleFxMaterial(FString SimpleFxType, bool bEnable);                                                            // [0x15e1ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleMaterialComponent.SetMaterial
	// void SetMaterial(FString FxMatName, FName& SlotName);                                                                    // [0x15e1ca0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.BattleMaterialComponent.SetFxMaterial
	// void SetFxMaterial(FString FxType, bool bEnable);                                                                        // [0x15e1a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleMaterialComponent.ResetMaterial
	// void ResetMaterial();                                                                                                    // [0x15e15e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleMaterialComponent.InitDefaultMaterialData
	// void InitDefaultMaterialData();                                                                                          // [0x15e0920] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleMaterialComponent.GetFxMaterialToReplace
	// FString GetFxMaterialToReplace(FString FxType, FString OriginalMatInstName);                                             // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.BattleMaterialComponent.GetBodyMaterial
	// class UMaterialInterface* GetBodyMaterial();                                                                             // [0x15e0610] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleMaterialComponent.ForceResetDissolve
	// void ForceResetDissolve();                                                                                               // [0x15e02a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleMaterialComponent.FilterSimpleFxMaterial
	// bool FilterSimpleFxMaterial(FString SimpleFxType, FString OriginalMatInstName);                                          // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.BattleMaterialComponent.EvaluateVectorParamValue
	// void EvaluateVectorParamValue(FString DissolveType, float Time, TMap<FName, FLinearColor>& OutParamValueMap);            // [0x198a600] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameUE.BattleMaterialComponent.EvaluateTextureParamValue
	// void EvaluateTextureParamValue(FString DissolveType, float Time, TMap<FName, UTexture*>& OutParamValueMap);              // [0x198a600] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameUE.BattleMaterialComponent.EvaluateFloatParamValueMap
	// void EvaluateFloatParamValueMap(FString DissolveType, float Time, TMap<FName, float>& OutParamValueMap);                 // [0x198a600] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameUE.BattleMaterialComponent.BeginDissolve
	// void BeginDissolve(FString DissolveType, float Duration);                                                                // [0x15dfd70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.BattleSequenceCameraModifier
/// Size: 0x0008 (0x0000D8 - 0x0000E0)
class UBattleSequenceCameraModifier : public UKV_LevelSequencePostProcess
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/GameUE.BattleSequenceConfigManager
/// Size: 0x0190 (0x000220 - 0x0003B0)
class ABattleSequenceConfigManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:


	/// Functions
	// Function /Script/GameUE.BattleSequenceConfigManager.GetSequenceConfig
	// FBattleSequenceConfig GetSequenceConfig(FString Name);                                                                   // [0x15e0770] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceConfigManager.CheckSequenceConfigExist
	// bool CheckSequenceConfigExist(FString Name);                                                                             // [0x15dfe60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.BattleSequenceLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBattleSequenceLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.BattleSequenceLibrary.SetHiddenShadow
	// void SetHiddenShadow(class UPrimitiveComponent* PrimitiveComponent, bool Value);                                         // [0x15e1b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceLibrary.RestoreMaterialParameterCollection
	// void RestoreMaterialParameterCollection(class UObject* InWorldContext, class UMaterialParameterCollection* MPC);         // [0x15e1730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceLibrary.RemoveBlendable
	// void RemoveBlendable(FPostProcessSettings& PPSettings, class UObject* Object);                                           // [0x15e14c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceLibrary.MakeBattleTransformModifier
	// class UBattleSequenceTransformModifier* MakeBattleTransformModifier(class UObject* InWorldContext, FString Name);        // [0x15e11d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceLibrary.MakeBattleCameraModifier
	// class UBattleSequenceCameraModifier* MakeBattleCameraModifier(class UObject* InWorldContext, float InSequenceViewportAspectRatio); // [0x15e1100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceLibrary.InjectSequenceModifierInstData
	// FBattleSequenceInstanceData InjectSequenceModifierInstData(class UBattleSequenceTransformModifier* Modifier, FBattleSequenceInstanceData& InstanceData); // [0x15e0ea0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceLibrary.InjectSequenceData
	// FBattleSequenceInstanceData InjectSequenceData(class UBattleSequenceTransformModifier* Modifier, FVector InTargetPosition, FVector InCasterPosition, FVector CameraPosition, float InDegree, float InScale, bool IsFriendSide, float TargetZ, class AActor* EnvRoot, class AActor* BattleCamera, class UMaterialInstance* BodyMaterial); // [0x15e0aa0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceLibrary.GetBindingIDByFlag
	// FMovieSceneObjectBindingID GetBindingIDByFlag(class ULevelSequence* Sequence, FString Name, class UBattleSequenceTransformModifier* Modifier); // [0x15e04c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceLibrary.GetAllBindingIDByTag
	// TArray<FMovieSceneObjectBindingID> GetAllBindingIDByTag(class ULevelSequence* Sequence, FName BindingTag);               // [0x15e03b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceLibrary.CreateMaterialInstanceDynamic
	// class UMaterialInstanceDynamic* CreateMaterialInstanceDynamic(class UMaterialInterface* ParentMaterial, class UObject* InOuter); // [0x15dff10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceLibrary.AddBlendable
	// void AddBlendable(FPostProcessSettings& PPSettings, class UObject* Object, float InWeight);                              // [0x15dfc10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceLibrary.AddBindingObjectByTag
	// void AddBindingObjectByTag(class ALevelSequenceActor* SequenceActor, FName BindingTag, class UObject* Object, bool bAllowBindingsFromAsset); // [0x15dfac0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceLibrary.AddBinding
	// void AddBinding(class ALevelSequenceActor* Sequence, FMovieSceneObjectBindingID Binding, class AActor* Actor, bool bAllowBindingsFromAsset); // [0x15df950] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.BattleSequenceTransformModifier
/// Size: 0x02E8 (0x0000D8 - 0x0003C0)
class UBattleSequenceTransformModifier : public UKV_LevelSequencePostProcess
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	CMember(class UBattleSequenceTransformState*)      State                                                       OFFSET(get<T>, {0x110, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.BattleSequenceTransformModifier.SetSpawnedActorsHiddenByTag
	// void SetSpawnedActorsHiddenByTag(FName& Tag, bool bHidden);                                                              // [0x15e1fc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceTransformModifier.SetPlayState
	// void SetPlayState(FBattleSequenceInstanceData& PlayState);                                                               // [0x15e1da0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceTransformModifier.SetIgnoreSequenceActorScale
	// void SetIgnoreSequenceActorScale(bool bIgnore);                                                                          // [0x15e1c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceTransformModifier.RestoreMaterialParameterCollection
	// void RestoreMaterialParameterCollection(FString MPCTrackName);                                                           // [0x15e17f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceTransformModifier.ResetPlayState
	// void ResetPlayState(FBattleSequenceInstanceData& PlayState);                                                             // [0x15e1600] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceTransformModifier.RemoveBindingByFlag
	// void RemoveBindingByFlag(FString Flag, class ULevelSequencePlayer* InPlayer);                                            // [0x15e1390] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceTransformModifier.RemoveActorBinding
	// void RemoveActorBinding(class AActor* Actor, class ULevelSequencePlayer* InPlayer);                                      // [0x15e12c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceTransformModifier.InitModifier
	// void InitModifier(FBattleSequenceConfig& InConfig);                                                                      // [0x15e0940] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceTransformModifier.GetSpawnedActorsByTag
	// TArray<AActor*> GetSpawnedActorsByTag(FName& Tag);                                                                       // [0x15e0830] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.BattleSequenceTransformModifier.GetAllBindingActors
	// TMap<FString, AActor*> GetAllBindingActors();                                                                            // [0x15e02c0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/GameUE.TransformInfo
/// Size: 0x0060 (0x000000 - 0x000060)
class FTransformInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FRotator)                                  Rotator                                                     OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	DMember(float)                                     ScaleExtra                                                  OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Class /Script/GameUE.BattleSequenceTransformState
/// Size: 0x0178 (0x000028 - 0x0001A0)
class UBattleSequenceTransformState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(TMap<FString, FString>)                    BindingMap                                                  OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TMap<FString, FTransformInfo>)             OriginTransform                                             OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TMap<FString, FTransformInfo>)             ResultTransform                                             OFFSET(get<T>, {0xC8, 80, 0, 0})
	DMember(float)                                     TimePosition                                                OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(bool)                                      IsFriendSide                                                OFFSET(get<bool>, {0x11C, 1, 0, 0})
};

/// Class /Script/GameUE.BlueprintableBoxComponent
/// Size: 0x0000 (0x000490 - 0x000490)
class UBlueprintableBoxComponent : public UBoxComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
};

/// Class /Script/GameUE.BlueprintableSphereComponent
/// Size: 0x0000 (0x000490 - 0x000490)
class UBlueprintableSphereComponent : public USphereComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
};

/// Class /Script/GameUE.BuildInfoLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBuildInfoLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.BuildInfoLibrary.GetBuildPlatformName
	// FString GetBuildPlatformName();                                                                                          // [0x15e06f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.BuildInfoLibrary.GetBuildPlatform
	// EGamePlatformType GetBuildPlatform();                                                                                    // [0x8a0fa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.BuildInfoLibrary.GetBuildConfigureName
	// FString GetBuildConfigureName();                                                                                         // [0x15e0670] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.BuildInfoLibrary.GetBuildConfigure
	// EGameBuildConfigure GetBuildConfigure();                                                                                 // [0x15e0640] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GameUE.CameraAdaptorComponent
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class UCameraAdaptorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     LastDesignFOV                                               OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(ECameraAdaptType)                          AdaptType                                                   OFFSET(get<T>, {0xB4, 4, 0, 0})
};

/// Class /Script/GameUE.CameraLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCameraLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.CameraLibrary.ResetAllCameras
	// void ResetAllCameras();                                                                                                  // [0x15e71e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraLibrary.RequestViewTarget
	// void RequestViewTarget(class ACameraActor* CameraActor, float BlendTime, int32_t Priority, bool bBlock, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp); // [0x15e7010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraLibrary.ReleaseViewTarget
	// void ReleaseViewTarget(class ACameraActor* CameraActor, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp); // [0x15e6ec0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraLibrary.ReleaseCamera
	// void ReleaseCamera(class ACameraActor* Actor, bool bBlendOut, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp); // [0x15e6d20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraLibrary.NewCamera
	// class ACameraActor* NewCamera(class UClass* Class, int32_t Priority);                                                    // [0x15e6c50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraLibrary.ManualSetViewport
	// void ManualSetViewport(class UObject* WorldContext, class AActor* Actor);                                                // [0x15e6b90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraLibrary.GetNamedCamera
	// class ACameraActor* GetNamedCamera(FString Name);                                                                        // [0x15e6720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraLibrary.FlushCameraUpdate
	// void FlushCameraUpdate();                                                                                                // [0x15e61f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraLibrary.DetachCameraName
	// void DetachCameraName(FString Name, class ACameraActor* CameraActor);                                                    // [0x15e5f30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraLibrary.CameraManualControl
	// void CameraManualControl();                                                                                              // [0x15e5cd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraLibrary.CameraAutoControl
	// void CameraAutoControl(bool bSwitch, float BlendTime);                                                                   // [0x15e5c00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraLibrary.AttachCameraName
	// void AttachCameraName(FString Name, class ACameraActor* CameraActor);                                                    // [0x15e5100] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/GameUE.CameraManaged
/// Size: 0x0010 (0x000000 - 0x000010)
class FCameraManaged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class ACameraActor*)                       CameraActor                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/GameUE.CameraBlend
/// Size: 0x0018 (0x000000 - 0x000018)
class FCameraBlend : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class ACameraActor*)                       CameraActor                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bInOut                                                      OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Class /Script/GameUE.CameraManager
/// Size: 0x00E0 (0x000220 - 0x000300)
class ACameraManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(TArray<FCameraManaged>)                    ManagedCameras                                              OFFSET(get<T>, {0x220, 16, 0, 0})
	CMember(TArray<class ACameraActor*>)               PendingRelease                                              OFFSET(get<T>, {0x230, 16, 0, 0})
	CMember(TMap<class ACameraActor*, int32_t>)        CameraCandidates                                            OFFSET(get<T>, {0x240, 80, 0, 0})
	CMember(TArray<FCameraBlend>)                      PendingBlends                                               OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(TMap<FString, class ACameraActor*>)        NamedCameras                                                OFFSET(get<T>, {0x2A0, 80, 0, 0})
	CMember(class ACameraActor*)                       CurrentCamera                                               OFFSET(get<T>, {0x2F0, 8, 0, 0})
};

/// Class /Script/GameUE.CameraMaskTransparencyComponent
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UCameraMaskTransparencyComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(int32_t)                                   ElementIndex                                                OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           DMI                                                         OFFSET(get<T>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.CameraMaskTransparencyComponent.UpdateCameraMaskOpacity
	// void UpdateCameraMaskOpacity(class AActor* Camera, FVector& LookAtPos, TArray<AActor*>& IgnoreActors, bool bShowDebug);  // [0x15e7d30] Final|Native|Static|Public|HasOutParms|HasDefaults 
};

/// Class /Script/GameUE.CameraMotion_Base
/// Size: 0x0008 (0x000220 - 0x000228)
class ACameraMotion_Base : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:


	/// Functions
	// Function /Script/GameUE.CameraMotion_Base.UpdateCameraMotion
	// void UpdateCameraMotion(float DeltaTime);                                                                                // [0x15e7eb0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.CameraMotion_Base.StopCameraMotion
	// void StopCameraMotion();                                                                                                 // [0x15e7d10] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.CameraMotion_Base.SetCameraActor
	// void SetCameraActor(class ABattleCameraActor* InCameraActor);                                                            // [0x15e7810] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraMotion_Base.InitCameraMotion
	// void InitCameraMotion(class ABattleActor* Caster, class ABattleActor* Target);                                           // [0x15e6ac0] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/GameUE.CameraAgtSkillData
/// Size: 0x0014 (0x000000 - 0x000014)
class FCameraAgtSkillData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     ForwardTime                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ForwardEndTime                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     BackTime                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     BackEndTime                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(EAlphaBlendOption)                         ForwardCurve                                                OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(EAlphaBlendOption)                         BackCurve                                                   OFFSET(get<T>, {0x11, 1, 0, 0})
};

/// Class /Script/GameUE.CameraMotion_AgtSkill
/// Size: 0x00A8 (0x000228 - 0x0002D0)
class ACameraMotion_AgtSkill : public ACameraMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FCameraAgtSkillData)                       NodeData                                                    OFFSET(getStruct<T>, {0x228, 20, 0, 0})
	DMember(float)                                     CameraMoveForwardRate                                       OFFSET(get<float>, {0x23C, 4, 0, 0})
	DMember(float)                                     EnemyHUDPosInScreen                                         OFFSET(get<float>, {0x240, 4, 0, 0})
	DMember(float)                                     FriendRootPosInScreen                                       OFFSET(get<float>, {0x244, 4, 0, 0})
	DMember(float)                                     CameraRotateToLookAtRate                                    OFFSET(get<float>, {0x248, 4, 0, 0})
	CMember(EBattleUnitSide)                           TargetSide                                                  OFFSET(get<T>, {0x24C, 1, 0, 0})
	CMember(EBattleUnitSide)                           CasterSide                                                  OFFSET(get<T>, {0x24D, 1, 0, 0})
	CMember(class ABattleActor*)                       CasterAgtActor                                              OFFSET(get<T>, {0x250, 8, 0, 0})
};

/// Struct /Script/GameUE.CameraHitAwayData
/// Size: 0x0028 (0x000000 - 0x000028)
class FCameraHitAwayData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     PullAwayTime                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     PullAwayEndTime                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RecoverTime                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     RecoverEndTime                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(EAlphaBlendOption)                         PullAwayCurve                                               OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(EAlphaBlendOption)                         RecoverCurve                                                OFFSET(get<T>, {0x11, 1, 0, 0})
	DMember(float)                                     PullAwayRate                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(EPullAwayDirection)                        PullAwayDirectionType                                       OFFSET(get<T>, {0x18, 4, 0, 0})
	DMember(float)                                     PullAwayDirectionAlpha                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     LookAtPointAlpha                                            OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      UpdateCameraPitch                                           OFFSET(get<bool>, {0x24, 1, 0, 0})
};

/// Class /Script/GameUE.CameraMotion_HitAway
/// Size: 0x00B8 (0x000228 - 0x0002E0)
class ACameraMotion_HitAway : public ACameraMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FCameraHitAwayData)                        NodeData                                                    OFFSET(getStruct<T>, {0x228, 40, 0, 0})
	SMember(FVector)                                   FriendAoeLoc                                                OFFSET(getStruct<T>, {0x250, 12, 0, 0})
	SMember(FVector)                                   EnemyAoeLoc                                                 OFFSET(getStruct<T>, {0x25C, 12, 0, 0})
};

/// Struct /Script/GameUE.CameraSkillPerformData
/// Size: 0x0040 (0x000000 - 0x000040)
class FCameraSkillPerformData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     CameraRotateBlendTime                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     CameraPullAwayDistance                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     CameraPullAwayBlendTime                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FString)                                   CasterAimedBone                                             OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   TargetAimedBone                                             OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(ECameraLookAtType)                         LookAtType                                                  OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     LookAtPoint                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     CameraShockBlend                                            OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     LookAtTrackingInterpSpeed                                   OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/GameUE.CameraMotion_SkillPerform
/// Size: 0x00C8 (0x000228 - 0x0002F0)
class ACameraMotion_SkillPerform : public ACameraMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FCameraSkillPerformData)                   NodeData                                                    OFFSET(getStruct<T>, {0x228, 64, 0, 0})
	DMember(bool)                                      bIsAutoBattle                                               OFFSET(get<bool>, {0x268, 1, 0, 0})
	CMember(EBattleUnitSide)                           CasterUnitSide                                              OFFSET(get<T>, {0x269, 1, 0, 0})
	SMember(FVector)                                   CameraInitLoc                                               OFFSET(getStruct<T>, {0x26C, 12, 0, 0})
	SMember(FRotator)                                  CameraInitRot                                               OFFSET(getStruct<T>, {0x278, 12, 0, 0})
	SMember(FVector)                                   CameraParallelLoc                                           OFFSET(getStruct<T>, {0x284, 12, 0, 0})
};

/// Struct /Script/GameUE.CameraSkillSwayData
/// Size: 0x0058 (0x000000 - 0x000058)
class FCameraSkillSwayData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   CameraRotateDirection                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     CameraAngle                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RotateDuration                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EAlphaBlendOption)                         RotateCurve                                                 OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(float)                                     CameraRotateInterpSpeed                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     CameraLookAtInterpSpeed                                     OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AttachCasterCenterDuration                                  OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     AttachCasterInterpSpeed                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FString)                                   AttachAimedBone                                             OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bEnableCameraLookAt                                         OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     LookAtPoint                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     ForwardTime                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     ForwardDuration                                             OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     ForwardRate                                                 OFFSET(get<float>, {0x40, 4, 0, 0})
	CMember(EAlphaBlendOption)                         ForwardCurve                                                OFFSET(get<T>, {0x44, 1, 0, 0})
	DMember(float)                                     BackTime                                                    OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     BackDuration                                                OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     BackRate                                                    OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(EAlphaBlendOption)                         BackCurve                                                   OFFSET(get<T>, {0x54, 1, 0, 0})
};

/// Struct /Script/GameUE.CameraDistanceData
/// Size: 0x000C (0x000000 - 0x00000C)
class FCameraDistanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DistanceRate                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EAlphaBlendOption)                         BlendCurve                                                  OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/GameUE.CameraRotateData
/// Size: 0x0018 (0x000000 - 0x000018)
class FCameraRotateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     CameraAngle                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FVector)                                   TargetLoc                                                   OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	CMember(EAlphaBlendOption)                         BlendCurve                                                  OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Class /Script/GameUE.CameraMotion_SkillSway
/// Size: 0x0170 (0x000228 - 0x000398)
class ACameraMotion_SkillSway : public ACameraMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(TMap<FString, float>)                      HeadEndHeightOffsetMap                                      OFFSET(get<T>, {0x228, 80, 0, 0})
	SMember(FCameraSkillSwayData)                      NodeData                                                    OFFSET(getStruct<T>, {0x278, 88, 0, 0})
	CMember(TArray<FCameraDistanceData>)               DistanceDatas                                               OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(TArray<FCameraRotateData>)                 RotateDatas                                                 OFFSET(get<T>, {0x2E0, 16, 0, 0})
	SMember(FVector)                                   TargetInitLoc                                               OFFSET(getStruct<T>, {0x2F0, 12, 0, 0})
	DMember(float)                                     BossHUDPosInScreen                                          OFFSET(get<float>, {0x2FC, 4, 0, 0})
	DMember(float)                                     TargetHeadEndHeight                                         OFFSET(get<float>, {0x300, 4, 0, 0})
};

/// Class /Script/GameUE.CameraUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UCameraUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.CameraUtils.WorldPositionToScreenRate
	// FVector2D WorldPositionToScreenRate(class UCameraComponent* InComponent, FVector& Location);                             // [0x15e7f40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.CameraUtils.SetViewTarget
	// void SetViewTarget(class AActor* Camera);                                                                                // [0x15e7c90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraUtils.GetPostProcessSettings
	// FPostProcessSettings GetPostProcessSettings(class UCameraComponent* InComponent);                                        // [0x15e68f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraUtils.GetPlayerViewPoint
	// void GetPlayerViewPoint(class UObject* WorldContextObject, FVector& out_Location, FRotator& out_Rotation);               // [0x15e67d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.CameraUtils.GetAspectRatio
	// float GetAspectRatio(class UCameraComponent* InComponent);                                                               // [0x15e65b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraUtils.CopyCameraInfo
	// void CopyCameraInfo(class AActor* InCameraActor, FCameraDetail& InViewInfo);                                             // [0x15e5dd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.CameraUtils.CopyCameraComponent
	// void CopyCameraComponent(class AActor* InCameraActor, class UCameraComponent* InComponent);                              // [0x15e5d10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraUtils.CalculateVerticalFieldOfView
	// float CalculateVerticalFieldOfView(class UCameraComponent* InComponent);                                                 // [0x15e5b70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraUtils.CacheCameraViewInfo
	// FCameraDetail CacheCameraViewInfo(class UCameraComponent* InComponent);                                                  // [0x15e59b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.CameraUtils.BlendCameraTransform
	// void BlendCameraTransform(class AActor* InCameraActor, FCameraDetail& From, FTransform& To, float InAlpha);              // [0x15e5780] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.CameraUtils.BlendCameraInfo
	// void BlendCameraInfo(class AActor* InCameraActor, FCameraDetail& From, FCameraDetail& To, float InAlpha);                // [0x15e54f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.CameraUtils.BlendCameraComponent
	// void BlendCameraComponent(class AActor* InCameraActor, FCameraDetail& ViewInfo, class UCameraComponent* InComponent, float InAlpha); // [0x15e52f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.CameraUtils.BlendCameraActor
	// void BlendCameraActor(class ACameraActor* FromCameraActor, class ACameraActor* ToCameraActor, float InAlpha);            // [0x15e51e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.CDKeyReq
/// Size: 0x0058 (0x000028 - 0x000080)
class UCDKeyReq : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Struct /Script/GameUE.CharacterAction
/// Size: 0x0010 (0x000000 - 0x000010)
class FCharacterAction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(char)                                      ActionType                                                  OFFSET(get<char>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   SkillId                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Stage                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(char)                                      Branch                                                      OFFSET(get<char>, {0xC, 1, 0, 0})
};

/// Class /Script/GameUE.CharacterAnimInstance
/// Size: 0x0128 (0x0002B8 - 0x0003E0)
class UCharacterAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	DMember(char)                                      CurrentAction                                               OFFSET(get<char>, {0x2B8, 1, 0, 0})
	SMember(FCharacterAction)                          EnteredAction                                               OFFSET(getStruct<T>, {0x2BC, 16, 0, 0})
	DMember(char)                                      CurrentState                                                OFFSET(get<char>, {0x2CC, 1, 0, 0})
	DMember(int32_t)                                   SkillId                                                     OFFSET(get<int32_t>, {0x2D0, 4, 0, 0})
	DMember(int32_t)                                   Stage                                                       OFFSET(get<int32_t>, {0x2D4, 4, 0, 0})
	DMember(char)                                      Branch                                                      OFFSET(get<char>, {0x2D8, 1, 0, 0})
	DMember(bool)                                      Break                                                       OFFSET(get<bool>, {0x2D9, 1, 0, 0})
	DMember(float)                                     NearlyZero                                                  OFFSET(get<float>, {0x2DC, 4, 0, 0})
	CMember(TMap<FString, FTransform>)                 NameToBoneTransform                                         OFFSET(get<T>, {0x2E0, 80, 0, 0})
	CMember(TMap<FName, float>)                        ActiveCurveMap                                              OFFSET(get<T>, {0x330, 80, 0, 0})
	DMember(bool)                                      bDefaultTransitionFunctions                                 OFFSET(get<bool>, {0x380, 1, 0, 0})
	CMember(class ABattleActor*)                       BattleActor                                                 OFFSET(get<T>, {0x388, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.CharacterAnimInstance.SetEnterStateResetFlagMap
	// void SetEnterStateResetFlagMap(TMap<FString, char>& InEnterStateResetFlagMap);                                           // [0x15e7b70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.SetEnterStateResetFlag
	// void SetEnterStateResetFlag(FString InStateName, char InFlag);                                                           // [0x15e7a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.SetCharacterState
	// void SetCharacterState(char StateType);                                                                                  // [0x15e7a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.SetCharacterAction
	// void SetCharacterAction(char ActionType, char ActionBranch, int32_t ActionSkillId, int32_t ActionStage);                 // [0x15e78a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.SetBoneTranslation
	// void SetBoneTranslation(FVector Translation, FString BoneName);                                                          // [0x15e76d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.SetBoneTransforms
	// void SetBoneTransforms(FVector Translation, FRotator Rotator, FString BoneName);                                         // [0x15e7540] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.SetBoneRotator
	// void SetBoneRotator(FRotator Rotator, FString BoneName);                                                                 // [0x15e7400] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.SetBattleActor
	// void SetBattleActor(class ABattleActor* InBattleActor);                                                                  // [0x15e7370] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.SetAnimPlayerStartPositionOfState
	// void SetAnimPlayerStartPositionOfState(FString StateName, float InTime);                                                 // [0x15e7280] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.SetAnimPlayerAccumulatedTime
	// void SetAnimPlayerAccumulatedTime(float InTime);                                                                         // [0x15e7200] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.HasBoneTransforms
	// bool HasBoneTransforms();                                                                                                // [0x15e6a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.GetRelevantAnimSequenceInState
	// class UAnimSequence* GetRelevantAnimSequenceInState(FString StateName);                                                  // [0x15e69d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.GetCurrentStateNameInStateMachine
	// FString GetCurrentStateNameInStateMachine();                                                                             // [0x15e66a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.GetCurrentPlayingActionStruct
	// FCharacterAction GetCurrentPlayingActionStruct();                                                                        // [0x15e6670] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.GetCurrentAnimSequence
	// class UAnimSequence* GetCurrentAnimSequence();                                                                           // [0x15e6640] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.GetAnimPlayerAccumulatedTime
	// float GetAnimPlayerAccumulatedTime();                                                                                    // [0x15e6580] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.GetAnimEventTime
	// float GetAnimEventTime(FString StateName, FString EventName);                                                            // [0x15e6460] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.GetAnimAssetLength
	// float GetAnimAssetLength(FString StateName);                                                                             // [0x15e63a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.GetAllStateNameInStateMachine
	// TArray<FString> GetAllStateNameInStateMachine();                                                                         // [0x15e62c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.GetAllAnimSequences
	// TArray<UAnimSequenceBase*> GetAllAnimSequences();                                                                        // [0x15e6240] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.GetActionPlayingTime
	// float GetActionPlayingTime();                                                                                            // [0x15e6210] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.DoesStateExistInMainMachine
	// bool DoesStateExistInMainMachine(FString StateName);                                                                     // [0x15e6130] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.DoesAnimSequenceHasNotifyEvent
	// bool DoesAnimSequenceHasNotifyEvent(FString StateName, FString EventName);                                               // [0x15e6010] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CharacterAnimInstance.ClearCharacterAction
	// void ClearCharacterAction();                                                                                             // [0x15e5cf0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.CheatSecretWidget
/// Size: 0x0020 (0x000280 - 0x0002A0)
class UCheatSecretWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:


	/// Functions
	// Function /Script/GameUE.CheatSecretWidget.SecretInputComplete
	// void SecretInputComplete();                                                                                              // [0x1016160] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CheatSecretWidget.SecretInput
	// void SecretInput(FString Value);                                                                                         // [0x15edd60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.CheatActor
/// Size: 0x00D0 (0x000220 - 0x0002F0)
class ACheatActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(class UClass*)                             SecretWidgetClass                                           OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UCheatSecretWidget*)                 TouchCheatWidget                                            OFFSET(get<T>, {0x228, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.CheatActor.StopCheat
	// void StopCheat();                                                                                                        // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.CheatActor.StartCheat
	// void StartCheat();                                                                                                       // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.CheatActor.MarkCheatComplete
	// void MarkCheatComplete();                                                                                                // [0x15eda70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.GameStateObjectBase
/// Size: 0x0028 (0x000028 - 0x000050)
class UGameStateObjectBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UGameplayState*)                     GameplayState                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     StateName                                                   OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bObsolete                                                   OFFSET(get<bool>, {0x38, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.GameStateObjectBase.RouteTo
	// void RouteTo(FName Target, bool bForce);                                                                                 // [0x16043f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameStateObjectBase.Obsolete
	// void Obsolete(FName Root);                                                                                               // [0x16030c0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameUE.GameStateObjectBase.IsObsoleted
	// bool IsObsoleted();                                                                                                      // [0x8a8fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameStateObjectBase.GetRouteTarget
	// FName GetRouteTarget();                                                                                                  // [0x1602370] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.GameStateObject
/// Size: 0x0000 (0x000050 - 0x000050)
class UGameStateObject : public UGameStateObjectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:


	/// Functions
	// Function /Script/GameUE.GameStateObject.Update
	// void Update(float DeltaTime);                                                                                            // [0x16046a0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GameStateObject.Reset
	// void Reset();                                                                                                            // [0x1602830] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GameStateObject.LeaveState
	// void LeaveState(class UGameStateObjectBase* Next);                                                                       // [0x1603010] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GameStateObject.Initialize
	// void Initialize();                                                                                                       // [0x116c190] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GameStateObject.HandleCommand
	// void HandleCommand(class UGameCommand* Comm);                                                                            // [0x1602780] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GameStateObject.EnterState
	// void EnterState(class UGameStateObjectBase* Previous);                                                                   // [0x1601c10] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.CleanupState
/// Size: 0x0008 (0x000050 - 0x000058)
class UCleanupState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     NextState                                                   OFFSET(getStruct<T>, {0x50, 8, 0, 0})
};

/// Class /Script/GameUE.CloseStageAsync
/// Size: 0x0028 (0x000030 - 0x000058)
class UCloseStageAsync : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMulticastInlineDelegate)                  OnComplete                                                  OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(class UTaskCloseStage*)                    CloseProc                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/GameUE.EventItem
/// Size: 0x0020 (0x000000 - 0x000020)
class FEventItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   EventParam                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Class /Script/GameUE.CompositEventNode
/// Size: 0x0038 (0x000028 - 0x000060)
class UCompositEventNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(ECompositEventOp)                          OpCode                                                      OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FEventItem)                                EventItem                                                   OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	CMember(TArray<class UCompositEventNode*>)         Children                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/GameUE.EventListenerObject
/// Size: 0x0018 (0x000028 - 0x000040)
class UEventListenerObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   LuaScriptPath                                               OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.EventListenerObject.BuildEvent
	// void BuildEvent();                                                                                                       // [0x198a600] Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.CompositEventObject
/// Size: 0x0010 (0x000040 - 0x000050)
class UCompositEventObject : public UEventListenerObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<class UCompositEventNode*>)         AllNodes                                                    OFFSET(get<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.CompositEventObject.EventOutput
	// void EventOutput(class UCompositEventNode* Ev0);                                                                         // [0x15ec190] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameUE.CompositEventObject.EventOr
	// class UCompositEventNode* EventOr(class UCompositEventNode* Ev0, class UCompositEventNode* Ev1);                         // [0x15ec0c0] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.CompositEventObject.EventAnd
	// class UCompositEventNode* EventAnd(class UCompositEventNode* Ev0, class UCompositEventNode* Ev1);                        // [0x15ebff0] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.CompositEventObject.CreateEventNode
	// class UCompositEventNode* CreateEventNode(FString EventName, FString EventParam, bool bStateEvent);                      // [0x15ebba0] Final|Native|Protected|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GameUE.ContextContainer
/// Size: 0x0068 (0x000028 - 0x000090)
class UContextContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(int32_t)                                   SpaceId                                                     OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   ParentSpaceId                                               OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(TMap<FString, class AActor*>)              ContextMap                                                  OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TArray<class AActor*>)                     ContextArray                                                OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Class /Script/GameUE.ContextManager
/// Size: 0x0060 (0x000220 - 0x000280)
class AContextManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(TArray<class UClass*>)                     ContextClasses                                              OFFSET(get<T>, {0x220, 16, 0, 0})
	CMember(TMap<int32_t, class UContextContainer*>)   Spaces                                                      OFFSET(get<T>, {0x230, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.ContextManager.GetGlobalContext
	// class AActor* GetGlobalContext(class UClass* ActorClass);                                                                // [0x15ecd90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.ContextManager.GetActorOfClass
	// void GetActorOfClass(class UClass* ActorClass, class AActor*& OutActor);                                                 // [0x15ec220] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/GameUE.ContinueStateDialogInfo
/// Size: 0x0060 (0x000000 - 0x000060)
class FContinueStateDialogInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FText)                                     DialogTitle                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     DialogMessage                                               OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FText)                                     DialogYes                                                   OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     DialogNo                                                    OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Class /Script/GameUE.ContinueState
/// Size: 0x0060 (0x000050 - 0x0000B0)
class UContinueState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     NextStateName                                               OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	CMember(TMap<uint32_t, FContinueStateDialogInfo>)  DialogInfoMap                                               OFFSET(get<T>, {0x60, 80, 0, 0})
};

/// Class /Script/GameUE.Cpp2BpUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UCpp2BpUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.Cpp2BpUtils.TraceBookmark
	// void TraceBookmark(FString InStr);                                                                                       // [0x15ee840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.SyncBrowserToObjects
	// void SyncBrowserToObjects(class UObject* Obj);                                                                           // [0x15ee7c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.StepToNextMark
	// void StepToNextMark(class ULevelSequence* Sequence, class ULevelSequencePlayer* Player, FFrameTime& FTime);              // [0x15ee6b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.Rotator2Up
	// FVector Rotator2Up(FRotator InRotator);                                                                                  // [0x15edcc0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.Cpp2BpUtils.Rotator2Right
	// FVector Rotator2Right(FRotator InRotator);                                                                               // [0x15edc20] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.Cpp2BpUtils.Rotator2Forward
	// FVector Rotator2Forward(FRotator InRotator);                                                                             // [0x15edb80] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.Cpp2BpUtils.ParticleSystemGetAllBeamIndex
	// TArray<int32_t> ParticleSystemGetAllBeamIndex(class UParticleSystemComponent* Component);                                // [0x15eda90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.MakeRotatorFromVector2Vector
	// FRotator MakeRotatorFromVector2Vector(FVector InOriginVector, FVector InTargetVector);                                   // [0x15ed970] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.Cpp2BpUtils.MakeRotator2Vector
	// FVector MakeRotator2Vector(FVector InOriginVector, FRotator InDoRotator);                                                // [0x15ed870] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.Cpp2BpUtils.MakeRotator2Rotator
	// FRotator MakeRotator2Rotator(FRotator InOriginRotator, FRotator InDoRotator);                                            // [0x15ed770] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.Cpp2BpUtils.LoadAllNodeDatasBySheet
	// TArray<UGameFlowsheet_BaseNode*> LoadAllNodeDatasBySheet(FString FlowSheetPath);                                         // [0x15ed630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.LineDelimiter_Tabs
	// FString LineDelimiter_Tabs();                                                                                            // [0x15ed5b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.Cpp2BpUtils.LineDelimiter_SlashRSlashN
	// FString LineDelimiter_SlashRSlashN();                                                                                    // [0x15ed530] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.Cpp2BpUtils.LineDelimiter_SlashN
	// FString LineDelimiter_SlashN();                                                                                          // [0x15ed4b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.Cpp2BpUtils.GetSeqCurFrame
	// int32_t GetSeqCurFrame(class ULevelSequencePlayer* Player);                                                              // [0x15ed380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.GetScreenAreaRange
	// bool GetScreenAreaRange(FVector2D& OutStartPos, FVector2D& OutEndPos);                                                   // [0x15ed2a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.Cpp2BpUtils.GetRegularFirstMatchStr
	// bool GetRegularFirstMatchStr(FString InStr, FString RegexString, FString& OutResult, int32_t& OutStartIndex, int32_t& OutEndIndex); // [0x15ecff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.GetObjInfoFromContentSelection
	// bool GetObjInfoFromContentSelection(class UClass* ObjClass, FName& ObjName, FName& ObjPath);                             // [0x15eced0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.GetCameraCutDurationList
	// TArray<float> GetCameraCutDurationList(class ULevelSequence* Sequence);                                                  // [0x15ecc20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.GetBoneTransform
	// bool GetBoneTransform(class USkinnedMeshComponent* SkinedMeshComp, FName BoneName, FTransform& OutTransform);            // [0x15ecac0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.GetBindingIDByName
	// FMovieSceneObjectBindingID GetBindingIDByName(class ULevelSequence* Sequence, FString Name);                             // [0x15ec960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.GetBindingID
	// FMovieSceneObjectBindingID GetBindingID(class ULevelSequence* Sequence);                                                 // [0x15ec8c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.GetAllVectorParameterInfo
	// TArray<FMaterialParameterInfo> GetAllVectorParameterInfo(class UMaterialInstance* Instance);                             // [0x15ec7f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.GetAllTextureParameterInfo
	// TArray<FMaterialParameterInfo> GetAllTextureParameterInfo(class UMaterialInstance* Instance);                            // [0x15ec720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.GetAllScalarParamInfo
	// TArray<FMaterialParameterInfo> GetAllScalarParamInfo(class UMaterialInstance* Instance);                                 // [0x15ec650] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.GetAllObjectsOfClass
	// TArray<UObject*> GetAllObjectsOfClass(class UClass* InClass, bool bOnlyGCedObjects);                                     // [0x15ec540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.GetAllAssetNamePathInGamePathByNameStart
	// TMap<FString, FString> GetAllAssetNamePathInGamePathByNameStart(FString InNameStart, FString InPath);                    // [0x15ec300] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.DoesParticleSystemUseLocalSpace
	// bool DoesParticleSystemUseLocalSpace(class UParticleSystemComponent* PSComponent);                                       // [0x15ebf60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.CreateSlotAnimationAsDynamicMontage
	// class UAnimMontage* CreateSlotAnimationAsDynamicMontage(class UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt); // [0x15ebd00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.CheckVectorParameterInfoOn
	// bool CheckVectorParameterInfoOn(class UMaterialInstance* Instance, FMaterialParameterInfo Info);                         // [0x15ebaa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.CheckTextureParameterInfoOn
	// bool CheckTextureParameterInfoOn(class UMaterialInstance* Instance, FMaterialParameterInfo Info);                        // [0x15eb9c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.CheckScalarParamInfoOn
	// bool CheckScalarParamInfoOn(class UMaterialInstance* Instance, FMaterialParameterInfo Info);                             // [0x15eb8e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.BPStaticLoadObject
	// class UObject* BPStaticLoadObject(FString InPath);                                                                       // [0x15eb7e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.BPStaticLoadClass
	// class UClass* BPStaticLoadClass(class UClass* BaseClass, FString InPath);                                                // [0x15eb6b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.Cpp2BpUtils.BPSpawnActorByPath
	// class AActor* BPSpawnActorByPath(class UObject* Context, FString InPath);                                                // [0x15eb580] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.CustomButton
/// Size: 0x0018 (0x000588 - 0x0005A0)
class UCustomButton : public UButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	SMember(FMulticastInlineDelegate)                  OnButtonTouchMovedEvent                                     OFFSET(getStruct<T>, {0x588, 16, 0, 0})
};

/// Class /Script/GameUE.CustomDebugShapeComponent
/// Size: 0x0028 (0x000468 - 0x000490)
class UCustomDebugShapeComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	DMember(bool)                                      bEnableDraw                                                 OFFSET(get<bool>, {0x468, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.CustomDebugShapeComponent.Reset
	// void Reset();                                                                                                            // [0x15edb60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CustomDebugShapeComponent.AddBox
	// void AddBox(FVector Center, FVector Extent, FRotator Rot);                                                               // [0x15eb440] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.CustomListView
/// Size: 0x0018 (0x000AF8 - 0x000B10)
class UCustomListView : public UListView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2832;

public:
	SMember(FMulticastInlineDelegate)                  BP_OnListViewScrolled                                       OFFSET(getStruct<T>, {0xAF8, 16, 0, 0})
};

/// Class /Script/GameUE.CustomNavModifierComponent
/// Size: 0x0060 (0x000140 - 0x0001A0)
class UCustomNavModifierComponent : public UNavModifierComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(TArray<FName>)                             ModifierTags                                                OFFSET(get<T>, {0x140, 16, 0, 0})
};

/// Class /Script/GameUE.CustomRichTextBlock
/// Size: 0x0738 (0x000148 - 0x000880)
class UCustomRichTextBlock : public UTextLayoutWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2176;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x148, 24, 0, 0})
	CMember(class UDataTable*)                         TextStyleSet                                                OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(TArray<class UClass*>)                     DecoratorClasses                                            OFFSET(get<T>, {0x168, 16, 0, 0})
	DMember(bool)                                      bOverrideDefaultStyle                                       OFFSET(get<bool>, {0x178, 1, 0, 0})
	SMember(FTextBlockStyle)                           DefaultTextStyleOverride                                    OFFSET(getStruct<T>, {0x180, 864, 0, 0})
	DMember(float)                                     MinDesiredWidth                                             OFFSET(get<float>, {0x4E0, 4, 0, 0})
	DMember(float)                                     LastLineMinWidth                                            OFFSET(get<float>, {0x4E4, 4, 0, 0})
	CMember(ETextTransformPolicy)                      TextTransformPolicy                                         OFFSET(get<T>, {0x4E8, 1, 0, 0})
	SMember(FTextBlockStyle)                           DefaultTextStyle                                            OFFSET(getStruct<T>, {0x4F0, 864, 0, 0})
	CMember(TArray<class UCustomRichTextBlockDecorator*>) InstanceDecorators                                       OFFSET(get<T>, {0x850, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.CustomRichTextBlock.SetTextTransformPolicy
	// void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);                                                     // [0x15ee630] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CustomRichTextBlock.SetTextStyleSet
	// void SetTextStyleSet(class UDataTable* NewTextStyleSet);                                                                 // [0x15ee5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CustomRichTextBlock.SetText
	// void SetText(FText& InText);                                                                                             // [0x15ee4c0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.CustomRichTextBlock.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                        // [0x15ee440] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CustomRichTextBlock.SetDefaultTextStyle
	// void SetDefaultTextStyle(FTextBlockStyle& InDefaultTextStyle);                                                           // [0x15ee390] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.CustomRichTextBlock.SetDefaultStrikeBrush
	// void SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush);                                                                  // [0x15ee1c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.CustomRichTextBlock.SetDefaultShadowOffset
	// void SetDefaultShadowOffset(FVector2D InShadowOffset);                                                                   // [0x15ee140] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.CustomRichTextBlock.SetDefaultShadowColorAndOpacity
	// void SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);                                              // [0x15ee0b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.CustomRichTextBlock.SetDefaultFont
	// void SetDefaultFont(FSlateFontInfo InFontInfo);                                                                          // [0x15edf90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CustomRichTextBlock.SetDefaultColorAndOpacity
	// void SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity);                                                           // [0x15edea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CustomRichTextBlock.SetAutoWrapText
	// void SetAutoWrapText(bool InAutoTextWrap);                                                                               // [0x15ede10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CustomRichTextBlock.GetText
	// FText GetText();                                                                                                         // [0x15ed410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.CustomRichTextBlock.GetLineViewInfos
	// void GetLineViewInfos(TArray<FLineViewInfo>& infos);                                                                     // [0x15ece20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.CustomRichTextBlock.GetDecoratorByClass
	// class UCustomRichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);                                  // [0x15eccf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.CustomRichTextBlock.ClearAllDefaultStyleOverrides
	// void ClearAllDefaultStyleOverrides();                                                                                    // [0x15ebb80] Final|Native|Public  
};

/// Class /Script/GameUE.CustomRichTextBlockDecorator
/// Size: 0x0000 (0x000028 - 0x000028)
class UCustomRichTextBlockDecorator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameUE.CustomRichTextBlockImageDecorator
/// Size: 0x0008 (0x000028 - 0x000030)
class UCustomRichTextBlockImageDecorator : public UCustomRichTextBlockDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UDataTable*)                         ImageSet                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/GameUE.CustomSafeZone
/// Size: 0x0000 (0x000158 - 0x000158)
class UCustomSafeZone : public USafeZone
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
};

/// Class /Script/GameUE.CustomScrollBox
/// Size: 0x0048 (0x000C58 - 0x000CA0)
class UCustomScrollBox : public UScrollBox
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3232;

public:
	SMember(FMulticastInlineDelegate)                  OnScrollMouseCaptureLostEvent                               OFFSET(getStruct<T>, {0xC58, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnScrollPreviewMouseButtonDownEvent                         OFFSET(getStruct<T>, {0xC68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBeginInertialScrollingEvent                               OFFSET(getStruct<T>, {0xC78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEndInertialScrollingEvent                                 OFFSET(getStruct<T>, {0xC88, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.CustomScrollBox.GetScrollVelocity
	// float GetScrollVelocity();                                                                                               // [0x15f2590] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.DetailMapCollection
/// Size: 0x00B0 (0x000220 - 0x0002D0)
class ADetailMapCollection : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(TArray<FString>)                           FloorOrder                                                  OFFSET(get<T>, {0x220, 16, 0, 0})
	CMember(TMap<FString, class UClass*>)              MapBgs                                                      OFFSET(get<T>, {0x230, 80, 0, 0})
	CMember(TMap<FString, FString>)                    FloorAreas                                                  OFFSET(get<T>, {0x280, 80, 0, 0})
};

/// Class /Script/GameUE.DirectionTriggerBox
/// Size: 0x0000 (0x000228 - 0x000228)
class ADirectionTriggerBox : public ATriggerBox
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
};

/// Class /Script/GameUE.EdenSafeZone
/// Size: 0x0038 (0x000140 - 0x000178)
class UEdenSafeZone : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FMargin)                                   FixedSafeMargin                                             OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FMargin)                                   FixedUnsafeMargin                                           OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	DMember(bool)                                      PadLeft                                                     OFFSET(get<bool>, {0x160, 1, 0, 0})
	DMember(bool)                                      PadRight                                                    OFFSET(get<bool>, {0x161, 1, 0, 0})
	DMember(bool)                                      PadTop                                                      OFFSET(get<bool>, {0x162, 1, 0, 0})
	DMember(bool)                                      PadBottom                                                   OFFSET(get<bool>, {0x163, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.EdenSafeZone.SetSidesToPad
	// void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);                                    // [0x15f2e20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.EdenSafeZoneSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UEdenSafeZoneSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   SafeAreaScale                                               OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HAlign                                                      OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VAlign                                                      OFFSET(get<T>, {0x49, 1, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x4C, 16, 0, 0})
};

/// Class /Script/GameUE.EdenScenarioRecorder
/// Size: 0x0048 (0x000098 - 0x0000E0)
class UEdenScenarioRecorder : public UScenarioRecorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TWeakObjectPtr<class UWorld*>)             InitialLevel                                                OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FString)                                   ScriptPath                                                  OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(class UClass*)                             ReplStageActor                                              OFFSET(get<T>, {0xD8, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.EdenScenarioRecorder.GetPreviewStageId
	// int32_t GetPreviewStageId();                                                                                             // [0xa2b720] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.EdenTowerRecorder
/// Size: 0x0048 (0x000090 - 0x0000D8)
class UEdenTowerRecorder : public UTowerRecorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TWeakObjectPtr<class UWorld*>)             InitialLevel                                                OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FString)                                   ScriptPath                                                  OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(class UClass*)                             ReplStageActor                                              OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /Script/GameUE.EffectUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UEffectUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.EffectUtils.CopyCameraToCapture
	// void CopyCameraToCapture(class AActor* Camera, class USceneCaptureComponent2D* Capture);                                 // [0x15f1d20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EffectUtils.CopyCameraSettingsToSceneCapture
	// void CopyCameraSettingsToSceneCapture(class UCameraComponent* Src, class USceneCaptureComponent2D* Dst, bool bCopyPostProcess); // [0x15f1c20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EffectUtils.ConfigureFullscreenRT
	// void ConfigureFullscreenRT(class UObject* WorldContextObject, class UTextureRenderTarget2D* RT);                         // [0x15f1b60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.EnterBattleSequenceUserData
/// Size: 0x00F8 (0x000028 - 0x000120)
class UEnterBattleSequenceUserData : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FString)                                   PlayerTrackName                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   MonsterTrackName                                            OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   CameraTrackName                                             OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(int32_t)                                   PlayerRotEndFrame                                           OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   MonsterRotEndFrame                                          OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   CameraBlendEndFrame                                         OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	SMember(FTransform)                                MonsterSeqStartTrans                                        OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	SMember(FTransform)                                PlayerSeqStartTrans                                         OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
	SMember(FTransform)                                SeqCameraBlendEndTrans                                      OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
	SMember(FVector)                                   SeqAttackerMoveStartLoc                                     OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FVector)                                   SeqAttackerMoveEndLoc                                       OFFSET(getStruct<T>, {0x10C, 12, 0, 0})
	DMember(int32_t)                                   StaticAttackerMoveEndFrame                                  OFFSET(get<int32_t>, {0x118, 4, 0, 0})
};

/// Class /Script/GameUE.SequenceProcessInfo
/// Size: 0x0058 (0x000028 - 0x000080)
class USequenceProcessInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FDirectoryPath)                            OutputDir                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   PlayerTrackName                                             OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   MonsterTrackName                                            OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   CameraTrackName                                             OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	DMember(int32_t)                                   PlayerRotEndFrame                                           OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   MonsterRotEndFrame                                          OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   CameraBlendEndFrame                                         OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   AttackerMoveStartFrame                                      OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(int32_t)                                   AttackerMoveEndFrame                                        OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(bool)                                      bPlayerIsAttacker                                           OFFSET(get<bool>, {0x7C, 1, 0, 0})
};

/// Class /Script/GameUE.EtheriaDeviceInfoLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEtheriaDeviceInfoLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.EtheriaDeviceInfoLibrary.GetScreenWidth
	// int32_t GetScreenWidth();                                                                                                // [0x1114240] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaDeviceInfoLibrary.GetScreenHeight
	// int32_t GetScreenHeight();                                                                                               // [0x1114210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaDeviceInfoLibrary.GetProjectName
	// FString GetProjectName();                                                                                                // [0x15f2510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaDeviceInfoLibrary.GetPlatform
	// FString GetPlatform();                                                                                                   // [0x15f2460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaDeviceInfoLibrary.GetOSVersion
	// FString GetOSVersion();                                                                                                  // [0x15f23e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaDeviceInfoLibrary.GetMachineId
	// FString GetMachineId();                                                                                                  // [0x15f2360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaDeviceInfoLibrary.GetLoginId
	// FString GetLoginId();                                                                                                    // [0x15f20c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaDeviceInfoLibrary.GetIpv6
	// FString GetIpv6();                                                                                                       // [0x15f22e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaDeviceInfoLibrary.GetIpv4
	// FString GetIpv4();                                                                                                       // [0x15f2260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaDeviceInfoLibrary.GetGPU
	// FString GetGPU();                                                                                                        // [0x15f21c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaDeviceInfoLibrary.GetEngineVersion
	// FString GetEngineVersion();                                                                                              // [0x15f2140] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaDeviceInfoLibrary.GetDeviceId
	// FString GetDeviceId();                                                                                                   // [0x15f20c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaDeviceInfoLibrary.GetCPU
	// FString GetCPU();                                                                                                        // [0x15f1f80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaDeviceInfoLibrary.GetCompatibleEngineVersion
	// FString GetCompatibleEngineVersion();                                                                                    // [0x15f2000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaDeviceInfoLibrary.GetBuildVersion
	// FString GetBuildVersion();                                                                                               // [0x15f1f00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaDeviceInfoLibrary.GetBatteryLevel
	// int32_t GetBatteryLevel();                                                                                               // [0x1113be0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.EtheriaReportAgent
/// Size: 0x0070 (0x000028 - 0x000098)
class UEtheriaReportAgent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:


	/// Functions
	// Function /Script/GameUE.EtheriaReportAgent.SetReporter
	// void SetReporter(FString RoleId, FString Name, FString ServerCode);                                                      // [0x15f2be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaReportAgent.SetReportee
	// void SetReportee(FString RoleId, FString Name, FString ServerCode, FString XDID);                                        // [0x15f28f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaReportAgent.DoReport
	// void DoReport(FDelegateProperty& SuccessCallback, FDelegateProperty& FailCallback);                                      // [0x15f1de0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.EtheriaReportAgent.AddReason
	// void AddReason(int32_t ReasonId, FString ReasonTitle);                                                                   // [0x15f19f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaReportAgent.AddExtra
	// void AddExtra(FString K, FString V);                                                                                     // [0x15f1850] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaReportAgent.AddDescription
	// void AddDescription(FString desc);                                                                                       // [0x15f1750] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.EtheriaSharingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEtheriaSharingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.EtheriaSharingLibrary.ShareDraw_XHS
	// bool ShareDraw_XHS(class URetainerBox* Wgt, FDelegateProperty& SuccessCallback, FDelegateProperty& CancelCallback, FDelegateProperty& FailCallback); // [0x15f43f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSharingLibrary.ShareDraw_Weibo
	// bool ShareDraw_Weibo(class URetainerBox* Wgt, FDelegateProperty& SuccessCallback, FDelegateProperty& CancelCallback, FDelegateProperty& FailCallback); // [0x15f4230] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSharingLibrary.ShareDraw_WeChat_Timeline
	// bool ShareDraw_WeChat_Timeline(class URetainerBox* Wgt, FDelegateProperty& SuccessCallback, FDelegateProperty& CancelCallback, FDelegateProperty& FailCallback); // [0x15f4070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSharingLibrary.ShareDraw_WeChat_Session
	// bool ShareDraw_WeChat_Session(class URetainerBox* Wgt, FDelegateProperty& SuccessCallback, FDelegateProperty& CancelCallback, FDelegateProperty& FailCallback); // [0x15f3eb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSharingLibrary.ShareDraw_Twitter
	// bool ShareDraw_Twitter(class URetainerBox* Wgt, FDelegateProperty& SuccessCallback, FDelegateProperty& CancelCallback, FDelegateProperty& FailCallback); // [0x15f3cf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSharingLibrary.ShareDraw_TapTap
	// bool ShareDraw_TapTap(class URetainerBox* Wgt, FDelegateProperty& SuccessCallback, FDelegateProperty& CancelCallback, FDelegateProperty& FailCallback); // [0x15f3b30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSharingLibrary.ShareDraw_QQ_Timeline
	// bool ShareDraw_QQ_Timeline(class URetainerBox* Wgt, FDelegateProperty& SuccessCallback, FDelegateProperty& CancelCallback, FDelegateProperty& FailCallback); // [0x15f3970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSharingLibrary.ShareDraw_QQ_Session
	// bool ShareDraw_QQ_Session(class URetainerBox* Wgt, FDelegateProperty& SuccessCallback, FDelegateProperty& CancelCallback, FDelegateProperty& FailCallback); // [0x15f37b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSharingLibrary.ShareDraw_Line
	// bool ShareDraw_Line(class URetainerBox* Wgt, FDelegateProperty& SuccessCallback, FDelegateProperty& CancelCallback, FDelegateProperty& FailCallback); // [0x15f35f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSharingLibrary.ShareDraw_Facebook
	// bool ShareDraw_Facebook(class URetainerBox* Wgt, FDelegateProperty& SuccessCallback, FDelegateProperty& CancelCallback, FDelegateProperty& FailCallback); // [0x15f3430] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSharingLibrary.ShareDraw_DouYin
	// bool ShareDraw_DouYin(class URetainerBox* Wgt, FDelegateProperty& SuccessCallback, FDelegateProperty& CancelCallback, FDelegateProperty& FailCallback); // [0x15f3270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.EtheriaSoundLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEtheriaSoundLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.EtheriaSoundLibrary.SetSoundVoiceValue
	// bool SetSoundVoiceValue(int32_t MainValue);                                                                              // [0x15f3150] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSoundLibrary.SetSoundMainValue
	// bool SetSoundMainValue(int32_t MainValue);                                                                               // [0x15f30c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSoundLibrary.SetSoundFXValue
	// bool SetSoundFXValue(int32_t MainValue);                                                                                 // [0x15f3030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSoundLibrary.SetSoundBGMValue
	// bool SetSoundBGMValue(int32_t MainValue);                                                                                // [0x15f2fa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSoundLibrary.SaveSettings
	// void SaveSettings();                                                                                                     // [0x15f26d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSoundLibrary.IsSupportSetSoundVoiceValue
	// bool IsSupportSetSoundVoiceValue();                                                                                      // [0x130ccd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSoundLibrary.IsSupportSetSoundMainValue
	// bool IsSupportSetSoundMainValue();                                                                                       // [0x130ccd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSoundLibrary.IsSupportSetSoundFXValue
	// bool IsSupportSetSoundFXValue();                                                                                         // [0x130ccd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSoundLibrary.IsSupportSetSoundBGMValue
	// bool IsSupportSetSoundBGMValue();                                                                                        // [0x130ccd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSoundLibrary.GetSoundVoiceValue
	// int32_t GetSoundVoiceValue();                                                                                            // [0x15f2650] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSoundLibrary.GetSoundMainValue
	// int32_t GetSoundMainValue();                                                                                             // [0x15f2620] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSoundLibrary.GetSoundFXValue
	// int32_t GetSoundFXValue();                                                                                               // [0x15f25f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSoundLibrary.GetSoundBGMValue
	// int32_t GetSoundBGMValue();                                                                                              // [0x15f25c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EtheriaSoundLibrary.ApplySoundSettings
	// void ApplySoundSettings();                                                                                               // [0x15f1b20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.EthInputComponent
/// Size: 0x0198 (0x0000B0 - 0x000248)
class UEthInputComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	CMember(class UClass*)                             TipWidget                                                   OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UInputComponent*)                    InputComponent                                              OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(EInputModel)                               InputModel                                                  OFFSET(get<T>, {0xD8, 1, 0, 0})
	CMember(EGamePadModel)                             GamePadModel                                                OFFSET(get<T>, {0xD9, 1, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
	CMember(class UUserWidget*)                        TipWidgetObj                                                OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(bool)                                      InitLockTurn                                                OFFSET(get<bool>, {0xF8, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.EthInputComponent.TipOK
	// void TipOK();                                                                                                            // [0x15f45b0] Final|Native|Public  
	// Function /Script/GameUE.EthInputComponent.TipCancel
	// void TipCancel();                                                                                                        // [0x15f1b40] Final|Native|Public  
	// Function /Script/GameUE.EthInputComponent.SetupPlayerInputComponent
	// void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);                                             // [0x15f31e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.EthInputComponent.SetPriority
	// bool SetPriority(class UBaseInputComponent* regInput);                                                                   // [0x15f2850] Final|Native|Public  
	// Function /Script/GameUE.EthInputComponent.SetInitLockTurn
	// void SetInitLockTurn(bool enable);                                                                                       // [0x15f27c0] Final|Native|Public  
	// Function /Script/GameUE.EthInputComponent.SelectInputModel
	// void SelectInputModel(EInputModel Model, EGamePadModel Pad);                                                             // [0x15f26f0] Final|Native|Public  
	// Function /Script/GameUE.EthInputComponent.ResetPriority
	// bool ResetPriority();                                                                                                    // [0x15f26a0] Final|Native|Public  
	// Function /Script/GameUE.EthInputComponent.InputBind
	// void InputBind();                                                                                                        // [0x15f2680] Final|Native|Public  
	// Function /Script/GameUE.EthInputComponent.GetPriority
	// int32_t GetPriority();                                                                                                   // [0x15f24e0] Final|Native|Public  
	// Function /Script/GameUE.EthInputComponent.GetInitLockTurn
	// bool GetInitLockTurn();                                                                                                  // [0x15f2240] Final|Native|Public  
	// Function /Script/GameUE.EthInputComponent.GetCurInputModel
	// EInputModel GetCurInputModel();                                                                                          // [0x15f20a0] Final|Native|Public  
	// Function /Script/GameUE.EthInputComponent.GetCurGamePadModel
	// EGamePadModel GetCurGamePadModel();                                                                                      // [0x15f2080] Final|Native|Public  
	// Function /Script/GameUE.EthInputComponent.CloseTip
	// void CloseTip();                                                                                                         // [0x15f1b40] Final|Native|Public  
};

/// Class /Script/GameUE.EthInputSettingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEthInputSettingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.EthInputSettingLibrary.SetPresetTouch
	// bool SetPresetTouch(int32_t PresetTouch);                                                                                // [0x15f9000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EthInputSettingLibrary.SetPresetKeyboard
	// bool SetPresetKeyboard(int32_t PresetKeyboard);                                                                          // [0x15f8f70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EthInputSettingLibrary.SetPresetGamepad
	// bool SetPresetGamepad(int32_t PresetGamepad);                                                                            // [0x15f8ee0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EthInputSettingLibrary.SetCustomTouch
	// bool SetCustomTouch(FActionInputRemapData& CustomTouch);                                                                 // [0x15f8c40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.EthInputSettingLibrary.SetCustomKeyboard
	// bool SetCustomKeyboard(FActionInputRemapData& CustomKeyboard);                                                           // [0x15f8b00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.EthInputSettingLibrary.SetCustomGamepad
	// bool SetCustomGamepad(FActionInputRemapData& CustomGamepad);                                                             // [0x15f89c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.EthInputSettingLibrary.SaveSettings
	// void SaveSettings();                                                                                                     // [0x15f8820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EthInputSettingLibrary.GetPresetTouch
	// int32_t GetPresetTouch();                                                                                                // [0x15f8360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EthInputSettingLibrary.GetPresetKeyboard
	// int32_t GetPresetKeyboard();                                                                                             // [0x15f8330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EthInputSettingLibrary.GetPresetGamepad
	// int32_t GetPresetGamepad();                                                                                              // [0x15f8300] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EthInputSettingLibrary.GetCustomTouch
	// FActionInputRemapData GetCustomTouch();                                                                                  // [0x15f8120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EthInputSettingLibrary.GetCustomKeyboard
	// FActionInputRemapData GetCustomKeyboard();                                                                               // [0x15f80e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EthInputSettingLibrary.GetCustomGamepad
	// FActionInputRemapData GetCustomGamepad();                                                                                // [0x15f80a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EthInputSettingLibrary.ApplyTouchSettings
	// void ApplyTouchSettings();                                                                                               // [0x15f7630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EthInputSettingLibrary.ApplySettings
	// void ApplySettings();                                                                                                    // [0x15f7610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EthInputSettingLibrary.ApplyKeyboardSettings
	// void ApplyKeyboardSettings();                                                                                            // [0x15f75f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.EthInputSettingLibrary.ApplyGamepadSettings
	// void ApplyGamepadSettings();                                                                                             // [0x15f75d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.FaceLookAtComponent
/// Size: 0x0040 (0x0000B0 - 0x0000F0)
class UFaceLookAtComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(float)                                     LookAtSpeed                                                 OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FRotator)                                  LookAtRotLimit                                              OFFSET(getStruct<T>, {0xB4, 12, 0, 0})
	CMember(class AActor*)                             LookTarget                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             SkeletalComponent                                           OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UMonsterAnimInstance*)               AnimInstance                                                OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FRotator)                                  CurHeadAdditiveRot                                          OFFSET(getStruct<T>, {0xD8, 12, 0, 0})
	SMember(FRotator)                                  CurSpineAdditiveRot                                         OFFSET(getStruct<T>, {0xE4, 12, 0, 0})
};

/// Class /Script/GameUE.FadeRequest
/// Size: 0x0000 (0x000028 - 0x000028)
class UFadeRequest : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.FadeRequest.Update
	// void Update(float DeltaTime);                                                                                            // [0x15f9220] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.FadeRequest.IsComplete
	// bool IsComplete();                                                                                                       // [0x15f85a0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.FadeRequest.GetDarkness
	// float GetDarkness();                                                                                                     // [0x15f8160] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.FadeRequest.Cleanup
	// void Cleanup();                                                                                                          // [0x1165460] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.FadeRequest.Activate
	// void Activate();                                                                                                         // [0x15f7430] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.FadeWidget
/// Size: 0x0000 (0x000280 - 0x000280)
class UFadeWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:


	/// Functions
	// Function /Script/GameUE.FadeWidget.UpdateDarkness
	// void UpdateDarkness(float Darkness);                                                                                     // [0x198a600] Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.FileUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UFileUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.FileUtils.LoadFileToString
	// FString LoadFileToString(FString Filename);                                                                              // [0x15f8630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.FileUtils.GetPathLeaf
	// FString GetPathLeaf(FString FullPath);                                                                                   // [0x15f81c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.FileUtils.GetAssetPathInDirectory
	// void GetAssetPathInDirectory(FString Path, class UClass* Class, TArray<FString>& OutNames);                              // [0x15f7c40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.FileUtils.GetAssetNamesInDirectory
	// void GetAssetNamesInDirectory(FString Path, class UClass* Class, TArray<FString>& OutNames);                             // [0x15f7ad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.FileUtils.GetAllFoldersInDirectory
	// TArray<FString> GetAllFoldersInDirectory(FString FolderPath);                                                            // [0x15f7990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.FileUtils.GetAllFilesInDirectory
	// TArray<FString> GetAllFilesInDirectory(FString FolderPath, bool bRecursively, bool bIncludeDirectory);                   // [0x15f77c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/GameUE.FloorResult
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FFloorResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TWeakObjectPtr<class UPrimitiveComponent*>) Floor                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Class /Script/GameUE.GeneralMovementBaseComponent
/// Size: 0x0288 (0x000138 - 0x0003C0)
class UGeneralMovementBaseComponent : public UPawnMovementComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	DMember(float)                                     RotationYawRate                                             OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     MaxAcceleration                                             OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x140, 4, 0, 0})
	SMember(FVector)                                   NavExtend                                                   OFFSET(getStruct<T>, {0x144, 12, 0, 0})
	DMember(bool)                                      bUseNavMove                                                 OFFSET(get<bool>, {0x150, 1, 0, 0})
	CMember(class UClass*)                             NavFilterClass                                              OFFSET(get<T>, {0x158, 8, 0, 0})
	DMember(bool)                                      bUpdateBaseMovement                                         OFFSET(get<bool>, {0x160, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAutoMoveComplete                                          OFFSET(getStruct<T>, {0x228, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAutoMoveFail                                              OFFSET(getStruct<T>, {0x238, 16, 0, 0})
	SMember(FFloorResult)                              FloorResult                                                 OFFSET(getStruct<T>, {0x250, 208, 0, 0})
	CMember(class AActor*)                             BorderActor                                                 OFFSET(get<T>, {0x3B0, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.GeneralMovementBaseComponent.TeleportTo
	// void TeleportTo(FVector& InDest, FRotator& InRot, FVector& InRange);                                                     // [0x1609360] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/GameUE.GeneralMovementBaseComponent.StopAutoMove
	// void StopAutoMove(int32_t RequestId);                                                                                    // [0x16092d0] Final|Native|Public  
	// Function /Script/GameUE.GeneralMovementBaseComponent.SetVelocity
	// void SetVelocity(FVector V);                                                                                             // [0x16090a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.SetUseNavMove
	// void SetUseNavMove(bool bUse);                                                                                           // [0x1609010] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.SetRootMotionScale
	// void SetRootMotionScale(FVector LocScale, FVector RotScale);                                                             // [0x1608f30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.SetRootMotionFree
	// void SetRootMotionFree(bool bFree);                                                                                      // [0x1608ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.SetRootMotionControlRotation
	// void SetRootMotionControlRotation(bool bControlRotation);                                                                // [0x1608e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.SetMaxSpeed
	// void SetMaxSpeed(float Speed);                                                                                           // [0x1608d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.SetAutoMoveSpeed
	// void SetAutoMoveSpeed(float InSpeed);                                                                                    // [0x16084a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.SetAcceleration
	// void SetAcceleration(FVector A);                                                                                         // [0x1608410] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.ResetDesireDirection
	// void ResetDesireDirection();                                                                                             // [0x16083d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.RequestMoveTo
	// class UGeneralMovementBaseComponent* RequestMoveTo(FVector& InDest, float InSpeed, float InAspeed, bool bInterrupt);     // [0x1608250] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/GameUE.GeneralMovementBaseComponent.RequestLocalMoveTo
	// class UGeneralMovementBaseComponent* RequestLocalMoveTo(FVector& LocalDest, float InSpeed, float InAspeed, bool bInterrupt, class AActor* groundActor); // [0x1608070] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/GameUE.GeneralMovementBaseComponent.RequestFollow
	// class UGeneralMovementBaseComponent* RequestFollow(class AActor* InTarget, class USkeletalMeshComponent* MeshComp, FName SocketName, float InSpeed, float InAspeed, bool bInterrupt); // [0x1607e90] Final|Native|Public  
	// Function /Script/GameUE.GeneralMovementBaseComponent.RequestEnd
	// void RequestEnd(int32_t ID);                                                                                             // [0x1607e00] Final|Native|Public  
	// Function /Script/GameUE.GeneralMovementBaseComponent.NavLocation2Actor
	// FVector NavLocation2Actor(FVector& NavLocation);                                                                         // [0x1607500] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.ManualTickComponent
	// void ManualTickComponent(float DeltaTime);                                                                               // [0x1607480] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.IsAutoMoving
	// bool IsAutoMoving(int32_t RequestId);                                                                                    // [0x16073e0] Final|Native|Public  
	// Function /Script/GameUE.GeneralMovementBaseComponent.GetVelocity
	// FVector GetVelocity();                                                                                                   // [0x16073b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.GetSpeed
	// float GetSpeed();                                                                                                        // [0x16072b0] Final|Native|Public  
	// Function /Script/GameUE.GeneralMovementBaseComponent.GetSafeLocation
	// FVector GetSafeLocation(FVector InPos, FVector RangeBox);                                                                // [0x16071b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.GetNavLocation
	// bool GetNavLocation(FVector InPos, FVector RangeBox, FVector& Out);                                                      // [0x1607060] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.GetAcceleration
	// FVector GetAcceleration();                                                                                               // [0x1606e00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.EnableLevelBorder
	// void EnableLevelBorder(class AActor* InBorderActor);                                                                     // [0x1606c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.EnableAcceleration
	// void EnableAcceleration(bool bEnable);                                                                                   // [0x1606be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.DesiredRotation
	// class UGeneralMovementBaseComponent* DesiredRotation(FRotator& InRotator, bool bInTurn);                                 // [0x1606b00] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/GameUE.GeneralMovementBaseComponent.CheckUseNavMove
	// bool CheckUseNavMove();                                                                                                  // [0x1606ad0] Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.AutoMoveComplete__DelegateSignature
	// void AutoMoveComplete__DelegateSignature(int32_t RequestId, int32_t Result);                                             // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GameUE.GeneralMovementBaseComponent.AddObstacle
	// void AddObstacle(class AActor* Obstacle);                                                                                // [0x1606840] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.AddMovementInput
	// void AddMovementInput(FVector2D& Input);                                                                                 // [0x16067b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.GeneralMovementBaseComponent.ActiveMovement
	// void ActiveMovement(bool bInActive);                                                                                     // [0x1606320] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.FloatMovementComponent
/// Size: 0x0018 (0x0003B8 - 0x0003D0)
class UFloatMovementComponent : public UGeneralMovementBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	DMember(float)                                     GeneralFloatHeight                                          OFFSET(get<float>, {0x3B8, 4, 0, 0})
	DMember(float)                                     MaxFloatHeight                                              OFFSET(get<float>, {0x3BC, 4, 0, 0})
	DMember(float)                                     DefaultMoveSpeed                                            OFFSET(get<float>, {0x3C0, 4, 0, 0})
	DMember(float)                                     DefaultAngularSpeed                                         OFFSET(get<float>, {0x3C4, 4, 0, 0})
};

/// Struct /Script/GameUE.FollowCameraStateQueue
/// Size: 0x0010 (0x000000 - 0x000010)
class FFollowCameraStateQueue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UFollowCameraState*>)         States                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/GameUE.FollowCameraScheduler
/// Size: 0x0088 (0x000220 - 0x0002A8)
class AFollowCameraScheduler : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(class UClass*)                             StateClass                                                  OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UStageScript*)                       Stage                                                       OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class USceneCameraSettingComponent*)       DefaultArm                                                  OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class UCameraComponent*)                   DefaultCamera                                               OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(TMap<int32_t, FFollowCameraStateQueue>)    StateQueues                                                 OFFSET(get<T>, {0x248, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.FollowCameraScheduler.RemoveState
	// void RemoveState(int32_t ID);                                                                                            // [0x15f8790] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraScheduler.RemoveInvalidStates
	// void RemoveInvalidStates();                                                                                              // [0x15f8770] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraScheduler.Init
	// void Init(class UStageScript* InStage, class USceneCameraSettingComponent* InDefaultArm, class UCameraComponent* InDefaultCamera); // [0x15f8460] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraScheduler.GetState
	// class UFollowCameraState* GetState(int32_t ID);                                                                          // [0x15f83c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraScheduler.GetCurState
	// class UFollowCameraState* GetCurState();                                                                                 // [0x15f8070] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraScheduler.AddState
	// int32_t AddState(class USceneCameraSettingComponent* Setting, class AActor* Trigger, FRotator ActorRot, bool bInitAtCurrent); // [0x15f7450] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/GameUE.FollowCameraSetting
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FFollowCameraSetting : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class AActor*)                             Box                                                         OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class AActor*)                             box1                                                        OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class AActor*)                             Box2                                                        OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/GameUE.FollowCameraState
/// Size: 0x0218 (0x000028 - 0x000240)
class UFollowCameraState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(class UStageScript*)                       Stage                                                       OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class USceneCameraSettingComponent*)       DefaultArm                                                  OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UCameraComponent*)                   DefaultCamera                                               OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class USceneCameraSettingComponent*)       Arm                                                         OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class USceneCameraSettingComponent*)       SettingArm                                                  OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UCameraComponent*)                   Camera                                                      OFFSET(get<T>, {0x58, 8, 0, 0})
	SMember(FFollowCameraSetting)                      ExtraSetting                                                OFFSET(getStruct<T>, {0x60, 160, 0, 0})
	CMember(class UFollowCameraState*)                 PreState                                                    OFFSET(get<T>, {0x100, 8, 0, 0})
	SMember(FTransform)                                R_CameraTrans                                               OFFSET(getStruct<T>, {0x110, 48, 0, 0})


	/// Functions
	// Function /Script/GameUE.FollowCameraState.Update
	// void Update(float Delta);                                                                                                // [0x15f92b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.Sync
	// void Sync(float Delta);                                                                                                  // [0x15f91a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.SkipBlendAtCurrent
	// void SkipBlendAtCurrent();                                                                                               // [0x15f9180] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.SkipBlend
	// void SkipBlend();                                                                                                        // [0x15f9160] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.SetLinkerSetting
	// void SetLinkerSetting(bool bLinker, class AActor* Box, class AActor* box1, class AActor* Box2);                          // [0x15f8d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.SetCustomBlendSpeed
	// void SetCustomBlendSpeed(float Speed);                                                                                   // [0x15f8940] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.SetArmYaw
	// void SetArmYaw(float Yaw);                                                                                               // [0x15f8840] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.ProcessLinkerSetting
	// void ProcessLinkerSetting(class AActor* Linker);                                                                         // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.FollowCameraState.OnLeaveState
	// void OnLeaveState();                                                                                                     // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.FollowCameraState.OnLeaveFocusObject
	// void OnLeaveFocusObject();                                                                                               // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.FollowCameraState.OnEnterFocusObject
	// void OnEnterFocusObject();                                                                                               // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.FollowCameraState.IsStatic
	// bool IsStatic();                                                                                                         // [0x15f8600] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.IsFocusObject
	// bool IsFocusObject();                                                                                                    // [0x15f85d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.IsAbsolute
	// bool IsAbsolute();                                                                                                       // [0x15f8570] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.GetRunExtraFOV
	// float GetRunExtraFOV();                                                                                                  // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.FollowCameraState.GetRunExtraArmLength
	// float GetRunExtraArmLength();                                                                                            // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.FollowCameraState.GetRightOffsetRecoverSpeed
	// float GetRightOffsetRecoverSpeed();                                                                                      // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.FollowCameraState.GetPriority
	// int32_t GetPriority();                                                                                                   // [0x15f8390] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.GetId
	// int32_t GetId();                                                                                                         // [0x15f8190] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.GetCurCameraData
	// void GetCurCameraData(FTransform& OutTrans, float& OutLength);                                                           // [0x15f7f40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.GetCameraInfo
	// void GetCameraInfo(class UCameraComponent*& OutViewInfo, FTransform& OutTransform);                                      // [0x15f7de0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.GetBlendSpeed
	// float GetBlendSpeed();                                                                                                   // [0x15f7db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.ForceCompleteFocusObject
	// void ForceCompleteFocusObject();                                                                                         // [0x15f77a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.CheckValid
	// bool CheckValid();                                                                                                       // [0x15f7770] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.CheckPlayerMovementCamera
	// void CheckPlayerMovementCamera();                                                                                        // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.FollowCameraState.CheckIsMoving
	// bool CheckIsMoving(class AActor* Target);                                                                                // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.FollowCameraState.CheckInterruptBlend
	// bool CheckInterruptBlend();                                                                                              // [0x15f7740] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.CheckFocusObjectEnd
	// bool CheckFocusObjectEnd();                                                                                              // [0x15f7710] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.CheckArmUpdate
	// bool CheckArmUpdate();                                                                                                   // [0x15f76e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.FollowCameraState.BlockInput
	// void BlockInput(bool bBlock);                                                                                            // [0x15f7650] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/GameUE.FrameState
/// Size: 0x0010 (0x000000 - 0x000010)
class FFrameState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   TransitBegin                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TransitLength                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   LoopBegin                                                   OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   LoopLength                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Class /Script/GameUE.FramePlayComponent
/// Size: 0x0098 (0x0001F8 - 0x000290)
class UFramePlayComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	CMember(TMap<FName, FFrameState>)                  StateMap                                                    OFFSET(get<T>, {0x1F8, 80, 0, 0})
	SMember(FName)                                     InitialStateName                                            OFFSET(getStruct<T>, {0x248, 8, 0, 0})
	DMember(int32_t)                                   MaterialSlotIndex                                           OFFSET(get<int32_t>, {0x250, 4, 0, 0})
	SMember(FName)                                     MaterialParameterName                                       OFFSET(getStruct<T>, {0x254, 8, 0, 0})
	SMember(FName)                                     LowQualityParameterName                                     OFFSET(getStruct<T>, {0x25C, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x264, 4, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           MaterialInstance                                            OFFSET(get<T>, {0x268, 8, 0, 0})
	SMember(FName)                                     CurrentState                                                OFFSET(getStruct<T>, {0x270, 8, 0, 0})
	SMember(FName)                                     DesiredState                                                OFFSET(getStruct<T>, {0x278, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.FramePlayComponent.SetState
	// void SetState(FName StateName, bool bReset);                                                                             // [0x15f9090] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.FriWayPointComponent
/// Size: 0x0010 (0x000230 - 0x000240)
class UFriWayPointComponent : public UChildActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x230, 4, 0, 0})
};

/// Class /Script/GameUE.GameCommand
/// Size: 0x0008 (0x000028 - 0x000030)
class UGameCommand : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EGameCommandType)                          CommandType                                                 OFFSET(get<T>, {0x28, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.GameCommand.SetCommandType
	// void SetCommandType(EGameCommandType Type);                                                                              // [0x15f88c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameCommand.GetCommandType
	// EGameCommandType GetCommandType();                                                                                       // [0x15f7f10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.DialogControlCommand
/// Size: 0x0010 (0x000030 - 0x000040)
class UDialogControlCommand : public UGameCommand
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   DialogHandle                                                OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   DialogControl                                               OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(bool)                                      bClosed                                                     OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/GameUE.BeginGameCommand
/// Size: 0x0008 (0x000030 - 0x000038)
class UBeginGameCommand : public UGameCommand
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   ServerId                                                    OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Class /Script/GameUE.RegisterCommand
/// Size: 0x0018 (0x000030 - 0x000048)
class URegisterCommand : public UGameCommand
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   Sex                                                         OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/GameUE.GameConfig
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UGameConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     NetCongestThreshold                                         OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             CongestWidgetClass                                          OFFSET(get<T>, {0x30, 40, 0, 0})
	CMember(TArray<FName>)                             BlockNameCultures                                           OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FName)                                     DefaultNameCulture                                          OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     DefaultLogoCulture                                          OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             LuaTimerProxy                                               OFFSET(get<T>, {0x78, 40, 0, 0})
};

/// Class /Script/GameUE.GameLifeCycleLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameLifeCycleLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.GameLifeCycleLibrary.RequestQuitGame
	// void RequestQuitGame(class UObject* WorldContextObject);                                                                 // [0x15fcf60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.GameNavigationSwitcher
/// Size: 0x0068 (0x000028 - 0x000090)
class UGameNavigationSwitcher : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class ANavigationData*)                    DynamicNavData                                              OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Struct /Script/GameUE.PlatformedNetWorkInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FPlatformedNetWorkInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Channel                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   RealChannel                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   XDDataPushAddr                                              OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/GameUE.PlatformSupportInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FPlatformSupportInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   ProductId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ServerURL                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameUE.TapSDKSupportParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FTapSDKSupportParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   TSSKey                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   TSSValue                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameUE.XDSDKSupportLanguage
/// Size: 0x0018 (0x000000 - 0x000018)
class FXDSDKSupportLanguage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   UELang                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   XDSDKLang                                                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Class /Script/GameUE.GameNetworkSettings
/// Size: 0x0100 (0x000028 - 0x000128)
class UGameNetworkSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(float)                                     HttpTimeout                                                 OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FString)                                   XDDataAddr                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   CDKeyAddr                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   CDKeyAddrOverSea                                            OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TArray<FPlatformedNetWorkInfo>)            IOSPlatformNetWorks                                         OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FPlatformedNetWorkInfo>)            AndroidPlatformNetWorks                                     OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FPlatformedNetWorkInfo>)            WindowsPlatformNetWorks                                     OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FPlatformedNetWorkInfo>)            MacPlatformNetWorks                                         OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FPlatformSupportInfo)                      SupportInfoCN                                               OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	SMember(FPlatformSupportInfo)                      SupportInfoOverSea                                          OFFSET(getStruct<T>, {0xC0, 32, 0, 0})
	CMember(TArray<FTapSDKSupportParams>)              TapSDKSupportParams                                         OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<FTapSDKSupportParams>)              TapSDKSupportParamsOverSea                                  OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FXDSDKSupportLanguage)                     XDSDKDefaultLang                                            OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	CMember(TArray<FXDSDKSupportLanguage>)             XDSDKSupportLangs                                           OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Class /Script/GameUE.GameplayControlLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayControlLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.GameplayControlLibrary.SetKeepAliveResumed
	// void SetKeepAliveResumed(class UObject* WorldContextObject, FName& Flag);                                                // [0x15fd230] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameplayControlLibrary.SetKeepAlivePaused
	// void SetKeepAlivePaused(class UObject* WorldContextObject, FName& Flag);                                                 // [0x15fd160] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.GameplayPrefs
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayPrefs : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.GameplayPrefs.UnsetValue
	// void UnsetValue(FString Key);                                                                                            // [0x15fd970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayPrefs.SetValueStr
	// void SetValueStr(FString Key, FString Value);                                                                            // [0x15fd6b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayPrefs.SavePrefs
	// void SavePrefs();                                                                                                        // [0x15fcfe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayPrefs.LoadPrefs
	// void LoadPrefs();                                                                                                        // [0x15fc100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayPrefs.GetValueStr
	// bool GetValueStr(FString Key, FString& Value);                                                                           // [0x15fbf30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.GameplayState
/// Size: 0x0158 (0x000028 - 0x000180)
class UGameplayState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(class UObject*)                            WorldContextObject                                          OFFSET(get<T>, {0x170, 8, 0, 0})
	DMember(bool)                                      bIsGameWorld                                                OFFSET(get<bool>, {0x178, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.GameplayState.Version_SetPatchedVersion
	// void Version_SetPatchedVersion(FString Version);                                                                         // [0x15fdd60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Version_GetPatchedVersion
	// FString Version_GetPatchedVersion();                                                                                     // [0x15fdce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Version_CheckVersionResult
	// bool Version_CheckVersionResult(int32_t& ResultCode, int32_t& OpCode);                                                   // [0x15fdbf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Version_CheckVersion
	// void Version_CheckVersion();                                                                                             // [0x15fdbd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Verify_RequireRegister
	// bool Verify_RequireRegister();                                                                                           // [0x15fdba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Verify_RequestVerify
	// void Verify_RequestVerify();                                                                                             // [0x15fdb80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Verify_RequestRegister
	// void Verify_RequestRegister(FString Name, int32_t Sex);                                                                  // [0x15fda90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Verify_LastVerifyResult
	// EGameplay_RequestState Verify_LastVerifyResult();                                                                        // [0x15fda60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Verify_LastVerifyError
	// int32_t Verify_LastVerifyError();                                                                                        // [0x15fda30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.UpdateGame
	// void UpdateGame();                                                                                                       // [0x15fda10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Tcp_LastNetworkError
	// int32_t Tcp_LastNetworkError();                                                                                          // [0x15fd940] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Tcp_LastConnectResult
	// EGameplay_RequestState Tcp_LastConnectResult();                                                                          // [0x15fd910] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Tcp_Disconnect
	// void Tcp_Disconnect();                                                                                                   // [0x15fd8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Tcp_Connect
	// void Tcp_Connect();                                                                                                      // [0x15fd8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.SignIn_RequestSignIn
	// void SignIn_RequestSignIn(bool bRe);                                                                                     // [0x15fd840] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.SignIn_LastResult
	// EGameplay_RequestState SignIn_LastResult();                                                                              // [0x15fd810] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.SignIn_LastError
	// int32_t SignIn_LastError();                                                                                              // [0x15fd7e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.ShouldReturnHome
	// bool ShouldReturnHome();                                                                                                 // [0x15fd7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.SetTransactionTimeout
	// void SetTransactionTimeout(int32_t Transaction, float InTimeout);                                                        // [0x15fd5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.SetTransactionTerminators
	// void SetTransactionTerminators(int32_t Transaction, TArray<int32_t>& Terminators);                                       // [0x15fd4f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.SetTransactionTerminator
	// void SetTransactionTerminator(int32_t Transaction, int32_t Terminator);                                                  // [0x15fd420] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.SetShouldReturnHome
	// void SetShouldReturnHome(bool bReturnHome);                                                                              // [0x15fd390] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.SetPlayWithContinue
	// void SetPlayWithContinue(bool bContinue);                                                                                // [0x15fd300] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.SetCustomState
	// void SetCustomState(FName& Key, int32_t Value);                                                                          // [0x15fd090] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Server_RequestServerData
	// void Server_RequestServerData(bool bForce);                                                                              // [0x15fd000] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Server_LastServerError
	// int32_t Server_LastServerError();                                                                                        // [0x15fcb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Relogin_SetLastError
	// void Relogin_SetLastError(int32_t Code);                                                                                 // [0x15fced0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Relogin_SetFailOperation
	// void Relogin_SetFailOperation(int32_t Op);                                                                               // [0x15fce40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Relogin_PopFailOperation
	// int32_t Relogin_PopFailOperation();                                                                                      // [0x15fce10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Relogin_GetLastError
	// int32_t Relogin_GetLastError();                                                                                          // [0x15fcde0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Relogin_ConsumeAutoRetry
	// bool Relogin_ConsumeAutoRetry();                                                                                         // [0x15fcdb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Relogin_BeginProcess
	// void Relogin_BeginProcess();                                                                                             // [0x15fcd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Region_ToggleGateway
	// void Region_ToggleGateway();                                                                                             // [0x15fcd70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Region_SetSeverSelectable
	// void Region_SetSeverSelectable(bool bSelectable);                                                                        // [0x15fcce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Region_SetCurrentServer
	// bool Region_SetCurrentServer(int32_t ServerId, int32_t InRegionId);                                                      // [0x15fcc10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Region_ResetRecommendation
	// void Region_ResetRecommendation();                                                                                       // [0x15fca90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Region_RequestRegionData
	// void Region_RequestRegionData();                                                                                         // [0x15fcbf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Region_RequestRecommend
	// void Region_RequestRecommend();                                                                                          // [0x15fcbd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Region_LastServerResult
	// EGameplay_RequestState Region_LastServerResult();                                                                        // [0x15fcba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Region_LastServerError
	// int32_t Region_LastServerError();                                                                                        // [0x15fcb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Region_LastRegionResult
	// EGameplay_RequestState Region_LastRegionResult();                                                                        // [0x15fcb40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Region_LastRegionError
	// int32_t Region_LastRegionError();                                                                                        // [0x15fcb10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Region_LastRecommendResult
	// EGameplay_RequestState Region_LastRecommendResult();                                                                     // [0x15fcae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Region_LastRecommendError
	// int32_t Region_LastRecommendError();                                                                                     // [0x15fcab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Region_InvalidateRecommendData
	// void Region_InvalidateRecommendData();                                                                                   // [0x15fca90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Region_GetDesiredServerId
	// void Region_GetDesiredServerId(int32_t& RegionId, int32_t& ServerId);                                                    // [0x15fc9b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Region_GetCurrentServerId
	// int32_t Region_GetCurrentServerId();                                                                                     // [0x15fc980] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Region_GetCurrentRegionId
	// int32_t Region_GetCurrentRegionId();                                                                                     // [0x15fc950] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Region_CheckRecommendValid
	// bool Region_CheckRecommendValid();                                                                                       // [0x15fc920] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.PushGameCommand
	// void PushGameCommand(EGameCommandType CommandType);                                                                      // [0x15fc8a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.PushEventByClass
	// class USysEvent* PushEventByClass(class UClass* EvClass);                                                                // [0x15fc800] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.PushEvent
	// void PushEvent(int32_t EventId, FString Message);                                                                        // [0x15fc710] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Platform_OpenLogin
	// void Platform_OpenLogin();                                                                                               // [0x15fc6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Platform_LoginDiscard
	// void Platform_LoginDiscard();                                                                                            // [0x15fc6d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Platform_LastLoginResult
	// EGameplay_RequestState Platform_LastLoginResult();                                                                       // [0x15fc6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Platform_LastLoginError
	// int32_t Platform_LastLoginError();                                                                                       // [0x15fc670] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Platform_Initialized
	// int32_t Platform_Initialized();                                                                                          // [0x15fc640] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Platform_Initialize
	// void Platform_Initialize();                                                                                              // [0x15fc620] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Platform_DefaultLogin
	// void Platform_DefaultLogin();                                                                                            // [0x15fc600] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Maintain_RequestMaintain
	// void Maintain_RequestMaintain(int32_t RegionId);                                                                         // [0x15fc570] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Maintain_LastMaintainResult
	// EGameplay_RequestState Maintain_LastMaintainResult();                                                                    // [0x15fc540] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Maintain_LastMaintainError
	// int32_t Maintain_LastMaintainError();                                                                                    // [0x15fc510] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Maintain_GetMaintainResult
	// FString Maintain_GetMaintainResult(bool& bBlock, FString& Title, FString& LinkText, FString& LinkAddr);                  // [0x15fc2e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Login_SetLastError
	// void Login_SetLastError(int32_t Code, bool Silent);                                                                      // [0x15fc210] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Login_GetLastError
	// int32_t Login_GetLastError(bool& bSilent);                                                                               // [0x15fc170] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Login_GetAutoVerify
	// bool Login_GetAutoVerify();                                                                                              // [0x15fc140] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Login_BeginProcess
	// void Login_BeginProcess();                                                                                               // [0x15fc120] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.IsQuickMode
	// bool IsQuickMode();                                                                                                      // [0x15fc0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.IsGameWorld
	// bool IsGameWorld();                                                                                                      // [0x15fc0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.IsCheatEnabled
	// bool IsCheatEnabled();                                                                                                   // [0x15fc070] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.GetWorldContextObject
	// class UObject* GetWorldContextObject();                                                                                  // [0x15fc040] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.GetSplashFinished
	// bool GetSplashFinished();                                                                                                // [0x15fbf00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.GetCustomState
	// int32_t GetCustomState(FName& Key, int32_t DefaultValue);                                                                // [0x15fbe10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.GetCurrentGender
	// int32_t GetCurrentGender();                                                                                              // [0x15fbde0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.GetContinueState
	// int32_t GetContinueState();                                                                                              // [0x15fbdb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Game_CleanupRuntimeData
	// void Game_CleanupRuntimeData();                                                                                          // [0x15fbd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Dialog_OpenErrorDialog
	// int32_t Dialog_OpenErrorDialog(FText& Title, FName& ErrorName, EDialogStyle Style);                                      // [0x15fbc10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Dialog_OpenDialogEx
	// int32_t Dialog_OpenDialogEx(class UDialogEvent*& Event);                                                                 // [0x15fbb70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Dialog_OpenDialog
	// int32_t Dialog_OpenDialog(FText& Title, FText& Message, EDialogStyle Style);                                             // [0x15fb9b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Dialog_CloseDialog
	// void Dialog_CloseDialog(int32_t Handler);                                                                                // [0x15fb920] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.CreateTransaction
	// int32_t CreateTransaction();                                                                                             // [0x15fb8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Cleanup_SetReadyToLogin
	// void Cleanup_SetReadyToLogin(bool bReady);                                                                               // [0x15fb860] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Cleanup_ReadyToLogin
	// bool Cleanup_ReadyToLogin();                                                                                             // [0x15fb830] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.CheckVersionValid
	// bool CheckVersionValid();                                                                                                // [0x15fb800] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.CheckVerifyValid
	// bool CheckVerifyValid();                                                                                                 // [0x15fb7d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.CheckSignInValid
	// bool CheckSignInValid();                                                                                                 // [0x15fb7a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.CheckServerValid
	// bool CheckServerValid();                                                                                                 // [0x15fb770] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.CheckConnectionValid
	// bool CheckConnectionValid();                                                                                             // [0x15fb740] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.CheckAuthValid
	// bool CheckAuthValid();                                                                                                   // [0x15fb710] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.CheckAccountValid
	// bool CheckAccountValid();                                                                                                // [0x15fb6e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Auth_RequestAuth
	// void Auth_RequestAuth();                                                                                                 // [0x15fb6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Auth_LastAuthResult
	// EGameplay_RequestState Auth_LastAuthResult();                                                                            // [0x15fb690] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameplayState.Auth_LastAuthError
	// int32_t Auth_LastAuthError();                                                                                            // [0x15fb660] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/GameUE.SignificanceConfig
/// Size: 0x0040 (0x000000 - 0x000040)
class FSignificanceConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     GroupName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(ESignificanceEval)                         EvalFunction                                                OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(TArray<float>)                             HighEndUpper                                                OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<float>)                             MiddleEndUpper                                              OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             LowEndUpper                                                 OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/GameUE.GameSignificance
/// Size: 0x00C0 (0x000220 - 0x0002E0)
class AGameSignificance : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(class USignificanceManager*)               SignificanceManager                                         OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(float)                                     CameraUpdateStep                                            OFFSET(get<float>, {0x2C0, 4, 0, 0})
	CMember(TArray<FSignificanceConfig>)               GroupInfos                                                  OFFSET(get<T>, {0x2C8, 16, 0, 0})
};

/// Class /Script/GameUE.GameStateMachine
/// Size: 0x00D8 (0x000050 - 0x000128)
class UGameStateMachine : public UGameStateObjectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(TArray<TSoftObjectPtr<UClass*>>)           ChildClasses                                                OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FName)                                     entryName                                                   OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	CMember(TMap<FName, TSoftObjectPtr<UClass*>>)      ChildClassMap                                               OFFSET(get<T>, {0x68, 80, 0, 0})
	CMember(TMap<FName, class UGameStateObjectBase*>)  ChildObjectMap                                              OFFSET(get<T>, {0xB8, 80, 0, 0})
	CMember(TArray<class UGameCommand*>)               CommandQueue                                                OFFSET(get<T>, {0x108, 16, 0, 0})
	SMember(FName)                                     CurrentChildName                                            OFFSET(getStruct<T>, {0x118, 8, 0, 0})
	DMember(bool)                                      bShouldUpdateChildren                                       OFFSET(get<bool>, {0x120, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.GameStateMachine.Update
	// void Update(float DeltaTime);                                                                                            // [0x16046a0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GameStateMachine.SetShouldUpdateChildren
	// void SetShouldUpdateChildren(bool bUpdate);                                                                              // [0x1604570] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameStateMachine.LeaveState
	// void LeaveState();                                                                                                       // [0xc890f0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GameStateMachine.Initialize
	// void Initialize();                                                                                                       // [0x116c190] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GameStateMachine.HandleCommand
	// bool HandleCommand(class UGameCommand* Comm);                                                                            // [0x16026e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GameStateMachine.EnterState
	// void EnterState();                                                                                                       // [0x1601bf0] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.GameStateQueue
/// Size: 0x0038 (0x000050 - 0x000088)
class UGameStateQueue : public UGameStateObjectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<TSoftObjectPtr<UClass*>>)           ChildClassQueue                                             OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<class UGameStateObjectBase*>)       ChildObjectQueue                                            OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(int32_t)                                   ChildObjectIndex                                            OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	CMember(TArray<class UGameCommand*>)               CommandQueue                                                OFFSET(get<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.GameStateQueue.LeaveState
	// void LeaveState();                                                                                                       // [0xc890f0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GameStateQueue.Initialize
	// void Initialize();                                                                                                       // [0x116c190] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GameStateQueue.HandleQueueSucceed
	// void HandleQueueSucceed();                                                                                               // [0x1602830] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GameStateQueue.HandleQueueFailed
	// void HandleQueueFailed();                                                                                                // [0x1602810] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GameStateQueue.HandleCommand
	// bool HandleCommand(class UGameCommand* Comm);                                                                            // [0x16026e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GameStateQueue.EnterState
	// void EnterState();                                                                                                       // [0x1601bf0] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.GameStaticLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameStaticLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.GameStaticLibrary.ResetLuaCultureSource
	// bool ResetLuaCultureSource(FString Culture);                                                                             // [0x16041d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameStaticLibrary.IsReview
	// bool IsReview();                                                                                                         // [0x1602f50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.GameStaticLibrary.IsOversea
	// bool IsOversea();                                                                                                        // [0x130ccd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.GameStaticLibrary.IsLimitTopup
	// bool IsLimitTopup();                                                                                                     // [0x1602ef0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.GameStaticLibrary.GetZoneInfo
	// FZoneInfoStruct GetZoneInfo();                                                                                           // [0x1602690] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameStaticLibrary.GetViewportSize
	// FIntPoint GetViewportSize();                                                                                             // [0x1602620] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.GameStaticLibrary.GetServerName
	// FString GetServerName(class UObject* WorldContextObject, int32_t ServerId, int32_t RegionId);                            // [0x1602430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameStaticLibrary.GetServerCode
	// FString GetServerCode();                                                                                                 // [0x16023b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameStaticLibrary.GetRegionName
	// void GetRegionName(class UObject* WorldContextObject, int32_t ID, FText& OutName, FString& OutAbbr, FLinearColor& OutColor); // [0x1602160] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.GameStaticLibrary.GetGameInstance
	// class UGameUEInstance* GetGameInstance();                                                                                // [0x1601fd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameStaticLibrary.GetDefaultLang
	// FString GetDefaultLang();                                                                                                // [0x1601f50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameStaticLibrary.GetCurrentServerCode
	// FString GetCurrentServerCode(class UObject* WorldContextObject);                                                         // [0x1601e80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameStaticLibrary.GetChannelInfo
	// FChannelInfoStruct GetChannelInfo();                                                                                     // [0x1601e40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameStaticLibrary.GetChannelId
	// FString GetChannelId();                                                                                                  // [0x1601dc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameStaticLibrary.CheckBuildType
	// bool CheckBuildType(bool bDebug, bool bDevelop, bool bShipping, bool bTest);                                             // [0x1601940] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.GameStaticLibrary.ChangeMainStateToVersion
	// bool ChangeMainStateToVersion();                                                                                         // [0x1601870] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.GameTriggerAgentComponent
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UGameTriggerAgentComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FGameplayTag)                              AgentTag                                                    OFFSET(getStruct<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/GameUE.GameTriggerContext
/// Size: 0x0038 (0x000028 - 0x000060)
class UGameTriggerContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/GameUE.GameTriggerContextProxy
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UGameTriggerContextProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UDataTable*)                         RequirementTable                                            OFFSET(get<T>, {0x28, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.GameTriggerContextProxy.TryEnterContext
	// bool TryEnterContext(FName Tag);                                                                                         // [0x1604600] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameTriggerContextProxy.Reset
	// void Reset();                                                                                                            // [0x16041b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameTriggerContextProxy.LeaveContext
	// void LeaveContext(FName Tag);                                                                                            // [0x1602f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameTriggerContextProxy.InitData
	// void InitData();                                                                                                         // [0x1602e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameTriggerContextProxy.HasContextName
	// bool HasContextName(FName Context);                                                                                      // [0x1602d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameTriggerContextProxy.HasAnyContextNames
	// bool HasAnyContextNames(TArray<FName>& InContexts);                                                                      // [0x1602b50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameTriggerContextProxy.HasAnyContext
	// bool HasAnyContext(FGameplayTagContainer& InContexts);                                                                   // [0x16029c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameTriggerContextProxy.CheckContextAvailable
	// bool CheckContextAvailable(FName Tag);                                                                                   // [0x1601ae0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.GameTriggerDecorator
/// Size: 0x00E8 (0x0001F8 - 0x0002E0)
class UGameTriggerDecorator : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FGameplayTagContainer)                     ExcludeContexts                                             OFFSET(getStruct<T>, {0x1F8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DependentContexts                                           OFFSET(getStruct<T>, {0x218, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DesireAgents                                                OFFSET(getStruct<T>, {0x238, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnComponentBeginOverlap                                     OFFSET(getStruct<T>, {0x258, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnComponentEndOverlap                                       OFFSET(getStruct<T>, {0x268, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.GameTriggerDecorator.OnParentEndOverlap
	// void OnParentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x1603380] Final|Native|Public  
	// Function /Script/GameUE.GameTriggerDecorator.OnParentBeginOverlap
	// void OnParentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x1603150] Final|Native|Public|HasOutParms 
	// Function /Script/GameUE.GameTriggerDecorator.CheckContext
	// bool CheckContext();                                                                                                     // [0x1601ab0] Final|Native|Public  
	// Function /Script/GameUE.GameTriggerDecorator.CheckAgent
	// bool CheckAgent(class AActor* OtherActor);                                                                               // [0x16018a0] Final|Native|Public  
};

/// Class /Script/GameUE.GameTriggerLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameTriggerLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.GameTriggerLibrary.RemoveContext
	// void RemoveContext(FName Context);                                                                                       // [0x16040a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameTriggerLibrary.RemoveAllContext
	// void RemoveAllContext();                                                                                                 // [0x1604080] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameTriggerLibrary.HasContextName
	// bool HasContextName(FName Context);                                                                                      // [0x1602df0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameTriggerLibrary.HasContext
	// bool HasContext(FGameplayTag Context);                                                                                   // [0x1602cc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameTriggerLibrary.HasAnyContextNames
	// bool HasAnyContextNames(TArray<FName>& InContexts);                                                                      // [0x1602c10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameTriggerLibrary.HasAnyContext
	// bool HasAnyContext(FGameplayTagContainer& InContexts);                                                                   // [0x1602a90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameTriggerLibrary.HasAllContextNames
	// bool HasAllContextNames(TArray<FName>& InContexts);                                                                      // [0x1602910] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameTriggerLibrary.HasAllContext
	// bool HasAllContext(FGameplayTagContainer& InContexts);                                                                   // [0x1602850] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameTriggerLibrary.GetTriggerDecorator
	// class UGameTriggerDecorator* GetTriggerDecorator(class UPrimitiveComponent* Trigger);                                    // [0x1602570] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GameTriggerLibrary.AddContext
	// void AddContext(FName Context);                                                                                          // [0x1601760] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.LateTickComponent
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class ULateTickComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class UViewFramework*)                     ViewFramework                                               OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class AActor*)                             OwnerActor                                                  OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Class /Script/GameUE.GameUEGameModeBase
/// Size: 0x0050 (0x0002C0 - 0x000310)
class AGameUEGameModeBase : public AGameModeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class USysBus*)                            Bus                                                         OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(TArray<class UUserWidget*>)                Overlays                                                    OFFSET(get<T>, {0x2C8, 16, 0, 0})
	CMember(class UViewFramework*)                     ViewFramework                                               OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class ULateTickComponent*)                 LateTickComponent                                           OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UClass*)                             AfkWidgetClass                                              OFFSET(get<T>, {0x2E8, 8, 0, 0})
	DMember(float)                                     AfkTimeLimit                                                OFFSET(get<float>, {0x2F0, 4, 0, 0})
	DMember(bool)                                      bIsGameWorld                                                OFFSET(get<bool>, {0x2F4, 1, 0, 0})
	CMember(class UUserWidget*)                        AfkWidget                                                   OFFSET(get<T>, {0x2F8, 8, 0, 0})
	DMember(int32_t)                                   DepthFrom                                                   OFFSET(get<int32_t>, {0x300, 4, 0, 0})
	DMember(int32_t)                                   DepthTo                                                     OFFSET(get<int32_t>, {0x304, 4, 0, 0})


	/// Functions
	// Function /Script/GameUE.GameUEGameModeBase.ViewCleanupEnd
	// void ViewCleanupEnd();                                                                                                   // [0x1604750] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEGameModeBase.ViewCleanupBegin
	// void ViewCleanupBegin();                                                                                                 // [0x1604730] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEGameModeBase.ReturnToLogin
	// void ReturnToLogin();                                                                                                    // [0x16043d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEGameModeBase.RemoveOverlayWidget
	// void RemoveOverlayWidget(class UUserWidget* Widget);                                                                     // [0x1604120] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEGameModeBase.OnOverlayRemoveWidget
	// void OnOverlayRemoveWidget(class UUserWidget* Widget);                                                                   // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GameUEGameModeBase.OnOverlayAddWidget
	// void OnOverlayAddWidget(class UUserWidget* Widget);                                                                      // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GameUEGameModeBase.InitGameMode
	// void InitGameMode();                                                                                                     // [0x1602ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEGameModeBase.HandleSysEvent
	// void HandleSysEvent(class USysEvent* Ev);                                                                                // [0x198a600] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GameUE.GameUEGameModeBase.GetGameplayState
	// class UGameplayState* GetGameplayState();                                                                                // [0x1602000] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEGameModeBase.EnableGauntletTest
	// bool EnableGauntletTest();                                                                                               // [0x1601ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEGameModeBase.AddOverlayWidget
	// void AddOverlayWidget(class UUserWidget* Widget);                                                                        // [0x16017e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.GameUEInstance
/// Size: 0x00B8 (0x0001A8 - 0x000260)
class UGameUEInstance : public UGameInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	CMember(class USysBus*)                            SysBus                                                      OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             StateObjectClass                                            OFFSET(get<T>, {0x1B0, 40, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             StateMachineClass                                           OFFSET(get<T>, {0x1D8, 40, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             ViewFrameworkClass                                          OFFSET(get<T>, {0x200, 40, 0, 0})
	CMember(class UViewFramework*)                     ViewFramework                                               OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class UGameNavigationSwitcher*)            NavigationSwitcher                                          OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class UObject*)                            AutomationScript                                            OFFSET(get<T>, {0x238, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.GameUEInstance.StopAutomation
	// void StopAutomation();                                                                                                   // [0x9a7970] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.StartAutomation
	// void StartAutomation(class UObject* Script);                                                                             // [0xa1e2e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.SimulateForeground
	// void SimulateForeground();                                                                                               // [0x9a7970] Final|Exec|Native|Public 
	// Function /Script/GameUE.GameUEInstance.SimulateBackground
	// void SimulateBackground();                                                                                               // [0x9a7970] Final|Exec|Native|Public 
	// Function /Script/GameUE.GameUEInstance.SetSkipGuide
	// void SetSkipGuide(bool bInSkipGuide);                                                                                    // [0x16044e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.SetAutoCompleteGuide
	// void SetAutoCompleteGuide(bool bInSkipGuide);                                                                            // [0x16044e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.Run
	// void Run();                                                                                                              // [0x16044c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.RetCode
	// void RetCode(FString TypeName, int32_t Code);                                                                            // [0x16042a0] Final|Exec|Native|Public 
	// Function /Script/GameUE.GameUEInstance.Restart
	// void Restart();                                                                                                          // [0x1604280] Final|Exec|Native|Public 
	// Function /Script/GameUE.GameUEInstance.PushXDDataCtrl
	// void PushXDDataCtrl(FString Tag, FString EventName, TMap<FString, FString> MapStringValues, TMap<FString, int64_t> MapIntValues); // [0x1603c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.PushTabDBTrackEventCtrl
	// void PushTabDBTrackEventCtrl(FString EventName, FString PropertiesStr);                                                  // [0x1603af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.PushRequestPayCtrl
	// void PushRequestPayCtrl(FString Amount);                                                                                 // [0x16039f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.PushPayCallBackCtrl
	// void PushPayCallBackCtrl(bool Result, FString Amount);                                                                   // [0x16038a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.PushOpenTapBillboardCtrl
	// void PushOpenTapBillboardCtrl(int32_t TapBillboardType, int32_t HandleType, bool StopMarquee);                           // [0x1603790] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.PushEvent
	// void PushEvent(int32_t EventId, FString Message);                                                                        // [0x16036a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.PushCommonCtrl
	// void PushCommonCtrl(int32_t ControlId);                                                                                  // [0x1603610] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.PauseKeepAlive
	// void PauseKeepAlive(FString Name, int32_t Pause);                                                                        // [0x16034e0] Final|Exec|Native|Public 
	// Function /Script/GameUE.GameUEInstance.NetworkDisconn
	// void NetworkDisconn();                                                                                                   // [0x16030a0] Final|Exec|Native|Public 
	// Function /Script/GameUE.GameUEInstance.IsSkipGuide
	// bool IsSkipGuide();                                                                                                      // [0x1602ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.IsQuickMode
	// bool IsQuickMode();                                                                                                      // [0x1602ec0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.GameUEInstance.IsLuaReady
	// bool IsLuaReady();                                                                                                       // [0x1602f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.IsAutoCompleteGuide
	// bool IsAutoCompleteGuide();                                                                                              // [0x1602ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.GetZoneId
	// int32_t GetZoneId();                                                                                                     // [0x1602660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.GameUEInstance.GetViewFramework
	// class UViewFramework* GetViewFramework();                                                                                // [0x1602600] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.GetPackageCultures
	// TArray<FString> GetPackageCultures();                                                                                    // [0x1602080] Final|Exec|Native|Public|Const 
	// Function /Script/GameUE.GameUEInstance.GetNavigationSwitcher
	// class UGameNavigationSwitcher* GetNavigationSwitcher();                                                                  // [0x1602060] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.GetGameplayState
	// class UGameplayState* GetGameplayState();                                                                                // [0x1602030] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.GameSignOut
	// void GameSignOut();                                                                                                      // [0x1601da0] Final|Exec|Native|Public 
	// Function /Script/GameUE.GameUEInstance.FindBestCultureMatch
	// FString FindBestCultureMatch(FString DefaultCulture);                                                                    // [0x1601ca0] Final|Exec|Native|Public|Const 
	// Function /Script/GameUE.GameUEInstance.EnterPreview
	// void EnterPreview();                                                                                                     // [0x1601bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEInstance.CheckDefaultCulture
	// void CheckDefaultCulture();                                                                                              // [0x1601b80] Final|Exec|Native|Public 
	// Function /Script/GameUE.GameUEInstance.bOversea
	// bool bOversea();                                                                                                         // [0x1604770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.GameUEInstance.AddBlockMessage
	// void AddBlockMessage(int32_t Proto, int32_t Times);                                                                      // [0x1601690] Final|Exec|Native|Public 
};

/// Class /Script/GameUE.EtheriaSoundSettingConfigs
/// Size: 0x0010 (0x000028 - 0x000038)
class UEtheriaSoundSettingConfigs : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   SoundMainValue                                              OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   SoundBGMValue                                               OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   SoundFXValue                                                OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   SoundVoiceValue                                             OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Class /Script/GameUE.GameUEUserSettings
/// Size: 0x0148 (0x000180 - 0x0002C8)
class UGameUEUserSettings : public UEtheriaGraphicUserSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(class UEtheriaSoundSettingConfigs*)        SoundConfigs                                                OFFSET(get<T>, {0x180, 8, 0, 0})
	DMember(int32_t)                                   GameSoundLevel                                              OFFSET(get<int32_t>, {0x188, 4, 0, 0})
	DMember(int32_t)                                   GameSoundMainValue                                          OFFSET(get<int32_t>, {0x18C, 4, 0, 0})
	DMember(int32_t)                                   GameSoundBGMValue                                           OFFSET(get<int32_t>, {0x190, 4, 0, 0})
	DMember(int32_t)                                   GameSoundFXValue                                            OFFSET(get<int32_t>, {0x194, 4, 0, 0})
	DMember(int32_t)                                   GameSoundVoiceValue                                         OFFSET(get<int32_t>, {0x198, 4, 0, 0})
	DMember(int32_t)                                   GameInputPresetKeyboard                                     OFFSET(get<int32_t>, {0x19C, 4, 0, 0})
	DMember(int32_t)                                   GameInputPresetGamepad                                      OFFSET(get<int32_t>, {0x1A0, 4, 0, 0})
	DMember(int32_t)                                   GameInputPresetTouch                                        OFFSET(get<int32_t>, {0x1A4, 4, 0, 0})
	SMember(FActionInputRemapData)                     GameInputCustomKeyboard                                     OFFSET(getStruct<T>, {0x1A8, 96, 0, 0})
	SMember(FActionInputRemapData)                     GameInputCustomGamepad                                      OFFSET(getStruct<T>, {0x208, 96, 0, 0})
	SMember(FActionInputRemapData)                     GameInputCustomTouch                                        OFFSET(getStruct<T>, {0x268, 96, 0, 0})


	/// Functions
	// Function /Script/GameUE.GameUEUserSettings.SetGameSoundVoiceValue
	// void SetGameSoundVoiceValue(int32_t SoundVoiceValue);                                                                    // [0x1608d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEUserSettings.SetGameSoundMainValue
	// void SetGameSoundMainValue(int32_t SoundMainValue);                                                                      // [0x1608c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEUserSettings.SetGameSoundLevel
	// void SetGameSoundLevel(int32_t InGameSoundLevel);                                                                        // [0x1608be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEUserSettings.SetGameSoundFXValue
	// void SetGameSoundFXValue(int32_t SoundFXValue);                                                                          // [0x1608b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEUserSettings.SetGameSoundBGMValue
	// void SetGameSoundBGMValue(int32_t SoundBGMValue);                                                                        // [0x1608ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEUserSettings.SetGameInputPresetTouch
	// void SetGameInputPresetTouch(int32_t InGameInputPresetTouch);                                                            // [0x1608a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEUserSettings.SetGameInputPresetKeyboard
	// void SetGameInputPresetKeyboard(int32_t InGameInputPresetKeyboard);                                                      // [0x16089a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEUserSettings.SetGameInputPresetGamepad
	// void SetGameInputPresetGamepad(int32_t InGameInputPresetGamepad);                                                        // [0x1608910] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GameUEUserSettings.SetGameInputCustomTouch
	// void SetGameInputCustomTouch(FActionInputRemapData& InGameInputCustomTouch);                                             // [0x16087c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameUEUserSettings.SetGameInputCustomKeyboard
	// void SetGameInputCustomKeyboard(FActionInputRemapData& InGameInputCustomKeyboard);                                       // [0x1608670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameUEUserSettings.SetGameInputCustomGamepad
	// void SetGameInputCustomGamepad(FActionInputRemapData& InGameInputCustomGamepad);                                         // [0x1608520] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GameUEUserSettings.GetGameSoundVoiceValue
	// int32_t GetGameSoundVoiceValue();                                                                                        // [0x1607040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.GameUEUserSettings.GetGameSoundMainValue
	// int32_t GetGameSoundMainValue();                                                                                         // [0x1607020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.GameUEUserSettings.GetGameSoundFXValue
	// int32_t GetGameSoundFXValue();                                                                                           // [0x1607000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.GameUEUserSettings.GetGameSoundBGMValue
	// int32_t GetGameSoundBGMValue();                                                                                          // [0x1606fe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.GameUEUserSettings.GetGameInputPresetTouch
	// int32_t GetGameInputPresetTouch();                                                                                       // [0x1606fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.GameUEUserSettings.GetGameInputPresetKeyboard
	// int32_t GetGameInputPresetKeyboard();                                                                                    // [0x1606fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.GameUEUserSettings.GetGameInputPresetGamepad
	// int32_t GetGameInputPresetGamepad();                                                                                     // [0x1606f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.GameUEUserSettings.GetGameInputCustomTouch
	// FActionInputRemapData GetGameInputCustomTouch();                                                                         // [0x1606f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.GameUEUserSettings.GetGameInputCustomKeyboard
	// FActionInputRemapData GetGameInputCustomKeyboard();                                                                      // [0x1606f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.GameUEUserSettings.GetGameInputCustomGamepad
	// FActionInputRemapData GetGameInputCustomGamepad();                                                                       // [0x1606ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GameUE.GeneralPlayerController
/// Size: 0x0000 (0x000570 - 0x000570)
class AGeneralPlayerController : public APlayerController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
};

/// Class /Script/GameUE.GeneralPlayerMovementComponent
/// Size: 0x0078 (0x0003B8 - 0x000430)
class UGeneralPlayerMovementComponent : public UGeneralMovementBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	DMember(float)                                     WalkSpeed                                                   OFFSET(get<float>, {0x3B8, 4, 0, 0})
	DMember(float)                                     RunSpeed                                                    OFFSET(get<float>, {0x3BC, 4, 0, 0})
	DMember(float)                                     SprintSpeed                                                 OFFSET(get<float>, {0x3C0, 4, 0, 0})
	DMember(bool)                                      bEnableTouchWall                                            OFFSET(get<bool>, {0x3C4, 1, 0, 0})
	DMember(float)                                     MaxTouchAngle                                               OFFSET(get<float>, {0x3C8, 4, 0, 0})
	DMember(float)                                     MinTouchAngle                                               OFFSET(get<float>, {0x3CC, 4, 0, 0})
	DMember(float)                                     MaxTouchTime                                                OFFSET(get<float>, {0x3D0, 4, 0, 0})
	DMember(float)                                     MaxSlopeAngle                                               OFFSET(get<float>, {0x3D4, 4, 0, 0})
	DMember(float)                                     MaxStepHeight                                               OFFSET(get<float>, {0x3D8, 4, 0, 0})
	DMember(float)                                     PullBackDistance                                            OFFSET(get<float>, {0x3DC, 4, 0, 0})
	DMember(float)                                     FloorDistance                                               OFFSET(get<float>, {0x3E0, 4, 0, 0})
	DMember(float)                                     MaxRevert                                                   OFFSET(get<float>, {0x3E4, 4, 0, 0})
	DMember(float)                                     CheckFloorCapsuleScale                                      OFFSET(get<float>, {0x3E8, 4, 0, 0})
	DMember(float)                                     CheckEdgeCapsuleScale                                       OFFSET(get<float>, {0x3EC, 4, 0, 0})
	DMember(float)                                     CheckEdgePredictLength                                      OFFSET(get<float>, {0x3F0, 4, 0, 0})
	SMember(FVector)                                   TryGuranteeSafeRange                                        OFFSET(getStruct<T>, {0x3F4, 12, 0, 0})
	DMember(float)                                     SingleFrameSafeDist                                         OFFSET(get<float>, {0x400, 4, 0, 0})


	/// Functions
	// Function /Script/GameUE.GeneralPlayerMovementComponent.StepOnMovable
	// void StepOnMovable(bool bOn);                                                                                            // [0x1609240] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GeneralPlayerMovementComponent.GetTryTouchAngle
	// float GetTryTouchAngle(FVector2D TryMoveDir);                                                                            // [0x1607320] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.GeneralPlayerMovementComponent.GetTouchAngle
	// float GetTouchAngle();                                                                                                   // [0x16072f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GeneralPlayerMovementComponent.GetBlockWallNormal
	// bool GetBlockWallNormal(FVector& OutWallNormal);                                                                         // [0x1606e30] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.GlobalAssetCache
/// Size: 0x0000 (0x000028 - 0x000028)
class UGlobalAssetCache : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.GlobalAssetCache.RemoveAssetsFromCache
	// void RemoveAssetsFromCache(TArray<FString>& AssetIds, int32_t CacheType);                                                // [0x1607b70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GlobalAssetCache.RemoveAssetFromCache
	// void RemoveAssetFromCache(FString AssetId, int32_t CacheType);                                                           // [0x1607a90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalAssetCache.ReleaseCache
	// void ReleaseCache(int32_t Type);                                                                                         // [0x1607a10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalAssetCache.AllocateCacheType
	// int32_t AllocateCacheType();                                                                                             // [0x1606a80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalAssetCache.AddAssetToCacheSync
	// class UObject* AddAssetToCacheSync(FString AssetId, int32_t CacheType, TArray<FName>& LoadBundles);                      // [0x16064f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GlobalAssetCache.AddAssetToCache
	// void AddAssetToCache(FString AssetId, int32_t CacheType, TArray<FName>& LoadBundles);                                    // [0x16063b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GlobalAssetCache.AddAssetsToCache
	// void AddAssetsToCache(TArray<FString>& AssetIds, int32_t CacheType, TArray<FName>& LoadBundles);                         // [0x1606640] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.GlobalEffect
/// Size: 0x01C0 (0x000220 - 0x0003E0)
class AGlobalEffect : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	CMember(class UClass*)                             FadeWidgetClass                                             OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UMaterialInterface*)                 HighlightMaterial                                           OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class UMaterialInterface*)                 OriginMaterial                                              OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(TArray<class UObject*>)                    Requests                                                    OFFSET(get<T>, {0x238, 16, 0, 0})
	CMember(TArray<class UObject*>)                    RequestTemp                                                 OFFSET(get<T>, {0x248, 16, 0, 0})
	CMember(TArray<class UPrimitiveComponent*>)        Highlights                                                  OFFSET(get<T>, {0x258, 16, 0, 0})
	CMember(TArray<class UPrimitiveComponent*>)        OriginPrimitives                                            OFFSET(get<T>, {0x268, 16, 0, 0})
	CMember(class UOwnerCaptureComponent*)             CaptureComponent                                            OFFSET(get<T>, {0x278, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             OriginRenderTarget                                          OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           OriginRenderMaterial                                        OFFSET(get<T>, {0x288, 8, 0, 0})
	SMember(FSlateBrush)                               OriginRenderBrush                                           OFFSET(getStruct<T>, {0x290, 208, 0, 0})
	CMember(class APostProcessVolume*)                 PostProcess                                                 OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UFadeWidget*)                        FadeWidget                                                  OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(TMap<FString, class UClass*>)              CameraShakes                                                OFFSET(get<T>, {0x388, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.GlobalEffect.ToggleHighlight
	// void ToggleHighlight(class UPrimitiveComponent* InComponent, bool bOn);                                                  // [0x16094a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalEffect.SimpleFade
	// void SimpleFade(float InEnterTime, float InDarkTime, float InLeaveTime);                                                 // [0x1609130] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalEffect.RemovePostProcessMatr
	// void RemovePostProcessMatr(class UMaterialInterface* Matr);                                                              // [0x1607d80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalEffect.RemoveOriginRenderActor
	// void RemoveOriginRenderActor(class AActor* InActor);                                                                     // [0x1607d00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalEffect.RemoveOriginRender
	// void RemoveOriginRender(class UPrimitiveComponent* InComponent);                                                         // [0x1607c80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalEffect.PlayFieldCameraShake
	// void PlayFieldCameraShake(FString InName, FVector& InCenter, float InnerRadius, float OuterRadius, bool bOrientShakeTowardsEpicenter); // [0x1607830] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.GlobalEffect.PlayExactCameraShake
	// class UCameraShakeBase* PlayExactCameraShake(FString InName);                                                            // [0x1607780] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalEffect.PlayCameraShakeSpec
	// void PlayCameraShakeSpec(FString InName, ECameraShakePlaySpace SpaceType, FRotator& InRotator);                          // [0x1607650] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.GlobalEffect.PlayCameraShake
	// void PlayCameraShake(FString InName);                                                                                    // [0x16075b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalEffect.GetDarkness
	// float GetDarkness();                                                                                                     // [0x1606ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.GlobalEffect.FadeRequest
	// void FadeRequest(class UObject* Request);                                                                                // [0x1606d80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalEffect.EndCameraShake
	// void EndCameraShake(class UCameraShakeBase* ShakeInstance);                                                              // [0x1606d00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalEffect.BeginPlay
	// void BeginPlay();                                                                                                        // [0x1606ab0] Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalEffect.AddPostProcessMatr
	// void AddPostProcessMatr(class UMaterialInterface* Matr);                                                                 // [0x1606a00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalEffect.AddOriginRenderActor
	// void AddOriginRenderActor(class AActor* InActor);                                                                        // [0x1606980] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalEffect.AddOriginRender
	// void AddOriginRender(class UPrimitiveComponent* InComponent);                                                            // [0x1606900] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.GlobalWidget
/// Size: 0x0000 (0x000280 - 0x000280)
class UGlobalWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
};

/// Class /Script/GameUE.GlobalLoadWidget
/// Size: 0x0078 (0x000280 - 0x0002F8)
class UGlobalLoadWidget : public UGlobalWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TMap<FName, float>)                        TextWeights                                                 OFFSET(get<T>, {0x288, 80, 0, 0})
	DMember(bool)                                      bNeedProgress                                               OFFSET(get<bool>, {0x2DB, 1, 0, 0})
	DMember(float)                                     ProgressValue                                               OFFSET(get<float>, {0x2DC, 4, 0, 0})
	CMember(class UWidgetLoadScript*)                  LoadScript                                                  OFFSET(get<T>, {0x2E0, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.GlobalLoadWidget.WidgetOut
	// void WidgetOut();                                                                                                        // [0xf15c40] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GlobalLoadWidget.WidgetIn
	// void WidgetIn();                                                                                                         // [0x160fe80] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GlobalLoadWidget.UpdateProgressValue
	// void UpdateProgressValue(float Value);                                                                                   // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GlobalLoadWidget.SetGender
	// void SetGender(int32_t Gender);                                                                                          // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GlobalLoadWidget.RequestHintText
	// void RequestHintText(FText& Title, FText& Message);                                                                      // [0x160f470] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.GlobalLoadWidget.ReadyToEnter
	// bool ReadyToEnter();                                                                                                     // [0x160f230] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalLoadWidget.OnWorldReady
	// void OnWorldReady(class UWorld* World);                                                                                  // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.GlobalLoadWidget.MarkReadyToEnter
	// void MarkReadyToEnter();                                                                                                 // [0x160ee90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalLoadWidget.CompleteWidgetOut
	// void CompleteWidgetOut();                                                                                                // [0x160e220] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GlobalLoadWidget.CompleteWidgetIn
	// void CompleteWidgetIn();                                                                                                 // [0x160e200] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.GlowTextHelper
/// Size: 0x0010 (0x000220 - 0x000230)
class AGlowTextHelper : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:


	/// Functions
	// Function /Script/GameUE.GlowTextHelper.GetBlureText
	// class UTexture2D* GetBlureText(FText& Text, FSlateFontInfo& FontInfo, FLinearColor& FontColor, float& GlowIntensity, float& OffsetLength); // [0x160e390] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.GMActor
/// Size: 0x0008 (0x000220 - 0x000228)
class AGMActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:


	/// Functions
	// Function /Script/GameUE.GMActor.OnMouseRightButtonClicked
	// void OnMouseRightButtonClicked();                                                                                        // [0x198a600] Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.GUIDActor
/// Size: 0x0010 (0x000220 - 0x000230)
class AGUIDActor : public ALuaActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x220, 16, 0, 0})
};

/// Class /Script/GameUE.GyroMotionComponent
/// Size: 0x0050 (0x0000B0 - 0x000100)
class UGyroMotionComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FVector2D)                                 RotateFactor                                                OFFSET(getStruct<T>, {0xB0, 8, 0, 0})
	SMember(FVector2D)                                 RotateRange                                                 OFFSET(getStruct<T>, {0xB8, 8, 0, 0})
	DMember(float)                                     Threshold                                                   OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     RecoverSpeed                                                OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     RotateSpeed                                                 OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     RecoverInterval                                             OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(bool)                                      bAutoMotion                                                 OFFSET(get<bool>, {0xD0, 1, 0, 0})
	SMember(FQuat)                                     MotionRotation                                              OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	CMember(class UCameraComponent*)                   CameraComponent                                             OFFSET(get<T>, {0xF0, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.GyroMotionComponent.SetRotateRange2
	// void SetRotateRange2(float X, float Y);                                                                                  // [0x160fb90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GyroMotionComponent.SetRotateRange
	// void SetRotateRange(FVector2D& Range);                                                                                   // [0x160fc60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.GyroMotionComponent.SetRotateFactor2
	// void SetRotateFactor2(float X, float Y);                                                                                 // [0x160fa30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GyroMotionComponent.SetRotateFactor
	// void SetRotateFactor(FVector2D& Factor);                                                                                 // [0x160fb00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.GyroMotionComponent.SetRecoverSpeed
	// void SetRecoverSpeed(float Speed);                                                                                       // [0x160f9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GyroMotionComponent.SetRecoverInterval
	// void SetRecoverInterval(float DeltaTime);                                                                                // [0x160f930] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.GyroMotionComponent.SetDebugAngular
	// void SetDebugAngular(FVector2D InDebugAngular);                                                                          // [0x160f7e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.GyroMotionComponent.SetAutoMotion
	// void SetAutoMotion(bool bInValue);                                                                                       // [0x160f6c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.HideArrowComponent
/// Size: 0x0010 (0x000480 - 0x000490)
class UHideArrowComponent : public UArrowComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	DMember(bool)                                      bIsLeftDirection                                            OFFSET(get<bool>, {0x480, 1, 0, 0})
};

/// Class /Script/GameUE.HotInputComponent
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UHotInputComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/GameUE.HotUpdateHandler
/// Size: 0x01C0 (0x000220 - 0x0003E0)
class AHotUpdateHandler : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	DMember(int32_t)                                   TotalFileNum                                                OFFSET(get<int32_t>, {0x220, 4, 0, 0})
	DMember(int32_t)                                   CurrentFileNum                                              OFFSET(get<int32_t>, {0x224, 4, 0, 0})
	SMember(FString)                                   CurrentFileDes                                              OFFSET(getStruct<T>, {0x228, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCheckFinished                                             OFFSET(getStruct<T>, {0x238, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHttpProgress                                              OFFSET(getStruct<T>, {0x248, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnProgressEnd                                               OFFSET(getStruct<T>, {0x258, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSafeLeave                                                 OFFSET(getStruct<T>, {0x268, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.HotUpdateHandler.StartDownLoadPatchs
	// void StartDownLoadPatchs();                                                                                              // [0x160fcf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.HotUpdateHandler.SafeLeave
	// void SafeLeave();                                                                                                        // [0x160f6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.HotUpdateHandler.ReplacePackage
	// void ReplacePackage();                                                                                                   // [0x160f450] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.HotUpdateHandler.OnSafeLeave__DelegateSignature
	// void OnSafeLeave__DelegateSignature();                                                                                   // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GameUE.HotUpdateHandler.OnProgressEnd__DelegateSignature
	// void OnProgressEnd__DelegateSignature();                                                                                 // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GameUE.HotUpdateHandler.OnHttpProgress__DelegateSignature
	// void OnHttpProgress__DelegateSignature();                                                                                // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GameUE.HotUpdateHandler.OnHttpEnd
	// void OnHttpEnd();                                                                                                        // [0x160eed0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.HotUpdateHandler.OnCheckFinished__DelegateSignature
	// void OnCheckFinished__DelegateSignature();                                                                               // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GameUE.HotUpdateHandler.MountPaks
	// void MountPaks();                                                                                                        // [0x160eeb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.HotUpdateHandler.InitInfo
	// void InitInfo();                                                                                                         // [0x160ed40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.HotUpdateHandler.GetTotalSize
	// FString GetTotalSize();                                                                                                  // [0x160ec60] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.HotUpdateHandler.GetRemoteVersion
	// FString GetRemoteVersion();                                                                                              // [0x160e9d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.HotUpdateHandler.GetPercent
	// float GetPercent();                                                                                                      // [0x160e990] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.HotUpdateHandler.GetFileString
	// FString GetFileString(FString Path);                                                                                     // [0x160e850] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.HotUpdateHandler.GetCurrentVersion
	// FString GetCurrentVersion();                                                                                             // [0x160e700] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.HotUpdateHandler.GetCurrentSize
	// FString GetCurrentSize();                                                                                                // [0x160e620] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.HotUpdateHandler.GetBillBoard
	// FString GetBillBoard();                                                                                                  // [0x160e2c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.HotUpdateHandler.CheckHotReload
	// void CheckHotReload();                                                                                                   // [0x160dd50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.HttpLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UHttpLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.HttpLibrary.post
	// void post(class UObject* InWorldContext, FString PostString, FString Address, FString Path);                             // [0x160eef0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.HyperLinkRichTextBlockDecorator
/// Size: 0x0728 (0x000028 - 0x000750)
class UHyperLinkRichTextBlockDecorator : public URichTextBlockDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
	SMember(FHyperlinkStyle)                           HL_Style                                                    OFFSET(getStruct<T>, {0x30, 1824, 0, 0})


	/// Functions
	// Function /Script/GameUE.HyperLinkRichTextBlockDecorator.ClickFun
	// void ClickFun(TMap<FString, FString>& MetaData);                                                                         // [0x160e0d0] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameUE.EdenCustomPreview
/// Size: 0x0000 (0x000028 - 0x000028)
class UEdenCustomPreview : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.EdenCustomPreview.PreparePreview
	// void PreparePreview(class UObject* WorldContextObject);                                                                  // [0x160f1a0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.EdenCustomPreview.IsQuickMode
	// bool IsQuickMode();                                                                                                      // [0x160ed60] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/GameUE.EdenCustomPreview.GetCustomScriptPath
	// FString GetCustomScriptPath();                                                                                           // [0x160e7d0] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.MiniMapMarkerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMiniMapMarkerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.MiniMapMarkerInterface.ShowBlockUI
	// void ShowBlockUI(bool bShowBlock);                                                                                       // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.MiniMapMarkerInterface.RefreshState
	// void RefreshState(class UMiniMapMarkerComponent* Marker);                                                                // [0x198a600] Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.Init_FinishState
/// Size: 0x0010 (0x000050 - 0x000060)
class UInit_FinishState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/GameUE.Init_LuaModuleState
/// Size: 0x0000 (0x000050 - 0x000050)
class UInit_LuaModuleState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/GameUE.Init_LuaPackState
/// Size: 0x0030 (0x000050 - 0x000080)
class UInit_LuaPackState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/GameUE.Init_ProtoState
/// Size: 0x0000 (0x000050 - 0x000050)
class UInit_ProtoState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/GameUE.InitServerState
/// Size: 0x0010 (0x000050 - 0x000060)
class UInitServerState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     NextStateName                                               OFFSET(getStruct<T>, {0x50, 8, 0, 0})
};

/// Class /Script/GameUE.InitState
/// Size: 0x0018 (0x000050 - 0x000068)
class UInitState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FName)                                     NextStateName                                               OFFSET(getStruct<T>, {0x50, 8, 0, 0})
};

/// Class /Script/GameUE.InputWidget
/// Size: 0x0040 (0x000128 - 0x000168)
class UInputWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FDelegateProperty)                         OnMouseMoveEvent                                            OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FDelegateProperty)                         OnMouseButtonDownEvent                                      OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FDelegateProperty)                         OnMouseButtonUpEvent                                        OFFSET(getStruct<T>, {0x148, 16, 0, 0})
};

/// Class /Script/GameUE.PooledObject
/// Size: 0x0000 (0x000028 - 0x000028)
class UPooledObject : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.PooledObject.StockOut
	// void StockOut();                                                                                                         // [0x1165460] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.PooledObject.StockIn
	// void StockIn();                                                                                                          // [0xc4c170] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.TraceItemRemain
/// Size: 0x0000 (0x000028 - 0x000028)
class UTraceItemRemain : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.TraceItemRemain.IsReadyToRelease
	// bool IsReadyToRelease();                                                                                                 // [0x160ed60] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.TraceItemRemain.BeginExit
	// void BeginExit();                                                                                                        // [0xc4c170] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.UpdateTraceItem
/// Size: 0x0000 (0x000028 - 0x000028)
class UUpdateTraceItem : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.UpdateTraceItem.UpdateTraceItem
	// void UpdateTraceItem(class UWorldTraceComponent* Component, FVector2D& Coord, FVector2D& Direction, bool bOnScreen);     // [0x160fd10] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/GameUE.JumpStartArrowComponent
/// Size: 0x0000 (0x000480 - 0x000480)
class UJumpStartArrowComponent : public UArrowComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
};

/// Class /Script/GameUE.LayerManager
/// Size: 0x0060 (0x000028 - 0x000088)
class ULayerManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TMap<EGameLayer, int32_t>)                 DynamicLayers                                               OFFSET(get<T>, {0x38, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.LayerManager.ResetLayer
	// void ResetLayer(EGameLayer Layer);                                                                                       // [0x160f600] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.LayerManager.ResetAll
	// void ResetAll();                                                                                                         // [0x160f5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.LayerManager.ReleaseRange
	// void ReleaseRange(EGameLayer Layer, int32_t Depth, int32_t Count);                                                       // [0x160f320] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.LayerManager.Release
	// void Release(EGameLayer Layer, int32_t Depth);                                                                           // [0x160f250] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.LayerManager.PreAllocate
	// int32_t PreAllocate(EGameLayer Layer, int32_t Count, int32_t& OutAllocated);                                             // [0x160f080] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.LayerManager.GetStaticLayer
	// int32_t GetStaticLayer(EGameLayer Layer);                                                                                // [0x160eaa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.LayerManager.Allocate
	// int32_t Allocate(EGameLayer Layer);                                                                                      // [0x160dcc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.LevelBorderComponent
/// Size: 0x0008 (0x000468 - 0x000470)
class ULevelBorderComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	CMember(class ULevelBorderGroup*)                  ParentGroup                                                 OFFSET(get<T>, {0x468, 8, 0, 0})
};

/// Class /Script/GameUE.LevelBorderGroup
/// Size: 0x0018 (0x000468 - 0x000480)
class ULevelBorderGroup : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(TArray<class ULevelBorderComponent*>)      PointList                                                   OFFSET(get<T>, {0x468, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.LevelBorderGroup.CheckVecDirCollisionCount
	// int32_t CheckVecDirCollisionCount(FVector2D Point, FVector2D Point2);                                                    // [0x160e000] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.LevelBorderGroup.CheckVecDirCollisionByBorder
	// bool CheckVecDirCollisionByBorder(FVector2D Point, FVector2D Point2, FVector2D& HitPoint, FVector2D& normalPoint);       // [0x160de90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.LevelBorderGroup.CheckTargetInRange
	// bool CheckTargetInRange(TArray<ULevelBorderGroup*> Groups, FVector2D Target);                                            // [0x160dd70] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.LevelHandleProxy
/// Size: 0x0010 (0x000028 - 0x000038)
class ULevelHandleProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/GameUE.LevelHandleProxy.SetLoadedAndVisible
	// void SetLoadedAndVisible(bool bLoaded, bool bVisible);                                                                   // [0x160f860] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.LevelHandleProxy.Remove
	// void Remove();                                                                                                           // [0x160f430] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.LevelLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULevelLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.LevelLibrary.LoadLevel
	// class ULevelHandleProxy* LoadLevel(class UObject* WorldObjectContext, FName Name, FName World);                          // [0x160ed90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.LevelLibrary.FlushLevelStreaming
	// void FlushLevelStreaming(class UObject* WorldObjectContext);                                                             // [0x160e240] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.LevelListener
/// Size: 0x0000 (0x000028 - 0x000028)
class ULevelListener : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.LevelListener.OnLevelVisible
	// void OnLevelVisible();                                                                                                   // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.LevelListener.OnLevelUnload
	// void OnLevelUnload();                                                                                                    // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.LevelListener.OnLevelLoad
	// void OnLevelLoad();                                                                                                      // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.LevelListener.OnLevelInvisible
	// void OnLevelInvisible();                                                                                                 // [0x198a600] Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.LevelManager
/// Size: 0x00F0 (0x000028 - 0x000118)
class ULevelManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:


	/// Functions
	// Function /Script/GameUE.LevelManager.SetCurrentGender
	// void SetCurrentGender(int32_t Gender);                                                                                   // [0x160f750] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.LevelManager.ReturnToLogin
	// void ReturnToLogin();                                                                                                    // [0x160f680] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.LevelManager.GetSubLevelPart
	// void GetSubLevelPart(FString SubLevelName, TArray<FString>& OutParts);                                                   // [0x160eb30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.LevelManager.AddLevelConfig
	// void AddLevelConfig(FString Name, FString PackagePath);                                                                  // [0x160dbb0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/GameUE.LevelReplayCommand
/// Size: 0x0020 (0x000000 - 0x000020)
class FLevelReplayCommand : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     CommandName                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   TargetId                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FGuid)                                     TargetGuid                                                  OFFSET(getStruct<T>, {0xC, 16, 0, 0})
	DMember(int32_t)                                   SubIndex                                                    OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
};

/// Class /Script/GameUE.LevelReplay
/// Size: 0x0018 (0x000028 - 0x000040)
class ULevelReplay : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   LevelKey                                                    OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(TArray<FLevelReplayCommand>)               ReplayCommands                                              OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/GameUE.ScenarioReplayCommand
/// Size: 0x0020 (0x000000 - 0x000020)
class FScenarioReplayCommand : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     CommandName                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   TargetId                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FGuid)                                     TargetGuid                                                  OFFSET(getStruct<T>, {0xC, 16, 0, 0})
	DMember(int32_t)                                   SubIndex                                                    OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
};

/// Class /Script/GameUE.ScenarioReplay
/// Size: 0x0018 (0x000030 - 0x000048)
class UScenarioReplay : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   ChapterId                                                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TArray<FScenarioReplayCommand>)            ReplayCommands                                              OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/GameUE.TowerReplay
/// Size: 0x0010 (0x000030 - 0x000040)
class UTowerReplay : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<class ULevelReplay*>)               TowerLevelReplays                                           OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/GameUE.LevelSequenceDirectorProxy
/// Size: 0x0000 (0x000028 - 0x000028)
class ULevelSequenceDirectorProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameUE.LinkDrawComponent
/// Size: 0x0078 (0x0001F8 - 0x000270)
class ULinkDrawComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	DMember(bool)                                      bStartPoint                                                 OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	CMember(class UStaticMesh*)                        StaticMesh                                                  OFFSET(get<T>, {0x200, 8, 0, 0})
	CMember(class UMaterialInterface*)                 SplineMaterial                                              OFFSET(get<T>, {0x208, 8, 0, 0})
	CMember(class AActor*)                             LinkActor                                                   OFFSET(get<T>, {0x210, 8, 0, 0})
	DMember(int32_t)                                   MinSegments                                                 OFFSET(get<int32_t>, {0x218, 4, 0, 0})
	DMember(int32_t)                                   MaxSegments                                                 OFFSET(get<int32_t>, {0x21C, 4, 0, 0})
	DMember(float)                                     SegmentLen                                                  OFFSET(get<float>, {0x220, 4, 0, 0})
	DMember(float)                                     ControlRatio1                                               OFFSET(get<float>, {0x224, 4, 0, 0})
	DMember(float)                                     ControlRatio2                                               OFFSET(get<float>, {0x228, 4, 0, 0})
	DMember(float)                                     ControlHeight1                                              OFFSET(get<float>, {0x22C, 4, 0, 0})
	DMember(float)                                     ControlHeight2                                              OFFSET(get<float>, {0x230, 4, 0, 0})
	DMember(float)                                     DrawScale                                                   OFFSET(get<float>, {0x234, 4, 0, 0})
	CMember(class ULinkDrawComponent*)                 LinkTarget                                                  OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(TArray<class USplineMeshComponent*>)       SplineMeshs                                                 OFFSET(get<T>, {0x260, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.LinkDrawComponent.ShowLink
	// void ShowLink(bool bShow);                                                                                               // [0x1615db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.LinkDrawComponent.GetLinkActor
	// class AActor* GetLinkActor();                                                                                            // [0x1615100] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.Login_BaseState
/// Size: 0x0008 (0x000050 - 0x000058)
class ULogin_BaseState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bAccountRequired                                            OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bAuthRequired                                               OFFSET(get<bool>, {0x51, 1, 0, 0})
	DMember(bool)                                      bVerifyRequired                                             OFFSET(get<bool>, {0x52, 1, 0, 0})
	DMember(bool)                                      bConnectionRequired                                         OFFSET(get<bool>, {0x53, 1, 0, 0})
};

/// Class /Script/GameUE.Login_AuthState
/// Size: 0x0000 (0x000058 - 0x000058)
class ULogin_AuthState : public ULogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/GameUE.Login_DefaultLoginState
/// Size: 0x0000 (0x000058 - 0x000058)
class ULogin_DefaultLoginState : public ULogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/GameUE.Login_DialState
/// Size: 0x0008 (0x000058 - 0x000060)
class ULogin_DialState : public ULogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     Connect_Timeout                                             OFFSET(get<float>, {0x58, 4, 0, 0})
};

/// Class /Script/GameUE.Login_LoginState
/// Size: 0x0008 (0x000058 - 0x000060)
class ULogin_LoginState : public ULogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/GameUE.Login_MaintainState
/// Size: 0x0010 (0x000058 - 0x000068)
class ULogin_MaintainState : public ULogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(float)                                     FetchInterval                                               OFFSET(get<float>, {0x64, 4, 0, 0})
};

/// Class /Script/GameUE.Login_RecommendState
/// Size: 0x0000 (0x000058 - 0x000058)
class ULogin_RecommendState : public ULogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/GameUE.Login_RedirectState
/// Size: 0x0000 (0x000058 - 0x000058)
class ULogin_RedirectState : public ULogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/GameUE.Login_RegisterState
/// Size: 0x0008 (0x000058 - 0x000060)
class ULogin_RegisterState : public ULogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/GameUE.Login_RegistIntroState
/// Size: 0x0000 (0x000058 - 0x000058)
class ULogin_RegistIntroState : public ULogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/GameUE.Login_SelectPlatformState
/// Size: 0x0000 (0x000058 - 0x000058)
class ULogin_SelectPlatformState : public ULogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/GameUE.Login_ServerListState
/// Size: 0x0070 (0x000058 - 0x0000C8)
class ULogin_ServerListState : public ULogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bMaintainData                                               OFFSET(get<bool>, {0x58, 1, 0, 0})
	SMember(FString)                                   TitleText                                                   OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   LinkText                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   LinkAddr                                                    OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   Content                                                     OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	DMember(int32_t)                                   MaintainState                                               OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   LastMaintainRegion                                          OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	DMember(float)                                     FetchVersionInterval                                        OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     FetchMaintainInterval                                       OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     FetchServerInterval                                         OFFSET(get<float>, {0xC0, 4, 0, 0})
};

/// Class /Script/GameUE.Login_SignInState
/// Size: 0x0008 (0x000058 - 0x000060)
class ULogin_SignInState : public ULogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     SignIn_Timeout                                              OFFSET(get<float>, {0x58, 4, 0, 0})
};

/// Class /Script/GameUE.Login_VerifyState
/// Size: 0x0008 (0x000058 - 0x000060)
class ULogin_VerifyState : public ULogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/GameUE.Login_WaitVerifyState
/// Size: 0x0000 (0x000058 - 0x000058)
class ULogin_WaitVerifyState : public ULogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/GameUE.LuaAssistComponent
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class ULuaAssistComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/GameUE.LuaBridge
/// Size: 0x0008 (0x000220 - 0x000228)
class ALuaBridge : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	CMember(class UClass*)                             DefaultInstanceClass                                        OFFSET(get<T>, {0x220, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.LuaBridge.SetGlobalTimeDilation
	// void SetGlobalTimeDilation(float NewTimeDilation);                                                                       // [0x1615d30] Final|Native|Static|Public 
	// Function /Script/GameUE.LuaBridge.ResetGlobalTimeDilation
	// void ResetGlobalTimeDilation();                                                                                          // [0x16159a0] Final|Native|Static|Public 
	// Function /Script/GameUE.LuaBridge.RemoveContextObject
	// void RemoveContextObject(int32_t SpaceId, FString Name);                                                                 // [0x1615600] Final|Native|Static|Public 
	// Function /Script/GameUE.LuaBridge.OpenStage
	// class UTaskOpenStage* OpenStage(class UGameInstance* Inst, int32_t StageId, bool bKeepUIs, int32_t InRebase);            // [0x1615420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.LuaBridge.MakeInstanceData
	// class UObject* MakeInstanceData(class UClass* InstanceClass);                                                            // [0x16152c0] Final|Native|Static|Public 
	// Function /Script/GameUE.LuaBridge.GetPlatformForLua
	// int32_t GetPlatformForLua();                                                                                             // [0x1615130] Final|Native|Static|Public 
	// Function /Script/GameUE.LuaBridge.GetGWorld
	// class UWorld* GetGWorld();                                                                                               // [0x16150a0] Final|Native|Static|Public 
	// Function /Script/GameUE.LuaBridge.GetGlobalTimeDilation
	// float GetGlobalTimeDilation();                                                                                           // [0x16150d0] Final|Native|Static|Public 
	// Function /Script/GameUE.LuaBridge.GetContextObjectByClass
	// class AActor* GetContextObjectByClass(int32_t SpaceId, int32_t Depth, class UClass* InClass);                            // [0x1614fa0] Final|Native|Static|Public 
	// Function /Script/GameUE.LuaBridge.GetContextObject
	// class AActor* GetContextObject(int32_t SpaceId, int32_t Depth, FString Name);                                            // [0x1614e70] Final|Native|Static|Public 
	// Function /Script/GameUE.LuaBridge.CloseStage
	// void CloseStage(class UGameInstance* Inst, int32_t StageId);                                                             // [0x1614bf0] Final|Native|Static|Public 
	// Function /Script/GameUE.LuaBridge.AddContextObject
	// void AddContextObject(int32_t SpaceId, FString Name, class AActor* Actor);                                               // [0x1614570] Final|Native|Static|Public 
};

/// Class /Script/GameUE.LuaInstanceObject
/// Size: 0x0008 (0x000028 - 0x000030)
class ULuaInstanceObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UObject*)                            Payload                                                     OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/GameUE.LuaLevelSequenceDirector
/// Size: 0x0000 (0x000030 - 0x000030)
class ULuaLevelSequenceDirector : public ULevelSequenceDirector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/GameUE.LuaPacked
/// Size: 0x0050 (0x000030 - 0x000080)
class ULuaPacked : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FString, FString>)                    LuaInfos                                                    OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/GameUE.LuaSceneComponent
/// Size: 0x0008 (0x0001F8 - 0x000200)
class ULuaSceneComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Script/GameUE.LuaSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class ULuaSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bLuaPacked                                                  OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/GameUE.SignificanceComponent
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class USignificanceComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FName)                                     SignificanceGroupName                                       OFFSET(getStruct<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.SignificanceComponent.ApplySignificanceLevel
	// void ApplySignificanceLevel(int32_t InLevel);                                                                            // [0x16407f0] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.LuaSignificanceComponent
/// Size: 0x0018 (0x0000D8 - 0x0000F0)
class ULuaSignificanceComponent : public USignificanceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   LuaFilePath                                                 OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
};

/// Class /Script/GameUE.StageWidget
/// Size: 0x0018 (0x0002A8 - 0x0002C0)
class UStageWidget : public UActionInputWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(bool)                                      bIgnoreTimeDilation                                         OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	CMember(class UUIScript*)                          UIScript                                                    OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UObject*)                            DestroyScope                                                OFFSET(get<T>, {0x2B8, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.StageWidget.OnFinalize
	// void OnFinalize();                                                                                                       // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.StageWidget.OnAwake
	// void OnAwake();                                                                                                          // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.StageWidget.GetUIScript
	// class UUIScript* GetUIScript();                                                                                          // [0x1647180] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.LuaStageWidget
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class ULuaStageWidget : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	SMember(FString)                                   LuaFilePath                                                 OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
};

/// Class /Script/GameUE.LuaTimerProxy
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class ULuaTimerProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:


	/// Functions
	// Function /Script/GameUE.LuaTimerProxy.ResumeTimer
	// void ResumeTimer(int32_t Key);                                                                                           // [0x16159c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.LuaTimerProxy.RemoveTimer
	// void RemoveTimer(int32_t Key);                                                                                           // [0x1615770] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.LuaTimerProxy.PauseTimer
	// void PauseTimer(int32_t Key);                                                                                            // [0x1615570] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.LuaTimerProxy.OnReceiveTimer
	// void OnReceiveTimer(int32_t Key);                                                                                        // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.LuaTimerProxy.Internal_OnTimer
	// void Internal_OnTimer(int32_t Key);                                                                                      // [0x1615230] Final|Native|Private 
	// Function /Script/GameUE.LuaTimerProxy.GetTimeRemaining
	// float GetTimeRemaining(int32_t Key);                                                                                     // [0x1615160] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.LuaTimerProxy.ClearTimers
	// void ClearTimers();                                                                                                      // [0x1614bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.LuaTimerProxy.AddTimer_Undilated
	// void AddTimer_Undilated(int32_t Key, float StartDelay, float interval);                                                  // [0x1614950] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.LuaTimerProxy.AddTimer_Remote
	// void AddTimer_Remote(int32_t Key, float StartDelay, float interval);                                                     // [0x1614840] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.LuaTimerProxy.AddTimer
	// void AddTimer(int32_t Key, float StartDelay, float interval);                                                            // [0x1614730] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.MapNavPoint
/// Size: 0x0038 (0x000220 - 0x000258)
class AMapNavPoint : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	CMember(TEnumAsByte<EMapNavPointType>)             PointType                                                   OFFSET(get<T>, {0x220, 1, 0, 0})
	CMember(TArray<class AMapNavPoint*>)               ChildPoints                                                 OFFSET(get<T>, {0x228, 16, 0, 0})
	SMember(FString)                                   PointOnwerSymbol                                            OFFSET(getStruct<T>, {0x238, 16, 0, 0})
	CMember(class USceneComponent*)                    TransformComponent                                          OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(class USplineComponent*)                   RailSplineComponent                                         OFFSET(get<T>, {0x250, 8, 0, 0})
};

/// Class /Script/GameUE.MapRefNavPoint
/// Size: 0x0030 (0x000220 - 0x000250)
class AMapRefNavPoint : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(TEnumAsByte<EMapNavPointType>)             PointType                                                   OFFSET(get<T>, {0x220, 1, 0, 0})
	CMember(TArray<class AMapRefNavPoint*>)            ChildPoints                                                 OFFSET(get<T>, {0x228, 16, 0, 0})
	SMember(FString)                                   PointOnwerSymbol                                            OFFSET(getStruct<T>, {0x238, 16, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x248, 4, 0, 0})
};

/// Class /Script/GameUE.MapVehicleAnimInstance
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UMapVehicleAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/GameUE.MaterialCurveTable
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UMaterialCurveTable : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TMap<FName, class UCurveFloat*>)           ScalarParameters                                            OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TMap<FName, class UCurveLinearColor*>)     VectorParameters                                            OFFSET(get<T>, {0x80, 80, 0, 0})
	DMember(float)                                     CurveLength                                                 OFFSET(get<float>, {0xD0, 4, 0, 0})
};

/// Class /Script/GameUE.MaterialMapTable
/// Size: 0x0058 (0x000030 - 0x000088)
class UMaterialMapTable : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TMap<TWeakObjectPtr<UMaterialInterface*>, class UMaterialInterface*>) MapTale                          OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(class UMaterialInterface*)                 Fallback                                                    OFFSET(get<T>, {0x80, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.MaterialMapTable.FindMapMaterial
	// class UMaterialInterface* FindMapMaterial(class UMaterialInterface* Origin);                                             // [0x1614dd0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/GameUE.MaterialTargetCache
/// Size: 0x0068 (0x000000 - 0x000068)
class FMaterialTargetCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(class UMeshComponent*)                     Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   MaterialSlot                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           Material                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Class /Script/GameUE.MaterialModifyComponent
/// Size: 0x00D8 (0x0000B0 - 0x000188)
class UMaterialModifyComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(TArray<class UMaterialModifyObject*>)      ModifyObjects                                               OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<class UMaterialModifyObject*>)      NewModifyObjects                                            OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TSet<UMaterialModifyObject*>)              ActiveObjects                                               OFFSET(get<T>, {0xD0, 80, 0, 0})
	CMember(TSet<UMaterialModifyObject*>)              PendingRemove                                               OFFSET(get<T>, {0x120, 80, 0, 0})
	CMember(TArray<FMaterialTargetCache>)              MaterialCache                                               OFFSET(get<T>, {0x170, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.MaterialModifyComponent.UpdateMaterialModifier
	// class UMaterialModifyObject* UpdateMaterialModifier(class UMaterialModifyObject* Modifier);                              // [0x1615e40] Final|Native|Public  
	// Function /Script/GameUE.MaterialModifyComponent.RemoveMaterialModifier
	// void RemoveMaterialModifier(class UMaterialModifyObject* Modifier);                                                      // [0x16156e0] Final|Native|Public  
	// Function /Script/GameUE.MaterialModifyComponent.HasModify
	// bool HasModify();                                                                                                        // [0x1615200] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MaterialModifyComponent.AddMaterialModifier
	// class UMaterialModifyObject* AddMaterialModifier(int32_t Priority);                                                      // [0x1614690] Final|Native|Public  
};

/// Struct /Script/GameUE.ModifyTarget
/// Size: 0x0118 (0x000000 - 0x000118)
class FModifyTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(class UMeshComponent*)                     Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   MaterialSlot                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(class UMaterialInterface*)                 OverrideMaterial                                            OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UMaterialMapTable*)                  MaterialLookupTable                                         OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(bool)                                      bCopyParameters                                             OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Class /Script/GameUE.MaterialModifyObject
/// Size: 0x0038 (0x000028 - 0x000060)
class UMaterialModifyObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FModifyTarget>)                     ModifyTargets                                               OFFSET(get<T>, {0x50, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.MaterialModifyObject.Weight
	// class UMaterialModifyObject* Weight(float Value);                                                                        // [0x16161f0] Final|Native|Public  
	// Function /Script/GameUE.MaterialModifyObject.VectorValue
	// class UMaterialModifyObject* VectorValue(FName& Name, FLinearColor& Value, int32_t InLayerIndex);                        // [0x16160c0] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/GameUE.MaterialModifyObject.VectorCurve
	// class UMaterialModifyObject* VectorCurve(FName& Name, FLinearColor& InVec0, FLinearColor& InVec1, class UCurveFloat* InCurve, int32_t InLayerIndex); // [0x1615ee0] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/GameUE.MaterialModifyObject.ScalarValue
	// class UMaterialModifyObject* ScalarValue(FName& Name, float Value, int32_t InLayerIndex);                                // [0x1615c10] Final|Native|Public|HasOutParms 
	// Function /Script/GameUE.MaterialModifyObject.ScalarCurve
	// class UMaterialModifyObject* ScalarCurve(FName& Name, float Scalar0, float Scalar1, class UCurveFloat* Curve, int32_t InLayerIndex); // [0x1615a50] Final|Native|Public|HasOutParms 
	// Function /Script/GameUE.MaterialModifyObject.ReplaceWithTable
	// class UMaterialModifyObject* ReplaceWithTable(class UMaterialMapTable* InTable, bool bCopyValue);                        // [0x16158d0] Final|Native|Public  
	// Function /Script/GameUE.MaterialModifyObject.ReplaceMaterial
	// class UMaterialModifyObject* ReplaceMaterial(class UMaterialInterface* InMaterial, bool bCopyValue);                     // [0x1615800] Final|Native|Public  
	// Function /Script/GameUE.MaterialModifyObject.ModifyTarget
	// class UMaterialModifyObject* ModifyTarget(class UMeshComponent* Comp, int32_t Slot);                                     // [0x1615350] Final|Native|Public  
	// Function /Script/GameUE.MaterialModifyObject.CurveTable
	// class UMaterialModifyObject* CurveTable(class UMaterialCurveTable* CurveTable, float AlphaValue, int32_t InLayerIndex);  // [0x1614cb0] Final|Native|Public  
	// Function /Script/GameUE.MaterialModifyObject.BlendOut
	// class UMaterialModifyObject* BlendOut(float Time);                                                                       // [0x1614b40] Final|Native|Public  
	// Function /Script/GameUE.MaterialModifyObject.Blend
	// class UMaterialModifyObject* Blend(float Value, float Time);                                                             // [0x1614a60] Final|Native|Public  
};

/// Class /Script/GameUE.MathUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UMathUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.MathUtils.UICheckPointInBox
	// bool UICheckPointInBox(FWidgetTransform BoxRenderTransform, FVector2D BoxPos, FVector2D BoxSize, FVector2D PointPos);    // [0x161a950] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.MathUtils.IsPointInBox
	// bool IsPointInBox(FVector Point, class UBoxComponent* Box, bool bIgnoreZ);                                               // [0x1619f30] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.MathUtils.GetPOTFillRatio
	// float GetPOTFillRatio(float InNum);                                                                                      // [0x1619c70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.MediaAssistActor
/// Size: 0x0000 (0x000220 - 0x000220)
class AMediaAssistActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:


	/// Functions
	// Function /Script/GameUE.MediaAssistActor.BP_OnAppForeground
	// void BP_OnAppForeground();                                                                                               // [0x198a600] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/GameUE.MediaAssistActor.BP_OnAppBackground
	// void BP_OnAppBackground();                                                                                               // [0x198a600] Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/GameUE.MediaAssistObject
/// Size: 0x0028 (0x000028 - 0x000050)
class UMediaAssistObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FMulticastInlineDelegate)                  AppBackgroundDelegate                                       OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AppForegroundDelegate                                       OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.MediaAssistObject.End
	// void End();                                                                                                              // [0x16198f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MediaAssistObject.CreateNewMediaAssistObject
	// class UMediaAssistObject* CreateNewMediaAssistObject(bool AddToRoot);                                                    // [0x1619860] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.MediaPlayComponent
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UMediaPlayComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0xB0, 1, 0, 0})
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UMediaSource*)                       MediaSource                                                 OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/GameUE.MediaState
/// Size: 0x0018 (0x000028 - 0x000040)
class UMediaState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     StateName                                                   OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	CMember(class UMediaSource*)                       MediaSource                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bInterruptable                                              OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x39, 1, 0, 0})
};

/// Class /Script/GameUE.MediaTransit
/// Size: 0x0020 (0x000028 - 0x000048)
class UMediaTransit : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     FromState                                                   OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     ToState                                                     OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	SMember(FDelegateProperty)                         CheckFunc                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Class /Script/GameUE.MediaStateComponent
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UMediaStateComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UClass*)                             StateMachineClass                                           OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UMediaStateMachine*)                 StateMachine                                                OFFSET(get<T>, {0xC0, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.MediaStateComponent.SetMediaPlayer
	// void SetMediaPlayer(class UMediaPlayer* Player);                                                                         // [0x161a830] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.MediaStateRuntime
/// Size: 0x0020 (0x000028 - 0x000048)
class UMediaStateRuntime : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UMediaState*)                        MediaState                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<class UMediaTransit*>)              Transits                                                    OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.MediaStateRuntime.PlayCompleted
	// bool PlayCompleted();                                                                                                    // [0x161a170] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MediaStateRuntime.OnPlayEnd
	// void OnPlayEnd();                                                                                                        // [0x161a150] Final|Native|Public  
	// Function /Script/GameUE.MediaStateRuntime.OnPlayBegin
	// void OnPlayBegin(FString OpenUrl);                                                                                       // [0x161a050] Final|Native|Public  
};

/// Class /Script/GameUE.MediaStateMachine
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UMediaStateMachine : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(class UMediaStateRuntime*)                 CurrentMediaState                                           OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     EntryState                                                  OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     CurrentStateName                                            OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	CMember(TArray<class UMediaState*>)                BuildStateArray                                             OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<class UMediaTransit*>)              BuildTransitArray                                           OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TMap<FName, class UMediaStateRuntime*>)    MediaStates                                                 OFFSET(get<T>, {0x60, 80, 0, 0})
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.MediaStateMachine.BuildStateMachine
	// void BuildStateMachine();                                                                                                // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.MediaStateMachine.AddMediaTransit
	// void AddMediaTransit(FName FromState, FName ToState, FDelegateProperty& CheckFunc);                                      // [0x1619350] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.MediaStateMachine.AddMediaState
	// void AddMediaState(FName InName, class UMediaSource* MediaSource, bool bInterruptable, bool bLoop);                      // [0x16191f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.MeshHelpLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshHelpLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.MeshHelpLibrary.GetVerteices
	// TArray<FVector> GetVerteices(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequence* AnimSequence);    // [0x1619d80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.MeshHelpLibrary.GetBonePosition
	// FVector GetBonePosition(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);                            // [0x1619b40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.MessageOverlay
/// Size: 0x0080 (0x000220 - 0x0002A0)
class AMessageOverlay : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(TArray<class UClass*>)                     CustomLayerClass                                            OFFSET(get<T>, {0x220, 16, 0, 0})
	CMember(TArray<class UUserWidget*>)                CustomLayers                                                OFFSET(get<T>, {0x230, 16, 0, 0})
	CMember(class UOverlayMessageLayout*)              MessageLayout                                               OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(TMap<FString, class UClass*>)              ClassMap                                                    OFFSET(get<T>, {0x248, 80, 0, 0})
	DMember(int32_t)                                   LayerMin                                                    OFFSET(get<int32_t>, {0x298, 4, 0, 0})
	DMember(int32_t)                                   LayerCount                                                  OFFSET(get<int32_t>, {0x29C, 4, 0, 0})


	/// Functions
	// Function /Script/GameUE.MessageOverlay.ClearWidgets
	// void ClearWidgets();                                                                                                     // [0x1619820] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MessageOverlay.AddWidget
	// class UUserWidget* AddWidget(FString AssetName);                                                                         // [0x1619540] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MessageOverlay.AddQueuedWidget
	// class UUserWidget* AddQueuedWidget(FString AssetName);                                                                   // [0x1619480] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/GameUE.FogDrawCommandBatch
/// Size: 0x0010 (0x000000 - 0x000010)
class FFogDrawCommandBatch : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Class /Script/GameUE.MiniMapFogLayerWidget
/// Size: 0x0198 (0x0002C0 - 0x000458)
class UMiniMapFogLayerWidget : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	DMember(float)                                     RTRatio                                                     OFFSET(get<float>, {0x2C0, 4, 0, 0})
	CMember(class UTexture2D*)                         DrawFogTexture                                              OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UTexture2D*)                         SmoothDrawFogTexture                                        OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(float)                                     GridDrawScale                                               OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(float)                                     SubGridDrawScale                                            OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(float)                                     ActiveRange                                                 OFFSET(get<float>, {0x2E0, 4, 0, 0})
	DMember(bool)                                      bRealTimeDraw                                               OFFSET(get<bool>, {0x2E4, 1, 0, 0})
	DMember(int32_t)                                   RealTimeDrawStep                                            OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
	DMember(float)                                     SmoothBlendTime                                             OFFSET(get<float>, {0x2EC, 4, 0, 0})
	SMember(FString)                                   SmoothBlendParamName                                        OFFSET(getStruct<T>, {0x2F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnGridActive                                                OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	CMember(class AMiniMapVolume*)                     CurVolume                                                   OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           DMI                                                         OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             RT                                                          OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             PreRT                                                       OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UCanvas*)                            RTCanvas                                                    OFFSET(get<T>, {0x330, 8, 0, 0})
	SMember(FDrawToRenderTargetContext)                RTContext                                                   OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	CMember(TArray<FFogDrawCommandBatch>)              FogDrawBatchQueue                                           OFFSET(get<T>, {0x378, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.MiniMapFogLayerWidget.UpdateFogAnim
	// void UpdateFogAnim(float DeltaTime);                                                                                     // [0x161ac30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MiniMapFogLayerWidget.UpdateFog
	// void UpdateFog(FVector2D PlayerLoc);                                                                                     // [0x161abb0] Final|Native|Public|HasDefaults 
	// Function /Script/GameUE.MiniMapFogLayerWidget.SetDynamicMaterial
	// void SetDynamicMaterial(class UMaterialInstanceDynamic* InDMI);                                                          // [0x161a680] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MiniMapFogLayerWidget.RebuildFog
	// void RebuildFog(class AMiniMapVolume* InCurVolume, FVector2D VisibleSize);                                               // [0x161a240] Final|Native|Public|HasDefaults 
	// Function /Script/GameUE.MiniMapFogLayerWidget.OnCleanBit
	// void OnCleanBit(int32_t GridId);                                                                                         // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.MiniMapFogLayerWidget.OnActveBit
	// void OnActveBit(int32_t GridId, int32_t BitIndex, int32_t BitNum);                                                       // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.MiniMapFogLayerWidget.GetPreFogRT
	// class UTextureRenderTarget2D* GetPreFogRT();                                                                             // [0x1619d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MiniMapFogLayerWidget.GetFogRT
	// class UTextureRenderTarget2D* GetFogRT();                                                                                // [0x1619c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MiniMapFogLayerWidget.GetFogBlendWeight
	// float GetFogBlendWeight();                                                                                               // [0x1606ed0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.MiniMapFogLayerWidget.FullDraw
	// void FullDraw();                                                                                                         // [0x1619b20] Final|Native|Public  
	// Function /Script/GameUE.MiniMapFogLayerWidget.FullBuildFog
	// void FullBuildFog(FVector2D InRefLoc, FIntPoint InGridNum, int32_t InSubGridNum, float InFogGridSize, float InSubGridSize, FVector2D InSize, float InRatio); // [0x1619910] Final|Native|Public|HasDefaults 
	// Function /Script/GameUE.MiniMapFogLayerWidget.CheckPosActive
	// bool CheckPosActive(FVector2D InUIOffset);                                                                               // [0x1619790] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.MiniMapFogLayerWidget.AddGirdActiveData
	// void AddGirdActiveData(int32_t GridId, TArray<int32_t>& InActiveData);                                                   // [0x1619100] Final|Native|Public|HasOutParms 
};

/// Class /Script/GameUE.MiniMapMarkerComponent
/// Size: 0x0070 (0x000490 - 0x000500)
class UMiniMapMarkerComponent : public UBoxComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1280;

public:
	DMember(bool)                                      bStatic                                                     OFFSET(get<bool>, {0x490, 1, 0, 0})
	DMember(bool)                                      bIsPlayerMarker                                             OFFSET(get<bool>, {0x491, 1, 0, 0})
	CMember(EMarkerType)                               Type                                                        OFFSET(get<T>, {0x492, 1, 0, 0})
	DMember(int32_t)                                   DrawPriority                                                OFFSET(get<int32_t>, {0x494, 4, 0, 0})
	CMember(class UClass*)                             MarkerCls                                                   OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(class UClass*)                             OuterMarkerCls                                              OFFSET(get<T>, {0x4A0, 8, 0, 0})
	DMember(bool)                                      bDisableWhenLeaveTrigger                                    OFFSET(get<bool>, {0x4A8, 1, 0, 0})
	DMember(float)                                     MonsterDrawDistance                                         OFFSET(get<float>, {0x4AC, 4, 0, 0})
	DMember(bool)                                      bInteractDefaultShow                                        OFFSET(get<bool>, {0x4B0, 1, 0, 0})
	DMember(bool)                                      bEnableSubAreaActive                                        OFFSET(get<bool>, {0x4B1, 1, 0, 0})
	DMember(bool)                                      bFixRot                                                     OFFSET(get<bool>, {0x4B2, 1, 0, 0})
	DMember(bool)                                      bOnlyShowInVolume                                           OFFSET(get<bool>, {0x4B3, 1, 0, 0})
	DMember(bool)                                      bInteractShowBlockUI                                        OFFSET(get<bool>, {0x4B4, 1, 0, 0})
	DMember(bool)                                      bStateDirty                                                 OFFSET(get<bool>, {0x4B5, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.MiniMapMarkerComponent.UpdateByCameraRot
	// void UpdateByCameraRot(class AActor* Player, class AActor* Camera);                                                      // [0x161aae0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.MiniMapVolume
/// Size: 0x0058 (0x000220 - 0x000278)
class AMiniMapVolume : public ALuaActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	CMember(class UClass*)                             BgWidget                                                    OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(TArray<class AMiniMapVolume*>)             ParallelVolumes                                             OFFSET(get<T>, {0x228, 16, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x238, 4, 0, 0})
	DMember(float)                                     ExtraScale                                                  OFFSET(get<float>, {0x23C, 4, 0, 0})
	DMember(float)                                     FogGridSize                                                 OFFSET(get<float>, {0x240, 4, 0, 0})
	DMember(int32_t)                                   FogSubGridNum                                               OFFSET(get<int32_t>, {0x244, 4, 0, 0})


	/// Functions
	// Function /Script/GameUE.MiniMapVolume.GetRefLoc
	// FVector2D GetRefLoc();                                                                                                   // [0x1619d50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.MiniMapVolume.GetRealRatio
	// FVector2D GetRealRatio();                                                                                                // [0x1619d20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.MiniMapVolume.GetFillRatio
	// FVector2D GetFillRatio();                                                                                                // [0x1619c20] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/GameUE.MiniMapMarker
/// Size: 0x0050 (0x000000 - 0x000050)
class FMiniMapMarker : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UUserWidget*)                        Widget                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UUserWidget*)                        OuterWidget                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class AActor*)                             Owner                                                       OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/GameUE.MiniMapBgInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FMiniMapBgInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UUserWidget*)                        Widget                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Class /Script/GameUE.MiniMapWidget
/// Size: 0x00E8 (0x0002C0 - 0x0003A8)
class UMiniMapWidget : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	DMember(float)                                     BorderRadius                                                OFFSET(get<float>, {0x2C0, 4, 0, 0})
	CMember(TMap<class UMiniMapMarkerComponent*, FMiniMapMarker>) Markers                                          OFFSET(get<T>, {0x2C8, 80, 0, 0})
	CMember(class UMiniMapMarkerComponent*)            PlayerMarker                                                OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class AMiniMapVolume*)                     CurVolume                                                   OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UCanvasPanel*)                       BorderCanvas                                                OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UCanvasPanel*)                       ContainerCanvas                                             OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UCanvasPanel*)                       DrawCanvas                                                  OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UCanvasPanel*)                       BGDrawCanvas                                                OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UCanvasPanel*)                       MarkerDrawCanvas                                            OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UCanvasPanelSlot*)                   DrawCanvasSlot                                              OFFSET(get<T>, {0x350, 8, 0, 0})
	SMember(FMiniMapBgInfo)                            BgInfo                                                      OFFSET(getStruct<T>, {0x358, 16, 0, 0})
	CMember(TArray<FMiniMapBgInfo>)                    ParallelBgInfos                                             OFFSET(get<T>, {0x368, 16, 0, 0})
	CMember(class UUserWidget*)                        FogWidget                                                   OFFSET(get<T>, {0x378, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.MiniMapWidget.UpdateLayout
	// void UpdateLayout(float DeltaTime);                                                                                      // [0x161acb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MiniMapWidget.SetPlayerMarker
	// void SetPlayerMarker(class UMiniMapMarkerComponent* Marker);                                                             // [0x161a8c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MiniMapWidget.SetFogWidgt
	// void SetFogWidgt(class UUserWidget* InWidget);                                                                           // [0x161a710] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MiniMapWidget.SetCurVolume
	// void SetCurVolume(class AMiniMapVolume* Volume);                                                                         // [0x161a5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MiniMapWidget.SetContainerSize
	// void SetContainerSize(FVector2D Size);                                                                                   // [0x161a570] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.MiniMapWidget.SetContainerCanvas
	// void SetContainerCanvas(class UCanvasPanel* Canvas);                                                                     // [0x161a4e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MiniMapWidget.SetBorderCanvas
	// void SetBorderCanvas(class UCanvasPanel* Canvas);                                                                        // [0x161a450] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MiniMapWidget.RefreshMarkers
	// void RefreshMarkers(TArray<UMiniMapMarkerComponent*>& InMarkers);                                                        // [0x161a310] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.MiniMapWidget.OnSwitchBg
	// void OnSwitchBg(class UUserWidget* Widget);                                                                              // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.MiniMapWidget.OnMarkerOut
	// void OnMarkerOut(class UUserWidget* OutMarkerWidget);                                                                    // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.MiniMapWidget.CreateDrawCanvas
	// void CreateDrawCanvas();                                                                                                 // [0x1619840] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MiniMapWidget.CheckMakersFogMask
	// void CheckMakersFogMask();                                                                                               // [0x1619770] Final|Native|Public  
	// Function /Script/GameUE.MiniMapWidget.CheckEnterArea
	// bool CheckEnterArea(class UUserWidget* Area);                                                                            // [0x16196d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MiniMapWidget.CheckCompInArea
	// bool CheckCompInArea(class UUserWidget* Area, class USceneComponent* Comp);                                              // [0x1619600] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.MonsterAnimInstance
/// Size: 0x0018 (0x0002B8 - 0x0002D0)
class UMonsterAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	DMember(int32_t)                                   ActionType                                                  OFFSET(get<int32_t>, {0x2B8, 4, 0, 0})
	DMember(int32_t)                                   AlertLevel                                                  OFFSET(get<int32_t>, {0x2BC, 4, 0, 0})
	DMember(float)                                     CurrentSpeed                                                OFFSET(get<float>, {0x2C0, 4, 0, 0})
	SMember(FRotator)                                  AdditiveFaceRot                                             OFFSET(getStruct<T>, {0x2C4, 12, 0, 0})
};

/// Class /Script/GameUE.MonsterDetectionViewComponent
/// Size: 0x0038 (0x000468 - 0x0004A0)
class UMonsterDetectionViewComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x468, 8, 0, 0})
	DMember(float)                                     CheckInterval                                               OFFSET(get<float>, {0x470, 4, 0, 0})
	DMember(float)                                     DetectDistance                                              OFFSET(get<float>, {0x474, 4, 0, 0})
	DMember(float)                                     DetectAngle                                                 OFFSET(get<float>, {0x478, 4, 0, 0})
	DMember(float)                                     SensationDistance                                           OFFSET(get<float>, {0x47C, 4, 0, 0})
	CMember(class USkeletalMeshComponent*)             SkeletalComponent                                           OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UFaceLookAtComponent*)               FaceLookAtComponent                                         OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class AActor*)                             TargetSeen                                                  OFFSET(get<T>, {0x490, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.MonsterDetectionViewComponent.SetLookEnemy
	// void SetLookEnemy(class AActor* Enemy);                                                                                  // [0x161a7a0] Final|Native|Public  
	// Function /Script/GameUE.MonsterDetectionViewComponent.RegisterFaceLookCom
	// void RegisterFaceLookCom(class UFaceLookAtComponent* COM);                                                               // [0x161a3c0] Final|Native|Public  
	// Function /Script/GameUE.MonsterDetectionViewComponent.Raycast
	// bool Raycast(class AActor* Enemy);                                                                                       // [0x161a1a0] Final|Native|Public  
	// Function /Script/GameUE.MonsterDetectionViewComponent.Insight
	// bool Insight(FVector enemyPos);                                                                                          // [0x1619e90] Final|Native|Public|HasDefaults 
	// Function /Script/GameUE.MonsterDetectionViewComponent.GetSeenActor
	// class AActor* GetSeenActor();                                                                                            // [0xa8cac0] Final|Native|Public  
};

/// Class /Script/GameUE.MotorMovementComponent
/// Size: 0x0020 (0x000490 - 0x0004B0)
class UMotorMovementComponent : public UVehicleMovementComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	DMember(float)                                     Accelerate                                                  OFFSET(get<float>, {0x490, 4, 0, 0})
	DMember(float)                                     MaxSideSpeed                                                OFFSET(get<float>, {0x494, 4, 0, 0})
	DMember(float)                                     SideAccelerate                                              OFFSET(get<float>, {0x498, 4, 0, 0})
	DMember(float)                                     RecoverAccelerate                                           OFFSET(get<float>, {0x49C, 4, 0, 0})
	DMember(float)                                     MaxTurnAngle                                                OFFSET(get<float>, {0x4A0, 4, 0, 0})
};

/// Class /Script/GameUE.MotorSpeedControlComponent
/// Size: 0x0060 (0x0000B0 - 0x000110)
class UMotorSpeedControlComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     Gravity                                                     OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     Friction                                                    OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     MaxThrottle                                                 OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     MaxBrake                                                    OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     Coefficient1                                                OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     Coefficient2                                                OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bOnlyDemo                                                   OFFSET(get<bool>, {0xCC, 1, 0, 0})
	DMember(float)                                     RefSpeed                                                    OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     RefAcceleration                                             OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     RefSlopeMaxAcce                                             OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     RefSlopeMaxDelatSpeed                                       OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     RefSlopeIgnoreAngle                                         OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(bool)                                      bIsJump                                                     OFFSET(get<bool>, {0xFC, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.MotorSpeedControlComponent.SetYInput
	// void SetYInput(float InputYAxis);                                                                                        // [0x161f000] Final|Native|Public  
	// Function /Script/GameUE.MotorSpeedControlComponent.SetOnlyBackWheelLand
	// void SetOnlyBackWheelLand(FVector ForwardDir, float Speed);                                                              // [0x161ee10] Final|Native|Public|HasDefaults 
	// Function /Script/GameUE.MotorSpeedControlComponent.SetInJump
	// void SetInJump();                                                                                                        // [0x161ec90] Final|Native|Public  
	// Function /Script/GameUE.MotorSpeedControlComponent.SetGear
	// void SetGear(char InputGear);                                                                                            // [0x161ec10] Final|Native|Public  
	// Function /Script/GameUE.MotorSpeedControlComponent.SetForward
	// void SetForward(FVector InputForwardDIr);                                                                                // [0x161eb80] Final|Native|Public|HasDefaults 
	// Function /Script/GameUE.MotorSpeedControlComponent.SetEndJump
	// void SetEndJump();                                                                                                       // [0x161eb60] Final|Native|Public  
	// Function /Script/GameUE.MotorSpeedControlComponent.SetCurSpeed
	// void SetCurSpeed(float Speed);                                                                                           // [0x161eae0] Final|Native|Public  
	// Function /Script/GameUE.MotorSpeedControlComponent.GetCurFowardSpeed
	// float GetCurFowardSpeed();                                                                                               // [0x161e070] Final|Native|Public  
	// Function /Script/GameUE.MotorSpeedControlComponent.GetCurAcceleration
	// float GetCurAcceleration();                                                                                              // [0x161e040] Final|Native|Public  
};

/// Struct /Script/GameUE.CustomBoxDesc
/// Size: 0x0018 (0x000000 - 0x000018)
class FCustomBoxDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   Center                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Extent                                                      OFFSET(getStruct<T>, {0xC, 12, 0, 0})
};

/// Struct /Script/GameUE.CustomRotBoxDesc
/// Size: 0x0024 (0x000000 - 0x000024)
class FCustomRotBoxDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FCustomBoxDesc)                            Box                                                         OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  Rot                                                         OFFSET(getStruct<T>, {0x18, 12, 0, 0})
};

/// Class /Script/GameUE.MovableGeoNavModifierComponent
/// Size: 0x0148 (0x000468 - 0x0005B0)
class UMovableGeoNavModifierComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	SMember(FCustomBoxDesc)                            Bounds_BuildData                                            OFFSET(getStruct<T>, {0x498, 24, 0, 0})
	CMember(TArray<FCustomRotBoxDesc>)                 ComponentBounds_BuildData                                   OFFSET(get<T>, {0x4B0, 16, 0, 0})
	CMember(TMap<int32_t, FTransform>)                 IndexTransforms                                             OFFSET(get<T>, {0x4C0, 80, 0, 0})
	SMember(FTransform)                                OwnerOriginTrans                                            OFFSET(getStruct<T>, {0x510, 48, 0, 0})
	CMember(TArray<float>)                             RotGeoStopPoints                                            OFFSET(get<T>, {0x540, 16, 0, 0})
	CMember(EMovableGeoType)                           MovableType                                                 OFFSET(get<T>, {0x550, 1, 0, 0})
	SMember(FName)                                     DesireComponentTag                                          OFFSET(getStruct<T>, {0x554, 8, 0, 0})
	DMember(int32_t)                                   ActivedIndex                                                OFFSET(get<int32_t>, {0x55C, 4, 0, 0})
	CMember(TMap<int32_t, class AActor*>)              CustomModifyShapeAtIndex                                    OFFSET(get<T>, {0x560, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.MovableGeoNavModifierComponent.ActiveNavmeshByIndex
	// void ActiveNavmeshByIndex(int32_t Index);                                                                                // [0x161d890] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.StageLoadScript
/// Size: 0x0028 (0x000028 - 0x000050)
class UStageLoadScript : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UStageManager*)                      StageMangr                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UStageScript*)                       StageTo                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UStageScript*)                       StageFrom                                                   OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bNeedProgress                                               OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bSupportWorldTravel                                         OFFSET(get<bool>, {0x41, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.StageLoadScript.UpdateProgress
	// void UpdateProgress(float Value);                                                                                        // [0x1641e40] Native|Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.StageLoadScript.OpenLoading
	// void OpenLoading();                                                                                                      // [0x1629620] Native|Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.StageLoadScript.OnWorldReady
	// void OnWorldReady(class UWorld* World);                                                                                  // [0x1601c10] Native|Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.StageLoadScript.OnTick
	// void OnTick(float DeltaTime);                                                                                            // [0xc8bf50] Native|Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.StageLoadScript.OnStageEnter
	// void OnStageEnter();                                                                                                     // [0x116c1b0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.StageLoadScript.OnLoadComplete
	// void OnLoadComplete();                                                                                                   // [0xc8b130] Native|Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.StageLoadScript.OnInitialize
	// void OnInitialize();                                                                                                     // [0x89bc50] Native|Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.StageLoadScript.OnDestroy
	// void OnDestroy();                                                                                                        // [0x1635730] Native|Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.StageLoadScript.MarkShouldFlush
	// void MarkShouldFlush();                                                                                                  // [0x16413e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageLoadScript.MarkReadyToSwitch
	// void MarkReadyToSwitch();                                                                                                // [0x16413c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageLoadScript.MarkReadyToProcess
	// void MarkReadyToProcess();                                                                                               // [0x1641380] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageLoadScript.MarkReadyToEnter
	// void MarkReadyToEnter();                                                                                                 // [0x1641360] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageLoadScript.MarkReadyToClose
	// void MarkReadyToClose();                                                                                                 // [0x1641340] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageLoadScript.MarkCameraControl
	// void MarkCameraControl(bool bControlled);                                                                                // [0x16412b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageLoadScript.BeginFadeOut
	// void BeginFadeOut();                                                                                                     // [0xc8b150] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/GameUE.MovieLoadScript
/// Size: 0x0020 (0x000050 - 0x000070)
class UMovieLoadScript : public UStageLoadScript
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   MediaFile                                                   OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Class /Script/GameUE.MovieSceneClockSourceActor
/// Size: 0x0020 (0x000220 - 0x000240)
class AMovieSceneClockSourceActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Struct /Script/GameUE.SubtitleItem
/// Size: 0x0018 (0x000000 - 0x000018)
class FSubtitleItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     FromSeconds                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ToSeconds                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FString)                                   Text                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Class /Script/GameUE.MultiMediaPlayer
/// Size: 0x0208 (0x000028 - 0x000230)
class UMultiMediaPlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FMulticastInlineDelegate)                  OnSubtitleUpdate                                            OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMoviePlayed                                               OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMovieFailed                                               OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMovieStopped                                              OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMoviePaused                                               OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMovieResumed                                              OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEverythingStopped                                         OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCustomSubtitleBegin                                       OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCustomSubtitleEnd                                         OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCustomSubtitleUpdate                                      OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCustomEvent                                               OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(class UMediaSource*)                       MediaSource                                                 OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(TArray<class USoundWave*>)                 Sounds                                                      OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(float)                                     CorrectInterval                                             OFFSET(get<float>, {0xF8, 4, 0, 0})
	SMember(FFloatRange)                               RateRange                                                   OFFSET(getStruct<T>, {0xFC, 16, 0, 0})
	CMember(TArray<FSubtitleItem>)                     Subtitles                                                   OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TMap<FName, FSubtitleItem>)                CustomSubtitle                                              OFFSET(get<T>, {0x120, 80, 0, 0})
	CMember(class UWorld*)                             World                                                       OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(TArray<class UAudioComponent*>)            SoundComponents                                             OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(TArray<float>)                             SoundTimeOffset                                             OFFSET(get<T>, {0x188, 16, 0, 0})
	DMember(int32_t)                                   SubtitleIndex                                               OFFSET(get<int32_t>, {0x198, 4, 0, 0})
	DMember(int32_t)                                   SubtitleStartIndex                                          OFFSET(get<int32_t>, {0x19C, 4, 0, 0})
	DMember(float)                                     LastCorrectTime                                             OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(float)                                     PlayOffset                                                  OFFSET(get<float>, {0x1A4, 4, 0, 0})


	/// Functions
	// Function /Script/GameUE.MultiMediaPlayer.Update
	// void Update(float DeltaTime);                                                                                            // [0x161f0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiMediaPlayer.Stop
	// void Stop();                                                                                                             // [0x161f080] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiMediaPlayer.SetWorldContextObject
	// void SetWorldContextObject(class UObject* World);                                                                        // [0x161ef70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiMediaPlayer.SetVolume
	// void SetVolume(float Volume);                                                                                            // [0x161eef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiMediaPlayer.SetMedia
	// void SetMedia(class UMediaSource* Media, class UMediaPlayer* Player);                                                    // [0x161ed40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiMediaPlayer.Resume
	// void Resume();                                                                                                           // [0x161eac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiMediaPlayer.Play
	// void Play();                                                                                                             // [0x161e960] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiMediaPlayer.Pause
	// void Pause();                                                                                                            // [0x161e940] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiMediaPlayer.OnSubtitleUpdate__DelegateSignature
	// void OnSubtitleUpdate__DelegateSignature(FString Subtitle);                                                              // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GameUE.MultiMediaPlayer.OnMovieEvent__DelegateSignature
	// void OnMovieEvent__DelegateSignature();                                                                                  // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GameUE.MultiMediaPlayer.OnMediaOpenFailed
	// void OnMediaOpenFailed(FString OpenedUrl);                                                                               // [0x161e6c0] Final|Native|Protected 
	// Function /Script/GameUE.MultiMediaPlayer.OnMediaOpened
	// void OnMediaOpened(FString OpenedUrl);                                                                                   // [0x161e7c0] Final|Native|Protected 
	// Function /Script/GameUE.MultiMediaPlayer.OnMediaClosed
	// void OnMediaClosed();                                                                                                    // [0x161e6a0] Final|Native|Protected 
	// Function /Script/GameUE.MultiMediaPlayer.OnCustomSubtitleUpdate__DelegateSignature
	// void OnCustomSubtitleUpdate__DelegateSignature(FName& Name, float TimeOffset);                                           // [0x198a600] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/GameUE.MultiMediaPlayer.OnCustomSubtitleEnd__DelegateSignature
	// void OnCustomSubtitleEnd__DelegateSignature(FName& Name);                                                                // [0x198a600] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/GameUE.MultiMediaPlayer.OnCustomSubtitleBegin__DelegateSignature
	// void OnCustomSubtitleBegin__DelegateSignature(FName& Name, FString Subtitle, float Length, float TimeOffset);            // [0x198a600] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/GameUE.MultiMediaPlayer.OnCustomEvent__DelegateSignature
	// void OnCustomEvent__DelegateSignature(FName& Name);                                                                      // [0x198a600] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/GameUE.MultiMediaPlayer.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x161e590] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.MultiMediaPlayer.GetTime
	// float GetTime();                                                                                                         // [0x161e350] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiMediaPlayer.GetCustomSubtitleText
	// FString GetCustomSubtitleText(FName SubtitleName);                                                                       // [0x161e0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiMediaPlayer.EnableMediaSound
	// void EnableMediaSound(bool bMediaEnabled, bool bMuteBGM);                                                                // [0x161df70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiMediaPlayer.Cleanup
	// void Cleanup();                                                                                                          // [0x161de30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiMediaPlayer.AddSubtitleWithText
	// void AddSubtitleWithText(FString Text);                                                                                  // [0x161dc60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiMediaPlayer.AddSubtitleWithFile
	// void AddSubtitleWithFile(FString Path);                                                                                  // [0x161dbb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiMediaPlayer.AddSubtitleWithDataTable
	// void AddSubtitleWithDataTable(class UDataTable* DataTable);                                                              // [0x161db20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiMediaPlayer.AddSound
	// void AddSound(class USoundWave* Sound);                                                                                  // [0x161da90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.MyDataTableUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UMyDataTableUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.MyDataTableUtils.GetDataTableTextColumnAsString
	// TArray<FString> GetDataTableTextColumnAsString(class UDataTable* DataTable, FName PropertyName);                         // [0x161e180] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.NetworkCongestWidget
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class UNetworkCongestWidget : public UActionInputWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:


	/// Functions
	// Function /Script/GameUE.NetworkCongestWidget.SetNetworkCongest
	// void SetNetworkCongest(bool bNewCongest);                                                                                // [0x198a600] Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.NotifyProxyComponent
/// Size: 0x0060 (0x0000B0 - 0x000110)
class UNotifyProxyComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FMulticastInlineDelegate)                  OnUniformNotify                                             OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAnimEventCall                                             OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCvEventCall                                               OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAkEventReadyIdleCall                                      OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStateMachineEnd                                           OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHurtStateMachineEnd                                       OFFSET(getStruct<T>, {0x100, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.NotifyProxyComponent.DispatchAkEventReadyIdle
	// void DispatchAkEventReadyIdle(FString EventName);                                                                        // [0x161de70] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/GameUE.StoryNPCGenerateInfo
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FStoryNPCGenerateInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             NPC                                                         OFFSET(get<T>, {0x10, 40, 0, 0})
	SMember(FString)                                   DefaultAnim                                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FTransform)                                DefaultTransform                                            OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	CMember(EStoryNPCState)                            DefaultState                                                OFFSET(get<T>, {0x80, 1, 0, 0})
	DMember(int32_t)                                   DefaultStorylineId                                          OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	SMember(FString)                                   SlotName                                                    OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Class /Script/GameUE.NPCManager
/// Size: 0x0050 (0x000220 - 0x000270)
class ANPCManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(TMap<FString, FStoryNPCGenerateInfo>)      NPCs                                                        OFFSET(get<T>, {0x220, 80, 0, 0})
};

/// Class /Script/GameUE.ObjectHelperLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UObjectHelperLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.ObjectHelperLibrary.ReleaseObjects
	// void ReleaseObjects(TArray<UObject*>& Objects);                                                                          // [0x161ea00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.ObjectHelperLibrary.ReleaseObject
	// void ReleaseObject(class UObject* Object);                                                                               // [0x161e980] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.OneVetoRule
/// Size: 0x0158 (0x000028 - 0x000180)
class UOneVetoRule : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FMulticastInlineDelegate)                  OnTopicStateChange                                          OFFSET(getStruct<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.OneVetoRule.Update
	// void Update();                                                                                                           // [0x161f120] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.OneVetoRule.TopicStateChange__DelegateSignature
	// void TopicStateChange__DelegateSignature();                                                                              // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GameUE.OneVetoRule.SetLazyUpdate
	// void SetLazyUpdate(bool bLazy);                                                                                          // [0x161ecb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.OneVetoRule.Reset
	// void Reset();                                                                                                            // [0x161eaa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.OneVetoRule.ManualControlTopic
	// void ManualControlTopic(FName& TopicName, bool bActive);                                                                 // [0x161e5c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.OneVetoRule.InitRulesByTable
	// void InitRulesByTable(class UDataTable* RuleData);                                                                       // [0x161e500] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.OneVetoRule.InitRulesByArray
	// void InitRulesByArray(TArray<FOneVetoStruct>& RuleArray);                                                                // [0x161e420] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.OneVetoRule.GetTopicResult
	// bool GetTopicResult(FName& TopicName);                                                                                   // [0x161e380] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.OneVetoRule.AutoControlTopic
	// void AutoControlTopic(FName& TopicName);                                                                                 // [0x161dda0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.OneVetoRule.ActiveRule
	// void ActiveRule(FName& RuleName, bool bActive);                                                                          // [0x161d920] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.OpenStageAsync
/// Size: 0x0030 (0x000030 - 0x000060)
class UOpenStageAsync : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UObject*)                            InstanceData                                                OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnComplete                                                  OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(class UTaskOpenStage*)                     OpenProc                                                    OFFSET(get<T>, {0x58, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.OpenStageAsync.OnStageOpen
	// void OnStageOpen(EStageRes res);                                                                                         // [0x161e8c0] Final|Native|Private 
};

/// Class /Script/GameUE.OverlayMessage
/// Size: 0x0000 (0x000028 - 0x000028)
class UOverlayMessage : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.OverlayMessage.ReadyToComplete
	// bool ReadyToComplete();                                                                                                  // [0x160ed60] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GameUE.OverlayMessage.GetVerticalAlignment
	// TEnumAsByte<EVerticalAlignment> GetVerticalAlignment();                                                                  // [0x15f85a0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GameUE.OverlayMessage.GetPadding
	// FMargin GetPadding();                                                                                                    // [0x161e310] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GameUE.OverlayMessage.GetHorizontalAlignment
	// TEnumAsByte<EHorizontalAlignment> GetHorizontalAlignment();                                                              // [0x161e2e0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/GameUE.OverlayMessageLayout
/// Size: 0x0040 (0x000280 - 0x0002C0)
class UOverlayMessageLayout : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(int32_t)                                   ActiveQueueNum                                              OFFSET(get<int32_t>, {0x280, 4, 0, 0})
	CMember(class UOverlay*)                           Overlay                                                     OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(TArray<class UUserWidget*>)                PendingQueue                                                OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(TArray<class UUserWidget*>)                ActiveQueue                                                 OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(TArray<class UUserWidget*>)                ActiveWidgets                                               OFFSET(get<T>, {0x2B0, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.OverlayMessageLayout.ClearWidgets
	// void ClearWidgets();                                                                                                     // [0x161de50] Final|Native|Public  
	// Function /Script/GameUE.OverlayMessageLayout.AddWidget
	// void AddWidget(class UUserWidget* InWidget);                                                                             // [0x161dd10] Final|Native|Public  
	// Function /Script/GameUE.OverlayMessageLayout.AddQueuedWidget
	// void AddQueuedWidget(class UUserWidget* InWidget);                                                                       // [0x161da00] Final|Native|Public  
};

/// Class /Script/GameUE.OverscreenFx
/// Size: 0x0008 (0x000220 - 0x000228)
class AOverscreenFx : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	DMember(float)                                     SizeX                                                       OFFSET(get<float>, {0x220, 4, 0, 0})
};

/// Class /Script/GameUE.OverscreenScaleFx
/// Size: 0x0008 (0x000220 - 0x000228)
class AOverscreenScaleFx : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FVector2D)                                 DesignSize                                                  OFFSET(getStruct<T>, {0x220, 8, 0, 0})
};

/// Class /Script/GameUE.OwnerCaptureComponent
/// Size: 0x0000 (0x0008B0 - 0x0008B0)
class UOwnerCaptureComponent : public USceneCaptureComponent2D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2224;

public:
};

/// Class /Script/GameUE.SysEvent
/// Size: 0x0018 (0x000028 - 0x000040)
class USysEvent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   EventId                                                     OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FString)                                   Message                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/GameUE.PatchEvent
/// Size: 0x0010 (0x000040 - 0x000050)
class UPatchEvent : public USysEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   BytesTotal                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   FilesTotal                                                  OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(bool)                                      bSucceed                                                    OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Class /Script/GameUE.PatchState
/// Size: 0x0028 (0x000050 - 0x000078)
class UPatchState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     NextStateName                                               OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	DMember(int32_t)                                   SkipPatchFlags                                              OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(bool)                                      bShouldRebuildMachine                                       OFFSET(get<bool>, {0x64, 1, 0, 0})
};

/// Class /Script/GameUE.PathingUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UPathingUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.PathingUtils.SamplePath
	// FTransform SamplePath(class UPathObject* Path, float Alpha);                                                             // [0x1624750] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.PathingUtils.NavigatePathWithActor
	// class UPathObject* NavigatePathWithActor(class AActor* From, class AActor* To, float StopDistance);                      // [0x1624110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.PathingUtils.NavigatePath
	// class UPathObject* NavigatePath(class AActor* From, FVector& To, float StopDistance);                                    // [0x1623ff0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.PathObject
/// Size: 0x0040 (0x000028 - 0x000068)
class UPathObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FVector>)                           WayPoints                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<float>)                             WayDistance                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FVector)                                   OriginPoint                                                 OFFSET(getStruct<T>, {0x48, 12, 0, 0})
	SMember(FVector)                                   TargetPoint                                                 OFFSET(getStruct<T>, {0x54, 12, 0, 0})
	DMember(float)                                     TotalLength                                                 OFFSET(get<float>, {0x60, 4, 0, 0})


	/// Functions
	// Function /Script/GameUE.PathObject.TrimStopDistance
	// void TrimStopDistance(float Distance);                                                                                   // [0x16250e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.PathObject.SetPathInfo
	// void SetPathInfo(class UNavigationPath* Path, FVector& Origin, FVector& Target);                                         // [0x1624a90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.PathObject.SampleLocation
	// FVector SampleLocation(float Alpha, FVector& OutDirection);                                                              // [0x1624650] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.PathObject.GetTotalLength
	// float GetTotalLength();                                                                                                  // [0x1623d30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.PlanarCaptureShadow
/// Size: 0x0048 (0x000220 - 0x000268)
class APlanarCaptureShadow : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	CMember(class UProceduralMeshComponent*)           ProceduralShadowMesh                                        OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class USceneCaptureComponent2D*)           CaptureComponent2D                                          OFFSET(get<T>, {0x228, 8, 0, 0})
	DMember(float)                                     ViewportDistance                                            OFFSET(get<float>, {0x230, 4, 0, 0})
	DMember(float)                                     OrthoWidth                                                  OFFSET(get<float>, {0x234, 4, 0, 0})
	SMember(FVector2D)                                 RenderTargetSize                                            OFFSET(getStruct<T>, {0x238, 8, 0, 0})
	CMember(class UMaterialInterface*)                 ShadowMaterial                                              OFFSET(get<T>, {0x240, 8, 0, 0})
	SMember(FName)                                     TextParameterName                                           OFFSET(getStruct<T>, {0x248, 8, 0, 0})
	CMember(class AActor*)                             CameraActor                                                 OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           DMI                                                         OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             RT                                                          OFFSET(get<T>, {0x260, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.PlanarCaptureShadow.SetCameraActor
	// void SetCameraActor(class ACameraActor* InCameraActor);                                                                  // [0x1624860] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.PlanarCaptureShadow.RemoveCapturedComponents
	// void RemoveCapturedComponents(TArray<UPrimitiveComponent*>& Components);                                                 // [0x16243d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.PlanarCaptureShadow.RemoveCapturedComponent
	// void RemoveCapturedComponent(class UPrimitiveComponent* InComponent);                                                    // [0x1624340] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.PlanarCaptureShadow.RemoveCapturedActor
	// void RemoveCapturedActor(class AActor* InActor);                                                                         // [0x16242b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.PlanarCaptureShadow.ClearAllCaptured
	// void ClearAllCaptured();                                                                                                 // [0x16236b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.PlanarCaptureShadow.AddCapturedComponents
	// void AddCapturedComponents(TArray<UPrimitiveComponent*>& Components);                                                    // [0x1622f10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.PlanarCaptureShadow.AddCapturedComponent
	// void AddCapturedComponent(class UPrimitiveComponent* InComponent);                                                       // [0x1622e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.PlanarCaptureShadow.AddCapturedActor
	// void AddCapturedActor(class AActor* InActor);                                                                            // [0x1622df0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.PlayerStartConfigActor
/// Size: 0x0010 (0x000220 - 0x000230)
class APlayerStartConfigActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FString)                                   LuaConfigPath                                               OFFSET(getStruct<T>, {0x220, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.PlayerStartConfigActor.ModifyLuaFile
	// void ModifyLuaFile();                                                                                                    // [0x1623fd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.PlayState
/// Size: 0x0010 (0x000050 - 0x000060)
class UPlayState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/GameUE.PostConstruct
/// Size: 0x0000 (0x000028 - 0x000028)
class UPostConstruct : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.PostConstruct.PostConstruct
	// void PostConstruct(class AContextManager* Mangr);                                                                        // [0x1624220] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.PostProcessController
/// Size: 0x00B0 (0x000220 - 0x0002D0)
class APostProcessController : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class APostProcessVolume*)                 PostProcessActor                                            OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(TMap<FString, class UMaterialInterface*>)  PostProcessMatrials                                         OFFSET(get<T>, {0x228, 80, 0, 0})
	CMember(TMap<FString, class UMaterialInstanceDynamic*>) DMIs                                                   OFFSET(get<T>, {0x278, 80, 0, 0})
	CMember(class ASceneCapture2D*)                    SnapShootProcessCamera                                      OFFSET(get<T>, {0x2C8, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.PostProcessController.SetVectorParameterValue
	// void SetVectorParameterValue(FString EffectName, FName ParameterName, FVector Vec);                                      // [0x1624eb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.PostProcessController.SetTextureParameterValue
	// void SetTextureParameterValue(FString EffectName, FName ParameterName, class UTexture* Value);                           // [0x1624d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.PostProcessController.SetScalarParameterValue
	// void SetScalarParameterValue(FString EffectName, FName ParameterName, float Value);                                      // [0x1624bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.PostProcessController.CaptureSceneInPostProcess
	// void CaptureSceneInPostProcess(FString EffectName, FTransform CameraTrans, float FOV);                                   // [0x16234b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.PostProcessController.BlendInPostProcess
	// void BlendInPostProcess(FString EffectName, float Weight);                                                               // [0x1623370] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.PreviewSkeletalMeshComponent
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UPreviewSkeletalMeshComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Script/GameUE.ProjectConfig
/// Size: 0x0038 (0x000028 - 0x000060)
class UProjectConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FString)                                   Channel                                                     OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   Version                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   CurrentCulture                                              OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      OpenCultrueWithEditor                                       OFFSET(get<bool>, {0x58, 1, 0, 0})
};

/// Class /Script/GameUE.Query
/// Size: 0x0200 (0x000028 - 0x000228)
class UQuery : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	CMember(TMap<FName, class UClass*>)                EvaluatorClasses                                            OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TMap<FName, class UQueryEval*>)            Evaluators                                                  OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TMap<FName, class AActor*>)                EvalContext                                                 OFFSET(get<T>, {0xC8, 80, 0, 0})
	CMember(TSet<AActor*>)                             Entities                                                    OFFSET(get<T>, {0x118, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.Query.RemoveEntity
	// void RemoveEntity(class AActor* Entity);                                                                                 // [0x1624510] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.Query.RemoveContextActor
	// void RemoveContextActor(FName& Name);                                                                                    // [0x1624480] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.Query.Invalidate
	// void Invalidate();                                                                                                       // [0x1623ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.Query.Initialize
	// void Initialize();                                                                                                       // [0x1623e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.Query.GetLast
	// class AActor* GetLast();                                                                                                 // [0x1623c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.Query.GetFront
	// TArray<AActor*> GetFront(int32_t N);                                                                                     // [0x1623ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.Query.GetFirst
	// class AActor* GetFirst();                                                                                                // [0x1623b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.Query.GetBack
	// TArray<AActor*> GetBack(int32_t N);                                                                                      // [0x1623a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.Query.Get
	// TArray<AActor*> Get();                                                                                                   // [0x16238d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.Query.Filter
	// class UQuery* Filter(FName Name, EQueryFilterMethod method, float Value);                                                // [0x16237b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.Query.ClearEntities
	// void ClearEntities();                                                                                                    // [0x16236f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.Query.ClearContextActor
	// void ClearContextActor();                                                                                                // [0x16236d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.Query.Cleanup
	// void Cleanup();                                                                                                          // [0x1623690] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.Query.BeginQuery
	// class UQuery* BeginQuery();                                                                                              // [0x1623340] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.Query.AddEntity
	// void AddEntity(class AActor* Entity);                                                                                    // [0x1623140] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.Query.AddEntities
	// void AddEntities(TArray<AActor*>& Entities);                                                                             // [0x1623090] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.Query.AddContextActor
	// void AddContextActor(FName& Name, class AActor* Actor);                                                                  // [0x1622fc0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.QueryEval
/// Size: 0x0000 (0x000028 - 0x000028)
class UQueryEval : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.QueryEval.Evaluate
	// float Evaluate(class AActor* Actor);                                                                                     // [0x1623710] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GameUE.QueryEval.EndEval
	// void EndEval();                                                                                                          // [0x89d6b0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GameUE.QueryEval.BeginEval
	// void BeginEval(TMap<FName, AActor*>& Context);                                                                           // [0x16231f0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/GameUE.QueryEval_Distance
/// Size: 0x0020 (0x000028 - 0x000048)
class UQueryEval_Distance : public UQueryEval
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     ContextName                                                 OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	CMember(class AActor*)                             OtherActor                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/GameUE.QueryEval_Navigation
/// Size: 0x0020 (0x000028 - 0x000048)
class UQueryEval_Navigation : public UQueryEval
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     ContextName                                                 OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	CMember(class AActor*)                             OtherActor                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/GameUE.QueryEval_Angle
/// Size: 0x0028 (0x000028 - 0x000050)
class UQueryEval_Angle : public UQueryEval
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     ContextName                                                 OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	CMember(class AActor*)                             OtherActor                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/GameUE.ActorOutline
/// Size: 0x0000 (0x000028 - 0x000028)
class UActorOutline : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.ActorOutline.GetOutlineSockets
	// TArray<FName> GetOutlineSockets();                                                                                       // [0x1623cb0] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.QueryEval_Insight
/// Size: 0x0648 (0x000028 - 0x000670)
class UQueryEval_Insight : public UQueryEval
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	SMember(FName)                                     ContextName                                                 OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	CMember(class ACameraActor*)                       CameraActor                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/GameUE.TransitionWidget
/// Size: 0x0020 (0x000280 - 0x0002A0)
class UTransitionWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	DMember(bool)                                      bShouldBlock                                                OFFSET(get<bool>, {0x298, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.TransitionWidget.SetReadyToProcess
	// void SetReadyToProcess();                                                                                                // [0x16568d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.TransitionWidget.SetReadyToDestroy
	// void SetReadyToDestroy();                                                                                                // [0x16568b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.TransitionWidget.ReadyToProcess
	// bool ReadyToProcess(bool& OutBlocked);                                                                                   // [0x1656200] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.TransitionWidget.ReadyToDestroy
	// bool ReadyToDestroy();                                                                                                   // [0x16561d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.TransitionWidget.LeaveTransition
	// void LeaveTransition();                                                                                                  // [0xf15c40] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.TransitionWidget.EnterTransition
	// void EnterTransition();                                                                                                  // [0x160fe80] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.QuickBlackScreen
/// Size: 0x0000 (0x0002A0 - 0x0002A0)
class UQuickBlackScreen : public UTransitionWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
};

/// Class /Script/GameUE.RadioButton
/// Size: 0x0860 (0x000140 - 0x0009A0)
class URadioButton : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2464;

public:
	SMember(FString)                                   groupId                                                     OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FDelegateProperty)                         CheckedStateDelegate                                        OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	SMember(FCheckBoxStyle)                            WidgetStyle                                                 OFFSET(getStruct<T>, {0x160, 2064, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x970, 1, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0x971, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCheckStateChanged                                         OFFSET(getStruct<T>, {0x978, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.RadioButton.SetIsChecked
	// void SetIsChecked(bool InIsChecked);                                                                                     // [0x1624a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.RadioButton.SetCheckedState
	// void SetCheckedState(ECheckBoxState InCheckedState);                                                                     // [0x16248f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.RadioButton.IsPressed
	// bool IsPressed();                                                                                                        // [0x1623fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.RadioButton.IsChecked
	// bool IsChecked();                                                                                                        // [0x1623f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.RadioButton.IsAllUncheck
	// bool IsAllUncheck();                                                                                                     // [0x1623ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.RadioButton.GetCheckedState
	// ECheckBoxState GetCheckedState();                                                                                        // [0x1623b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.RadioButton.GetCheckedButton
	// class URadioButton* GetCheckedButton();                                                                                  // [0x1623ae0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SysCtrl
/// Size: 0x0008 (0x000028 - 0x000030)
class USysCtrl : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   ControlId                                                   OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Class /Script/GameUE.RealmCtrl
/// Size: 0x0020 (0x000030 - 0x000050)
class URealmCtrl : public USysCtrl
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   Selection                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   UserId                                                      OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Class /Script/GameUE.RealmListEvent
/// Size: 0x0018 (0x000040 - 0x000058)
class URealmListEvent : public USysEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bCustomUser                                                 OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(TArray<FString>)                           Servers                                                     OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/GameUE.ControlActorInfo
/// Size: 0x0024 (0x000000 - 0x000024)
class FControlActorInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FVector)                                   OriginLoc                                                   OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   OffsetLoc                                                   OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   Step                                                        OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bEnableCollision                                            OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Class /Script/GameUE.RecombineActorsDriver
/// Size: 0x0170 (0x000220 - 0x000390)
class ARecombineActorsDriver : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(TMap<class AActor*, FControlActorInfo>)    ControlInfos                                                OFFSET(get<T>, {0x2D0, 80, 0, 0})
	CMember(TArray<class AActor*>)                     ControlActors                                               OFFSET(get<T>, {0x320, 16, 0, 0})
	CMember(EAlphaBlendOption)                         BlendMode                                                   OFFSET(get<T>, {0x330, 1, 0, 0})
	CMember(class UCurveFloat*)                        CustomBlendCurve                                            OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(TMap<int32_t, float>)                      StepLODSetting                                              OFFSET(get<T>, {0x340, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.RecombineActorsDriver.Start
	// void Start();                                                                                                            // [0x16250c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.RecombineActorsDriver.Show
	// void Show(bool bShow);                                                                                                   // [0x1625030] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.RecombineActorsDriver.RecomputeControlData
	// void RecomputeControlData();                                                                                             // [0x9a7970] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.RecombineActorsDriver.IsCompleted
	// bool IsCompleted();                                                                                                      // [0x1623f40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.RecoverState
/// Size: 0x0010 (0x000050 - 0x000060)
class URecoverState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/GameUE.ServerData
/// Size: 0x0048 (0x000028 - 0x000070)
class UServerData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   RegionId                                                    OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   ServerId                                                    OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	SMember(FString)                                   ServerName                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   ServerState                                                 OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FString)                                   CharacterName                                               OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(int32_t)                                   CharacterLevel                                              OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	CMember(class URegionData*)                        RegionData                                                  OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      bRecommanded                                                OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bViewSelected                                               OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      bSelected                                                   OFFSET(get<bool>, {0x6A, 1, 0, 0})
};

/// Class /Script/GameUE.RegionData
/// Size: 0x0058 (0x000028 - 0x000080)
class URegionData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(int32_t)                                   RegionId                                                    OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   OrderValue                                                  OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	SMember(FText)                                     regionName                                                  OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FString)                                   AbbrName                                                    OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FLinearColor)                              RegionColor                                                 OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bRecommended                                                OFFSET(get<bool>, {0x68, 1, 0, 0})
	CMember(TArray<class UServerData*>)                ServerData                                                  OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/GameUE.RegionProxy
/// Size: 0x0060 (0x000028 - 0x000088)
class URegionProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMulticastInlineDelegate)                  OnServerListUpdate                                          OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnServerStateUpdate                                         OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSelectionUpdate                                           OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(TArray<class UServerData*>)                WithRole                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<class URegionData*>)                RegionList                                                  OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(class UServerData*)                        CurrentServer                                               OFFSET(get<T>, {0x80, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.RegionProxy.SetCurrentServer_View
	// void SetCurrentServer_View(int32_t ServerId);                                                                            // [0x1624970] Final|Native|Private|BlueprintCallable 
	// Function /Script/GameUE.RegionProxy.ServerChangeHandle__DelegateSignature
	// void ServerChangeHandle__DelegateSignature();                                                                            // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GameUE.RegionProxy.ResetServerSelection_View
	// void ResetServerSelection_View();                                                                                        // [0x1624630] Final|Native|Private|BlueprintCallable 
	// Function /Script/GameUE.RegionProxy.RequestServerData
	// void RequestServerData(bool bForce);                                                                                     // [0x16245a0] Final|Native|Private|BlueprintCallable 
	// Function /Script/GameUE.RegionProxy.IsMultipleRegion
	// bool IsMultipleRegion();                                                                                                 // [0x1623f70] Final|Native|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.RegionProxy.Initialize
	// void Initialize(class UGameUEInstance* GameInst);                                                                        // [0x1623e30] Final|Native|Private|BlueprintCallable 
	// Function /Script/GameUE.RegionProxy.GetWithRoleServers
	// void GetWithRoleServers(TArray<UServerData*>& Servers);                                                                  // [0x1623d60] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.RegionProxy.GetCurrentServer
	// class UServerData* GetCurrentServer();                                                                                   // [0x1623b40] Final|Native|Private|BlueprintCallable 
	// Function /Script/GameUE.RegionProxy.GetAllRegions
	// void GetAllRegions(TArray<URegionData*>& Regions);                                                                       // [0x1623950] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.RegionProxy.ApplyServerSelection
	// void ApplyServerSelection();                                                                                             // [0x16231d0] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/GameUE.Relogin_BaseState
/// Size: 0x0000 (0x000050 - 0x000050)
class URelogin_BaseState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/GameUE.Relogin_AuthState
/// Size: 0x0000 (0x000050 - 0x000050)
class URelogin_AuthState : public URelogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/GameUE.Relogin_DialState
/// Size: 0x0008 (0x000050 - 0x000058)
class URelogin_DialState : public URelogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     Connect_Timeout                                             OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Class /Script/GameUE.Relogin_SignInState
/// Size: 0x0008 (0x000050 - 0x000058)
class URelogin_SignInState : public URelogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     SignIn_Timeout                                              OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Class /Script/GameUE.Relogin_VerifyState
/// Size: 0x0000 (0x000050 - 0x000050)
class URelogin_VerifyState : public URelogin_BaseState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/GameUE.RenderTargetHelperLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class URenderTargetHelperLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.RenderTargetHelperLibrary.SaveRetainerBoxToLocal
	// bool SaveRetainerBoxToLocal(class URetainerBox* RetainerBox);                                                            // [0x16298d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.RenderTargetHelperLibrary.SaveRenderTargetToLocal
	// bool SaveRenderTargetToLocal(class UTextureRenderTarget2D* TexRT);                                                       // [0x1629840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.RenderTargetHelperLibrary.GetImageDataFromRetainerBox
	// bool GetImageDataFromRetainerBox(class URetainerBox* RetainerBox, TArray<char>& ImageData);                              // [0x1628b20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.RenderTargetHelperLibrary.GetImageDataFromRenderTarget
	// bool GetImageDataFromRenderTarget(class UTextureRenderTarget2D* TexRT, TArray<char>& ImageData);                         // [0x1628a30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.ReplayNavigator
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UReplayNavigator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class AActor*)                             TargetActor                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(float)                                     TargetDistance                                              OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FVector)                                   TargetPosition                                              OFFSET(getStruct<T>, {0x34, 12, 0, 0})
	SMember(FVector)                                   TargetExtend                                                OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	CMember(class AVolume*)                            TargetVolume                                                OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UShapeComponent*)                    TargetComponent                                             OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UNavigationPath*)                    Path                                                        OFFSET(get<T>, {0x98, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.ReplayNavigator.SetMobileTarget
	// void SetMobileTarget(class AActor* InActor, float Distance);                                                             // [0x162a1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ReplayNavigator.SetDestinationVolume
	// void SetDestinationVolume(class AVolume* Volume);                                                                        // [0x162a000] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ReplayNavigator.SetDestinationComponentWithPoint
	// void SetDestinationComponentWithPoint(class UShapeComponent* Component, FVector& Position);                              // [0x1629f30] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ReplayNavigator.SetDestinationComponent
	// void SetDestinationComponent(class UShapeComponent* Component);                                                          // [0x1629ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ReplayNavigator.SetDestination
	// void SetDestination(FVector& Position, FVector& Extend);                                                                 // [0x1629dc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ReplayNavigator.NavigateActor
	// FVector NavigateActor(class AActor* Agent, float DeltaTime);                                                             // [0x16290b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ReplayNavigator.CheckAgentArrived
	// bool CheckAgentArrived(class AActor* Agent);                                                                             // [0x1628550] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.ReturnState
/// Size: 0x0010 (0x000050 - 0x000060)
class UReturnState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/GameUE.RidderAnimInstance
/// Size: 0x0048 (0x0002B8 - 0x000300)
class URidderAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	SMember(FMulticastInlineDelegate)                  OnTriggerStoryEvent                                         OFFSET(getStruct<T>, {0x2B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChangeMontageRate                                         OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
	SMember(FVector)                                   IKOffsetRightHand                                           OFFSET(getStruct<T>, {0x2D8, 12, 0, 0})
	SMember(FVector)                                   IKOffsetLeftHand                                            OFFSET(getStruct<T>, {0x2E4, 12, 0, 0})
	CMember(TEnumAsByte<EScenarioActionType>)          ParamAction                                                 OFFSET(get<T>, {0x2F0, 1, 0, 0})
	DMember(float)                                     ParamSpeed                                                  OFFSET(get<float>, {0x2F4, 4, 0, 0})


	/// Functions
	// Function /Script/GameUE.RidderAnimInstance.TriggerStoryEvent
	// void TriggerStoryEvent(FString TriggerName);                                                                             // [0x162a4a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.RidderAnimInstance.SetRightHandIKOffset
	// void SetRightHandIKOffset(FVector Offset);                                                                               // [0x162a410] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.RidderAnimInstance.SetParamActionAndSpeed
	// void SetParamActionAndSpeed(TEnumAsByte<EScenarioActionType> ActionType, float Speed);                                   // [0x162a340] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.RidderAnimInstance.SetMontageRate
	// void SetMontageRate(float PlayRate);                                                                                     // [0x162a2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.RidderAnimInstance.SetLeftHandIKOffset
	// void SetLeftHandIKOffset(FVector Offset);                                                                                // [0x162a160] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.RootMotionAccumulate
/// Size: 0x0058 (0x000028 - 0x000080)
class URootMotionAccumulate : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UAnimSequence*)                      AnimAsset                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FRootMotionMovementParams)                 RootMotionParams                                            OFFSET(getStruct<T>, {0x30, 64, 0, 0})
	DMember(float)                                     LastTickTime                                                OFFSET(get<float>, {0x70, 4, 0, 0})


	/// Functions
	// Function /Script/GameUE.RootMotionAccumulate.SetAnimation
	// void SetAnimation(class UAnimSequence* InAnimAsset);                                                                     // [0x1629a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.RootMotionAccumulate.Reset
	// void Reset(float Offset);                                                                                                // [0x16295a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.RootMotionAccumulate.GetTransform
	// FTransform GetTransform();                                                                                               // [0x1628da0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.RootMotionAccumulate.ConsumeRootMotion
	// void ConsumeRootMotion(float DeltaTime);                                                                                 // [0x1628680] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SaveGameBase
/// Size: 0x0010 (0x000028 - 0x000038)
class USaveGameBase : public USaveGame
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   SaveString                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameUE.SaveGameCrypto
/// Size: 0x0010 (0x000028 - 0x000038)
class USaveGameCrypto : public USaveGame
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<char>)                              Data                                                        OFFSET(get<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.SaveGameCrypto.SetData
	// void SetData(FString str);                                                                                               // [0x1629d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SaveGameCrypto.GetData
	// FString GetData();                                                                                                       // [0x1628970] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SaveUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class USaveUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.SaveUtils.SaveDatas
	// void SaveDatas(FString SlotName, FString SerialiseSaveStr);                                                              // [0x1629740] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SaveUtils.SaveDataCrypted
	// void SaveDataCrypted(FString SlotName, FString SerialiseSaveStr);                                                        // [0x1629640] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SaveUtils.LoadDatas
	// FString LoadDatas(FString SlotName, bool bForceCrypted);                                                                 // [0x1628f00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SceneSubsystem
/// Size: 0x0030 (0x000028 - 0x000058)
class USceneSubsystem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UObject*)                            SceneScriptObject                                           OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class USceneSubsystemManager*)             SubsystemManager                                            OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class USceneSystemState*)                  SystemState                                                 OFFSET(get<T>, {0x38, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneSubsystem.Tick
	// void Tick(float DeltaTime);                                                                                              // [0x162fd90] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneSubsystem.SetPostTickEnabled
	// void SetPostTickEnabled(bool Value);                                                                                     // [0x1635d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystem.SetPauseIgnored
	// void SetPauseIgnored(int32_t Flag, bool bIgnore);                                                                        // [0x1635c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystem.SetPauseIgnoreAll
	// void SetPauseIgnoreAll(bool bIgnore);                                                                                    // [0x1635b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystem.RegisterSystemEvent
	// void RegisterSystemEvent(FName& EventName, TArray<FName>& After);                                                        // [0x1635750] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystem.PostTick
	// void PostTick(float DeltaTime);                                                                                          // [0x16356a0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneSubsystem.OnSubsystemResume
	// void OnSubsystemResume();                                                                                                // [0xc8b150] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneSubsystem.OnSubsystemPause
	// void OnSubsystemPause();                                                                                                 // [0x116c1b0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneSubsystem.GetSystemName
	// FName GetSystemName();                                                                                                   // [0x1635100] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneSubsystem.GetPaused
	// bool GetPaused();                                                                                                        // [0x1634740] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystem.Cleanup
	// void Cleanup();                                                                                                          // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneSubsystem.BuildSystem
	// void BuildSystem(class UObject* SceneScript, class USceneSubsystemManager* Manager);                                     // [0x1633a00] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.SceneAccessSystem
/// Size: 0x0100 (0x000058 - 0x000158)
class USceneAccessSystem : public USceneSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FMulticastInlineDelegate)                  OnAccessUpdate                                              OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(TMap<FGuid, class AAccessVolume*>)         AccessVolumes                                               OFFSET(get<T>, {0x68, 80, 0, 0})
	CMember(TMap<class AActor*, FGuid>)                Attachment                                                  OFFSET(get<T>, {0xB8, 80, 0, 0})
	CMember(TMap<FGuid, bool>)                         AccessState                                                 OFFSET(get<T>, {0x108, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneAccessSystem.SetAccessable
	// void SetAccessable(FGuid& Guid, bool bAccessable);                                                                       // [0x16299a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SceneAccessSystem.OnAccessUpdate__DelegateSignature
	// void OnAccessUpdate__DelegateSignature(TArray<AActor*>& Actors, bool Accessable);                                        // [0x198a600] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/GameUE.SceneAccessSystem.LevelUnloaded
	// void LevelUnloaded();                                                                                                    // [0x1628ee0] Final|Native|Public  
	// Function /Script/GameUE.SceneAccessSystem.LevelLoaded
	// void LevelLoaded();                                                                                                      // [0x1628ec0] Final|Native|Public  
	// Function /Script/GameUE.SceneAccessSystem.Detach
	// void Detach(class AActor* Actor);                                                                                        // [0x1628700] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneAccessSystem.Attach
	// int32_t Attach(class AActor* Actor);                                                                                     // [0x16284b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SceneCacheSystem
/// Size: 0x00A0 (0x000058 - 0x0000F8)
class USceneCacheSystem : public USceneSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:


	/// Functions
	// Function /Script/GameUE.SceneCacheSystem.UnsetCacheAsset
	// void UnsetCacheAsset(int32_t LayerId, FName& Bucket);                                                                    // [0x162a630] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneCacheSystem.UnregisterAssetLayer
	// void UnregisterAssetLayer(int32_t LayerId);                                                                              // [0x162a5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneCacheSystem.SetLayerActived
	// void SetLayerActived(int32_t LayerId, bool bActived);                                                                    // [0x162a090] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneCacheSystem.SetCacheAsset
	// void SetCacheAsset(int32_t LayerId, FName& Bucket, TArray<FString>& Assets);                                             // [0x1629bb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneCacheSystem.SceneDestroy
	// void SceneDestroy();                                                                                                     // [0x1629960] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneCacheSystem.RemoveCacheAsset
	// void RemoveCacheAsset(int32_t LayerId, FName& Bucket, TArray<FString>& Assets);                                          // [0x1629440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneCacheSystem.RegisterStaticBucket
	// void RegisterStaticBucket(FName& Bucket, TArray<FString>& Assets);                                                       // [0x1629310] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneCacheSystem.RegisterAssetLayer
	// void RegisterAssetLayer(int32_t LayerId, TSet<FName>& Disables);                                                         // [0x1629190] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneCacheSystem.Initialize
	// void Initialize();                                                                                                       // [0x9a7970] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneCacheSystem.HasStaticBucket
	// bool HasStaticBucket(FName& Bucket);                                                                                     // [0x1628e00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneCacheSystem.EmptyAssetLayer
	// void EmptyAssetLayer(int32_t LayerId);                                                                                   // [0x16287b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneCacheSystem.AddStaticBucket
	// void AddStaticBucket(int32_t LayerId, FName& Bucket);                                                                    // [0x16283d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneCacheSystem.AddCacheAsset
	// void AddCacheAsset(int32_t LayerId, FName& Bucket, TArray<FString>& Assets);                                             // [0x1628000] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.SceneCameraSettingComponent
/// Size: 0x00A0 (0x000280 - 0x000320)
class USceneCameraSettingComponent : public USpringArmComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(class UCameraComponent*)                   Camera                                                      OFFSET(get<T>, {0x280, 8, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x288, 4, 0, 0})
	DMember(float)                                     BlendSpeed                                                  OFFSET(get<float>, {0x28C, 4, 0, 0})
	CMember(EAlphaBlendOption)                         BlendMode                                                   OFFSET(get<T>, {0x290, 1, 0, 0})
	CMember(class UCurveFloat*)                        CustomBlendCurve                                            OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(bool)                                      bChangeFollowTarget                                         OFFSET(get<bool>, {0x2A0, 1, 0, 0})
	DMember(bool)                                      bOverridePostProcessSetting                                 OFFSET(get<bool>, {0x2A1, 1, 0, 0})
	DMember(bool)                                      bOverrideFOV                                                OFFSET(get<bool>, {0x2A2, 1, 0, 0})
	DMember(int32_t)                                   ArmControlMask                                              OFFSET(get<int32_t>, {0x2A4, 4, 0, 0})
	DMember(float)                                     YawMin                                                      OFFSET(get<float>, {0x2A8, 4, 0, 0})
	DMember(float)                                     YawMax                                                      OFFSET(get<float>, {0x2AC, 4, 0, 0})
	DMember(float)                                     PitchMin                                                    OFFSET(get<float>, {0x2B0, 4, 0, 0})
	DMember(float)                                     PitchMax                                                    OFFSET(get<float>, {0x2B4, 4, 0, 0})
	DMember(bool)                                      bAutoFocus                                                  OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	DMember(bool)                                      bAutoFocusRecover                                           OFFSET(get<bool>, {0x2B9, 1, 0, 0})
	DMember(bool)                                      bForceFocusPlayer                                           OFFSET(get<bool>, {0x2BA, 1, 0, 0})
	CMember(class AActor*)                             FocusObject                                                 OFFSET(get<T>, {0x2C0, 8, 0, 0})
	DMember(bool)                                      bFocusWhenInView                                            OFFSET(get<bool>, {0x2C8, 1, 0, 0})
	CMember(EObjectFocusType)                          ObjectFocusType                                             OFFSET(get<T>, {0x2C9, 1, 0, 0})
	DMember(float)                                     FocusTime                                                   OFFSET(get<float>, {0x2CC, 4, 0, 0})
	DMember(float)                                     FocusStiffness                                              OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(float)                                     FocusViewScale                                              OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(float)                                     FocusRightOffset                                            OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(bool)                                      bAreaTriggered                                              OFFSET(get<bool>, {0x2DC, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneCameraSettingComponent.SetAreaTriggered
	// void SetAreaTriggered(bool bTrigger);                                                                                    // [0x1629b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneCameraSettingComponent.ManualUpdateDesiredArmLocation
	// void ManualUpdateDesiredArmLocation(float DeltaTime);                                                                    // [0x1629030] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneCameraSettingComponent.GetInitArmParams
	// void GetInitArmParams(float& ArmLength, FVector& Offset, FTransform& ArmTrans);                                          // [0x1628c10] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/GameUE.SceneCameraSettingComponent.CheckArmControlEnable
	// bool CheckArmControlEnable(EArmControlOption Option);                                                                    // [0x16285f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SceneCommandExecute
/// Size: 0x0030 (0x000028 - 0x000058)
class USceneCommandExecute : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   CommandTargetId                                             OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FGuid)                                     CommandTargetGuid                                           OFFSET(getStruct<T>, {0x2C, 16, 0, 0})
	SMember(FString)                                   GuidStr                                                     OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(class UObject*)                            CommandExecuteContext                                       OFFSET(get<T>, {0x50, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneCommandExecute.TickCommand
	// void TickCommand(float DeltaTime);                                                                                       // [0xc8bf50] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneCommandExecute.Reset
	// void Reset();                                                                                                            // [0x1629620] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneCommandExecute.IsCompleted
	// bool IsCompleted();                                                                                                      // [0x11270e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneCommandExecute.GetGUIDString
	// FString GetGUIDString();                                                                                                 // [0x16289f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneCommandExecute.ExecuteCommand
	// bool ExecuteCommand();                                                                                                   // [0xa8c4d0] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/GameUE.SceneCommand
/// Size: 0x001C (0x000000 - 0x00001C)
class FSceneCommand : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FName)                                     CommandName                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   TargetId                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FGuid)                                     TargetGuid                                                  OFFSET(getStruct<T>, {0xC, 16, 0, 0})
};

/// Class /Script/GameUE.SceneCommandQueue
/// Size: 0x0078 (0x000028 - 0x0000A0)
class USceneCommandQueue : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TMap<FName, class USceneCommandExecute*>)  ExecMap                                                     OFFSET(get<T>, {0x38, 80, 0, 0})
	CMember(class USceneCommandExecute*)               CurrentExecuteCommand                                       OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TArray<FSceneCommand>)                     CommandQueue                                                OFFSET(get<T>, {0x90, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneCommandQueue.UpdateCommandExecution
	// void UpdateCommandExecution(class UObject* CommandExecContext);                                                          // [0x162a730] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneCommandQueue.EnqueueCommand
	// void EnqueueCommand(FName TypeName, int32_t TargetId, FGuid& TargetGuid);                                                // [0x1628840] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SceneCommandQueue.DiscardQueuedCommands
	// void DiscardQueuedCommands();                                                                                            // [0x1628790] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SceneCommandSystem
/// Size: 0x0058 (0x000058 - 0x0000B0)
class USceneCommandSystem : public USceneSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TMap<FName, class UClass*>)                ExecuteClassMap                                             OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(class USceneCommandQueue*)                 PrivateCommandQueue                                         OFFSET(get<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneCommandSystem.UpdateAllCommand
	// void UpdateAllCommand();                                                                                                 // [0x162a710] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneCommandSystem.SceneLeave
	// void SceneLeave();                                                                                                       // [0x1629980] Final|Native|Public  
	// Function /Script/GameUE.SceneCommandSystem.OnCommandExecute
	// void OnCommandExecute(FName& CommandName, int32_t TargetId, FGuid& TargetGuid);                                          // [0x198a600] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/GameUE.SceneCommandSystem.Initialize
	// void Initialize();                                                                                                       // [0x1628ea0] Final|Native|Public  
	// Function /Script/GameUE.SceneCommandSystem.AddCommand2
	// void AddCommand2(FName& CommandName, int32_t TargetId, FString TargetGuid);                                              // [0x1628160] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneCommandSystem.AddCommand
	// void AddCommand(FName& CommandName, int32_t TargetId, FGuid& TargetGuid);                                                // [0x16282a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.SceneCustomData
/// Size: 0x01B0 (0x000030 - 0x0001E0)
class USceneCustomData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	DMember(int32_t)                                   SubSceneId                                                  OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FName)                                     SubSceneName                                                OFFSET(getStruct<T>, {0x34, 8, 0, 0})
	CMember(TMap<int32_t, FGuid>)                      GuidLibrary                                                 OFFSET(get<T>, {0x40, 80, 0, 0})
	CMember(TMap<int32_t, FString>)                    StringLibrary                                               OFFSET(get<T>, {0x90, 80, 0, 0})
	CMember(TMap<int32_t, FVector>)                    SavePoints                                                  OFFSET(get<T>, {0xE0, 80, 0, 0})
	DMember(bool)                                      bInitialized                                                OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(int32_t)                                   MaxGuidIndex                                                OFFSET(get<int32_t>, {0x134, 4, 0, 0})
	DMember(int32_t)                                   MaxStringIndex                                              OFFSET(get<int32_t>, {0x138, 4, 0, 0})
	CMember(TMap<FGuid, int32_t>)                      ReversedGuidLibrary                                         OFFSET(get<T>, {0x140, 80, 0, 0})
	CMember(TMap<FString, int32_t>)                    ReversedStringLibrary                                       OFFSET(get<T>, {0x190, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneCustomData.AddStrings
	// void AddStrings(TArray<FString>& Strings);                                                                               // [0x162dcd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneCustomData.AddString
	// void AddString(FString String);                                                                                          // [0x162dc20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneCustomData.AddGuids
	// void AddGuids(TArray<FGuid>& Guids);                                                                                     // [0x162db70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneCustomData.AddGuid
	// void AddGuid(FGuid& Guid);                                                                                               // [0x162dad0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.SceneFlowDecorate
/// Size: 0x0000 (0x000028 - 0x000028)
class USceneFlowDecorate : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.SceneFlowDecorate.OnScheduled
	// void OnScheduled(class USceneStageBase* Context, class UGameFlowsheet_BaseNode* Node);                                   // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneFlowDecorate.OnInitialize
	// void OnInitialize(class USceneStageBase* Context, class UGameFlowsheet_BaseNode* Node);                                  // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneFlowDecorate.OnComplete
	// void OnComplete(class USceneStageBase* Context, class UGameFlowsheet_BaseNode* Node);                                    // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneFlowDecorate.OnBegin
	// void OnBegin(class USceneStageBase* Context, class UGameFlowsheet_BaseNode* Node);                                       // [0x198a600] Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.SceneFlowSystem
/// Size: 0x0150 (0x000058 - 0x0001A8)
class USceneFlowSystem : public USceneSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(TArray<class UClass*>)                     WorkerClasses                                               OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(class UClass*)                             DefaultWorkerClass                                          OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UGameFlowsheet*)                     FlowSheet                                                   OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class USceneFlowWorker*)                   FlowGraphRoot                                               OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TArray<class USceneFlowWorker*>)           FlowGraphWorkers                                            OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<class USceneFlowWorker*>)           CurrentActiveWorker                                         OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TSet<USceneFlowWorker*>)                   UpdateSchedule                                              OFFSET(get<T>, {0xB0, 80, 0, 0})
	CMember(TMap<class UClass*, class UClass*>)        WorkerTypeMap                                               OFFSET(get<T>, {0x100, 80, 0, 0})
	CMember(TMap<int32_t, int32_t>)                    WorkerStateMap                                              OFFSET(get<T>, {0x150, 80, 0, 0})
	DMember(bool)                                      bStateReset                                                 OFFSET(get<bool>, {0x1A0, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneFlowSystem.WalkThroughGraph
	// void WalkThroughGraph(class USceneFlowWalker* Walker, class USceneFlowWorker* WalkOrigin);                               // [0x16304d0] Final|Native|Public  
	// Function /Script/GameUE.SceneFlowSystem.SetFlowSheetPath
	// void SetFlowSheetPath(FString InPath);                                                                                   // [0x162f240] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneFlowSystem.ScenePrepare
	// void ScenePrepare();                                                                                                     // [0x162f1c0] Final|Native|Public  
	// Function /Script/GameUE.SceneFlowSystem.SceneBuild
	// void SceneBuild();                                                                                                       // [0x162f160] Final|Native|Public  
	// Function /Script/GameUE.SceneFlowSystem.ResetFlowState
	// void ResetFlowState(TMap<int32_t, int32_t>& StateMap);                                                                   // [0x162ee80] Final|Native|Public|HasOutParms 
	// Function /Script/GameUE.SceneFlowSystem.ManualCompleteNode
	// void ManualCompleteNode(int32_t NodeId);                                                                                 // [0x162ed60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneFlowSystem.LevelLoaded
	// void LevelLoaded();                                                                                                      // [0x1601bf0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneFlowSystem.Initialize
	// void Initialize();                                                                                                       // [0x116c190] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneFlowSystem.GetStateMap
	// TMap<int32_t, int32_t> GetStateMap();                                                                                    // [0x162e950] Final|Native|Public|Const 
	// Function /Script/GameUE.SceneFlowSystem.CheckRebuildFlow
	// void CheckRebuildFlow();                                                                                                 // [0x162ded0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneFlowSystem.CheckFlowNodeCompleted
	// bool CheckFlowNodeCompleted(int32_t NodeId);                                                                             // [0x162de30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SceneFlowWalker
/// Size: 0x0000 (0x000028 - 0x000028)
class USceneFlowWalker : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.SceneFlowWalker.Walk
	// void Walk(TSet<USceneFlowWorker*>& WalkFrom);                                                                            // [0x16302e0] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameUE.SceneFlowWalker_PathCost
/// Size: 0x0008 (0x000028 - 0x000030)
class USceneFlowWalker_PathCost : public USceneFlowWalker
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     TravalDepth                                                 OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Class /Script/GameUE.SceneFlowWalker_Common
/// Size: 0x0000 (0x000028 - 0x000028)
class USceneFlowWalker_Common : public USceneFlowWalker
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.SceneFlowWalker_Common.WalkFunc
	// bool WalkFunc(class USceneFlowWorker* Worker);                                                                           // [0x1630430] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.SceneFlowWorker
/// Size: 0x0078 (0x000028 - 0x0000A0)
class USceneFlowWorker : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TArray<class UClass*>)                     DecorateClasses                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(class UClass*)                             DataType                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UGameFlowsheet_BaseNode*)            NodeData                                                    OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class USceneStageBase*)                    SceneContext                                                OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class USceneFlowSystem*)                   System                                                      OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TArray<class USceneFlowDecorate*>)         Decorates                                                   OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<class USceneFlowWorker*>)           Preposes                                                    OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<class USceneFlowWorker*>)           Postposes                                                   OFFSET(get<T>, {0x90, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneFlowWorker.UpdateNodeFlag
	// void UpdateNodeFlag(int32_t Flags, bool bSet);                                                                           // [0x1630210] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneFlowWorker.UpdateLevelBounding
	// void UpdateLevelBounding();                                                                                              // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneFlowWorker.UnsetNodeFlags
	// void UnsetNodeFlags(int32_t Flags);                                                                                      // [0x1630180] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneFlowWorker.Tick
	// void Tick(float Delta);                                                                                                  // [0x162fd90] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneFlowWorker.SetReadyToComplete
	// void SetReadyToComplete();                                                                                               // [0x162fa60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneFlowWorker.SetNodeFlags
	// void SetNodeFlags(int32_t Flags);                                                                                        // [0x162f930] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneFlowWorker.SetDetermined
	// void SetDetermined();                                                                                                    // [0x162f220] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneFlowWorker.Run
	// void Run();                                                                                                              // [0x89d6b0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneFlowWorker.Reset
	// void Reset();                                                                                                            // [0xc8b130] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneFlowWorker.OnStateReset
	// void OnStateReset(int32_t State);                                                                                        // [0x162edf0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneFlowWorker.OnScheduled
	// void OnScheduled();                                                                                                      // [0x116c1b0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneFlowWorker.Initialize
	// void Initialize();                                                                                                       // [0x89bc50] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneFlowWorker.HasAnyNodeFlag
	// bool HasAnyNodeFlag(int32_t Flag);                                                                                       // [0x162eb80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneFlowWorker.HasAllNodeFlag
	// bool HasAllNodeFlag(int32_t Flag);                                                                                       // [0x162eae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneFlowWorker.GetRunState
	// int32_t GetRunState();                                                                                                   // [0x162e880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.SceneFlowWorker.GetPreposes
	// void GetPreposes(TArray<USceneFlowWorker*>& OutArray);                                                                   // [0x162e7d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneFlowWorker.GetPostposes
	// void GetPostposes(TArray<USceneFlowWorker*>& OutArray);                                                                  // [0x162e720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneFlowWorker.Complete
	// void Complete();                                                                                                         // [0x1629620] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.SceneFlowWorker_Logical
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class USceneFlowWorker_Logical : public USceneFlowWorker
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/GameUE.SceneFlowWorker_Dummy
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class USceneFlowWorker_Dummy : public USceneFlowWorker
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/GameUE.SceneInputComponent
/// Size: 0x0000 (0x0002E0 - 0x0002E0)
class USceneInputComponent : public UBaseInputComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
};

/// Class /Script/GameUE.SceneInputSystem
/// Size: 0x0098 (0x000058 - 0x0000F0)
class USceneInputSystem : public USceneSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FMulticastInlineDelegate)                  OnWidgetInteractMiss                                        OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(class AEthPlayerController*)               PlayerController                                            OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class USceneInputComponent*)               InputComponent                                              OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FVector2D)                                 LastSlideValue                                              OFFSET(getStruct<T>, {0x78, 8, 0, 0})
	SMember(FVector2D)                                 SlideValue                                                  OFFSET(getStruct<T>, {0x80, 8, 0, 0})
	SMember(FVector2D)                                 InputAxis                                                   OFFSET(getStruct<T>, {0x88, 8, 0, 0})
	DMember(float)                                     InputZoom                                                   OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x94, 4, 0, 0})
	DMember(float)                                     TimeSinceLastInput                                          OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(bool)                                      DefaultLockModel                                            OFFSET(get<bool>, {0x9C, 1, 0, 0})
	DMember(bool)                                      CanManualLock                                               OFFSET(get<bool>, {0x9D, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneInputSystem.SetWidgetInteractionEnabled
	// void SetWidgetInteractionEnabled(bool bEnable);                                                                          // [0x16044e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneInputSystem.SetLockTurnCameraEnabled
	// void SetLockTurnCameraEnabled(bool bEnable);                                                                             // [0x162f810] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneInputSystem.SetInputTimeTraceEnabled
	// void SetInputTimeTraceEnabled(bool bEnabled);                                                                            // [0x162f4f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneInputSystem.SetInputEnabled
	// void SetInputEnabled(FName& Name, bool bEnabled);                                                                        // [0x162f410] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneInputSystem.SetInitLockTurnEnabled
	// void SetInitLockTurnEnabled(bool bEnable);                                                                               // [0x16044e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneInputSystem.SetHotKeyLayer
	// void SetHotKeyLayer(int32_t Layer);                                                                                      // [0x162f380] Final|Native|Public  
	// Function /Script/GameUE.SceneInputSystem.SetControllerManualMouseLock
	// void SetControllerManualMouseLock();                                                                                     // [0x162f200] Final|Native|Public  
	// Function /Script/GameUE.SceneInputSystem.ScenePrepare
	// void ScenePrepare();                                                                                                     // [0x162f1e0] Final|Native|Public  
	// Function /Script/GameUE.SceneInputSystem.SceneLeave
	// void SceneLeave();                                                                                                       // [0x162f1a0] Final|Native|Public  
	// Function /Script/GameUE.SceneInputSystem.SceneEnter
	// void SceneEnter();                                                                                                       // [0x162f180] Final|Native|Public  
	// Function /Script/GameUE.SceneInputSystem.ResetLockTurnCamera
	// void ResetLockTurnCamera();                                                                                              // [0x162efc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneInputSystem.Initialize
	// void Initialize();                                                                                                       // [0x9a7970] Final|Native|Public  
	// Function /Script/GameUE.SceneInputSystem.GetZoomChange
	// float GetZoomChange();                                                                                                   // [0x162eab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneInputSystem.GetTimeSinceLastInput
	// float GetTimeSinceLastInput();                                                                                           // [0x162ea40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneInputSystem.GetSlideDelta
	// bool GetSlideDelta(FVector2D& Value);                                                                                    // [0x162e8b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SceneInputSystem.GetInputAxis
	// bool GetInputAxis(FVector2D& Value);                                                                                     // [0x162e610] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SceneInputSystem.GetCurInputModel
	// EInputType GetCurInputModel();                                                                                           // [0x162e5e0] Final|Native|Public  
	// Function /Script/GameUE.SceneInputSystem.GetCurGamePadModel
	// EGamepadType GetCurGamePadModel();                                                                                       // [0x162e5b0] Final|Native|Public  
};

/// Class /Script/GameUE.SceneObjectState
/// Size: 0x0020 (0x000028 - 0x000048)
class USceneObjectState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   FriEndId                                                    OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FGuid)                                     ObjectGuid                                                  OFFSET(getStruct<T>, {0x2C, 16, 0, 0})
	SMember(FName)                                     CachedTypeName                                              OFFSET(getStruct<T>, {0x3C, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneObjectState.SetObjectGuid
	// void SetObjectGuid(FGuid& Guid);                                                                                         // [0x162f9c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SceneObjectState.SetFriendlyId
	// void SetFriendlyId(int32_t FriendlyId);                                                                                  // [0x162f2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneObjectState.GetTypeName
	// FName GetTypeName();                                                                                                     // [0x162ea70] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneObjectState.GetFriendlyId
	// int32_t GetFriendlyId();                                                                                                 // [0x15f8190] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.GuidIndexObject
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidIndexObject : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.GuidIndexObject.GetObjectGuid
	// FGuid GetObjectGuid();                                                                                                   // [0x162e6e0] Native|Event|Public|HasDefaults|BlueprintEvent 
};

/// Struct /Script/GameUE.SceneActorBucket
/// Size: 0x0050 (0x000000 - 0x000050)
class FSceneActorBucket : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TSet<AActor*>)                             Actors                                                      OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Class /Script/GameUE.SceneObjectSystem
/// Size: 0x0110 (0x000058 - 0x000168)
class USceneObjectSystem : public USceneSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(TArray<class UClass*>)                     ObjectClasses                                               OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TMap<FName, FSceneActorBucket>)            ClassifiedActors                                            OFFSET(get<T>, {0xB8, 80, 0, 0})
	CMember(TMap<FGuid, class AActor*>)                ActorByGuid                                                 OFFSET(get<T>, {0x108, 80, 0, 0})
	CMember(TArray<class AActor*>)                     TaggedActors                                                OFFSET(get<T>, {0x158, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneObjectSystem.LevelUnloaded
	// void LevelUnloaded();                                                                                                    // [0x162ec60] Final|Native|Public  
	// Function /Script/GameUE.SceneObjectSystem.LevelLoaded
	// void LevelLoaded();                                                                                                      // [0x162ec40] Final|Native|Public  
	// Function /Script/GameUE.SceneObjectSystem.Initialize
	// void Initialize();                                                                                                       // [0x162ec20] Final|Native|Public  
	// Function /Script/GameUE.SceneObjectSystem.GetActorsByTag
	// void GetActorsByTag(FName& Tag, TArray<AActor*>& OutActors);                                                             // [0x162e470] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneObjectSystem.GetActorsByClass
	// void GetActorsByClass(class UClass* Class, TArray<AActor*>& OutActors);                                                  // [0x162e380] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneObjectSystem.GetActorByTag
	// class AActor* GetActorByTag(FName& Tag);                                                                                 // [0x162e2e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneObjectSystem.GetActorByName
	// class AActor* GetActorByName(class UClass* Class, FName& Name);                                                          // [0x162e200] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneObjectSystem.GetActorByGuidHex
	// class AActor* GetActorByGuidHex(FString GuidHex, class UClass* Class);                                                   // [0x162e100] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneObjectSystem.GetActorByGuid
	// class AActor* GetActorByGuid(FGuid& Guid, class UClass* Class);                                                          // [0x162e010] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.ScenePawn
/// Size: 0x0020 (0x000280 - 0x0002A0)
class AScenePawn : public APawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FString)                                   LuaFilePath                                                 OFFSET(getStruct<T>, {0x288, 16, 0, 0})
	CMember(class USkinnedMeshComponent*)              MasterMeshComponent                                         OFFSET(get<T>, {0x298, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.ScenePawn.SetMasterMeshComponent
	// void SetMasterMeshComponent(class USkinnedMeshComponent* MasterComp);                                                    // [0x162f8a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScenePawn.GetMasterMeshComponent
	// class USkinnedMeshComponent* GetMasterMeshComponent();                                                                   // [0x162e6b0] Final|Native|Public  
};

/// Class /Script/GameUE.ScenePawnState
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UScenePawnState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	CMember(TSet<FName>)                               ControlName                                                 OFFSET(get<T>, {0x60, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.ScenePawnState.TranslateXYZ
	// void TranslateXYZ(float X, float Y, float Z);                                                                            // [0x1630060] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.TranslateLocallyXYZ
	// void TranslateLocallyXYZ(float X, float Y, float Z);                                                                     // [0x162ff40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.TranslateLocally
	// void TranslateLocally(FVector& Offset);                                                                                  // [0x162feb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.Translate
	// void Translate(FVector& Offset);                                                                                         // [0x162fe20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.SetTransform
	// void SetTransform(FTransform& InTransform);                                                                              // [0x162fcb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.SetScaleISO
	// void SetScaleISO(float Value);                                                                                           // [0x162fc30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.SetScale3D
	// void SetScale3D(FVector& Scale);                                                                                         // [0x162fba0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.SetRotator
	// void SetRotator(FRotator& Rotator);                                                                                      // [0x162fb10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.SetRotation
	// void SetRotation(FQuat& Quat);                                                                                           // [0x162fa80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.SetLocationXYZ
	// void SetLocationXYZ(float X, float Y, float Z);                                                                          // [0x162f6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.SetLocationAndRotation
	// void SetLocationAndRotation(FVector& Location, FRotator& Rotator);                                                       // [0x162f610] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.SetLocation
	// void SetLocation(FVector& Location);                                                                                     // [0x162f580] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.RotateAxis
	// void RotateAxis(FVector& Axis, float Value);                                                                             // [0x162f080] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.Rotate
	// void Rotate(FQuat& Quat);                                                                                                // [0x162eff0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.MakeControlled
	// void MakeControlled(FName& Name, bool bControlled);                                                                      // [0x162ec80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.GetControlled
	// bool GetControlled();                                                                                                    // [0x162e580] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.CopyTransform
	// void CopyTransform(class AActor* Actor);                                                                                 // [0x162df80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.CopyLocation
	// void CopyLocation(class AActor* Actor);                                                                                  // [0x162def0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScenePawnState.ApplyTransform
	// void ApplyTransform(class AActor* TargetActor);                                                                          // [0x162dda0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.ScenePreview
/// Size: 0x0118 (0x000028 - 0x000140)
class UScenePreview : public UPreviewCustomize
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FString)                                   CustomScript                                                OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TSet<TWeakObjectPtr<UWorld*>>)             ExcludeLevels                                               OFFSET(get<T>, {0x40, 80, 0, 0})
	DMember(bool)                                      bOverrideStarter                                            OFFSET(get<bool>, {0x90, 1, 0, 0})
	SMember(FVector)                                   OverrideStartPosition                                       OFFSET(getStruct<T>, {0x94, 12, 0, 0})
	SMember(FRotator)                                  OverrideStartRotation                                       OFFSET(getStruct<T>, {0xA0, 12, 0, 0})
	SMember(FString)                                   OverridePlayer                                              OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FString)                                   GeoLevel                                                    OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	DMember(int32_t)                                   TemplateStage                                               OFFSET(get<int32_t>, {0x10C, 4, 0, 0})
	CMember(TWeakObjectPtr<class UWorld*>)             InitialLevel                                                OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(bool)                                      bQuickMode                                                  OFFSET(get<bool>, {0x138, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.ScenePreview.IsPreviewInHome
	// bool IsPreviewInHome();                                                                                                  // [0x16354e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScenePreview.GetPreviewSublevel
	// FString GetPreviewSublevel();                                                                                            // [0x1634a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScenePreview.GetPreviewStageId
	// int32_t GetPreviewStageId();                                                                                             // [0x1634a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScenePreview.GetPreviewLevels
	// void GetPreviewLevels(TArray<FString>& Levels);                                                                          // [0x1634950] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.ScenePreviewStarter
/// Size: 0x0000 (0x000220 - 0x000220)
class AScenePreviewStarter : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
};

/// Class /Script/GameUE.SceneSequenceModifierBase
/// Size: 0x00A8 (0x0000D8 - 0x000180)
class USceneSequenceModifierBase : public UKV_LevelSequencePostProcess
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(TMap<FString, class AActor*>)              BindActors                                                  OFFSET(get<T>, {0xD8, 80, 0, 0})
	CMember(TMap<FName, class AActor*>)                BindActorsByTag                                             OFFSET(get<T>, {0x128, 80, 0, 0})
	DMember(float)                                     DilationProtection                                          OFFSET(get<float>, {0x178, 4, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneSequenceModifierBase.ScriptUpdate
	// void ScriptUpdate(float CurrentFrame, float PreviousFrame);                                                              // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneSequenceModifierBase.ScriptOnObjectSpawned
	// void ScriptOnObjectSpawned(class UObject* InObject, TArray<FName>& InTags);                                              // [0x198a600] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameUE.SceneSequenceModifierBase.GetBindingActorByTag
	// class AActor* GetBindingActorByTag(FName& Tag);                                                                          // [0x16342c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.StageScript
/// Size: 0x0168 (0x000028 - 0x000190)
class UStageScript : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(class UStageManager*)                      StageManager                                                OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class USubworld*)                          Subworld                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UObject*)                            InstanceData                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAssetLoaded                                               OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FName)                                     StageDetailName                                             OFFSET(getStruct<T>, {0x120, 8, 0, 0})
	DMember(bool)                                      bWorldSetuped                                               OFFSET(get<bool>, {0x128, 1, 0, 0})
	DMember(bool)                                      bShouldOpen                                                 OFFSET(get<bool>, {0x129, 1, 0, 0})
	DMember(bool)                                      bPostTickEnabled                                            OFFSET(get<bool>, {0x12A, 1, 0, 0})
	DMember(bool)                                      bShouldRecycleUIs                                           OFFSET(get<bool>, {0x12B, 1, 0, 0})
	CMember(TArray<class UUIScript*>)                  UIScripts                                                   OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(TMap<int32_t, class UUIScript*>)           ReservedUIScripts                                           OFFSET(get<T>, {0x140, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.StageScript.UpdateDetailName
	// void UpdateDetailName(FName& DetailName);                                                                                // [0x1648060] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageScript.SyncLoadSoftObject
	// class UObject* SyncLoadSoftObject(TWeakObjectPtr<UObject*>& SoftAsset, bool bCache, TArray<FName>& LoadBundles);         // [0x1647e50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageScript.SyncLoadSoftClass
	// class UClass* SyncLoadSoftClass(TSoftObjectPtr<UClass*>& SoftAsset, bool bCache, TArray<FName>& LoadBundles);            // [0x1647cd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageScript.SyncLoadAsset
	// class UObject* SyncLoadAsset(FString AssetKey, bool bCache, TArray<FName>& LoadBundles);                                 // [0x1647a10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageScript.ShouldRecover
	// bool ShouldRecover();                                                                                                    // [0x1222180] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.StageScript.SetDefaultLoadBundles
	// void SetDefaultLoadBundles(TArray<FName>& LoadBundles);                                                                  // [0x1647960] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageScript.ResetAllUI
	// class UTaskResetAllUI* ResetAllUI();                                                                                     // [0x1647930] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.ReportCustomTag
	// void ReportCustomTag(FString Tag, FString Value);                                                                        // [0x1647820] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.RemoveLevel
	// void RemoveLevel(FString InName);                                                                                        // [0x1647770] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.RemoveCacheLayer
	// void RemoveCacheLayer(int32_t LayerId);                                                                                  // [0x16476e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.ReadyToVisible
	// void ReadyToVisible();                                                                                                   // [0x16476c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.OpenUI
	// class UBatchTaskItem_OpenUI* OpenUI(int32_t ID, class UObject* InstData, int32_t DepthPriority);                         // [0x16475b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.OnWorldSetup
	// void OnWorldSetup(class UObject* WorldContext);                                                                          // [0x1647520] Native|Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.StageScript.OnWorldCleanup
	// void OnWorldCleanup(class UObject* WorldContext);                                                                        // [0x1647490] Native|Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.StageScript.OnTick
	// void OnTick(float DeltaTime);                                                                                            // [0x1641e40] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.StageScript.OnStageVisible
	// void OnStageVisible();                                                                                                   // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.StageScript.OnStageRemoveLoading
	// void OnStageRemoveLoading();                                                                                             // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.StageScript.OnStageLeave
	// void OnStageLeave();                                                                                                     // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.StageScript.OnStageInvisible
	// void OnStageInvisible();                                                                                                 // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.StageScript.OnStageInit
	// void OnStageInit();                                                                                                      // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.StageScript.OnStageEnter
	// void OnStageEnter();                                                                                                     // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.StageScript.OnStageAddLoading
	// void OnStageAddLoading();                                                                                                // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.StageScript.OnPreInitialize
	// void OnPreInitialize();                                                                                                  // [0x89d6b0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.StageScript.OnPostTick
	// void OnPostTick(float DeltaTime);                                                                                        // [0x1647400] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.StageScript.OnDestroy
	// void OnDestroy();                                                                                                        // [0x116c1b0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.StageScript.OnAssetLoaded__DelegateSignature
	// void OnAssetLoaded__DelegateSignature(int32_t LoadKey);                                                                  // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GameUE.StageScript.LeaveUIExclusion
	// void LeaveUIExclusion(int32_t Exclusion);                                                                                // [0x1647370] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.IsUIVisible
	// bool IsUIVisible(int32_t InId);                                                                                          // [0x16472d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.IsActionStack
	// bool IsActionStack();                                                                                                    // [0x1647280] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.Initialize
	// void Initialize();                                                                                                       // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.StageScript.GetWorldObject
	// class UWorld* GetWorldObject();                                                                                          // [0x1647250] Final|Native|Public  
	// Function /Script/GameUE.StageScript.GetWidgetById
	// class UUserWidget* GetWidgetById(int32_t InId);                                                                          // [0x16471b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.GetUIInRange
	// void GetUIInRange(int32_t From, int32_t To, TArray<UUIScript*>& OutActors);                                              // [0x1647050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageScript.GetUIByID
	// void GetUIByID(int32_t InId, TArray<UUIScript*>& OutScripts);                                                            // [0x1646f60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageScript.GetTouchInterface
	// class UTouchInterface* GetTouchInterface();                                                                              // [0x1646f40] Final|Native|Public  
	// Function /Script/GameUE.StageScript.GetTopVisibleUI
	// class UUIScript* GetTopVisibleUI();                                                                                      // [0x1646f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.GetTopFunctionID
	// int32_t GetTopFunctionID();                                                                                              // [0x1646ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.GetSubworld
	// class USubworld* GetSubworld();                                                                                          // [0xc89b10] Final|Native|Public  
	// Function /Script/GameUE.StageScript.GetStageId
	// int32_t GetStageId();                                                                                                    // [0x1646eb0] Final|Native|Public  
	// Function /Script/GameUE.StageScript.GetLoadedAsset
	// class UObject* GetLoadedAsset(FString AssetKey);                                                                         // [0x1646df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.GetAllUI
	// TArray<UUIScript*> GetAllUI();                                                                                           // [0x1646c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.EnterUIExclusion
	// int32_t EnterUIExclusion(TArray<int32_t> IDList);                                                                        // [0x1646b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.EmptyCacheLayer
	// void EmptyCacheLayer(int32_t LayerId);                                                                                   // [0x1646b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.ControlLevel
	// void ControlLevel(FName& InLevel, ESubworldLevelControl Control);                                                        // [0x1646a20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageScript.CloseUI
	// class UTaskBatchedUI* CloseUI();                                                                                         // [0x16469f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.CloseInRange
	// class UTaskBatchedUI* CloseInRange(int32_t From, int32_t To);                                                            // [0x1646920] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.Close
	// class UTaskCloseStage* Close();                                                                                          // [0x16468f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.CleanDefaultLoadBundles
	// void CleanDefaultLoadBundles();                                                                                          // [0x16468d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.BuildStage
	// void BuildStage(class UObject* InData);                                                                                  // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.StageScript.AsyncUncacheAssets
	// void AsyncUncacheAssets(TArray<FString>& AssetKey, int32_t LayerId);                                                     // [0x16467b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageScript.AsyncLoadAssets
	// int32_t AsyncLoadAssets(TArray<FString>& AssetKeys, bool bCache, TArray<FName>& LoadBundles);                            // [0x1646470] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageScript.AsyncLoadAsset
	// int32_t AsyncLoadAsset(FString AssetKey, bool bCache, TArray<FName>& LoadBundles);                                       // [0x16461b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageScript.AsyncCacheAssets
	// void AsyncCacheAssets(TArray<FString>& AssetKey, int32_t LayerId);                                                       // [0x1646090] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageScript.AsyncCacheAsset
	// void AsyncCacheAsset(FString AssetKey, int32_t LayerId);                                                                 // [0x1645fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.AddUI
	// class UUIScript* AddUI(int32_t ID, class UObject* InstData, int32_t DepthPriority);                                      // [0x1645e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.AddSoftClasses
	// void AddSoftClasses(TArray<TSoftObjectPtr<UClass*>>& SoftAsset);                                                         // [0x1645dc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageScript.AddSoftClass
	// void AddSoftClass(TSoftObjectPtr<UClass*>& SoftAsset);                                                                   // [0x1645cf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageScript.AddSoftAssets
	// void AddSoftAssets(TArray<TWeakObjectPtr<UObject*>>& SoftAsset);                                                         // [0x1645dc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageScript.AddSoftAsset
	// void AddSoftAsset(TWeakObjectPtr<UObject*>& SoftAsset);                                                                  // [0x1645cf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageScript.AddLevelGeneral
	// void AddLevelGeneral(FString InName);                                                                                    // [0x1645c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.AddLevel
	// void AddLevel(FString InName, FString InTempl, FVector& InOffset, ESubworldLevelControl InControl);                      // [0x1645a90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.StageScript.AddCacheLayer
	// void AddCacheLayer(int32_t LayerId);                                                                                     // [0x1645a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageScript.AddAssets
	// void AddAssets(TArray<FString>& Assets);                                                                                 // [0x1645930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageScript.AddAsset
	// void AddAsset(FString Asset);                                                                                            // [0x1645880] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SceneStageBase
/// Size: 0x0200 (0x000190 - 0x000390)
class USceneStageBase : public UStageScript
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(TArray<class UClass*>)                     SubsystemArray                                              OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(TArray<FName>)                             SubsystemInvoke                                             OFFSET(get<T>, {0x1A0, 16, 0, 0})
	CMember(class UClass*)                             SubsystemStateClass                                         OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(class UClass*)                             SubsystemEventClass                                         OFFSET(get<T>, {0x1B8, 8, 0, 0})
	DMember(float)                                     MinSafeFrameRate                                            OFFSET(get<float>, {0x1C0, 4, 0, 0})
	CMember(class USceneSubsystemManager*)             SubsystemManager                                            OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(class USceneSystemState*)                  SubsystemState                                              OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(class USceneSystemEvent*)                  SubsystemEvent                                              OFFSET(get<T>, {0x1D8, 8, 0, 0})
	CMember(class AActor*)                             WorldContextActor                                           OFFSET(get<T>, {0x1E0, 8, 0, 0})
	DMember(bool)                                      bSubsystemTickEnabled                                       OFFSET(get<bool>, {0x1E8, 1, 0, 0})
	DMember(bool)                                      bFreezed                                                    OFFSET(get<bool>, {0x1E9, 1, 0, 0})
	CMember(TMap<class UObject*, uint64_t>)            PauseObjectFlag                                             OFFSET(get<T>, {0x1F0, 80, 0, 0})
	CMember(TMap<int32_t, FGuid>)                      Id2Guid                                                     OFFSET(get<T>, {0x240, 80, 0, 0})
	CMember(TMap<FGuid, int32_t>)                      Guid2Id                                                     OFFSET(get<T>, {0x290, 80, 0, 0})
	CMember(TMap<int32_t, FString>)                    Id2String                                                   OFFSET(get<T>, {0x2E0, 80, 0, 0})
	CMember(TMap<FString, int32_t>)                    String2Id                                                   OFFSET(get<T>, {0x330, 80, 0, 0})
	CMember(class UClass*)                             WorldContextClass                                           OFFSET(get<T>, {0x380, 8, 0, 0})
	DMember(float)                                     SafeFrameRateScale                                          OFFSET(get<float>, {0x388, 4, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneStageBase.SetWorldContextActor
	// void SetWorldContextActor(class AActor* WorldContext);                                                                   // [0x1635fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneStageBase.SetSubsystemTickEnabled
	// void SetSubsystemTickEnabled(bool bEnable);                                                                              // [0x1635e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneStageBase.ResumeAnyway
	// void ResumeAnyway();                                                                                                     // [0x1635aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneStageBase.Resume
	// void Resume(class UObject* Object, int32_t Flag);                                                                        // [0x16359d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneStageBase.Pause
	// void Pause(class UObject* Object, int32_t Flag);                                                                         // [0x16355d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneStageBase.InvokeSubsystemQueued
	// void InvokeSubsystemQueued(FName& EvName);                                                                               // [0x16353d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneStageBase.InvokeSubsystemInline
	// void InvokeSubsystemInline(FName& EvName);                                                                               // [0x1635340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneStageBase.GetWorldContextActor
	// class AActor* GetWorldContextActor();                                                                                    // [0x1635170] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneStageBase.GetSubsystemByClass
	// class USceneSubsystem* GetSubsystemByClass(class UClass* SubsysClass);                                                   // [0x1634fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneStageBase.GetSubsystem
	// class USceneSubsystem* GetSubsystem(FName& Name);                                                                        // [0x1634e80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneStageBase.GetStringById
	// FString GetStringById(int32_t ID);                                                                                       // [0x1634da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneStageBase.GetShortIdByGuidString
	// int32_t GetShortIdByGuidString(FString GuidString);                                                                      // [0x1634c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneStageBase.GetShortIdByGuid
	// int32_t GetShortIdByGuid(FGuid& Guid);                                                                                   // [0x1634b90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SceneStageBase.GetIdByString
	// int32_t GetIdByString(FString str);                                                                                      // [0x16344e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneStageBase.GetGuidStringByShortId
	// FString GetGuidStringByShortId(int32_t ShortId);                                                                         // [0x1634400] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneStageBase.GetGuidByShortId
	// FGuid GetGuidByShortId(int32_t ShortId);                                                                                 // [0x1634360] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SceneStageBase.GetAllSubsystemNames
	// TArray<FName> GetAllSubsystemNames();                                                                                    // [0x16341c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneStageBase.Freeze
	// void Freeze(bool bInFreeze);                                                                                             // [0x1634130] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SceneSubsystemManager
/// Size: 0x00E0 (0x000028 - 0x000108)
class USceneSubsystemManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TArray<class USceneSubsystem*>)            Subsystems                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(class UObject*)                            SceneScriptObject                                           OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class USceneSystemState*)                  SystemState                                                 OFFSET(get<T>, {0x40, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneSubsystemManager.SetSystemState
	// void SetSystemState(class USceneSystemState* State);                                                                     // [0x1635f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystemManager.SetScriptObject
	// void SetScriptObject(class UObject* Actor);                                                                              // [0x1635e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystemManager.RegisterSystemEvent
	// class USceneSubsystemManager* RegisterSystemEvent(FName& EventName, class USceneSubsystem* Subsystem, TArray<FName>& After); // [0x1635860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystemManager.InvokeTick
	// void InvokeTick(float DeltaTime);                                                                                        // [0x1635460] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystemManager.InvokeQueued
	// void InvokeQueued(FName& EventName);                                                                                     // [0x16352b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystemManager.InvokePostTick
	// void InvokePostTick(float DeltaTime);                                                                                    // [0x1635230] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystemManager.InvokeInline
	// void InvokeInline(FName& EventName);                                                                                     // [0x16351a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystemManager.GetSystemState
	// class USceneSystemState* GetSystemState();                                                                               // [0x1635140] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystemManager.GetSubsystemByClass
	// class USceneSubsystem* GetSubsystemByClass(class UClass* SubsystemClass);                                                // [0x1635060] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystemManager.GetSubsystem
	// class USceneSubsystem* GetSubsystem(FName& SystemName);                                                                  // [0x1634f20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystemManager.GetAllSubsystemNames
	// TArray<FName> GetAllSubsystemNames();                                                                                    // [0x1634240] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystemManager.EndBuildSystems
	// void EndBuildSystems();                                                                                                  // [0x1633ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystemManager.DeclareEventInvoker
	// class USceneSubsystemManager* DeclareEventInvoker(FName& Event);                                                         // [0x1633c70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystemManager.BeginBuildSystems
	// class USceneSubsystemManager* BeginBuildSystems();                                                                       // [0x16339d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneSubsystemManager.AddSystem
	// class USceneSubsystemManager* AddSystem(class UClass* SubsystemClass);                                                   // [0x16338a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SceneSystemEvent
/// Size: 0x0010 (0x000028 - 0x000038)
class USceneSystemEvent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FMulticastInlineDelegate)                  OnBattleResultUpdate                                        OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/GameUE.TypedStateCollection
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FTypedStateCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TMap<int32_t, class USceneObjectState*>)   StateById                                                   OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TSet<USceneObjectState*>)                  StateArray                                                  OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Class /Script/GameUE.SceneSystemState
/// Size: 0x01A0 (0x000028 - 0x0001C8)
class USceneSystemState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	CMember(class USceneSystemEvent*)                  EventNotifier                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TMap<FName, class UClass*>)                StateClassMap                                               OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TMap<FName, class UScenePawnState*>)       PawnStateMap                                                OFFSET(get<T>, {0x80, 80, 0, 0})
	CMember(TMap<FGuid, class USceneObjectState*>)     ObjectByGuid                                                OFFSET(get<T>, {0xD0, 80, 0, 0})
	CMember(TMap<FName, FTypedStateCollection>)        TypedObjectState                                            OFFSET(get<T>, {0x120, 80, 0, 0})
	CMember(TMap<int32_t, ESceneBattleResult>)         RecentBattleResult                                          OFFSET(get<T>, {0x170, 80, 0, 0})
	DMember(int32_t)                                   RecentBattleId                                              OFFSET(get<int32_t>, {0x1C0, 4, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneSystemState.UpdateBattleResult
	// void UpdateBattleResult(int32_t BattleId, ESceneBattleResult Result);                                                    // [0x16360d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneSystemState.SetEventNotifier
	// void SetEventNotifier(class USceneSystemEvent* Notifier);                                                                // [0x1635ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneSystemState.GetStateClassByType
	// class UClass* GetStateClassByType(FName& TypeName);                                                                      // [0x1634d00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneSystemState.GetRecentBattleResult
	// ESceneBattleResult GetRecentBattleResult(int32_t BattleId);                                                              // [0x1634af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneSystemState.GetRecentBattleId
	// int32_t GetRecentBattleId();                                                                                             // [0x1634ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneSystemState.GetPawnStateByType
	// class UScenePawnState* GetPawnStateByType(FName& Name, FName& TypeName);                                                 // [0x1634860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneSystemState.GetPawnStateByClass
	// class UScenePawnState* GetPawnStateByClass(FName& Name, class UClass* Class);                                            // [0x1634770] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneSystemState.GetObjectStateById
	// class USceneObjectState* GetObjectStateById(FName& TypeName, int32_t ID);                                                // [0x1634650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneSystemState.GetObjectStateByGuid
	// class USceneObjectState* GetObjectStateByGuid(FGuid& Guid);                                                              // [0x16345a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SceneSystemState.CreateObjectState
	// class USceneObjectState* CreateObjectState(FName& TypeName, int32_t ID, FGuid& Guid, class UClass* StateClass);          // [0x1633ad0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.SceneTaskObject
/// Size: 0x0090 (0x000028 - 0x0000B8)
class USceneTaskObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class UObject*)                            StageScriptObject                                           OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(ESceneTaskType)                            SceneTaskType                                               OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(int32_t)                                   DefaultPriority                                             OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(float)                                     PendingOut                                                  OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   BlockChannels                                               OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   BreakChannels                                               OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   AcquireChannels                                             OFFSET(get<int32_t>, {0x44, 4, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneTaskObject.Tick
	// void Tick(float DeltaTime);                                                                                              // [0x1636040] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneTaskObject.Terminate
	// void Terminate();                                                                                                        // [0xc8b150] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneTaskObject.SetReadyToComplete
	// void SetReadyToComplete();                                                                                               // [0x1635de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneTaskObject.SetPendingTime
	// void SetPendingTime(float Time);                                                                                         // [0x1635cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneTaskObject.Run
	// void Run();                                                                                                              // [0x1629620] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneTaskObject.Recycle
	// void Recycle();                                                                                                          // [0x89d6b0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneTaskObject.Queued
	// void Queued();                                                                                                           // [0x1635730] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneTaskObject.OverrideTaskType
	// void OverrideTaskType(int32_t TypeOverride);                                                                             // [0x1635540] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneTaskObject.Initialize
	// void Initialize();                                                                                                       // [0x89bc50] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneTaskObject.Complete
	// void Complete();                                                                                                         // [0x116c1b0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SceneTaskObject.AddTaskTag
	// void AddTaskTag(FName& Tag);                                                                                             // [0x1633940] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.SceneTaskPool
/// Size: 0x0008 (0x000068 - 0x000070)
class USceneTaskPool : public UKV_ObjectPool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UClass*)                             ObjectClass                                                 OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/GameUE.SceneTaskSystem
/// Size: 0x0088 (0x000058 - 0x0000E0)
class USceneTaskSystem : public USceneSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TMap<class UClass*, class USceneTaskPool*>) TaskObjectPool                                             OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(TArray<class USceneTaskObject*>)           QueuedTasks                                                 OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<class USceneTaskObject*>)           RandomTasks                                                 OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<class USceneTaskObject*>)           RunningTask                                                 OFFSET(get<T>, {0xC8, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneTaskSystem.ScenePrepare
	// void ScenePrepare();                                                                                                     // [0x1635ac0] Final|Native|Public  
	// Function /Script/GameUE.SceneTaskSystem.ResetAll
	// void ResetAll();                                                                                                         // [0x16359b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneTaskSystem.IsTaskFree
	// bool IsTaskFree();                                                                                                       // [0x1635510] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneTaskSystem.EnqueueTaskByName
	// class USceneTaskObject* EnqueueTaskByName(FString TaskName, bool Queued, int32_t Priority);                              // [0x1633ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneTaskSystem.EnqueueTask
	// class USceneTaskObject* EnqueueTask(class UClass* Class, bool Queued, int32_t Priority);                                 // [0x1633ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneTaskSystem.DequeueTasksWithTag
	// void DequeueTasksWithTag(FName& Tag, bool bTerminate);                                                                   // [0x1633de0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneTaskSystem.DequeueTask
	// void DequeueTask(class USceneTaskObject* Object, bool bTerminate);                                                       // [0x1633d10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SceneUnitLookAtComponent
/// Size: 0x00A8 (0x0000B0 - 0x000158)
class USceneUnitLookAtComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	DMember(bool)                                      bOnlyTurnActor                                              OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(float)                                     EyeRatio                                                    OFFSET(get<float>, {0xB4, 4, 0, 0})
	CMember(class AScenePawn*)                         Unit                                                        OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UStoryAnimInstance*)                 ABP                                                         OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             MeshComp                                                    OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           MatEye_L                                                    OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           MatEye_R                                                    OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class AActor*)                             LookAtTarget                                                OFFSET(get<T>, {0xE0, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneUnitLookAtComponent.UpdateLookAt
	// void UpdateLookAt(float Delta);                                                                                          // [0x163cef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUnitLookAtComponent.SetPartEnable
	// void SetPartEnable(bool bInEye, bool bInNormal);                                                                         // [0x163bf30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUnitLookAtComponent.SetOnlyHeadRot
	// void SetOnlyHeadRot(bool bOnlyHead);                                                                                     // [0x163bea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUnitLookAtComponent.SetLookTarget
	// void SetLookTarget(bool bInLookAtLocation, FVector InLoc, class AActor* InTarget, FString InBone);                       // [0x163bc40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SceneUnitLookAtComponent.SetLookSpeed
	// void SetLookSpeed(float InEyeSpeed, float InNormalSpeed);                                                                // [0x163bb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUnitLookAtComponent.SetKeepWhenLoseTarget
	// void SetKeepWhenLoseTarget(bool bKeep);                                                                                  // [0x163ba20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUnitLookAtComponent.SetEyeLimit
	// void SetEyeLimit(float InYawLimit, float InPitchLimit);                                                                  // [0x163b950] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUnitLookAtComponent.SetCurEyeRot
	// void SetCurEyeRot(float InYaw, float InPitch);                                                                           // [0x163b7f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUnitLookAtComponent.Reset
	// void Reset();                                                                                                            // [0x9a7970] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUnitLookAtComponent.Init
	// void Init();                                                                                                             // [0x163a080] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUnitLookAtComponent.EnableLook
	// void EnableLook(bool bInLook);                                                                                           // [0x1639440] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SceneUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class USceneUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.SceneUtils.UpdatePVSData
	// void UpdatePVSData(class UObject* WorldContextObject, bool bTurnOff);                                                    // [0x163cf70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.TransformAxisByTransformForward
	// FVector2D TransformAxisByTransformForward(FTransform InTrans, FVector2D& InVector);                                      // [0x163cda0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.TransformAxisByActorForward
	// FVector2D TransformAxisByActorForward(class AActor* InActor, FVector2D& InVector);                                       // [0x163ccd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.SpawnCascadeEmitterLoc
	// class UParticleSystemComponent* SpawnCascadeEmitterLoc(class UObject* WorldContextObject, FString InPrimaryId, FVector& InVector, FRotator& InRotator); // [0x163ca10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.SpawnCascadeEmitter
	// class UParticleSystemComponent* SpawnCascadeEmitter(class UObject* WorldContextObject, FString InPrimaryId, class AActor* ReferActor, FName SocketName, bool bAttached); // [0x163c860] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.SetStreamingLightScenario
	// void SetStreamingLightScenario(class ULevelStreaming* StreamingLevel, bool bLightScenario);                              // [0x163c530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.SetLevelLightScenario
	// void SetLevelLightScenario(class ULevel* Level, bool bLightScenario);                                                    // [0x163bab0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.SetCanEverAffectNavigation
	// void SetCanEverAffectNavigation(class UActorComponent* Comp, bool bAffect);                                              // [0x163b730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.PropagateLightingScenarioChange
	// void PropagateLightingScenarioChange(class UObject* WorldContextObject);                                                 // [0x163b090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.IsNavigationBuilt
	// bool IsNavigationBuilt(class UObject* WorldContextObject);                                                               // [0x163a290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.IsGameWorld
	// bool IsGameWorld(class UWorld* World);                                                                                   // [0x163a200] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.SceneUtils.IsEditorWorld
	// bool IsEditorWorld(class UWorld* World);                                                                                 // [0x163a170] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.SceneUtils.IsA
	// bool IsA(class UObject* Object, class UClass* Class);                                                                    // [0x163a0a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.GetObjectClass
	// class UClass* GetObjectClass(class UObject* Object);                                                                     // [0x1639c20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.GetLineTraceSingleResult
	// FHitResult GetLineTraceSingleResult(class UObject* WorldContextObject, FVector& Start, FVector& End, bool bShowDebug);   // [0x16399f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.GetLineTraceSingleLocation
	// FVector GetLineTraceSingleLocation(class UObject* WorldContextObject, FVector& Start, FVector& End, bool bShowDebug);    // [0x1639850] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.GetContextWorld
	// class UWorld* GetContextWorld(class UObject* WorldContextObject);                                                        // [0x1639760] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.GetAllObjectsByClass
	// void GetAllObjectsByClass(class UClass* ActorCompClass, TArray<UObject*>& OutArray);                                     // [0x16395b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.FlushLevelStreaming
	// void FlushLevelStreaming(class UObject* WorldContextObject, char FlushType);                                             // [0x16394f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.CreateRenderTarget2D
	// class UTextureRenderTarget2D* CreateRenderTarget2D(class UObject* Outer, int32_t InSizeX, int32_t InSizeY, bool bInForceLinearGamma); // [0x16392f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.AlphaToBlendOption
	// float AlphaToBlendOption(float InAlpha, EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomCurve);              // [0x1639040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SceneUtils.AddComponent
	// void AddComponent(class AActor* Owner, class UActorComponent* Comp);                                                     // [0x1638f80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SceneVehiclePawn
/// Size: 0x0050 (0x0002A0 - 0x0002F0)
class ASceneVehiclePawn : public AScenePawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(class USkeletalMeshComponent*)             MotoMesh                                                    OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             RidderMesh                                                  OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UMapVehicleAnimInstance*)            AnimInstance                                                OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class URidderAnimInstance*)                RidderAnimInstance                                          OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(float)                                     MaxLeanAngle                                                OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(float)                                     LeanRate                                                    OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(float)                                     LeanRecoverRate                                             OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(float)                                     WheelRollForce                                              OFFSET(get<float>, {0x2E0, 4, 0, 0})


	/// Functions
	// Function /Script/GameUE.SceneVehiclePawn.SetRidderMesh
	// void SetRidderMesh(class USkeletalMeshComponent* Mesh);                                                                  // [0x163c410] Final|Native|Public  
	// Function /Script/GameUE.SceneVehiclePawn.SetMotoMesh
	// void SetMotoMesh(class USkeletalMeshComponent* Mesh);                                                                    // [0x163be10] Final|Native|Public  
	// Function /Script/GameUE.SceneVehiclePawn.SetAnim
	// void SetAnim(float Val);                                                                                                 // [0x163b480] Final|Native|Public  
	// Function /Script/GameUE.SceneVehiclePawn.GetRidderMesh
	// class USkeletalMeshComponent* GetRidderMesh();                                                                           // [0x1639ce0] Final|Native|Public  
	// Function /Script/GameUE.SceneVehiclePawn.GetMotoMesh
	// class USkeletalMeshComponent* GetMotoMesh();                                                                             // [0x1639bf0] Final|Native|Public  
};

/// Class /Script/GameUE.ScreenBrokenCapture
/// Size: 0x0038 (0x000220 - 0x000258)
class AScreenBrokenCapture : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	SMember(FMulticastInlineDelegate)                  OnCaptureOK                                                 OFFSET(getStruct<T>, {0x220, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.ScreenBrokenCapture.TakeSnapScreenShots
	// void TakeSnapScreenShots();                                                                                              // [0x163ccb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScreenBrokenCapture.TakeOnlySnapScreenShots
	// void TakeOnlySnapScreenShots();                                                                                          // [0x163cc70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScreenBrokenCapture.SnapScreenShots
	// void SnapScreenShots(int32_t Width, int32_t Height, TArray<FColor>& Colors);                                             // [0x163c730] Final|Native|Protected|HasOutParms 
	// Function /Script/GameUE.ScreenBrokenCapture.SetShowUI
	// void SetShowUI(bool bShow);                                                                                              // [0x15e1c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScreenBrokenCapture.HookCapture
	// void HookCapture();                                                                                                      // [0x163a060] Final|Native|Protected 
	// Function /Script/GameUE.ScreenBrokenCapture.HandleCaptureOk
	// void HandleCaptureOk();                                                                                                  // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.ScreenBrokenCapture.GetScreenMap
	// class UTexture2D* GetScreenMap();                                                                                        // [0x1639d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScreenBrokenCapture.GetReflectionMap
	// class UTextureCube* GetReflectionMap();                                                                                  // [0x1639cb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.ScreenProjector
/// Size: 0x0138 (0x000028 - 0x000160)
class UScreenProjector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(class UWorld*)                             World                                                       OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class ULocalPlayer*)                       Player                                                      OFFSET(get<T>, {0x30, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.ScreenProjector.UpdateProjectionData
	// void UpdateProjectionData();                                                                                             // [0x163d030] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScreenProjector.SetWorld
	// void SetWorld(class UObject* WorldObjectContext);                                                                        // [0x163c5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScreenProjector.RaycastPoint
	// bool RaycastPoint(FVector& Point, TEnumAsByte<ETraceTypeQuery> QueryChannel, class AActor* OwingActor);                  // [0x163b260] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ScreenProjector.RaycastComponentLocation
	// bool RaycastComponentLocation(class USceneComponent* Component, TEnumAsByte<ETraceTypeQuery> QueryChannel);              // [0x163b190] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScreenProjector.ProjectPointPyramid
	// bool ProjectPointPyramid(FVector& Point, FMargin& Border);                                                               // [0x163af90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ScreenProjector.ProjectPointInside
	// bool ProjectPointInside(FVector& Point, FMargin& Border);                                                                // [0x163ae90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ScreenProjector.ProjectPoint
	// FVector ProjectPoint(FVector& Point);                                                                                    // [0x163ade0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ScreenProjector.ProjectComponentPyramid
	// bool ProjectComponentPyramid(class USceneComponent* Component, FMargin& Border);                                         // [0x163acf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.ScreenProjector.ProjectComponentInside
	// bool ProjectComponentInside(class USceneComponent* Component, FMargin& Border);                                          // [0x163ac00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.ScreenProjector.ProjectComponent
	// FVector ProjectComponent(class USceneComponent* Component);                                                              // [0x163ab50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ScreenProjector.ProjectActorPyramid
	// bool ProjectActorPyramid(class AActor* Actor, FMargin& Border);                                                          // [0x163aa60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.ScreenProjector.ProjectActorInside
	// bool ProjectActorInside(class AActor* Actor, FMargin& Border);                                                           // [0x163a970] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.ScreenProjector.ProjectActor
	// FVector ProjectActor(class AActor* Actor);                                                                               // [0x163a8c0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.Screenshot
/// Size: 0x0018 (0x000220 - 0x000238)
class AScreenshot : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	CMember(class UTextureRenderTarget2D*)             TextureTarget                                               OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x228, 8, 0, 0})
	SMember(FName)                                     MaterialParamName                                           OFFSET(getStruct<T>, {0x230, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.Screenshot.TakeSnapScreenShot
	// void TakeSnapScreenShot();                                                                                               // [0x163cc90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.ScriptDestroy
/// Size: 0x0000 (0x000028 - 0x000028)
class UScriptDestroy : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.ScriptDestroy.CustomDestroy
	// void CustomDestroy();                                                                                                    // [0x1165460] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/GameUE.ScrollCellInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FScrollCellInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class AScrollSceneCell*)                   Cell                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Class /Script/GameUE.ScrollScene
/// Size: 0x0060 (0x000220 - 0x000280)
class AScrollScene : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(class AScrollSceneCell*)                   PresetCell                                                  OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UClass*)                             CellFactoryClass                                            OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class UScrollSceneCellFactory*)            CellFactory                                                 OFFSET(get<T>, {0x230, 8, 0, 0})
	DMember(float)                                     FrontDistance                                               OFFSET(get<float>, {0x238, 4, 0, 0})
	DMember(float)                                     BackDistance                                                OFFSET(get<float>, {0x23C, 4, 0, 0})
	CMember(TArray<FScrollCellInfo>)                   BuiltCells                                                  OFFSET(get<T>, {0x240, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.ScrollScene.ResetScene
	// void ResetScene();                                                                                                       // [0x163b440] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ScrollScene.Move
	// void Move(float Delta);                                                                                                  // [0x163a450] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.ScrollSceneCell
/// Size: 0x0028 (0x000220 - 0x000248)
class AScrollSceneCell : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	DMember(int32_t)                                   EntranceStyle                                               OFFSET(get<int32_t>, {0x220, 4, 0, 0})
	CMember(class USceneComponent*)                    Entrance                                                    OFFSET(get<T>, {0x228, 8, 0, 0})
	DMember(int32_t)                                   ExitStyle                                                   OFFSET(get<int32_t>, {0x230, 4, 0, 0})
	CMember(class USceneComponent*)                    Exit                                                        OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(class USceneComponent*)                    SceneRoot                                                   OFFSET(get<T>, {0x240, 8, 0, 0})
};

/// Class /Script/GameUE.ScrollSceneCellFactory
/// Size: 0x0050 (0x000028 - 0x000078)
class UScrollSceneCellFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FName, class UActorPool*>)            CellPool                                                    OFFSET(get<T>, {0x28, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.ScrollSceneCellFactory.NextScrollCell
	// class AScrollSceneCell* NextScrollCell(class UObject* WorldContext);                                                     // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.ScrollSceneCellFactory.GetCellActor
	// class AScrollSceneCell* GetCellActor(class UClass* Class, class UObject* WorldContext);                                  // [0x1639690] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/GameUE.SecretSet
/// Size: 0x0060 (0x000000 - 0x000060)
class FSecretSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FString>)                           BookNames                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FString, FString>)                    Secrets                                                     OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Class /Script/GameUE.SecretBook
/// Size: 0x0060 (0x000028 - 0x000088)
class USecretBook : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FSecretSet>)                        CookedSecretSet                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TMap<FString, FString>)                    RuntimeSecretSet                                            OFFSET(get<T>, {0x38, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.SecretBook.SetupSecretBook
	// void SetupSecretBook(FString BookName);                                                                                  // [0x163c680] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SecretBook.HasSecret
	// bool HasSecret(FString SecretName);                                                                                      // [0x1639f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SecretBook.GetInstance
	// class USecretBook* GetInstance();                                                                                        // [0x1639820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SecretBook.ClearInstance
	// void ClearInstance();                                                                                                    // [0x16392d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SecretBook.CheckSecret
	// bool CheckSecret(FString SecretName, FString SecretKey);                                                                 // [0x16391b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SequenceHandler
/// Size: 0x00F8 (0x000220 - 0x000318)
class ASequenceHandler : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FMulticastInlineDelegate)                  OnPlayEvent                                                 OFFSET(getStruct<T>, {0x220, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedEvent                                             OFFSET(getStruct<T>, {0x230, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStopEvent                                                 OFFSET(getStruct<T>, {0x240, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPauseEvent                                                OFFSET(getStruct<T>, {0x250, 16, 0, 0})
	CMember(class ULevelSequence*)                     Sequence                                                    OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(class ALevelSequenceActor*)                SequenceActor                                               OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(class ULevelSequencePlayer*)               Player                                                      OFFSET(get<T>, {0x270, 8, 0, 0})
	SMember(FMovieSceneSequencePlaybackSettings)       Setting                                                     OFFSET(getStruct<T>, {0x278, 20, 0, 0})
	CMember(class UKV_LevelSequencePostProcess*)       PostProcess                                                 OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class AActor*)                             ClockSourceActor                                            OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(TArray<class UAkAudioEvent*>)              AudioAssets                                                 OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(TMap<FMovieSceneObjectBindingID, class AActor*>) AutoBindRecordMap                                     OFFSET(get<T>, {0x2B0, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.SequenceHandler.TakeCameraControl
	// void TakeCameraControl(bool bCameraControl);                                                                             // [0x163cbe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.StopAtCurrentTime
	// void StopAtCurrentTime();                                                                                                // [0x163cbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.Stop
	// void Stop();                                                                                                             // [0x163cba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.SetSequencePostProcess
	// void SetSequencePostProcess(class UKV_LevelSequencePostProcess* InPostProcess);                                          // [0x163c4a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.SetPostProcessClass
	// class UKV_LevelSequencePostProcess* SetPostProcessClass(class UClass* InPostProcess);                                    // [0x163c370] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.SetPlayRate
	// void SetPlayRate(float Rate);                                                                                            // [0x163c140] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.SetPlaybackTimePosition
	// void SetPlaybackTimePosition(float InTime, EUpdatePositionMethod InUpdateMethod);                                        // [0x163c2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.SetPlayBackSetting
	// void SetPlayBackSetting(FMovieSceneSequencePlaybackSettings& Setting);                                                   // [0x163c090] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.SetPlaybackOrigin
	// void SetPlaybackOrigin(FTransform& Transform);                                                                           // [0x163c1c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.SetPauseAtEnd
	// void SetPauseAtEnd(bool bPause);                                                                                         // [0x163c000] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.SetDisableCameraCuts
	// void SetDisableCameraCuts(bool bInDisable);                                                                              // [0x163b8c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.SetBindings
	// void SetBindings(FString BindName, TArray<AActor*>& BindActors);                                                         // [0x163b620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.SetAutoLightBinding
	// void SetAutoLightBinding(bool Value);                                                                                    // [0x163b590] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.SetAutoFogBinding
	// void SetAutoFogBinding(bool Value);                                                                                      // [0x163b500] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.Resume
	// void Resume();                                                                                                           // [0x163b460] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.ResetBindingByName
	// void ResetBindingByName(FString BindingName);                                                                            // [0x163b390] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.ProtectTimeDilation
	// void ProtectTimeDilation(float Value);                                                                                   // [0x163b110] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.PlayReverse
	// void PlayReverse();                                                                                                      // [0x163a8a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.PlayLooping
	// void PlayLooping(int32_t NumLoops);                                                                                      // [0x163a810] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.Play
	// void Play(float DeltaSeconds);                                                                                           // [0x163a790] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.Pause
	// void Pause();                                                                                                            // [0x163a770] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.OnStop
	// void OnStop();                                                                                                           // [0x163a750] Final|Native|Private 
	// Function /Script/GameUE.SequenceHandler.OnPlay
	// void OnPlay();                                                                                                           // [0x163a730] Final|Native|Private 
	// Function /Script/GameUE.SequenceHandler.OnPause
	// void OnPause();                                                                                                          // [0x163a710] Final|Native|Private 
	// Function /Script/GameUE.SequenceHandler.OnFinished
	// void OnFinished();                                                                                                       // [0x163a6f0] Final|Native|Private 
	// Function /Script/GameUE.SequenceHandler.MuteTrackByTag
	// void MuteTrackByTag(FName Tag, bool bMute);                                                                              // [0x163a620] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.MuteTrackByName
	// void MuteTrackByName(FString TrackName, bool bMute);                                                                     // [0x163a4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.LeaveCameraExclusive
	// void LeaveCameraExclusive(bool bSwitch, float Delta);                                                                    // [0x163a380] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x163a350] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.IsPaused
	// bool IsPaused();                                                                                                         // [0x163a320] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.HasTrackWithTag
	// bool HasTrackWithTag(FName Tag);                                                                                         // [0x1639fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.GoToEndAndStop
	// void GoToEndAndStop();                                                                                                   // [0x1639ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.GetTrackTags
	// void GetTrackTags(FString TrackName, TArray<FName>& OutTags);                                                            // [0x1639d80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.GetSequencePlayer
	// class ULevelSequencePlayer* GetSequencePlayer();                                                                         // [0x1639d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.GetSequenceActor
	// class ALevelSequenceActor* GetSequenceActor();                                                                           // [0x1639d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.GetDurationInSecond
	// float GetDurationInSecond();                                                                                             // [0x16397f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.EnterCameraExclusive
	// void EnterCameraExclusive();                                                                                             // [0x16394d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.CheckRecompile
	// bool CheckRecompile();                                                                                                   // [0x1639180] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.CheckCameraCutAvailable
	// bool CheckCameraCutAvailable();                                                                                          // [0x1639150] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceHandler.AddBindings
	// void AddBindings(FString BindName, TArray<AActor*>& BindActors);                                                         // [0x1638e70] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.SequenceManager
/// Size: 0x0038 (0x000220 - 0x000258)
class ASequenceManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	SMember(FMulticastInlineDelegate)                  OnSequenceDestroy                                           OFFSET(getStruct<T>, {0x220, 16, 0, 0})
	CMember(TArray<class ASequenceHandler*>)           Handlers                                                    OFFSET(get<T>, {0x238, 16, 0, 0})
	CMember(TArray<class ASequenceHandler*>)           PendingDestroy                                              OFFSET(get<T>, {0x248, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.SequenceManager.SetAnimBindingByTag
	// void SetAnimBindingByTag(class ULevelSequence* Sequence, FName& TrackTag, class UAnimSequenceBase* Animation);           // [0x1641670] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SequenceManager.SetAnimBinding
	// void SetAnimBinding(class ULevelSequence* Sequence, FString TrackName, class UAnimSequenceBase* Animation);              // [0x1641550] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceManager.SequenceDestroyHandler__DelegateSignature
	// void SequenceDestroyHandler__DelegateSignature(class ASequenceHandler* Handler);                                         // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GameUE.SequenceManager.LoadSequence_SoftObject
	// class ULevelSequence* LoadSequence_SoftObject(TWeakObjectPtr<UObject*>& SoftAsset);                                      // [0x1640f40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SequenceManager.LoadSequence_Path
	// class ULevelSequence* LoadSequence_Path(FString AssetName);                                                              // [0x1640e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceManager.GetSingleton
	// class ASequenceManager* GetSingleton();                                                                                  // [0x1640c90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceManager.DestroySequenceHandler
	// void DestroySequenceHandler(class ASequenceHandler* InHandler);                                                          // [0x1640ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SequenceManager.CreateSequenceHandler
	// class ASequenceHandler* CreateSequenceHandler(class ULevelSequence* InObject, class UClass* Clocker);                    // [0x1640a10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.ServerFlagConfig
/// Size: 0x0008 (0x000028 - 0x000030)
class UServerFlagConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   ReviewFlagTag                                               OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   LimitTopupFlagTag                                           OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Class /Script/GameUE.SharedStageWidget
/// Size: 0x0010 (0x0002A8 - 0x0002B8)
class USharedStageWidget : public UActionInputWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(class UObject*)                            AssignedOuter                                               OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x2B0, 1, 0, 0})
	DMember(bool)                                      bReadyToRemove                                              OFFSET(get<bool>, {0x2B1, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.SharedStageWidget.WidgetLeave
	// void WidgetLeave();                                                                                                      // [0xf15c00] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SharedStageWidget.WidgetEnter
	// void WidgetEnter();                                                                                                      // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.SharedStageWidget.Release
	// void Release(class UObject* UI);                                                                                         // [0x1641400] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SharedStageWidget.MarkReadyToRemove
	// void MarkReadyToRemove();                                                                                                // [0x16413a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SharedStageWidget.Assign
	// void Assign(class UObject* UI);                                                                                          // [0x1640880] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SimpleFade
/// Size: 0x0020 (0x000028 - 0x000048)
class USimpleFade : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/GameUE.SimpleMechanismComponent
/// Size: 0x0000 (0x000490 - 0x000490)
class USimpleMechanismComponent : public UBoxComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
};

/// Class /Script/GameUE.SimpleMovementComponent
/// Size: 0x0008 (0x0003B8 - 0x0003C0)
class USimpleMovementComponent : public UGeneralMovementBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	DMember(float)                                     MoveSpeed                                                   OFFSET(get<float>, {0x3B8, 4, 0, 0})
	DMember(float)                                     MeshOffset                                                  OFFSET(get<float>, {0x3BC, 4, 0, 0})
};

/// Struct /Script/GameUE.SkeletalSkinAsset
/// Size: 0x0040 (0x000000 - 0x000040)
class FSkeletalSkinAsset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(class USkeletalMesh*)                      SkeletalMesh                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/GameUE.ParticleSkinAsset
/// Size: 0x0050 (0x000000 - 0x000050)
class FParticleSkinAsset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(class UParticleSystem*)                    ParticleSystem                                              OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   TranslucencySortPriority                                    OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/GameUE.SkinDataAssetBase
/// Size: 0x0108 (0x000030 - 0x000138)
class USkinDataAssetBase : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(int32_t)                                   ParticleSystemIndex                                         OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TArray<FSkeletalSkinAsset>)                FSkeletalSkinAssets                                         OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FParticleSkinAsset>)                FParticleAssets                                             OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(class USkeletalMesh*)                      SkeletalMesh                                                OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TMap<FName, class UMaterialInterface*>)    MaterialMap                                                 OFFSET(get<T>, {0x60, 80, 0, 0})
	DMember(bool)                                      bHideSubSkinInPreview                                       OFFSET(get<bool>, {0xB0, 1, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             BattleAnimInstance                                          OFFSET(get<T>, {0xB8, 40, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             PreviewAnimInstance                                         OFFSET(get<T>, {0xE0, 40, 0, 0})
	CMember(TWeakObjectPtr<class UAnimSequence*>)      PreviewIdleAnimSequence                                     OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class UClass*)                             ClothPreviewAnimInstance                                    OFFSET(get<T>, {0x130, 8, 0, 0})
};

/// Struct /Script/GameUE.BattleCapsuleShape
/// Size: 0x0018 (0x000000 - 0x000018)
class FBattleCapsuleShape : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bOverride                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     CapsuleHalfHeight                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     CapsuleRadius                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   RelativeLocation                                            OFFSET(getStruct<T>, {0xC, 12, 0, 0})
};

/// Class /Script/GameUE.SkinDataAsset
/// Size: 0x0158 (0x000138 - 0x000290)
class USkinDataAsset : public USkinDataAssetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	CMember(TArray<class USkinDataAssetBase*>)         SubSkinDataAssets                                           OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FVector)                                   BattleScale                                                 OFFSET(getStruct<T>, {0x148, 12, 0, 0})
	SMember(FTransform)                                BattleFinalCamera                                           OFFSET(getStruct<T>, {0x160, 48, 0, 0})
	DMember(bool)                                      bOverrideBattleFinalLightRot                                OFFSET(get<bool>, {0x190, 1, 0, 0})
	SMember(FRotator)                                  BattleFinalLightRot                                         OFFSET(getStruct<T>, {0x194, 12, 0, 0})
	SMember(FBattleCapsuleShape)                       BattleCapsuleShape                                          OFFSET(getStruct<T>, {0x1A0, 24, 0, 0})
	SMember(FRotator)                                  PreviewRotator                                              OFFSET(getStruct<T>, {0x1B8, 12, 0, 0})
	CMember(TMap<FString, FRotator>)                   PageUnitRotator                                             OFFSET(get<T>, {0x1C8, 80, 0, 0})
	CMember(TMap<FString, FVector>)                    PageCameraLocation                                          OFFSET(get<T>, {0x218, 80, 0, 0})
	SMember(FVector)                                   AgtLocation                                                 OFFSET(getStruct<T>, {0x268, 12, 0, 0})
	SMember(FVector)                                   NearAgtLocation                                             OFFSET(getStruct<T>, {0x274, 12, 0, 0})
	SMember(FRotator)                                  NearAgtRotator                                              OFFSET(getStruct<T>, {0x280, 12, 0, 0})
};

/// Class /Script/GameUE.SkinLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USkinLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.SkinLibrary.SetSubSkeletalBySkinData
	// void SetSubSkeletalBySkinData(class AActor* Actor, class USkinDataAsset* SkinDataAsset, ESkinMode SkinMode, TArray<USkeletalMeshComponent*>& OutSkeletalMeshArray, int32_t& SubNum); // [0x1641c70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SkinLibrary.SetSkeletalBySkinData
	// void SetSkeletalBySkinData(class USkeletalMeshComponent* SkeletalMeshComponent, class USkinDataAssetBase* SkinDataAsset, ESkinMode SkinMode); // [0x1641b70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SkinLibrary.SetParticleSystemIndex
	// void SetParticleSystemIndex(class USkeletalMeshComponent* SkeletalMeshComponent, int32_t Index);                         // [0x1641ab0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SkinLibrary.MakeCameraSkinAsset
	// FCameraSkinAsset MakeCameraSkinAsset(FTransform InCstTransform, FTransform InAgtTransform, FTransform InCameraTransform, float InCameraFOV); // [0x1641010] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.SlotLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USlotLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.SlotLibrary.GetSlotSlice
	// void GetSlotSlice(FString InName, int32_t& Begin, int32_t& End);                                                         // [0x1640cb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.SneakAttackSequenceModifier
/// Size: 0x0138 (0x0000D8 - 0x000210)
class USneakAttackSequenceModifier : public UKV_LevelSequencePostProcess
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	DMember(int32_t)                                   MonsterRotEndFrame                                          OFFSET(get<int32_t>, {0x128, 4, 0, 0})
	DMember(int32_t)                                   CameraBlendEndFrame                                         OFFSET(get<int32_t>, {0x12C, 4, 0, 0})
	DMember(int32_t)                                   PlayerRotFrame                                              OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	SMember(FString)                                   PlayerTrackName                                             OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FString)                                   CameraTrackName                                             OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FString)                                   MonsterTrackName                                            OFFSET(getStruct<T>, {0x158, 16, 0, 0})
	SMember(FRotator)                                  PlayerStartRot                                              OFFSET(getStruct<T>, {0x168, 12, 0, 0})
	SMember(FRotator)                                  PlayerEndRot                                                OFFSET(getStruct<T>, {0x174, 12, 0, 0})
	SMember(FRotator)                                  MonsterStartRot                                             OFFSET(getStruct<T>, {0x180, 12, 0, 0})
	SMember(FRotator)                                  MonsterEndRot                                               OFFSET(getStruct<T>, {0x18C, 12, 0, 0})
	SMember(FTransform)                                CameraBlendStartTrans                                       OFFSET(getStruct<T>, {0x1A0, 48, 0, 0})
	SMember(FTransform)                                CameraBlendEndTrans                                         OFFSET(getStruct<T>, {0x1D0, 48, 0, 0})
	DMember(float)                                     PlayerMoveScale                                             OFFSET(get<float>, {0x200, 4, 0, 0})
	SMember(FVector)                                   SeqPlayerMoveEndLoc                                         OFFSET(getStruct<T>, {0x204, 12, 0, 0})
};

/// Class /Script/GameUE.SpecialTerrainBase
/// Size: 0x0050 (0x000220 - 0x000270)
class ASpecialTerrainBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(TMap<int32_t, class ULevelBorderGroup*>)   GroupMap                                                    OFFSET(get<T>, {0x220, 80, 0, 0})
};

/// Class /Script/GameUE.SpineDataAsset
/// Size: 0x0020 (0x000030 - 0x000050)
class USpineDataAsset : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class USpineAtlasAsset*)                   Atlas                                                       OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class USpineSkeletonDataAsset*)            SkeletonData                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FVector2D)                                 ScaleFactor                                                 OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bAlphaPremultiplied                                         OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Class /Script/GameUE.SpineMaterialSet
/// Size: 0x0020 (0x000030 - 0x000050)
class USpineMaterialSet : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UMaterialInterface*)                 NormalBlendMaterial                                         OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UMaterialInterface*)                 AdditiveBlendMaterial                                       OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UMaterialInterface*)                 MultiplyBlendMaterial                                       OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UMaterialInterface*)                 ScreenBlendMaterial                                         OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/GameUE.SpineHelperLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USpineHelperLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.SpineHelperLibrary.SetAlphaPremultiplied
	// void SetAlphaPremultiplied(class USpineWidget* Widget, bool AlphaPremultiplied);                                         // [0x1641490] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.SpineHelperLibrary.ConfigureSpineWidget
	// void ConfigureSpineWidget(class USpineWidget* Widget, class USpineDataAsset* Asset, bool bApplyScale);                   // [0x1640910] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SpineImageRenderComponent
/// Size: 0x0078 (0x0004F8 - 0x000570)
class USpineImageRenderComponent : public UProceduralMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	CMember(class UMaterialInterface*)                 MaterialTemplate                                            OFFSET(get<T>, {0x4F8, 8, 0, 0})
	SMember(FName)                                     TextureParameterName                                        OFFSET(getStruct<T>, {0x500, 8, 0, 0})
	CMember(class UTexture2D*)                         TextureAsset                                                OFFSET(get<T>, {0x508, 8, 0, 0})
	SMember(FVector2D)                                 ImageSize                                                   OFFSET(getStruct<T>, {0x510, 8, 0, 0})
	SMember(FVector2D)                                 ImagePivot                                                  OFFSET(getStruct<T>, {0x518, 8, 0, 0})
	SMember(FVector2D)                                 ImageShear                                                  OFFSET(getStruct<T>, {0x520, 8, 0, 0})
	SMember(FLinearColor)                              TintColor                                                   OFFSET(getStruct<T>, {0x528, 16, 0, 0})
	DMember(bool)                                      bCreateCollision                                            OFFSET(get<bool>, {0x538, 1, 0, 0})
	DMember(bool)                                      bSlotColor                                                  OFFSET(get<bool>, {0x539, 1, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           DMI                                                         OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(class USpineSkeletonComponent*)            SpineSkeletonComponent                                      OFFSET(get<T>, {0x548, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.SpineImageRenderComponent.SetMeshMaterial
	// void SetMeshMaterial(class UMaterialInterface* Mat, FName& ParamName);                                                   // [0x16419d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.SpineImageRenderComponent.SetImageSize
	// void SetImageSize(FVector2D& Size);                                                                                      // [0x1641940] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SpineImageRenderComponent.SetImageShear
	// void SetImageShear(FVector2D& Shear);                                                                                    // [0x16418b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SpineImageRenderComponent.SetImagePivot
	// void SetImagePivot(FVector2D& Pivot);                                                                                    // [0x1641820] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.SpineImageRenderComponent.SetImage
	// void SetImage(class UTexture2D* Tex);                                                                                    // [0x1641790] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.SpineTextRenderComponent
/// Size: 0x0028 (0x0004B8 - 0x0004E0)
class USpineTextRenderComponent : public UTextRenderComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	DMember(bool)                                      bBlendSlotColor                                             OFFSET(get<bool>, {0x4B8, 1, 0, 0})
	CMember(class USpineSkeletonComponent*)            SpineSkeletonComponent                                      OFFSET(get<T>, {0x4C0, 8, 0, 0})
};

/// Class /Script/GameUE.SplashMovieState
/// Size: 0x0010 (0x000050 - 0x000060)
class USplashMovieState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     NextStateName                                               OFFSET(getStruct<T>, {0x50, 8, 0, 0})
};

/// Class /Script/GameUE.SplashState
/// Size: 0x0008 (0x000050 - 0x000058)
class USplashState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     NextStateName                                               OFFSET(getStruct<T>, {0x50, 8, 0, 0})
};

/// Class /Script/GameUE.StageLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UStageLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.StageLibrary.GetStageManager
	// class UStageManager* GetStageManager(class UObject* WorldContextObject);                                                 // [0x1640df0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.StageLibrary.GetCurrentStageScript
	// class UStageScript* GetCurrentStageScript(class UObject* WorldContextObject);                                            // [0x1640c00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.StageLibrary.GetCurrentStageId
	// int32_t GetCurrentStageId(class UObject* WorldContextObject);                                                            // [0x1640b70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.StageLoadState
/// Size: 0x0060 (0x000028 - 0x000088)
class UStageLoadState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Script/GameUE.StageManager
/// Size: 0x0120 (0x000028 - 0x000148)
class UStageManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(TMap<FString, class UClass*>)              TypeCache                                                   OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(class UObject*)                            WorldContextObject                                          OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TArray<class UStageTask*>)                 WorkingList                                                 OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<class UStageTask*>)                 PendingList                                                 OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<class UStageTask*>)                 Temporary                                                   OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(class UStageLoadScript*)                   LoadingScript                                               OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TArray<class UStageScript*>)               StageStack                                                  OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TArray<class UStageScript*>)               Closing                                                     OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(class UStageTask*)                         PrepassTask                                                 OFFSET(get<T>, {0x130, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.StageManager.GetCurrentStage
	// class UStageScript* GetCurrentStage();                                                                                   // [0x1646dc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.StageTask
/// Size: 0x0010 (0x000028 - 0x000038)
class UStageTask : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/GameUE.StageTask.Tick
	// void Tick();                                                                                                             // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.StageTask.SetReadyToDestroy
	// void SetReadyToDestroy();                                                                                                // [0x116c210] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageTask.Prepass
	// void Prepass();                                                                                                          // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.StageTask.IsReadyToDestroy
	// bool IsReadyToDestroy();                                                                                                 // [0x16472b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameUE.StageTask.Execute
	// void Execute();                                                                                                          // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.StageTask.Discard
	// void Discard();                                                                                                          // [0x198a600] Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.StageVisitor
/// Size: 0x0018 (0x000028 - 0x000040)
class UStageVisitor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMulticastInlineDelegate)                  OnAssetLoaded                                               OFFSET(getStruct<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.StageVisitor.SyncLoadAsset
	// class UObject* SyncLoadAsset(FString AssetKey, bool bCached, TArray<FName>& LoadBundles);                                // [0x1647b70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageVisitor.OnAssetLoaded__DelegateSignature
	// void OnAssetLoaded__DelegateSignature(int32_t RequestKey);                                                               // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GameUE.StageVisitor.GetLoadedAsset
	// class UObject* GetLoadedAsset(FString AssetKey);                                                                         // [0x1646df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StageVisitor.AsyncLoadAssets
	// int32_t AsyncLoadAssets(TArray<FString>& AssetKeys, bool bCached, TArray<FName>& LoadBundles);                           // [0x1646610] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StageVisitor.AsyncLoadAsset
	// int32_t AsyncLoadAsset(FString AssetKey, bool bCached, TArray<FName>& LoadBundles);                                      // [0x1646310] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.StartupState
/// Size: 0x0010 (0x000050 - 0x000060)
class UStartupState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     NextStateName                                               OFFSET(getStruct<T>, {0x50, 8, 0, 0})
};

/// Class /Script/GameUE.StateMachine_Game
/// Size: 0x0000 (0x000128 - 0x000128)
class UStateMachine_Game : public UGameStateMachine
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Script/GameUE.StateMachine_Main
/// Size: 0x0000 (0x000128 - 0x000128)
class UStateMachine_Main : public UGameStateMachine
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Script/GameUE.StateQueue_Init
/// Size: 0x0008 (0x000088 - 0x000090)
class UStateQueue_Init : public UGameStateQueue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     NextState                                                   OFFSET(getStruct<T>, {0x88, 8, 0, 0})
};

/// Class /Script/GameUE.StateQueue_Login
/// Size: 0x00C8 (0x000088 - 0x000150)
class UStateQueue_Login : public UGameStateQueue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FName)                                     NextState                                                   OFFSET(getStruct<T>, {0xF0, 8, 0, 0})
	DMember(int32_t)                                   SilentRetries                                               OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	CMember(TSet<FString>)                             SilentErrorNames                                            OFFSET(get<T>, {0x100, 80, 0, 0})
};

/// Class /Script/GameUE.StateQueue_Relogin
/// Size: 0x0058 (0x000088 - 0x0000E0)
class UStateQueue_Relogin : public UGameStateQueue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FName)                                     ReturnState                                                 OFFSET(getStruct<T>, {0x9C, 8, 0, 0})
	SMember(FName)                                     RecoverState                                                OFFSET(getStruct<T>, {0xA4, 8, 0, 0})
	DMember(int32_t)                                   SilentRetries                                               OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	SMember(FText)                                     Text_Retry                                                  OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	SMember(FText)                                     Text_Giveup                                                 OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
};

/// Class /Script/GameUE.StateQueue_Restart
/// Size: 0x0050 (0x000088 - 0x0000D8)
class UStateQueue_Restart : public UGameStateQueue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FName)                                     NextState                                                   OFFSET(getStruct<T>, {0x9C, 8, 0, 0})
	DMember(int32_t)                                   SilentRetries                                               OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	SMember(FText)                                     Text_Retry                                                  OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FText)                                     Text_Giveup                                                 OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
};

/// Class /Script/GameUE.StoryAnimBlendWeight
/// Size: 0x0018 (0x000028 - 0x000040)
class UStoryAnimBlendWeight : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/GameUE.StoryAnimInstance
/// Size: 0x01E8 (0x0002B8 - 0x0004A0)
class UStoryAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	CMember(TMap<class UAnimSequence*, float>)         BlinkAnims                                                  OFFSET(get<T>, {0x2B8, 80, 0, 0})
	CMember(TMap<float, float>)                        BlinkIntervals                                              OFFSET(get<T>, {0x308, 80, 0, 0})
	CMember(TMap<FString, float>)                      BlinkWeights                                                OFFSET(get<T>, {0x358, 80, 0, 0})
	SMember(FString)                                   BlinkSlot                                                   OFFSET(getStruct<T>, {0x3A8, 16, 0, 0})
	DMember(bool)                                      bEnableBlink                                                OFFSET(get<bool>, {0x3B8, 1, 0, 0})
	DMember(float)                                     BlinkRatio                                                  OFFSET(get<float>, {0x3BC, 4, 0, 0})
	DMember(float)                                     BlinkAnimBlendIn                                            OFFSET(get<float>, {0x3C0, 4, 0, 0})
	DMember(float)                                     BlinkAnimBlendOut                                           OFFSET(get<float>, {0x3C4, 4, 0, 0})
	DMember(bool)                                      bDisableAnimNotifies                                        OFFSET(get<bool>, {0x3C8, 1, 0, 0})
	CMember(class UAnimSequence*)                      EyeFlashAnim                                                OFFSET(get<T>, {0x3D0, 8, 0, 0})
	DMember(float)                                     EyeFlashInterval                                            OFFSET(get<float>, {0x3D8, 4, 0, 0})
	DMember(float)                                     EyeFlashAnimBlendIn                                         OFFSET(get<float>, {0x3DC, 4, 0, 0})
	DMember(float)                                     EyeFlashAnimBlendOut                                        OFFSET(get<float>, {0x3E0, 4, 0, 0})
	DMember(float)                                     EyeFlashRatio                                               OFFSET(get<float>, {0x3E4, 4, 0, 0})
	SMember(FString)                                   LeftEyeKeyWord                                              OFFSET(getStruct<T>, {0x3E8, 16, 0, 0})
	SMember(FString)                                   RightEyeKeyWord                                             OFFSET(getStruct<T>, {0x3F8, 16, 0, 0})
	DMember(int32_t)                                   EyeMaterialSlot_L                                           OFFSET(get<int32_t>, {0x408, 4, 0, 0})
	DMember(int32_t)                                   EyeMaterialSlot_R                                           OFFSET(get<int32_t>, {0x40C, 4, 0, 0})
	CMember(TMap<FName, float>)                        AttributeCurveMap                                           OFFSET(get<T>, {0x410, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCompleteParallelAnimationEvaluation                       OFFSET(getStruct<T>, {0x460, 16, 0, 0})
	CMember(class UStoryAnimBlendWeight*)              BlinkBlendState                                             OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class UStoryAnimBlendWeight*)              EyeFlashBlendState                                          OFFSET(get<T>, {0x490, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.StoryAnimInstance.UpdateEyeFlash
	// void UpdateEyeFlash(float Delta);                                                                                        // [0x16480f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StoryAnimInstance.UpdateBlink
	// bool UpdateBlink(float Delta);                                                                                           // [0x1647fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StoryAnimInstance.GetCacheCurveValue
	// float GetCacheCurveValue(FName CurveName);                                                                               // [0x1646d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StoryAnimInstance.GetAimExpression
	// FString GetAimExpression();                                                                                              // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.StoryAnimInstance.BP_SetLookAtParams
	// void BP_SetLookAtParams(FVector InAimDir, FVector InHeadLimit, FVector InSpineLimit, float InSpeed);                     // [0x198a600] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/GameUE.StoryAnimInstance.BP_SetAdditiveSpineRot
	// void BP_SetAdditiveSpineRot(FRotator InRot);                                                                             // [0x198a600] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/GameUE.StoryAnimInstance.BP_SetAdditiveHeadRot
	// void BP_SetAdditiveHeadRot(FRotator InRot);                                                                              // [0x198a600] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/GameUE.StoryAnimInstance.BP_GetSpineLimitRot
	// FRotator BP_GetSpineLimitRot();                                                                                          // [0x198a600] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/GameUE.StoryAnimInstance.BP_GetHeadLimitRot
	// FRotator BP_GetHeadLimitRot();                                                                                           // [0x198a600] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/GameUE.StoryAnimInstance.BP_GetAdditiveSpineRot
	// FRotator BP_GetAdditiveSpineRot();                                                                                       // [0x198a600] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/GameUE.StoryAnimInstance.BP_GetAdditiveHeadRot
	// FRotator BP_GetAdditiveHeadRot();                                                                                        // [0x198a600] Event|Public|HasDefaults|BlueprintEvent 
};

/// Class /Script/GameUE.StorylinePreviewManager
/// Size: 0x0010 (0x000220 - 0x000230)
class AStorylinePreviewManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(class UStoryline*)                         PreviewStoryline                                            OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UStorylineNode*)                     PreviewStartNode                                            OFFSET(get<T>, {0x228, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.StorylinePreviewManager.StartPreview
	// void StartPreview();                                                                                                     // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.StorylinePreviewManager.OnNPCSelected
	// void OnNPCSelected(class AActor* NPCActor, bool bSelect);                                                                // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.StorylinePreviewManager.OnLookAtRefPointMoved
	// void OnLookAtRefPointMoved(class AActor* NPCActor, class AActor* RefPoint);                                              // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.StorylinePreviewManager.InitPreview
	// void InitPreview();                                                                                                      // [0x164db30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StorylinePreviewManager.GetPreviewStoryline
	// class UStoryline* GetPreviewStoryline();                                                                                 // [0x127f280] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StorylinePreviewManager.GetPreviewStartNode
	// class UStorylineNode* GetPreviewStartNode();                                                                             // [0x164d680] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StorylinePreviewManager.GetPreviewContext
	// class UStorylinePreviewContext* GetPreviewContext();                                                                     // [0x164d650] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.StorylinePreviewManager.GetFocusStoryline
	// class UStoryline* GetFocusStoryline();                                                                                   // [0x164d450] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameUE.StorylinePreviewManager.CheckStorylineOpen
	// bool CheckStorylineOpen();                                                                                               // [0x164ca10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GameUE.StoryNPCSlotComponent
/// Size: 0x0018 (0x0001F8 - 0x000210)
class UStoryNPCSlotComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FString)                                   NPCName                                                     OFFSET(getStruct<T>, {0x1F8, 16, 0, 0})
};

/// Class /Script/GameUE.StoryNPCTemplete
/// Size: 0x0018 (0x000220 - 0x000238)
class AStoryNPCTemplete : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	DMember(int32_t)                                   StorylineId                                                 OFFSET(get<int32_t>, {0x220, 4, 0, 0})
	CMember(TArray<int32_t>)                           StorylineIds                                                OFFSET(get<T>, {0x228, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.StoryNPCTemplete.GetSlots
	// void GetSlots(TMap<FString, UStoryNPCSlotComponent*>& Slots);                                                            // [0x164d7f0] Final|Native|Public|HasOutParms 
	// Function /Script/GameUE.StoryNPCTemplete.GetCameras
	// void GetCameras(TMap<FString, UStoryTempleteCameraComponent*>& Cameras);                                                 // [0x164d020] Final|Native|Public|HasOutParms 
	// Function /Script/GameUE.StoryNPCTemplete.GetCameraAttachSlotName
	// FString GetCameraAttachSlotName(FString CameraName);                                                                     // [0x164cee0] Final|Native|Public  
};

/// Class /Script/GameUE.StoryPostAnimInstance
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UStoryPostAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/GameUE.StorySoundInjectListener
/// Size: 0x0170 (0x000220 - 0x000390)
class AStorySoundInjectListener : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(class UDataTable*)                         SoundInjectTable                                            OFFSET(get<T>, {0x220, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.StorySoundInjectListener.TryPlayStoryStartSound
	// void TryPlayStoryStartSound(int32_t Sid);                                                                                // [0x164f170] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StorySoundInjectListener.TryPlayStoryEndSound
	// void TryPlayStoryEndSound(int32_t Sid);                                                                                  // [0x164f0e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StorySoundInjectListener.TryPlaySequenceSound
	// void TryPlaySequenceSound(TWeakObjectPtr<ULevelSequence*> SoftAsset, int32_t Index);                                     // [0x164ef90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StorySoundInjectListener.TryPlayDialogSound
	// void TryPlayDialogSound(int32_t ConfigId);                                                                               // [0x164ef00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StorySoundInjectListener.SetCurrStory
	// void SetCurrStory(int32_t Sid, FString InStoryName);                                                                     // [0x164ed40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StorySoundInjectListener.SetCurrSeqName
	// void SetCurrSeqName(FString InSeqName);                                                                                  // [0x164ec40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StorySoundInjectListener.SetCurrDialogConfig
	// void SetCurrDialogConfig(int32_t InConfigId);                                                                            // [0x164ebb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StorySoundInjectListener.InjectSoundToTable
	// void InjectSoundToTable(int32_t InTriggerType, int32_t InSoundType, FString InBGMName, FString InBGMLayer, FString InAudioName); // [0x164db50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StorySoundInjectListener.InitData
	// void InitData();                                                                                                         // [0x164db10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StorySoundInjectListener.GetStoryStartHintStr
	// FString GetStoryStartHintStr();                                                                                          // [0x164d990] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StorySoundInjectListener.GetStoryEndHintStr
	// FString GetStoryEndHintStr();                                                                                            // [0x164d910] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StorySoundInjectListener.GetSequenceSoundHintStr
	// FString GetSequenceSoundHintStr(FString SeqName);                                                                        // [0x164d6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StorySoundInjectListener.GetDialogSoundHintStr
	// FString GetDialogSoundHintStr(int32_t ConfigId);                                                                         // [0x164d370] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StorySoundInjectListener.GetCurrStoryName
	// FString GetCurrStoryName();                                                                                              // [0x164d170] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.StorySoundInjectListener.GetCurrStoryId
	// int32_t GetCurrStoryId();                                                                                                // [0x164d140] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.StoryTempleteCameraComponent
/// Size: 0x0018 (0x0008D8 - 0x0008F0)
class UStoryTempleteCameraComponent : public UCineCameraComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2288;

public:
	SMember(FString)                                   CameraName                                                  OFFSET(getStruct<T>, {0x8D8, 16, 0, 0})
};

/// Class /Script/GameUE.StringHelper
/// Size: 0x0000 (0x000028 - 0x000028)
class UStringHelper : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.StringHelper.WeightedRandom
	// FString WeightedRandom(TMap<FString, float>& WeightTable);                                                               // [0x164f370] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StringHelper.WeightedFormat
	// FString WeightedFormat(FString Pattern, TArray<FWeightedReplaceText>& Texts);                                            // [0x164f200] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StringHelper.RandomizeTextbook
	// FTextbookStruct RandomizeTextbook(class UDataTable* DataTable, TMap<FName, float>& TextWeights);                         // [0x164e8e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StringHelper.GetNumberRange
	// TArray<FInt32Range> GetNumberRange();                                                                                    // [0x164d5d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.StringHelper.GetLatinRanges
	// TArray<FInt32Range> GetLatinRanges();                                                                                    // [0x164d550] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.StringHelper.GetCustomRange
	// TArray<FInt32Range> GetCustomRange(FString Chars);                                                                       // [0x164d280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.StringHelper.GetCJKRanges
	// TArray<FInt32Range> GetCJKRanges();                                                                                      // [0x164ce60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.StringHelper.CheckString
	// FStringCheck CheckString(FString String);                                                                                // [0x164ca40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.StringHelper.CheckRange
	// FStringCheck CheckRange(FStringCheck& Data, int32_t N, TArray<FInt32Range>& Ranges, FText Message);                      // [0x164c780] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StringHelper.CheckNone
	// FStringCheck CheckNone(FStringCheck& Data, int32_t N, TArray<FInt32Range>& Ranges, FText Message);                       // [0x164c4f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.StringHelper.CalculateWeightedLength
	// int32_t CalculateWeightedLength(FStringCheck& Data, TArray<FCharacterWeight>& Weights);                                  // [0x164c360] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.Subworld
/// Size: 0x00E0 (0x000028 - 0x000108)
class USubworld : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TArray<class UObject*>)                    CustomDatas                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(class ULevelManager*)                      LevelManager                                                OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UStageManager*)                      StageManager                                                OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class USubworldManager*)                   SubworldManager                                             OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UObject*)                            ManageObject                                                OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UObject*)                            WorldContext                                                OFFSET(get<T>, {0xF8, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.Subworld.SetLightScenario
	// void SetLightScenario(FName Name);                                                                                       // [0x164ee70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.Subworld.GetInitLevels
	// void GetInitLevels(TArray<FString>& OutLevels);                                                                          // [0x164d480] Final|Native|Public|HasOutParms 
	// Function /Script/GameUE.Subworld.GetCustomDatas
	// TArray<UObject*> GetCustomDatas();                                                                                       // [0x164d1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.Subworld.GetActorWithInterface
	// TArray<AActor*> GetActorWithInterface(class UClass* InInterface, FName LevelName);                                       // [0x164cd50] Final|Native|Public  
	// Function /Script/GameUE.Subworld.GetActorOfClass
	// TArray<AActor*> GetActorOfClass(class UClass* InClass, FName LevelName);                                                 // [0x164cc40] Final|Native|Public  
	// Function /Script/GameUE.Subworld.FlushLevelStreaming
	// void FlushLevelStreaming();                                                                                              // [0x164cc20] Final|Native|Public  
	// Function /Script/GameUE.Subworld.ControlLevel
	// void ControlLevel(FName& InLevel, ESubworldLevelControl InControl);                                                      // [0x164cb40] Final|Native|Public|HasOutParms 
	// Function /Script/GameUE.Subworld.CheckLevelComplete
	// bool CheckLevelComplete();                                                                                               // [0x164c4c0] Final|Native|Public  
	// Function /Script/GameUE.Subworld.AddLevel
	// void AddLevel(FName& InName, FName& InTempl, FVector& InTrans, ESubworldLevelControl InControl);                         // [0x164c1d0] Final|Native|Public|HasOutParms|HasDefaults 
};

/// Class /Script/GameUE.SubworldManager
/// Size: 0x0148 (0x000028 - 0x000170)
class USubworldManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(TMap<int32_t, class USubworld*>)           Subworlds                                                   OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(class USubworld*)                          MasterSubworld                                              OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UObject*)                            WorldContext                                                OFFSET(get<T>, {0xF8, 8, 0, 0})
};

/// Class /Script/GameUE.SuspendState
/// Size: 0x0000 (0x000050 - 0x000050)
class USuspendState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/GameUE.SysBus
/// Size: 0x0020 (0x000028 - 0x000048)
class USysBus : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<class USysEvent*>)                  Events                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<class USysCtrl*>)                   Controls                                                    OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.SysBus.PushXDDataCtrl
	// void PushXDDataCtrl(FString Tag, FString EventName, TMap<FString, FString> MapStringValues, TMap<FString, int64_t> MapIntValues); // [0x164e4f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SysBus.PushTabDBTrackEventCtrl
	// void PushTabDBTrackEventCtrl(FString EventName, FString PropertiesStr);                                                  // [0x164e350] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SysBus.PushRequestPayCtrl
	// void PushRequestPayCtrl(FString Amount);                                                                                 // [0x164e250] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SysBus.PushPayCallBackCtrl
	// void PushPayCallBackCtrl(bool Result, FString Amount);                                                                   // [0x164e100] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SysBus.PushOpenTapBillboardCtrl
	// void PushOpenTapBillboardCtrl(int32_t TapBillboardType, int32_t HandleType, bool StopMarquee);                           // [0x164dff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SysBus.PushEventByClass
	// class USysEvent* PushEventByClass(class UClass* EventClass);                                                             // [0x164df50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SysBus.PushCtrlByClass
	// class USysCtrl* PushCtrlByClass(class UClass* CtrlClass);                                                                // [0x164deb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SysBus.PushCommonCtrl
	// void PushCommonCtrl(int32_t ControlId);                                                                                  // [0x164de20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SysBus.HandleEvent
	// TArray<USysEvent*> HandleEvent();                                                                                        // [0x164da90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.SysBus.HandleCtrl
	// TArray<USysCtrl*> HandleCtrl();                                                                                          // [0x164da10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.DevLoginCtrl
/// Size: 0x0020 (0x000030 - 0x000050)
class UDevLoginCtrl : public USysCtrl
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   UserId                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   Password                                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Class /Script/GameUE.SDKLoginCtrl
/// Size: 0x0000 (0x000030 - 0x000030)
class USDKLoginCtrl : public USysCtrl
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/GameUE.SettingServerIdCtrl
/// Size: 0x0008 (0x000030 - 0x000038)
class USettingServerIdCtrl : public USysCtrl
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   ServerId                                                    OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Class /Script/GameUE.RegisterCtrl
/// Size: 0x0018 (0x000030 - 0x000048)
class URegisterCtrl : public USysCtrl
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   Sex                                                         OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Class /Script/GameUE.DialogCtrl
/// Size: 0x0010 (0x000030 - 0x000040)
class UDialogCtrl : public USysCtrl
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   DialogHandle                                                OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   Choice                                                      OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(bool)                                      bClosed                                                     OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/GameUE.RequestPayCtrl
/// Size: 0x0010 (0x000030 - 0x000040)
class URequestPayCtrl : public USysCtrl
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   Amount                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/GameUE.PayCallBackCtrl
/// Size: 0x0018 (0x000030 - 0x000048)
class UPayCallBackCtrl : public USysCtrl
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FString)                                   Amount                                                      OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Class /Script/GameUE.TapDBTrackEventCtrl
/// Size: 0x0020 (0x000030 - 0x000050)
class UTapDBTrackEventCtrl : public USysCtrl
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   PropertiesStr                                               OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Class /Script/GameUE.XDDataPushDataCtrl
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UXDDataPushDataCtrl : public USysCtrl
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   TagName                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(TMap<FString, FString>)                    MapStringValues                                             OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TMap<FString, int64_t>)                    MapIntValues                                                OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Class /Script/GameUE.SelectPlatformCtrl
/// Size: 0x0008 (0x000030 - 0x000038)
class USelectPlatformCtrl : public USysCtrl
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   Selection                                                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   LoginType                                                   OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Class /Script/GameUE.OpenTapBillboardCtrl
/// Size: 0x0010 (0x000030 - 0x000040)
class UOpenTapBillboardCtrl : public USysCtrl
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   TapBillboardType                                            OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   HandleType                                                  OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(bool)                                      StopMarquee                                                 OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/GameUE.ServerClassify
/// Size: 0x0030 (0x000028 - 0x000058)
class UServerClassify : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bToggleOn                                                   OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(int32_t)                                   PanelType                                                   OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   ServerGroup                                                 OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FText)                                     TabName                                                     OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	DMember(int32_t)                                   TagId                                                       OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   orderType                                                   OFFSET(get<int32_t>, {0x54, 4, 0, 0})
};

/// Class /Script/GameUE.PlatformSDKLoginEv
/// Size: 0x0008 (0x000040 - 0x000048)
class UPlatformSDKLoginEv : public USysEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      BInOffice                                                   OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Class /Script/GameUE.EntryEv
/// Size: 0x0018 (0x000040 - 0x000058)
class UEntryEv : public USysEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      BShowBillboard                                              OFFSET(get<bool>, {0x40, 1, 0, 0})
	SMember(FString)                                   BillboardContent                                            OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Class /Script/GameUE.PatchUpdateEv
/// Size: 0x0008 (0x000040 - 0x000048)
class UPatchUpdateEv : public USysEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bIsUpdate                                                   OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Class /Script/GameUE.DialogEvent
/// Size: 0x0068 (0x000040 - 0x0000A8)
class UDialogEvent : public USysEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(int32_t)                                   DialogKey                                                   OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(EDialogStyle)                              Style                                                       OFFSET(get<T>, {0x44, 1, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FText)                                     Content                                                     OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FText)                                     OptYesText                                                  OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	SMember(FText)                                     OptNoText                                                   OFFSET(getStruct<T>, {0x90, 24, 0, 0})
};

/// Class /Script/GameUE.DialogCloseEvent
/// Size: 0x0008 (0x000040 - 0x000048)
class UDialogCloseEvent : public USysEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   DialogKey                                                   OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/GameUE.PlatformSelectEvent
/// Size: 0x0050 (0x000040 - 0x000090)
class UPlatformSelectEvent : public USysEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TSet<int32_t>)                             Availables                                                  OFFSET(get<T>, {0x40, 80, 0, 0})
};

/// Class /Script/GameUE.MaintainBlockEvent
/// Size: 0x0048 (0x000040 - 0x000088)
class UMaintainBlockEvent : public USysEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   MaintainTitle                                               OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   MaintainLinkText                                            OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   MaintainLinkAddr                                            OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   MaintainContent                                             OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      MaintainBlock                                               OFFSET(get<bool>, {0x80, 1, 0, 0})
};

/// Class /Script/GameUE.TapBillboardBadgeEvent
/// Size: 0x0008 (0x000040 - 0x000048)
class UTapBillboardBadgeEvent : public USysEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      ShowBadge                                                   OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Class /Script/GameUE.AnnouncementEvent
/// Size: 0x0010 (0x000040 - 0x000050)
class UAnnouncementEvent : public USysEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FString>)                           AnnoucementContents                                         OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/GameUE.TapSDKLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTapSDKLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.TapSDKLibrary.StoreReview
	// void StoreReview();                                                                                                      // [0x1656d40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.TapSDKLibrary.SetLanguage
	// void SetLanguage(int32_t Language);                                                                                      // [0x1656640] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.TapSDKLibrary.RequestCDKey
	// void RequestCDKey(class UObject* WorldContextObject, FString CDKey, FDelegateProperty callback);                         // [0x16563c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.TapSDKLibrary.QueryWithProductList
	// void QueryWithProductList(TArray<FString>& ProductIds);                                                                  // [0x1656110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.TapSDKLibrary.QueryWithProductIds
	// void QueryWithProductIds(TArray<FString> ProductIds);                                                                    // [0x1655fc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.TapSDKLibrary.PushXDData
	// void PushXDData(FString Tag, FString EventName, TMap<FString, FString> MapStringValues, TMap<FString, int64_t> MapIntValues); // [0x1655c00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.TapSDKLibrary.PayWithWeb
	// void PayWithWeb(FString ServerIDStr, FString RoleIDStr, FString ProductIDStr, FString OrderIDStr, FString ProductNameStr, float PayAmount, FString ExtrasStr); // [0x1655770] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.TapSDKLibrary.PayWithProduct
	// void PayWithProduct(FString OrderIDStr, FString ProductIDStr, FString RoleIDStr, FString ServerIDStr, FString ExtStr);   // [0x16553f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.TapSDKLibrary.PayWithParams
	// void PayWithParams(FString GameOrderId, FString ProductId, FString ProductName, float PayAmount, FString RoleId, FString ServerId, FString Ext); // [0x1654f60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.TapSDKLibrary.OpenUserDashboard
	// void OpenUserDashboard(FString extra);                                                                                   // [0x1654e70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.TapSDKLibrary.OpenTapBillboard
	// void OpenTapBillboard(class UObject* WorldContextObject);                                                                // [0x1654df0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.TapSDKLibrary.IsTokenActiveWithType
	// void IsTokenActiveWithType(int32_t LoginTypeInt);                                                                        // [0x1654b70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.TapSDKLibrary.GetTapBillboardBadgeStatus
	// bool GetTapBillboardBadgeStatus();                                                                                       // [0x1654710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.TapSDKLibrary.GetBoundAccounts
	// TArray<FString> GetBoundAccounts();                                                                                      // [0x1654190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.TapSDKLibrary.BindByType
	// void BindByType(int32_t LoginTypeInt);                                                                                   // [0x1653ad0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.BatchTaskItem_OpenUI
/// Size: 0x0030 (0x000028 - 0x000058)
class UBatchTaskItem_OpenUI : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   FuncID                                                      OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(bool)                                      bBlackScreen                                                OFFSET(get<bool>, {0x2C, 1, 0, 0})
	CMember(class UObject*)                            InstanceData                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   DepthPriority                                               OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	CMember(class UUIScript*)                          UIScript                                                    OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Struct /Script/GameUE.BatchedOp
/// Size: 0x0010 (0x000000 - 0x000010)
class FBatchedOp : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UBatchTaskItem_OpenUI*)              OpenUI                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   CloseUI                                                     OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Class /Script/GameUE.TaskBatchedUI
/// Size: 0x0040 (0x000038 - 0x000078)
class UTaskBatchedUI : public UStageTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   TargetStageID                                               OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	CMember(class UStageScript*)                       TargetStageScript                                           OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UTransitionWidget*)                  TransitionWidget                                            OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<FBatchedOp>)                        BatchOps                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   TransitionWidgetAssetId                                     OFFSET(getStruct<T>, {0x60, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.TaskBatchedUI.SetTransitionWidget
	// void SetTransitionWidget(FString WidgetAssetId);                                                                         // [0x1656ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.TaskBatchedUI.CloseTransitionWidget
	// void CloseTransitionWidget();                                                                                            // [0x1653e00] Final|Native|Public  
	// Function /Script/GameUE.TaskBatchedUI.CloseLastByID
	// void CloseLastByID(int32_t InId);                                                                                        // [0x1653d40] Final|Native|Public  
	// Function /Script/GameUE.TaskBatchedUI.CloseInRange
	// void CloseInRange(int32_t From, int32_t To);                                                                             // [0x1653c70] Final|Native|Public  
	// Function /Script/GameUE.TaskBatchedUI.CloseByUID
	// void CloseByUID(int32_t InUID);                                                                                          // [0x1653be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.TaskBatchedUI.CloseAllByID
	// void CloseAllByID(int32_t InId);                                                                                         // [0x1653b50] Final|Native|Public  
};

/// Class /Script/GameUE.TaskCleanMode
/// Size: 0x0008 (0x000038 - 0x000040)
class UTaskCleanMode : public UStageTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/GameUE.TaskCloseStage
/// Size: 0x0050 (0x000038 - 0x000088)
class UTaskCloseStage : public UStageTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UStageLoadState*)                    LoadState                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UStageLoadScript*)                   LoadScript                                                  OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UStageScript*)                       TargetStage                                                 OFFSET(get<T>, {0x60, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.TaskCloseStage.SetRebase
	// void SetRebase(int32_t InRebase);                                                                                        // [0x16568f0] Final|Native|Public  
	// Function /Script/GameUE.TaskCloseStage.SetLoadingScript
	// void SetLoadingScript(class UStageLoadScript* InLoadActor);                                                              // [0x110e670] Final|Native|Public  
	// Function /Script/GameUE.TaskCloseStage.SetLoading
	// void SetLoading(FString InLoading);                                                                                      // [0x16566c0] Final|Native|Public  
};

/// Class /Script/GameUE.TaskLayoutUI
/// Size: 0x0008 (0x000038 - 0x000040)
class UTaskLayoutUI : public UStageTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/GameUE.TaskOpenStage
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UTaskOpenStage : public UStageTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FMulticastInlineDelegate)                  OnLoadComplete                                              OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLoadingClosed                                             OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStageEntered                                              OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(class UObject*)                            InstanceData                                                OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UObject*)                            StageHandler                                                OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class UStageLoadState*)                    LoadState                                                   OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UStageLoadScript*)                   LoadScript                                                  OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UStageScript*)                       NewStage                                                    OFFSET(get<T>, {0x88, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.TaskOpenStage.SetShouldStack
	// void SetShouldStack(bool bStack);                                                                                        // [0x1656a90] Final|Native|Public  
	// Function /Script/GameUE.TaskOpenStage.SetRebase
	// void SetRebase(int32_t InRebase);                                                                                        // [0x1656980] Final|Native|Public  
	// Function /Script/GameUE.TaskOpenStage.SetLoadingScript
	// void SetLoadingScript(class UStageLoadScript* InLoadActor);                                                              // [0x1656820] Final|Native|Public  
	// Function /Script/GameUE.TaskOpenStage.SetLoading
	// void SetLoading(FString loading);                                                                                        // [0x1656770] Final|Native|Public  
	// Function /Script/GameUE.TaskOpenStage.HandleOpenStage__DelegateSignature
	// void HandleOpenStage__DelegateSignature(EStageRes Result);                                                               // [0x198a600] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameUE.TaskResetAllUI
/// Size: 0x0008 (0x000038 - 0x000040)
class UTaskResetAllUI : public UStageTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/GameUE.TextHelperLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTextHelperLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.TextHelperLibrary.GetNameSpace
	// FString GetNameSpace(FText InText);                                                                                      // [0x16544d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.TextHelperLibrary.GetKey
	// FString GetKey(FText InText);                                                                                            // [0x16542e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.TextHelperLibrary.FindText
	// bool FindText(FString InNameSpace, FString InKey, FText& OutText);                                                       // [0x1653ff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.TextureUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UTextureUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.TextureUtils.GetImportedSize
	// FVector2D GetImportedSize(class UTexture2D* Tex);                                                                        // [0x1654250] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/GameUE.TowerClueAsset
/// Size: 0x0014 (0x000000 - 0x000014)
class FTowerClueAsset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   X                                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SizeX                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   SizeY                                                       OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Class /Script/GameUE.TowerClueDataAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UTowerClueDataAsset : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FTowerClueAsset>)                   TowerClues                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/GameUE.UIManager
/// Size: 0x00E8 (0x000028 - 0x000110)
class UUIManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TArray<class UUIScript*>)                  ActiveUIs                                                   OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(class UTouchInterface*)                    TouchInterface                                              OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class UClass*)                             DefaultScriptClass                                          OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(TMap<FName, class USharedStageWidget*>)    SharedWidgets                                               OFFSET(get<T>, {0x98, 80, 0, 0})
	CMember(class UUIScript*)                          CachedTop                                                   OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UObject*)                            WorldContextObject                                          OFFSET(get<T>, {0xF0, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.UIManager.GetUIWidgetName
	// TArray<FString> GetUIWidgetName(int32_t ID);                                                                             // [0x1654770] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIManager.GetTopUIActor
	// class UUIScript* GetTopUIActor();                                                                                        // [0x1654740] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.ClassifiedWidgetPool
/// Size: 0x0058 (0x000028 - 0x000080)
class UClassifiedWidgetPool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UClass*)                             WidgetClass                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TSet<UUserWidget*>)                        PooledWidgets                                               OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Struct /Script/GameUE.WidgetSlot
/// Size: 0x0018 (0x000000 - 0x000018)
class FWidgetSlot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   SlotName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(class UUserWidget*)                        Widget                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Class /Script/GameUE.UIScript
/// Size: 0x0218 (0x000028 - 0x000240)
class UUIScript : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FMulticastInlineDelegate)                  OnOpenUI                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCloseUI                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVisibleUI                                                 OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInvisibleUI                                               OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(class UStageScript*)                       StageScript                                                 OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class USubworld*)                          Subworld                                                    OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(class USubworld*)                          SubworldParent                                              OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TArray<FWidgetSlot>)                       WidgetSlots                                                 OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<class UUserWidget*>)                WidgetArray                                                 OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(class UTouchInterface*)                    TouchInterface                                              OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UObject*)                            InstanceData                                                OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TMap<FName, class USharedStageWidget*>)    AssignedSharedWidgets                                       OFFSET(get<T>, {0xD8, 80, 0, 0})
	CMember(ESceneBlockType)                           SceneBlockType                                              OFFSET(get<T>, {0x128, 1, 0, 0})
	DMember(int32_t)                                   CachedDepth                                                 OFFSET(get<int32_t>, {0x154, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAssetLoaded                                               OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	CMember(TWeakObjectPtr<class UObject*>)            WeakContextObject                                           OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(TMap<class UClass*, class UClassifiedWidgetPool*>) ReservedWidgetPool                                  OFFSET(get<T>, {0x1A0, 80, 0, 0})
	CMember(TMap<FPrimaryAssetId, class UClass*>)      WidgetClassMap                                              OFFSET(get<T>, {0x1F0, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.UIScript.SyncLoadSoftObject
	// class UObject* SyncLoadSoftObject(TWeakObjectPtr<UObject*>& SoftAsset, bool bCache, TArray<FName>& LoadBundles);         // [0x1657040] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.UIScript.SyncLoadSoftClass
	// class UClass* SyncLoadSoftClass(TSoftObjectPtr<UClass*>& SoftAsset, bool bCache, TArray<FName>& LoadBundles);            // [0x1656ec0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.UIScript.SyncLoadAsset
	// class UObject* SyncLoadAsset(FString AssetKey, bool bCache, TArray<FName>& LoadBundles);                                 // [0x1656d60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.UIScript.SimpleUIEvent__DelegateSignature
	// void SimpleUIEvent__DelegateSignature();                                                                                 // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GameUE.UIScript.SetWidgetSlot
	// void SetWidgetSlot(class UUserWidget* InWidget, FString Slot);                                                           // [0x1656c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.SetStyle
	// void SetStyle(EUIStyle NewStyle);                                                                                        // [0x1656b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.SetSceneBlockType
	// void SetSceneBlockType(ESceneBlockType NewType);                                                                         // [0x1656a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.SetFuncId
	// void SetFuncId(int32_t InFuncID);                                                                                        // [0x16565c0] Final|Native|Public  
	// Function /Script/GameUE.UIScript.SetDepthPriority
	// void SetDepthPriority(int32_t Priority);                                                                                 // [0x1656530] Final|Native|Public  
	// Function /Script/GameUE.UIScript.RemoveWidget
	// void RemoveWidget(class UUserWidget* InWidget);                                                                          // [0x1656330] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.RemoveCacheLayer
	// void RemoveCacheLayer(int32_t LayerId);                                                                                  // [0x16562a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.ReceiveVisibleUI
	// void ReceiveVisibleUI();                                                                                                 // [0x1635730] Native|Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.UIScript.ReceiveOpenUI
	// void ReceiveOpenUI();                                                                                                    // [0x89bc50] Native|Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.UIScript.ReceiveInvisibleUI
	// void ReceiveInvisibleUI();                                                                                               // [0x1629620] Native|Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.UIScript.ReceiveCloseUI
	// void ReceiveCloseUI();                                                                                                   // [0x89d6b0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.UIScript.OnTick
	// void OnTick(float DeltaTime);                                                                                            // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.UIScript.OnSharedWidgetAssign
	// void OnSharedWidgetAssign(FName& Name, class USharedStageWidget* Widget);                                                // [0x198a600] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameUE.UIScript.OnReuse
	// void OnReuse();                                                                                                          // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.UIScript.OnRecycle
	// void OnRecycle();                                                                                                        // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.UIScript.OnPrepass
	// void OnPrepass();                                                                                                        // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.UIScript.OnInitialize
	// void OnInitialize();                                                                                                     // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.UIScript.OnDestroy
	// void OnDestroy();                                                                                                        // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.UIScript.OnAssetLoaded__DelegateSignature
	// void OnAssetLoaded__DelegateSignature(int32_t LoadKey);                                                                  // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GameUE.UIScript.NewWidgetByClass
	// class UUserWidget* NewWidgetByClass(class UObject* Outer, class UClass* WidgetCls);                                      // [0x1654d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.NewWidget
	// class UUserWidget* NewWidget(class UObject* Outer, FString WidgetName);                                                  // [0x1654c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.IsVisible
	// bool IsVisible();                                                                                                        // [0x1654bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.GetWidgetUID
	// int32_t GetWidgetUID();                                                                                                  // [0x1654b50] Final|Native|Public|Const 
	// Function /Script/GameUE.UIScript.GetWidgetInViewport
	// class UUserWidget* GetWidgetInViewport(FString InName);                                                                  // [0x1654a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.GetWidgetId
	// int32_t GetWidgetId();                                                                                                   // [0x1654a70] Final|Native|Public|Const 
	// Function /Script/GameUE.UIScript.GetWidgetById
	// class UUserWidget* GetWidgetById(int32_t InId);                                                                          // [0x16549d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.GetWidgetAtSlot
	// class UUserWidget* GetWidgetAtSlot(FString InName);                                                                      // [0x1654910] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.GetWidget
	// class UUserWidget* GetWidget(FString InName);                                                                            // [0x1654850] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.GetSubworld
	// class USubworld* GetSubworld();                                                                                          // [0x16546f0] Final|Native|Public  
	// Function /Script/GameUE.UIScript.GetStyle
	// EUIStyle GetStyle();                                                                                                     // [0x16546c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.GetSharedWidget
	// class UUserWidget* GetSharedWidget(FName& InName);                                                                       // [0x1654620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.UIScript.GetParentStage
	// class UStageScript* GetParentStage();                                                                                    // [0x1654600] Final|Native|Public  
	// Function /Script/GameUE.UIScript.GetLoadedAsset
	// class UObject* GetLoadedAsset(FString AssetKey);                                                                         // [0x1654410] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.GetFuncId
	// int32_t GetFuncId();                                                                                                     // [0x1654230] Final|Native|Public|Const 
	// Function /Script/GameUE.UIScript.GetDepthPriority
	// int32_t GetDepthPriority();                                                                                              // [0x1654210] Final|Native|Public  
	// Function /Script/GameUE.UIScript.EmptyCacheLayer
	// void EmptyCacheLayer(int32_t LayerId);                                                                                   // [0x1653f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.DestroyWidget
	// void DestroyWidget(class UUserWidget* Widget);                                                                           // [0x1653ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.CloseUI
	// void CloseUI(FString TransitionWidget);                                                                                  // [0x1653e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.CloseStage
	// class UTaskCloseStage* CloseStage();                                                                                     // [0x1653dd0] Final|Native|Public  
	// Function /Script/GameUE.UIScript.AsyncLoadAssets
	// int32_t AsyncLoadAssets(TArray<FString>& AssetKeys, bool bCache, TArray<FName>& LoadBundles);                            // [0x1653930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.UIScript.AsyncLoadAsset
	// int32_t AsyncLoadAsset(FString AssetKeys, bool bCache, TArray<FName>& LoadBundles);                                      // [0x16537d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.UIScript.AsyncCacheAssets
	// void AsyncCacheAssets(TArray<FString>& AssetKey, int32_t LayerId);                                                       // [0x16536b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.UIScript.AsyncCacheAsset
	// void AsyncCacheAsset(FString AssetKey, int32_t LayerId);                                                                 // [0x16535c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.AddWidgetToSlot
	// class UUserWidget* AddWidgetToSlot(FString Slot, FString WidgetName);                                                    // [0x16534a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UIScript.AddCacheLayer
	// void AddCacheLayer(int32_t LayerId);                                                                                     // [0x1653410] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.ULookAtUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UULookAtUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.ULookAtUtils.SetAllowEyeAnimCurves
	// void SetAllowEyeAnimCurves(class USkeletalMeshComponent* Mesh, bool bAllow);                                             // [0x165c1b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.ULookAtUtils.IsFri
	// bool IsFri(class AActor* Unit);                                                                                          // [0x165ba40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.ULookAtUtils.GetLookAtRefPos
	// FVector GetLookAtRefPos(class AActor* Unit, FString LookAtBone);                                                         // [0x165b130] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ULookAtUtils.GetLookAtDirection
	// FVector GetLookAtDirection(class AActor* Unit1, class AActor* Unit2, FString LookAtBone, bool bInLookLoc, FVector LookAtLocation); // [0x165af10] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.ULookAtUtils.GetLookAtBone
	// FString GetLookAtBone(class AActor* Unit);                                                                               // [0x165ae40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.ULookAtUtils.GetFacialBoneName
	// FString GetFacialBoneName(class AActor* Unit);                                                                           // [0x165ac20] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/GameUE.UnitPreviewAnimInstanceProxy
/// Size: 0x0060 (0x000760 - 0x0007C0)
class FUnitPreviewAnimInstanceProxy : public FAnimInstanceProxy
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1984;

public:
};

/// Class /Script/GameUE.UnitPreviewAnimInstance
/// Size: 0x07F8 (0x0002B8 - 0x000AB0)
class UUnitPreviewAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2736;

public:
	SMember(FName)                                     MachineName                                                 OFFSET(getStruct<T>, {0x2B8, 8, 0, 0})
	DMember(int32_t)                                   IdleIndex                                                   OFFSET(get<int32_t>, {0x2C0, 4, 0, 0})
	DMember(bool)                                      bTriggerRandomIdle                                          OFFSET(get<bool>, {0x2C4, 1, 0, 0})
	DMember(bool)                                      bTriggerAppear                                              OFFSET(get<bool>, {0x2C5, 1, 0, 0})
	DMember(bool)                                      bStateIdle                                                  OFFSET(get<bool>, {0x2C6, 1, 0, 0})
	DMember(bool)                                      bStateG                                                     OFFSET(get<bool>, {0x2C7, 1, 0, 0})
	DMember(bool)                                      bStateChip                                                  OFFSET(get<bool>, {0x2C8, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStateEntryEvent                                           OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	SMember(FUnitPreviewAnimInstanceProxy)             Proxy                                                       OFFSET(getStruct<T>, {0x2E0, 1984, 0, 0})
	DMember(int32_t)                                   IdleLoopMax                                                 OFFSET(get<int32_t>, {0xAA0, 4, 0, 0})
	DMember(int32_t)                                   IdleRandomMax                                               OFFSET(get<int32_t>, {0xAA4, 4, 0, 0})


	/// Functions
	// Function /Script/GameUE.UnitPreviewAnimInstance.TriggerAppear
	// void TriggerAppear(bool bInTriggerAppear);                                                                               // [0x165cb30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UnitPreviewAnimInstance.SwitchByUIState
	// void SwitchByUIState(EPreviewUIState InUIState);                                                                         // [0x165cab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UnitPreviewAnimInstance.GetAllAnimSequences
	// TArray<UAnimSequenceBase*> GetAllAnimSequences();                                                                        // [0x15e6240] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.UnitSkeletalMeshComponent
/// Size: 0x0010 (0x000F00 - 0x000F10)
class UUnitSkeletalMeshComponent : public USkeletalMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3856;

public:


	/// Functions
	// Function /Script/GameUE.UnitSkeletalMeshComponent.SetIsHideParticle
	// void SetIsHideParticle(bool bInHideParticle);                                                                            // [0x165c3f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.UnitSkeletalMeshComponent.GetIsHideParticle
	// bool GetIsHideParticle();                                                                                                // [0x165acf0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.UnLuaUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UUnLuaUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.UnLuaUtils.DoLuaStringAndGetRetStrings
	// TArray<FString> DoLuaStringAndGetRetStrings(FString LuaString);                                                          // [0x165a5e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.UnluaWidgetComponent
/// Size: 0x0058 (0x0005B8 - 0x000610)
class UUnluaWidgetComponent : public UWidgetComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	CMember(TSet<UUserWidget*>)                        LocalCreatedWidgets                                         OFFSET(get<T>, {0x5B8, 80, 0, 0})
};

/// Class /Script/GameUE.UpdateState
/// Size: 0x0008 (0x000050 - 0x000058)
class UUpdateState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/GameUE.ValidateState
/// Size: 0x0008 (0x000050 - 0x000058)
class UValidateState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     NextStateName                                               OFFSET(getStruct<T>, {0x50, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.ValidateState.ValidateEnvironment
	// bool ValidateEnvironment();                                                                                              // [0x198a600] Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.VersionState
/// Size: 0x0018 (0x000050 - 0x000068)
class UVersionState : public UGameStateObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FName)                                     UpdateStateName                                             OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	SMember(FName)                                     NextStateName                                               OFFSET(getStruct<T>, {0x58, 8, 0, 0})
};

/// Class /Script/GameUE.ViewContext
/// Size: 0x0008 (0x000028 - 0x000030)
class UViewContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class AActor*)                             WorldContext                                                OFFSET(get<T>, {0x28, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.ViewContext.Tick
	// void Tick(float Delta);                                                                                                  // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.ViewContext.SwitchOut
	// void SwitchOut(class UViewContext* To);                                                                                  // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.ViewContext.SwitchIn
	// void SwitchIn(class UViewContext* From);                                                                                 // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.ViewContext.SetMouseAsTouch
	// void SetMouseAsTouch();                                                                                                  // [0x165c480] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.ViewContext.HandleSysEvent
	// void HandleSysEvent(class USysEvent* Ev);                                                                                // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.ViewContext.CreateNewWidget
	// class UUserWidget* CreateNewWidget(class UClass* WidgetClass, int32_t ZDepth);                                           // [0x165a510] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.ViewFramework
/// Size: 0x0108 (0x000028 - 0x000130)
class UViewFramework : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(class USubworldManager*)                   SubworldManager                                             OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UStageManager*)                      StageManager                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class ULevelManager*)                      LevelManager                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UUIManager*)                         UIManager                                                   OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class ULayerManager*)                      LayerManager                                                OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UClass*)                             SubworldManagerClass                                        OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UClass*)                             StageManagerClass                                           OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UClass*)                             LevelManagerClass                                           OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UClass*)                             UIManagerClass                                              OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UClass*)                             LayerManagerClass                                           OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(TWeakObjectPtr<class UDataTable*>)         SubworldConfig                                              OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TWeakObjectPtr<class UDataTable*>)         StageConfig                                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<class UDataTable*>)         LevelConfig                                                 OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(TWeakObjectPtr<class UDataTable*>)         UIConfig                                                    OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UGauntletTestController*)            Controller                                                  OFFSET(get<T>, {0x120, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.ViewFramework.GetUIManager
	// class UUIManager* GetUIManager(class UObject* WorldContext);                                                             // [0x165b920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.ViewFramework.GetSubworldManager
	// class USubworldManager* GetSubworldManager(class UObject* WorldContext);                                                 // [0x165b4e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.ViewFramework.GetStageManager
	// class UStageManager* GetStageManager(class UObject* WorldContext);                                                       // [0x1640df0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.ViewFramework.GetLevelManager
	// class ULevelManager* GetLevelManager(class UObject* WorldContext);                                                       // [0x165adb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.ViewFramework.GetLayerManager
	// class ULayerManager* GetLayerManager(class UObject* WorldContext);                                                       // [0x165ad20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.ViewFramework.Get
	// class UViewFramework* Get(class UObject* WorldContext);                                                                  // [0x165a820] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameUE.VirtualKeyboardZone
/// Size: 0x0030 (0x000140 - 0x000170)
class UVirtualKeyboardZone : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FMulticastInlineDelegate)                  OnVirtualKeyboardShown                                      OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVirtualKeyboardHidden                                     OFFSET(getStruct<T>, {0x160, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.VirtualKeyboardZone.OnVirtualKeyboardShownEvent__DelegateSignature
	// void OnVirtualKeyboardShownEvent__DelegateSignature(FMargin& Rect);                                                      // [0x198a600] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/GameUE.VirtualKeyboardZone.OnVirtualKeyboardHiddenEvent__DelegateSignature
	// void OnVirtualKeyboardHiddenEvent__DelegateSignature();                                                                  // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GameUE.VirtualKeyboardZone.ForceResetZone
	// void ForceResetZone();                                                                                                   // [0x165a800] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.VirtualKeyboardZoneSlot
/// Size: 0x0018 (0x000038 - 0x000050)
class UVirtualKeyboardZoneSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HAlign                                                      OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VAlign                                                      OFFSET(get<T>, {0x49, 1, 0, 0})
};

/// Class /Script/GameUE.WidgetLoadScript
/// Size: 0x00C0 (0x000050 - 0x000110)
class UWidgetLoadScript : public UStageLoadScript
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(class UGlobalLoadWidget*)                  LoadWidget                                                  OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UClass*)                             LoadWidgetClass                                             OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UDataTable*)                         TextBook                                                    OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TMap<FName, float>)                        TextWeights                                                 OFFSET(get<T>, {0x70, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.WidgetLoadScript.CreateLoadWidget
	// class UGlobalLoadWidget* CreateLoadWidget(class UGameInstance* Instance);                                                // [0x165a470] Native|Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/GameUE.WidgetUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetUtils : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.WidgetUtils.WithEditor
	// bool WithEditor();                                                                                                       // [0x8a0fa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.UniformCoord2Local
	// FVector2D UniformCoord2Local(FVector2D& Coord, FGeometry& Geometry);                                                     // [0x165cd30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.UniformCoord2Border
	// FVector2D UniformCoord2Border(FVector2D& Coord, FGeometry& Geometry, FBox2D& BorderBox);                                 // [0x165cbc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.SetSlateOutlineSettings
	// void SetSlateOutlineSettings(class UTextBlock* Font, int32_t OutlineSize, bool bSeparateFillAlpha, bool bApplyOutlineToDropShadows, class UObject* OutlineMaterial, float R, float G, float B, float A); // [0x165c770] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.SetSlateFontMembers
	// void SetSlateFontMembers(class UTextBlock* Font, class UObject* FontFamily, class UObject* FontMaterial, FName TypefaceFontName, int32_t Size); // [0x165c5e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.SetSearchableTextComboBoxEnableSearchBox
	// void SetSearchableTextComboBoxEnableSearchBox(class USearchableTextComboBox* ComBox, bool enable);                       // [0x165c4a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.SetImageTexture
	// void SetImageTexture(class UImage* Image, class UObject* Tex);                                                           // [0x165c330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.SetButtonStyleImage4
	// void SetButtonStyleImage4(class UButton* Button, class UObject* Image);                                                  // [0x165c270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.PlaySoundSustain
	// void PlaySoundSustain(class UObject* Context, class USoundBase* Sound, float VolumeMultiple);                            // [0x165c0a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.PickColor
	// FSlateColor PickColor(float Value, TArray<float>& ValueArray, TArray<FSlateColor>& ColorArray);                          // [0x165beb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.LerpWidgetTransform
	// FWidgetTransform LerpWidgetTransform(float Alpha, FWidgetTransform A, FWidgetTransform B);                               // [0x165bbd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.IsWidgetVisibleInScrollBox
	// bool IsWidgetVisibleInScrollBox(class UScrollBox* ScrollBox, class UWidget* TargetWidget, bool bRequireFullVisibility);  // [0x165bad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.GetWidgetSize
	// FVector2D GetWidgetSize(class UUserWidget* Widget);                                                                      // [0x165b9b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.GetTouchPositionInWidget
	// FVector2D GetTouchPositionInWidget(FGeometry WidgetGeometry, FPointerEvent& InTouchEvent);                               // [0x165b740] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.GetTouchMoveDelta
	// FVector2D GetTouchMoveDelta(FPointerEvent& InTouchEvent, FVector2D& ScreenSpacePosition, FVector2D& LastScreenSpacePosition); // [0x165b570] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.GetNowHHMM
	// FString GetNowHHMM();                                                                                                    // [0x165b460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.GetNetworkLatency
	// float GetNetworkLatency(class UGameUEInstance* Instance);                                                                // [0x165b3d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.GetFPS
	// float GetFPS(float SmoothWith, float& RealFps);                                                                          // [0x165ab40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.GetChildWidgets
	// TArray<UWidget*> GetChildWidgets(class UWidget* Parent);                                                                 // [0x165aa70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.GetCameraPositionByTarget
	// FVector GetCameraPositionByTarget(class UCameraComponent* Cam, float Distance, FVector& TargetPos, FVector2D& ScreenPos); // [0x165a8e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.GetBatteryLow
	// bool GetBatteryLow();                                                                                                    // [0x8a0fa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.GetBatteryLevel
	// float GetBatteryLevel();                                                                                                 // [0x165a8b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.GetBatteryCharging
	// bool GetBatteryCharging();                                                                                               // [0x8a0fa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.FindParentUserWidget
	// class UUserWidget* FindParentUserWidget(class UUserWidget* Widget);                                                      // [0x165a770] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.CopyWidgetTransform
	// FWidgetTransform CopyWidgetTransform(FWidgetTransform InTrans);                                                          // [0x165a370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.ConfigureFullWidgetRT
	// bool ConfigureFullWidgetRT(class UObject* WorldContextObject, class UTextureRenderTarget2D* RT, FVector2D& Size);        // [0x165a260] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.WidgetUtils.CameraPositionToWorld
	// FVector CameraPositionToWorld(class UCameraComponent* Cam, float Distance, FVector2D& ScreenPos);                        // [0x165a140] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.WiremapAnimPool
/// Size: 0x0018 (0x000028 - 0x000040)
class UWiremapAnimPool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<class UWiremapEdgeAnim*>)           AnimInPool                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(class UClass*)                             AnimClass                                                   OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/GameUE.WiremapActor
/// Size: 0x01D0 (0x000220 - 0x0003F0)
class AWiremapActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	CMember(class UWiremapRenderComponent*)            WiremapRenderComponent                                      OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(TMap<FName, class UClass*>)                WiremapEdgeFactoryClasses                                   OFFSET(get<T>, {0x228, 80, 0, 0})
	DMember(float)                                     LayerPadding                                                OFFSET(get<float>, {0x278, 4, 0, 0})
	SMember(FVector)                                   NormalVector                                                OFFSET(getStruct<T>, {0x27C, 12, 0, 0})
	CMember(TMap<FName, class UWiremapEdgeFactory*>)   WiremapEdgeFactories                                        OFFSET(get<T>, {0x288, 80, 0, 0})
	CMember(TMap<int32_t, class UWiremapEdge*>)        Edges                                                       OFFSET(get<T>, {0x2D8, 80, 0, 0})
	CMember(TMap<int32_t, class UWiremapVertex*>)      Vertexes                                                    OFFSET(get<T>, {0x328, 80, 0, 0})
	CMember(TArray<class UWiremapEdge*>)               TickEdges                                                   OFFSET(get<T>, {0x378, 16, 0, 0})
	CMember(TArray<class UWiremapEdge*>)               TickPendings                                                OFFSET(get<T>, {0x388, 16, 0, 0})
	CMember(TMap<class UClass*, class UWiremapAnimPool*>) AnimPools                                                OFFSET(get<T>, {0x398, 80, 0, 0})
	DMember(bool)                                      bEdgesTicking                                               OFFSET(get<bool>, {0x3E8, 1, 0, 0})
	DMember(bool)                                      bRebuildMap                                                 OFFSET(get<bool>, {0x3E9, 1, 0, 0})
	DMember(int32_t)                                   NextAutoEdgeId                                              OFFSET(get<int32_t>, {0x3EC, 4, 0, 0})


	/// Functions
	// Function /Script/GameUE.WiremapActor.UpdateWiremapMesh
	// void UpdateWiremapMesh();                                                                                                // [0x16620c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WiremapActor.GetWiremapVertex
	// class UWiremapVertex* GetWiremapVertex(int32_t InVertexId);                                                              // [0x1660a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WiremapActor.GetWiremapEdge
	// class UWiremapEdge* GetWiremapEdge(int32_t InEdgeId);                                                                    // [0x16609a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WiremapActor.GetLinkEdge
	// class UWiremapEdge* GetLinkEdge(int32_t InVertex0, int32_t InVertex1);                                                   // [0x1660890] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WiremapActor.ClearAll
	// void ClearAll();                                                                                                         // [0x1660320] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WiremapActor.AddVertexComponent
	// class UWiremapVertex* AddVertexComponent(int32_t Index, class USceneComponent* VertexComponent);                         // [0x1660110] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WiremapActor.AddVertexActor
	// class UWiremapVertex* AddVertexActor(int32_t Index, class AActor* VertexActor);                                          // [0x1660040] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WiremapActor.AddVertex
	// class UWiremapVertex* AddVertex(int32_t Index, FVector& VertexPosition);                                                 // [0x165ff60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.WiremapActor.AddEdge
	// class UWiremapEdge* AddEdge(int32_t InEdgeId, FName& InFactory, int32_t InVertex0, int32_t InVertex1);                   // [0x165f460] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.WiremapEdge
/// Size: 0x0028 (0x000028 - 0x000050)
class UWiremapEdge : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   EdgeID                                                      OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(class UWiremapVertex*)                     Vertex0                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UWiremapVertex*)                     Vertex1                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UWiremapEdgeAnim*)                   Animation                                                   OFFSET(get<T>, {0x40, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.WiremapEdge.UpdateMesh
	// void UpdateMesh(class UWiremapMeshBuilder* MeshBuilder);                                                                 // [0x9cb500] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.WiremapEdge.StopAnimation
	// void StopAnimation();                                                                                                    // [0x1661f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WiremapEdge.SetTickEnabled
	// void SetTickEnabled(bool bEnabled);                                                                                      // [0x1661dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WiremapEdge.PlayAnimation
	// class UWiremapEdgeAnim* PlayAnimation(class UClass* AnimClass);                                                          // [0x1660bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WiremapEdge.OnTick
	// void OnTick(float DeltaTime);                                                                                            // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.WiremapEdge.OnInitialize
	// void OnInitialize();                                                                                                     // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/GameUE.WiremapEdge.InvalidateWiremap
	// void InvalidateWiremap();                                                                                                // [0x1660ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WiremapEdge.AddQuad_Truncate
	// void AddQuad_Truncate(class UWiremapMeshBuilder* MeshBuilder, int32_t Layer, FVector& Point0, FVector& Point1, FColor& Color, float Width, float Value, class UMaterialInterface* Material); // [0x165fcd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.WiremapEdge.AddQuad_Stretch
	// void AddQuad_Stretch(class UWiremapMeshBuilder* MeshBuilder, int32_t Layer, FVector& Point0, FVector& Point1, FColor& Color, float Width, float Value, class UMaterialInterface* Material); // [0x165fa40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.GeneralWiremapEdge
/// Size: 0x0020 (0x000050 - 0x000070)
class UGeneralWiremapEdge : public UWiremapEdge
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     EdgeWidth                                                   OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FLinearColor)                              TintColor                                                   OFFSET(getStruct<T>, {0x54, 16, 0, 0})
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/GameUE.MultiWiremapEdge
/// Size: 0x0070 (0x000050 - 0x0000C0)
class UMultiWiremapEdge : public UWiremapEdge
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(int32_t)                                   NumLayers                                                   OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	CMember(TArray<float>)                             Widths                                                      OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FLinearColor>)                      Colors                                                      OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         Materials                                                   OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<float>)                             Values                                                      OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<bool>)                              VisibleForLayers                                            OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(float)                                     Opacity                                                     OFFSET(get<float>, {0xA8, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0xAC, 16, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0xBC, 1, 0, 0})


	/// Functions
	// Function /Script/GameUE.MultiWiremapEdge.SetVisible
	// void SetVisible(bool bInVisible);                                                                                        // [0x1661e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiWiremapEdge.SetOpacity
	// void SetOpacity(float InOpacity);                                                                                        // [0x1661cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiWiremapEdge.SetLinkageValue
	// void SetLinkageValue(int32_t InLayer, class UWiremapVertex* InBaseVert, float InValue);                                  // [0x1661a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiWiremapEdge.SetLayerVisible
	// void SetLayerVisible(int32_t InLayer, bool bInVisible);                                                                  // [0x16619c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiWiremapEdge.SetLayerValue
	// void SetLayerValue(int32_t InLayer, float Value);                                                                        // [0x16618f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiWiremapEdge.SetLayerOpacity
	// void SetLayerOpacity(int32_t InLayer, float InOpacity);                                                                  // [0x16617a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.MultiWiremapEdge.SetLayerColor
	// void SetLayerColor(int32_t InLayer, FLinearColor InColor);                                                               // [0x16616d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.MultiWiremapEdge.SetColor
	// void SetColor(FLinearColor InColor);                                                                                     // [0x1661540] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.WiremapEdgeFactory
/// Size: 0x0008 (0x000028 - 0x000030)
class UWiremapEdgeFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UClass*)                             WiremapEdgeClass                                            OFFSET(get<T>, {0x28, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.WiremapEdgeFactory.CreateEdgeObject
	// class UWiremapEdge* CreateEdgeObject(class UObject* Outer, int32_t InEdgeId, class UWiremapVertex* Vertex0, class UWiremapVertex* Vertex1); // [0x1660340] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.WiremapEdgeAnim
/// Size: 0x0018 (0x000028 - 0x000040)
class UWiremapEdgeAnim : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMulticastInlineDelegate)                  OnAnimFinished                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/GameUE.WiremapEdgeAnim.OnCleanup
	// void OnCleanup();                                                                                                        // [0x89d6b0] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameUE.WiremapEdgeAnim.OnAnimationEvent__DelegateSignature
	// void OnAnimationEvent__DelegateSignature();                                                                              // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GameUE.WiremapEdgeAnim.MarkAnimComplete
	// void MarkAnimComplete();                                                                                                 // [0x1660b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WiremapEdgeAnim.Evaluate
	// void Evaluate(class UWiremapEdge* InEdge, float InTimepass);                                                             // [0x1660570] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameUE.WiremapMeshBuilder
/// Size: 0x0038 (0x000028 - 0x000060)
class UWiremapMeshBuilder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:


	/// Functions
	// Function /Script/GameUE.WiremapMeshBuilder.CreateLayerCollision
	// void CreateLayerCollision(int32_t Layer, bool bCreate);                                                                  // [0x16604a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WiremapMeshBuilder.AddQuad
	// void AddQuad(int32_t Layer, TArray<FVector>& Vertics, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FVector>& Normals, class UMaterialInterface* Material); // [0x165f7d0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameUE.WiremapRenderComponent
/// Size: 0x0018 (0x0004F8 - 0x000510)
class UWiremapRenderComponent : public UProceduralMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	DMember(float)                                     LayerPadding                                                OFFSET(get<float>, {0x4F8, 4, 0, 0})
	SMember(FVector)                                   NormalVector                                                OFFSET(getStruct<T>, {0x4FC, 12, 0, 0})
	CMember(class UWiremapMeshBuilder*)                MeshBuilder                                                 OFFSET(get<T>, {0x508, 8, 0, 0})


	/// Functions
	// Function /Script/GameUE.WiremapRenderComponent.UpdateWiremapMesh
	// void UpdateWiremapMesh(TArray<UWiremapEdge*>& WiremapEdges);                                                             // [0x16620e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WiremapRenderComponent.SetNormalVector
	// void SetNormalVector(FVector InNormalVec);                                                                               // [0x1661c20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.WiremapRenderComponent.SetLayerPadding
	// void SetLayerPadding(float InPadding);                                                                                   // [0x1661870] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.WiremapVertex
/// Size: 0x0060 (0x000028 - 0x000088)
class UWiremapVertex : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(int32_t)                                   VertexID                                                    OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	CMember(TMap<int32_t, class UWiremapEdge*>)        WireEdges                                                   OFFSET(get<T>, {0x38, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.WiremapVertex.SetPosition
	// void SetPosition(FVector& InPosition);                                                                                   // [0x1661d30] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.WiremapVertex.GetPosition
	// FVector GetPosition();                                                                                                   // [0x1660960] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.WiremapVertex.GetAllEdge
	// void GetAllEdge(TArray<UWiremapEdge*>& OutEdges);                                                                        // [0x1660710] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WiremapVertex.FindLinkEdge
	// class UWiremapEdge* FindLinkEdge(int32_t VertexID);                                                                      // [0x1660650] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.WorldTraceComponent
/// Size: 0x0078 (0x0001F8 - 0x000270)
class UWorldTraceComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(class UClass*)                             OnScreenWidget                                              OFFSET(get<T>, {0x1F8, 8, 0, 0})
	SMember(FVector2D)                                 OnScreenPivot                                               OFFSET(getStruct<T>, {0x200, 8, 0, 0})
	SMember(FVector2D)                                 OnScreenSize                                                OFFSET(getStruct<T>, {0x208, 8, 0, 0})
	DMember(bool)                                      bOffScreenDisplay                                           OFFSET(get<bool>, {0x210, 1, 0, 0})
	SMember(FVector)                                   AnchorWorldOffset                                           OFFSET(getStruct<T>, {0x214, 12, 0, 0})
	CMember(class UClass*)                             OffScreenWidget                                             OFFSET(get<T>, {0x220, 8, 0, 0})
	SMember(FVector2D)                                 OffScreenPivot                                              OFFSET(getStruct<T>, {0x228, 8, 0, 0})
	SMember(FVector2D)                                 OffScreenSize                                               OFFSET(getStruct<T>, {0x230, 8, 0, 0})
	CMember(EOffScreenLayoutMethod)                    OffScreenLayoutMethod                                       OFFSET(get<T>, {0x238, 1, 0, 0})
	SMember(FVector2D)                                 Anchor                                                      OFFSET(getStruct<T>, {0x23C, 8, 0, 0})
	SMember(FVector2D)                                 Position                                                    OFFSET(getStruct<T>, {0x244, 8, 0, 0})
	SMember(FVector2D)                                 Extend                                                      OFFSET(getStruct<T>, {0x24C, 8, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x254, 4, 0, 0})
	SMember(FMargin)                                   Border                                                      OFFSET(getStruct<T>, {0x258, 16, 0, 0})
};

/// Struct /Script/GameUE.ComponentWidget
/// Size: 0x0038 (0x000000 - 0x000038)
class FComponentWidget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UWorldTraceComponent*)               Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   WorldLocation                                               OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector2D)                                 UniformCoord                                                OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	CMember(class UUserWidget*)                        OnScreenWidget                                              OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class UUserWidget*)                        OffScreenWidget                                             OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/GameUE.WorldTraceWidget
/// Size: 0x00C8 (0x0002C0 - 0x000388)
class UWorldTraceWidget : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(class UCanvasPanel*)                       ContainerCanvas                                             OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(TMap<class UWorldTraceComponent*, FComponentWidget>) AllComponents                                     OFFSET(get<T>, {0x2C8, 80, 0, 0})
	CMember(TMap<FName, class UKV_WidgetPool*>)        WidgetPools                                                 OFFSET(get<T>, {0x318, 80, 0, 0})
	CMember(TArray<class UUserWidget*>)                WidgetRemains                                               OFFSET(get<T>, {0x368, 16, 0, 0})
	DMember(float)                                     ResolutionPercentageX                                       OFFSET(get<float>, {0x378, 4, 0, 0})
	DMember(float)                                     ResolutionPercentageY                                       OFFSET(get<float>, {0x37C, 4, 0, 0})
	DMember(float)                                     OvalScreenX                                                 OFFSET(get<float>, {0x380, 4, 0, 0})
	DMember(float)                                     OvalScreenY                                                 OFFSET(get<float>, {0x384, 4, 0, 0})


	/// Functions
	// Function /Script/GameUE.WorldTraceWidget.UpdateAllComponents
	// void UpdateAllComponents(FGeometry& Geometry);                                                                           // [0x1662000] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WorldTraceWidget.SetContentVisibility
	// void SetContentVisibility(ESlateVisibility NewVisibility);                                                               // [0x16615d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WorldTraceWidget.ReplaceComponents
	// void ReplaceComponents(TArray<UWorldTraceComponent*>& Old, TArray<UWorldTraceComponent*>& New);                          // [0x1661400] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WorldTraceWidget.RemoveComponent
	// void RemoveComponent(class UWorldTraceComponent* Component);                                                             // [0x1661210] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WorldTraceWidget.ReleaseWidget
	// void ReleaseWidget(class UUserWidget* Widget);                                                                           // [0x1661180] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WorldTraceWidget.OnComponentUpdate
	// void OnComponentUpdate(class USceneComponent* Component, FVector2D& ScreenLoc, bool bForward);                           // [0x198a600] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/GameUE.WorldTraceWidget.OnComponentRemove
	// void OnComponentRemove(class USceneComponent* Component);                                                                // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Script/GameUE.WorldTraceWidget.OnComponentAdd
	// void OnComponentAdd(class USceneComponent* Component, FVector2D& ScreenLoc, bool bForward);                              // [0x198a600] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/GameUE.WorldTraceWidget.GetComponentByWidget
	// class UWorldTraceComponent* GetComponentByWidget(class UUserWidget* Widget);                                             // [0x16607f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WorldTraceWidget.CleanupWidgets
	// void CleanupWidgets();                                                                                                   // [0x1660300] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WorldTraceWidget.AllocateWidget
	// class UUserWidget* AllocateWidget(class UClass* Class);                                                                  // [0x16601e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WorldTraceWidget.AddComponent
	// void AddComponent(class UWorldTraceComponent* Component);                                                                // [0x165f3d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameUE.WwiseAudioLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWwiseAudioLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.WwiseAudioLibrary.StopBGM
	// void StopBGM(int32_t Channel, bool bRemain);                                                                             // [0x1661f40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.StopAllRemains
	// void StopAllRemains();                                                                                                   // [0x1661f00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.StopAllBGM
	// void StopAllBGM();                                                                                                       // [0x1661ee0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.SetMediaVolume
	// void SetMediaVolume(float Volume);                                                                                       // [0x1661ba0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.SetCurrentGender
	// void SetCurrentGender(int32_t Gender);                                                                                   // [0x1661650] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.ResumeBGM
	// void ResumeBGM();                                                                                                        // [0x1661520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.RemoveMusicModifier
	// void RemoveMusicModifier(class UObject* Object, FName& StateName);                                                       // [0x1661330] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.RemoveIndoorVolume
	// void RemoveIndoorVolume(FGuid& Guid);                                                                                    // [0x16612a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.PostSharedEvent2D
	// void PostSharedEvent2D(FName& SharedName);                                                                               // [0x1661100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.PlayMediaSound
	// void PlayMediaSound(class UMediaPlayer* Player, bool bMuteWwise, float Volume);                                          // [0x1660fe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.PlayMediaEvent
	// void PlayMediaEvent(class UAkAudioEvent* AkEvent, bool bShouldPauseBGM, bool bShouldMuteBGM);                            // [0x1660ed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.PlayBGMEvent
	// void PlayBGMEvent(int32_t Channel, class UAkAudioEvent* Event, class UAkAudioEvent* StopEvent, float Deferred);          // [0x1660d80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.PlayBGM
	// void PlayBGM(int32_t Channel, FName& StateName, float Deferred);                                                         // [0x1660c60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.PauseBGM
	// void PauseBGM();                                                                                                         // [0x1660ba0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.MuteBGM
	// void MuteBGM(bool bMute);                                                                                                // [0x1660b20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.GetAudioManager
	// class AWwiseAudioManager* GetAudioManager();                                                                             // [0x16607c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.FlushBGMUpdate
	// void FlushBGMUpdate();                                                                                                   // [0x16606f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.ApplyCurrentGender
	// void ApplyCurrentGender(class AActor* TargetActor);                                                                      // [0x1660280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.AddMusicModifier
	// void AddMusicModifier(class UObject* Object, FName& StateName);                                                          // [0x165f700] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioLibrary.AddIndoorVolume
	// void AddIndoorVolume(FGuid& Guid, bool bIndoor, int32_t Priority);                                                       // [0x165f5e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/GameUE.WwiseMediaState
/// Size: 0x0010 (0x000000 - 0x000010)
class FWwiseMediaState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UAkAudioEvent*)                      MediaEvent                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   PlayingID                                                   OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bIsMuteBGM                                                  OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bIsPauseBGM                                                 OFFSET(get<bool>, {0xD, 1, 0, 0})
	DMember(bool)                                      bShouldMuteBGM                                              OFFSET(get<bool>, {0xE, 1, 0, 0})
	DMember(bool)                                      bShouldPauseBGM                                             OFFSET(get<bool>, {0xF, 1, 0, 0})
};

/// Struct /Script/GameUE.WwiseBGMState
/// Size: 0x0028 (0x000000 - 0x000028)
class FWwiseBGMState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   LayerId                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     StateName                                                   OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(float)                                     Deferred                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bRemain                                                     OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(class UAkAudioEvent*)                      AkPlayEvent                                                 OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class UAkAudioEvent*)                      AkStopEvent                                                 OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/GameUE.AudioStateStruct
/// Size: 0x0020 (0x000008 - 0x000028)
class FAudioStateStruct : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     StateName                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Category                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(TArray<FName>)                             States                                                      OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/GameUE.MusicModifyState
/// Size: 0x0010 (0x000000 - 0x000010)
class FMusicModifyState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UObject*)                            Object                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Modifier                                                    OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Class /Script/GameUE.WwiseAudioManager
/// Size: 0x0208 (0x000220 - 0x000428)
class AWwiseAudioManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	CMember(class UAkAudioEvent*)                      AkBGMEvent                                                  OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UAkAudioEvent*)                      AkStopBGMEvent                                              OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class UEnum*)                              LayerDefines                                                OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class UDataTable*)                         AudioStates                                                 OFFSET(get<T>, {0x238, 8, 0, 0})
	SMember(FName)                                     IndoorState                                                 OFFSET(getStruct<T>, {0x240, 8, 0, 0})
	SMember(FName)                                     OutdoorState                                                OFFSET(getStruct<T>, {0x248, 8, 0, 0})
	SMember(FName)                                     NonModifyBGM                                                OFFSET(getStruct<T>, {0x250, 8, 0, 0})
	CMember(TArray<class UAkAudioEvent*>)              SharedSoundEffect                                           OFFSET(get<T>, {0x258, 16, 0, 0})
	CMember(class UAkComponent*)                       AkMediaListener                                             OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(class UMediaSoundComponent*)               MediaSound                                                  OFFSET(get<T>, {0x270, 8, 0, 0})
	SMember(FWwiseMediaState)                          MediaState                                                  OFFSET(getStruct<T>, {0x278, 16, 0, 0})
	CMember(TArray<FWwiseBGMState>)                    LayeredBGMState                                             OFFSET(get<T>, {0x288, 16, 0, 0})
	CMember(class UAkAudioEvent*)                      CurrentBGMEvent                                             OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(TMap<FName, FAudioStateStruct>)            StateStruct                                                 OFFSET(get<T>, {0x2A0, 80, 0, 0})
	CMember(TMap<FGuid, int32_t>)                      IndoorRooms                                                 OFFSET(get<T>, {0x2F0, 80, 0, 0})
	SMember(FName)                                     IndoorRoomState                                             OFFSET(getStruct<T>, {0x340, 8, 0, 0})
	CMember(TArray<FMusicModifyState>)                 MusicModifiers                                              OFFSET(get<T>, {0x348, 16, 0, 0})
	SMember(FName)                                     MusicModifier                                               OFFSET(getStruct<T>, {0x358, 8, 0, 0})
	CMember(class UAkAudioEvent*)                      CurrStopBGMEvent                                            OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(TMap<FName, class UAkAudioEvent*>)         SharedSoundEventMap                                         OFFSET(get<T>, {0x368, 80, 0, 0})


	/// Functions
	// Function /Script/GameUE.WwiseAudioManager.UpdateState
	// void UpdateState(FName& StateName);                                                                                      // [0x1664460] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.StopBGM
	// void StopBGM(int32_t Channel, bool bRemains);                                                                            // [0x1664390] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.StopAllRemains
	// void StopAllRemains();                                                                                                   // [0x1664370] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.StopAllBGM
	// void StopAllBGM();                                                                                                       // [0x1664350] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.StopActorEventByPlayingID
	// void StopActorEventByPlayingID(int32_t PlayingID, class UObject* Parent);                                                // [0x1664280] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.SetMediaVolume
	// void SetMediaVolume(float Volume);                                                                                       // [0x1664200] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.SetCurrentGender
	// void SetCurrentGender(int32_t Gender);                                                                                   // [0x1664170] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.SeekEventByPlayingID
	// void SeekEventByPlayingID(class UAkAudioEvent* AkEvent, int32_t PlayingID, float startTimeInSeconds);                    // [0x1664050] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.ResumeBGM
	// void ResumeBGM();                                                                                                        // [0x1664030] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.RemoveMusicModifier
	// void RemoveMusicModifier(class UObject* Object, FName& StateName);                                                       // [0x1663f50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.RemoveIndoorVolume
	// void RemoveIndoorVolume(FGuid& Guid);                                                                                    // [0x1663eb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.PostSharedEvent2D
	// int32_t PostSharedEvent2D(FName& EventName);                                                                             // [0x1663e10] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.PostEventFollowActorOrComponent
	// int32_t PostEventFollowActorOrComponent(class UAkAudioEvent* AkEvent, class UObject* Parent, int32_t CallbackMask, FDelegateProperty& PostEventCallback, bool bStopWhenAttachedToDestroyed); // [0x1663c50] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.PostEventAtLocation
	// int32_t PostEventAtLocation(class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, class UObject* WorldContextObject); // [0x1663ac0] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.PostEvent2D
	// int32_t PostEvent2D(class UAkAudioEvent* AkEvent, int32_t CallbackMask, FDelegateProperty& PostEventCallback);           // [0x16637d0] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.PostEvent
	// int32_t PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, bool bStopWhenAttachedToDestroyed); // [0x1663900] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.PostAkEvent
	// int32_t PostAkEvent(class UAkGameObject* AkObj, class UAkAudioEvent* AkEvent, int32_t CallbackMask, FDelegateProperty& PostEventCallback); // [0x1663640] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.PlayMediaSound
	// void PlayMediaSound(class UMediaPlayer* Player, bool bMuteWwise, float Volume);                                          // [0x1663520] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.PlayMediaEvent
	// void PlayMediaEvent(class UAkAudioEvent* AkEvent, bool bShouldPauseBGM, bool bShouldMuteBGM);                            // [0x1663410] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.PlayBGMEvent
	// void PlayBGMEvent(int32_t Channel, class UAkAudioEvent* Event, class UAkAudioEvent* StopEvent, float Deferred);          // [0x16632b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.PlayBGM
	// void PlayBGM(int32_t Channel, FName& StateName, float Deferred);                                                         // [0x1663190] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.PauseBGM
	// void PauseBGM();                                                                                                         // [0x1663170] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.OnMediaCallback
	// void OnMediaCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);                                 // [0x1662f60] Final|Native|Public  
	// Function /Script/GameUE.WwiseAudioManager.MuteBGM
	// void MuteBGM(bool bMute);                                                                                                // [0x1662ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.FlushBGMUpdate
	// void FlushBGMUpdate();                                                                                                   // [0x1662eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.ApplyCurrentGender
	// void ApplyCurrentGender(class AActor* Actor);                                                                            // [0x1662e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.AddMusicModifier
	// void AddMusicModifier(class UObject* Object, FName& StateName);                                                          // [0x1662d40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameUE.WwiseAudioManager.AddIndoorVolume
	// void AddIndoorVolume(FGuid& Guid, bool bIndoor, int32_t Priority);                                                       // [0x1662c10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameUE.XDSilentLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UXDSilentLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameUE.XDSilentLibrary.ParseSilentHtmlText
	// FString ParseSilentHtmlText(FString HtmlText);                                                                           // [0x1663030] Final|Native|Static|Private|BlueprintCallable 
};

/// Struct /Script/GameUE.OneVetoStruct
/// Size: 0x0018 (0x000008 - 0x000020)
class FOneVetoStruct : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     RuleName                                                    OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(TArray<FName>)                             VetoTopics                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameUE.AutomationNotify
/// Size: 0x000C (0x000000 - 0x00000C)
class FAutomationNotify : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/GameUE.BattleSequenceConfig
/// Size: 0x0048 (0x000000 - 0x000048)
class FBattleSequenceConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/GameUE.BattleSequenceMasterData
/// Size: 0x0018 (0x000000 - 0x000018)
class FBattleSequenceMasterData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FVector>)                           Points                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     ScaleExtra                                                  OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/GameUE.BattleSequenceInstanceData
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FBattleSequenceInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TMap<FString, FBattleSequenceMasterData>)  Masters                                                     OFFSET(get<T>, {0x0, 80, 0, 0})
	DMember(float)                                     BaseRotate                                                  OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     ExtraRotate                                                 OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     ExtraScale                                                  OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FVector)                                   CasterStartPosition                                         OFFSET(getStruct<T>, {0x5C, 12, 0, 0})
	SMember(FVector)                                   CasterForwardVector                                         OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	SMember(FVector)                                   VictimStartPosition                                         OFFSET(getStruct<T>, {0x74, 12, 0, 0})
	SMember(FRotator)                                  VictimStartRotation                                         OFFSET(getStruct<T>, {0x80, 12, 0, 0})
	DMember(float)                                     TargetZ                                                     OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(bool)                                      IsFriendSide                                                OFFSET(get<bool>, {0x90, 1, 0, 0})
	DMember(bool)                                      IsAOE                                                       OFFSET(get<bool>, {0x91, 1, 0, 0})
	DMember(bool)                                      bAutoMirrorCamera                                           OFFSET(get<bool>, {0x92, 1, 0, 0})
	CMember(class AActor*)                             EnvRoot                                                     OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(class AActor*)                             BattleCamera                                                OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UMaterialInstance*)                  BodyMaterial                                                OFFSET(get<T>, {0xA8, 8, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0xB0, 4, 0, 0})
};

/// Struct /Script/GameUE.CameraDetail
/// Size: 0x05F0 (0x000000 - 0x0005F0)
class FCameraDetail : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	SMember(FMinimalViewInfo)                          ViewInfo                                                    OFFSET(getStruct<T>, {0x0, 1504, 0, 0})
	DMember(float)                                     MinAdaptRatio                                               OFFSET(get<float>, {0x5E0, 4, 0, 0})
	DMember(float)                                     MaxAdaptRatio                                               OFFSET(get<float>, {0x5E4, 4, 0, 0})
	DMember(float)                                     VFOVWeight                                                  OFFSET(get<float>, {0x5E8, 4, 0, 0})
};

/// Struct /Script/GameUE.LineViewInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FLineViewInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Start                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   BeginIndex                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   EndIndex                                                    OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/GameUE.InputCastDataTable
/// Size: 0x0038 (0x000008 - 0x000040)
class FInputCastDataTable : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FKey)                                      ActionKey                                                   OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(EInputActionName)                          ActionName                                                  OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FString)                                   Icon                                                        OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(EGamePadModel)                             GamePadModel                                                OFFSET(get<T>, {0x38, 1, 0, 0})
};

/// Struct /Script/GameUE.GameTriggerRequirementStruct
/// Size: 0x0048 (0x000008 - 0x000050)
class FGameTriggerRequirementStruct : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTag)                              ContextTag                                                  OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     Dependencies                                                OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FGameplayTagContainer)                     Excludes                                                    OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/GameUE.LevelStruct
/// Size: 0x0060 (0x000008 - 0x000068)
class FLevelStruct : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FName)                                     LevelName                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FString)                                   LevelPackage                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(ELevelType)                                LevelType                                                   OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FName)                                     Navigation                                                  OFFSET(getStruct<T>, {0x24, 8, 0, 0})
	CMember(ELevelNavMode)                             NavigationMode                                              OFFSET(get<T>, {0x2C, 1, 0, 0})
	DMember(int32_t)                                   LightChannels                                               OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bLightScenario                                              OFFSET(get<bool>, {0x34, 1, 0, 0})
	CMember(TArray<FName>)                             Prepose                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(int32_t)                                   RunModel                                                    OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   Gender                                                      OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(bool)                                      bGenerate                                                   OFFSET(get<bool>, {0x50, 1, 0, 0})
	SMember(FString)                                   SourceStatement                                             OFFSET(getStruct<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/GameUE.FogDrawCommand
/// Size: 0x0010 (0x000000 - 0x000010)
class FFogDrawCommand : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameUE.SubtitleRow
/// Size: 0x0038 (0x000008 - 0x000040)
class FSubtitleRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   StartTime                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   EndTime                                                     OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/GameUE.RegionDefination
/// Size: 0x0058 (0x000008 - 0x000060)
class FRegionDefination : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   RegionId                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FLinearColor)                              RegionColor                                                 OFFSET(getStruct<T>, {0xC, 16, 0, 0})
	SMember(FString)                                   RegionAbbr                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FText)                                     regionName                                                  OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(int32_t)                                   OrderValue                                                  OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	SMember(FString)                                   ServerCode                                                  OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/GameUE.CameraSkinAsset
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FCameraSkinAsset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FTransform)                                CstTransform                                                OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FTransform)                                AgtTransform                                                OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FTransform)                                CameraTransform                                             OFFSET(getStruct<T>, {0x60, 48, 0, 0})
	DMember(float)                                     CameraFOV                                                   OFFSET(get<float>, {0x90, 4, 0, 0})
};

/// Struct /Script/GameUE.SlotSlice
/// Size: 0x0010 (0x000000 - 0x000010)
class FSlotSlice : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameUE.StageStruct
/// Size: 0x0058 (0x000008 - 0x000060)
class FStageStruct : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   StageId                                                     OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   Subworld                                                    OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	CMember(TArray<int32_t>)                           UIList                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   Actor                                                       OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   LoadingActor                                                OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(int32_t)                                   LoadingLateClose                                            OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(bool)                                      bGenerate                                                   OFFSET(get<bool>, {0x5C, 1, 0, 0})
};

/// Struct /Script/GameUE.StoryAloneTableStruct
/// Size: 0x0050 (0x000008 - 0x000058)
class FStoryAloneTableStruct : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   DesireSubLevel                                              OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TWeakObjectPtr<class UStoryline*>)         StoryToPlay                                                 OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FText)                                     EnterLoadingText                                            OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/GameUE.StorySoundInjectTableStruct
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FStorySoundInjectTableStruct : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(int32_t)                                   StorylineId                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FString)                                   StorylineName                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(EStorySoundTriggerType)                    TriggerType                                                 OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(int32_t)                                   DialogConfigId                                              OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	CMember(TWeakObjectPtr<class ULevelSequence*>)     SequenceAsset                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(EStorySoundInjectType)                     InjectType                                                  OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TArray<FString>)                           BGMStates                                                   OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FString>)                           BGMLayers                                                   OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TWeakObjectPtr<class UAkAudioEvent*>)      SoundEffectEvent                                            OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Struct /Script/GameUE.InjectSoundInfo
/// Size: 0x0058 (0x000000 - 0x000058)
class FInjectSoundInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(EStorySoundInjectType)                     InjectType                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FString>)                           BGMStates                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FString>)                           BGMLayers                                                   OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TWeakObjectPtr<class UAkAudioEvent*>)      SoundEffectEvent                                            OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     RowName                                                     OFFSET(getStruct<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/GameUE.WeightedReplaceText
/// Size: 0x0020 (0x000000 - 0x000020)
class FWeightedReplaceText : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Text                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     Placeholder                                                 OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/GameUE.CharacterWeight
/// Size: 0x0014 (0x000000 - 0x000014)
class FCharacterWeight : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FInt32Range)                               Range                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/GameUE.StringCheck
/// Size: 0x0030 (0x000000 - 0x000030)
class FStringCheck : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FText)                                     Message                                                     OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(bool)                                      bSucceed                                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/GameUE.SubworldStruct
/// Size: 0x0038 (0x000008 - 0x000040)
class FSubworldStruct : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   SubworldId                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FName)                                     World                                                       OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	CMember(TArray<FString>)                           LevelList                                                   OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   CustomDatas                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bGenerate                                                   OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/GameUE.TextbookStruct
/// Size: 0x0058 (0x000008 - 0x000060)
class FTextbookStruct : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     PackName                                                    OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FText)                                     Body1                                                       OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     Body2                                                       OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/GameUE.UIStruct
/// Size: 0x0088 (0x000008 - 0x000090)
class FUIStruct : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(int32_t)                                   WidgetId                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   WidgetStyle                                                 OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Coexist                                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   SubworldId                                                  OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   CleanModeOp                                                 OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(EUIRenderOpt)                              RenderOpt                                                   OFFSET(get<T>, {0x1C, 1, 0, 0})
	CMember(EUIMemoryOpt)                              MemoryOpt                                                   OFFSET(get<T>, {0x1D, 1, 0, 0})
	SMember(FString)                                   Widgets                                                     OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TArray<FName>)                             SharedWidgets                                               OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   ScriptPath                                                  OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   JoystickStyle                                               OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FName)                                     PerfTag                                                     OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             TransitionWidgetClass                                       OFFSET(get<T>, {0x68, 40, 0, 0})
};

/// Enum /Script/GameUE.EStageRes
/// Size: 0x03
enum class EStageRes : uint8_t
{
	EStageRes__Succeed                                                               = 0,
	EStageRes__Failed                                                                = 1,
	EStageRes__Canceled                                                              = 2
};

/// Enum /Script/GameUE.EUIStyle
/// Size: 0x05
enum class EUIStyle : uint8_t
{
	EUIStyle__Common                                                                 = 0,
	EUIStyle__FullScreen                                                             = 1,
	EUIStyle__Complex                                                                = 2,
	EUIStyle__Overlay                                                                = 3,
	EUIStyle__None                                                                   = 4
};

/// Enum /Script/GameUE.ESceneBlockType
/// Size: 0x03
enum class ESceneBlockType : uint8_t
{
	ESceneBlockType__NeverBlock                                                      = 0,
	ESceneBlockType__Translucent                                                     = 1,
	ESceneBlockType__ShouldBlock                                                     = 2
};

/// Enum /Script/GameUE.ESubworldLevelControl
/// Size: 0x04
enum class ESubworldLevelControl : uint8_t
{
	ESubworldLevelControl__Inherit                                                   = 0,
	ESubworldLevelControl__Unload                                                    = 1,
	ESubworldLevelControl__Invisible                                                 = 2,
	ESubworldLevelControl__Visible                                                   = 3
};

/// Enum /Script/GameUE.EAnimEvent
/// Size: 0x28
enum class EAnimEvent : uint8_t
{
	EAnimEvent__Forward                                                              = 0,
	EAnimEvent__ForwardEnd                                                           = 1,
	EAnimEvent__Back                                                                 = 2,
	EAnimEvent__BackEnd                                                              = 3,
	EAnimEvent__Damage                                                               = 4,
	EAnimEvent__Heal                                                                 = 5,
	EAnimEvent__Buff                                                                 = 6,
	EAnimEvent__Shake                                                                = 7,
	EAnimEvent__Throw                                                                = 8,
	EAnimEvent__Fx                                                                   = 9,
	EAnimEvent__Seq                                                                  = 10,
	EAnimEvent__Death                                                                = 11,
	EAnimEvent__Up                                                                   = 12,
	EAnimEvent__Fall                                                                 = 13,
	EAnimEvent__AgentRise                                                            = 14,
	EAnimEvent__AgentFall                                                            = 15,
	EAnimEvent__IdleSway                                                             = 16,
	EAnimEvent_____EnvEvent___                                                       = 17,
	EAnimEvent__TargetNum                                                            = 18,
	EAnimEvent__BuffEnd                                                              = 19,
	EAnimEvent__Shield                                                               = 20,
	EAnimEvent__SkillReady_CameraShake                                               = 21,
	EAnimEvent__Skill_Fake_Finish                                                    = 22,
	EAnimEvent__HitSlomo                                                             = 23,
	EAnimEvent__RotateBackForRanger                                                  = 24,
	EAnimEvent__AnimStartPosition                                                    = 25,
	EAnimEvent__FakeDamage                                                           = 26,
	EAnimEvent__HurtMaxAmplitude                                                     = 27
};

/// Enum /Script/GameUE.EAnimateSpriteSlot
/// Size: 0x06
enum class EAnimateSpriteSlot : uint8_t
{
	EAnimateSpriteSlot__Default                                                      = 0,
	EAnimateSpriteSlot__AnimSequence                                                 = 1,
	EAnimateSpriteSlot__Scene                                                        = 2,
	EAnimateSpriteSlot__Storyline                                                    = 3,
	EAnimateSpriteSlot__Sequence                                                     = 4,
	EAnimateSpriteSlot__Max                                                          = 5
};

/// Enum /Script/GameUE.EHurtAnimType
/// Size: 0x04
enum class EHurtAnimType : uint8_t
{
	EHurtAnimType__Hurt1                                                             = 0,
	EHurtAnimType__Hurt2                                                             = 1,
	EHurtAnimType__NoHurt                                                            = 2,
	EHurtAnimType__Random                                                            = 3
};

/// Enum /Script/GameUE.EBattleRelativeTransformSpace
/// Size: 0x02
enum class EBattleRelativeTransformSpace : uint8_t
{
	EBattleRelativeTransformSpace__RTS_World                                         = 0,
	EBattleRelativeTransformSpace__RTS_BattleLocal                                   = 1
};

/// Enum /Script/GameUE.EGamePlatformType
/// Size: 0x05
enum class EGamePlatformType : uint8_t
{
	EGamePlatformType__Windows                                                       = 0,
	EGamePlatformType__Mac                                                           = 1,
	EGamePlatformType__Android                                                       = 2,
	EGamePlatformType__IOS                                                           = 3,
	EGamePlatformType__Unknown                                                       = 4
};

/// Enum /Script/GameUE.EGameBuildConfigure
/// Size: 0x04
enum class EGameBuildConfigure : uint8_t
{
	EGameBuildConfigure__Debug                                                       = 0,
	EGameBuildConfigure__Development                                                 = 1,
	EGameBuildConfigure__Test                                                        = 2,
	EGameBuildConfigure__Shipping                                                    = 3
};

/// Enum /Script/GameUE.ECameraAdaptType
/// Size: 0x04
enum class ECameraAdaptType : uint32_t
{
	ECameraAdaptType__General                                                        = 0,
	ECameraAdaptType__Horizontal                                                     = 1,
	ECameraAdaptType__Vertical                                                       = 2,
	ECameraAdaptType__Clipping                                                       = 3
};

/// Enum /Script/GameUE.ECameraPriority
/// Size: 0x03
enum class ECameraPriority : uint8_t
{
	ECameraPriority__Priority_Base                                                   = 0,
	ECameraPriority__Priority_Story                                                  = 1,
	ECameraPriority__Priority_UI                                                     = 10
};

/// Enum /Script/GameUE.EBattleUnitSide
/// Size: 0x03
enum class EBattleUnitSide : uint8_t
{
	EBattleUnitSide__None                                                            = 0,
	EBattleUnitSide__FriendSide                                                      = 1,
	EBattleUnitSide__EnemySide                                                       = 2
};

/// Enum /Script/GameUE.EPullAwayDirection
/// Size: 0x02
enum class EPullAwayDirection : uint32_t
{
	EPullAwayDirection__CameraLocalSpace                                             = 0,
	EPullAwayDirection__BlendByDirectionAlpha                                        = 1
};

/// Enum /Script/GameUE.ECameraLookAtType
/// Size: 0x03
enum class ECameraLookAtType : uint8_t
{
	ECameraLookAtType__None                                                          = 0,
	ECameraLookAtType__LookAtMidPoint                                                = 1,
	ECameraLookAtType__LookAtMidAngle                                                = 2
};

/// Enum /Script/GameUE.EEnterStateResetFlag
/// Size: 0x07
enum class EEnterStateResetFlag : uint8_t
{
	EEnterStateResetFlag__RESET_None                                                 = 0,
	EEnterStateResetFlag__RESET_ActionType                                           = 1,
	EEnterStateResetFlag__RESET_StateType                                            = 2,
	EEnterStateResetFlag__RESET_SkillId                                              = 4,
	EEnterStateResetFlag__RESET_Stage                                                = 8,
	EEnterStateResetFlag__RESET_Branch                                               = 16,
	EEnterStateResetFlag__RESET_Break                                                = 32
};

/// Enum /Script/GameUE.ECompositEventOp
/// Size: 0x05
enum class ECompositEventOp : uint8_t
{
	ECompositEventOp__Op_Base                                                        = 0,
	ECompositEventOp__Op_State                                                       = 1,
	ECompositEventOp__Op_And                                                         = 2,
	ECompositEventOp__Op_Or                                                          = 3,
	ECompositEventOp__Op_Output                                                      = 4
};

/// Enum /Script/GameUE.EInputActionName
/// Size: 0x31
enum class EInputActionName : uint8_t
{
	EInputActionName__MoveForward                                                    = 0,
	EInputActionName__MoveRight                                                      = 1,
	EInputActionName__Scale                                                          = 2,
	EInputActionName__TurnRateRight                                                  = 3,
	EInputActionName__TurnRateUp                                                     = 4,
	EInputActionName__Alt                                                            = 5,
	EInputActionName__MouseRight                                                     = 6,
	EInputActionName__MouseLeftPressed                                               = 7,
	EInputActionName__MouseLeftReleased                                              = 8,
	EInputActionName__MouseX                                                         = 9,
	EInputActionName__MouseY                                                         = 10,
	EInputActionName__GamePadFaceButtonBottom                                        = 11,
	EInputActionName__GamePadFaceButtonRight                                         = 12,
	EInputActionName__GamePadFaceButtonTop                                           = 13,
	EInputActionName__GamePadFaceButtonLeft                                          = 14,
	EInputActionName__GamePadDPadUp                                                  = 15,
	EInputActionName__GamePadDPadRight                                               = 16,
	EInputActionName__GamePadDPadDown                                                = 17,
	EInputActionName__GamePadDPadLeft                                                = 18,
	EInputActionName__GamePadLB                                                      = 19,
	EInputActionName__GamePadRB                                                      = 20,
	EInputActionName__GamePadLT                                                      = 21,
	EInputActionName__GamePadRT                                                      = 22,
	EInputActionName__GamePadLS                                                      = 23,
	EInputActionName__GamePadRS                                                      = 24,
	EInputActionName__GamePadStart                                                   = 25,
	EInputActionName__GamePadSelect                                                  = 26,
	EInputActionName__GamePadX                                                       = 27,
	EInputActionName__GamePadY                                                       = 28,
	EInputActionName__GamePadA                                                       = 29,
	EInputActionName__GamePadB                                                       = 30
};

/// Enum /Script/GameUE.EGamePadModel
/// Size: 0x03
enum class EGamePadModel : uint8_t
{
	EGamePadModel__None                                                              = 0,
	EGamePadModel__XBox                                                              = 1,
	EGamePadModel__PS                                                                = 2
};

/// Enum /Script/GameUE.EInputModel
/// Size: 0x03
enum class EInputModel : uint8_t
{
	EInputModel__TOUCH                                                               = 0,
	EInputModel__KEYBOARD                                                            = 1,
	EInputModel__GAMEPAD                                                             = 2
};

/// Enum /Script/GameUE.EGameCommandType
/// Size: 0x07
enum class EGameCommandType : uint8_t
{
	EGameCommandType__CMD_DialogControl                                              = 0,
	EGameCommandType__CMD_BeginGame                                                  = 1,
	EGameCommandType__CMD_Suspended                                                  = 2,
	EGameCommandType__CMD_Awoken                                                     = 3,
	EGameCommandType__CMD_Register                                                   = 4,
	EGameCommandType__CMD_PlatformLogin                                              = 5,
	EGameCommandType__CMD_Restart                                                    = 6
};

/// Enum /Script/GameUE.EGameplay_RequestState
/// Size: 0x04
enum class EGameplay_RequestState : uint8_t
{
	EGameplay_RequestState__RS_None                                                  = 0,
	EGameplay_RequestState__RS_WaitResponse                                          = 1,
	EGameplay_RequestState__RS_Succeed                                               = 2,
	EGameplay_RequestState__RS_Failed                                                = 3
};

/// Enum /Script/GameUE.EUnitMoveMode
/// Size: 0x03
enum class EUnitMoveMode : uint8_t
{
	EUnitMoveMode__Walk                                                              = 0,
	EUnitMoveMode__AutoMove                                                          = 1,
	EUnitMoveMode__RootMotion                                                        = 2
};

/// Enum /Script/GameUE.EFixedCacheType
/// Size: 0x05
enum class EFixedCacheType : uint8_t
{
	EFixedCacheType__BaseAssets                                                      = 1,
	EFixedCacheType__Scenario                                                        = 2,
	EFixedCacheType__GlobalEnums                                                     = 3,
	EFixedCacheType__FreeTypeBegin                                                   = 50,
	EFixedCacheType__FreeTypeEnd                                                     = 200
};

/// Enum /Script/GameUE.EGameLayer
/// Size: 0x14
enum class EGameLayer : uint8_t
{
	EGameLayer__Layer_World                                                          = 0,
	EGameLayer__Layer_Game                                                           = 1,
	EGameLayer__Layer_Tips                                                           = 2,
	EGameLayer__Layer_Guide                                                          = 3,
	EGameLayer__Layer_GamePopup                                                      = 4,
	EGameLayer__Layer_GlobalEffect                                                   = 5,
	EGameLayer__Layer_GameInputBlock                                                 = 6,
	EGameLayer__Layer_Loader                                                         = 7,
	EGameLayer__Layer_BelowSystem                                                    = 8,
	EGameLayer__Layer_System                                                         = 9,
	EGameLayer__Layer_OverSystem                                                     = 10,
	EGameLayer__Layer_AfkWidget                                                      = 11,
	EGameLayer__Layer_Notice                                                         = 12,
	EGameLayer__Layer_Max                                                            = 13
};

/// Enum /Script/GameUE.ELevelNavMode
/// Size: 0x04
enum class ELevelNavMode : uint8_t
{
	ELevelNavMode__None                                                              = 0,
	ELevelNavMode__Static                                                            = 1,
	ELevelNavMode__DynamicModifiersOnly                                              = 2,
	ELevelNavMode__Dynamic                                                           = 3
};

/// Enum /Script/GameUE.ELevelGender
/// Size: 0x02
enum class ELevelGender : uint8_t
{
	ELevelGender__Female                                                             = 0,
	ELevelGender__Male                                                               = 1
};

/// Enum /Script/GameUE.ERunModel
/// Size: 0x03
enum class ERunModel : uint8_t
{
	ERunModel__Editor                                                                = 0,
	ERunModel__Development                                                           = 1,
	ERunModel__Shipping                                                              = 2
};

/// Enum /Script/GameUE.ELevelType
/// Size: 0x03
enum class ELevelType : uint8_t
{
	ELevelType__Default                                                              = 0,
	ELevelType__Dynamic                                                              = 1,
	ELevelType__DynamicStandalone                                                    = 2
};

/// Enum /Script/GameUE.EPlatformForLua
/// Size: 0x04
enum class EPlatformForLua : uint8_t
{
	EPlatformForLua__PLATFORM_UNDEFINE_LUA                                           = 0,
	EPlatformForLua__PLATFORM_IOS_LUA                                                = 1,
	EPlatformForLua__PLATFORM_ANDROID_LUA                                            = 2,
	EPlatformForLua__PLATFORM_WINDOWS_LUA                                            = 3
};

/// Enum /Script/GameUE.EMechanismTriggerType
/// Size: 0x03
enum class EMechanismTriggerType : uint8_t
{
	EMechanismTriggerType__Direct                                                    = 0,
	EMechanismTriggerType__UI                                                        = 1,
	EMechanismTriggerType__Monster                                                   = 2
};

/// Enum /Script/GameUE.EDungeonUnitGenerateType
/// Size: 0x03
enum class EDungeonUnitGenerateType : uint8_t
{
	EDungeonUnitGenerateType__Default                                                = 0,
	EDungeonUnitGenerateType__Trigger                                                = 1,
	EDungeonUnitGenerateType__AfterBattle                                            = 2
};

/// Enum /Script/GameUE.EMonsterGenerateType
/// Size: 0x03
enum class EMonsterGenerateType : uint8_t
{
	EMonsterGenerateType__Default                                                    = 0,
	EMonsterGenerateType__Trigger                                                    = 1,
	EMonsterGenerateType__PreGenerator                                               = 2
};

/// Enum /Script/GameUE.EMonsterPatrolType
/// Size: 0x02
enum class EMonsterPatrolType : uint8_t
{
	EMonsterPatrolType__Random                                                       = 0,
	EMonsterPatrolType__WayPoints                                                    = 1
};

/// Enum /Script/GameUE.EMapNavPointType
/// Size: 0x06
enum class EMapNavPointType : uint8_t
{
	EMapNavPointType__None                                                           = 0,
	EMapNavPointType__Start                                                          = 1,
	EMapNavPointType__End                                                            = 2,
	EMapNavPointType__Straigtht                                                      = 3,
	EMapNavPointType__Circle                                                         = 4,
	EMapNavPointType__Custom                                                         = 5
};

/// Enum /Script/GameUE.EMarkerType
/// Size: 0x07
enum class EMarkerType : uint8_t
{
	EMarkerType__Default                                                             = 0,
	EMarkerType__Trigger                                                             = 1,
	EMarkerType__Monster                                                             = 2,
	EMarkerType__TaskPointer                                                         = 3,
	EMarkerType__TaskArea                                                            = 4,
	EMarkerType__Interact                                                            = 5,
	EMarkerType__Tower                                                               = 6
};

/// Enum /Script/GameUE.EMovableGeoType
/// Size: 0x02
enum class EMovableGeoType : uint8_t
{
	EMovableGeoType__Spline                                                          = 0,
	EMovableGeoType__Rotate                                                          = 1
};

/// Enum /Script/GameUE.EPlatformLoginType
/// Size: 0x07
enum class EPlatformLoginType : uint8_t
{
	EPlatformLoginType__Taptap                                                       = 0,
	EPlatformLoginType__Google                                                       = 1,
	EPlatformLoginType__Apple                                                        = 2,
	EPlatformLoginType__Phone                                                        = 3,
	EPlatformLoginType__Email                                                        = 4,
	EPlatformLoginType__Guest                                                        = 5,
	EPlatformLoginType__Max                                                          = 6
};

/// Enum /Script/GameUE.EPlatformInterface
/// Size: 0x08
enum class EPlatformInterface : uint8_t
{
	EPlatformInterface__Taptap                                                       = 0,
	EPlatformInterface__Google                                                       = 1,
	EPlatformInterface__Apple                                                        = 2,
	EPlatformInterface__Develop                                                      = 3,
	EPlatformInterface__Phone                                                        = 4,
	EPlatformInterface__Email                                                        = 5,
	EPlatformInterface__Guest                                                        = 6,
	EPlatformInterface__Max                                                          = 7
};

/// Enum /Script/GameUE.EQueryFilterMethod
/// Size: 0x12
enum class EQueryFilterMethod : uint8_t
{
	EQueryFilterMethod__Filter_Less                                                  = 0,
	EQueryFilterMethod__Filter_LessEq                                                = 1,
	EQueryFilterMethod__Filter_Least                                                 = 2,
	EQueryFilterMethod__Filter_Greater                                               = 3,
	EQueryFilterMethod__Filter_GreaterEq                                             = 4,
	EQueryFilterMethod__Filter_Greatest                                              = 5,
	EQueryFilterMethod__Filter_Equal                                                 = 6,
	EQueryFilterMethod__Filter_True                                                  = 7,
	EQueryFilterMethod__Filter_False                                                 = 8,
	EQueryFilterMethod__Filter_AllBit                                                = 9,
	EQueryFilterMethod__Filter_AnyBit                                                = 10,
	EQueryFilterMethod__Filter_NonBit                                                = 11
};

/// Enum /Script/GameUE.EScenarioActionType
/// Size: 0x04
enum class EScenarioActionType : uint8_t
{
	EScenarioActionType__General                                                     = 0,
	EScenarioActionType__Ride                                                        = 1,
	EScenarioActionType__Leap                                                        = 2,
	EScenarioActionType__Crash                                                       = 3
};

/// Enum /Script/GameUE.EObjectFocusType
/// Size: 0x02
enum class EObjectFocusType : uint8_t
{
	EObjectFocusType__Time                                                           = 0,
	EObjectFocusType__Area                                                           = 1
};

/// Enum /Script/GameUE.EArmControlOption
/// Size: 0x09
enum class EArmControlOption : uint8_t
{
	EArmControlOption__ArmPitchAutoRecover                                           = 0,
	EArmControlOption__ArmLengthAutoRecover                                          = 1,
	EArmControlOption__ArmLength                                                     = 2,
	EArmControlOption__ArmYaw                                                        = 3,
	EArmControlOption__ArmPitch                                                      = 4,
	EArmControlOption__ArmSocketOffset                                               = 5,
	EArmControlOption__ArmLocation                                                   = 6,
	EArmControlOption__ArmSlide                                                      = 7,
	EArmControlOption__ArmZoom                                                       = 8
};

/// Enum /Script/GameUE.ESceneBattleResult
/// Size: 0x05
enum class ESceneBattleResult : uint8_t
{
	ESceneBattleResult__Res_None                                                     = 0,
	ESceneBattleResult__Res_Win                                                      = 1,
	ESceneBattleResult__Res_Lose                                                     = 2,
	ESceneBattleResult__Res_Remove                                                   = 3,
	ESceneBattleResult__Res_Failed                                                   = 4
};

/// Enum /Script/GameUE.ESceneTaskType
/// Size: 0x05
enum class ESceneTaskType : uint8_t
{
	ESceneTaskType__TYPE_General                                                     = 0,
	ESceneTaskType__TYPE_Storyline                                                   = 1,
	ESceneTaskType__TYPE_Battle                                                      = 2,
	ESceneTaskType__TYPE_Guide                                                       = 3,
	ESceneTaskType__TYPE_Remote                                                      = 4
};

/// Enum /Script/GameUE.ESignificanceEval
/// Size: 0x02
enum class ESignificanceEval : uint8_t
{
	ESignificanceEval__ByArea                                                        = 0,
	ESignificanceEval__ByDistance                                                    = 1
};

/// Enum /Script/GameUE.ESkinMode
/// Size: 0x06
enum class ESkinMode : uint8_t
{
	ESkinMode__Battle                                                                = 0,
	ESkinMode__BattleShadow                                                          = 1,
	ESkinMode__Preview                                                               = 2,
	ESkinMode__ArenaDeploy                                                           = 3,
	ESkinMode__ClothPreview                                                          = 4,
	ESkinMode__Cloth                                                                 = 5
};

/// Enum /Script/GameUE.EStorySoundInjectType
/// Size: 0x02
enum class EStorySoundInjectType : uint8_t
{
	EStorySoundInjectType__BGM                                                       = 0,
	EStorySoundInjectType__SoundEffect                                               = 1
};

/// Enum /Script/GameUE.EStorySoundTriggerType
/// Size: 0x04
enum class EStorySoundTriggerType : uint8_t
{
	EStorySoundTriggerType__Start                                                    = 0,
	EStorySoundTriggerType__End                                                      = 1,
	EStorySoundTriggerType__Dialog                                                   = 2,
	EStorySoundTriggerType__Sequence                                                 = 3
};

/// Enum /Script/GameUE.EStoryNPCState
/// Size: 0x03
enum class EStoryNPCState : uint8_t
{
	EStoryNPCState__UnSpawn                                                          = 0,
	EStoryNPCState__Hide                                                             = 1,
	EStoryNPCState__Spawn                                                            = 2
};

/// Enum /Script/GameUE.ETapBillboardEnum
/// Size: 0x03
enum class ETapBillboardEnum : uint8_t
{
	ETapBillboardEnum__NORMAL                                                        = 0,
	ETapBillboardEnum__SPLASH                                                        = 1,
	ETapBillboardEnum__MARQUEE                                                       = 2
};

/// Enum /Script/GameUE.EServerSort
/// Size: 0x03
enum class EServerSort : uint8_t
{
	EServerSort__SERVER_ID_ASC                                                       = 0,
	EServerSort__SERVER_ID_DESC                                                      = 1,
	EServerSort__OPEN_DATE_DESC                                                      = 2
};

/// Enum /Script/GameUE.ESysCtrl
/// Size: 0x25
enum class ESysCtrl : uint8_t
{
	ESysCtrl__SC_DEV_LOGIN                                                           = 0,
	ESysCtrl__SC_REALM                                                               = 1,
	ESysCtrl__SC_BEGIN                                                               = 2,
	ESysCtrl__SC_PATCH                                                               = 3,
	ESysCtrl__SC_REGIST                                                              = 4,
	ESysCtrl__SC_DIALOG                                                              = 5,
	ESysCtrl__SC_CANCEL_REG                                                          = 6,
	ESysCtrl__SC_CLEANUP                                                             = 7,
	ESysCtrl__SC_SDK_LOGIN                                                           = 8,
	ESysCtrl__SC_ACCOUNT_CENTER                                                      = 9,
	ESysCtrl__SC_SDK_LOGOUT                                                          = 10,
	ESysCtrl__SC_SDK_AccountType                                                     = 11,
	ESysCtrl__SC_SDK_Request_Pay                                                     = 12,
	ESysCtrl__SC_SDK_Pay_Call_Back                                                   = 13,
	ESysCtrl__SC_SDK_TapDB_Track_Event                                               = 14,
	ESysCtrl__SC_Setting_Server_Id                                                   = 15,
	ESysCtrl__SC_SDK_Open_TapBillboard                                               = 16,
	ESysCtrl__SC_XDData_Push_Data_Event                                              = 17,
	ESysCtrl__SC_SDK_Account_Cancellation                                            = 18,
	ESysCtrl__SC_Request_Maintenance                                                 = 19,
	ESysCtrl__SC_Select_Platform                                                     = 20,
	ESysCtrl__SC_IntroOK                                                             = 21,
	ESysCtrl__SC_SplashFinish                                                        = 22,
	ESysCtrl__SC_GameLogOut                                                          = 23,
	ESysCtrl__SC_SDK_Support                                                         = 24
};

/// Enum /Script/GameUE.EDialogStyle
/// Size: 0x05
enum class EDialogStyle : uint8_t
{
	EDialogStyle__Style_Ok                                                           = 0,
	EDialogStyle__Style_OkCancel                                                     = 1,
	EDialogStyle__Style_Yes                                                          = 2,
	EDialogStyle__Style_YesNo                                                        = 3,
	EDialogStyle__Style_OkNClose                                                     = 4
};

/// Enum /Script/GameUE.ESysEv
/// Size: 0x24
enum class ESysEv : uint8_t
{
	ESysEv__SE_DIALOG                                                                = 0,
	ESysEv__SE_PLAY                                                                  = 1,
	ESysEv__SE_PATCH                                                                 = 2,
	ESysEv__SE_PATCHUP                                                               = 3,
	ESysEv__SE_ENTRY                                                                 = 4,
	ESysEv__SE_REALM                                                                 = 5,
	ESysEv__SE_SELECT_PLATFORM                                                       = 6,
	ESysEv__SE_CLOSE_PLATFORM                                                        = 7,
	ESysEv__SE_MAINTAIN_BLOCK                                                        = 8,
	ESysEv__SE_PRE_SDK_LOGIN                                                         = 9,
	ESysEv__SE_DEV_LOGIN                                                             = 10,
	ESysEv__SE_LOGIN_VIEW                                                            = 11,
	ESysEv__SE_RESTART_VIEW                                                          = 12,
	ESysEv__SE_INIT                                                                  = 13,
	ESysEv__SE_DIALOG_CLOSE                                                          = 14,
	ESysEv__SE_ERROR_CHECKPATCH                                                      = 15,
	ESysEv__SE_ERROR_INSTALLPATCH                                                    = 16,
	ESysEv__SE_REGISTER                                                              = 17,
	ESysEv__SE_REGISTER_FAIL                                                         = 18,
	ESysEv__SE_REGISTER_SUCC                                                         = 19,
	ESysEv__SE_SPLASH                                                                = 20,
	ESysEv__SE_TAPBILLBOARD_BADGE                                                    = 21,
	ESysEv__SE_OPEN_ANNOUNCEMENT                                                     = 22,
	ESysEv__SE_LOGIN_RESTART                                                         = 23
};

/// Enum /Script/GameUE.EUIMemoryOpt
/// Size: 0x03
enum class EUIMemoryOpt : uint8_t
{
	EUIMemoryOpt__Opt_None                                                           = 0,
	EUIMemoryOpt__Opt_Cached                                                         = 1,
	EUIMemoryOpt__Opt_Transition                                                     = 2
};

/// Enum /Script/GameUE.EUIRenderOpt
/// Size: 0x02
enum class EUIRenderOpt : uint8_t
{
	EUIRenderOpt__Opt_None                                                           = 0,
	EUIRenderOpt__Opt_BlockScene                                                     = 1
};

/// Enum /Script/GameUE.EPreviewUIState
/// Size: 0x03
enum class EPreviewUIState : uint8_t
{
	EPreviewUIState__Idle                                                            = 0,
	EPreviewUIState__G                                                               = 1,
	EPreviewUIState__Chip                                                            = 2
};

/// Enum /Script/GameUE.EOffScreenLayoutMethod
/// Size: 0x05
enum class EOffScreenLayoutMethod : uint8_t
{
	EOffScreenLayoutMethod__Layout_Anchored                                          = 0,
	EOffScreenLayoutMethod__Layout_Border                                            = 1,
	EOffScreenLayoutMethod__Layout_Box                                               = 2,
	EOffScreenLayoutMethod__Layout_Circle                                            = 3,
	EOffScreenLayoutMethod__Layout_Oval                                              = 4
};


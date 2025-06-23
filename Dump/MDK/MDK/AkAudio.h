
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: SlateCore
/// dependency: UMG
/// dependency: WwiseResourceLoader
/// dependency: WwiseSoundEngine

/// Class /Script/AkAudio.AkPortalComponent
/// Size: 0x00C8 (0x0001F8 - 0x0002C0)
class UAkPortalComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(bool)                                      bDynamic                                                    OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	CMember(AkAcousticPortalState)                     InitialState                                                OFFSET(get<T>, {0x1F9, 1, 0, 0})
	DMember(float)                                     ObstructionRefreshInterval                                  OFFSET(get<float>, {0x1FC, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            ObstructionCollisionChannel                                 OFFSET(get<T>, {0x200, 1, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkPortalComponent.PortalPlacementValid
	// bool PortalPlacementValid();                                                                                             // [0x89bd40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.OpenPortal
	// void OpenPortal();                                                                                                       // [0x89bd20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkPortalComponent.GetPrimitiveParent
	// class UPrimitiveComponent* GetPrimitiveParent();                                                                         // [0x89bb90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.GetCurrentState
	// AkAcousticPortalState GetCurrentState();                                                                                 // [0x89bb30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.ClosePortal
	// void ClosePortal();                                                                                                      // [0x89b850] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAcousticPortal
/// Size: 0x0010 (0x000258 - 0x000268)
class AAkAcousticPortal : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	CMember(class UAkPortalComponent*)                 Portal                                                      OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(AkAcousticPortalState)                     InitialState                                                OFFSET(get<T>, {0x260, 1, 0, 0})
	DMember(bool)                                      bRequiresStateMigration                                     OFFSET(get<bool>, {0x261, 1, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkAcousticPortal.OpenPortal
	// void OpenPortal();                                                                                                       // [0x89bd00] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAcousticPortal.GetCurrentState
	// AkAcousticPortalState GetCurrentState();                                                                                 // [0x89bb00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAcousticPortal.ClosePortal
	// void ClosePortal();                                                                                                      // [0x89b830] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAudioType
/// Size: 0x0018 (0x000028 - 0x000040)
class UAkAudioType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bAutoLoad                                                   OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TArray<class UObject*>)                    UserData                                                    OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkAudioType.UnloadData
	// void UnloadData();                                                                                                       // [0x89d6b0] Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioType.LoadData
	// void LoadData();                                                                                                         // [0x89bc50] Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioType.GetWwiseShortID
	// int32_t GetWwiseShortID();                                                                                               // [0x89bbc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkAcousticTexture
/// Size: 0x0010 (0x000040 - 0x000050)
class UAkAcousticTexture : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FWwiseAcousticTextureCookedData)           AcousticTextureCookedData                                   OFFSET(getStruct<T>, {0x40, 12, 0, 0})
};

/// Class /Script/AkAudio.AkAcousticTextureSetComponent
/// Size: 0x0018 (0x0001F8 - 0x000210)
class UAkAcousticTextureSetComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
};

/// Class /Script/AkAudio.AkAmbientSound
/// Size: 0x0040 (0x000220 - 0x000260)
class AAkAmbientSound : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	CMember(class UAkAudioEvent*)                      AkAudioEvent                                                OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UAkComponent*)                       AkComponent                                                 OFFSET(get<T>, {0x228, 8, 0, 0})
	DMember(bool)                                      StopWhenOwnerIsDestroyed                                    OFFSET(get<bool>, {0x230, 1, 0, 0})
	DMember(bool)                                      AutoPost                                                    OFFSET(get<bool>, {0x231, 1, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkAmbientSound.StopAmbientSound
	// void StopAmbientSound();                                                                                                 // [0x89d690] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAmbientSound.StartAmbientSound
	// void StartAmbientSound();                                                                                                // [0x89d670] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Struct /Script/AkAudio.AkMainOutputSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FAkMainOutputSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   AudioDeviceShareSet                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(uint32_t)                                  DeviceID                                                    OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	CMember(EAkPanningRule)                            PanningRule                                                 OFFSET(get<T>, {0x14, 4, 0, 0})
	CMember(EAkChannelConfigType)                      ChannelConfigType                                           OFFSET(get<T>, {0x18, 4, 0, 0})
	DMember(uint32_t)                                  ChannelMask                                                 OFFSET(get<uint32_t>, {0x1C, 4, 0, 0})
	DMember(uint32_t)                                  NumberOfChannels                                            OFFSET(get<uint32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkSpatialAudioSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FAkSpatialAudioSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(uint32_t)                                  MaxSoundPropagationDepth                                    OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MovementThreshold                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  NumberOfPrimaryRays                                         OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	DMember(uint32_t)                                  ReflectionOrder                                             OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
	DMember(uint32_t)                                  DiffractionOrder                                            OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(uint32_t)                                  DiffractionOnReflectionsOrder                               OFFSET(get<uint32_t>, {0x14, 4, 0, 0})
	DMember(float)                                     MaximumPathLength                                           OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     CPULimitPercentage                                          OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(uint32_t)                                  LoadBalancingSpread                                         OFFSET(get<uint32_t>, {0x20, 4, 0, 0})
	DMember(bool)                                      EnableGeometricDiffractionAndTransmission                   OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(bool)                                      CalcEmitterVirtualPosition                                  OFFSET(get<bool>, {0x25, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkCommonInitializationSettings
/// Size: 0x0068 (0x000000 - 0x000068)
class FAkCommonInitializationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(uint32_t)                                  MaximumNumberOfMemoryPools                                  OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  MaximumNumberOfPositioningPaths                             OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  CommandQueueSize                                            OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	DMember(uint32_t)                                  SamplesPerFrame                                             OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
	SMember(FAkMainOutputSettings)                     MainOutputSettings                                          OFFSET(getStruct<T>, {0x10, 40, 0, 0})
	DMember(float)                                     StreamingLookAheadRatio                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(uint16_t)                                  NumberOfRefillsInVoice                                      OFFSET(get<uint16_t>, {0x3C, 2, 0, 0})
	SMember(FAkSpatialAudioSettings)                   SpatialAudioSettings                                        OFFSET(getStruct<T>, {0x40, 40, 0, 0})
};

/// Struct /Script/AkAudio.AkCommonInitializationSettingsWithSampleRate
/// Size: 0x0008 (0x000068 - 0x000070)
class FAkCommonInitializationSettingsWithSampleRate : public FAkCommonInitializationSettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(uint32_t)                                  SampleRate                                                  OFFSET(get<uint32_t>, {0x68, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkCommunicationSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FAkCommunicationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(uint32_t)                                  PoolSize                                                    OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint16_t)                                  DiscoveryBroadcastPort                                      OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(uint16_t)                                  CommandPort                                                 OFFSET(get<uint16_t>, {0x6, 2, 0, 0})
	SMember(FString)                                   NetworkName                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithSystemInitialization
/// Size: 0x0008 (0x000018 - 0x000020)
class FAkCommunicationSettingsWithSystemInitialization : public FAkCommunicationSettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      InitializeSystemComms                                       OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettings
/// Size: 0x002C (0x000000 - 0x00002C)
class FAkAdvancedInitializationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(uint32_t)                                  IO_MemorySize                                               OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  IO_Granularity                                              OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     TargetAutoStreamBufferLength                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      UseStreamCache                                              OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(uint32_t)                                  MaximumPinnedBytesInCache                                   OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      EnableGameSyncPreparation                                   OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(uint32_t)                                  ContinuousPlaybackLookAhead                                 OFFSET(get<uint32_t>, {0x18, 4, 0, 0})
	DMember(uint32_t)                                  MonitorQueuePoolSize                                        OFFSET(get<uint32_t>, {0x1C, 4, 0, 0})
	DMember(uint32_t)                                  MaximumHardwareTimeoutMs                                    OFFSET(get<uint32_t>, {0x20, 4, 0, 0})
	DMember(bool)                                      DebugOutOfRangeCheckEnabled                                 OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(float)                                     DebugOutOfRangeLimit                                        OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
/// Size: 0x000C (0x00002C - 0x000038)
class FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      EnableMultiCoreRendering                                    OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(uint32_t)                                  MaxNumJobWorkers                                            OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	DMember(uint32_t)                                  JobWorkerMaxExecutionTimeUSec                               OFFSET(get<uint32_t>, {0x34, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkAndroidAdvancedInitializationSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint32_t)                                  AudioAPI                                                    OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      RoundFrameSizeToHardwareSize                                OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Class /Script/AkAudio.AkAndroidInitializationSettings
/// Size: 0x00D8 (0x000028 - 0x000100)
class UAkAndroidInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x30, 112, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	SMember(FAkAndroidAdvancedInitializationSettings)  AdvancedSettings                                            OFFSET(getStruct<T>, {0xC0, 64, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x89bc70] Final|Native|Public  
};

/// Class /Script/AkAudio.AkPlatformInfo
/// Size: 0x0048 (0x000028 - 0x000070)
class UAkPlatformInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkAndroidPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkAudioBank
/// Size: 0x0008 (0x000040 - 0x000048)
class UAkAudioBank : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      AutoLoad                                                    OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkLocalizedMetaData
/// Size: 0x0008 (0x000000 - 0x000008)
class FAkLocalizedMetaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     MinimumDuration                                             OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaximumDuration                                             OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Class /Script/AkAudio.AkAudioEvent
/// Size: 0x00D0 (0x000040 - 0x000110)
class UAkAudioEvent : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	DMember(float)                                     MaxAttenuationRadius                                        OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      IsInfinite                                                  OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(float)                                     MinimumDuration                                             OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     MaximumDuration                                             OFFSET(get<float>, {0x4C, 4, 0, 0})
	SMember(FWwiseLocalizedEventCookedData)            EventCookedData                                             OFFSET(getStruct<T>, {0x50, 96, 0, 0})
	CMember(class UAkAudioBank*)                       RequiredBank                                                OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TMap<int32_t, FAkLocalizedMetaData>)       LocalizedMetaDatas                                          OFFSET(get<T>, {0xB8, 80, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkAudioEvent.PostOnGameObjectAndWait
	// int32_t PostOnGameObjectAndWait(class UAkGameObject* GameObject, FLatentActionInfo LatentActionInfo);                    // [0x89cb80] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostOnGameObject
	// int32_t PostOnGameObject(class UAkGameObject* GameObject, FDelegateProperty& Delegate, int32_t CallbackMask);            // [0x89ca40] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostOnComponentAndWait
	// int32_t PostOnComponentAndWait(class UAkComponent* Component, bool bStopWhenAttachedObjectDestroyed, FLatentActionInfo LatentActionInfo); // [0x89c8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostOnComponent
	// int32_t PostOnComponent(class UAkComponent* Component, FDelegateProperty& Delegate, int32_t CallbackMask, bool bStopWhenAttachedObjectDestroyed); // [0x89c740] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostOnActorAndWait
	// int32_t PostOnActorAndWait(class AActor* Actor, bool bStopWhenAttachedObjectDestroyed, FLatentActionInfo LatentActionInfo); // [0x89c5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostOnActor
	// int32_t PostOnActor(class AActor* Actor, FDelegateProperty& Delegate, int32_t CallbackMask, bool bStopWhenAttachedObjectDestroyed); // [0x89c440] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostAtLocation
	// int32_t PostAtLocation(FVector Location, FRotator Orientation, FDelegateProperty& callback, int32_t CallbackMask, class UObject* WorldContextObject); // [0x89c260] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.ExecuteAction
	// int32_t ExecuteAction(AkActionOnEventType ActionType, class AActor* Actor, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve); // [0x89b870] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkGameObject
/// Size: 0x0028 (0x0001F8 - 0x000220)
class UAkGameObject : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(class UAkAudioEvent*)                      AkAudioEvent                                                OFFSET(get<T>, {0x1F8, 8, 0, 0})
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x200, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkGameObject.Stop
	// void Stop();                                                                                                             // [0x8a4370] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.SetRTPCValue
	// void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, FString RTPC);                     // [0x8a37f0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const 
	// Function /Script/AkAudio.AkGameObject.PostAssociatedAkEventAsync
	// void PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32_t CallbackMask, FDelegateProperty& PostEventCallback, FLatentActionInfo LatentInfo, int32_t& PlayingID); // [0x8a1930] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAssociatedAkEvent
	// int32_t PostAssociatedAkEvent(int32_t CallbackMask, FDelegateProperty& PostEventCallback);                               // [0x8a1830] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAkEventAsync
	// void PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, FDelegateProperty& PostEventCallback, FLatentActionInfo LatentInfo); // [0x8a12d0] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAkEvent
	// int32_t PostAkEvent(class UAkAudioEvent* AkEvent, int32_t CallbackMask, FDelegateProperty& PostEventCallback, FString InEventName); // [0x8a1110] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.GetRTPCValue
	// void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, FString RTPC, int32_t PlayingID); // [0x8a09c0] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkComponent
/// Size: 0x01D8 (0x000218 - 0x0003F0)
class UAkComponent : public UAkGameObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	DMember(bool)                                      bUseSpatialAudio                                            OFFSET(get<bool>, {0x218, 1, 0, 0})
	CMember(TEnumAsByte<EAkCollisionChannel>)          OcclusionCollisionChannel                                   OFFSET(get<T>, {0x220, 1, 0, 0})
	DMember(bool)                                      EnableSpotReflectors                                        OFFSET(get<bool>, {0x221, 1, 0, 0})
	DMember(float)                                     OuterRadius                                                 OFFSET(get<float>, {0x224, 4, 0, 0})
	DMember(float)                                     InnerRadius                                                 OFFSET(get<float>, {0x228, 4, 0, 0})
	CMember(class UAkAuxBus*)                          EarlyReflectionAuxBus                                       OFFSET(get<T>, {0x230, 8, 0, 0})
	SMember(FString)                                   EarlyReflectionAuxBusName                                   OFFSET(getStruct<T>, {0x238, 16, 0, 0})
	DMember(int32_t)                                   EarlyReflectionOrder                                        OFFSET(get<int32_t>, {0x248, 4, 0, 0})
	DMember(float)                                     EarlyReflectionBusSendGain                                  OFFSET(get<float>, {0x24C, 4, 0, 0})
	DMember(float)                                     EarlyReflectionMaxPathLength                                OFFSET(get<float>, {0x250, 4, 0, 0})
	DMember(float)                                     roomReverbAuxBusGain                                        OFFSET(get<float>, {0x254, 4, 0, 0})
	DMember(int32_t)                                   diffractionMaxEdges                                         OFFSET(get<int32_t>, {0x258, 4, 0, 0})
	DMember(int32_t)                                   diffractionMaxPaths                                         OFFSET(get<int32_t>, {0x25C, 4, 0, 0})
	DMember(float)                                     diffractionMaxPathLength                                    OFFSET(get<float>, {0x260, 4, 0, 0})
	DMember(bool)                                      DrawFirstOrderReflections                                   OFFSET(get<bool>, {0x264, 1, 0, 0})
	DMember(bool)                                      DrawSecondOrderReflections                                  OFFSET(get<bool>, {0x265, 1, 0, 0})
	DMember(bool)                                      DrawHigherOrderReflections                                  OFFSET(get<bool>, {0x266, 1, 0, 0})
	DMember(bool)                                      DrawDiffraction                                             OFFSET(get<bool>, {0x267, 1, 0, 0})
	DMember(bool)                                      StopWhenOwnerDestroyed                                      OFFSET(get<bool>, {0x268, 1, 0, 0})
	DMember(float)                                     AttenuationScalingFactor                                    OFFSET(get<float>, {0x26C, 4, 0, 0})
	DMember(float)                                     OcclusionRefreshInterval                                    OFFSET(get<float>, {0x270, 4, 0, 0})
	DMember(bool)                                      bUseReverbVolumes                                           OFFSET(get<bool>, {0x274, 1, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkComponent.UseReverbVolumes
	// void UseReverbVolumes(bool inUseReverbVolumes);                                                                          // [0x89d8c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.UseEarlyReflections
	// void UseEarlyReflections(class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName); // [0x89d6d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetSwitch
	// void SetSwitch(class UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState);                             // [0x89d4c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetStopWhenOwnerDestroyed
	// void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);                                                            // [0x89d430] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetOutputBusVolume
	// void SetOutputBusVolume(float BusVolume);                                                                                // [0x89d3b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetListeners
	// void SetListeners(TArray<UAkComponent*>& Listeners);                                                                     // [0x89d300] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetGameObjectRadius
	// void SetGameObjectRadius(float in_outerRadius, float in_innerRadius);                                                    // [0x89d1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEnableSpotReflectors
	// void SetEnableSpotReflectors(bool in_enable);                                                                            // [0x89d110] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEarlyReflectionsVolume
	// void SetEarlyReflectionsVolume(float SendVolume);                                                                        // [0x89d090] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEarlyReflectionsAuxBus
	// void SetEarlyReflectionsAuxBus(FString AuxBusName);                                                                      // [0x89cff0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetAttenuationScalingFactor
	// void SetAttenuationScalingFactor(float Value);                                                                           // [0x89cef0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostTrigger
	// void PostTrigger(class UAkTrigger* TriggerValue, FString Trigger);                                                       // [0x89cc80] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
	// void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, FLatentActionInfo LatentInfo);                          // [0x89c120] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
	// int32_t PostAssociatedAkEventAndWaitForEnd(FLatentActionInfo LatentInfo);                                                // [0x89c060] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
	// void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32_t& PlayingID, FLatentActionInfo LatentInfo);      // [0x89bf00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEnd
	// int32_t PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, FString in_EventName, FLatentActionInfo LatentInfo);      // [0x89bda0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.GetOcclusionCollisionChannel
	// TEnumAsByte<ECollisionChannel> GetOcclusionCollisionChannel();                                                           // [0x89bb60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.GetAttenuationRadius
	// float GetAttenuationRadius();                                                                                            // [0x89baa0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkAudioInputComponent
/// Size: 0x0030 (0x0003F0 - 0x000420)
class UAkAudioInputComponent : public UAkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:


	/// Functions
	// Function /Script/AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
	// int32_t PostAssociatedAudioInputEvent();                                                                                 // [0x89c230] BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAuxBus
/// Size: 0x0070 (0x000040 - 0x0000B0)
class UAkAuxBus : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FWwiseLocalizedAuxBusCookedData)           AuxBusCookedData                                            OFFSET(getStruct<T>, {0x40, 96, 0, 0})
	CMember(class UAkAudioBank*)                       RequiredBank                                                OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/AkAudio.AkBattleComponent
/// Size: 0x0020 (0x0003F0 - 0x000410)
class UAkBattleComponent : public UAkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	CMember(class UAkAudioEvent*)                      AkAudioEvent_x1                                             OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(class UAkAudioEvent*)                      AkAudioEvent_x2                                             OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(class UAkAudioEvent*)                      AkAudioEvent_x3                                             OFFSET(get<T>, {0x400, 8, 0, 0})
};

/// Class /Script/AkAudio.AkBattleSpeedRateSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UAkBattleSpeedRateSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     BattleRate1Value                                            OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     BattleRate2Value                                            OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     BattleRate3Value                                            OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     SpeedRateDelta                                              OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkBoolPropertyToControl
/// Size: 0x0010 (0x000000 - 0x000010)
class FAkBoolPropertyToControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   ItemProperty                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkWwiseObjectDetails
/// Size: 0x0030 (0x000000 - 0x000030)
class FAkWwiseObjectDetails : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ItemName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ItemPath                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ItemId                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkWwiseItemToControl
/// Size: 0x0040 (0x000000 - 0x000040)
class FAkWwiseItemToControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FAkWwiseObjectDetails)                     ItemPicked                                                  OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FString)                                   ItemPath                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/AkAudio.AkCheckBox
/// Size: 0x0DB0 (0x000140 - 0x000EF0)
class UAkCheckBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3824;

public:
	CMember(ECheckBoxState)                            CheckedState                                                OFFSET(get<T>, {0x5E8, 1, 0, 0})
	SMember(FDelegateProperty)                         CheckedStateDelegate                                        OFFSET(getStruct<T>, {0x5EC, 16, 0, 0})
	SMember(FCheckBoxStyle)                            WidgetStyle                                                 OFFSET(getStruct<T>, {0x600, 2064, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0xE10, 1, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0xE11, 1, 0, 0})
	SMember(FAkBoolPropertyToControl)                  ThePropertyToControl                                        OFFSET(getStruct<T>, {0xE18, 16, 0, 0})
	SMember(FAkWwiseItemToControl)                     ItemToControl                                               OFFSET(getStruct<T>, {0xE28, 64, 0, 0})
	SMember(FMulticastInlineDelegate)                  AkOnCheckStateChanged                                       OFFSET(getStruct<T>, {0xE68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemDropped                                               OFFSET(getStruct<T>, {0xE78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPropertyDropped                                           OFFSET(getStruct<T>, {0xE88, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkCheckBox.SetIsChecked
	// void SetIsChecked(bool InIsChecked);                                                                                     // [0x89d270] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetCheckedState
	// void SetCheckedState(ECheckBoxState InCheckedState);                                                                     // [0x89cf70] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetAkItemId
	// void SetAkItemId(FGuid& ItemId);                                                                                         // [0x89ce50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetAkBoolProperty
	// void SetAkBoolProperty(FString ItemProperty);                                                                            // [0x89cdb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.IsPressed
	// bool IsPressed();                                                                                                        // [0x89bc20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.IsChecked
	// bool IsChecked();                                                                                                        // [0x89bbf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetCheckedState
	// ECheckBoxState GetCheckedState();                                                                                        // [0x89bad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetAkProperty
	// FString GetAkProperty();                                                                                                 // [0x89ba50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetAkItemId
	// FGuid GetAkItemId();                                                                                                     // [0x89ba10] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkAssetData
/// Size: 0x0028 (0x000028 - 0x000050)
class UAkAssetData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/AkAudio.AkAssetPlatformData
/// Size: 0x0008 (0x000028 - 0x000030)
class UAkAssetPlatformData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UAkAssetData*)                       CurrentAssetData                                            OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/AkAudio.AkMediaAssetData
/// Size: 0x0010 (0x000028 - 0x000038)
class UAkMediaAssetData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/AkAudio.AkMediaAsset
/// Size: 0x0050 (0x000028 - 0x000078)
class UAkMediaAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FString, class UAkMediaAssetData*>)   MediaAssetDataPerPlatform                                   OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/AkAudio.AkLocalizedMediaAsset
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkLocalizedMediaAsset : public UAkMediaAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkExternalMediaAsset
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkExternalMediaAsset : public UAkMediaAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AkAudio.AkFolder
/// Size: 0x0000 (0x000040 - 0x000040)
class UAkFolder : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/AkAudio.DrawPortalComponent
/// Size: 0x0008 (0x000468 - 0x000470)
class UDrawPortalComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
};

/// Class /Script/AkAudio.DrawRoomComponent
/// Size: 0x0008 (0x000468 - 0x000470)
class UDrawRoomComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
};

/// Class /Script/AkAudio.AkEffectShareSet
/// Size: 0x0068 (0x000040 - 0x0000A8)
class UAkEffectShareSet : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FWwiseLocalizedShareSetCookedData)         ShareSetCookedData                                          OFFSET(getStruct<T>, {0x40, 96, 0, 0})
};

/// Class /Script/AkAudio.AkGameplayStatics
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AkAudio.AkGameplayStatics.UseReverbVolumes
	// void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);                                                     // [0x8a47c0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UseEarlyReflections
	// void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName); // [0x8a45a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UnloadInitBank
	// void UnloadInitBank();                                                                                                   // [0x8a4580] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UnloadBankByName
	// void UnloadBankByName(FString BankName);                                                                                 // [0x8a44f0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopProfilerCapture
	// void StopProfilerCapture();                                                                                              // [0x8a44d0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopOutputCapture
	// void StopOutputCapture();                                                                                                // [0x8a44b0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopAllAmbientSounds
	// void StopAllAmbientSounds(class UObject* WorldContextObject);                                                            // [0x8a4430] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopAll
	// void StopAll();                                                                                                          // [0x8a4410] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopActor
	// void StopActor(class AActor* Actor);                                                                                     // [0x8a4390] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartProfilerCapture
	// void StartProfilerCapture(FString Filename);                                                                             // [0x8a42e0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartOutputCapture
	// void StartOutputCapture(FString Filename);                                                                               // [0x8a4250] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartAllAmbientSounds
	// void StartAllAmbientSounds(class UObject* WorldContextObject);                                                           // [0x8a41d0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
	// class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, FString EventName, bool AutoDestroy); // [0x8a3f90] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetSwitch
	// void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, FName SwitchGroup, FName SwitchState);            // [0x8a3e40] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetState
	// void SetState(class UAkStateValue* StateValue, FName StateGroup, FName State);                                           // [0x8a3d40] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetSpeakerAngles
	// void SetSpeakerAngles(TArray<float>& SpeakerAngles, float HeightAngle, FString DeviceShareSet);                          // [0x8a3bf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetRTPCValue
	// void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class AActor* Actor, FName RTPC);  // [0x8a39a0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetReflectionsOrder
	// void SetReflectionsOrder(int32_t Order, bool RefreshPaths);                                                              // [0x8a3b30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetPortalToPortalObstruction
	// void SetPortalToPortalObstruction(class UAkPortalComponent* PortalComponent0, class UAkPortalComponent* PortalComponent1, float ObstructionValue); // [0x8a36e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion
	// void SetPortalObstructionAndOcclusion(class UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue); // [0x8a35e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetPanningRule
	// void SetPanningRule(PanningRule PanRule);                                                                                // [0x8a3570] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOutputDeviceEffect
	// bool SetOutputDeviceEffect(FAkOutputDeviceID InDeviceID, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet); // [0x8a3470] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOutputBusVolume
	// void SetOutputBusVolume(float BusVolume, class AActor* Actor);                                                           // [0x8a33b0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
	// void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);                                            // [0x8a32f0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultiplePositions
	// void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x8a3190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
	// void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x8a2fb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
	// void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x8a2dd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction
	// void SetGameObjectToPortalObstruction(class UAkComponent* GameObjectAkComponent, class UAkPortalComponent* PortalComponent, float ObstructionValue); // [0x8a2cc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetDistanceProbe
	// void SetDistanceProbe(class AActor* Listener, class AActor* DistanceProbe);                                              // [0x8a2c00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
	// void SetCurrentAudioCultureAsync(FString AudioCulture, FDelegateProperty& Completed);                                    // [0x8a2b10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetCurrentAudioCulture
	// void SetCurrentAudioCulture(FString AudioCulture, FLatentActionInfo LatentInfo, class UObject* WorldContextObject);      // [0x8a29c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetBusEffectByName
	// bool SetBusEffectByName(FString InBusName, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet);            // [0x8a2860] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetBusEffectByID
	// bool SetBusEffectByID(FAkUniqueID InBusID, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet);            // [0x8a2760] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetBusConfig
	// void SetBusConfig(FString BusName, AkChannelConfiguration ChannelConfiguration);                                         // [0x8a2690] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetAuxBusEffect
	// bool SetAuxBusEffect(class UAkAuxBus* InAuxBus, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet);       // [0x8a2590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetActorMixerEffect
	// bool SetActorMixerEffect(FAkUniqueID InAudioNodeID, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet);   // [0x8a2490] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ResetRTPCValue
	// void ResetRTPCValue(class UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, class AActor* Actor, FName RTPC);             // [0x8a2350] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ReplaceMainOutput
	// void ReplaceMainOutput(FAkOutputSettings& MainOutputSettings);                                                           // [0x8a22b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostTrigger
	// void PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, FName Trigger);                                    // [0x8a21b0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventByName
	// void PostEventByName(FString EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);                         // [0x8a2090] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventAtLocationByName
	// void PostEventAtLocationByName(FString EventName, FVector Location, FRotator Orientation, class UObject* WorldContextObject); // [0x8a1f20] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventAtLocation
	// int32_t PostEventAtLocation(class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, FString EventName, class UObject* WorldContextObject); // [0x8a1d60] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEvent
	// int32_t PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, bool bStopWhenAttachedToDestroyed, FString EventName); // [0x8a1b10] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
	// void PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, FLatentActionInfo LatentInfo); // [0x8a1660] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
	// int32_t PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, FLatentActionInfo LatentInfo); // [0x8a1500] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadInitBank
	// void LoadInitBank();                                                                                                     // [0x8a10f0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBankByName
	// void LoadBankByName(FString BankName);                                                                                   // [0x8a1060] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.IsGame
	// bool IsGame(class UObject* WorldContextObject);                                                                          // [0x8a0fd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.IsEditor
	// bool IsEditor();                                                                                                         // [0x8a0fa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetSpeakerAngles
	// void GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, FString DeviceShareSet);                         // [0x8a0e40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetRTPCValue
	// void GetRTPCValue(class UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, class AActor* Actor, FName RTPC); // [0x8a0c10] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetCurrentAudioCulture
	// FString GetCurrentAudioCulture();                                                                                        // [0x8a0940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAvailableAudioCultures
	// TArray<FString> GetAvailableAudioCultures();                                                                             // [0x8a0860] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAkComponent
	// class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation> LocationType); // [0x8a06c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
	// class UObject* GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type);                                 // [0x8a05f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
	// void ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve); // [0x8a04b0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ExecuteActionOnEvent
	// void ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, class AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID); // [0x8a02e0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ClearSoundBanksAndMedia
	// void ClearSoundBanksAndMedia();                                                                                          // [0x8a02c0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ClearBanks
	// void ClearBanks();                                                                                                       // [0x8a02c0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.CancelEventCallback
	// void CancelEventCallback(FDelegateProperty& PostEventCallback);                                                          // [0x8a0220] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.AddOutputCaptureMarker
	// void AddOutputCaptureMarker(FString MarkerText);                                                                         // [0x8a0190] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkCallbackInfo
/// Size: 0x0008 (0x000028 - 0x000030)
class UAkCallbackInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UAkComponent*)                       AkComponent                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/AkAudio.AkEventCallbackInfo
/// Size: 0x0008 (0x000030 - 0x000038)
class UAkEventCallbackInfo : public UAkCallbackInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   PlayingID                                                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   EventId                                                     OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Class /Script/AkAudio.AkMIDIEventCallbackInfo
/// Size: 0x0010 (0x000038 - 0x000048)
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetType
	// EAkMidiEventType GetType();                                                                                              // [0x8a8fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
	// bool GetProgramChange(FAkMidiProgramChange& AsProgramChange);                                                            // [0x8a8f30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
	// bool GetPitchBend(FAkMidiPitchBend& AsPitchBend);                                                                        // [0x8a8e80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
	// bool GetNoteOn(FAkMidiNoteOnOff& AsNoteOn);                                                                              // [0x8a8dd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
	// bool GetNoteOff(FAkMidiNoteOnOff& AsNoteOff);                                                                            // [0x8a8d20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
	// bool GetNoteAftertouch(FAkMidiNoteAftertouch& AsNoteAftertouch);                                                         // [0x8a8c70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetGeneric
	// bool GetGeneric(FAkMidiGeneric& AsGeneric);                                                                              // [0x8a8bc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
	// bool GetChannelAftertouch(FAkMidiChannelAftertouch& AsChannelAftertouch);                                                // [0x8a8b10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetChannel
	// char GetChannel();                                                                                                       // [0x8a8ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetCc
	// bool GetCc(FAkMidiCc& AsCc);                                                                                             // [0x8a8a30] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.AkMarkerCallbackInfo
/// Size: 0x0018 (0x000038 - 0x000050)
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   Identifier                                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   Position                                                    OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	SMember(FString)                                   Label                                                       OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Class /Script/AkAudio.AkDurationCallbackInfo
/// Size: 0x0018 (0x000038 - 0x000050)
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     EstimatedDuration                                           OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   AudioNodeID                                                 OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   MediaId                                                     OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(bool)                                      bStreaming                                                  OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkSegmentInfo
/// Size: 0x0024 (0x000000 - 0x000024)
class FAkSegmentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(int32_t)                                   CurrentPosition                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   PreEntryDuration                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ActiveDuration                                              OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   PostExitDuration                                            OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   RemainingLookAheadTime                                      OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     BeatDuration                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     BarDuration                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     GridDuration                                                OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     GridOffset                                                  OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Class /Script/AkAudio.AkMusicSyncCallbackInfo
/// Size: 0x0040 (0x000030 - 0x000070)
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   PlayingID                                                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FAkSegmentInfo)                            SegmentInfo                                                 OFFSET(getStruct<T>, {0x34, 36, 0, 0})
	CMember(EAkCallbackType)                           MusicSyncType                                               OFFSET(get<T>, {0x58, 1, 0, 0})
	SMember(FString)                                   UserCueName                                                 OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkGeometrySurfaceOverride
/// Size: 0x0018 (0x000000 - 0x000018)
class FAkGeometrySurfaceOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UAkAcousticTexture*)                 AcousticTexture                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bEnableOcclusionOverride                                    OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     OcclusionValue                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     SurfaceArea                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkAcousticSurface
/// Size: 0x0018 (0x000000 - 0x000018)
class FAkAcousticSurface : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(uint32_t)                                  Texture                                                     OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     Occlusion                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkTriangle
/// Size: 0x0008 (0x000000 - 0x000008)
class FAkTriangle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint16_t)                                  Point0                                                      OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Point1                                                      OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  Point2                                                      OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(uint16_t)                                  Surface                                                     OFFSET(get<uint16_t>, {0x6, 2, 0, 0})
};

/// Struct /Script/AkAudio.AkGeometryData
/// Size: 0x0050 (0x000000 - 0x000050)
class FAkGeometryData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FVector>)                           Vertices                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FAkAcousticSurface>)                Surfaces                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FAkTriangle>)                       Triangles                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<class UPhysicalMaterial*>)          ToOverrideAcousticTexture                                   OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UPhysicalMaterial*>)          ToOverrideOcclusion                                         OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/AkAudio.AkGeometryComponent
/// Size: 0x0190 (0x000210 - 0x0003A0)
class UAkGeometryComponent : public UAkAcousticTextureSetComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	CMember(AkMeshType)                                MeshType                                                    OFFSET(get<T>, {0x210, 1, 0, 0})
	DMember(int32_t)                                   LOD                                                         OFFSET(get<int32_t>, {0x214, 4, 0, 0})
	DMember(float)                                     WeldingThreshold                                            OFFSET(get<float>, {0x218, 4, 0, 0})
	CMember(TMap<class UMaterialInterface*, FAkGeometrySurfaceOverride>) StaticMeshSurfaceOverride                 OFFSET(get<T>, {0x220, 80, 0, 0})
	SMember(FAkGeometrySurfaceOverride)                CollisionMeshSurfaceOverride                                OFFSET(getStruct<T>, {0x270, 24, 0, 0})
	DMember(bool)                                      bEnableDiffraction                                          OFFSET(get<bool>, {0x288, 1, 0, 0})
	DMember(bool)                                      bEnableDiffractionOnBoundaryEdges                           OFFSET(get<bool>, {0x289, 1, 0, 0})
	CMember(class AActor*)                             AssociatedRoom                                              OFFSET(get<T>, {0x290, 8, 0, 0})
	SMember(FAkGeometryData)                           GeometryData                                                OFFSET(getStruct<T>, {0x2A8, 80, 0, 0})
	CMember(TMap<int32_t, double>)                     SurfaceAreas                                                OFFSET(get<T>, {0x2F8, 80, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkGeometryComponent.UpdateGeometry
	// void UpdateGeometry();                                                                                                   // [0x8a9050] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.SendGeometry
	// void SendGeometry();                                                                                                     // [0x8a9030] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.RemoveGeometry
	// void RemoveGeometry();                                                                                                   // [0x8a9010] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.ConvertMesh
	// void ConvertMesh();                                                                                                      // [0x8a8a10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkGroupValue
/// Size: 0x0020 (0x000040 - 0x000060)
class UAkGroupValue : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FWwiseGroupValueCookedData)                GroupValueCookedData                                        OFFSET(getStruct<T>, {0x40, 20, 0, 0})
	DMember(uint32_t)                                  GroupShortId                                                OFFSET(get<uint32_t>, {0x54, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkHololensAdvancedInitializationSettings
/// Size: 0x0004 (0x000038 - 0x00003C)
class FAkHololensAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	DMember(bool)                                      UseHeadMountedDisplayAudioDevice                            OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/AkAudio.AkHololensInitializationSettings
/// Size: 0x00D8 (0x000028 - 0x000100)
class UAkHololensInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x30, 112, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	SMember(FAkHololensAdvancedInitializationSettings) AdvancedSettings                                            OFFSET(getStruct<T>, {0xC0, 60, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x89bc70] Final|Native|Public  
};

/// Class /Script/AkAudio.AkHololensPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkHololensPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkInitBank
/// Size: 0x0048 (0x000040 - 0x000088)
class UAkInitBank : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FWwiseInitBankCookedData)                  InitBankCookedData                                          OFFSET(getStruct<T>, {0x40, 64, 0, 0})
};

/// Struct /Script/AkAudio.AkAudioSession
/// Size: 0x000C (0x000000 - 0x00000C)
class FAkAudioSession : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EAkAudioSessionCategory)                   AudioSessionCategory                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  AudioSessionCategoryOptions                                 OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	CMember(EAkAudioSessionMode)                       AudioSessionMode                                            OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Class /Script/AkAudio.AkIOSInitializationSettings
/// Size: 0x00E0 (0x000028 - 0x000108)
class UAkIOSInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x30, 112, 0, 0})
	SMember(FAkAudioSession)                           AudioSession                                                OFFSET(getStruct<T>, {0xA0, 12, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xB0, 32, 0, 0})
	SMember(FAkAdvancedInitializationSettingsWithMultiCoreRendering) AdvancedSettings                              OFFSET(getStruct<T>, {0xD0, 56, 0, 0})
};

/// Class /Script/AkAudio.AkIOSPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkIOSPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkItemBoolPropertiesConv
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
	// FText Conv_FAkBoolPropertyToControlToText(FAkBoolPropertyToControl& INAkBoolPropertyToControl);                          // [0x8ac2d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
	// FString Conv_FAkBoolPropertyToControlToString(FAkBoolPropertyToControl& INAkBoolPropertyToControl);                      // [0x8ac1e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkItemBoolProperties
/// Size: 0x0040 (0x000128 - 0x000168)
class UAkItemBoolProperties : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectionChanged                                          OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPropertyDragged                                           OFFSET(getStruct<T>, {0x138, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkItemBoolProperties.SetSearchText
	// void SetSearchText(FString newText);                                                                                     // [0x8ac930] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkItemBoolProperties.GetSelectedProperty
	// FString GetSelectedProperty();                                                                                           // [0x8ac510] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkItemBoolProperties.GetSearchText
	// FString GetSearchText();                                                                                                 // [0x8ac490] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkItemPropertiesConv
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
	// FText Conv_FAkPropertyToControlToText(FAkPropertyToControl& INAkPropertyToControl);                                      // [0x8ac2d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
	// FString Conv_FAkPropertyToControlToString(FAkPropertyToControl& INAkPropertyToControl);                                  // [0x8ac1e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkItemProperties
/// Size: 0x0040 (0x000128 - 0x000168)
class UAkItemProperties : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectionChanged                                          OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPropertyDragged                                           OFFSET(getStruct<T>, {0x138, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkItemProperties.SetSearchText
	// void SetSearchText(FString newText);                                                                                     // [0x8ac930] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkItemProperties.GetSelectedProperty
	// FString GetSelectedProperty();                                                                                           // [0x8ac590] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkItemProperties.GetSearchText
	// FString GetSearchText();                                                                                                 // [0x8ac490] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkLateReverbComponent
/// Size: 0x0088 (0x0001F8 - 0x000280)
class UAkLateReverbComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	DMember(bool)                                      bEnable                                                     OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	DMember(float)                                     SendLevel                                                   OFFSET(get<float>, {0x1FC, 4, 0, 0})
	DMember(float)                                     FadeRate                                                    OFFSET(get<float>, {0x200, 4, 0, 0})
	DMember(float)                                     Priority                                                    OFFSET(get<float>, {0x204, 4, 0, 0})
	DMember(bool)                                      AutoAssignAuxBus                                            OFFSET(get<bool>, {0x208, 1, 0, 0})
	CMember(class UAkAuxBus*)                          AuxBus                                                      OFFSET(get<T>, {0x210, 8, 0, 0})
	SMember(FString)                                   AuxBusName                                                  OFFSET(getStruct<T>, {0x218, 16, 0, 0})
	CMember(class UAkAuxBus*)                          AuxBusManual                                                OFFSET(get<T>, {0x230, 8, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
	// void AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* textureSetComponent);                          // [0x8ac150] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkLinuxInitializationSettings
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UAkLinuxInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x30, 112, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	SMember(FAkAdvancedInitializationSettingsWithMultiCoreRendering) AdvancedSettings                              OFFSET(getStruct<T>, {0xC0, 56, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x89bc70] Final|Native|Public  
};

/// Class /Script/AkAudio.AkLinuxPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkMacInitializationSettings
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UAkMacInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x30, 112, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	SMember(FAkAdvancedInitializationSettingsWithMultiCoreRendering) AdvancedSettings                              OFFSET(getStruct<T>, {0xC0, 56, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x89bc70] Final|Native|Public  
};

/// Class /Script/AkAudio.AkMacPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkMacPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkPlatformInitialisationSettingsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkPlatformInitialisationSettingsBase : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AkAudio.AkReverbVolume
/// Size: 0x0038 (0x000258 - 0x000290)
class AAkReverbVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x258, 1, 0, 0})
	CMember(class UAkAuxBus*)                          AuxBus                                                      OFFSET(get<T>, {0x260, 8, 0, 0})
	SMember(FString)                                   AuxBusName                                                  OFFSET(getStruct<T>, {0x268, 16, 0, 0})
	DMember(float)                                     SendLevel                                                   OFFSET(get<float>, {0x278, 4, 0, 0})
	DMember(float)                                     FadeRate                                                    OFFSET(get<float>, {0x27C, 4, 0, 0})
	DMember(float)                                     Priority                                                    OFFSET(get<float>, {0x280, 4, 0, 0})
	CMember(class UAkLateReverbComponent*)             LateReverbComponent                                         OFFSET(get<T>, {0x288, 8, 0, 0})
};

/// Class /Script/AkAudio.AkRoomComponent
/// Size: 0x0038 (0x000218 - 0x000250)
class UAkRoomComponent : public UAkGameObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	DMember(bool)                                      bEnable                                                     OFFSET(get<bool>, {0x218, 1, 0, 0})
	DMember(bool)                                      bDynamic                                                    OFFSET(get<bool>, {0x219, 1, 0, 0})
	DMember(float)                                     Priority                                                    OFFSET(get<float>, {0x21C, 4, 0, 0})
	DMember(float)                                     WallOcclusion                                               OFFSET(get<float>, {0x220, 4, 0, 0})
	DMember(float)                                     AuxSendLevel                                                OFFSET(get<float>, {0x224, 4, 0, 0})
	DMember(bool)                                      AutoPost                                                    OFFSET(get<bool>, {0x228, 1, 0, 0})
	CMember(class UAkAcousticTextureSetComponent*)     GeometryComponent                                           OFFSET(get<T>, {0x238, 8, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkRoomComponent.SetGeometryComponent
	// void SetGeometryComponent(class UAkAcousticTextureSetComponent* textureSetComponent);                                    // [0x8ac780] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkRoomComponent.GetPrimitiveParent
	// class UPrimitiveComponent* GetPrimitiveParent();                                                                         // [0x8ac460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkRtpc
/// Size: 0x0010 (0x000040 - 0x000050)
class UAkRtpc : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FWwiseGameParameterCookedData)             GameParameterCookedData                                     OFFSET(getStruct<T>, {0x40, 12, 0, 0})
};

/// Struct /Script/AkAudio.AkGeometrySurfacePropertiesToMap
/// Size: 0x0030 (0x000000 - 0x000030)
class FAkGeometrySurfacePropertiesToMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<class UAkAcousticTexture*>) AcousticTexture                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     OcclusionValue                                              OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkAcousticTextureParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FAkAcousticTextureParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector4)                                  AbsorptionValues                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Class /Script/AkAudio.AkSettings
/// Size: 0x0318 (0x000028 - 0x000340)
class UAkSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	DMember(char)                                      MaxSimultaneousReverbVolumes                                OFFSET(get<char>, {0x28, 1, 0, 0})
	SMember(FFilePath)                                 WwiseProjectPath                                            OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FDirectoryPath)                            WwiseSoundDataFolder                                        OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FDirectoryPath)                            GeneratedSoundBanksFolder                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FDirectoryPath)                            WwiseStagingDirectory                                       OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	DMember(bool)                                      bSoundBanksTransfered                                       OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bAssetsMigrated                                             OFFSET(get<bool>, {0x71, 1, 0, 0})
	DMember(bool)                                      bProjectMigrated                                            OFFSET(get<bool>, {0x72, 1, 0, 0})
	DMember(bool)                                      bAutoConnectToWAAPI                                         OFFSET(get<bool>, {0x73, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            DefaultOcclusionCollisionChannel                            OFFSET(get<T>, {0x74, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            DefaultFitToGeometryCollisionChannel                        OFFSET(get<T>, {0x75, 1, 0, 0})
	CMember(TMap<TWeakObjectPtr<UPhysicalMaterial*>, FAkGeometrySurfacePropertiesToMap>) AkGeometryMap             OFFSET(get<T>, {0x78, 80, 0, 0})
	DMember(float)                                     GlobalDecayAbsorption                                       OFFSET(get<float>, {0xC8, 4, 0, 0})
	CMember(TWeakObjectPtr<class UAkAuxBus*>)          DefaultReverbAuxBus                                         OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TMap<float, TWeakObjectPtr<UAkAuxBus*>>)   EnvironmentDecayAuxBusMap                                   OFFSET(get<T>, {0xF8, 80, 0, 0})
	SMember(FString)                                   HFDampingName                                               OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FString)                                   DecayEstimateName                                           OFFSET(getStruct<T>, {0x158, 16, 0, 0})
	SMember(FString)                                   TimeToFirstReflectionName                                   OFFSET(getStruct<T>, {0x168, 16, 0, 0})
	CMember(TWeakObjectPtr<class UAkRtpc*>)            HFDampingRTPC                                               OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(TWeakObjectPtr<class UAkRtpc*>)            DecayEstimateRTPC                                           OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(TWeakObjectPtr<class UAkRtpc*>)            TimeToFirstReflectionRTPC                                   OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(TWeakObjectPtr<class UAkAudioEvent*>)      AudioInputEvent                                             OFFSET(get<T>, {0x1F0, 8, 0, 0})
	CMember(TMap<FGuid, FAkAcousticTextureParams>)     AcousticTextureParamsMap                                    OFFSET(get<T>, {0x218, 80, 0, 0})
	DMember(bool)                                      SplitSwitchContainerMedia                                   OFFSET(get<bool>, {0x268, 1, 0, 0})
	DMember(bool)                                      SplitMediaPerFolder                                         OFFSET(get<bool>, {0x269, 1, 0, 0})
	DMember(bool)                                      UseEventBasedPackaging                                      OFFSET(get<bool>, {0x26A, 1, 0, 0})
	SMember(FString)                                   CommandletCommitMessage                                     OFFSET(getStruct<T>, {0x270, 16, 0, 0})
	CMember(TMap<FString, FString>)                    UnrealCultureToWwiseCulture                                 OFFSET(get<T>, {0x280, 80, 0, 0})
	SMember(FString)                                   DefaultAssetCreationPath                                    OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	CMember(TWeakObjectPtr<class UAkInitBank*>)        InitBank                                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(EAkUnrealAudioRouting)                     AudioRouting                                                OFFSET(get<T>, {0x308, 4, 0, 0})
	DMember(bool)                                      bWwiseSoundEngineEnabled                                    OFFSET(get<bool>, {0x30C, 1, 0, 0})
	DMember(bool)                                      bWwiseAudioLinkEnabled                                      OFFSET(get<bool>, {0x30D, 1, 0, 0})
	DMember(bool)                                      bAkAudioMixerEnabled                                        OFFSET(get<bool>, {0x30E, 1, 0, 0})
	DMember(bool)                                      AskedToUseNewAssetManagement                                OFFSET(get<bool>, {0x30F, 1, 0, 0})
	DMember(bool)                                      bEnableMultiCoreRendering                                   OFFSET(get<bool>, {0x310, 1, 0, 0})
	DMember(bool)                                      MigratedEnableMultiCoreRendering                            OFFSET(get<bool>, {0x311, 1, 0, 0})
	DMember(bool)                                      FixupRedirectorsDuringMigration                             OFFSET(get<bool>, {0x312, 1, 0, 0})
	SMember(FDirectoryPath)                            WwiseWindowsInstallationPath                                OFFSET(getStruct<T>, {0x318, 16, 0, 0})
	SMember(FFilePath)                                 WwiseMacInstallationPath                                    OFFSET(getStruct<T>, {0x328, 16, 0, 0})
};

/// Class /Script/AkAudio.AkSettingsPerUser
/// Size: 0x0050 (0x000028 - 0x000078)
class UAkSettingsPerUser : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FDirectoryPath)                            WwiseWindowsInstallationPath                                OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FFilePath)                                 WwiseMacInstallationPath                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FDirectoryPath)                            GeneratedSoundBanksFolderUserOverride                       OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   WaapiIPAddress                                              OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	DMember(uint32_t)                                  WaapiPort                                                   OFFSET(get<uint32_t>, {0x68, 4, 0, 0})
	DMember(bool)                                      bAutoConnectToWAAPI                                         OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(bool)                                      AutoSyncSelection                                           OFFSET(get<bool>, {0x6D, 1, 0, 0})
	DMember(uint32_t)                                  WaapiTranslatorTimeout                                      OFFSET(get<uint32_t>, {0x70, 4, 0, 0})
	DMember(bool)                                      SuppressGeneratedSoundBanksPathWarnings                     OFFSET(get<bool>, {0x74, 1, 0, 0})
	DMember(bool)                                      SoundDataGenerationSkipLanguage                             OFFSET(get<bool>, {0x75, 1, 0, 0})
	DMember(bool)                                      AskForWwiseAssetReload                                      OFFSET(get<bool>, {0x76, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkPropertyToControl
/// Size: 0x0010 (0x000000 - 0x000010)
class FAkPropertyToControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   ItemProperty                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Class /Script/AkAudio.AkSlider
/// Size: 0x05E8 (0x000128 - 0x000710)
class UAkSlider : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x128, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(getStruct<T>, {0x12C, 16, 0, 0})
	SMember(FSliderStyle)                              WidgetStyle                                                 OFFSET(getStruct<T>, {0x140, 1280, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 OFFSET(get<T>, {0x640, 1, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              OFFSET(getStruct<T>, {0x644, 16, 0, 0})
	SMember(FLinearColor)                              SliderHandleColor                                           OFFSET(getStruct<T>, {0x654, 16, 0, 0})
	DMember(bool)                                      IndentHandle                                                OFFSET(get<bool>, {0x664, 1, 0, 0})
	DMember(bool)                                      Locked                                                      OFFSET(get<bool>, {0x665, 1, 0, 0})
	DMember(float)                                     StepSize                                                    OFFSET(get<float>, {0x668, 4, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0x66C, 1, 0, 0})
	SMember(FAkPropertyToControl)                      ThePropertyToControl                                        OFFSET(getStruct<T>, {0x670, 16, 0, 0})
	SMember(FAkWwiseItemToControl)                     ItemToControl                                               OFFSET(getStruct<T>, {0x680, 64, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(getStruct<T>, {0x6C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemDropped                                               OFFSET(getStruct<T>, {0x6D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPropertyDropped                                           OFFSET(getStruct<T>, {0x6E0, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkSlider.SetValue
	// void SetValue(float InValue);                                                                                            // [0x8acb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0x8acaf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x8aca60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x8ac9d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0x8ac8a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                      // [0x8ac810] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetAkSliderItemProperty
	// void SetAkSliderItemProperty(FString ItemProperty);                                                                      // [0x8ac6e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetAkSliderItemId
	// void SetAkSliderItemId(FGuid& ItemId);                                                                                   // [0x8ac640] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.GetValue
	// float GetValue();                                                                                                        // [0x8ac610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkSlider.GetAkSliderItemProperty
	// FString GetAkSliderItemProperty();                                                                                       // [0x8ac410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkSlider.GetAkSliderItemId
	// FGuid GetAkSliderItemId();                                                                                               // [0x8ac3d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkSpatialAudioVolume
/// Size: 0x0018 (0x000258 - 0x000270)
class AAkSpatialAudioVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(class UAkSurfaceReflectorSetComponent*)    SurfaceReflectorSet                                         OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(class UAkLateReverbComponent*)             LateReverb                                                  OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(class UAkRoomComponent*)                   Room                                                        OFFSET(get<T>, {0x268, 8, 0, 0})
};

/// Class /Script/AkAudio.AkSpotReflector
/// Size: 0x0038 (0x000220 - 0x000258)
class AAkSpotReflector : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	CMember(class UAkAuxBus*)                          EarlyReflectionAuxBus                                       OFFSET(get<T>, {0x220, 8, 0, 0})
	SMember(FString)                                   EarlyReflectionAuxBusName                                   OFFSET(getStruct<T>, {0x228, 16, 0, 0})
	CMember(class UAkAcousticTexture*)                 AcousticTexture                                             OFFSET(get<T>, {0x238, 8, 0, 0})
	DMember(float)                                     DistanceScalingFactor                                       OFFSET(get<float>, {0x240, 4, 0, 0})
	DMember(float)                                     Level                                                       OFFSET(get<float>, {0x244, 4, 0, 0})
	DMember(bool)                                      SameRoomOnly                                                OFFSET(get<bool>, {0x248, 1, 0, 0})
	DMember(bool)                                      EnableRoomOverride                                          OFFSET(get<bool>, {0x249, 1, 0, 0})
	CMember(class AActor*)                             RoomOverride                                                OFFSET(get<T>, {0x250, 8, 0, 0})
};

/// Class /Script/AkAudio.AkStateValue
/// Size: 0x0000 (0x000060 - 0x000060)
class UAkStateValue : public UAkGroupValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/AkAudio.AkSubmixInputComponent
/// Size: 0x0060 (0x000420 - 0x000480)
class UAkSubmixInputComponent : public UAkAudioInputComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(class USoundSubmix*)                       SubmixToRecord                                              OFFSET(get<T>, {0x428, 8, 0, 0})
};

/// Struct /Script/AkAudio.AkSurfacePoly
/// Size: 0x0018 (0x000000 - 0x000018)
class FAkSurfacePoly : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UAkAcousticTexture*)                 Texture                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Occlusion                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      EnableSurface                                               OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(float)                                     SurfaceArea                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Class /Script/AkAudio.AkSurfaceReflectorSetComponent
/// Size: 0x0030 (0x000210 - 0x000240)
class UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	DMember(bool)                                      bEnableSurfaceReflectors                                    OFFSET(get<bool>, {0x210, 1, 0, 0})
	CMember(TArray<FAkSurfacePoly>)                    AcousticPolys                                               OFFSET(get<T>, {0x218, 16, 0, 0})
	DMember(bool)                                      bEnableDiffraction                                          OFFSET(get<bool>, {0x228, 1, 0, 0})
	DMember(bool)                                      bEnableDiffractionOnBoundaryEdges                           OFFSET(get<bool>, {0x229, 1, 0, 0})
	CMember(class AActor*)                             AssociatedRoom                                              OFFSET(get<T>, {0x230, 8, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	// void UpdateSurfaceReflectorSet();                                                                                        // [0x8b1f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.UpdateAcousticProperties
	// void UpdateAcousticProperties(TArray<FAkSurfacePoly> in_AcousticPolys);                                                  // [0x8b1e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	// void SendSurfaceReflectorSet();                                                                                          // [0x8b0e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
	// void RemoveSurfaceReflectorSet();                                                                                        // [0x8a9010] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkSwitchValue
/// Size: 0x0000 (0x000060 - 0x000060)
class UAkSwitchValue : public UAkGroupValue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/AkAudio.AkTrigger
/// Size: 0x0010 (0x000040 - 0x000050)
class UAkTrigger : public UAkAudioType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FWwiseTriggerCookedData)                   TriggerCookedData                                           OFFSET(getStruct<T>, {0x40, 12, 0, 0})
};

/// Class /Script/AkAudio.AkTVOSInitializationSettings
/// Size: 0x00E0 (0x000028 - 0x000108)
class UAkTVOSInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x30, 112, 0, 0})
	SMember(FAkAudioSession)                           AudioSession                                                OFFSET(getStruct<T>, {0xA0, 12, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xB0, 32, 0, 0})
	SMember(FAkAdvancedInitializationSettingsWithMultiCoreRendering) AdvancedSettings                              OFFSET(getStruct<T>, {0xD0, 56, 0, 0})
};

/// Class /Script/AkAudio.AkTVOSPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkWaapiCalls
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiCalls.Unsubscribe
	// FAKWaapiJsonObject Unsubscribe(FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);                        // [0x8b1d70] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.SubscribeToWaapi
	// FAKWaapiJsonObject SubscribeToWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiOptions, FDelegateProperty& callback, FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // [0x8b1b00] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.SetSubscriptionID
	// void SetSubscriptionID(FAkWaapiSubscriptionId& Subscription, int32_t ID);                                                // [0x8b1a30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
	// bool RegisterWaapiProjectLoadedCallback(FDelegateProperty& callback);                                                    // [0x8b0da0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
	// bool RegisterWaapiConnectionLostCallback(FDelegateProperty& callback);                                                   // [0x8b0cf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.GetSubscriptionID
	// int32_t GetSubscriptionID(FAkWaapiSubscriptionId& Subscription);                                                         // [0x8b0c60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
	// FText Conv_FAkWaapiSubscriptionIdToText(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);                                // [0x8b0100] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
	// FString Conv_FAkWaapiSubscriptionIdToString(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);                            // [0x8b0030] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiCalls.CallWaapi
	// FAKWaapiJsonObject CallWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiArgs, FAKWaapiJsonObject& WaapiOptions);    // [0x8afbf0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.SAkWaapiFieldNamesConv
/// Size: 0x0000 (0x000028 - 0x000028)
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
	// FText Conv_FAkWaapiFieldNamesToText(FAkWaapiFieldNames& INAkWaapiFieldNames);                                            // [0x8ac2d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
	// FString Conv_FAkWaapiFieldNamesToString(FAkWaapiFieldNames& INAkWaapiFieldNames);                                        // [0x8ac1e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkWaapiJsonManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiJsonManager.SetStringField
	// FAKWaapiJsonObject SetStringField(FAkWaapiFieldNames& FieldName, FString FieldValue, FAKWaapiJsonObject Target);         // [0x8b1850] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetObjectField
	// FAKWaapiJsonObject SetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject FieldValue, FAKWaapiJsonObject Target); // [0x8b1630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetNumberField
	// FAKWaapiJsonObject SetNumberField(FAkWaapiFieldNames& FieldName, float FieldValue, FAKWaapiJsonObject Target);           // [0x8b1460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetBoolField
	// FAKWaapiJsonObject SetBoolField(FAkWaapiFieldNames& FieldName, bool FieldValue, FAKWaapiJsonObject Target);              // [0x8b1290] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetArrayStringFields
	// FAKWaapiJsonObject SetArrayStringFields(FAkWaapiFieldNames& FieldName, TArray<FString>& FieldStringValues, FAKWaapiJsonObject Target); // [0x8b1090] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetArrayObjectFields
	// FAKWaapiJsonObject SetArrayObjectFields(FAkWaapiFieldNames& FieldName, TArray<FAKWaapiJsonObject>& FieldObjectValues, FAKWaapiJsonObject Target); // [0x8b0e70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetStringField
	// FString GetStringField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                        // [0x8b0ad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetObjectField
	// FAKWaapiJsonObject GetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                             // [0x8b0830] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetNumberField
	// float GetNumberField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                          // [0x8b06e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetIntegerField
	// int32_t GetIntegerField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                       // [0x8b0590] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetBoolField
	// bool GetBoolField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                             // [0x8b0440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetArrayField
	// TArray<FAKWaapiJsonObject> GetArrayField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                      // [0x8b01f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
	// FText Conv_FAKWaapiJsonObjectToText(FAKWaapiJsonObject INAKWaapiJsonObject);                                             // [0x8aff00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
	// FString Conv_FAKWaapiJsonObjectToString(FAKWaapiJsonObject INAKWaapiJsonObject);                                         // [0x8afdf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkWaapiUriConv
/// Size: 0x0000 (0x000028 - 0x000028)
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
	// FText Conv_FAkWaapiUriToText(FAkWaapiUri& INAkWaapiUri);                                                                 // [0x8ac2d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
	// FString Conv_FAkWaapiUriToString(FAkWaapiUri& INAkWaapiUri);                                                             // [0x8ac1e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AkAudio.AkWindowsAdvancedInitializationSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      UseHeadMountedDisplayAudioDevice                            OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(uint32_t)                                  MaxSystemAudioObjects                                       OFFSET(get<uint32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/AkAudio.AkWindowsInitializationSettings
/// Size: 0x00D8 (0x000028 - 0x000100)
class UAkWindowsInitializationSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAkCommonInitializationSettingsWithSampleRate) CommonSettings                                          OFFSET(getStruct<T>, {0x30, 112, 0, 0})
	SMember(FAkCommunicationSettingsWithSystemInitialization) CommunicationSettings                                OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	SMember(FAkWindowsAdvancedInitializationSettings)  AdvancedSettings                                            OFFSET(getStruct<T>, {0xC0, 64, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0x89bc70] Final|Native|Public  
};

/// Class /Script/AkAudio.AkWin32PlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkWin32PlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkWin64PlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkWin64PlatformInfo : public UAkPlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkWindowsPlatformInfo
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AkAudio.AkWwiseTree
/// Size: 0x0040 (0x000128 - 0x000168)
class UAkWwiseTree : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectionChanged                                          OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemDragged                                               OFFSET(getStruct<T>, {0x138, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.AkWwiseTree.SetSearchText
	// void SetSearchText(FString newText);                                                                                     // [0x8ac930] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkWwiseTree.GetSelectedItem
	// FAkWwiseObjectDetails GetSelectedItem();                                                                                 // [0x8b09b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkWwiseTree.GetSearchText
	// FString GetSearchText();                                                                                                 // [0x8ac490] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkWwiseTreeSelector
/// Size: 0x0060 (0x000128 - 0x000188)
class UAkWwiseTreeSelector : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectionChanged                                          OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemDragged                                               OFFSET(getStruct<T>, {0x138, 16, 0, 0})
};

/// Class /Script/AkAudio.AnimNotify_AkEventBase
/// Size: 0x0008 (0x000038 - 0x000040)
class UAnimNotify_AkEventBase : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ESpeedRateType)                            SpeedRateType                                               OFFSET(get<T>, {0x38, 1, 0, 0})
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventSection
/// Size: 0x0080 (0x0000E8 - 0x000168)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(class UAkAudioEvent*)                      Event                                                       OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(bool)                                      RetriggerEvent                                              OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(int32_t)                                   ScrubTailLengthMs                                           OFFSET(get<int32_t>, {0x11C, 4, 0, 0})
	DMember(bool)                                      StopAtSectionEnd                                            OFFSET(get<bool>, {0x120, 1, 0, 0})
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	CMember(ESequenceSpeedRateType)                    SpeedRateType                                               OFFSET(get<T>, {0x138, 1, 0, 0})
	DMember(float)                                     MaxSourceDuration                                           OFFSET(get<float>, {0x13C, 4, 0, 0})
	SMember(FString)                                   MaxDurationSourceID                                         OFFSET(getStruct<T>, {0x140, 16, 0, 0})
};

/// Class /Script/AkAudio.MovieSceneAkTrack
/// Size: 0x0018 (0x000078 - 0x000090)
class UMovieSceneAkTrack : public UMovieSceneTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(bool)                                      bIsAMasterTrack                                             OFFSET(get<bool>, {0x88, 1, 0, 0})
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventTrack
/// Size: 0x0008 (0x000090 - 0x000098)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Struct /Script/AkAudio.MovieSceneTangentDataSerializationHelper
/// Size: 0x0014 (0x000000 - 0x000014)
class FMovieSceneTangentDataSerializationHelper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     ArriveTangent                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LeaveTangent                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TEnumAsByte<ERichCurveTangentWeightMode>)  TangentWeightMode                                           OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     ArriveTangentWeight                                         OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     LeaveTangentWeight                                          OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/AkAudio.MovieSceneFloatValueSerializationHelper
/// Size: 0x001C (0x000000 - 0x00001C)
class FMovieSceneFloatValueSerializationHelper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<ERichCurveInterpMode>)         InterpMode                                                  OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(TEnumAsByte<ERichCurveTangentMode>)        TangentMode                                                 OFFSET(get<T>, {0x5, 1, 0, 0})
	SMember(FMovieSceneTangentDataSerializationHelper) Tangent                                                     OFFSET(getStruct<T>, {0x8, 20, 0, 0})
};

/// Struct /Script/AkAudio.MovieSceneFloatChannelSerializationHelper
/// Size: 0x0030 (0x000000 - 0x000030)
class FMovieSceneFloatChannelSerializationHelper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TEnumAsByte<ERichCurveExtrapolation>)      PreInfinityExtrap                                           OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<ERichCurveExtrapolation>)      PostInfinityExtrap                                          OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(TArray<int32_t>)                           Times                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FMovieSceneFloatValueSerializationHelper>) Values                                               OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(float)                                     DefaultValue                                                OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bHasDefaultValue                                            OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCSection
/// Size: 0x0168 (0x0000E8 - 0x000250)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(class UAkRtpc*)                            RTPC                                                        OFFSET(get<T>, {0xE8, 8, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FRichCurve)                                FloatCurve                                                  OFFSET(getStruct<T>, {0x100, 128, 0, 0})
	SMember(FMovieSceneFloatChannelSerializationHelper) FloatChannelSerializationHelper                            OFFSET(getStruct<T>, {0x180, 48, 0, 0})
	SMember(FMovieSceneFloatChannel)                   RTPCChannel                                                 OFFSET(getStruct<T>, {0x1B0, 160, 0, 0})
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCTrack
/// Size: 0x0008 (0x000090 - 0x000098)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/AkAudio.PostEventAsync
/// Size: 0x0058 (0x000030 - 0x000088)
class UPostEventAsync : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMulticastInlineDelegate)                  Completed                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.PostEventAsync.PostEventAsync
	// class UPostEventAsync* PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, bool bStopWhenAttachedToDestroyed); // [0x8b3a60] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.PostEventAsync.PollPostEventFuture
	// void PollPostEventFuture();                                                                                              // [0x8b3a20] Final|Native|Private 
};

/// Class /Script/AkAudio.PostEventAtLocationAsync
/// Size: 0x0050 (0x000030 - 0x000080)
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  Completed                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
	// class UPostEventAtLocationAsync* PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation); // [0x8b3c50] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.PostEventAtLocationAsync.PollPostEventFuture
	// void PollPostEventFuture();                                                                                              // [0x8b3a40] Final|Native|Private 
};

/// Struct /Script/AkAudio.AKWaapiJsonObject
/// Size: 0x0010 (0x000000 - 0x000010)
class FAKWaapiJsonObject : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AkAudio.AkWaapiSubscriptionId
/// Size: 0x0008 (0x000000 - 0x000008)
class FAkWaapiSubscriptionId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/AkAudio.AkExternalSourceInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FAkExternalSourceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ExternalSrcName                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(AkCodecId)                                 CodecID                                                     OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FString)                                   Filename                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(class UAkExternalMediaAsset*)              ExternalSourceAsset                                         OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      IsStreamed                                                  OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiEventBase
/// Size: 0x0002 (0x000000 - 0x000002)
class FAkMidiEventBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EAkMidiEventType)                          Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(char)                                      Chan                                                        OFFSET(get<char>, {0x1, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiProgramChange
/// Size: 0x0001 (0x000002 - 0x000003)
class FAkMidiProgramChange : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(char)                                      ProgramNum                                                  OFFSET(get<char>, {0x2, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiChannelAftertouch
/// Size: 0x0001 (0x000002 - 0x000003)
class FAkMidiChannelAftertouch : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(char)                                      Value                                                       OFFSET(get<char>, {0x2, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiNoteAftertouch
/// Size: 0x0002 (0x000002 - 0x000004)
class FAkMidiNoteAftertouch : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(char)                                      Note                                                        OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      Value                                                       OFFSET(get<char>, {0x3, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiPitchBend
/// Size: 0x0006 (0x000002 - 0x000008)
class FAkMidiPitchBend : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(char)                                      ValueLsb                                                    OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      ValueMsb                                                    OFFSET(get<char>, {0x3, 1, 0, 0})
	DMember(int32_t)                                   FullValue                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiCc
/// Size: 0x0002 (0x000002 - 0x000004)
class FAkMidiCc : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	CMember(EAkMidiCcValues)                           Cc                                                          OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(char)                                      Value                                                       OFFSET(get<char>, {0x3, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiNoteOnOff
/// Size: 0x0002 (0x000002 - 0x000004)
class FAkMidiNoteOnOff : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(char)                                      Note                                                        OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      Velocity                                                    OFFSET(get<char>, {0x3, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkMidiGeneric
/// Size: 0x0002 (0x000002 - 0x000004)
class FAkMidiGeneric : public FAkMidiEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(char)                                      Param1                                                      OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      Param2                                                      OFFSET(get<char>, {0x3, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkOutputSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FAkOutputSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   AudioDeviceShareSetName                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   IdDevice                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(PanningRule)                               PanRule                                                     OFFSET(get<T>, {0x14, 1, 0, 0})
	CMember(AkChannelConfiguration)                    ChannelConfig                                               OFFSET(get<T>, {0x15, 1, 0, 0})
};

/// Struct /Script/AkAudio.AkChannelMask
/// Size: 0x0004 (0x000000 - 0x000004)
class FAkChannelMask : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ChannelMask                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithCommSelection
/// Size: 0x0008 (0x000018 - 0x000020)
class FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EAkCommSystem)                             CommunicationSystem                                         OFFSET(get<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/AkAudio.AkReverbDescriptor
/// Size: 0x0028 (0x000000 - 0x000028)
class FAkReverbDescriptor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UPrimitiveComponent*)                Primitive                                                   OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/AkAudio.AkSurfaceEdgeInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FAkSurfaceEdgeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/AkAudio.AkSurfaceEdgeVerts
/// Size: 0x0018 (0x000000 - 0x000018)
class FAkSurfaceEdgeVerts : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/AkAudio.AkWaapiFieldNames
/// Size: 0x0010 (0x000000 - 0x000010)
class FAkWaapiFieldNames : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   FieldName                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AkAudio.AkWaapiUri
/// Size: 0x0010 (0x000000 - 0x000010)
class FAkWaapiUri : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Uri                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AkAudio.MovieSceneAkAudioEventTemplate
/// Size: 0x0008 (0x000020 - 0x000028)
class FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UMovieSceneAkAudioEventSection*)     Section                                                     OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/AkAudio.MovieSceneAkAudioRTPCTemplate
/// Size: 0x0008 (0x000020 - 0x000028)
class FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UMovieSceneAkAudioRTPCSection*)      Section                                                     OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Enum /Script/AkAudio.EAkCallbackType
/// Size: 0x13
enum class EAkCallbackType : uint8_t
{
	EAkCallbackType__EndOfEvent                                                      = 0,
	EAkCallbackType__Marker                                                          = 2,
	EAkCallbackType__Duration                                                        = 3,
	EAkCallbackType__Starvation                                                      = 5,
	EAkCallbackType__MusicPlayStarted                                                = 7,
	EAkCallbackType__MusicSyncBeat                                                   = 8,
	EAkCallbackType__MusicSyncBar                                                    = 9,
	EAkCallbackType__MusicSyncEntry                                                  = 10,
	EAkCallbackType__MusicSyncExit                                                   = 11,
	EAkCallbackType__MusicSyncGrid                                                   = 12,
	EAkCallbackType__MusicSyncUserCue                                                = 13,
	EAkCallbackType__MusicSyncPoint                                                  = 14,
	EAkCallbackType__MIDIEvent                                                       = 16
};

/// Enum /Script/AkAudio.EAkResult
/// Size: 0x58
enum class EAkResult : uint8_t
{
	EAkResult__NotImplemented                                                        = 0,
	EAkResult__Success                                                               = 1,
	EAkResult__Fail                                                                  = 2,
	EAkResult__PartialSuccess                                                        = 3,
	EAkResult__NotCompatible                                                         = 4,
	EAkResult__AlreadyConnected                                                      = 5,
	EAkResult__InvalidFile                                                           = 7,
	EAkResult__AudioFileHeaderTooLarge                                               = 8,
	EAkResult__MaxReached                                                            = 9,
	EAkResult__InvalidID                                                             = 14,
	EAkResult__IDNotFound                                                            = 15,
	EAkResult__InvalidInstanceID                                                     = 16,
	EAkResult__NoMoreData                                                            = 17,
	EAkResult__InvalidStateGroup                                                     = 20,
	EAkResult__ChildAlreadyHasAParent                                                = 21,
	EAkResult__InvalidLanguage                                                       = 22,
	EAkResult__CannotAddItseflAsAChild                                               = 23,
	EAkResult__InvalidParameter                                                      = 31,
	EAkResult__ElementAlreadyInList                                                  = 35,
	EAkResult__PathNotFound                                                          = 36,
	EAkResult__PathNoVertices                                                        = 37,
	EAkResult__PathNotRunning                                                        = 38,
	EAkResult__PathNotPaused                                                         = 39,
	EAkResult__PathNodeAlreadyInList                                                 = 40,
	EAkResult__PathNodeNotInList                                                     = 41,
	EAkResult__DataNeeded                                                            = 43,
	EAkResult__NoDataNeeded                                                          = 44,
	EAkResult__DataReady                                                             = 45,
	EAkResult__NoDataReady                                                           = 46,
	EAkResult__InsufficientMemory                                                    = 52,
	EAkResult__Cancelled                                                             = 53,
	EAkResult__UnknownBankID                                                         = 54,
	EAkResult__BankReadError                                                         = 56,
	EAkResult__InvalidSwitchType                                                     = 57,
	EAkResult__FormatNotReady                                                        = 63,
	EAkResult__WrongBankVersion                                                      = 64,
	EAkResult__FileNotFound                                                          = 66,
	EAkResult__DeviceNotReady                                                        = 67,
	EAkResult__BankAlreadyLoaded                                                     = 69,
	EAkResult__RenderedFX                                                            = 71,
	EAkResult__ProcessNeeded                                                         = 72,
	EAkResult__ProcessDone                                                           = 73,
	EAkResult__MemManagerNotInitialized                                              = 74,
	EAkResult__StreamMgrNotInitialized                                               = 75,
	EAkResult__SSEInstructionsNotSupported                                           = 76,
	EAkResult__Busy                                                                  = 77,
	EAkResult__UnsupportedChannelConfig                                              = 78,
	EAkResult__PluginMediaNotAvailable                                               = 79,
	EAkResult__MustBeVirtualized                                                     = 80,
	EAkResult__CommandTooLarge                                                       = 81,
	EAkResult__RejectedByFilter                                                      = 82,
	EAkResult__InvalidCustomPlatformName                                             = 83,
	EAkResult__DLLCannotLoad                                                         = 84,
	EAkResult__DLLPathNotFound                                                       = 85,
	EAkResult__NoJavaVM                                                              = 86,
	EAkResult__OpenSLError                                                           = 87,
	EAkResult__PluginNotRegistered                                                   = 88,
	EAkResult__DataAlignmentError                                                    = 89
};

/// Enum /Script/AkAudio.EAkAndroidAudioAPI
/// Size: 0x02
enum class EAkAndroidAudioAPI : uint8_t
{
	EAkAndroidAudioAPI__AAudio                                                       = 0,
	EAkAndroidAudioAPI__OpenSL_ES                                                    = 1
};

/// Enum /Script/AkAudio.EAkAudioSessionMode
/// Size: 0x07
enum class EAkAudioSessionMode : uint32_t
{
	EAkAudioSessionMode__Default                                                     = 0,
	EAkAudioSessionMode__VoiceChat                                                   = 1,
	EAkAudioSessionMode__GameChat                                                    = 2,
	EAkAudioSessionMode__VideoRecording                                              = 3,
	EAkAudioSessionMode__Measurement                                                 = 4,
	EAkAudioSessionMode__MoviePlayback                                               = 5,
	EAkAudioSessionMode__VideoChat                                                   = 6
};

/// Enum /Script/AkAudio.EAkAudioSessionCategoryOptions
/// Size: 0x04
enum class EAkAudioSessionCategoryOptions : uint8_t
{
	EAkAudioSessionCategoryOptions__MixWithOthers                                    = 0,
	EAkAudioSessionCategoryOptions__DuckOthers                                       = 1,
	EAkAudioSessionCategoryOptions__AllowBluetooth                                   = 2,
	EAkAudioSessionCategoryOptions__DefaultToSpeaker                                 = 3
};

/// Enum /Script/AkAudio.EAkAudioSessionCategory
/// Size: 0x03
enum class EAkAudioSessionCategory : uint32_t
{
	EAkAudioSessionCategory__Ambient                                                 = 0,
	EAkAudioSessionCategory__SoloAmbient                                             = 1,
	EAkAudioSessionCategory__PlayAndRecord                                           = 2
};

/// Enum /Script/AkAudio.ESpeedRateType
/// Size: 0x04
enum class ESpeedRateType : uint8_t
{
	ESpeedRateType__none                                                             = 0,
	ESpeedRateType__BattleRate1                                                      = 1,
	ESpeedRateType__BattleRate2                                                      = 2,
	ESpeedRateType__BattleRate3                                                      = 3
};

/// Enum /Script/AkAudio.EReflectionFilterBits
/// Size: 0x03
enum class EReflectionFilterBits : uint8_t
{
	EReflectionFilterBits__Wall                                                      = 0,
	EReflectionFilterBits__Ceiling                                                   = 1,
	EReflectionFilterBits__Floor                                                     = 2
};

/// Enum /Script/AkAudio.AkCodecId
/// Size: 0x09
enum class AkCodecId : uint8_t
{
	AkCodecId__None                                                                  = 0,
	AkCodecId__PCM                                                                   = 1,
	AkCodecId__ADPCM                                                                 = 2,
	AkCodecId__XMA                                                                   = 3,
	AkCodecId__Vorbis                                                                = 4,
	AkCodecId__ATRAC9                                                                = 12,
	AkCodecId__OpusNX                                                                = 17,
	AkCodecId__AkOpus                                                                = 19,
	AkCodecId__AkOpusWEM                                                             = 20
};

/// Enum /Script/AkAudio.EAkMidiCcValues
/// Size: 0x97
enum class EAkMidiCcValues : uint8_t
{
	EAkMidiCcValues__AkMidiCcBankSelectCoarse                                        = 0,
	EAkMidiCcValues__AkMidiCcModWheelCoarse                                          = 1,
	EAkMidiCcValues__AkMidiCcBreathCtrlCoarse                                        = 2,
	EAkMidiCcValues__AkMidiCcCtrl3Coarse                                             = 3,
	EAkMidiCcValues__AkMidiCcFootPedalCoarse                                         = 4,
	EAkMidiCcValues__AkMidiCcPortamentoCoarse                                        = 5,
	EAkMidiCcValues__AkMidiCcDataEntryCoarse                                         = 6,
	EAkMidiCcValues__AkMidiCcVolumeCoarse                                            = 7,
	EAkMidiCcValues__AkMidiCcBalanceCoarse                                           = 8,
	EAkMidiCcValues__AkMidiCcCtrl9Coarse                                             = 9,
	EAkMidiCcValues__AkMidiCcPanPositionCoarse                                       = 10,
	EAkMidiCcValues__AkMidiCcExpressionCoarse                                        = 11,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Coarse                                       = 12,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Coarse                                       = 13,
	EAkMidiCcValues__AkMidiCcCtrl14Coarse                                            = 14,
	EAkMidiCcValues__AkMidiCcCtrl15Coarse                                            = 15,
	EAkMidiCcValues__AkMidiCcGenSlider1                                              = 16,
	EAkMidiCcValues__AkMidiCcGenSlider2                                              = 17,
	EAkMidiCcValues__AkMidiCcGenSlider3                                              = 18,
	EAkMidiCcValues__AkMidiCcGenSlider4                                              = 19,
	EAkMidiCcValues__AkMidiCcCtrl20Coarse                                            = 20,
	EAkMidiCcValues__AkMidiCcCtrl21Coarse                                            = 21,
	EAkMidiCcValues__AkMidiCcCtrl22Coarse                                            = 22,
	EAkMidiCcValues__AkMidiCcCtrl23Coarse                                            = 23,
	EAkMidiCcValues__AkMidiCcCtrl24Coarse                                            = 24,
	EAkMidiCcValues__AkMidiCcCtrl25Coarse                                            = 25,
	EAkMidiCcValues__AkMidiCcCtrl26Coarse                                            = 26,
	EAkMidiCcValues__AkMidiCcCtrl27Coarse                                            = 27,
	EAkMidiCcValues__AkMidiCcCtrl28Coarse                                            = 28,
	EAkMidiCcValues__AkMidiCcCtrl29Coarse                                            = 29,
	EAkMidiCcValues__AkMidiCcCtrl30Coarse                                            = 30,
	EAkMidiCcValues__AkMidiCcCtrl31Coarse                                            = 31,
	EAkMidiCcValues__AkMidiCcBankSelectFine                                          = 32,
	EAkMidiCcValues__AkMidiCcModWheelFine                                            = 33,
	EAkMidiCcValues__AkMidiCcBreathCtrlFine                                          = 34,
	EAkMidiCcValues__AkMidiCcCtrl3Fine                                               = 35,
	EAkMidiCcValues__AkMidiCcFootPedalFine                                           = 36,
	EAkMidiCcValues__AkMidiCcPortamentoFine                                          = 37,
	EAkMidiCcValues__AkMidiCcDataEntryFine                                           = 38,
	EAkMidiCcValues__AkMidiCcVolumeFine                                              = 39,
	EAkMidiCcValues__AkMidiCcBalanceFine                                             = 40,
	EAkMidiCcValues__AkMidiCcCtrl9Fine                                               = 41,
	EAkMidiCcValues__AkMidiCcPanPositionFine                                         = 42,
	EAkMidiCcValues__AkMidiCcExpressionFine                                          = 43,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Fine                                         = 44,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Fine                                         = 45,
	EAkMidiCcValues__AkMidiCcCtrl14Fine                                              = 46,
	EAkMidiCcValues__AkMidiCcCtrl15Fine                                              = 47,
	EAkMidiCcValues__AkMidiCcCtrl20Fine                                              = 52,
	EAkMidiCcValues__AkMidiCcCtrl21Fine                                              = 53,
	EAkMidiCcValues__AkMidiCcCtrl22Fine                                              = 54,
	EAkMidiCcValues__AkMidiCcCtrl23Fine                                              = 55,
	EAkMidiCcValues__AkMidiCcCtrl24Fine                                              = 56,
	EAkMidiCcValues__AkMidiCcCtrl25Fine                                              = 57,
	EAkMidiCcValues__AkMidiCcCtrl26Fine                                              = 58,
	EAkMidiCcValues__AkMidiCcCtrl27Fine                                              = 59,
	EAkMidiCcValues__AkMidiCcCtrl28Fine                                              = 60,
	EAkMidiCcValues__AkMidiCcCtrl29Fine                                              = 61,
	EAkMidiCcValues__AkMidiCcCtrl30Fine                                              = 62,
	EAkMidiCcValues__AkMidiCcCtrl31Fine                                              = 63,
	EAkMidiCcValues__AkMidiCcHoldPedal                                               = 64,
	EAkMidiCcValues__AkMidiCcPortamentoOnOff                                         = 65,
	EAkMidiCcValues__AkMidiCcSustenutoPedal                                          = 66,
	EAkMidiCcValues__AkMidiCcSoftPedal                                               = 67,
	EAkMidiCcValues__AkMidiCcLegatoPedal                                             = 68,
	EAkMidiCcValues__AkMidiCcHoldPedal2                                              = 69,
	EAkMidiCcValues__AkMidiCcSoundVariation                                          = 70,
	EAkMidiCcValues__AkMidiCcSoundTimbre                                             = 71,
	EAkMidiCcValues__AkMidiCcSoundReleaseTime                                        = 72,
	EAkMidiCcValues__AkMidiCcSoundAttackTime                                         = 73,
	EAkMidiCcValues__AkMidiCcSoundBrightness                                         = 74,
	EAkMidiCcValues__AkMidiCcSoundCtrl6                                              = 75,
	EAkMidiCcValues__AkMidiCcSoundCtrl7                                              = 76,
	EAkMidiCcValues__AkMidiCcSoundCtrl8                                              = 77,
	EAkMidiCcValues__AkMidiCcSoundCtrl9                                              = 78,
	EAkMidiCcValues__AkMidiCcSoundCtrl10                                             = 79,
	EAkMidiCcValues__AkMidiCcGeneralButton1                                          = 80,
	EAkMidiCcValues__AkMidiCcGeneralButton2                                          = 81,
	EAkMidiCcValues__AkMidiCcGeneralButton3                                          = 82,
	EAkMidiCcValues__AkMidiCcGeneralButton4                                          = 83,
	EAkMidiCcValues__AkMidiCcReverbLevel                                             = 91,
	EAkMidiCcValues__AkMidiCcTremoloLevel                                            = 92,
	EAkMidiCcValues__AkMidiCcChorusLevel                                             = 93,
	EAkMidiCcValues__AkMidiCcCelesteLevel                                            = 94,
	EAkMidiCcValues__AkMidiCcPhaserLevel                                             = 95,
	EAkMidiCcValues__AkMidiCcDataButtonP1                                            = 96,
	EAkMidiCcValues__AkMidiCcDataButtonM1                                            = 97,
	EAkMidiCcValues__AkMidiCcNonRegisterCoarse                                       = 98,
	EAkMidiCcValues__AkMidiCcNonRegisterFine                                         = 99,
	EAkMidiCcValues__AkMidiCcAllSoundOff                                             = 120,
	EAkMidiCcValues__AkMidiCcAllControllersOff                                       = 121,
	EAkMidiCcValues__AkMidiCcLocalKeyboard                                           = 122,
	EAkMidiCcValues__AkMidiCcAllNotesOff                                             = 123,
	EAkMidiCcValues__AkMidiCcOmniModeOff                                             = 124,
	EAkMidiCcValues__AkMidiCcOmniModeOn                                              = 125,
	EAkMidiCcValues__AkMidiCcOmniMonophonicOn                                        = 126,
	EAkMidiCcValues__AkMidiCcOmniPolyphonicOn                                        = 127
};

/// Enum /Script/AkAudio.EAkMidiEventType
/// Size: 0x11
enum class EAkMidiEventType : uint8_t
{
	EAkMidiEventType__AkMidiEventTypeInvalid                                         = 0,
	EAkMidiEventType__AkMidiEventTypeNoteOff                                         = 128,
	EAkMidiEventType__AkMidiEventTypeNoteOn                                          = 144,
	EAkMidiEventType__AkMidiEventTypeNoteAftertouch                                  = 160,
	EAkMidiEventType__AkMidiEventTypeController                                      = 176,
	EAkMidiEventType__AkMidiEventTypeProgramChange                                   = 192,
	EAkMidiEventType__AkMidiEventTypeChannelAftertouch                               = 208,
	EAkMidiEventType__AkMidiEventTypePitchBend                                       = 224,
	EAkMidiEventType__AkMidiEventTypeSysex                                           = 240,
	EAkMidiEventType__AkMidiEventTypeEscape                                          = 247,
	EAkMidiEventType__AkMidiEventTypeMeta                                            = 255
};

/// Enum /Script/AkAudio.ERTPCValueType
/// Size: 0x05
enum class ERTPCValueType : uint8_t
{
	ERTPCValueType__Default                                                          = 0,
	ERTPCValueType__Global                                                           = 1,
	ERTPCValueType__GameObject                                                       = 2,
	ERTPCValueType__PlayingID                                                        = 3,
	ERTPCValueType__Unavailable                                                      = 4
};

/// Enum /Script/AkAudio.EAkCurveInterpolation
/// Size: 0x11
enum class EAkCurveInterpolation : uint8_t
{
	EAkCurveInterpolation__Log3                                                      = 0,
	EAkCurveInterpolation__Sine                                                      = 1,
	EAkCurveInterpolation__Log1                                                      = 2,
	EAkCurveInterpolation__InvSCurve                                                 = 3,
	EAkCurveInterpolation__Linear                                                    = 4,
	EAkCurveInterpolation__SCurve                                                    = 5,
	EAkCurveInterpolation__Exp1                                                      = 6,
	EAkCurveInterpolation__SineRecip                                                 = 7,
	EAkCurveInterpolation__Exp3                                                      = 8,
	EAkCurveInterpolation__LastFadeCurve                                             = 8,
	EAkCurveInterpolation__Constant                                                  = 9
};

/// Enum /Script/AkAudio.AkActionOnEventType
/// Size: 0x05
enum class AkActionOnEventType : uint8_t
{
	AkActionOnEventType__Stop                                                        = 0,
	AkActionOnEventType__Pause                                                       = 1,
	AkActionOnEventType__Resume                                                      = 2,
	AkActionOnEventType__Break                                                       = 3,
	AkActionOnEventType__ReleaseEnvelope                                             = 4
};

/// Enum /Script/AkAudio.AkMultiPositionType
/// Size: 0x03
enum class AkMultiPositionType : uint8_t
{
	AkMultiPositionType__SingleSource                                                = 0,
	AkMultiPositionType__MultiSources                                                = 1,
	AkMultiPositionType__MultiDirections                                             = 2
};

/// Enum /Script/AkAudio.AkSpeakerConfiguration
/// Size: 0x16
enum class AkSpeakerConfiguration : uint32_t
{
	AkSpeakerConfiguration__Ak_Speaker_Front_Left                                    = 1,
	AkSpeakerConfiguration__Ak_Speaker_Front_Right                                   = 2,
	AkSpeakerConfiguration__Ak_Speaker_Front_Center                                  = 4,
	AkSpeakerConfiguration__Ak_Speaker_Low_Frequency                                 = 8,
	AkSpeakerConfiguration__Ak_Speaker_Back_Left                                     = 16,
	AkSpeakerConfiguration__Ak_Speaker_Back_Right                                    = 32,
	AkSpeakerConfiguration__Ak_Speaker_Back_Center                                   = 256,
	AkSpeakerConfiguration__Ak_Speaker_Side_Left                                     = 512,
	AkSpeakerConfiguration__Ak_Speaker_Side_Right                                    = 1024,
	AkSpeakerConfiguration__Ak_Speaker_Top                                           = 2048,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Left                             = 4096,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Center                           = 8192,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Right                            = 16384,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Left                              = 32768,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Center                            = 65536,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Right                             = 131072
};

/// Enum /Script/AkAudio.AkChannelConfiguration
/// Size: 0x27
enum class AkChannelConfiguration : uint8_t
{
	AkChannelConfiguration__Ak_Parent                                                = 0,
	AkChannelConfiguration__Ak_MainMix                                               = 1,
	AkChannelConfiguration__Ak_Passthrough                                           = 2,
	AkChannelConfiguration__Ak_LFE                                                   = 3,
	AkChannelConfiguration__AK_Audio_Objects                                         = 4,
	AkChannelConfiguration__Ak_1                                                     = 5,
	AkChannelConfiguration__Ak_2                                                     = 6,
	AkChannelConfiguration__Ak_28                                                    = 7,
	AkChannelConfiguration__Ak_3                                                     = 8,
	AkChannelConfiguration__Ak_310                                                   = 9,
	AkChannelConfiguration__Ak_4                                                     = 10,
	AkChannelConfiguration__Ak_412                                                   = 11,
	AkChannelConfiguration__Ak_5                                                     = 12,
	AkChannelConfiguration__Ak_514                                                   = 13,
	AkChannelConfiguration__Ak_7                                                     = 14,
	AkChannelConfiguration__Ak_5_1                                                   = 15,
	AkChannelConfiguration__Ak_7_1                                                   = 16,
	AkChannelConfiguration__Ak_7_118                                                 = 17,
	AkChannelConfiguration__Ak_Auro_9                                                = 18,
	AkChannelConfiguration__Ak_Auro_10                                               = 19,
	AkChannelConfiguration__Ak_Auro_11                                               = 20,
	AkChannelConfiguration__Ak_Auro_13                                               = 21,
	AkChannelConfiguration__Ak_Ambisonics_1st_order                                  = 22,
	AkChannelConfiguration__Ak_Ambisonics_2nd_order                                  = 23,
	AkChannelConfiguration__Ak_Ambisonics_3rd_order                                  = 24,
	AkChannelConfiguration__Ak_Ambisonics_4th_order                                  = 25,
	AkChannelConfiguration__Ak_Ambisonics_5th_order                                  = 26
};

/// Enum /Script/AkAudio.AkAcousticPortalState
/// Size: 0x02
enum class AkAcousticPortalState : uint8_t
{
	AkAcousticPortalState__Closed                                                    = 0,
	AkAcousticPortalState__Open                                                      = 1
};

/// Enum /Script/AkAudio.PanningRule
/// Size: 0x02
enum class PanningRule : uint8_t
{
	PanningRule__PanningRule_Speakers                                                = 0,
	PanningRule__PanningRule_Headphones                                              = 1
};

/// Enum /Script/AkAudio.EAkAudioContext
/// Size: 0x04
enum class EAkAudioContext : uint8_t
{
	EAkAudioContext__Foreign                                                         = 0,
	EAkAudioContext__GameplayAudio                                                   = 1,
	EAkAudioContext__EditorAudio                                                     = 2,
	EAkAudioContext__AlwaysActive                                                    = 3
};

/// Enum /Script/AkAudio.AkMeshType
/// Size: 0x02
enum class AkMeshType : uint8_t
{
	AkMeshType__StaticMesh                                                           = 0,
	AkMeshType__CollisionMesh                                                        = 1
};

/// Enum /Script/AkAudio.EAkCommSystem
/// Size: 0x02
enum class EAkCommSystem : uint32_t
{
	EAkCommSystem__Socket                                                            = 0,
	EAkCommSystem__HTCS                                                              = 1
};

/// Enum /Script/AkAudio.EAkChannelMask
/// Size: 0x16
enum class EAkChannelMask : uint8_t
{
	EAkChannelMask__FrontLeft                                                        = 0,
	EAkChannelMask__FrontRight                                                       = 1,
	EAkChannelMask__FrontCenter                                                      = 2,
	EAkChannelMask__LowFrequency                                                     = 3,
	EAkChannelMask__BackLeft                                                         = 4,
	EAkChannelMask__BackRight                                                        = 5,
	EAkChannelMask__BackCenter                                                       = 8,
	EAkChannelMask__SideLeft                                                         = 9,
	EAkChannelMask__SideRight                                                        = 10,
	EAkChannelMask__Top                                                              = 11,
	EAkChannelMask__HeightFrontLeft                                                  = 12,
	EAkChannelMask__HeightFrontCenter                                                = 13,
	EAkChannelMask__HeightFrontRight                                                 = 14,
	EAkChannelMask__HeightBackLeft                                                   = 15,
	EAkChannelMask__HeightBackCenter                                                 = 16,
	EAkChannelMask__HeightBackRight                                                  = 17
};

/// Enum /Script/AkAudio.EAkChannelConfigType
/// Size: 0x03
enum class EAkChannelConfigType : uint32_t
{
	EAkChannelConfigType__Anonymous                                                  = 0,
	EAkChannelConfigType__Standard                                                   = 1,
	EAkChannelConfigType__Ambisonic                                                  = 2
};

/// Enum /Script/AkAudio.EAkPanningRule
/// Size: 0x02
enum class EAkPanningRule : uint32_t
{
	EAkPanningRule__Speakers                                                         = 0,
	EAkPanningRule__Headphones                                                       = 1
};

/// Enum /Script/AkAudio.EAkUnrealAudioRouting
/// Size: 0x06
enum class EAkUnrealAudioRouting : uint32_t
{
	EAkUnrealAudioRouting__Custom                                                    = 0,
	EAkUnrealAudioRouting__Separate                                                  = 1,
	EAkUnrealAudioRouting__AudioLink                                                 = 2,
	EAkUnrealAudioRouting__AudioMixer                                                = 3,
	EAkUnrealAudioRouting__EnableWwiseOnly                                           = 4,
	EAkUnrealAudioRouting__EnableUnrealOnly                                          = 5
};

/// Enum /Script/AkAudio.EAkCollisionChannel
/// Size: 0x09
enum class EAkCollisionChannel : uint8_t
{
	EAKCC_WorldStatic                                                                = 0,
	EAKCC_WorldDynamic                                                               = 1,
	EAKCC_Pawn                                                                       = 2,
	EAKCC_Visibility                                                                 = 3,
	EAKCC_Camera                                                                     = 4,
	EAKCC_PhysicsBody                                                                = 5,
	EAKCC_Vehicle                                                                    = 6,
	EAKCC_Destructible                                                               = 7,
	EAKCC_UseIntegrationSettingsDefault                                              = 8
};

/// Enum /Script/AkAudio.EAkFitToGeometryMode
/// Size: 0x03
enum class EAkFitToGeometryMode : uint8_t
{
	EAkFitToGeometryMode__OrientedBox                                                = 0,
	EAkFitToGeometryMode__AlignedBox                                                 = 1,
	EAkFitToGeometryMode__ConvexPolyhedron                                           = 2
};

/// Enum /Script/AkAudio.ESequenceSpeedRateType
/// Size: 0x04
enum class ESequenceSpeedRateType : uint8_t
{
	ESequenceSpeedRateType__none                                                     = 0,
	ESequenceSpeedRateType__BattleRate1                                              = 1,
	ESequenceSpeedRateType__BattleRate2                                              = 2,
	ESequenceSpeedRateType__BattleRate3                                              = 3
};


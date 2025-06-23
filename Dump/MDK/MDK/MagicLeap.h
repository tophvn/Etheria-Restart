
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: HeadMountedDisplay
/// dependency: MRMesh

/// Class /Script/MagicLeap.InAppPurchaseComponent
/// Size: 0x0078 (0x0000B0 - 0x000128)
class UInAppPurchaseComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FMulticastInlineDelegate)                  InAppPurchaseLogMessage                                     OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  GetItemsDetailsSuccess                                      OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  GetItemsDetailsFailure                                      OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  PurchaseConfirmationSuccess                                 OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  PurchaseConfirmationFailure                                 OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  GetPurchaseHistorySuccess                                   OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  GetPurchaseHistoryFailure                                   OFFSET(getStruct<T>, {0x110, 16, 0, 0})


	/// Functions
	// Function /Script/MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
	// bool TryPurchaseItemAsync(FPurchaseItemDetails& ItemDetails);                                                            // [0x130d080] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync
	// bool TryGetPurchaseHistoryAsync(int32_t InNumPages);                                                                     // [0x130cfe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync
	// bool TryGetItemsDetailsAsync(TArray<FString>& ItemIDs);                                                                  // [0x130cf00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
	// void PurchaseConfirmationSuccess__DelegateSignature(FPurchaseConfirmation& PurchaseConfirmations);                       // [0x198a600] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature
	// void PurchaseConfirmationFailure__DelegateSignature();                                                                   // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature
	// void InAppPurchaseLogMessage__DelegateSignature(FString LogMessage);                                                     // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature
	// void GetPurchaseHistorySuccess__DelegateSignature(TArray<FPurchaseConfirmation>& PurchaseHistory);                       // [0x198a600] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature
	// void GetPurchaseHistoryFailure__DelegateSignature();                                                                     // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
	// void GetItemsDetailsSuccess__DelegateSignature(TArray<FPurchaseItemDetails>& ItemsDetails);                              // [0x198a600] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature
	// void GetItemsDetailsFailure__DelegateSignature();                                                                        // [0x198a600] MulticastDelegate|Public|Delegate 
};

/// Class /Script/MagicLeap.LuminApplicationLifecycleComponent
/// Size: 0x0050 (0x000140 - 0x000190)
class ULuminApplicationLifecycleComponent : public UApplicationLifecycleComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FMulticastInlineDelegate)                  DeviceHasReactivatedDelegate                                OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DeviceWillEnterRealityModeDelegate                          OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DeviceWillGoInStandbyDelegate                               OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  FocusLostDelegate                                           OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  FocusGainedDelegate                                         OFFSET(getStruct<T>, {0x180, 16, 0, 0})
};

/// Class /Script/MagicLeap.MagicLeapHeadTrackingNotificationsComponent
/// Size: 0x0090 (0x000140 - 0x0001D0)
class UMagicLeapHeadTrackingNotificationsComponent : public UVRNotificationsComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FMulticastInlineDelegate)                  OnHeadTrackingLost                                          OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHeadTrackingRecovered                                     OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHeadTrackingRecoveryFailed                                OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHeadTrackingNewSessionStarted                             OFFSET(getStruct<T>, {0x170, 16, 0, 0})
};

/// Class /Script/MagicLeap.MagicLeapHMDFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMagicLeapHMDFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor
	// void SetStabilizationDepthActor(class AActor* InStabilizationDepthActor, bool bSetFocusActor);                           // [0x130ce40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor
	// void SetFocusActor(class AActor* InFocusActor, bool bSetStabilizationActor);                                             // [0x130cd80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation
	// void SetBaseRotation(FRotator& InBaseRotation);                                                                          // [0x130cd00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition
	// void SetBasePosition(FVector& InBasePosition);                                                                           // [0x130cd00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation
	// void SetBaseOrientation(FQuat& InBaseOrientation);                                                                       // [0x130cd00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady
	// bool SetAppReady();                                                                                                      // [0x130ccd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD
	// bool IsRunningOnMagicLeapHMD();                                                                                          // [0x130c660] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel
	// int32_t GetPlatformAPILevel();                                                                                           // [0x1221c40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision
	// int32_t GetMLSDKVersionRevision();                                                                                       // [0x1221c40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor
	// int32_t GetMLSDKVersionMinor();                                                                                          // [0x1221c40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor
	// int32_t GetMLSDKVersionMajor();                                                                                          // [0x1221c40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion
	// FString GetMLSDKVersion();                                                                                               // [0x130c580] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel
	// int32_t GetMinimumAPILevel();                                                                                            // [0x130c600] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState
	// bool GetHeadTrackingState(FMagicLeapHeadTrackingState& State);                                                           // [0x130c4f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents
	// bool GetHeadTrackingMapEvents(TSet<EMagicLeapHeadTrackingMapEvent>& MapEvents);                                          // [0x130c3b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo
	// bool GetGraphicsClientPerformanceInfo(FMagicLeapGraphicsClientPerformanceInfo& PerformanceInfo);                         // [0x130c300] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MagicLeap.MagicLeapMeshTrackerComponent
/// Size: 0x0098 (0x0001F8 - 0x000290)
class UMagicLeapMeshTrackerComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	SMember(FMulticastInlineDelegate)                  OnMeshTrackerUpdated                                        OFFSET(getStruct<T>, {0x200, 16, 0, 0})
	DMember(bool)                                      ScanWorld                                                   OFFSET(get<bool>, {0x210, 1, 0, 0})
	CMember(EMagicLeapMeshType)                        MeshType                                                    OFFSET(get<T>, {0x211, 1, 0, 0})
	CMember(class UBoxComponent*)                      BoundingVolume                                              OFFSET(get<T>, {0x218, 8, 0, 0})
	CMember(EMagicLeapMeshLOD)                         LevelOfDetail                                               OFFSET(get<T>, {0x220, 1, 0, 0})
	DMember(float)                                     PerimeterOfGapsToFill                                       OFFSET(get<float>, {0x224, 4, 0, 0})
	DMember(bool)                                      Planarize                                                   OFFSET(get<bool>, {0x228, 1, 0, 0})
	DMember(float)                                     DisconnectedSectionArea                                     OFFSET(get<float>, {0x22C, 4, 0, 0})
	DMember(bool)                                      RequestNormals                                              OFFSET(get<bool>, {0x230, 1, 0, 0})
	DMember(bool)                                      RequestVertexConfidence                                     OFFSET(get<bool>, {0x231, 1, 0, 0})
	CMember(EMagicLeapMeshVertexColorMode)             VertexColorMode                                             OFFSET(get<T>, {0x232, 1, 0, 0})
	CMember(TArray<FColor>)                            BlockVertexColors                                           OFFSET(get<T>, {0x238, 16, 0, 0})
	SMember(FLinearColor)                              VertexColorFromConfidenceZero                               OFFSET(getStruct<T>, {0x248, 16, 0, 0})
	SMember(FLinearColor)                              VertexColorFromConfidenceOne                                OFFSET(getStruct<T>, {0x258, 16, 0, 0})
	DMember(bool)                                      RemoveOverlappingTriangles                                  OFFSET(get<bool>, {0x268, 1, 0, 0})
	CMember(class UMRMeshComponent*)                   MRMesh                                                      OFFSET(get<T>, {0x270, 8, 0, 0})
	DMember(int32_t)                                   BricksPerFrame                                              OFFSET(get<int32_t>, {0x278, 4, 0, 0})


	/// Functions
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks
	// void SelectMeshBlocks(FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh);       // [0x130cbb0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
	// void OnMeshTrackerUpdated__DelegateSignature(FGuid ID, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x198a600] MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates
	// int32_t GetNumQueuedBlockUpdates();                                                                                      // [0x130c630] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh
	// void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x130c270] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector
	// void DisconnectBlockSelector();                                                                                          // [0x130c250] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x130c1c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector
	// void ConnectBlockSelector(TScriptInterface<Class> Selector);                                                             // [0x130c120] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MagicLeap.MagicLeapSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UMagicLeapSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bEnableZI                                                   OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bUseVulkanForZI                                             OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bUseMLAudioForZI                                            OFFSET(get<bool>, {0x2A, 1, 0, 0})
};

/// Class /Script/MagicLeap.MagicLeapMeshBlockSelectorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMagicLeapMeshBlockSelectorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks
	// void SelectMeshBlocks(FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh);       // [0x130ca90] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MagicLeap.MagicLeapRaycastComponent
/// Size: 0x0068 (0x0000B0 - 0x000118)
class UMagicLeapRaycastComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:


	/// Functions
	// Function /Script/MagicLeap.MagicLeapRaycastComponent.RequestRaycast
	// bool RequestRaycast(FMagicLeapRaycastQueryParams& RequestParams, FDelegateProperty& ResultDelegate);                     // [0x130c940] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature
	// void RaycastResultDelegate__DelegateSignature(FMagicLeapRaycastHitResult HitResult);                                     // [0x198a600] Public|Delegate      
};

/// Class /Script/MagicLeap.MagicLeapRaycastFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMagicLeapRaycastFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams
	// FMagicLeapRaycastQueryParams MakeRaycastQueryParams(FVector Position, FVector Direction, FVector UpVector, int32_t Width, int32_t Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32_t UserData); // [0x130c690] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/MagicLeap.PurchaseItemDetails
/// Size: 0x0040 (0x000000 - 0x000040)
class FPurchaseItemDetails : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   Price                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(PurchaseType)                              Type                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Struct /Script/MagicLeap.PurchaseConfirmation
/// Size: 0x0050 (0x000000 - 0x000050)
class FPurchaseConfirmation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   PackageName                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(PurchaseType)                              Type                                                        OFFSET(get<T>, {0x48, 1, 0, 0})
};

/// Struct /Script/MagicLeap.MagicLeapMeshBlockRequest
/// Size: 0x0014 (0x000000 - 0x000014)
class FMagicLeapMeshBlockRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGuid)                                     BlockID                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EMagicLeapMeshLOD)                         LevelOfDetail                                               OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/MagicLeap.MagicLeapMeshBlockInfo
/// Size: 0x0048 (0x000000 - 0x000048)
class FMagicLeapMeshBlockInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGuid)                                     BlockID                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   BlockPosition                                               OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FRotator)                                  BlockOrientation                                            OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
	SMember(FVector)                                   BlockDimensions                                             OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	SMember(FTimespan)                                 Timestamp                                                   OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	CMember(EMagicLeapMeshState)                       BlockState                                                  OFFSET(get<T>, {0x40, 1, 0, 0})
};

/// Struct /Script/MagicLeap.MagicLeapTrackingMeshInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FMagicLeapTrackingMeshInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FTimespan)                                 Timestamp                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TArray<FMagicLeapMeshBlockInfo>)           BlockData                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/MagicLeap.MagicLeapRaycastHitResult
/// Size: 0x0024 (0x000000 - 0x000024)
class FMagicLeapRaycastHitResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(EMagicLeapRaycastResultState)              HitState                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   HitPoint                                                    OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	DMember(float)                                     Confidence                                                  OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   UserData                                                    OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/MagicLeap.MagicLeapRaycastQueryParams
/// Size: 0x0038 (0x000000 - 0x000038)
class FMagicLeapRaycastQueryParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   UpVector                                                    OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	DMember(int32_t)                                   Width                                                       OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   Height                                                      OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     HorizontalFovDegrees                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      CollideWithUnobserved                                       OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(int32_t)                                   UserData                                                    OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Struct /Script/MagicLeap.MagicLeapGraphicsClientPerformanceInfo
/// Size: 0x001C (0x000000 - 0x00001C)
class FMagicLeapGraphicsClientPerformanceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     FrameStartCPUCompAcquireCPUTimeMs                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     FrameStartCPUFrameEndGPUTimeMs                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FrameStartCPUFrameStartCPUTimeMs                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     FrameDurationCPUTimeMs                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     FrameDurationGPUTimeMs                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     FrameInternalDurationCPUTimeMs                              OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     FrameInternalDurationGPUTimeMs                              OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/MagicLeap.MagicLeapHeadTrackingState
/// Size: 0x0008 (0x000000 - 0x000008)
class FMagicLeapHeadTrackingState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EMagicLeapHeadTrackingMode)                Mode                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EMagicLeapHeadTrackingError)               Error                                                       OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     Confidence                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/MagicLeap.MagicLeapResult
/// Size: 0x0018 (0x000000 - 0x000018)
class FMagicLeapResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bSuccess                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   AdditionalInfo                                              OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Enum /Script/MagicLeap.PurchaseType
/// Size: 0x03
enum class PurchaseType : uint8_t
{
	PurchaseType__Consumable                                                         = 0,
	PurchaseType__Nonconsumable                                                      = 1,
	PurchaseType__Undefined                                                          = 2
};

/// Enum /Script/MagicLeap.EFocusLostReason
/// Size: 0x02
enum class EFocusLostReason : uint8_t
{
	EFocusLostReason__EFocusLostReason_Invalid                                       = 0,
	EFocusLostReason__EFocusLostReason_System                                        = 1
};

/// Enum /Script/MagicLeap.EMagicLeapMeshLOD
/// Size: 0x03
enum class EMagicLeapMeshLOD : uint8_t
{
	EMagicLeapMeshLOD__Minimum                                                       = 0,
	EMagicLeapMeshLOD__Medium                                                        = 1,
	EMagicLeapMeshLOD__Maximum                                                       = 2
};

/// Enum /Script/MagicLeap.EMagicLeapMeshState
/// Size: 0x04
enum class EMagicLeapMeshState : uint8_t
{
	EMagicLeapMeshState__New                                                         = 0,
	EMagicLeapMeshState__Updated                                                     = 1,
	EMagicLeapMeshState__Deleted                                                     = 2,
	EMagicLeapMeshState__Unchanged                                                   = 3
};

/// Enum /Script/MagicLeap.EMagicLeapMeshVertexColorMode
/// Size: 0x04
enum class EMagicLeapMeshVertexColorMode : uint8_t
{
	EMagicLeapMeshVertexColorMode__None                                              = 0,
	EMagicLeapMeshVertexColorMode__Confidence                                        = 1,
	EMagicLeapMeshVertexColorMode__Block                                             = 2,
	EMagicLeapMeshVertexColorMode__LOD                                               = 3
};

/// Enum /Script/MagicLeap.EMagicLeapMeshType
/// Size: 0x02
enum class EMagicLeapMeshType : uint8_t
{
	EMagicLeapMeshType__Triangles                                                    = 0,
	EMagicLeapMeshType__PointCloud                                                   = 1
};

/// Enum /Script/MagicLeap.EMagicLeapRaycastResultState
/// Size: 0x04
enum class EMagicLeapRaycastResultState : uint8_t
{
	EMagicLeapRaycastResultState__RequestFailed                                      = 0,
	EMagicLeapRaycastResultState__NoCollision                                        = 1,
	EMagicLeapRaycastResultState__HitUnobserved                                      = 2,
	EMagicLeapRaycastResultState__HitObserved                                        = 3
};

/// Enum /Script/MagicLeap.CloudStatus
/// Size: 0x02
enum class CloudStatus : uint8_t
{
	CloudStatus__CloudStatus_NotDone                                                 = 0,
	CloudStatus__CloudStatus_Done                                                    = 1
};

/// Enum /Script/MagicLeap.EMagicLeapHeadTrackingMapEvent
/// Size: 0x04
enum class EMagicLeapHeadTrackingMapEvent : uint8_t
{
	EMagicLeapHeadTrackingMapEvent__Lost                                             = 0,
	EMagicLeapHeadTrackingMapEvent__Recovered                                        = 1,
	EMagicLeapHeadTrackingMapEvent__RecoveryFailed                                   = 2,
	EMagicLeapHeadTrackingMapEvent__NewSession                                       = 3
};

/// Enum /Script/MagicLeap.EMagicLeapHeadTrackingMode
/// Size: 0x03
enum class EMagicLeapHeadTrackingMode : uint8_t
{
	EMagicLeapHeadTrackingMode__PositionAndOrientation                               = 0,
	EMagicLeapHeadTrackingMode__Unavailable                                          = 1,
	EMagicLeapHeadTrackingMode__Unknown                                              = 2
};

/// Enum /Script/MagicLeap.EMagicLeapHeadTrackingError
/// Size: 0x04
enum class EMagicLeapHeadTrackingError : uint8_t
{
	EMagicLeapHeadTrackingError__None                                                = 0,
	EMagicLeapHeadTrackingError__NotEnoughFeatures                                   = 1,
	EMagicLeapHeadTrackingError__LowLight                                            = 2,
	EMagicLeapHeadTrackingError__Unknown                                             = 3
};


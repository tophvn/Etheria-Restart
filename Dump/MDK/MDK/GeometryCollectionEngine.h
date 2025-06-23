
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: Chaos
/// dependency: ChaosSolverEngine
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FieldSystemEngine
/// dependency: PhysicsCore

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FChaosCollisionEventRequestSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaxNumberResults                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinImpulse                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(EChaosCollisionSortMethod)                 SortMethod                                                  OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FChaosBreakingEventRequestSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaxNumberOfResults                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinRadius                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(EChaosBreakingSortMethod)                  SortMethod                                                  OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FChaosTrailingEventRequestSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaxNumberOfResults                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinAngularSpeed                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(EChaosTrailingSortMethod)                  SortMethod                                                  OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.ChaosDestructionListener
/// Size: 0x0228 (0x0001F8 - 0x000420)
class UChaosDestructionListener : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	DMember(bool)                                      bIsCollisionEventListeningEnabled                           OFFSET(get<bool>, {0x1F8, 1, 1, 0})
	DMember(bool)                                      bIsBreakingEventListeningEnabled                            OFFSET(get<bool>, {0x1F8, 1, 1, 1})
	DMember(bool)                                      bIsTrailingEventListeningEnabled                            OFFSET(get<bool>, {0x1F8, 1, 1, 2})
	SMember(FChaosCollisionEventRequestSettings)       CollisionEventRequestSettings                               OFFSET(getStruct<T>, {0x1FC, 24, 0, 0})
	SMember(FChaosBreakingEventRequestSettings)        BreakingEventRequestSettings                                OFFSET(getStruct<T>, {0x214, 24, 0, 0})
	SMember(FChaosTrailingEventRequestSettings)        TrailingEventRequestSettings                                OFFSET(getStruct<T>, {0x22C, 24, 0, 0})
	CMember(TSet<AChaosSolverActor*>)                  ChaosSolverActors                                           OFFSET(get<T>, {0x248, 80, 0, 0})
	CMember(TSet<AGeometryCollectionActor*>)           GeometryCollectionActors                                    OFFSET(get<T>, {0x298, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollisionEvents                                           OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBreakingEvents                                            OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTrailingEvents                                            OFFSET(getStruct<T>, {0x308, 16, 0, 0})


	/// Functions
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	// void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);           // [0x35c5570] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	// void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);       // [0x35c5470] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	// void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);           // [0x35c5370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	// void SetTrailingEventRequestSettings(FChaosTrailingEventRequestSettings& InSettings);                                    // [0x35c52d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	// void SetTrailingEventEnabled(bool bIsEnabled);                                                                           // [0x35c5240] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	// void SetCollisionEventRequestSettings(FChaosCollisionEventRequestSettings& InSettings);                                  // [0x35c5110] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	// void SetCollisionEventEnabled(bool bIsEnabled);                                                                          // [0x35c5080] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	// void SetBreakingEventRequestSettings(FChaosBreakingEventRequestSettings& InSettings);                                    // [0x35c4fe0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	// void SetBreakingEventEnabled(bool bIsEnabled);                                                                           // [0x35c4f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	// void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);                             // [0x35c4ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	// void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);                                                  // [0xa1e2e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	// bool IsEventListening();                                                                                                 // [0x35c4bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	// void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);                                // [0x35c48e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
	// void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);                                                     // [0xa1e2e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionActor
/// Size: 0x0010 (0x000220 - 0x000230)
class AGeometryCollectionActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(class UGeometryCollectionComponent*)       GeometryCollectionComponent                                 OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UGeometryCollectionDebugDrawComponent*) GeometryCollectionDebugDrawComponent                     OFFSET(get<T>, {0x228, 8, 0, 0})


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
	// bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit);                                                      // [0x35c4d40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionCache
/// Size: 0x0028 (0x000028 - 0x000050)
class UGeometryCollectionCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRecordedTransformTrack)                   RecordedData                                                OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(class UGeometryCollection*)                SupportedCollection                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FGuid)                                     CompatibleCollectionState                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeomComponentCacheParameters
/// Size: 0x0050 (0x000000 - 0x000050)
class FGeomComponentCacheParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(EGeometryCollectionCacheType)              CacheMode                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UGeometryCollectionCache*)           TargetCache                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     ReverseCacheBeginTime                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      SaveCollisionData                                           OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      DoGenerateCollisionData                                     OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(int32_t)                                   CollisionDataSizeMax                                        OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      DoCollisionDataSpatialHash                                  OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(float)                                     CollisionDataSpatialHashRadius                              OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   MaxCollisionPerCell                                         OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(bool)                                      SaveBreakingData                                            OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      DoGenerateBreakingData                                      OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(int32_t)                                   BreakingDataSizeMax                                         OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(bool)                                      DoBreakingDataSpatialHash                                   OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     BreakingDataSpatialHashRadius                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   MaxBreakingPerCell                                          OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      SaveTrailingData                                            OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(bool)                                      DoGenerateTrailingData                                      OFFSET(get<bool>, {0x3D, 1, 0, 0})
	DMember(int32_t)                                   TrailingDataSizeMax                                         OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     TrailingMinSpeedThreshold                                   OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     TrailingMinVolumeThreshold                                  OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRepData
/// Size: 0x0018 (0x000000 - 0x000018)
class FGeometryCollectionRepData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionComponent
/// Size: 0x0490 (0x000490 - 0x000920)
class UGeometryCollectionComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2336;

public:
	CMember(class AChaosSolverActor*)                  ChaosSolverActor                                            OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(class UGeometryCollection*)                RestCollection                                              OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(TArray<class AFieldSystemActor*>)          InitializationFields                                        OFFSET(get<T>, {0x588, 16, 0, 0})
	DMember(bool)                                      Simulating                                                  OFFSET(get<bool>, {0x598, 1, 0, 0})
	CMember(EObjectStateTypeEnum)                      ObjectType                                                  OFFSET(get<T>, {0x5A0, 1, 0, 0})
	DMember(bool)                                      EnableClustering                                            OFFSET(get<bool>, {0x5A1, 1, 0, 0})
	DMember(int32_t)                                   ClusterGroupIndex                                           OFFSET(get<int32_t>, {0x5A4, 4, 0, 0})
	DMember(int32_t)                                   MaxClusterLevel                                             OFFSET(get<int32_t>, {0x5A8, 4, 0, 0})
	CMember(TArray<float>)                             DamageThreshold                                             OFFSET(get<T>, {0x5B0, 16, 0, 0})
	CMember(EClusterConnectionTypeEnum)                ClusterConnectionType                                       OFFSET(get<T>, {0x5C0, 1, 0, 0})
	DMember(int32_t)                                   CollisionGroup                                              OFFSET(get<int32_t>, {0x5C4, 4, 0, 0})
	DMember(float)                                     CollisionSampleFraction                                     OFFSET(get<float>, {0x5C8, 4, 0, 0})
	DMember(float)                                     LinearEtherDrag                                             OFFSET(get<float>, {0x5CC, 4, 0, 0})
	DMember(float)                                     AngularEtherDrag                                            OFFSET(get<float>, {0x5D0, 4, 0, 0})
	CMember(class UChaosPhysicalMaterial*)             PhysicalMaterial                                            OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(EInitialVelocityTypeEnum)                  InitialVelocityType                                         OFFSET(get<T>, {0x5E0, 1, 0, 0})
	SMember(FVector)                                   InitialLinearVelocity                                       OFFSET(getStruct<T>, {0x5E4, 12, 0, 0})
	SMember(FVector)                                   InitialAngularVelocity                                      OFFSET(getStruct<T>, {0x5F0, 12, 0, 0})
	CMember(class UPhysicalMaterial*)                  PhysicalMaterialOverride                                    OFFSET(get<T>, {0x600, 8, 0, 0})
	SMember(FGeomComponentCacheParameters)             CacheParameters                                             OFFSET(getStruct<T>, {0x608, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyGeometryCollectionPhysicsStateChange                  OFFSET(getStruct<T>, {0x658, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyGeometryCollectionPhysicsLoadingStateChange           OFFSET(getStruct<T>, {0x668, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosBreakEvent                                           OFFSET(getStruct<T>, {0x690, 16, 0, 0})
	DMember(float)                                     DesiredCacheTime                                            OFFSET(get<float>, {0x6A0, 4, 0, 0})
	DMember(bool)                                      CachePlayback                                               OFFSET(get<bool>, {0x6A4, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosPhysicsCollision                                     OFFSET(getStruct<T>, {0x6A8, 16, 0, 0})
	DMember(bool)                                      bNotifyBreaks                                               OFFSET(get<bool>, {0x6B8, 1, 0, 0})
	DMember(bool)                                      bNotifyCollisions                                           OFFSET(get<bool>, {0x6B9, 1, 0, 0})
	DMember(bool)                                      bEnableReplication                                          OFFSET(get<bool>, {0x6BA, 1, 0, 0})
	DMember(bool)                                      bEnableAbandonAfterLevel                                    OFFSET(get<bool>, {0x6BB, 1, 0, 0})
	DMember(int32_t)                                   ReplicationAbandonClusterLevel                              OFFSET(get<int32_t>, {0x6BC, 4, 0, 0})
	SMember(FGeometryCollectionRepData)                RepData                                                     OFFSET(getStruct<T>, {0x6C0, 24, 0, 0})
	CMember(class UBodySetup*)                         DummyBodySetup                                              OFFSET(get<T>, {0x8F0, 8, 0, 0})


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	// void SetNotifyBreaks(bool bNewNotifyBreaks);                                                                             // [0x35c51b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	// void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
	// void OnRep_RepData(FGeometryCollectionRepData& OldData);                                                                 // [0x35c4c90] Final|Native|Protected|HasOutParms 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	// void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent); // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	// void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent); // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster
	// void NetAbandonCluster(int32_t TransformIndex);                                                                          // [0x35c4c00] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	// void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x35c4a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
	// void ApplyKinematicField(float Radius, FVector Position);                                                                // [0x35c4970] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
/// Size: 0x0001 (0x000000 - 0x000001)
class FGeometryCollectionDebugDrawWarningMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
/// Size: 0x0018 (0x000000 - 0x000018)
class FGeometryCollectionDebugDrawActorSelectedRigidBody : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(class AChaosSolverActor*)                  Solver                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class AGeometryCollectionActor*)           GeometryCollection                                          OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActor
/// Size: 0x00E8 (0x000220 - 0x000308)
class AGeometryCollectionDebugDrawActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FGeometryCollectionDebugDrawWarningMessage) WarningMessage                                             OFFSET(getStruct<T>, {0x220, 1, 0, 0})
	SMember(FGeometryCollectionDebugDrawActorSelectedRigidBody) SelectedRigidBody                                  OFFSET(getStruct<T>, {0x228, 24, 0, 0})
	DMember(bool)                                      bDebugDrawWholeCollection                                   OFFSET(get<bool>, {0x240, 1, 0, 0})
	DMember(bool)                                      bDebugDrawHierarchy                                         OFFSET(get<bool>, {0x241, 1, 0, 0})
	DMember(bool)                                      bDebugDrawClustering                                        OFFSET(get<bool>, {0x242, 1, 0, 0})
	CMember(EGeometryCollectionDebugDrawActorHideGeometry) HideGeometry                                            OFFSET(get<T>, {0x243, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyId                                            OFFSET(get<bool>, {0x244, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyCollision                                     OFFSET(get<bool>, {0x245, 1, 0, 0})
	DMember(bool)                                      bCollisionAtOrigin                                          OFFSET(get<bool>, {0x246, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyTransform                                     OFFSET(get<bool>, {0x247, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyInertia                                       OFFSET(get<bool>, {0x248, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyVelocity                                      OFFSET(get<bool>, {0x249, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyForce                                         OFFSET(get<bool>, {0x24A, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyInfos                                         OFFSET(get<bool>, {0x24B, 1, 0, 0})
	DMember(bool)                                      bShowTransformIndex                                         OFFSET(get<bool>, {0x24C, 1, 0, 0})
	DMember(bool)                                      bShowTransform                                              OFFSET(get<bool>, {0x24D, 1, 0, 0})
	DMember(bool)                                      bShowParent                                                 OFFSET(get<bool>, {0x24E, 1, 0, 0})
	DMember(bool)                                      bShowLevel                                                  OFFSET(get<bool>, {0x24F, 1, 0, 0})
	DMember(bool)                                      bShowConnectivityEdges                                      OFFSET(get<bool>, {0x250, 1, 0, 0})
	DMember(bool)                                      bShowGeometryIndex                                          OFFSET(get<bool>, {0x251, 1, 0, 0})
	DMember(bool)                                      bShowGeometryTransform                                      OFFSET(get<bool>, {0x252, 1, 0, 0})
	DMember(bool)                                      bShowBoundingBox                                            OFFSET(get<bool>, {0x253, 1, 0, 0})
	DMember(bool)                                      bShowFaces                                                  OFFSET(get<bool>, {0x254, 1, 0, 0})
	DMember(bool)                                      bShowFaceIndices                                            OFFSET(get<bool>, {0x255, 1, 0, 0})
	DMember(bool)                                      bShowFaceNormals                                            OFFSET(get<bool>, {0x256, 1, 0, 0})
	DMember(bool)                                      bShowSingleFace                                             OFFSET(get<bool>, {0x257, 1, 0, 0})
	DMember(int32_t)                                   SingleFaceIndex                                             OFFSET(get<int32_t>, {0x258, 4, 0, 0})
	DMember(bool)                                      bShowVertices                                               OFFSET(get<bool>, {0x25C, 1, 0, 0})
	DMember(bool)                                      bShowVertexIndices                                          OFFSET(get<bool>, {0x25D, 1, 0, 0})
	DMember(bool)                                      bShowVertexNormals                                          OFFSET(get<bool>, {0x25E, 1, 0, 0})
	DMember(bool)                                      bUseActiveVisualization                                     OFFSET(get<bool>, {0x25F, 1, 0, 0})
	DMember(float)                                     PointThickness                                              OFFSET(get<float>, {0x260, 4, 0, 0})
	DMember(float)                                     LineThickness                                               OFFSET(get<float>, {0x264, 4, 0, 0})
	DMember(bool)                                      bTextShadow                                                 OFFSET(get<bool>, {0x268, 1, 0, 0})
	DMember(float)                                     TextScale                                                   OFFSET(get<float>, {0x26C, 4, 0, 0})
	DMember(float)                                     NormalScale                                                 OFFSET(get<float>, {0x270, 4, 0, 0})
	DMember(float)                                     AxisScale                                                   OFFSET(get<float>, {0x274, 4, 0, 0})
	DMember(float)                                     ArrowScale                                                  OFFSET(get<float>, {0x278, 4, 0, 0})
	SMember(FColor)                                    RigidBodyIdColor                                            OFFSET(getStruct<T>, {0x27C, 4, 0, 0})
	DMember(float)                                     RigidBodyTransformScale                                     OFFSET(get<float>, {0x280, 4, 0, 0})
	SMember(FColor)                                    RigidBodyCollisionColor                                     OFFSET(getStruct<T>, {0x284, 4, 0, 0})
	SMember(FColor)                                    RigidBodyInertiaColor                                       OFFSET(getStruct<T>, {0x288, 4, 0, 0})
	SMember(FColor)                                    RigidBodyVelocityColor                                      OFFSET(getStruct<T>, {0x28C, 4, 0, 0})
	SMember(FColor)                                    RigidBodyForceColor                                         OFFSET(getStruct<T>, {0x290, 4, 0, 0})
	SMember(FColor)                                    RigidBodyInfoColor                                          OFFSET(getStruct<T>, {0x294, 4, 0, 0})
	SMember(FColor)                                    TransformIndexColor                                         OFFSET(getStruct<T>, {0x298, 4, 0, 0})
	DMember(float)                                     TransformScale                                              OFFSET(get<float>, {0x29C, 4, 0, 0})
	SMember(FColor)                                    LevelColor                                                  OFFSET(getStruct<T>, {0x2A0, 4, 0, 0})
	SMember(FColor)                                    ParentColor                                                 OFFSET(getStruct<T>, {0x2A4, 4, 0, 0})
	DMember(float)                                     ConnectivityEdgeThickness                                   OFFSET(get<float>, {0x2A8, 4, 0, 0})
	SMember(FColor)                                    GeometryIndexColor                                          OFFSET(getStruct<T>, {0x2AC, 4, 0, 0})
	DMember(float)                                     GeometryTransformScale                                      OFFSET(get<float>, {0x2B0, 4, 0, 0})
	SMember(FColor)                                    BoundingBoxColor                                            OFFSET(getStruct<T>, {0x2B4, 4, 0, 0})
	SMember(FColor)                                    FaceColor                                                   OFFSET(getStruct<T>, {0x2B8, 4, 0, 0})
	SMember(FColor)                                    FaceIndexColor                                              OFFSET(getStruct<T>, {0x2BC, 4, 0, 0})
	SMember(FColor)                                    FaceNormalColor                                             OFFSET(getStruct<T>, {0x2C0, 4, 0, 0})
	SMember(FColor)                                    SingleFaceColor                                             OFFSET(getStruct<T>, {0x2C4, 4, 0, 0})
	SMember(FColor)                                    VertexColor                                                 OFFSET(getStruct<T>, {0x2C8, 4, 0, 0})
	SMember(FColor)                                    VertexIndexColor                                            OFFSET(getStruct<T>, {0x2CC, 4, 0, 0})
	SMember(FColor)                                    VertexNormalColor                                           OFFSET(getStruct<T>, {0x2D0, 4, 0, 0})
	CMember(class UBillboardComponent*)                SpriteComponent                                             OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(class AGeometryCollectionDebugDrawActor*)  GeometryCollectionDebugDrawActor                            OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class AGeometryCollectionRenderLevelSetActor*) GeometryCollectionRenderLevelSetActor                   OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSource
/// Size: 0x0060 (0x000000 - 0x000060)
class FGeometryCollectionSource : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSoftObjectPath)                           SourceGeometryObject                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         SourceMaterial                                              OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSizeSpecificData
/// Size: 0x0024 (0x000000 - 0x000024)
class FGeometryCollectionSizeSpecificData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(float)                                     MaxSize                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(ECollisionTypeEnum)                        CollisionType                                               OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(EImplicitTypeEnum)                         ImplicitType                                                OFFSET(get<T>, {0x5, 1, 0, 0})
	DMember(int32_t)                                   MinLevelSetResolution                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxLevelSetResolution                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MinClusterLevelSetResolution                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   MaxClusterLevelSetResolution                                OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   CollisionObjectReductionPercentage                          OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(float)                                     CollisionParticlesFraction                                  OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   MaximumCollisionParticles                                   OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollection
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UGeometryCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FGeometryCollectionSource>)         GeometrySource                                              OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         Materials                                                   OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(ECollisionTypeEnum)                        CollisionType                                               OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(EImplicitTypeEnum)                         ImplicitType                                                OFFSET(get<T>, {0x51, 1, 0, 0})
	DMember(int32_t)                                   MinLevelSetResolution                                       OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   MaxLevelSetResolution                                       OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   MinClusterLevelSetResolution                                OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   MaxClusterLevelSetResolution                                OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(float)                                     CollisionObjectReductionPercentage                          OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(bool)                                      bMassAsDensity                                              OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     MinimumMassClamp                                            OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     CollisionParticlesFraction                                  OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(int32_t)                                   MaximumCollisionParticles                                   OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	CMember(TArray<FGeometryCollectionSizeSpecificData>) SizeSpecificData                                          OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      EnableRemovePiecesOnFracture                                OFFSET(get<bool>, {0x90, 1, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         RemoveOnFractureMaterials                                   OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FGuid)                                     PersistentGuid                                              OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FGuid)                                     StateGuid                                                   OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	DMember(int32_t)                                   BoneSelectedMaterialIndex                                   OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
/// Size: 0x00A0 (0x000220 - 0x0002C0)
class AGeometryCollectionRenderLevelSetActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(class UVolumeTexture*)                     TargetVolumeTexture                                         OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UMaterial*)                          RayMarchMaterial                                            OFFSET(get<T>, {0x228, 8, 0, 0})
	DMember(float)                                     SurfaceTolerance                                            OFFSET(get<float>, {0x230, 4, 0, 0})
	DMember(float)                                     Isovalue                                                    OFFSET(get<float>, {0x234, 4, 0, 0})
	DMember(bool)                                      Enabled                                                     OFFSET(get<bool>, {0x238, 1, 0, 0})
	DMember(bool)                                      RenderVolumeBoundingBox                                     OFFSET(get<bool>, {0x239, 1, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.SkeletalMeshSimulationComponent
/// Size: 0x0088 (0x0000B0 - 0x000138)
class USkeletalMeshSimulationComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(class UChaosPhysicalMaterial*)             PhysicalMaterial                                            OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class AChaosSolverActor*)                  ChaosSolverActor                                            OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UPhysicsAsset*)                      OverridePhysicsAsset                                        OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(bool)                                      bSimulating                                                 OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bNotifyCollisions                                           OFFSET(get<bool>, {0xD1, 1, 0, 0})
	CMember(EObjectStateTypeEnum)                      ObjectType                                                  OFFSET(get<T>, {0xD2, 1, 0, 0})
	DMember(float)                                     Density                                                     OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     MaxMass                                                     OFFSET(get<float>, {0xDC, 4, 0, 0})
	CMember(ECollisionTypeEnum)                        CollisionType                                               OFFSET(get<T>, {0xE0, 1, 0, 0})
	DMember(float)                                     ImplicitShapeParticlesPerUnitArea                           OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(int32_t)                                   ImplicitShapeMinNumParticles                                OFFSET(get<int32_t>, {0xE8, 4, 0, 0})
	DMember(int32_t)                                   ImplicitShapeMaxNumParticles                                OFFSET(get<int32_t>, {0xEC, 4, 0, 0})
	DMember(int32_t)                                   MinLevelSetResolution                                       OFFSET(get<int32_t>, {0xF0, 4, 0, 0})
	DMember(int32_t)                                   MaxLevelSetResolution                                       OFFSET(get<int32_t>, {0xF4, 4, 0, 0})
	DMember(int32_t)                                   CollisionGroup                                              OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	CMember(EInitialVelocityTypeEnum)                  InitialVelocityType                                         OFFSET(get<T>, {0xFC, 1, 0, 0})
	SMember(FVector)                                   InitialLinearVelocity                                       OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FVector)                                   InitialAngularVelocity                                      OFFSET(getStruct<T>, {0x10C, 12, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosPhysicsCollision                                     OFFSET(getStruct<T>, {0x118, 16, 0, 0})


	/// Functions
	// Function /Script/GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
	// void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GeometryCollectionEngine.StaticMeshSimulationComponent
/// Size: 0x0088 (0x0000B0 - 0x000138)
class UStaticMeshSimulationComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(bool)                                      Simulating                                                  OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(bool)                                      bNotifyCollisions                                           OFFSET(get<bool>, {0xB9, 1, 0, 0})
	CMember(EObjectStateTypeEnum)                      ObjectType                                                  OFFSET(get<T>, {0xBA, 1, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0xBC, 4, 0, 0})
	CMember(ECollisionTypeEnum)                        CollisionType                                               OFFSET(get<T>, {0xC0, 1, 0, 0})
	CMember(EImplicitTypeEnum)                         ImplicitType                                                OFFSET(get<T>, {0xC1, 1, 0, 0})
	DMember(int32_t)                                   MinLevelSetResolution                                       OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(int32_t)                                   MaxLevelSetResolution                                       OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	CMember(EInitialVelocityTypeEnum)                  InitialVelocityType                                         OFFSET(get<T>, {0xCC, 1, 0, 0})
	SMember(FVector)                                   InitialLinearVelocity                                       OFFSET(getStruct<T>, {0xD0, 12, 0, 0})
	SMember(FVector)                                   InitialAngularVelocity                                      OFFSET(getStruct<T>, {0xDC, 12, 0, 0})
	DMember(float)                                     DamageThreshold                                             OFFSET(get<float>, {0xE8, 4, 0, 0})
	CMember(class UChaosPhysicalMaterial*)             PhysicalMaterial                                            OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class AChaosSolverActor*)                  ChaosSolverActor                                            OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosPhysicsCollision                                     OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	CMember(TArray<class UPrimitiveComponent*>)        SimulatedComponents                                         OFFSET(get<T>, {0x120, 16, 0, 0})


	/// Functions
	// Function /Script/GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
	// void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
	// void ForceRecreatePhysicsState();                                                                                        // [0x35c4bb0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventData
/// Size: 0x0058 (0x000000 - 0x000058)
class FChaosCollisionEventData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   Velocity1                                                   OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector)                                   Velocity2                                                   OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	DMember(float)                                     Mass1                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Mass2                                                       OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FVector)                                   Impulse                                                     OFFSET(getStruct<T>, {0x38, 12, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventData
/// Size: 0x001C (0x000000 - 0x00001C)
class FChaosBreakingEventData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventData
/// Size: 0x002C (0x000000 - 0x00002C)
class FChaosTrailingEventData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Enum /Script/GeometryCollectionEngine.EChaosBreakingSortMethod
/// Size: 0x05
enum class EChaosBreakingSortMethod : uint8_t
{
	EChaosBreakingSortMethod__SortNone                                               = 0,
	EChaosBreakingSortMethod__SortByHighestMass                                      = 1,
	EChaosBreakingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosBreakingSortMethod__SortByNearestFirst                                     = 3,
	EChaosBreakingSortMethod__Count                                                  = 4
};

/// Enum /Script/GeometryCollectionEngine.EChaosCollisionSortMethod
/// Size: 0x06
enum class EChaosCollisionSortMethod : uint8_t
{
	EChaosCollisionSortMethod__SortNone                                              = 0,
	EChaosCollisionSortMethod__SortByHighestMass                                     = 1,
	EChaosCollisionSortMethod__SortByHighestSpeed                                    = 2,
	EChaosCollisionSortMethod__SortByHighestImpulse                                  = 3,
	EChaosCollisionSortMethod__SortByNearestFirst                                    = 4,
	EChaosCollisionSortMethod__Count                                                 = 5
};

/// Enum /Script/GeometryCollectionEngine.EChaosTrailingSortMethod
/// Size: 0x05
enum class EChaosTrailingSortMethod : uint8_t
{
	EChaosTrailingSortMethod__SortNone                                               = 0,
	EChaosTrailingSortMethod__SortByHighestMass                                      = 1,
	EChaosTrailingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosTrailingSortMethod__SortByNearestFirst                                     = 3,
	EChaosTrailingSortMethod__Count                                                  = 4
};

/// Enum /Script/GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
/// Size: 0x05
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	EGeometryCollectionDebugDrawActorHideGeometry__HideNone                          = 0,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWithCollision                 = 1,
	EGeometryCollectionDebugDrawActorHideGeometry__HideSelected                      = 2,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWholeCollection               = 3,
	EGeometryCollectionDebugDrawActorHideGeometry__HideAll                           = 4
};

/// Enum /Script/GeometryCollectionEngine.ECollectionGroupEnum
/// Size: 0x02
enum class ECollectionGroupEnum : uint8_t
{
	ECollectionGroupEnum__Chaos_Traansform                                           = 0,
	ECollectionGroupEnum__Chaos_Max                                                  = 1
};

/// Enum /Script/GeometryCollectionEngine.ECollectionAttributeEnum
/// Size: 0x04
enum class ECollectionAttributeEnum : uint8_t
{
	ECollectionAttributeEnum__Chaos_Active                                           = 0,
	ECollectionAttributeEnum__Chaos_DynamicState                                     = 1,
	ECollectionAttributeEnum__Chaos_CollisionGroup                                   = 2,
	ECollectionAttributeEnum__Chaos_Max                                              = 3
};


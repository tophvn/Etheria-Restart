
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "Chaos.h"
#include "ChaosSolverEngine.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "FieldSystemEngine.h"
#include "PhysicsCore.h"

#pragma pack(push, 0x1)

class AGeometryCollectionActor;
class AGeometryCollectionDebugDrawActor;
class AGeometryCollectionRenderLevelSetActor;
class UChaosDestructionListener;
class UGeometryCollection;
class UGeometryCollectionCache;
class UGeometryCollectionComponent;
class UGeometryCollectionDebugDrawComponent;
class USkeletalMeshSimulationComponent;
class UStaticMeshSimulationComponent;

/// Enum /Script/GeometryCollectionEngine.EChaosBreakingSortMethod
/// Size: 0x01 (1 bytes)
enum class EChaosBreakingSortMethod : uint8_t
{
	EChaosBreakingSortMethod__SortNone                                               = 0,
	EChaosBreakingSortMethod__SortByHighestMass                                      = 1,
	EChaosBreakingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosBreakingSortMethod__SortByNearestFirst                                     = 3,
	EChaosBreakingSortMethod__Count                                                  = 4
};

/// Enum /Script/GeometryCollectionEngine.EChaosCollisionSortMethod
/// Size: 0x01 (1 bytes)
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
/// Size: 0x01 (1 bytes)
enum class EChaosTrailingSortMethod : uint8_t
{
	EChaosTrailingSortMethod__SortNone                                               = 0,
	EChaosTrailingSortMethod__SortByHighestMass                                      = 1,
	EChaosTrailingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosTrailingSortMethod__SortByNearestFirst                                     = 3,
	EChaosTrailingSortMethod__Count                                                  = 4
};

/// Enum /Script/GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
/// Size: 0x01 (1 bytes)
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	EGeometryCollectionDebugDrawActorHideGeometry__HideNone                          = 0,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWithCollision                 = 1,
	EGeometryCollectionDebugDrawActorHideGeometry__HideSelected                      = 2,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWholeCollection               = 3,
	EGeometryCollectionDebugDrawActorHideGeometry__HideAll                           = 4
};

/// Enum /Script/GeometryCollectionEngine.ECollectionGroupEnum
/// Size: 0x01 (1 bytes)
enum class ECollectionGroupEnum : uint8_t
{
	ECollectionGroupEnum__Chaos_Traansform                                           = 0,
	ECollectionGroupEnum__Chaos_Max                                                  = 1
};

/// Enum /Script/GeometryCollectionEngine.ECollectionAttributeEnum
/// Size: 0x01 (1 bytes)
enum class ECollectionAttributeEnum : uint8_t
{
	ECollectionAttributeEnum__Chaos_Active                                           = 0,
	ECollectionAttributeEnum__Chaos_DynamicState                                     = 1,
	ECollectionAttributeEnum__Chaos_CollisionGroup                                   = 2,
	ECollectionAttributeEnum__Chaos_Max                                              = 3
};

#pragma pack(pop)


static_assert(sizeof(FChaosCollisionEventRequestSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FChaosBreakingEventRequestSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FChaosTrailingEventRequestSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UChaosDestructionListener) == 0x0420); // 1056 bytes (0x0001F8 - 0x000420)
static_assert(sizeof(AGeometryCollectionActor) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UGeometryCollectionCache) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FGeomComponentCacheParameters) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FGeometryCollectionRepData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UGeometryCollectionComponent) == 0x0920); // 2336 bytes (0x000490 - 0x000920)
static_assert(sizeof(FGeometryCollectionDebugDrawWarningMessage) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGeometryCollectionDebugDrawActorSelectedRigidBody) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(AGeometryCollectionDebugDrawActor) == 0x0308); // 776 bytes (0x000220 - 0x000308)
static_assert(sizeof(UGeometryCollectionDebugDrawComponent) == 0x00C8); // 200 bytes (0x0000B0 - 0x0000C8)
static_assert(sizeof(FGeometryCollectionSource) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FGeometryCollectionSizeSpecificData) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UGeometryCollection) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(AGeometryCollectionRenderLevelSetActor) == 0x02C0); // 704 bytes (0x000220 - 0x0002C0)
static_assert(sizeof(USkeletalMeshSimulationComponent) == 0x0138); // 312 bytes (0x0000B0 - 0x000138)
static_assert(sizeof(UStaticMeshSimulationComponent) == 0x0138); // 312 bytes (0x0000B0 - 0x000138)
static_assert(sizeof(FChaosCollisionEventData) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FChaosBreakingEventData) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FChaosTrailingEventData) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(offsetof(FChaosCollisionEventRequestSettings, SortMethod) == 0x0014);
static_assert(offsetof(FChaosBreakingEventRequestSettings, SortMethod) == 0x0014);
static_assert(offsetof(FChaosTrailingEventRequestSettings, SortMethod) == 0x0014);
static_assert(offsetof(UChaosDestructionListener, CollisionEventRequestSettings) == 0x01FC);
static_assert(offsetof(UChaosDestructionListener, BreakingEventRequestSettings) == 0x0214);
static_assert(offsetof(UChaosDestructionListener, TrailingEventRequestSettings) == 0x022C);
static_assert(offsetof(AGeometryCollectionActor, GeometryCollectionComponent) == 0x0220);
static_assert(offsetof(AGeometryCollectionActor, GeometryCollectionDebugDrawComponent) == 0x0228);
static_assert(offsetof(UGeometryCollectionCache, RecordedData) == 0x0028);
static_assert(offsetof(UGeometryCollectionCache, SupportedCollection) == 0x0038);
static_assert(offsetof(UGeometryCollectionCache, CompatibleCollectionState) == 0x0040);
static_assert(offsetof(FGeomComponentCacheParameters, CacheMode) == 0x0000);
static_assert(offsetof(FGeomComponentCacheParameters, TargetCache) == 0x0008);
static_assert(offsetof(UGeometryCollectionComponent, ChaosSolverActor) == 0x0498);
static_assert(offsetof(UGeometryCollectionComponent, RestCollection) == 0x0580);
static_assert(offsetof(UGeometryCollectionComponent, InitializationFields) == 0x0588);
static_assert(offsetof(UGeometryCollectionComponent, ObjectType) == 0x05A0);
static_assert(offsetof(UGeometryCollectionComponent, DamageThreshold) == 0x05B0);
static_assert(offsetof(UGeometryCollectionComponent, ClusterConnectionType) == 0x05C0);
static_assert(offsetof(UGeometryCollectionComponent, PhysicalMaterial) == 0x05D8);
static_assert(offsetof(UGeometryCollectionComponent, InitialVelocityType) == 0x05E0);
static_assert(offsetof(UGeometryCollectionComponent, InitialLinearVelocity) == 0x05E4);
static_assert(offsetof(UGeometryCollectionComponent, InitialAngularVelocity) == 0x05F0);
static_assert(offsetof(UGeometryCollectionComponent, PhysicalMaterialOverride) == 0x0600);
static_assert(offsetof(UGeometryCollectionComponent, CacheParameters) == 0x0608);
static_assert(offsetof(UGeometryCollectionComponent, RepData) == 0x06C0);
static_assert(offsetof(UGeometryCollectionComponent, DummyBodySetup) == 0x08F0);
static_assert(offsetof(FGeometryCollectionDebugDrawActorSelectedRigidBody, Solver) == 0x0008);
static_assert(offsetof(FGeometryCollectionDebugDrawActorSelectedRigidBody, GeometryCollection) == 0x0010);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, WarningMessage) == 0x0220);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, SelectedRigidBody) == 0x0228);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, HideGeometry) == 0x0243);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyIdColor) == 0x027C);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyCollisionColor) == 0x0284);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyInertiaColor) == 0x0288);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyVelocityColor) == 0x028C);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyForceColor) == 0x0290);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyInfoColor) == 0x0294);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, TransformIndexColor) == 0x0298);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, LevelColor) == 0x02A0);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, ParentColor) == 0x02A4);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, GeometryIndexColor) == 0x02AC);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, BoundingBoxColor) == 0x02B4);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, FaceColor) == 0x02B8);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, FaceIndexColor) == 0x02BC);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, FaceNormalColor) == 0x02C0);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, SingleFaceColor) == 0x02C4);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, VertexColor) == 0x02C8);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, VertexIndexColor) == 0x02CC);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, VertexNormalColor) == 0x02D0);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, SpriteComponent) == 0x02D8);
static_assert(offsetof(UGeometryCollectionDebugDrawComponent, GeometryCollectionDebugDrawActor) == 0x00B0);
static_assert(offsetof(UGeometryCollectionDebugDrawComponent, GeometryCollectionRenderLevelSetActor) == 0x00B8);
static_assert(offsetof(FGeometryCollectionSource, SourceGeometryObject) == 0x0000);
static_assert(offsetof(FGeometryCollectionSource, LocalTransform) == 0x0020);
static_assert(offsetof(FGeometryCollectionSource, SourceMaterial) == 0x0050);
static_assert(offsetof(FGeometryCollectionSizeSpecificData, CollisionType) == 0x0004);
static_assert(offsetof(FGeometryCollectionSizeSpecificData, ImplicitType) == 0x0005);
static_assert(offsetof(UGeometryCollection, GeometrySource) == 0x0030);
static_assert(offsetof(UGeometryCollection, Materials) == 0x0040);
static_assert(offsetof(UGeometryCollection, CollisionType) == 0x0050);
static_assert(offsetof(UGeometryCollection, ImplicitType) == 0x0051);
static_assert(offsetof(UGeometryCollection, SizeSpecificData) == 0x0080);
static_assert(offsetof(UGeometryCollection, RemoveOnFractureMaterials) == 0x0098);
static_assert(offsetof(UGeometryCollection, PersistentGuid) == 0x00A8);
static_assert(offsetof(UGeometryCollection, StateGuid) == 0x00B8);
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, TargetVolumeTexture) == 0x0220);
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, RayMarchMaterial) == 0x0228);
static_assert(offsetof(USkeletalMeshSimulationComponent, PhysicalMaterial) == 0x00B8);
static_assert(offsetof(USkeletalMeshSimulationComponent, ChaosSolverActor) == 0x00C0);
static_assert(offsetof(USkeletalMeshSimulationComponent, OverridePhysicsAsset) == 0x00C8);
static_assert(offsetof(USkeletalMeshSimulationComponent, ObjectType) == 0x00D2);
static_assert(offsetof(USkeletalMeshSimulationComponent, CollisionType) == 0x00E0);
static_assert(offsetof(USkeletalMeshSimulationComponent, InitialVelocityType) == 0x00FC);
static_assert(offsetof(USkeletalMeshSimulationComponent, InitialLinearVelocity) == 0x0100);
static_assert(offsetof(USkeletalMeshSimulationComponent, InitialAngularVelocity) == 0x010C);
static_assert(offsetof(UStaticMeshSimulationComponent, ObjectType) == 0x00BA);
static_assert(offsetof(UStaticMeshSimulationComponent, CollisionType) == 0x00C0);
static_assert(offsetof(UStaticMeshSimulationComponent, ImplicitType) == 0x00C1);
static_assert(offsetof(UStaticMeshSimulationComponent, InitialVelocityType) == 0x00CC);
static_assert(offsetof(UStaticMeshSimulationComponent, InitialLinearVelocity) == 0x00D0);
static_assert(offsetof(UStaticMeshSimulationComponent, InitialAngularVelocity) == 0x00DC);
static_assert(offsetof(UStaticMeshSimulationComponent, PhysicalMaterial) == 0x00F0);
static_assert(offsetof(UStaticMeshSimulationComponent, ChaosSolverActor) == 0x00F8);
static_assert(offsetof(UStaticMeshSimulationComponent, SimulatedComponents) == 0x0120);
static_assert(offsetof(FChaosCollisionEventData, Location) == 0x0000);
static_assert(offsetof(FChaosCollisionEventData, Normal) == 0x000C);
static_assert(offsetof(FChaosCollisionEventData, Velocity1) == 0x0018);
static_assert(offsetof(FChaosCollisionEventData, Velocity2) == 0x0024);
static_assert(offsetof(FChaosCollisionEventData, Impulse) == 0x0038);
static_assert(offsetof(FChaosBreakingEventData, Location) == 0x0000);
static_assert(offsetof(FChaosBreakingEventData, Velocity) == 0x000C);
static_assert(offsetof(FChaosTrailingEventData, Location) == 0x0000);
static_assert(offsetof(FChaosTrailingEventData, Velocity) == 0x000C);
static_assert(offsetof(FChaosTrailingEventData, AngularVelocity) == 0x0018);

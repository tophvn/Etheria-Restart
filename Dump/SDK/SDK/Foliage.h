
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class AInstancedFoliageActor;
class AInteractiveFoliageActor;
class AProceduralFoliageBlockingVolume;
class AProceduralFoliageVolume;
class UFoliageInstancedStaticMeshComponent;
class UFoliageStatistics;
class UFoliageType;
class UFoliageType_Actor;
class UFoliageType_InstancedStaticMesh;
class UInteractiveFoliageComponent;
class UProceduralFoliageComponent;
class UProceduralFoliageSpawner;
class UProceduralFoliageTile;

/// Enum /Script/Foliage.EFoliageScaling
/// Size: 0x01 (1 bytes)
enum class EFoliageScaling : uint8_t
{
	EFoliageScaling__Uniform                                                         = 0,
	EFoliageScaling__Free                                                            = 1,
	EFoliageScaling__LockXY                                                          = 2,
	EFoliageScaling__LockXZ                                                          = 3,
	EFoliageScaling__LockYZ                                                          = 4
};

/// Enum /Script/Foliage.EVertexColorMaskChannel
/// Size: 0x01 (1 bytes)
enum class EVertexColorMaskChannel : uint8_t
{
	EVertexColorMaskChannel__Red                                                     = 0,
	EVertexColorMaskChannel__Green                                                   = 1,
	EVertexColorMaskChannel__Blue                                                    = 2,
	EVertexColorMaskChannel__Alpha                                                   = 3,
	EVertexColorMaskChannel__MAX_None                                                = 4
};

/// Enum /Script/Foliage.FoliageVertexColorMask
/// Size: 0x01 (1 bytes)
enum class FoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled                                                  = 0,
	FOLIAGEVERTEXCOLORMASK_Red                                                       = 1,
	FOLIAGEVERTEXCOLORMASK_Green                                                     = 2,
	FOLIAGEVERTEXCOLORMASK_Blue                                                      = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha                                                     = 4
};

/// Enum /Script/Foliage.ESimulationQuery
/// Size: 0x01 (1 bytes)
enum class ESimulationQuery : uint8_t
{
	ESimulationQuery__None                                                           = 0,
	ESimulationQuery__CollisionOverlap                                               = 1,
	ESimulationQuery__ShadeOverlap                                                   = 2,
	ESimulationQuery__AnyOverlap                                                     = 3
};

/// Enum /Script/Foliage.ESimulationOverlap
/// Size: 0x01 (1 bytes)
enum class ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap                                             = 0,
	ESimulationOverlap__ShadeOverlap                                                 = 1,
	ESimulationOverlap__None                                                         = 2
};

#pragma pack(pop)


static_assert(sizeof(UFoliageInstancedStaticMeshComponent) == 0x06C0); // 1728 bytes (0x000690 - 0x0006C0)
static_assert(sizeof(UFoliageStatistics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FFoliageVertexColorChannelMask) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UFoliageType) == 0x03A8); // 936 bytes (0x000028 - 0x0003A8)
static_assert(sizeof(UFoliageType_Actor) == 0x03B8); // 952 bytes (0x0003A8 - 0x0003B8)
static_assert(sizeof(UFoliageType_InstancedStaticMesh) == 0x03C8); // 968 bytes (0x0003A8 - 0x0003C8)
static_assert(sizeof(AInstancedFoliageActor) == 0x0270); // 624 bytes (0x000220 - 0x000270)
static_assert(sizeof(AInteractiveFoliageActor) == 0x0290); // 656 bytes (0x000230 - 0x000290)
static_assert(sizeof(UInteractiveFoliageComponent) == 0x0500); // 1280 bytes (0x0004F8 - 0x000500)
static_assert(sizeof(AProceduralFoliageBlockingVolume) == 0x0260); // 608 bytes (0x000258 - 0x000260)
static_assert(sizeof(UProceduralFoliageComponent) == 0x00D8); // 216 bytes (0x0000B0 - 0x0000D8)
static_assert(sizeof(FFoliageTypeObject) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UProceduralFoliageSpawner) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FProceduralFoliageInstance) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UProceduralFoliageTile) == 0x0158); // 344 bytes (0x000028 - 0x000158)
static_assert(sizeof(AProceduralFoliageVolume) == 0x0260); // 608 bytes (0x000258 - 0x000260)
static_assert(offsetof(UFoliageInstancedStaticMeshComponent, GenerationGuid) == 0x06B0);
static_assert(offsetof(UFoliageType, UpdateGuid) == 0x0028);
static_assert(offsetof(UFoliageType, Scaling) == 0x004C);
static_assert(offsetof(UFoliageType, ScaleX) == 0x0050);
static_assert(offsetof(UFoliageType, ScaleY) == 0x0058);
static_assert(offsetof(UFoliageType, ScaleZ) == 0x0060);
static_assert(offsetof(UFoliageType, VertexColorMaskByChannel) == 0x0068);
static_assert(offsetof(UFoliageType, VertexColorMask) == 0x0098);
static_assert(offsetof(UFoliageType, ZOffset) == 0x00A4);
static_assert(offsetof(UFoliageType, GroundSlopeAngle) == 0x00BC);
static_assert(offsetof(UFoliageType, Height) == 0x00C4);
static_assert(offsetof(UFoliageType, LandscapeLayers) == 0x00D0);
static_assert(offsetof(UFoliageType, ExclusionLandscapeLayers) == 0x00E8);
static_assert(offsetof(UFoliageType, LandscapeLayer) == 0x00FC);
static_assert(offsetof(UFoliageType, CollisionScale) == 0x0108);
static_assert(offsetof(UFoliageType, MeshBounds) == 0x0114);
static_assert(offsetof(UFoliageType, LowBoundOriginRadius) == 0x0130);
static_assert(offsetof(UFoliageType, Mobility) == 0x013C);
static_assert(offsetof(UFoliageType, CullDistance) == 0x0140);
static_assert(offsetof(UFoliageType, LightmapType) == 0x0150);
static_assert(offsetof(UFoliageType, BodyInstance) == 0x0158);
static_assert(offsetof(UFoliageType, CustomNavigableGeometry) == 0x02B0);
static_assert(offsetof(UFoliageType, LightingChannels) == 0x02B1);
static_assert(offsetof(UFoliageType, CustomDepthStencilWriteMask) == 0x02B8);
static_assert(offsetof(UFoliageType, ProceduralScale) == 0x02F8);
static_assert(offsetof(UFoliageType, ScaleCurve) == 0x0300);
static_assert(offsetof(UFoliageType, RuntimeVirtualTextures) == 0x0390);
static_assert(offsetof(UFoliageType, VirtualTextureRenderPassType) == 0x03A4);
static_assert(offsetof(UFoliageType_Actor, ActorClass) == 0x03A8);
static_assert(offsetof(UFoliageType_InstancedStaticMesh, Mesh) == 0x03A8);
static_assert(offsetof(UFoliageType_InstancedStaticMesh, OverrideMaterials) == 0x03B0);
static_assert(offsetof(UFoliageType_InstancedStaticMesh, ComponentClass) == 0x03C0);
static_assert(offsetof(AInteractiveFoliageActor, CapsuleComponent) == 0x0230);
static_assert(offsetof(AInteractiveFoliageActor, TouchingActorEntryPosition) == 0x0238);
static_assert(offsetof(AInteractiveFoliageActor, FoliageVelocity) == 0x0244);
static_assert(offsetof(AInteractiveFoliageActor, FoliageForce) == 0x0250);
static_assert(offsetof(AInteractiveFoliageActor, FoliagePosition) == 0x025C);
static_assert(offsetof(AProceduralFoliageBlockingVolume, ProceduralFoliageVolume) == 0x0258);
static_assert(offsetof(UProceduralFoliageComponent, FoliageSpawner) == 0x00B0);
static_assert(offsetof(UProceduralFoliageComponent, SpawningVolume) == 0x00C0);
static_assert(offsetof(UProceduralFoliageComponent, ProceduralGuid) == 0x00C8);
static_assert(offsetof(FFoliageTypeObject, FoliageTypeObject) == 0x0000);
static_assert(offsetof(FFoliageTypeObject, TypeInstance) == 0x0008);
static_assert(offsetof(FFoliageTypeObject, Type) == 0x0018);
static_assert(offsetof(UProceduralFoliageSpawner, FoliageTypes) == 0x0040);
static_assert(offsetof(FProceduralFoliageInstance, Rotation) == 0x0000);
static_assert(offsetof(FProceduralFoliageInstance, Location) == 0x0010);
static_assert(offsetof(FProceduralFoliageInstance, Normal) == 0x0020);
static_assert(offsetof(FProceduralFoliageInstance, Type) == 0x0030);
static_assert(offsetof(UProceduralFoliageTile, FoliageSpawner) == 0x0028);
static_assert(offsetof(UProceduralFoliageTile, InstancesArray) == 0x00D0);
static_assert(offsetof(AProceduralFoliageVolume, ProceduralComponent) == 0x0258);

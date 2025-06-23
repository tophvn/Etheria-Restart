
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "ClothingSystemRuntimeInterface.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UClothConfigCommon;
class UClothLODDataCommon_Legacy;
class UClothSharedConfigCommon;
class UClothingAssetCommon;
class UClothingAssetCustomData;

/// Enum /Script/ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
/// Size: 0x01 (1 bytes)
enum class EClothingWindMethod_Legacy : uint8_t
{
	EClothingWindMethod_Legacy__Legacy                                               = 0,
	EClothingWindMethod_Legacy__Accurate                                             = 1
};

/// Enum /Script/ClothingSystemRuntimeCommon.EWeightMapTargetCommon
/// Size: 0x01 (1 bytes)
enum class EWeightMapTargetCommon : uint8_t
{
	EWeightMapTargetCommon__None                                                     = 0,
	EWeightMapTargetCommon__MaxDistance                                              = 1,
	EWeightMapTargetCommon__BackstopDistance                                         = 2,
	EWeightMapTargetCommon__BackstopRadius                                           = 3,
	EWeightMapTargetCommon__AnimDriveMultiplier                                      = 4
};

#pragma pack(pop)


static_assert(sizeof(UClothConfigCommon) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothSharedConfigCommon) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothingAssetCustomData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPointWeightMap) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FClothPhysicalMeshData) == 0x00F8); // 248 bytes (0x000000 - 0x0000F8)
static_assert(sizeof(FClothLODDataCommon) == 0x0160); // 352 bytes (0x000000 - 0x000160)
static_assert(sizeof(FClothConstraintSetup_Legacy) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FClothConfig_Legacy) == 0x00D4); // 212 bytes (0x000000 - 0x0000D4)
static_assert(sizeof(UClothingAssetCommon) == 0x01F0); // 496 bytes (0x000048 - 0x0001F0)
static_assert(sizeof(UClothLODDataCommon_Legacy) == 0x0188); // 392 bytes (0x000028 - 0x000188)
static_assert(sizeof(FClothParameterMask_Legacy) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FPointWeightMap, Values) == 0x0000);
static_assert(offsetof(FClothPhysicalMeshData, Vertices) == 0x0000);
static_assert(offsetof(FClothPhysicalMeshData, Normals) == 0x0010);
static_assert(offsetof(FClothPhysicalMeshData, Indices) == 0x0020);
static_assert(offsetof(FClothPhysicalMeshData, WeightMaps) == 0x0030);
static_assert(offsetof(FClothPhysicalMeshData, InverseMasses) == 0x0080);
static_assert(offsetof(FClothPhysicalMeshData, BoneData) == 0x0090);
static_assert(offsetof(FClothPhysicalMeshData, SelfCollisionIndices) == 0x00A8);
static_assert(offsetof(FClothPhysicalMeshData, MaxDistances) == 0x00B8);
static_assert(offsetof(FClothPhysicalMeshData, BackstopDistances) == 0x00C8);
static_assert(offsetof(FClothPhysicalMeshData, BackstopRadiuses) == 0x00D8);
static_assert(offsetof(FClothPhysicalMeshData, AnimDriveMultipliers) == 0x00E8);
static_assert(offsetof(FClothLODDataCommon, PhysicalMeshData) == 0x0000);
static_assert(offsetof(FClothLODDataCommon, CollisionData) == 0x00F8);
static_assert(offsetof(FClothConfig_Legacy, WindMethod) == 0x0000);
static_assert(offsetof(FClothConfig_Legacy, VerticalConstraintConfig) == 0x0004);
static_assert(offsetof(FClothConfig_Legacy, HorizontalConstraintConfig) == 0x0014);
static_assert(offsetof(FClothConfig_Legacy, BendConstraintConfig) == 0x0024);
static_assert(offsetof(FClothConfig_Legacy, ShearConstraintConfig) == 0x0034);
static_assert(offsetof(FClothConfig_Legacy, Damping) == 0x0050);
static_assert(offsetof(FClothConfig_Legacy, LinearDrag) == 0x0068);
static_assert(offsetof(FClothConfig_Legacy, AngularDrag) == 0x0074);
static_assert(offsetof(FClothConfig_Legacy, LinearInertiaScale) == 0x0080);
static_assert(offsetof(FClothConfig_Legacy, AngularInertiaScale) == 0x008C);
static_assert(offsetof(FClothConfig_Legacy, CentrifugalInertiaScale) == 0x0098);
static_assert(offsetof(FClothConfig_Legacy, GravityOverride) == 0x00B0);
static_assert(offsetof(UClothingAssetCommon, PhysicsAsset) == 0x0048);
static_assert(offsetof(UClothingAssetCommon, ClothConfigs) == 0x0050);
static_assert(offsetof(UClothingAssetCommon, ClothSharedSimConfig) == 0x00A0);
static_assert(offsetof(UClothingAssetCommon, ClothSimConfig) == 0x00A8);
static_assert(offsetof(UClothingAssetCommon, ChaosClothSimConfig) == 0x00B0);
static_assert(offsetof(UClothingAssetCommon, ClothLODData) == 0x00B8);
static_assert(offsetof(UClothingAssetCommon, LODData) == 0x00C8);
static_assert(offsetof(UClothingAssetCommon, LodMap) == 0x00D8);
static_assert(offsetof(UClothingAssetCommon, UsedBoneNames) == 0x00E8);
static_assert(offsetof(UClothingAssetCommon, UsedBoneIndices) == 0x00F8);
static_assert(offsetof(UClothingAssetCommon, CustomData) == 0x0110);
static_assert(offsetof(UClothingAssetCommon, ClothConfig) == 0x0118);
static_assert(offsetof(UClothLODDataCommon_Legacy, PhysicalMeshData) == 0x0028);
static_assert(offsetof(UClothLODDataCommon_Legacy, ClothPhysicalMeshData) == 0x0030);
static_assert(offsetof(UClothLODDataCommon_Legacy, CollisionData) == 0x0128);
static_assert(offsetof(FClothParameterMask_Legacy, MaskName) == 0x0000);
static_assert(offsetof(FClothParameterMask_Legacy, CurrentTarget) == 0x0008);
static_assert(offsetof(FClothParameterMask_Legacy, Values) == 0x0018);

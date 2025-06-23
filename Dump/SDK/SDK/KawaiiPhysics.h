
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "AnimGraphRuntime.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UKawaiiPhysicsLimitsDataAsset;

/// Enum /Script/KawaiiPhysics.ECollisionLimitType
/// Size: 0x01 (1 bytes)
enum class ECollisionLimitType : uint8_t
{
	ECollisionLimitType__None                                                        = 0,
	ECollisionLimitType__Spherical                                                   = 1,
	ECollisionLimitType__Capsule                                                     = 2,
	ECollisionLimitType__Planar                                                      = 3
};

/// Enum /Script/KawaiiPhysics.EBoneForwardAxis
/// Size: 0x01 (1 bytes)
enum class EBoneForwardAxis : uint8_t
{
	EBoneForwardAxis__X_Positive                                                     = 0,
	EBoneForwardAxis__X_Negative                                                     = 1,
	EBoneForwardAxis__Y_Positive                                                     = 2,
	EBoneForwardAxis__Y_Negative                                                     = 3,
	EBoneForwardAxis__Z_Positive                                                     = 4,
	EBoneForwardAxis__Z_Negative                                                     = 5
};

/// Enum /Script/KawaiiPhysics.EPlanarConstraint
/// Size: 0x01 (1 bytes)
enum class EPlanarConstraint : uint8_t
{
	EPlanarConstraint__None                                                          = 0,
	EPlanarConstraint__X                                                             = 1,
	EPlanarConstraint__Y                                                             = 2,
	EPlanarConstraint__Z                                                             = 3
};

#pragma pack(pop)


static_assert(sizeof(FCollisionLimitBase) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FSphericalLimit) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(FCapsuleLimit) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(FPlanarLimit) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UKawaiiPhysicsLimitsDataAsset) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(FKawaiiPhysicsSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FKawaiiPhysicsModifyBone) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FAnimNode_KawaiiPhysics) == 0x0250); // 592 bytes (0x0000C8 - 0x000250)
static_assert(sizeof(FCollisionLimitDataBase) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FPlanarLimitData) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(FCapsuleLimitData) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(FSphericalLimitData) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(offsetof(FCollisionLimitBase, DrivingBone) == 0x0000);
static_assert(offsetof(FCollisionLimitBase, OffsetLocation) == 0x0010);
static_assert(offsetof(FCollisionLimitBase, OffsetRotation) == 0x001C);
static_assert(offsetof(FCollisionLimitBase, Location) == 0x0028);
static_assert(offsetof(FCollisionLimitBase, Rotation) == 0x0040);
static_assert(offsetof(FSphericalLimit, LimitType) == 0x0054);
static_assert(offsetof(FPlanarLimit, Plane) == 0x0050);
static_assert(offsetof(UKawaiiPhysicsLimitsDataAsset, SphericalLimits) == 0x0030);
static_assert(offsetof(UKawaiiPhysicsLimitsDataAsset, CapsuleLimits) == 0x0040);
static_assert(offsetof(UKawaiiPhysicsLimitsDataAsset, PlanarLimits) == 0x0050);
static_assert(offsetof(FKawaiiPhysicsModifyBone, BoneRef) == 0x0000);
static_assert(offsetof(FKawaiiPhysicsModifyBone, ChildIndexs) == 0x0018);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PhysicsSettings) == 0x0028);
static_assert(offsetof(FKawaiiPhysicsModifyBone, Location) == 0x0040);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PrevLocation) == 0x004C);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PrevRotation) == 0x0060);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseLocation) == 0x0070);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseRotation) == 0x0080);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseScale) == 0x0090);
static_assert(offsetof(FAnimNode_KawaiiPhysics, RootBone) == 0x00C8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, ExcludeBones) == 0x00D8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PhysicsSettings) == 0x00F0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, DampingCurve) == 0x0108);
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingLocationCurve) == 0x0110);
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingRotationCurve) == 0x0118);
static_assert(offsetof(FAnimNode_KawaiiPhysics, StiffnessCurve) == 0x0120);
static_assert(offsetof(FAnimNode_KawaiiPhysics, RadiusCurve) == 0x0128);
static_assert(offsetof(FAnimNode_KawaiiPhysics, LimitAngleCurve) == 0x0130);
static_assert(offsetof(FAnimNode_KawaiiPhysics, BoneForwardAxis) == 0x0140);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PlanarConstraint) == 0x0141);
static_assert(offsetof(FAnimNode_KawaiiPhysics, SphericalLimits) == 0x0148);
static_assert(offsetof(FAnimNode_KawaiiPhysics, CapsuleLimits) == 0x0158);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PlanarLimits) == 0x0168);
static_assert(offsetof(FAnimNode_KawaiiPhysics, LimitsDataAsset) == 0x0178);
static_assert(offsetof(FAnimNode_KawaiiPhysics, SphericalLimitsData) == 0x0180);
static_assert(offsetof(FAnimNode_KawaiiPhysics, CapsuleLimitsData) == 0x0190);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PlanarLimitsData) == 0x01A0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, Gravity) == 0x01B8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, ModifyBones) == 0x01D8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PreSkelCompTransform) == 0x01F0);
static_assert(offsetof(FCollisionLimitDataBase, DrivingBoneName) == 0x0000);
static_assert(offsetof(FCollisionLimitDataBase, OffsetLocation) == 0x0008);
static_assert(offsetof(FCollisionLimitDataBase, OffsetRotation) == 0x0014);
static_assert(offsetof(FCollisionLimitDataBase, Location) == 0x0020);
static_assert(offsetof(FCollisionLimitDataBase, Rotation) == 0x0030);
static_assert(offsetof(FCollisionLimitDataBase, Guid) == 0x0040);
static_assert(offsetof(FPlanarLimitData, Plane) == 0x0050);
static_assert(offsetof(FSphericalLimitData, LimitType) == 0x0054);

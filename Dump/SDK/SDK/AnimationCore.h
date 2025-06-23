
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UAnimationDataSourceRegistry;

/// Enum /Script/AnimationCore.ETransformConstraintType
/// Size: 0x01 (1 bytes)
enum class ETransformConstraintType : uint8_t
{
	ETransformConstraintType__Translation                                            = 0,
	ETransformConstraintType__Rotation                                               = 1,
	ETransformConstraintType__Scale                                                  = 2,
	ETransformConstraintType__Parent                                                 = 3
};

/// Enum /Script/AnimationCore.EConstraintType
/// Size: 0x01 (1 bytes)
enum class EConstraintType : uint8_t
{
	EConstraintType__Transform                                                       = 0,
	EConstraintType__Aim                                                             = 1
};

#pragma pack(pop)


static_assert(sizeof(UAnimationDataSourceRegistry) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FNodeObject) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNodeHierarchyData) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FNodeHierarchyWithUserData) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FFilterOptionPerAxis) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(FConstraintDescription) == 0x000D); // 13 bytes (0x000000 - 0x00000D)
static_assert(sizeof(FTransformConstraint) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FConstraintOffset) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FConstraintDescriptor) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FConstraintData) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FTransformFilter) == 0x0009); // 9 bytes (0x000000 - 0x000009)
static_assert(sizeof(FCCDIKChainLink) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FEulerTransform) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FFABRIKChainLink) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FAxis) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FConstraintDescriptionEx) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAimConstraintDescription) == 0x0040); // 64 bytes (0x000010 - 0x000040)
static_assert(sizeof(FTransformConstraintDescription) == 0x0018); // 24 bytes (0x000010 - 0x000018)
static_assert(sizeof(FNodeChain) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTransformNoScale) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FNodeObject, Name) == 0x0000);
static_assert(offsetof(FNodeObject, ParentName) == 0x0008);
static_assert(offsetof(FNodeHierarchyData, Nodes) == 0x0000);
static_assert(offsetof(FNodeHierarchyData, Transforms) == 0x0010);
static_assert(offsetof(FNodeHierarchyData, NodeNameToIndexMapping) == 0x0020);
static_assert(offsetof(FNodeHierarchyWithUserData, Hierarchy) == 0x0008);
static_assert(offsetof(FConstraintDescription, TranslationAxes) == 0x0004);
static_assert(offsetof(FConstraintDescription, RotationAxes) == 0x0007);
static_assert(offsetof(FConstraintDescription, ScaleAxes) == 0x000A);
static_assert(offsetof(FTransformConstraint, Operator) == 0x0000);
static_assert(offsetof(FTransformConstraint, SourceNode) == 0x0010);
static_assert(offsetof(FTransformConstraint, TargetNode) == 0x0018);
static_assert(offsetof(FConstraintOffset, Translation) == 0x0000);
static_assert(offsetof(FConstraintOffset, Rotation) == 0x0010);
static_assert(offsetof(FConstraintOffset, Scale) == 0x0020);
static_assert(offsetof(FConstraintOffset, Parent) == 0x0030);
static_assert(offsetof(FConstraintDescriptor, Type) == 0x0000);
static_assert(offsetof(FConstraintData, Constraint) == 0x0000);
static_assert(offsetof(FConstraintData, Offset) == 0x0020);
static_assert(offsetof(FConstraintData, CurrentTransform) == 0x0050);
static_assert(offsetof(FTransformFilter, TranslationFilter) == 0x0000);
static_assert(offsetof(FTransformFilter, RotationFilter) == 0x0003);
static_assert(offsetof(FTransformFilter, ScaleFilter) == 0x0006);
static_assert(offsetof(FEulerTransform, Location) == 0x0000);
static_assert(offsetof(FEulerTransform, Rotation) == 0x000C);
static_assert(offsetof(FEulerTransform, Scale) == 0x0018);
static_assert(offsetof(FAxis, Axis) == 0x0000);
static_assert(offsetof(FConstraintDescriptionEx, AxesFilterOption) == 0x0008);
static_assert(offsetof(FAimConstraintDescription, LookAt_Axis) == 0x0010);
static_assert(offsetof(FAimConstraintDescription, LookUp_Axis) == 0x0020);
static_assert(offsetof(FAimConstraintDescription, LookUpTarget) == 0x0034);
static_assert(offsetof(FTransformConstraintDescription, TransformType) == 0x0010);
static_assert(offsetof(FNodeChain, Nodes) == 0x0000);
static_assert(offsetof(FTransformNoScale, Location) == 0x0000);
static_assert(offsetof(FTransformNoScale, Rotation) == 0x0010);

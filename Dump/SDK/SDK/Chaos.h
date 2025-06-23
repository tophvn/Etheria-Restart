
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)


/// Enum /Script/Chaos.EClusterUnionMethod
/// Size: 0x01 (1 bytes)
enum class EClusterUnionMethod : uint8_t
{
	EClusterUnionMethod__PointImplicit                                               = 0,
	EClusterUnionMethod__DelaunayTriangulation                                       = 1,
	EClusterUnionMethod__MinimalSpanningSubsetDelaunayTriangulation                  = 2,
	EClusterUnionMethod__PointImplicitAugmentedWithMinimalDelaunay                   = 3,
	EClusterUnionMethod__None                                                        = 4
};

/// Enum /Script/Chaos.EFieldPhysicsDefaultFields
/// Size: 0x01 (1 bytes)
enum class EFieldPhysicsDefaultFields : uint8_t
{
	Field_RadialIntMask                                                              = 0,
	Field_RadialFalloff                                                              = 1,
	Field_UniformVector                                                              = 2,
	Field_RadialVector                                                               = 3,
	Field_RadialVectorFalloff                                                        = 4,
	Field_EFieldPhysicsDefaultFields_Max                                             = 5
};

/// Enum /Script/Chaos.EFieldPhysicsType
/// Size: 0x01 (1 bytes)
enum class EFieldPhysicsType : uint8_t
{
	Field_None                                                                       = 0,
	Field_DynamicState                                                               = 1,
	Field_LinearForce                                                                = 2,
	Field_ExternalClusterStrain                                                      = 3,
	Field_Kill                                                                       = 4,
	Field_LinearVelocity                                                             = 5,
	Field_AngularVelociy                                                             = 6,
	Field_AngularTorque                                                              = 7,
	Field_InternalClusterStrain                                                      = 8,
	Field_DisableThreshold                                                           = 9,
	Field_SleepingThreshold                                                          = 10,
	Field_PositionStatic                                                             = 11,
	Field_PositionAnimated                                                           = 12,
	Field_PositionTarget                                                             = 13,
	Field_DynamicConstraint                                                          = 14,
	Field_CollisionGroup                                                             = 15,
	Field_ActivateDisabled                                                           = 16,
	Field_PhysicsType_Max                                                            = 17
};

/// Enum /Script/Chaos.EFieldFalloffType
/// Size: 0x01 (1 bytes)
enum class EFieldFalloffType : uint8_t
{
	Field_FallOff_None                                                               = 0,
	Field_Falloff_Linear                                                             = 1,
	Field_Falloff_Inverse                                                            = 2,
	Field_Falloff_Squared                                                            = 3,
	Field_Falloff_Logarithmic                                                        = 4,
	Field_Falloff_Max                                                                = 5
};

/// Enum /Script/Chaos.EFieldResolutionType
/// Size: 0x01 (1 bytes)
enum class EFieldResolutionType : uint8_t
{
	Field_Resolution_Minimal                                                         = 0,
	Field_Resolution_DisabledParents                                                 = 1,
	Field_Resolution_Maximum                                                         = 2,
	Field_Resolution_Max                                                             = 3
};

/// Enum /Script/Chaos.EFieldCullingOperationType
/// Size: 0x01 (1 bytes)
enum class EFieldCullingOperationType : uint8_t
{
	Field_Culling_Inside                                                             = 0,
	Field_Culling_Outside                                                            = 1,
	Field_Culling_Operation_Max                                                      = 2
};

/// Enum /Script/Chaos.EFieldOperationType
/// Size: 0x01 (1 bytes)
enum class EFieldOperationType : uint8_t
{
	Field_Multiply                                                                   = 0,
	Field_Divide                                                                     = 1,
	Field_Add                                                                        = 2,
	Field_Substract                                                                  = 3,
	Field_Operation_Max                                                              = 4
};

/// Enum /Script/Chaos.ESetMaskConditionType
/// Size: 0x01 (1 bytes)
enum class ESetMaskConditionType : uint8_t
{
	Field_Set_Always                                                                 = 0,
	Field_Set_IFF_NOT_Interior                                                       = 1,
	Field_Set_IFF_NOT_Exterior                                                       = 2,
	Field_MaskCondition_Max                                                          = 3
};

/// Enum /Script/Chaos.EEmissionPatternTypeEnum
/// Size: 0x01 (1 bytes)
enum class EEmissionPatternTypeEnum : uint8_t
{
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_First_Frame                     = 0,
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_On_Demand                       = 1,
	EEmissionPatternTypeEnum__Chaos_Max                                              = 2
};

/// Enum /Script/Chaos.EInitialVelocityTypeEnum
/// Size: 0x01 (1 bytes)
enum class EInitialVelocityTypeEnum : uint8_t
{
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_User_Defined                    = 0,
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_None                            = 1,
	EInitialVelocityTypeEnum__Chaos_Max                                              = 2
};

/// Enum /Script/Chaos.EGeometryCollectionPhysicsTypeEnum
/// Size: 0x01 (1 bytes)
enum class EGeometryCollectionPhysicsTypeEnum : uint8_t
{
	EGeometryCollectionPhysicsTypeEnum__Chaos_AngularVelocity                        = 0,
	EGeometryCollectionPhysicsTypeEnum__Chaos_DynamicState                           = 1,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearVelocity                         = 2,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InitialAngularVelocity                 = 3,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InitialLinearVelocity                  = 4,
	EGeometryCollectionPhysicsTypeEnum__Chaos_CollisionGroup                         = 5,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearForce                            = 6,
	EGeometryCollectionPhysicsTypeEnum__Chaos_AngularTorque                          = 7,
	EGeometryCollectionPhysicsTypeEnum__Chaos_Max                                    = 8
};

/// Enum /Script/Chaos.EObjectStateTypeEnum
/// Size: 0x01 (1 bytes)
enum class EObjectStateTypeEnum : uint8_t
{
	EObjectStateTypeEnum__Chaos_NONE                                                 = 0,
	EObjectStateTypeEnum__Chaos_Object_Sleeping                                      = 1,
	EObjectStateTypeEnum__Chaos_Object_Kinematic                                     = 2,
	EObjectStateTypeEnum__Chaos_Object_Static                                        = 3,
	EObjectStateTypeEnum__Chaos_Object_Dynamic                                       = 4,
	EObjectStateTypeEnum__Chaos_Object_UserDefined                                   = 100,
	EObjectStateTypeEnum__Chaos_Max                                                  = 101
};

/// Enum /Script/Chaos.EImplicitTypeEnum
/// Size: 0x01 (1 bytes)
enum class EImplicitTypeEnum : uint8_t
{
	EImplicitTypeEnum__Chaos_Implicit_Box                                            = 0,
	EImplicitTypeEnum__Chaos_Implicit_Sphere                                         = 1,
	EImplicitTypeEnum__Chaos_Implicit_Capsule                                        = 2,
	EImplicitTypeEnum__Chaos_Implicit_LevelSet                                       = 3,
	EImplicitTypeEnum__Chaos_Implicit_None                                           = 4,
	EImplicitTypeEnum__Chaos_Max                                                     = 5
};

/// Enum /Script/Chaos.ECollisionTypeEnum
/// Size: 0x01 (1 bytes)
enum class ECollisionTypeEnum : uint8_t
{
	ECollisionTypeEnum__Chaos_Volumetric                                             = 0,
	ECollisionTypeEnum__Chaos_Surface_Volumetric                                     = 1,
	ECollisionTypeEnum__Chaos_Max                                                    = 2
};

/// Enum /Script/Chaos.EChaosBufferMode
/// Size: 0x01 (1 bytes)
enum class EChaosBufferMode : uint8_t
{
	EChaosBufferMode__Double                                                         = 0,
	EChaosBufferMode__Triple                                                         = 1,
	EChaosBufferMode__Num                                                            = 2,
	EChaosBufferMode__Invalid                                                        = 3
};

/// Enum /Script/Chaos.EChaosThreadingMode
/// Size: 0x01 (1 bytes)
enum class EChaosThreadingMode : uint8_t
{
	EChaosThreadingMode__DedicatedThread                                             = 0,
	EChaosThreadingMode__TaskGraph                                                   = 1,
	EChaosThreadingMode__SingleThread                                                = 2,
	EChaosThreadingMode__Num                                                         = 3,
	EChaosThreadingMode__Invalid                                                     = 4
};

/// Enum /Script/Chaos.EChaosSolverTickMode
/// Size: 0x01 (1 bytes)
enum class EChaosSolverTickMode : uint8_t
{
	EChaosSolverTickMode__Fixed                                                      = 0,
	EChaosSolverTickMode__Variable                                                   = 1,
	EChaosSolverTickMode__VariableCapped                                             = 2,
	EChaosSolverTickMode__VariableCappedWithTarget                                   = 3
};

/// Enum /Script/Chaos.EGeometryCollectionCacheType
/// Size: 0x01 (1 bytes)
enum class EGeometryCollectionCacheType : uint8_t
{
	EGeometryCollectionCacheType__None                                               = 0,
	EGeometryCollectionCacheType__Record                                             = 1,
	EGeometryCollectionCacheType__Play                                               = 2,
	EGeometryCollectionCacheType__RecordAndPlay                                      = 3
};

#pragma pack(pop)


static_assert(sizeof(FSolverCollisionFilterSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSolverBreakingFilterSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSolverTrailingFilterSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FChaosSolverConfiguration) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FSolverCollisionData) == 0x006C); // 108 bytes (0x000000 - 0x00006C)
static_assert(sizeof(FSolverBreakingData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRecordedFrame) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FRecordedTransformTrack) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSolverTrailingData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FChaosSolverConfiguration, ClusterUnionConnectionType) == 0x0028);
static_assert(offsetof(FChaosSolverConfiguration, CollisionFilterSettings) == 0x002C);
static_assert(offsetof(FChaosSolverConfiguration, BreakingFilterSettings) == 0x0040);
static_assert(offsetof(FChaosSolverConfiguration, TrailingFilterSettings) == 0x0054);
static_assert(offsetof(FSolverCollisionData, Location) == 0x0000);
static_assert(offsetof(FSolverCollisionData, AccumulatedImpulse) == 0x000C);
static_assert(offsetof(FSolverCollisionData, Normal) == 0x0018);
static_assert(offsetof(FSolverCollisionData, Velocity1) == 0x0024);
static_assert(offsetof(FSolverCollisionData, Velocity2) == 0x0030);
static_assert(offsetof(FSolverCollisionData, AngularVelocity1) == 0x003C);
static_assert(offsetof(FSolverCollisionData, AngularVelocity2) == 0x0048);
static_assert(offsetof(FSolverBreakingData, Location) == 0x0000);
static_assert(offsetof(FSolverBreakingData, Velocity) == 0x000C);
static_assert(offsetof(FSolverBreakingData, AngularVelocity) == 0x0018);
static_assert(offsetof(FRecordedFrame, Transforms) == 0x0000);
static_assert(offsetof(FRecordedFrame, TransformIndices) == 0x0010);
static_assert(offsetof(FRecordedFrame, PreviousTransformIndices) == 0x0020);
static_assert(offsetof(FRecordedFrame, DisabledFlags) == 0x0030);
static_assert(offsetof(FRecordedFrame, Collisions) == 0x0040);
static_assert(offsetof(FRecordedFrame, Breakings) == 0x0050);
static_assert(offsetof(FRecordedTransformTrack, Records) == 0x0000);
static_assert(offsetof(FSolverTrailingData, Location) == 0x0000);
static_assert(offsetof(FSolverTrailingData, Velocity) == 0x000C);
static_assert(offsetof(FSolverTrailingData, AngularVelocity) == 0x0018);

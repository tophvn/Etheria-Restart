
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/Chaos.SolverCollisionFilterSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSolverCollisionFilterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      FilterEnabled                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinImpulse                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Chaos.SolverBreakingFilterSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSolverBreakingFilterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      FilterEnabled                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinVolume                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Chaos.SolverTrailingFilterSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSolverTrailingFilterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      FilterEnabled                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinVolume                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Chaos.ChaosSolverConfiguration
/// Size: 0x0068 (0x000000 - 0x000068)
class FChaosSolverConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(int32_t)                                   Iterations                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   CollisionPairIterations                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   PushOutIterations                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   CollisionPushOutPairIterations                              OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     CollisionMarginFraction                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     CollisionMarginMax                                          OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     CollisionCullDistance                                       OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   JointPairIterations                                         OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   JointPushOutPairIterations                                  OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(float)                                     ClusterConnectionFactor                                     OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(EClusterUnionMethod)                       ClusterUnionConnectionType                                  OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(bool)                                      bGenerateCollisionData                                      OFFSET(get<bool>, {0x29, 1, 0, 0})
	SMember(FSolverCollisionFilterSettings)            CollisionFilterSettings                                     OFFSET(getStruct<T>, {0x2C, 16, 0, 0})
	DMember(bool)                                      bGenerateBreakData                                          OFFSET(get<bool>, {0x3C, 1, 0, 0})
	SMember(FSolverBreakingFilterSettings)             BreakingFilterSettings                                      OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bGenerateTrailingData                                       OFFSET(get<bool>, {0x50, 1, 0, 0})
	SMember(FSolverTrailingFilterSettings)             TrailingFilterSettings                                      OFFSET(getStruct<T>, {0x54, 16, 0, 0})
	DMember(bool)                                      bGenerateContactGraph                                       OFFSET(get<bool>, {0x64, 1, 0, 0})
};

/// Struct /Script/Chaos.SolverCollisionData
/// Size: 0x006C (0x000000 - 0x00006C)
class FSolverCollisionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 108;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   AccumulatedImpulse                                          OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector)                                   Velocity1                                                   OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	SMember(FVector)                                   Velocity2                                                   OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	SMember(FVector)                                   AngularVelocity1                                            OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
	SMember(FVector)                                   AngularVelocity2                                            OFFSET(getStruct<T>, {0x48, 12, 0, 0})
	DMember(float)                                     Mass1                                                       OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     Mass2                                                       OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   LevelsetIndex                                               OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndexMesh                                           OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(int32_t)                                   LevelsetIndexMesh                                           OFFSET(get<int32_t>, {0x68, 4, 0, 0})
};

/// Struct /Script/Chaos.SolverBreakingData
/// Size: 0x0030 (0x000000 - 0x000030)
class FSolverBreakingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndexMesh                                           OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Struct /Script/Chaos.RecordedFrame
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FRecordedFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           TransformIndices                                            OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<int32_t>)                           PreviousTransformIndices                                    OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<bool>)                              DisabledFlags                                               OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FSolverCollisionData>)              Collisions                                                  OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FSolverBreakingData>)               Breakings                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TSet<FSolverTrailingData>)                 Trailings                                                   OFFSET(get<T>, {0x60, 80, 0, 0})
	DMember(float)                                     Timestamp                                                   OFFSET(get<float>, {0xB0, 4, 0, 0})
};

/// Struct /Script/Chaos.RecordedTransformTrack
/// Size: 0x0010 (0x000000 - 0x000010)
class FRecordedTransformTrack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRecordedFrame>)                    Records                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Chaos.SolverTrailingData
/// Size: 0x0030 (0x000000 - 0x000030)
class FSolverTrailingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndexMesh                                           OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Enum /Script/Chaos.EClusterUnionMethod
/// Size: 0x05
enum class EClusterUnionMethod : uint8_t
{
	EClusterUnionMethod__PointImplicit                                               = 0,
	EClusterUnionMethod__DelaunayTriangulation                                       = 1,
	EClusterUnionMethod__MinimalSpanningSubsetDelaunayTriangulation                  = 2,
	EClusterUnionMethod__PointImplicitAugmentedWithMinimalDelaunay                   = 3,
	EClusterUnionMethod__None                                                        = 4
};

/// Enum /Script/Chaos.EFieldPhysicsDefaultFields
/// Size: 0x06
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
/// Size: 0x18
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
/// Size: 0x06
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
/// Size: 0x04
enum class EFieldResolutionType : uint8_t
{
	Field_Resolution_Minimal                                                         = 0,
	Field_Resolution_DisabledParents                                                 = 1,
	Field_Resolution_Maximum                                                         = 2,
	Field_Resolution_Max                                                             = 3
};

/// Enum /Script/Chaos.EFieldCullingOperationType
/// Size: 0x03
enum class EFieldCullingOperationType : uint8_t
{
	Field_Culling_Inside                                                             = 0,
	Field_Culling_Outside                                                            = 1,
	Field_Culling_Operation_Max                                                      = 2
};

/// Enum /Script/Chaos.EFieldOperationType
/// Size: 0x05
enum class EFieldOperationType : uint8_t
{
	Field_Multiply                                                                   = 0,
	Field_Divide                                                                     = 1,
	Field_Add                                                                        = 2,
	Field_Substract                                                                  = 3,
	Field_Operation_Max                                                              = 4
};

/// Enum /Script/Chaos.ESetMaskConditionType
/// Size: 0x04
enum class ESetMaskConditionType : uint8_t
{
	Field_Set_Always                                                                 = 0,
	Field_Set_IFF_NOT_Interior                                                       = 1,
	Field_Set_IFF_NOT_Exterior                                                       = 2,
	Field_MaskCondition_Max                                                          = 3
};

/// Enum /Script/Chaos.EEmissionPatternTypeEnum
/// Size: 0x03
enum class EEmissionPatternTypeEnum : uint8_t
{
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_First_Frame                     = 0,
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_On_Demand                       = 1,
	EEmissionPatternTypeEnum__Chaos_Max                                              = 2
};

/// Enum /Script/Chaos.EInitialVelocityTypeEnum
/// Size: 0x03
enum class EInitialVelocityTypeEnum : uint8_t
{
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_User_Defined                    = 0,
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_None                            = 1,
	EInitialVelocityTypeEnum__Chaos_Max                                              = 2
};

/// Enum /Script/Chaos.EGeometryCollectionPhysicsTypeEnum
/// Size: 0x09
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
/// Size: 0x07
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
/// Size: 0x06
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
/// Size: 0x03
enum class ECollisionTypeEnum : uint8_t
{
	ECollisionTypeEnum__Chaos_Volumetric                                             = 0,
	ECollisionTypeEnum__Chaos_Surface_Volumetric                                     = 1,
	ECollisionTypeEnum__Chaos_Max                                                    = 2
};

/// Enum /Script/Chaos.EChaosBufferMode
/// Size: 0x04
enum class EChaosBufferMode : uint8_t
{
	EChaosBufferMode__Double                                                         = 0,
	EChaosBufferMode__Triple                                                         = 1,
	EChaosBufferMode__Num                                                            = 2,
	EChaosBufferMode__Invalid                                                        = 3
};

/// Enum /Script/Chaos.EChaosThreadingMode
/// Size: 0x05
enum class EChaosThreadingMode : uint8_t
{
	EChaosThreadingMode__DedicatedThread                                             = 0,
	EChaosThreadingMode__TaskGraph                                                   = 1,
	EChaosThreadingMode__SingleThread                                                = 2,
	EChaosThreadingMode__Num                                                         = 3,
	EChaosThreadingMode__Invalid                                                     = 4
};

/// Enum /Script/Chaos.EChaosSolverTickMode
/// Size: 0x04
enum class EChaosSolverTickMode : uint8_t
{
	EChaosSolverTickMode__Fixed                                                      = 0,
	EChaosSolverTickMode__Variable                                                   = 1,
	EChaosSolverTickMode__VariableCapped                                             = 2,
	EChaosSolverTickMode__VariableCappedWithTarget                                   = 3
};

/// Enum /Script/Chaos.EGeometryCollectionCacheType
/// Size: 0x04
enum class EGeometryCollectionCacheType : uint8_t
{
	EGeometryCollectionCacheType__None                                               = 0,
	EGeometryCollectionCacheType__Record                                             = 1,
	EGeometryCollectionCacheType__Play                                               = 2,
	EGeometryCollectionCacheType__RecordAndPlay                                      = 3
};


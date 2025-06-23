
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/KawaiiPhysics.CollisionLimitBase
/// Size: 0x0050 (0x000000 - 0x000050)
class FCollisionLimitBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FBoneReference)                            DrivingBone                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   OffsetLocation                                              OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FRotator)                                  OffsetRotation                                              OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/KawaiiPhysics.SphericalLimit
/// Size: 0x0010 (0x000050 - 0x000060)
class FSphericalLimit : public FCollisionLimitBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(ESphericalLimitType)                       LimitType                                                   OFFSET(get<T>, {0x54, 1, 0, 0})
};

/// Struct /Script/KawaiiPhysics.CapsuleLimit
/// Size: 0x0010 (0x000050 - 0x000060)
class FCapsuleLimit : public FCollisionLimitBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Struct /Script/KawaiiPhysics.PlanarLimit
/// Size: 0x0010 (0x000050 - 0x000060)
class FPlanarLimit : public FCollisionLimitBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FPlane)                                    Plane                                                       OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
/// Size: 0x0030 (0x000030 - 0x000060)
class UKawaiiPhysicsLimitsDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FSphericalLimit>)                   SphericalLimits                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FCapsuleLimit>)                     CapsuleLimits                                               OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FPlanarLimit>)                      PlanarLimits                                                OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FKawaiiPhysicsSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Damping                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     WorldDampingLocation                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     WorldDampingRotation                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     LimitAngle                                                  OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsModifyBone
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FKawaiiPhysicsModifyBone : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FBoneReference)                            BoneRef                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TArray<int32_t>)                           ChildIndexs                                                 OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FKawaiiPhysicsSettings)                    PhysicsSettings                                             OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FVector)                                   PrevLocation                                                OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	SMember(FQuat)                                     PrevRotation                                                OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FVector)                                   PoseLocation                                                OFFSET(getStruct<T>, {0x70, 12, 0, 0})
	SMember(FQuat)                                     PoseRotation                                                OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FVector)                                   PoseScale                                                   OFFSET(getStruct<T>, {0x90, 12, 0, 0})
	DMember(float)                                     LengthFromRoot                                              OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(bool)                                      bDummy                                                      OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Struct /Script/KawaiiPhysics.AnimNode_KawaiiPhysics
/// Size: 0x0188 (0x0000C8 - 0x000250)
class FAnimNode_KawaiiPhysics : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FBoneReference)                            RootBone                                                    OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FBoneReference>)                    ExcludeBones                                                OFFSET(get<T>, {0xD8, 16, 0, 0})
	DMember(int32_t)                                   TargetFramerate                                             OFFSET(get<int32_t>, {0xE8, 4, 0, 0})
	DMember(bool)                                      OverrideTargetFramerate                                     OFFSET(get<bool>, {0xEC, 1, 0, 0})
	SMember(FKawaiiPhysicsSettings)                    PhysicsSettings                                             OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	CMember(class UCurveFloat*)                        DampingCurve                                                OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class UCurveFloat*)                        WorldDampingLocationCurve                                   OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UCurveFloat*)                        WorldDampingRotationCurve                                   OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UCurveFloat*)                        StiffnessCurve                                              OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class UCurveFloat*)                        RadiusCurve                                                 OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UCurveFloat*)                        LimitAngleCurve                                             OFFSET(get<T>, {0x130, 8, 0, 0})
	DMember(bool)                                      bUpdatePhysicsSettingsInGame                                OFFSET(get<bool>, {0x138, 1, 0, 0})
	DMember(float)                                     DummyBoneLength                                             OFFSET(get<float>, {0x13C, 4, 0, 0})
	CMember(EBoneForwardAxis)                          BoneForwardAxis                                             OFFSET(get<T>, {0x140, 1, 0, 0})
	CMember(EPlanarConstraint)                         PlanarConstraint                                            OFFSET(get<T>, {0x141, 1, 0, 0})
	CMember(TArray<FSphericalLimit>)                   SphericalLimits                                             OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TArray<FCapsuleLimit>)                     CapsuleLimits                                               OFFSET(get<T>, {0x158, 16, 0, 0})
	CMember(TArray<FPlanarLimit>)                      PlanarLimits                                                OFFSET(get<T>, {0x168, 16, 0, 0})
	CMember(class UKawaiiPhysicsLimitsDataAsset*)      LimitsDataAsset                                             OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(TArray<FSphericalLimit>)                   SphericalLimitsData                                         OFFSET(get<T>, {0x180, 16, 0, 0})
	CMember(TArray<FCapsuleLimit>)                     CapsuleLimitsData                                           OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(TArray<FPlanarLimit>)                      PlanarLimitsData                                            OFFSET(get<T>, {0x1A0, 16, 0, 0})
	DMember(float)                                     TeleportDistanceThreshold                                   OFFSET(get<float>, {0x1B0, 4, 0, 0})
	DMember(float)                                     TeleportRotationThreshold                                   OFFSET(get<float>, {0x1B4, 4, 0, 0})
	SMember(FVector)                                   Gravity                                                     OFFSET(getStruct<T>, {0x1B8, 12, 0, 0})
	DMember(bool)                                      bEnableWind                                                 OFFSET(get<bool>, {0x1C4, 1, 0, 0})
	DMember(float)                                     WindScale                                                   OFFSET(get<float>, {0x1C8, 4, 0, 0})
	DMember(bool)                                      bOverrideLimitVelocity                                      OFFSET(get<bool>, {0x1CC, 1, 0, 0})
	DMember(float)                                     LimitVelocity                                               OFFSET(get<float>, {0x1D0, 4, 0, 0})
	CMember(TArray<FKawaiiPhysicsModifyBone>)          ModifyBones                                                 OFFSET(get<T>, {0x1D8, 16, 0, 0})
	DMember(float)                                     TotalBoneLength                                             OFFSET(get<float>, {0x1E8, 4, 0, 0})
	SMember(FTransform)                                PreSkelCompTransform                                        OFFSET(getStruct<T>, {0x1F0, 48, 0, 0})
	DMember(bool)                                      bInitPhysicsSettings                                        OFFSET(get<bool>, {0x220, 1, 0, 0})
};

/// Struct /Script/KawaiiPhysics.CollisionLimitDataBase
/// Size: 0x0050 (0x000000 - 0x000050)
class FCollisionLimitDataBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     DrivingBoneName                                             OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   OffsetLocation                                              OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRotator)                                  OffsetRotation                                              OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/KawaiiPhysics.PlanarLimitData
/// Size: 0x0010 (0x000050 - 0x000060)
class FPlanarLimitData : public FCollisionLimitDataBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FPlane)                                    Plane                                                       OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/KawaiiPhysics.CapsuleLimitData
/// Size: 0x0010 (0x000050 - 0x000060)
class FCapsuleLimitData : public FCollisionLimitDataBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Struct /Script/KawaiiPhysics.SphericalLimitData
/// Size: 0x0010 (0x000050 - 0x000060)
class FSphericalLimitData : public FCollisionLimitDataBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(ESphericalLimitType)                       LimitType                                                   OFFSET(get<T>, {0x54, 1, 0, 0})
};

/// Enum /Script/KawaiiPhysics.ECollisionLimitType
/// Size: 0x04
enum class ECollisionLimitType : uint8_t
{
	ECollisionLimitType__None                                                        = 0,
	ECollisionLimitType__Spherical                                                   = 1,
	ECollisionLimitType__Capsule                                                     = 2,
	ECollisionLimitType__Planar                                                      = 3
};

/// Enum /Script/KawaiiPhysics.EBoneForwardAxis
/// Size: 0x06
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
/// Size: 0x04
enum class EPlanarConstraint : uint8_t
{
	EPlanarConstraint__None                                                          = 0,
	EPlanarConstraint__X                                                             = 1,
	EPlanarConstraint__Y                                                             = 2,
	EPlanarConstraint__Z                                                             = 3
};


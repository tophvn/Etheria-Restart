
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: ClothingSystemRuntimeCommon
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ChaosCloth.ChaosClothConfig
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UChaosClothConfig : public UClothConfigCommon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EClothMassMode)                            MassMode                                                    OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(float)                                     UniformMass                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     TotalMass                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Density                                                     OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MinPerParticleMass                                          OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     EdgeStiffness                                               OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     BendingStiffness                                            OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bUseBendingElements                                         OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(float)                                     AreaStiffness                                               OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     VolumeStiffness                                             OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     StrainLimitingStiffness                                     OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     LimitScale                                                  OFFSET(get<float>, {0x54, 4, 0, 0})
	CMember(EChaosClothTetherMode)                     TetherMode                                                  OFFSET(get<T>, {0x58, 1, 0, 0})
	DMember(bool)                                      bUseGeodesicDistance                                        OFFSET(get<bool>, {0x59, 1, 0, 0})
	DMember(float)                                     ShapeTargetStiffness                                        OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     CollisionThickness                                          OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     FrictionCoefficient                                         OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(bool)                                      bUseSelfCollisions                                          OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(float)                                     SelfCollisionThickness                                      OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bUseLegacyBackstop                                          OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(float)                                     DampingCoefficient                                          OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(bool)                                      bUsePointBasedWindModel                                     OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(float)                                     DragCoefficient                                             OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     LiftCoefficient                                             OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(bool)                                      bUseGravityOverride                                         OFFSET(get<bool>, {0x84, 1, 0, 0})
	DMember(float)                                     GravityScale                                                OFFSET(get<float>, {0x88, 4, 0, 0})
	SMember(FVector)                                   Gravity                                                     OFFSET(getStruct<T>, {0x8C, 12, 0, 0})
	DMember(float)                                     AnimDriveSpringStiffness                                    OFFSET(get<float>, {0x98, 4, 0, 0})
	SMember(FVector)                                   LinearVelocityScale                                         OFFSET(getStruct<T>, {0x9C, 12, 0, 0})
	DMember(float)                                     AngularVelocityScale                                        OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bUseTetrahedralConstraints                                  OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bUseThinShellVolumeConstraints                              OFFSET(get<bool>, {0xAD, 1, 0, 0})
	DMember(bool)                                      bUseContinuousCollisionDetection                            OFFSET(get<bool>, {0xAE, 1, 0, 0})
};

/// Class /Script/ChaosCloth.ChaosClothSharedSimConfig
/// Size: 0x0030 (0x000028 - 0x000058)
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   IterationCount                                              OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   SubdivisionCount                                            OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(float)                                     SelfCollisionThickness                                      OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     CollisionThickness                                          OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bUseDampingOverride                                         OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(float)                                     Damping                                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bUseGravityOverride                                         OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(float)                                     GravityScale                                                OFFSET(get<float>, {0x44, 4, 0, 0})
	SMember(FVector)                                   Gravity                                                     OFFSET(getStruct<T>, {0x48, 12, 0, 0})
	DMember(bool)                                      bUseLocalSpaceSimulation                                    OFFSET(get<bool>, {0x54, 1, 0, 0})
	DMember(bool)                                      bUseXPBDConstraints                                         OFFSET(get<bool>, {0x55, 1, 0, 0})
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationInteractor
/// Size: 0x0028 (0x000030 - 0x000058)
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Enum /Script/ChaosCloth.EChaosClothTetherMode
/// Size: 0x04
enum class EChaosClothTetherMode : uint8_t
{
	EChaosClothTetherMode__FastTetherFastLength                                      = 0,
	EChaosClothTetherMode__AccurateTetherFastLength                                  = 1,
	EChaosClothTetherMode__AccurateTetherAccurateLength                              = 2,
	EChaosClothTetherMode__MaxChaosClothTetherMode                                   = 3
};

/// Enum /Script/ChaosCloth.EChaosWeightMapTarget
/// Size: 0x05
enum class EChaosWeightMapTarget : uint8_t
{
	EChaosWeightMapTarget__None                                                      = 0,
	EChaosWeightMapTarget__MaxDistance                                               = 1,
	EChaosWeightMapTarget__BackstopDistance                                          = 2,
	EChaosWeightMapTarget__BackstopRadius                                            = 3,
	EChaosWeightMapTarget__AnimDriveMultiplier                                       = 4
};


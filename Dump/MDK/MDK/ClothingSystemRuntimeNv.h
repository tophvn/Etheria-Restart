
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: ClothingSystemRuntimeCommon
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject

/// Struct /Script/ClothingSystemRuntimeNv.ClothConstraintSetupNv
/// Size: 0x0010 (0x000000 - 0x000010)
class FClothConstraintSetupNv : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     StiffnessMultiplier                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     StretchLimit                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CompressionLimit                                            OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Class /Script/ClothingSystemRuntimeNv.ClothConfigNv
/// Size: 0x0118 (0x000028 - 0x000140)
class UClothConfigNv : public UClothConfigCommon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(EClothingWindMethodNv)                     ClothingWindMethod                                          OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FClothConstraintSetupNv)                   VerticalConstraint                                          OFFSET(getStruct<T>, {0x2C, 16, 0, 0})
	SMember(FClothConstraintSetupNv)                   HorizontalConstraint                                        OFFSET(getStruct<T>, {0x3C, 16, 0, 0})
	SMember(FClothConstraintSetupNv)                   BendConstraint                                              OFFSET(getStruct<T>, {0x4C, 16, 0, 0})
	SMember(FClothConstraintSetupNv)                   ShearConstraint                                             OFFSET(getStruct<T>, {0x5C, 16, 0, 0})
	DMember(float)                                     SelfCollisionRadius                                         OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     SelfCollisionStiffness                                      OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     SelfCollisionCullScale                                      OFFSET(get<float>, {0x74, 4, 0, 0})
	SMember(FVector)                                   Damping                                                     OFFSET(getStruct<T>, {0x78, 12, 0, 0})
	DMember(float)                                     Friction                                                    OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     WindDragCoefficient                                         OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     WindLiftCoefficient                                         OFFSET(get<float>, {0x8C, 4, 0, 0})
	SMember(FVector)                                   LinearDrag                                                  OFFSET(getStruct<T>, {0x90, 12, 0, 0})
	SMember(FVector)                                   AngularDrag                                                 OFFSET(getStruct<T>, {0x9C, 12, 0, 0})
	SMember(FVector)                                   LinearInertiaScale                                          OFFSET(getStruct<T>, {0xA8, 12, 0, 0})
	SMember(FVector)                                   AngularInertiaScale                                         OFFSET(getStruct<T>, {0xB4, 12, 0, 0})
	SMember(FVector)                                   CentrifugalInertiaScale                                     OFFSET(getStruct<T>, {0xC0, 12, 0, 0})
	DMember(float)                                     SolverFrequency                                             OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     StiffnessFrequency                                          OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     GravityScale                                                OFFSET(get<float>, {0xD4, 4, 0, 0})
	SMember(FVector)                                   GravityOverride                                             OFFSET(getStruct<T>, {0xD8, 12, 0, 0})
	DMember(bool)                                      bUseGravityOverride                                         OFFSET(get<bool>, {0xE4, 1, 0, 0})
	DMember(float)                                     TetherStiffness                                             OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     TetherLimit                                                 OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     CollisionThickness                                          OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     AnimDriveSpringStiffness                                    OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     AnimDriveDamperStiffness                                    OFFSET(get<float>, {0xF8, 4, 0, 0})
	CMember(EClothingWindMethod_Legacy)                WindMethod                                                  OFFSET(get<T>, {0xFC, 1, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              VerticalConstraintConfig                                    OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              HorizontalConstraintConfig                                  OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              BendConstraintConfig                                        OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              ShearConstraintConfig                                       OFFSET(getStruct<T>, {0x130, 16, 0, 0})
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
/// Size: 0x0010 (0x000030 - 0x000040)
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
	// void SetAnimDriveDamperStiffness(float InStiffness);                                                                     // [0x343ffa0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
/// Size: 0x0040 (0x0000E0 - 0x000120)
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<float>)                             MaxDistances                                                OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<float>)                             BackstopDistances                                           OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<float>)                             BackstopRadiuses                                            OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<float>)                             AnimDriveMultipliers                                        OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Enum /Script/ClothingSystemRuntimeNv.EClothingWindMethodNv
/// Size: 0x02
enum class EClothingWindMethodNv : uint8_t
{
	EClothingWindMethodNv__Legacy                                                    = 0,
	EClothingWindMethodNv__Accurate                                                  = 1
};


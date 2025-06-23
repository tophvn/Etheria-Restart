
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ArchVisCharacter.ArchVisCharacter
/// Size: 0x0068 (0x0004B8 - 0x000520)
class AArchVisCharacter : public ACharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	SMember(FString)                                   LookUpAxisName                                              OFFSET(getStruct<T>, {0x4B8, 16, 0, 0})
	SMember(FString)                                   LookUpAtRateAxisName                                        OFFSET(getStruct<T>, {0x4C8, 16, 0, 0})
	SMember(FString)                                   TurnAxisName                                                OFFSET(getStruct<T>, {0x4D8, 16, 0, 0})
	SMember(FString)                                   TurnAtRateAxisName                                          OFFSET(getStruct<T>, {0x4E8, 16, 0, 0})
	SMember(FString)                                   MoveForwardAxisName                                         OFFSET(getStruct<T>, {0x4F8, 16, 0, 0})
	SMember(FString)                                   MoveRightAxisName                                           OFFSET(getStruct<T>, {0x508, 16, 0, 0})
	DMember(float)                                     MouseSensitivityScale_Pitch                                 OFFSET(get<float>, {0x518, 4, 0, 0})
	DMember(float)                                     MouseSensitivityScale_Yaw                                   OFFSET(get<float>, {0x51C, 4, 0, 0})
};

/// Class /Script/ArchVisCharacter.ArchVisCharMovementComponent
/// Size: 0x0050 (0x000B00 - 0x000B50)
class UArchVisCharMovementComponent : public UCharacterMovementComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2896;

public:
	SMember(FRotator)                                  RotationalAcceleration                                      OFFSET(getStruct<T>, {0xB00, 12, 0, 0})
	SMember(FRotator)                                  RotationalDeceleration                                      OFFSET(getStruct<T>, {0xB0C, 12, 0, 0})
	SMember(FRotator)                                  MaxRotationalVelocity                                       OFFSET(getStruct<T>, {0xB18, 12, 0, 0})
	DMember(float)                                     MinPitch                                                    OFFSET(get<float>, {0xB24, 4, 0, 0})
	DMember(float)                                     MaxPitch                                                    OFFSET(get<float>, {0xB28, 4, 0, 0})
	DMember(float)                                     WalkingFriction                                             OFFSET(get<float>, {0xB2C, 4, 0, 0})
	DMember(float)                                     WalkingSpeed                                                OFFSET(get<float>, {0xB30, 4, 0, 0})
	DMember(float)                                     WalkingAcceleration                                         OFFSET(get<float>, {0xB34, 4, 0, 0})
};


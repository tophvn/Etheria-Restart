
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PhysicsCore

/// Struct /Script/PhysXVehicles.WheelSetup
/// Size: 0x0020 (0x000000 - 0x000020)
class FWheelSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UClass*)                             WheelClass                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   AdditionalOffset                                            OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	DMember(bool)                                      bDisableSteering                                            OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/PhysXVehicles.ReplicatedVehicleState
/// Size: 0x0014 (0x000000 - 0x000014)
class FReplicatedVehicleState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     SteeringInput                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ThrottleInput                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     BrakeInput                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     HandbrakeInput                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   CurrentGear                                                 OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/PhysXVehicles.VehicleInputRate
/// Size: 0x0008 (0x000000 - 0x000008)
class FVehicleInputRate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     RiseRate                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     FallRate                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Class /Script/PhysXVehicles.WheeledVehicleMovementComponent
/// Size: 0x0158 (0x000138 - 0x000290)
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	DMember(bool)                                      bDeprecatedSpringOffsetMode                                 OFFSET(get<bool>, {0x140, 1, 1, 0})
	DMember(bool)                                      bReverseAsBrake                                             OFFSET(get<bool>, {0x140, 1, 1, 1})
	DMember(bool)                                      bUseRVOAvoidance                                            OFFSET(get<bool>, {0x140, 1, 1, 2})
	DMember(bool)                                      bRawHandbrakeInput                                          OFFSET(get<bool>, {0x140, 1, 1, 3})
	DMember(bool)                                      bRawGearUpInput                                             OFFSET(get<bool>, {0x140, 1, 1, 4})
	DMember(bool)                                      bRawGearDownInput                                           OFFSET(get<bool>, {0x140, 1, 1, 5})
	DMember(bool)                                      bWasAvoidanceUpdated                                        OFFSET(get<bool>, {0x144, 1, 1, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x148, 4, 0, 0})
	CMember(TArray<FWheelSetup>)                       WheelSetups                                                 OFFSET(get<T>, {0x150, 16, 0, 0})
	DMember(float)                                     DragCoefficient                                             OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     ChassisWidth                                                OFFSET(get<float>, {0x164, 4, 0, 0})
	DMember(float)                                     ChassisHeight                                               OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     DragArea                                                    OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(float)                                     EstimatedMaxEngineSpeed                                     OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     MaxEngineRPM                                                OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     DebugDragMagnitude                                          OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FVector)                                   InertiaTensorScale                                          OFFSET(getStruct<T>, {0x17C, 12, 0, 0})
	DMember(float)                                     MinNormalizedTireLoad                                       OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(float)                                     MinNormalizedTireLoadFiltered                               OFFSET(get<float>, {0x18C, 4, 0, 0})
	DMember(float)                                     MaxNormalizedTireLoad                                       OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(float)                                     MaxNormalizedTireLoadFiltered                               OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(float)                                     ThresholdLongitudinalSpeed                                  OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(int32_t)                                   LowForwardSpeedSubStepCount                                 OFFSET(get<int32_t>, {0x19C, 4, 0, 0})
	DMember(int32_t)                                   HighForwardSpeedSubStepCount                                OFFSET(get<int32_t>, {0x1A0, 4, 0, 0})
	CMember(TArray<class UVehicleWheel*>)              Wheels                                                      OFFSET(get<T>, {0x1A8, 16, 0, 0})
	DMember(float)                                     RVOAvoidanceRadius                                          OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     RVOAvoidanceHeight                                          OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     AvoidanceConsiderationRadius                                OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(float)                                     RVOSteeringStep                                             OFFSET(get<float>, {0x1DC, 4, 0, 0})
	DMember(float)                                     RVOThrottleStep                                             OFFSET(get<float>, {0x1E0, 4, 0, 0})
	DMember(int32_t)                                   AvoidanceUID                                                OFFSET(get<int32_t>, {0x1E4, 4, 0, 0})
	SMember(FNavAvoidanceMask)                         AvoidanceGroup                                              OFFSET(getStruct<T>, {0x1E8, 4, 0, 0})
	SMember(FNavAvoidanceMask)                         GroupsToAvoid                                               OFFSET(getStruct<T>, {0x1EC, 4, 0, 0})
	SMember(FNavAvoidanceMask)                         GroupsToIgnore                                              OFFSET(getStruct<T>, {0x1F0, 4, 0, 0})
	DMember(float)                                     AvoidanceWeight                                             OFFSET(get<float>, {0x1F4, 4, 0, 0})
	SMember(FVector)                                   PendingLaunchVelocity                                       OFFSET(getStruct<T>, {0x1F8, 12, 0, 0})
	SMember(FReplicatedVehicleState)                   ReplicatedState                                             OFFSET(getStruct<T>, {0x204, 20, 0, 0})
	DMember(float)                                     RawSteeringInput                                            OFFSET(get<float>, {0x21C, 4, 0, 0})
	DMember(float)                                     RawThrottleInput                                            OFFSET(get<float>, {0x220, 4, 0, 0})
	DMember(float)                                     RawBrakeInput                                               OFFSET(get<float>, {0x224, 4, 0, 0})
	DMember(float)                                     SteeringInput                                               OFFSET(get<float>, {0x228, 4, 0, 0})
	DMember(float)                                     ThrottleInput                                               OFFSET(get<float>, {0x22C, 4, 0, 0})
	DMember(float)                                     BrakeInput                                                  OFFSET(get<float>, {0x230, 4, 0, 0})
	DMember(float)                                     HandbrakeInput                                              OFFSET(get<float>, {0x234, 4, 0, 0})
	DMember(float)                                     IdleBrakeInput                                              OFFSET(get<float>, {0x238, 4, 0, 0})
	DMember(float)                                     StopThreshold                                               OFFSET(get<float>, {0x23C, 4, 0, 0})
	DMember(float)                                     WrongDirectionThreshold                                     OFFSET(get<float>, {0x240, 4, 0, 0})
	SMember(FVehicleInputRate)                         ThrottleInputRate                                           OFFSET(getStruct<T>, {0x244, 8, 0, 0})
	SMember(FVehicleInputRate)                         BrakeInputRate                                              OFFSET(getStruct<T>, {0x24C, 8, 0, 0})
	SMember(FVehicleInputRate)                         HandbrakeInputRate                                          OFFSET(getStruct<T>, {0x254, 8, 0, 0})
	SMember(FVehicleInputRate)                         SteeringInputRate                                           OFFSET(getStruct<T>, {0x25C, 8, 0, 0})
	CMember(class AController*)                        OverrideController                                          OFFSET(get<T>, {0x288, 8, 0, 0})


	/// Functions
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
	// void SetUseAutoGears(bool bUseAuto);                                                                                     // [0x140d080] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
	// void SetThrottleInput(float Throttle);                                                                                   // [0x140d000] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
	// void SetTargetGear(int32_t GearNum, bool bImmediate);                                                                    // [0x140cf30] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
	// void SetSteeringInput(float Steering);                                                                                   // [0x140ceb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
	// void SetHandbrakeInput(bool bNewHandbrake);                                                                              // [0x140cd50] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
	// void SetGroupsToIgnoreMask(FNavAvoidanceMask& GroupMask);                                                                // [0x140ccc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
	// void SetGroupsToIgnore(int32_t GroupFlags);                                                                              // [0x140cc30] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
	// void SetGroupsToAvoidMask(FNavAvoidanceMask& GroupMask);                                                                 // [0x140cba0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
	// void SetGroupsToAvoid(int32_t GroupFlags);                                                                               // [0x140cb10] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
	// void SetGearUp(bool bNewGearUp);                                                                                         // [0x140ca80] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
	// void SetGearDown(bool bNewGearDown);                                                                                     // [0x140c9f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
	// void SetBrakeInput(float Brake);                                                                                         // [0x140c7d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
	// void SetAvoidanceGroupMask(FNavAvoidanceMask& GroupMask);                                                                // [0x140c740] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
	// void SetAvoidanceGroup(int32_t GroupFlags);                                                                              // [0x140c6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
	// void SetAvoidanceEnabled(bool bEnable);                                                                                  // [0x140c620] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
	// void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear); // [0x140c430] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
	// bool GetUseAutoGears();                                                                                                  // [0x140c3a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
	// int32_t GetTargetGear();                                                                                                 // [0x140c370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
	// float GetForwardSpeed();                                                                                                 // [0x140c2b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
	// float GetEngineRotationSpeed();                                                                                          // [0x140c280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
	// float GetEngineMaxRotationSpeed();                                                                                       // [0x140c250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
	// int32_t GetCurrentGear();                                                                                                // [0x140c220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PhysXVehicles.SimpleWheeledVehicleMovementComponent
/// Size: 0x0000 (0x000290 - 0x000290)
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:


	/// Functions
	// Function /Script/PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
	// void SetSteerAngle(float SteerAngle, int32_t WheelIndex);                                                                // [0x140cde0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
	// void SetDriveTorque(float DriveTorque, int32_t WheelIndex);                                                              // [0x140c920] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
	// void SetBrakeTorque(float BrakeTorque, int32_t WheelIndex);                                                              // [0x140c850] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/PhysXVehicles.TireConfigMaterialFriction
/// Size: 0x0010 (0x000000 - 0x000010)
class FTireConfigMaterialFriction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UPhysicalMaterial*)                  PhysicalMaterial                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     FrictionScale                                               OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Class /Script/PhysXVehicles.TireConfig
/// Size: 0x0020 (0x000030 - 0x000050)
class UTireConfig : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     FrictionScale                                               OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(TArray<FTireConfigMaterialFriction>)       TireFrictionScales                                          OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/PhysXVehicles.VehicleAnimInstance
/// Size: 0x0798 (0x0002B8 - 0x000A50)
class UVehicleAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2640;

public:
	CMember(class UWheeledVehicleMovementComponent*)   WheeledVehicleMovementComponent                             OFFSET(get<T>, {0xA40, 8, 0, 0})


	/// Functions
	// Function /Script/PhysXVehicles.VehicleAnimInstance.GetVehicle
	// class AWheeledVehicle* GetVehicle();                                                                                     // [0x140c3d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PhysXVehicles.VehicleWheel
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UVehicleWheel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(class UStaticMesh*)                        CollisionMesh                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bDontCreateShape                                            OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bAutoAdjustCollisionSize                                    OFFSET(get<bool>, {0x31, 1, 0, 0})
	SMember(FVector)                                   Offset                                                      OFFSET(getStruct<T>, {0x34, 12, 0, 0})
	DMember(float)                                     ShapeRadius                                                 OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     ShapeWidth                                                  OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     DampingRate                                                 OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     SteerAngle                                                  OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bAffectedByHandbrake                                        OFFSET(get<bool>, {0x54, 1, 0, 0})
	CMember(class UTireType*)                          TireType                                                    OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UTireConfig*)                        TireConfig                                                  OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(float)                                     LatStiffMaxLoad                                             OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     LatStiffValue                                               OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     LongStiffValue                                              OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     SuspensionForceOffset                                       OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     SuspensionMaxRaise                                          OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     SuspensionMaxDrop                                           OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     SuspensionNaturalFrequency                                  OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     SuspensionDampingRatio                                      OFFSET(get<float>, {0x84, 4, 0, 0})
	CMember(TEnumAsByte<EWheelSweepType>)              SweepType                                                   OFFSET(get<T>, {0x88, 1, 0, 0})
	DMember(float)                                     MaxBrakeTorque                                              OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     MaxHandBrakeTorque                                          OFFSET(get<float>, {0x90, 4, 0, 0})
	CMember(class UWheeledVehicleMovementComponent*)   VehicleSim                                                  OFFSET(get<T>, {0x98, 8, 0, 0})
	DMember(int32_t)                                   WheelIndex                                                  OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(float)                                     DebugLongSlip                                               OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     DebugLatSlip                                                OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     DebugNormalizedTireLoad                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     DebugWheelTorque                                            OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     DebugLongForce                                              OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     DebugLatForce                                               OFFSET(get<float>, {0xBC, 4, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0xC0, 12, 0, 0})
	SMember(FVector)                                   OldLocation                                                 OFFSET(getStruct<T>, {0xCC, 12, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0xD8, 12, 0, 0})


	/// Functions
	// Function /Script/PhysXVehicles.VehicleWheel.IsInAir
	// bool IsInAir();                                                                                                          // [0x140c400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.VehicleWheel.GetSuspensionOffset
	// float GetSuspensionOffset();                                                                                             // [0x140c340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.VehicleWheel.GetSteerAngle
	// float GetSteerAngle();                                                                                                   // [0x140c310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.VehicleWheel.GetRotationAngle
	// float GetRotationAngle();                                                                                                // [0x140c2e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PhysXVehicles.WheeledVehicle
/// Size: 0x0010 (0x000280 - 0x000290)
class AWheeledVehicle : public APawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	CMember(class USkeletalMeshComponent*)             Mesh                                                        OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class UWheeledVehicleMovementComponent*)   VehicleMovement                                             OFFSET(get<T>, {0x288, 8, 0, 0})
};

/// Struct /Script/PhysXVehicles.VehicleEngineData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FVehicleEngineData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FRuntimeFloatCurve)                        TorqueCurve                                                 OFFSET(getStruct<T>, {0x0, 136, 0, 0})
	DMember(float)                                     MaxRPM                                                      OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     MOI                                                         OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     DampingRateFullThrottle                                     OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     DampingRateZeroThrottleClutchEngaged                        OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     DampingRateZeroThrottleClutchDisengaged                     OFFSET(get<float>, {0x98, 4, 0, 0})
};

/// Struct /Script/PhysXVehicles.VehicleDifferential4WData
/// Size: 0x001C (0x000000 - 0x00001C)
class FVehicleDifferential4WData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(TEnumAsByte<EVehicleDifferential4W>)       DifferentialType                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     FrontRearSplit                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FrontLeftRightSplit                                         OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     RearLeftRightSplit                                          OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     CentreBias                                                  OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     FrontBias                                                   OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     RearBias                                                    OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/PhysXVehicles.VehicleGearData
/// Size: 0x000C (0x000000 - 0x00000C)
class FVehicleGearData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DownRatio                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     UpRatio                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/PhysXVehicles.VehicleTransmissionData
/// Size: 0x0030 (0x000000 - 0x000030)
class FVehicleTransmissionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bUseGearAutoBox                                             OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     GearSwitchTime                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     GearAutoBoxLatency                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     FinalRatio                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(TArray<FVehicleGearData>)                  ForwardGears                                                OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(float)                                     ReverseGearRatio                                            OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     NeutralGearUpRatio                                          OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     ClutchStrength                                              OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Class /Script/PhysXVehicles.WheeledVehicleMovementComponent4W
/// Size: 0x0178 (0x000290 - 0x000408)
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
	SMember(FVehicleEngineData)                        EngineSetup                                                 OFFSET(getStruct<T>, {0x290, 160, 0, 0})
	SMember(FVehicleDifferential4WData)                DifferentialSetup                                           OFFSET(getStruct<T>, {0x330, 28, 0, 0})
	DMember(float)                                     AckermannAccuracy                                           OFFSET(get<float>, {0x34C, 4, 0, 0})
	SMember(FVehicleTransmissionData)                  TransmissionSetup                                           OFFSET(getStruct<T>, {0x350, 48, 0, 0})
	SMember(FRuntimeFloatCurve)                        SteeringCurve                                               OFFSET(getStruct<T>, {0x380, 136, 0, 0})
};

/// Struct /Script/PhysXVehicles.AnimNode_WheelHandler
/// Size: 0x0018 (0x0000C8 - 0x0000E0)
class FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Struct /Script/PhysXVehicles.VehicleAnimInstanceProxy
/// Size: 0x0010 (0x000760 - 0x000770)
class FVehicleAnimInstanceProxy : public FAnimInstanceProxy
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1904;

public:
};

/// Enum /Script/PhysXVehicles.EWheelSweepType
/// Size: 0x03
enum class EWheelSweepType : uint8_t
{
	SimpleAndComplex                                                                 = 0,
	Simple                                                                           = 1,
	Complex                                                                          = 2
};

/// Enum /Script/PhysXVehicles.EVehicleDifferential4W
/// Size: 0x06
enum class EVehicleDifferential4W : uint8_t
{
	EVehicleDifferential4W__LimitedSlip_4W                                           = 0,
	EVehicleDifferential4W__LimitedSlip_FrontDrive                                   = 1,
	EVehicleDifferential4W__LimitedSlip_RearDrive                                    = 2,
	EVehicleDifferential4W__Open_4W                                                  = 3,
	EVehicleDifferential4W__Open_FrontDrive                                          = 4,
	EVehicleDifferential4W__Open_RearDrive                                           = 5
};


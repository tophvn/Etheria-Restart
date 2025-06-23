
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
#include "PhysicsCore.h"

#pragma pack(push, 0x1)

class AWheeledVehicle;
class USimpleWheeledVehicleMovementComponent;
class UTireConfig;
class UVehicleAnimInstance;
class UVehicleWheel;
class UWheeledVehicleMovementComponent;
class UWheeledVehicleMovementComponent4W;

/// Enum /Script/PhysXVehicles.EWheelSweepType
/// Size: 0x01 (1 bytes)
enum class EWheelSweepType : uint8_t
{
	SimpleAndComplex                                                                 = 0,
	Simple                                                                           = 1,
	Complex                                                                          = 2
};

/// Enum /Script/PhysXVehicles.EVehicleDifferential4W
/// Size: 0x01 (1 bytes)
enum class EVehicleDifferential4W : uint8_t
{
	EVehicleDifferential4W__LimitedSlip_4W                                           = 0,
	EVehicleDifferential4W__LimitedSlip_FrontDrive                                   = 1,
	EVehicleDifferential4W__LimitedSlip_RearDrive                                    = 2,
	EVehicleDifferential4W__Open_4W                                                  = 3,
	EVehicleDifferential4W__Open_FrontDrive                                          = 4,
	EVehicleDifferential4W__Open_RearDrive                                           = 5
};

#pragma pack(pop)


static_assert(sizeof(FWheelSetup) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FReplicatedVehicleState) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FVehicleInputRate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UWheeledVehicleMovementComponent) == 0x0290); // 656 bytes (0x000138 - 0x000290)
static_assert(sizeof(USimpleWheeledVehicleMovementComponent) == 0x0290); // 656 bytes (0x000290 - 0x000290)
static_assert(sizeof(FTireConfigMaterialFriction) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UTireConfig) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UVehicleAnimInstance) == 0x0A50); // 2640 bytes (0x0002B8 - 0x000A50)
static_assert(sizeof(UVehicleWheel) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(AWheeledVehicle) == 0x0290); // 656 bytes (0x000280 - 0x000290)
static_assert(sizeof(FVehicleEngineData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FVehicleDifferential4WData) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FVehicleGearData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FVehicleTransmissionData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UWheeledVehicleMovementComponent4W) == 0x0408); // 1032 bytes (0x000290 - 0x000408)
static_assert(sizeof(FAnimNode_WheelHandler) == 0x00E0); // 224 bytes (0x0000C8 - 0x0000E0)
static_assert(sizeof(FVehicleAnimInstanceProxy) == 0x0770); // 1904 bytes (0x000760 - 0x000770)
static_assert(offsetof(FWheelSetup, WheelClass) == 0x0000);
static_assert(offsetof(FWheelSetup, BoneName) == 0x0008);
static_assert(offsetof(FWheelSetup, AdditionalOffset) == 0x0010);
static_assert(offsetof(UWheeledVehicleMovementComponent, WheelSetups) == 0x0150);
static_assert(offsetof(UWheeledVehicleMovementComponent, InertiaTensorScale) == 0x017C);
static_assert(offsetof(UWheeledVehicleMovementComponent, Wheels) == 0x01A8);
static_assert(offsetof(UWheeledVehicleMovementComponent, AvoidanceGroup) == 0x01E8);
static_assert(offsetof(UWheeledVehicleMovementComponent, GroupsToAvoid) == 0x01EC);
static_assert(offsetof(UWheeledVehicleMovementComponent, GroupsToIgnore) == 0x01F0);
static_assert(offsetof(UWheeledVehicleMovementComponent, PendingLaunchVelocity) == 0x01F8);
static_assert(offsetof(UWheeledVehicleMovementComponent, ReplicatedState) == 0x0204);
static_assert(offsetof(UWheeledVehicleMovementComponent, ThrottleInputRate) == 0x0244);
static_assert(offsetof(UWheeledVehicleMovementComponent, BrakeInputRate) == 0x024C);
static_assert(offsetof(UWheeledVehicleMovementComponent, HandbrakeInputRate) == 0x0254);
static_assert(offsetof(UWheeledVehicleMovementComponent, SteeringInputRate) == 0x025C);
static_assert(offsetof(UWheeledVehicleMovementComponent, OverrideController) == 0x0288);
static_assert(offsetof(FTireConfigMaterialFriction, PhysicalMaterial) == 0x0000);
static_assert(offsetof(UTireConfig, TireFrictionScales) == 0x0038);
static_assert(offsetof(UVehicleAnimInstance, WheeledVehicleMovementComponent) == 0x0A40);
static_assert(offsetof(UVehicleWheel, CollisionMesh) == 0x0028);
static_assert(offsetof(UVehicleWheel, Offset) == 0x0034);
static_assert(offsetof(UVehicleWheel, TireType) == 0x0058);
static_assert(offsetof(UVehicleWheel, TireConfig) == 0x0060);
static_assert(offsetof(UVehicleWheel, SweepType) == 0x0088);
static_assert(offsetof(UVehicleWheel, VehicleSim) == 0x0098);
static_assert(offsetof(UVehicleWheel, Location) == 0x00C0);
static_assert(offsetof(UVehicleWheel, OldLocation) == 0x00CC);
static_assert(offsetof(UVehicleWheel, Velocity) == 0x00D8);
static_assert(offsetof(AWheeledVehicle, Mesh) == 0x0280);
static_assert(offsetof(AWheeledVehicle, VehicleMovement) == 0x0288);
static_assert(offsetof(FVehicleEngineData, TorqueCurve) == 0x0000);
static_assert(offsetof(FVehicleDifferential4WData, DifferentialType) == 0x0000);
static_assert(offsetof(FVehicleTransmissionData, ForwardGears) == 0x0010);
static_assert(offsetof(UWheeledVehicleMovementComponent4W, EngineSetup) == 0x0290);
static_assert(offsetof(UWheeledVehicleMovementComponent4W, DifferentialSetup) == 0x0330);
static_assert(offsetof(UWheeledVehicleMovementComponent4W, TransmissionSetup) == 0x0350);
static_assert(offsetof(UWheeledVehicleMovementComponent4W, SteeringCurve) == 0x0380);

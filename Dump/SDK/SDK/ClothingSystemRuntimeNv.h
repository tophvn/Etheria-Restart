
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "ClothingSystemRuntimeCommon.h"
#include "ClothingSystemRuntimeInterface.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UClothConfigNv;
class UClothPhysicalMeshDataNv_Legacy;
class UClothingSimulationFactoryNv;
class UClothingSimulationInteractorNv;

/// Enum /Script/ClothingSystemRuntimeNv.EClothingWindMethodNv
/// Size: 0x01 (1 bytes)
enum class EClothingWindMethodNv : uint8_t
{
	EClothingWindMethodNv__Legacy                                                    = 0,
	EClothingWindMethodNv__Accurate                                                  = 1
};

#pragma pack(pop)


static_assert(sizeof(FClothConstraintSetupNv) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UClothConfigNv) == 0x0140); // 320 bytes (0x000028 - 0x000140)
static_assert(sizeof(UClothingSimulationFactoryNv) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothingSimulationInteractorNv) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UClothPhysicalMeshDataNv_Legacy) == 0x0120); // 288 bytes (0x0000E0 - 0x000120)
static_assert(offsetof(UClothConfigNv, ClothingWindMethod) == 0x0028);
static_assert(offsetof(UClothConfigNv, VerticalConstraint) == 0x002C);
static_assert(offsetof(UClothConfigNv, HorizontalConstraint) == 0x003C);
static_assert(offsetof(UClothConfigNv, BendConstraint) == 0x004C);
static_assert(offsetof(UClothConfigNv, ShearConstraint) == 0x005C);
static_assert(offsetof(UClothConfigNv, Damping) == 0x0078);
static_assert(offsetof(UClothConfigNv, LinearDrag) == 0x0090);
static_assert(offsetof(UClothConfigNv, AngularDrag) == 0x009C);
static_assert(offsetof(UClothConfigNv, LinearInertiaScale) == 0x00A8);
static_assert(offsetof(UClothConfigNv, AngularInertiaScale) == 0x00B4);
static_assert(offsetof(UClothConfigNv, CentrifugalInertiaScale) == 0x00C0);
static_assert(offsetof(UClothConfigNv, GravityOverride) == 0x00D8);
static_assert(offsetof(UClothConfigNv, WindMethod) == 0x00FC);
static_assert(offsetof(UClothConfigNv, VerticalConstraintConfig) == 0x0100);
static_assert(offsetof(UClothConfigNv, HorizontalConstraintConfig) == 0x0110);
static_assert(offsetof(UClothConfigNv, BendConstraintConfig) == 0x0120);
static_assert(offsetof(UClothConfigNv, ShearConstraintConfig) == 0x0130);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, MaxDistances) == 0x00E0);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, BackstopDistances) == 0x00F0);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, BackstopRadiuses) == 0x0100);
static_assert(offsetof(UClothPhysicalMeshDataNv_Legacy, AnimDriveMultipliers) == 0x0110);

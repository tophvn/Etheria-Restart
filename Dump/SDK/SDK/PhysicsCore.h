
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "Chaos.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"

#pragma pack(push, 0x1)

class UBodySetupCore;
class UChaosPhysicalMaterial;
class UPhysicalMaterial;
class UPhysicalMaterialPropertyBase;
class UPhysicsSettingsCore;

/// Enum /Script/PhysicsCore.EBodyCollisionResponse
/// Size: 0x01 (1 bytes)
enum class EBodyCollisionResponse : uint8_t
{
	EBodyCollisionResponse__BodyCollision_Enabled                                    = 0,
	EBodyCollisionResponse__BodyCollision_Disabled                                   = 1
};

/// Enum /Script/PhysicsCore.EPhysicsType
/// Size: 0x01 (1 bytes)
enum class EPhysicsType : uint8_t
{
	PhysType_Default                                                                 = 0,
	PhysType_Kinematic                                                               = 1,
	PhysType_Simulated                                                               = 2
};

/// Enum /Script/PhysicsCore.ECollisionTraceFlag
/// Size: 0x01 (1 bytes)
enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                                                                   = 0,
	CTF_UseSimpleAndComplex                                                          = 1,
	CTF_UseSimpleAsComplex                                                           = 2,
	CTF_UseComplexAsSimple                                                           = 3
};

/// Enum /Script/PhysicsCore.ELinearConstraintMotion
/// Size: 0x01 (1 bytes)
enum class ELinearConstraintMotion : uint8_t
{
	LCM_Free                                                                         = 0,
	LCM_Limited                                                                      = 1,
	LCM_Locked                                                                       = 2
};

/// Enum /Script/PhysicsCore.EConstraintFrame
/// Size: 0x01 (1 bytes)
enum class EConstraintFrame : uint8_t
{
	EConstraintFrame__Frame1                                                         = 0,
	EConstraintFrame__Frame2                                                         = 1
};

/// Enum /Script/PhysicsCore.EAngularConstraintMotion
/// Size: 0x01 (1 bytes)
enum class EAngularConstraintMotion : uint8_t
{
	ACM_Free                                                                         = 0,
	ACM_Limited                                                                      = 1,
	ACM_Locked                                                                       = 2
};

/// Enum /Script/PhysicsCore.ESleepFamily
/// Size: 0x01 (1 bytes)
enum class ESleepFamily : uint8_t
{
	ESleepFamily__Normal                                                             = 0,
	ESleepFamily__Sensitive                                                          = 1,
	ESleepFamily__Custom                                                             = 2
};

/// Enum /Script/PhysicsCore.ERadialImpulseFalloff
/// Size: 0x01 (1 bytes)
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                                                                     = 0,
	RIF_Linear                                                                       = 1
};

/// Enum /Script/PhysicsCore.EPhysicalSurface
/// Size: 0x01 (1 bytes)
enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default                                                              = 0,
	SurfaceType1                                                                     = 1,
	SurfaceType2                                                                     = 2,
	SurfaceType3                                                                     = 3,
	SurfaceType4                                                                     = 4,
	SurfaceType5                                                                     = 5,
	SurfaceType6                                                                     = 6,
	SurfaceType7                                                                     = 7,
	SurfaceType8                                                                     = 8,
	SurfaceType9                                                                     = 9,
	SurfaceType10                                                                    = 10,
	SurfaceType11                                                                    = 11,
	SurfaceType12                                                                    = 12,
	SurfaceType13                                                                    = 13,
	SurfaceType14                                                                    = 14,
	SurfaceType15                                                                    = 15,
	SurfaceType16                                                                    = 16,
	SurfaceType17                                                                    = 17,
	SurfaceType18                                                                    = 18,
	SurfaceType19                                                                    = 19,
	SurfaceType20                                                                    = 20,
	SurfaceType21                                                                    = 21,
	SurfaceType22                                                                    = 22,
	SurfaceType23                                                                    = 23,
	SurfaceType24                                                                    = 24,
	SurfaceType25                                                                    = 25,
	SurfaceType26                                                                    = 26,
	SurfaceType27                                                                    = 27,
	SurfaceType28                                                                    = 28,
	SurfaceType29                                                                    = 29,
	SurfaceType30                                                                    = 30,
	SurfaceType31                                                                    = 31,
	SurfaceType32                                                                    = 32,
	SurfaceType33                                                                    = 33,
	SurfaceType34                                                                    = 34,
	SurfaceType35                                                                    = 35,
	SurfaceType36                                                                    = 36,
	SurfaceType37                                                                    = 37,
	SurfaceType38                                                                    = 38,
	SurfaceType39                                                                    = 39,
	SurfaceType40                                                                    = 40,
	SurfaceType41                                                                    = 41,
	SurfaceType42                                                                    = 42,
	SurfaceType43                                                                    = 43,
	SurfaceType44                                                                    = 44,
	SurfaceType45                                                                    = 45,
	SurfaceType46                                                                    = 46,
	SurfaceType47                                                                    = 47,
	SurfaceType48                                                                    = 48,
	SurfaceType49                                                                    = 49,
	SurfaceType50                                                                    = 50,
	SurfaceType51                                                                    = 51,
	SurfaceType52                                                                    = 52,
	SurfaceType53                                                                    = 53,
	SurfaceType54                                                                    = 54,
	SurfaceType55                                                                    = 55,
	SurfaceType56                                                                    = 56,
	SurfaceType57                                                                    = 57,
	SurfaceType58                                                                    = 58,
	SurfaceType59                                                                    = 59,
	SurfaceType60                                                                    = 60,
	SurfaceType61                                                                    = 61,
	SurfaceType62                                                                    = 62,
	SurfaceType_Max                                                                  = 63
};

/// Enum /Script/PhysicsCore.EFrictionCombineMode
/// Size: 0x01 (1 bytes)
enum class EFrictionCombineMode : uint8_t
{
	EFrictionCombineMode__Average                                                    = 0,
	EFrictionCombineMode__Min                                                        = 1,
	EFrictionCombineMode__Multiply                                                   = 2,
	EFrictionCombineMode__Max                                                        = 3
};

#pragma pack(pop)


static_assert(sizeof(UBodySetupCore) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UChaosPhysicalMaterial) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UPhysicalMaterial) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UPhysicalMaterialPropertyBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPhysicsSettingsCore) == 0x00E0); // 224 bytes (0x000038 - 0x0000E0)
static_assert(sizeof(FBodyInstanceCore) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UBodySetupCore, BoneName) == 0x0028);
static_assert(offsetof(UBodySetupCore, PhysicsType) == 0x0030);
static_assert(offsetof(UBodySetupCore, CollisionTraceFlag) == 0x0031);
static_assert(offsetof(UBodySetupCore, CollisionReponse) == 0x0032);
static_assert(offsetof(UPhysicalMaterial, FrictionCombineMode) == 0x0030);
static_assert(offsetof(UPhysicalMaterial, RestitutionCombineMode) == 0x0038);
static_assert(offsetof(UPhysicalMaterial, PhysicalMaterialProperty) == 0x0058);
static_assert(offsetof(UPhysicalMaterial, SurfaceType) == 0x0060);
static_assert(offsetof(UPhysicsSettingsCore, FrictionCombineMode) == 0x005C);
static_assert(offsetof(UPhysicsSettingsCore, RestitutionCombineMode) == 0x005D);
static_assert(offsetof(UPhysicsSettingsCore, DefaultShapeComplexity) == 0x0075);
static_assert(offsetof(UPhysicsSettingsCore, SolverOptions) == 0x0078);

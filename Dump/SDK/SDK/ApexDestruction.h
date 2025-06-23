
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class ADestructibleActor;
class UDestructibleComponent;
class UDestructibleFractureSettings;
class UDestructibleMesh;

/// Enum /Script/ApexDestruction.EImpactDamageOverride
/// Size: 0x01 (1 bytes)
enum class EImpactDamageOverride : uint8_t
{
	IDO_None                                                                         = 0,
	IDO_On                                                                           = 1,
	IDO_Off                                                                          = 2
};

#pragma pack(pop)


static_assert(sizeof(ADestructibleActor) == 0x0238); // 568 bytes (0x000220 - 0x000238)
static_assert(sizeof(UDestructibleComponent) == 0x07A0); // 1952 bytes (0x0006C0 - 0x0007A0)
static_assert(sizeof(FFractureMaterial) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FDestructibleChunkParameters) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UDestructibleFractureSettings) == 0x00B8); // 184 bytes (0x000028 - 0x0000B8)
static_assert(sizeof(FDestructibleDamageParameters) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FDestructibleDebrisParameters) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FDestructibleAdvancedParameters) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FDestructibleSpecialHierarchyDepths) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FDestructibleDepthParameters) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FDestructibleParametersFlag) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FDestructibleParameters) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(UDestructibleMesh) == 0x0448); // 1096 bytes (0x0003A8 - 0x000448)
static_assert(offsetof(ADestructibleActor, DestructibleComponent) == 0x0220);
static_assert(offsetof(UDestructibleComponent, FractureEffects) == 0x06C8);
static_assert(offsetof(FFractureMaterial, UVScale) == 0x0000);
static_assert(offsetof(FFractureMaterial, UVOffset) == 0x0008);
static_assert(offsetof(FFractureMaterial, Tangent) == 0x0010);
static_assert(offsetof(UDestructibleFractureSettings, FractureMaterialDesc) == 0x002C);
static_assert(offsetof(UDestructibleFractureSettings, VoronoiSites) == 0x0058);
static_assert(offsetof(UDestructibleFractureSettings, Materials) == 0x0070);
static_assert(offsetof(UDestructibleFractureSettings, ChunkParameters) == 0x0080);
static_assert(offsetof(FDestructibleDebrisParameters, ValidBounds) == 0x0010);
static_assert(offsetof(FDestructibleDepthParameters, ImpactDamageOverride) == 0x0000);
static_assert(offsetof(FDestructibleParameters, DamageParameters) == 0x0000);
static_assert(offsetof(FDestructibleParameters, DebrisParameters) == 0x001C);
static_assert(offsetof(FDestructibleParameters, AdvancedParameters) == 0x0048);
static_assert(offsetof(FDestructibleParameters, SpecialHierarchyDepths) == 0x0058);
static_assert(offsetof(FDestructibleParameters, DepthParameters) == 0x0070);
static_assert(offsetof(FDestructibleParameters, Flags) == 0x0080);
static_assert(offsetof(UDestructibleMesh, DefaultDestructibleParameters) == 0x03A8);
static_assert(offsetof(UDestructibleMesh, FractureEffects) == 0x0430);

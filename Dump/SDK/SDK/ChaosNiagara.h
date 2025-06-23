
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "Niagara.h"
#include "NiagaraCore.h"

#pragma pack(push, 0x1)

class UNiagaraDataInterfaceChaosDestruction;
class UNiagaraDataInterfaceFieldSystem;

/// Enum /Script/ChaosNiagara.ELocationZToSpawnEnum
/// Size: 0x01 (1 bytes)
enum class ELocationZToSpawnEnum : uint8_t
{
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_None                        = 0,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Min                         = 1,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Max                         = 2,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_MinMax                      = 3,
	ELocationZToSpawnEnum__ChaosNiagara_Max                                          = 4
};

/// Enum /Script/ChaosNiagara.ELocationYToSpawnEnum
/// Size: 0x01 (1 bytes)
enum class ELocationYToSpawnEnum : uint8_t
{
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_None                        = 0,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Min                         = 1,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Max                         = 2,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_MinMax                      = 3,
	ELocationYToSpawnEnum__ChaosNiagara_Max                                          = 4
};

/// Enum /Script/ChaosNiagara.ELocationXToSpawnEnum
/// Size: 0x01 (1 bytes)
enum class ELocationXToSpawnEnum : uint8_t
{
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_None                        = 0,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Min                         = 1,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Max                         = 2,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_MinMax                      = 3,
	ELocationXToSpawnEnum__ChaosNiagara_Max                                          = 4
};

/// Enum /Script/ChaosNiagara.ELocationFilteringModeEnum
/// Size: 0x01 (1 bytes)
enum class ELocationFilteringModeEnum : uint8_t
{
	ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Inclusive         = 0,
	ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Exclusive         = 1,
	ELocationFilteringModeEnum__ChaosNiagara_Max                                     = 2
};

/// Enum /Script/ChaosNiagara.EDataSourceTypeEnum
/// Size: 0x01 (1 bytes)
enum class EDataSourceTypeEnum : uint8_t
{
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Collision                       = 0,
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Breaking                        = 1,
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Trailing                        = 2,
	EDataSourceTypeEnum__ChaosNiagara_Max                                            = 3
};

/// Enum /Script/ChaosNiagara.EDebugTypeEnum
/// Size: 0x01 (1 bytes)
enum class EDebugTypeEnum : uint8_t
{
	EDebugTypeEnum__ChaosNiagara_DebugType_NoDebug                                   = 0,
	EDebugTypeEnum__ChaosNiagara_DebugType_ColorBySolver                             = 1,
	EDebugTypeEnum__ChaosNiagara_DebugType_ColorByParticleIndex                      = 2,
	EDebugTypeEnum__ChaosNiagara_Max                                                 = 3
};

/// Enum /Script/ChaosNiagara.ERandomVelocityGenerationTypeEnum
/// Size: 0x01 (1 bytes)
enum class ERandomVelocityGenerationTypeEnum : uint8_t
{
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_Max                              = 3
};

/// Enum /Script/ChaosNiagara.EDataSortTypeEnum
/// Size: 0x01 (1 bytes)
enum class EDataSortTypeEnum : uint8_t
{
	EDataSortTypeEnum__ChaosNiagara_DataSortType_NoSorting                           = 0,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_RandomShuffle                       = 1,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMaxToMin                  = 2,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMinToMax                  = 3,
	EDataSortTypeEnum__ChaosNiagara_Max                                              = 4
};

#pragma pack(pop)


static_assert(sizeof(UNiagaraDataInterfaceChaosDestruction) == 0x0238); // 568 bytes (0x000038 - 0x000238)
static_assert(sizeof(UNiagaraDataInterfaceFieldSystem) == 0x0090); // 144 bytes (0x000038 - 0x000090)
static_assert(sizeof(FChaosDestructionEvent) == 0x0044); // 68 bytes (0x000000 - 0x000044)
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DataSourceType) == 0x0088);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpawnMultiplierMinMax) == 0x0098);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ImpulseToSpawnMinMax) == 0x00A4);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpeedToSpawnMinMax) == 0x00AC);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, MassToSpawnMinMax) == 0x00B4);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ExtentMinToSpawnMinMax) == 0x00BC);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ExtentMaxToSpawnMinMax) == 0x00C4);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VolumeToSpawnMinMax) == 0x00CC);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SolverTimeToSpawnMinMax) == 0x00D4);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationFilteringMode) == 0x00E0);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationXToSpawn) == 0x00E1);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationXToSpawnMinMax) == 0x00E4);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationYToSpawn) == 0x00EC);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationYToSpawnMinMax) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationZToSpawn) == 0x00F8);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationZToSpawnMinMax) == 0x00FC);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DataSortingType) == 0x0104);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeMin) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeMax) == 0x0114);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeCellSize) == 0x0120);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomPositionMagnitudeMinMax) == 0x018C);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomVelocityGenerationType) == 0x0198);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomVelocityMagnitudeMinMax) == 0x019C);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VelocityOffsetMin) == 0x01A8);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VelocityOffsetMax) == 0x01B4);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, FinalVelocityMagnitudeMinMax) == 0x01C0);
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DebugType) == 0x01CC);
static_assert(offsetof(UNiagaraDataInterfaceFieldSystem, BlueprintSource) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceFieldSystem, SourceActor) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceFieldSystem, FieldDimensions) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceFieldSystem, MinBounds) == 0x0054);
static_assert(offsetof(UNiagaraDataInterfaceFieldSystem, MaxBounds) == 0x0060);
static_assert(offsetof(FChaosDestructionEvent, Position) == 0x0000);
static_assert(offsetof(FChaosDestructionEvent, Normal) == 0x000C);
static_assert(offsetof(FChaosDestructionEvent, Velocity) == 0x0018);
static_assert(offsetof(FChaosDestructionEvent, AngularVelocity) == 0x0024);

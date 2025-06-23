
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara
/// dependency: NiagaraCore

/// Class /Script/ChaosNiagara.NiagaraDataInterfaceChaosDestruction
/// Size: 0x0200 (0x000038 - 0x000238)
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	CMember(TSet<AChaosSolverActor*>)                  ChaosSolverActorSet                                         OFFSET(get<T>, {0x38, 80, 0, 0})
	CMember(EDataSourceTypeEnum)                       DataSourceType                                              OFFSET(get<T>, {0x88, 1, 0, 0})
	DMember(int32_t)                                   DataProcessFrequency                                        OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	DMember(int32_t)                                   MaxNumberOfDataEntriesToSpawn                               OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(bool)                                      DoSpawn                                                     OFFSET(get<bool>, {0x94, 1, 0, 0})
	SMember(FVector2D)                                 SpawnMultiplierMinMax                                       OFFSET(getStruct<T>, {0x98, 8, 0, 0})
	DMember(float)                                     SpawnChance                                                 OFFSET(get<float>, {0xA0, 4, 0, 0})
	SMember(FVector2D)                                 ImpulseToSpawnMinMax                                        OFFSET(getStruct<T>, {0xA4, 8, 0, 0})
	SMember(FVector2D)                                 SpeedToSpawnMinMax                                          OFFSET(getStruct<T>, {0xAC, 8, 0, 0})
	SMember(FVector2D)                                 MassToSpawnMinMax                                           OFFSET(getStruct<T>, {0xB4, 8, 0, 0})
	SMember(FVector2D)                                 ExtentMinToSpawnMinMax                                      OFFSET(getStruct<T>, {0xBC, 8, 0, 0})
	SMember(FVector2D)                                 ExtentMaxToSpawnMinMax                                      OFFSET(getStruct<T>, {0xC4, 8, 0, 0})
	SMember(FVector2D)                                 VolumeToSpawnMinMax                                         OFFSET(getStruct<T>, {0xCC, 8, 0, 0})
	SMember(FVector2D)                                 SolverTimeToSpawnMinMax                                     OFFSET(getStruct<T>, {0xD4, 8, 0, 0})
	DMember(int32_t)                                   SurfaceTypeToSpawn                                          OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
	CMember(ELocationFilteringModeEnum)                LocationFilteringMode                                       OFFSET(get<T>, {0xE0, 1, 0, 0})
	CMember(ELocationXToSpawnEnum)                     LocationXToSpawn                                            OFFSET(get<T>, {0xE1, 1, 0, 0})
	SMember(FVector2D)                                 LocationXToSpawnMinMax                                      OFFSET(getStruct<T>, {0xE4, 8, 0, 0})
	CMember(ELocationYToSpawnEnum)                     LocationYToSpawn                                            OFFSET(get<T>, {0xEC, 1, 0, 0})
	SMember(FVector2D)                                 LocationYToSpawnMinMax                                      OFFSET(getStruct<T>, {0xF0, 8, 0, 0})
	CMember(ELocationZToSpawnEnum)                     LocationZToSpawn                                            OFFSET(get<T>, {0xF8, 1, 0, 0})
	SMember(FVector2D)                                 LocationZToSpawnMinMax                                      OFFSET(getStruct<T>, {0xFC, 8, 0, 0})
	CMember(EDataSortTypeEnum)                         DataSortingType                                             OFFSET(get<T>, {0x104, 1, 0, 0})
	DMember(bool)                                      bGetExternalCollisionData                                   OFFSET(get<bool>, {0x105, 1, 0, 0})
	DMember(bool)                                      DoSpatialHash                                               OFFSET(get<bool>, {0x106, 1, 0, 0})
	SMember(FVector)                                   SpatialHashVolumeMin                                        OFFSET(getStruct<T>, {0x108, 12, 0, 0})
	SMember(FVector)                                   SpatialHashVolumeMax                                        OFFSET(getStruct<T>, {0x114, 12, 0, 0})
	SMember(FVector)                                   SpatialHashVolumeCellSize                                   OFFSET(getStruct<T>, {0x120, 12, 0, 0})
	DMember(int32_t)                                   MaxDataPerCell                                              OFFSET(get<int32_t>, {0x12C, 4, 0, 0})
	DMember(bool)                                      bApplyMaterialsFilter                                       OFFSET(get<bool>, {0x130, 1, 0, 0})
	CMember(TSet<UPhysicalMaterial*>)                  ChaosBreakingMaterialSet                                    OFFSET(get<T>, {0x138, 80, 0, 0})
	DMember(bool)                                      bGetExternalBreakingData                                    OFFSET(get<bool>, {0x188, 1, 0, 0})
	DMember(bool)                                      bGetExternalTrailingData                                    OFFSET(get<bool>, {0x189, 1, 0, 0})
	SMember(FVector2D)                                 RandomPositionMagnitudeMinMax                               OFFSET(getStruct<T>, {0x18C, 8, 0, 0})
	DMember(float)                                     InheritedVelocityMultiplier                                 OFFSET(get<float>, {0x194, 4, 0, 0})
	CMember(ERandomVelocityGenerationTypeEnum)         RandomVelocityGenerationType                                OFFSET(get<T>, {0x198, 1, 0, 0})
	SMember(FVector2D)                                 RandomVelocityMagnitudeMinMax                               OFFSET(getStruct<T>, {0x19C, 8, 0, 0})
	DMember(float)                                     SpreadAngleMax                                              OFFSET(get<float>, {0x1A4, 4, 0, 0})
	SMember(FVector)                                   VelocityOffsetMin                                           OFFSET(getStruct<T>, {0x1A8, 12, 0, 0})
	SMember(FVector)                                   VelocityOffsetMax                                           OFFSET(getStruct<T>, {0x1B4, 12, 0, 0})
	SMember(FVector2D)                                 FinalVelocityMagnitudeMinMax                                OFFSET(getStruct<T>, {0x1C0, 8, 0, 0})
	DMember(float)                                     MaxLatency                                                  OFFSET(get<float>, {0x1C8, 4, 0, 0})
	CMember(EDebugTypeEnum)                            DebugType                                                   OFFSET(get<T>, {0x1CC, 1, 0, 0})
	DMember(int32_t)                                   LastSpawnedPointID                                          OFFSET(get<int32_t>, {0x1D0, 4, 0, 0})
	DMember(float)                                     LastSpawnTime                                               OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     SolverTime                                                  OFFSET(get<float>, {0x1E8, 4, 0, 0})
	DMember(float)                                     TimeStampOfLastProcessedData                                OFFSET(get<float>, {0x1EC, 4, 0, 0})
};

/// Class /Script/ChaosNiagara.NiagaraDataInterfaceFieldSystem
/// Size: 0x0058 (0x000038 - 0x000090)
class UNiagaraDataInterfaceFieldSystem : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(class UBlueprint*)                         BlueprintSource                                             OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class AActor*)                             SourceActor                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FIntVector)                                FieldDimensions                                             OFFSET(getStruct<T>, {0x48, 12, 0, 0})
	SMember(FVector)                                   MinBounds                                                   OFFSET(getStruct<T>, {0x54, 12, 0, 0})
	SMember(FVector)                                   MaxBounds                                                   OFFSET(getStruct<T>, {0x60, 12, 0, 0})
};

/// Struct /Script/ChaosNiagara.ChaosDestructionEvent
/// Size: 0x0044 (0x000000 - 0x000044)
class FChaosDestructionEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 68;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	DMember(float)                                     ExtentMin                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     ExtentMax                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   ParticleID                                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   Type                                                        OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Enum /Script/ChaosNiagara.ELocationZToSpawnEnum
/// Size: 0x05
enum class ELocationZToSpawnEnum : uint8_t
{
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_None                        = 0,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Min                         = 1,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Max                         = 2,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_MinMax                      = 3,
	ELocationZToSpawnEnum__ChaosNiagara_Max                                          = 4
};

/// Enum /Script/ChaosNiagara.ELocationYToSpawnEnum
/// Size: 0x05
enum class ELocationYToSpawnEnum : uint8_t
{
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_None                        = 0,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Min                         = 1,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Max                         = 2,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_MinMax                      = 3,
	ELocationYToSpawnEnum__ChaosNiagara_Max                                          = 4
};

/// Enum /Script/ChaosNiagara.ELocationXToSpawnEnum
/// Size: 0x05
enum class ELocationXToSpawnEnum : uint8_t
{
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_None                        = 0,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Min                         = 1,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Max                         = 2,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_MinMax                      = 3,
	ELocationXToSpawnEnum__ChaosNiagara_Max                                          = 4
};

/// Enum /Script/ChaosNiagara.ELocationFilteringModeEnum
/// Size: 0x03
enum class ELocationFilteringModeEnum : uint8_t
{
	ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Inclusive         = 0,
	ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Exclusive         = 1,
	ELocationFilteringModeEnum__ChaosNiagara_Max                                     = 2
};

/// Enum /Script/ChaosNiagara.EDataSourceTypeEnum
/// Size: 0x04
enum class EDataSourceTypeEnum : uint8_t
{
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Collision                       = 0,
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Breaking                        = 1,
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Trailing                        = 2,
	EDataSourceTypeEnum__ChaosNiagara_Max                                            = 3
};

/// Enum /Script/ChaosNiagara.EDebugTypeEnum
/// Size: 0x04
enum class EDebugTypeEnum : uint8_t
{
	EDebugTypeEnum__ChaosNiagara_DebugType_NoDebug                                   = 0,
	EDebugTypeEnum__ChaosNiagara_DebugType_ColorBySolver                             = 1,
	EDebugTypeEnum__ChaosNiagara_DebugType_ColorByParticleIndex                      = 2,
	EDebugTypeEnum__ChaosNiagara_Max                                                 = 3
};

/// Enum /Script/ChaosNiagara.ERandomVelocityGenerationTypeEnum
/// Size: 0x04
enum class ERandomVelocityGenerationTypeEnum : uint8_t
{
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_Max                              = 3
};

/// Enum /Script/ChaosNiagara.EDataSortTypeEnum
/// Size: 0x05
enum class EDataSortTypeEnum : uint8_t
{
	EDataSortTypeEnum__ChaosNiagara_DataSortType_NoSorting                           = 0,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_RandomShuffle                       = 1,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMaxToMin                  = 2,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMinToMax                  = 3,
	EDataSortTypeEnum__ChaosNiagara_Max                                              = 4
};


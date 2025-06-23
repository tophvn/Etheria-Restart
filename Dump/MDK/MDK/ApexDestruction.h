
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ApexDestruction.DestructibleActor
/// Size: 0x0018 (0x000220 - 0x000238)
class ADestructibleActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	CMember(class UDestructibleComponent*)             DestructibleComponent                                       OFFSET(get<T>, {0x220, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorFracture                                             OFFSET(getStruct<T>, {0x228, 16, 0, 0})
};

/// Class /Script/ApexDestruction.DestructibleComponent
/// Size: 0x00E0 (0x0006C0 - 0x0007A0)
class UDestructibleComponent : public USkinnedMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
	DMember(bool)                                      bFractureEffectOverride                                     OFFSET(get<bool>, {0x6C0, 1, 1, 0})
	CMember(TArray<FFractureEffect>)                   FractureEffects                                             OFFSET(get<T>, {0x6C8, 16, 0, 0})
	DMember(bool)                                      bEnableHardSleeping                                         OFFSET(get<bool>, {0x6D8, 1, 0, 0})
	DMember(float)                                     LargeChunkThreshold                                         OFFSET(get<float>, {0x6DC, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnComponentFracture                                         OFFSET(getStruct<T>, {0x6F0, 16, 0, 0})


	/// Functions
	// Function /Script/ApexDestruction.DestructibleComponent.SetDestructibleMesh
	// void SetDestructibleMesh(class UDestructibleMesh* NewMesh);                                                              // [0x9c9c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ApexDestruction.DestructibleComponent.GetDestructibleMesh
	// class UDestructibleMesh* GetDestructibleMesh();                                                                          // [0x9c9c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/ApexDestruction.DestructibleComponent.ApplyRadiusDamage
	// void ApplyRadiusDamage(float BaseDamage, FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage); // [0x9c9a50] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ApexDestruction.DestructibleComponent.ApplyDamage
	// void ApplyDamage(float DamageAmount, FVector& HitLocation, FVector& ImpulseDir, float ImpulseStrength);                  // [0x9c98d0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/ApexDestruction.FractureMaterial
/// Size: 0x0024 (0x000000 - 0x000024)
class FFractureMaterial : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FVector2D)                                 UVScale                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector2D)                                 UVOffset                                                    OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   Tangent                                                     OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	DMember(float)                                     UAngle                                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   InteriorElementIndex                                        OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/ApexDestruction.DestructibleChunkParameters
/// Size: 0x0004 (0x000000 - 0x000004)
class FDestructibleChunkParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bIsSupportChunk                                             OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bDoNotFracture                                              OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bDoNotDamage                                                OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bDoNotCrumble                                               OFFSET(get<bool>, {0x3, 1, 0, 0})
};

/// Class /Script/ApexDestruction.DestructibleFractureSettings
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UDestructibleFractureSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(int32_t)                                   CellSiteCount                                               OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FFractureMaterial)                         FractureMaterialDesc                                        OFFSET(getStruct<T>, {0x2C, 36, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	CMember(TArray<FVector>)                           VoronoiSites                                                OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(int32_t)                                   OriginalSubmeshCount                                        OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         Materials                                                   OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FDestructibleChunkParameters>)      ChunkParameters                                             OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ApexDestruction.DestructibleDamageParameters
/// Size: 0x001C (0x000000 - 0x00001C)
class FDestructibleDamageParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     DamageThreshold                                             OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DamageSpread                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bEnableImpactDamage                                         OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     ImpactDamage                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   DefaultImpactDamageDepth                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bCustomImpactResistance                                     OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(float)                                     ImpactResistance                                            OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/ApexDestruction.DestructibleDebrisParameters
/// Size: 0x002C (0x000000 - 0x00002C)
class FDestructibleDebrisParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(float)                                     DebrisLifetimeMin                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DebrisLifetimeMax                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DebrisMaxSeparationMin                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DebrisMaxSeparationMax                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FBox)                                      ValidBounds                                                 OFFSET(getStruct<T>, {0x10, 28, 0, 0})
};

/// Struct /Script/ApexDestruction.DestructibleAdvancedParameters
/// Size: 0x0010 (0x000000 - 0x000010)
class FDestructibleAdvancedParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     DamageCap                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ImpactVelocityThreshold                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxChunkSpeed                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     FractureImpulseScale                                        OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ApexDestruction.DestructibleSpecialHierarchyDepths
/// Size: 0x0014 (0x000000 - 0x000014)
class FDestructibleSpecialHierarchyDepths : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   SupportDepth                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MinimumFractureDepth                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bEnableDebris                                               OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   DebrisDepth                                                 OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   EssentialDepth                                              OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/ApexDestruction.DestructibleDepthParameters
/// Size: 0x0001 (0x000000 - 0x000001)
class FDestructibleDepthParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(TEnumAsByte<EImpactDamageOverride>)        ImpactDamageOverride                                        OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/ApexDestruction.DestructibleParametersFlag
/// Size: 0x0004 (0x000000 - 0x000004)
class FDestructibleParametersFlag : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bAccumulateDamage                                           OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bAssetDefinedSupport                                        OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bWorldSupport                                               OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(bool)                                      bDebrisTimeout                                              OFFSET(get<bool>, {0x0, 1, 1, 3})
	DMember(bool)                                      bDebrisMaxSeparation                                        OFFSET(get<bool>, {0x0, 1, 1, 4})
	DMember(bool)                                      bCrumbleSmallestChunks                                      OFFSET(get<bool>, {0x0, 1, 1, 5})
	DMember(bool)                                      bAccurateRaycasts                                           OFFSET(get<bool>, {0x0, 1, 1, 6})
	DMember(bool)                                      bUseValidBounds                                             OFFSET(get<bool>, {0x0, 1, 1, 7})
	DMember(bool)                                      bFormExtendedStructures                                     OFFSET(get<bool>, {0x1, 1, 1, 0})
};

/// Struct /Script/ApexDestruction.DestructibleParameters
/// Size: 0x0088 (0x000000 - 0x000088)
class FDestructibleParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FDestructibleDamageParameters)             DamageParameters                                            OFFSET(getStruct<T>, {0x0, 28, 0, 0})
	SMember(FDestructibleDebrisParameters)             DebrisParameters                                            OFFSET(getStruct<T>, {0x1C, 44, 0, 0})
	SMember(FDestructibleAdvancedParameters)           AdvancedParameters                                          OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FDestructibleSpecialHierarchyDepths)       SpecialHierarchyDepths                                      OFFSET(getStruct<T>, {0x58, 20, 0, 0})
	CMember(TArray<FDestructibleDepthParameters>)      DepthParameters                                             OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FDestructibleParametersFlag)               Flags                                                       OFFSET(getStruct<T>, {0x80, 4, 0, 0})
};

/// Class /Script/ApexDestruction.DestructibleMesh
/// Size: 0x00A0 (0x0003A8 - 0x000448)
class UDestructibleMesh : public USkeletalMesh
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FDestructibleParameters)                   DefaultDestructibleParameters                               OFFSET(getStruct<T>, {0x3A8, 136, 0, 0})
	CMember(TArray<FFractureEffect>)                   FractureEffects                                             OFFSET(get<T>, {0x430, 16, 0, 0})
};

/// Enum /Script/ApexDestruction.EImpactDamageOverride
/// Size: 0x03
enum class EImpactDamageOverride : uint8_t
{
	IDO_None                                                                         = 0,
	IDO_On                                                                           = 1,
	IDO_Off                                                                          = 2
};


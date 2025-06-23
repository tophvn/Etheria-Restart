
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Foliage.FoliageInstancedStaticMeshComponent
/// Size: 0x0030 (0x000690 - 0x0006C0)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1728;

public:
	SMember(FMulticastInlineDelegate)                  OnInstanceTakePointDamage                                   OFFSET(getStruct<T>, {0x690, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInstanceTakeRadialDamage                                  OFFSET(getStruct<T>, {0x6A0, 16, 0, 0})
	SMember(FGuid)                                     GenerationGuid                                              OFFSET(getStruct<T>, {0x6B0, 16, 0, 0})
};

/// Class /Script/Foliage.FoliageStatistics
/// Size: 0x0000 (0x000028 - 0x000028)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingSphereCount
	// int32_t FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, FVector CenterPosition, float Radius); // [0x2738cd0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingBoxCount
	// int32_t FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, FBox Box);          // [0x2738b90] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/Foliage.FoliageVertexColorChannelMask
/// Size: 0x000C (0x000000 - 0x00000C)
class FFoliageVertexColorChannelMask : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      UseMask                                                     OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(float)                                     MaskThreshold                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      InvertMask                                                  OFFSET(get<bool>, {0x8, 1, 1, 0})
};

/// Class /Script/Foliage.FoliageType
/// Size: 0x0380 (0x000028 - 0x0003A8)
class UFoliageType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	SMember(FGuid)                                     UpdateGuid                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(float)                                     Density                                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     DensityAdjustmentFactor                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bSingleInstanceModeOverrideRadius                           OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(float)                                     SingleInstanceModeRadius                                    OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(EFoliageScaling)                           Scaling                                                     OFFSET(get<T>, {0x4C, 1, 0, 0})
	SMember(FFloatInterval)                            ScaleX                                                      OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleY                                                      OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleZ                                                      OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	SMember(FFoliageVertexColorChannelMask)            VertexColorMaskByChannel                                    OFFSET(getStruct<T>, {0x68, 48, 0, 0})
	CMember(TEnumAsByte<FoliageVertexColorMask>)       VertexColorMask                                             OFFSET(get<T>, {0x98, 1, 0, 0})
	DMember(float)                                     VertexColorMaskThreshold                                    OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(bool)                                      VertexColorMaskInvert                                       OFFSET(get<bool>, {0xA0, 1, 1, 0})
	SMember(FFloatInterval)                            ZOffset                                                     OFFSET(getStruct<T>, {0xA4, 8, 0, 0})
	DMember(bool)                                      AlignToNormal                                               OFFSET(get<bool>, {0xAC, 1, 1, 0})
	DMember(float)                                     AlignMaxAngle                                               OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      RandomYaw                                                   OFFSET(get<bool>, {0xB4, 1, 1, 0})
	DMember(float)                                     RandomPitchAngle                                            OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FFloatInterval)                            GroundSlopeAngle                                            OFFSET(getStruct<T>, {0xBC, 8, 0, 0})
	SMember(FFloatInterval)                            Height                                                      OFFSET(getStruct<T>, {0xC4, 8, 0, 0})
	CMember(TArray<FName>)                             LandscapeLayers                                             OFFSET(get<T>, {0xD0, 16, 0, 0})
	DMember(float)                                     MinimumLayerWeight                                          OFFSET(get<float>, {0xE0, 4, 0, 0})
	CMember(TArray<FName>)                             ExclusionLandscapeLayers                                    OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(float)                                     MinimumExclusionLayerWeight                                 OFFSET(get<float>, {0xF8, 4, 0, 0})
	SMember(FName)                                     LandscapeLayer                                              OFFSET(getStruct<T>, {0xFC, 8, 0, 0})
	DMember(bool)                                      CollisionWithWorld                                          OFFSET(get<bool>, {0x104, 1, 1, 0})
	SMember(FVector)                                   CollisionScale                                              OFFSET(getStruct<T>, {0x108, 12, 0, 0})
	SMember(FBoxSphereBounds)                          MeshBounds                                                  OFFSET(getStruct<T>, {0x114, 28, 0, 0})
	SMember(FVector)                                   LowBoundOriginRadius                                        OFFSET(getStruct<T>, {0x130, 12, 0, 0})
	CMember(TEnumAsByte<EComponentMobility>)           Mobility                                                    OFFSET(get<T>, {0x13C, 1, 0, 0})
	SMember(FInt32Interval)                            CullDistance                                                OFFSET(getStruct<T>, {0x140, 8, 0, 0})
	DMember(bool)                                      bEnableStaticLighting                                       OFFSET(get<bool>, {0x148, 1, 1, 0})
	DMember(bool)                                      CastShadow                                                  OFFSET(get<bool>, {0x148, 1, 1, 1})
	DMember(bool)                                      bAffectDynamicIndirectLighting                              OFFSET(get<bool>, {0x148, 1, 1, 2})
	DMember(bool)                                      bAffectDistanceFieldLighting                                OFFSET(get<bool>, {0x148, 1, 1, 3})
	DMember(bool)                                      bCastDynamicShadow                                          OFFSET(get<bool>, {0x148, 1, 1, 4})
	DMember(bool)                                      bCastStaticShadow                                           OFFSET(get<bool>, {0x148, 1, 1, 5})
	DMember(bool)                                      bCastShadowAsTwoSided                                       OFFSET(get<bool>, {0x148, 1, 1, 6})
	DMember(bool)                                      bReceivesDecals                                             OFFSET(get<bool>, {0x148, 1, 1, 7})
	DMember(bool)                                      bOverrideLightMapRes                                        OFFSET(get<bool>, {0x149, 1, 1, 0})
	DMember(int32_t)                                   OverriddenLightMapRes                                       OFFSET(get<int32_t>, {0x14C, 4, 0, 0})
	CMember(ELightmapType)                             LightmapType                                                OFFSET(get<T>, {0x150, 1, 0, 0})
	DMember(bool)                                      bUseAsOccluder                                              OFFSET(get<bool>, {0x154, 1, 1, 0})
	SMember(FBodyInstance)                             BodyInstance                                                OFFSET(getStruct<T>, {0x158, 344, 0, 0})
	CMember(TEnumAsByte<EHasCustomNavigableGeometry>)  CustomNavigableGeometry                                     OFFSET(get<T>, {0x2B0, 1, 0, 0})
	SMember(FLightingChannels)                         LightingChannels                                            OFFSET(getStruct<T>, {0x2B1, 1, 0, 0})
	DMember(bool)                                      bRenderCustomDepth                                          OFFSET(get<bool>, {0x2B4, 1, 1, 0})
	CMember(ERendererStencilMask)                      CustomDepthStencilWriteMask                                 OFFSET(get<T>, {0x2B8, 1, 0, 0})
	DMember(int32_t)                                   CustomDepthStencilValue                                     OFFSET(get<int32_t>, {0x2BC, 4, 0, 0})
	DMember(int32_t)                                   TranslucencySortPriority                                    OFFSET(get<int32_t>, {0x2C0, 4, 0, 0})
	DMember(float)                                     CollisionRadius                                             OFFSET(get<float>, {0x2C4, 4, 0, 0})
	DMember(float)                                     ShadeRadius                                                 OFFSET(get<float>, {0x2C8, 4, 0, 0})
	DMember(int32_t)                                   NumSteps                                                    OFFSET(get<int32_t>, {0x2CC, 4, 0, 0})
	DMember(float)                                     InitialSeedDensity                                          OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(float)                                     AverageSpreadDistance                                       OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(float)                                     SpreadVariance                                              OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(int32_t)                                   SeedsPerStep                                                OFFSET(get<int32_t>, {0x2DC, 4, 0, 0})
	DMember(int32_t)                                   DistributionSeed                                            OFFSET(get<int32_t>, {0x2E0, 4, 0, 0})
	DMember(float)                                     MaxInitialSeedOffset                                        OFFSET(get<float>, {0x2E4, 4, 0, 0})
	DMember(bool)                                      bCanGrowInShade                                             OFFSET(get<bool>, {0x2E8, 1, 0, 0})
	DMember(bool)                                      bSpawnsInShade                                              OFFSET(get<bool>, {0x2E9, 1, 0, 0})
	DMember(float)                                     MaxInitialAge                                               OFFSET(get<float>, {0x2EC, 4, 0, 0})
	DMember(float)                                     MaxAge                                                      OFFSET(get<float>, {0x2F0, 4, 0, 0})
	DMember(float)                                     OverlapPriority                                             OFFSET(get<float>, {0x2F4, 4, 0, 0})
	SMember(FFloatInterval)                            ProceduralScale                                             OFFSET(getStruct<T>, {0x2F8, 8, 0, 0})
	SMember(FRuntimeFloatCurve)                        ScaleCurve                                                  OFFSET(getStruct<T>, {0x300, 136, 0, 0})
	DMember(int32_t)                                   ChangeCount                                                 OFFSET(get<int32_t>, {0x388, 4, 0, 0})
	DMember(bool)                                      ReapplyDensity                                              OFFSET(get<bool>, {0x38C, 1, 1, 0})
	DMember(bool)                                      ReapplyRadius                                               OFFSET(get<bool>, {0x38C, 1, 1, 1})
	DMember(bool)                                      ReapplyAlignToNormal                                        OFFSET(get<bool>, {0x38C, 1, 1, 2})
	DMember(bool)                                      ReapplyRandomYaw                                            OFFSET(get<bool>, {0x38C, 1, 1, 3})
	DMember(bool)                                      ReapplyScaling                                              OFFSET(get<bool>, {0x38C, 1, 1, 4})
	DMember(bool)                                      ReapplyScaleX                                               OFFSET(get<bool>, {0x38C, 1, 1, 5})
	DMember(bool)                                      ReapplyScaleY                                               OFFSET(get<bool>, {0x38C, 1, 1, 6})
	DMember(bool)                                      ReapplyScaleZ                                               OFFSET(get<bool>, {0x38C, 1, 1, 7})
	DMember(bool)                                      ReapplyRandomPitchAngle                                     OFFSET(get<bool>, {0x38D, 1, 1, 0})
	DMember(bool)                                      ReapplyGroundSlope                                          OFFSET(get<bool>, {0x38D, 1, 1, 1})
	DMember(bool)                                      ReapplyHeight                                               OFFSET(get<bool>, {0x38D, 1, 1, 2})
	DMember(bool)                                      ReapplyLandscapeLayers                                      OFFSET(get<bool>, {0x38D, 1, 1, 3})
	DMember(bool)                                      ReapplyZOffset                                              OFFSET(get<bool>, {0x38D, 1, 1, 4})
	DMember(bool)                                      ReapplyCollisionWithWorld                                   OFFSET(get<bool>, {0x38D, 1, 1, 5})
	DMember(bool)                                      ReapplyVertexColorMask                                      OFFSET(get<bool>, {0x38D, 1, 1, 6})
	DMember(bool)                                      bEnableDensityScaling                                       OFFSET(get<bool>, {0x38D, 1, 1, 7})
	DMember(bool)                                      bEnableDiscardOnLoad                                        OFFSET(get<bool>, {0x38E, 1, 1, 0})
	CMember(TArray<class URuntimeVirtualTexture*>)     RuntimeVirtualTextures                                      OFFSET(get<T>, {0x390, 16, 0, 0})
	DMember(int32_t)                                   VirtualTextureCullMips                                      OFFSET(get<int32_t>, {0x3A0, 4, 0, 0})
	CMember(ERuntimeVirtualTextureMainPassType)        VirtualTextureRenderPassType                                OFFSET(get<T>, {0x3A4, 1, 0, 0})
};

/// Class /Script/Foliage.FoliageType_Actor
/// Size: 0x0010 (0x0003A8 - 0x0003B8)
class UFoliageType_Actor : public UFoliageType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
	CMember(class UClass*)                             ActorClass                                                  OFFSET(get<T>, {0x3A8, 8, 0, 0})
	DMember(bool)                                      bShouldAttachToBaseComponent                                OFFSET(get<bool>, {0x3B0, 1, 0, 0})
};

/// Class /Script/Foliage.FoliageType_InstancedStaticMesh
/// Size: 0x0020 (0x0003A8 - 0x0003C8)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	CMember(class UStaticMesh*)                        Mesh                                                        OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         OverrideMaterials                                           OFFSET(get<T>, {0x3B0, 16, 0, 0})
	CMember(class UClass*)                             ComponentClass                                              OFFSET(get<T>, {0x3C0, 8, 0, 0})
};

/// Class /Script/Foliage.InstancedFoliageActor
/// Size: 0x0050 (0x000220 - 0x000270)
class AInstancedFoliageActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
};

/// Class /Script/Foliage.InteractiveFoliageActor
/// Size: 0x0060 (0x000230 - 0x000290)
class AInteractiveFoliageActor : public AStaticMeshActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	CMember(class UCapsuleComponent*)                  CapsuleComponent                                            OFFSET(get<T>, {0x230, 8, 0, 0})
	SMember(FVector)                                   TouchingActorEntryPosition                                  OFFSET(getStruct<T>, {0x238, 12, 0, 0})
	SMember(FVector)                                   FoliageVelocity                                             OFFSET(getStruct<T>, {0x244, 12, 0, 0})
	SMember(FVector)                                   FoliageForce                                                OFFSET(getStruct<T>, {0x250, 12, 0, 0})
	SMember(FVector)                                   FoliagePosition                                             OFFSET(getStruct<T>, {0x25C, 12, 0, 0})
	DMember(float)                                     FoliageDamageImpulseScale                                   OFFSET(get<float>, {0x268, 4, 0, 0})
	DMember(float)                                     FoliageTouchImpulseScale                                    OFFSET(get<float>, {0x26C, 4, 0, 0})
	DMember(float)                                     FoliageStiffness                                            OFFSET(get<float>, {0x270, 4, 0, 0})
	DMember(float)                                     FoliageStiffnessQuadratic                                   OFFSET(get<float>, {0x274, 4, 0, 0})
	DMember(float)                                     FoliageDamping                                              OFFSET(get<float>, {0x278, 4, 0, 0})
	DMember(float)                                     MaxDamageImpulse                                            OFFSET(get<float>, {0x27C, 4, 0, 0})
	DMember(float)                                     MaxTouchImpulse                                             OFFSET(get<float>, {0x280, 4, 0, 0})
	DMember(float)                                     MaxForce                                                    OFFSET(get<float>, {0x284, 4, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x288, 4, 0, 0})


	/// Functions
	// Function /Script/Foliage.InteractiveFoliageActor.CapsuleTouched
	// void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo); // [0x2738960] Final|Native|Protected|HasOutParms 
};

/// Class /Script/Foliage.InteractiveFoliageComponent
/// Size: 0x0008 (0x0004F8 - 0x000500)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1280;

public:
};

/// Class /Script/Foliage.ProceduralFoliageBlockingVolume
/// Size: 0x0008 (0x000258 - 0x000260)
class AProceduralFoliageBlockingVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	CMember(class AProceduralFoliageVolume*)           ProceduralFoliageVolume                                     OFFSET(get<T>, {0x258, 8, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageComponent
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UProceduralFoliageComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(class UProceduralFoliageSpawner*)          FoliageSpawner                                              OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(float)                                     TileOverlap                                                 OFFSET(get<float>, {0xB8, 4, 0, 0})
	CMember(class AVolume*)                            SpawningVolume                                              OFFSET(get<T>, {0xC0, 8, 0, 0})
	SMember(FGuid)                                     ProceduralGuid                                              OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
};

/// Struct /Script/Foliage.FoliageTypeObject
/// Size: 0x0020 (0x000000 - 0x000020)
class FFoliageTypeObject : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UObject*)                            FoliageTypeObject                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UFoliageType*)                       TypeInstance                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIsAsset                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(class UClass*)                             Type                                                        OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageSpawner
/// Size: 0x0040 (0x000028 - 0x000068)
class UProceduralFoliageSpawner : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     TileSize                                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   NumUniqueTiles                                              OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(float)                                     MinimumQuadTreeSize                                         OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(TArray<FFoliageTypeObject>)                FoliageTypes                                                OFFSET(get<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/Foliage.ProceduralFoliageSpawner.Simulate
	// void Simulate(int32_t NumSteps);                                                                                         // [0x2738e30] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Foliage.ProceduralFoliageInstance
/// Size: 0x0050 (0x000000 - 0x000050)
class FProceduralFoliageInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	DMember(float)                                     Age                                                         OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(class UFoliageType*)                       Type                                                        OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageTile
/// Size: 0x0130 (0x000028 - 0x000158)
class UProceduralFoliageTile : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(class UProceduralFoliageSpawner*)          FoliageSpawner                                              OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FProceduralFoliageInstance>)        InstancesArray                                              OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageVolume
/// Size: 0x0008 (0x000258 - 0x000260)
class AProceduralFoliageVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	CMember(class UProceduralFoliageComponent*)        ProceduralComponent                                         OFFSET(get<T>, {0x258, 8, 0, 0})
};

/// Enum /Script/Foliage.EFoliageScaling
/// Size: 0x05
enum class EFoliageScaling : uint8_t
{
	EFoliageScaling__Uniform                                                         = 0,
	EFoliageScaling__Free                                                            = 1,
	EFoliageScaling__LockXY                                                          = 2,
	EFoliageScaling__LockXZ                                                          = 3,
	EFoliageScaling__LockYZ                                                          = 4
};

/// Enum /Script/Foliage.EVertexColorMaskChannel
/// Size: 0x05
enum class EVertexColorMaskChannel : uint8_t
{
	EVertexColorMaskChannel__Red                                                     = 0,
	EVertexColorMaskChannel__Green                                                   = 1,
	EVertexColorMaskChannel__Blue                                                    = 2,
	EVertexColorMaskChannel__Alpha                                                   = 3,
	EVertexColorMaskChannel__MAX_None                                                = 4
};

/// Enum /Script/Foliage.FoliageVertexColorMask
/// Size: 0x05
enum class FoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled                                                  = 0,
	FOLIAGEVERTEXCOLORMASK_Red                                                       = 1,
	FOLIAGEVERTEXCOLORMASK_Green                                                     = 2,
	FOLIAGEVERTEXCOLORMASK_Blue                                                      = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha                                                     = 4
};

/// Enum /Script/Foliage.ESimulationQuery
/// Size: 0x04
enum class ESimulationQuery : uint8_t
{
	ESimulationQuery__None                                                           = 0,
	ESimulationQuery__CollisionOverlap                                               = 1,
	ESimulationQuery__ShadeOverlap                                                   = 2,
	ESimulationQuery__AnyOverlap                                                     = 3
};

/// Enum /Script/Foliage.ESimulationOverlap
/// Size: 0x03
enum class ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap                                             = 0,
	ESimulationOverlap__ShadeOverlap                                                 = 1,
	ESimulationOverlap__None                                                         = 2
};



/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: PhysicsCore

/// Class /Script/Landscape.ControlPointMeshActor
/// Size: 0x0008 (0x000220 - 0x000228)
class AControlPointMeshActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	CMember(class UControlPointMeshComponent*)         ControlPointMeshComponent                                   OFFSET(get<T>, {0x220, 8, 0, 0})
};

/// Class /Script/Landscape.ControlPointMeshComponent
/// Size: 0x0008 (0x0004F8 - 0x000500)
class UControlPointMeshComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1280;

public:
	DMember(float)                                     VirtualTextureMainPassMaxDrawDistance                       OFFSET(get<float>, {0x4F8, 4, 0, 0})
};

/// Struct /Script/Landscape.LandscapeProxyMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeProxyMaterialOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FPerPlatformInt)                           LODIndex                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Class /Script/Landscape.LandscapeProxy
/// Size: 0x0378 (0x000220 - 0x000598)
class ALandscapeProxy : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1432;

public:
	CMember(class ULandscapeSplinesComponent*)         SplineComponent                                             OFFSET(get<T>, {0x220, 8, 0, 0})
	SMember(FGuid)                                     LandscapeGuid                                               OFFSET(getStruct<T>, {0x228, 16, 0, 0})
	SMember(FIntPoint)                                 LandscapeSectionOffset                                      OFFSET(getStruct<T>, {0x238, 8, 0, 0})
	DMember(int32_t)                                   MaxLODLevel                                                 OFFSET(get<int32_t>, {0x240, 4, 0, 0})
	DMember(float)                                     LODDistanceFactor                                           OFFSET(get<float>, {0x244, 4, 0, 0})
	CMember(TEnumAsByte<ELandscapeLODFalloff>)         LODFalloff                                                  OFFSET(get<T>, {0x248, 1, 0, 0})
	DMember(float)                                     ComponentScreenSizeToUseSubSections                         OFFSET(get<float>, {0x24C, 4, 0, 0})
	DMember(float)                                     LOD0ScreenSize                                              OFFSET(get<float>, {0x250, 4, 0, 0})
	DMember(float)                                     LOD0DistributionSetting                                     OFFSET(get<float>, {0x254, 4, 0, 0})
	DMember(float)                                     LODDistributionSetting                                      OFFSET(get<float>, {0x258, 4, 0, 0})
	DMember(float)                                     TessellationComponentScreenSize                             OFFSET(get<float>, {0x25C, 4, 0, 0})
	DMember(bool)                                      UseTessellationComponentScreenSizeFalloff                   OFFSET(get<bool>, {0x260, 1, 0, 0})
	DMember(float)                                     TessellationComponentScreenSizeFalloff                      OFFSET(get<float>, {0x264, 4, 0, 0})
	DMember(int32_t)                                   OccluderGeometryLOD                                         OFFSET(get<int32_t>, {0x268, 4, 0, 0})
	DMember(int32_t)                                   StaticLightingLOD                                           OFFSET(get<int32_t>, {0x26C, 4, 0, 0})
	CMember(class UPhysicalMaterial*)                  DefaultPhysMaterial                                         OFFSET(get<T>, {0x270, 8, 0, 0})
	DMember(float)                                     StreamingDistanceMultiplier                                 OFFSET(get<float>, {0x278, 4, 0, 0})
	CMember(class UMaterialInterface*)                 LandscapeMaterial                                           OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class UMaterialInterface*)                 LandscapeHoleMaterial                                       OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(TArray<FLandscapeProxyMaterialOverride>)   LandscapeMaterialsOverride                                  OFFSET(get<T>, {0x2B0, 16, 0, 0})
	DMember(bool)                                      bMeshHoles                                                  OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	DMember(char)                                      MeshHolesMaxLod                                             OFFSET(get<char>, {0x2C1, 1, 0, 0})
	CMember(TArray<class URuntimeVirtualTexture*>)     RuntimeVirtualTextures                                      OFFSET(get<T>, {0x2C8, 16, 0, 0})
	DMember(int32_t)                                   VirtualTextureNumLods                                       OFFSET(get<int32_t>, {0x2D8, 4, 0, 0})
	DMember(int32_t)                                   VirtualTextureLodBias                                       OFFSET(get<int32_t>, {0x2DC, 4, 0, 0})
	CMember(ERuntimeVirtualTextureMainPassType)        VirtualTextureRenderPassType                                OFFSET(get<T>, {0x2E0, 1, 0, 0})
	DMember(float)                                     NegativeZBoundsExtension                                    OFFSET(get<float>, {0x2E4, 4, 0, 0})
	DMember(float)                                     PositiveZBoundsExtension                                    OFFSET(get<float>, {0x2E8, 4, 0, 0})
	CMember(TArray<class ULandscapeComponent*>)        LandscapeComponents                                         OFFSET(get<T>, {0x2F0, 16, 0, 0})
	CMember(TArray<class ULandscapeHeightfieldCollisionComponent*>) CollisionComponents                            OFFSET(get<T>, {0x300, 16, 0, 0})
	CMember(TArray<class UHierarchicalInstancedStaticMeshComponent*>) FoliageComponents                            OFFSET(get<T>, {0x310, 16, 0, 0})
	DMember(bool)                                      bHasLandscapeGrass                                          OFFSET(get<bool>, {0x384, 1, 0, 0})
	DMember(float)                                     StaticLightingResolution                                    OFFSET(get<float>, {0x388, 4, 0, 0})
	DMember(bool)                                      CastShadow                                                  OFFSET(get<bool>, {0x38C, 1, 1, 0})
	DMember(bool)                                      bCastDynamicShadow                                          OFFSET(get<bool>, {0x38C, 1, 1, 1})
	DMember(bool)                                      bCastStaticShadow                                           OFFSET(get<bool>, {0x38C, 1, 1, 2})
	DMember(bool)                                      bCastFarShadow                                              OFFSET(get<bool>, {0x390, 1, 1, 0})
	DMember(bool)                                      bCastHiddenShadow                                           OFFSET(get<bool>, {0x394, 1, 1, 0})
	DMember(bool)                                      bCastShadowAsTwoSided                                       OFFSET(get<bool>, {0x398, 1, 1, 0})
	DMember(bool)                                      bAffectDistanceFieldLighting                                OFFSET(get<bool>, {0x39C, 1, 1, 0})
	SMember(FLightingChannels)                         LightingChannels                                            OFFSET(getStruct<T>, {0x39D, 1, 0, 0})
	DMember(bool)                                      bUseMaterialPositionOffsetInStaticLighting                  OFFSET(get<bool>, {0x3A0, 1, 1, 0})
	DMember(bool)                                      bRenderCustomDepth                                          OFFSET(get<bool>, {0x3A0, 1, 1, 1})
	CMember(ERendererStencilMask)                      CustomDepthStencilWriteMask                                 OFFSET(get<T>, {0x3A4, 1, 0, 0})
	DMember(int32_t)                                   CustomDepthStencilValue                                     OFFSET(get<int32_t>, {0x3A8, 4, 0, 0})
	DMember(float)                                     LDMaxDrawDistance                                           OFFSET(get<float>, {0x3AC, 4, 0, 0})
	SMember(FLightmassPrimitiveSettings)               LightmassSettings                                           OFFSET(getStruct<T>, {0x3B0, 24, 0, 0})
	DMember(int32_t)                                   CollisionMipLevel                                           OFFSET(get<int32_t>, {0x3C8, 4, 0, 0})
	DMember(int32_t)                                   SimpleCollisionMipLevel                                     OFFSET(get<int32_t>, {0x3CC, 4, 0, 0})
	DMember(float)                                     CollisionThickness                                          OFFSET(get<float>, {0x3D0, 4, 0, 0})
	SMember(FBodyInstance)                             BodyInstance                                                OFFSET(getStruct<T>, {0x3D8, 344, 0, 0})
	DMember(bool)                                      bGenerateOverlapEvents                                      OFFSET(get<bool>, {0x530, 1, 1, 0})
	DMember(bool)                                      bBakeMaterialPositionOffsetIntoCollision                    OFFSET(get<bool>, {0x530, 1, 1, 1})
	DMember(int32_t)                                   ComponentSizeQuads                                          OFFSET(get<int32_t>, {0x534, 4, 0, 0})
	DMember(int32_t)                                   SubsectionSizeQuads                                         OFFSET(get<int32_t>, {0x538, 4, 0, 0})
	DMember(int32_t)                                   NumSubsections                                              OFFSET(get<int32_t>, {0x53C, 4, 0, 0})
	DMember(bool)                                      bUsedForNavigation                                          OFFSET(get<bool>, {0x540, 1, 1, 0})
	DMember(bool)                                      bFillCollisionUnderLandscapeForNavmesh                      OFFSET(get<bool>, {0x540, 1, 1, 1})
	DMember(bool)                                      bUseDynamicMaterialInstance                                 OFFSET(get<bool>, {0x544, 1, 0, 0})
	CMember(ENavDataGatheringMode)                     NavigationGeometryGatheringMode                             OFFSET(get<T>, {0x545, 1, 0, 0})
	DMember(bool)                                      bUseLandscapeForCullingInvisibleHLODVertices                OFFSET(get<bool>, {0x546, 1, 0, 0})
	DMember(bool)                                      bHasLayersContent                                           OFFSET(get<bool>, {0x547, 1, 0, 0})
	CMember(TMap<class UTexture2D*, class ULandscapeWeightmapUsage*>) WeightmapUsageMap                            OFFSET(get<T>, {0x548, 80, 0, 0})


	/// Functions
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	// void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);                                  // [0x27724d0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	// void SetLandscapeMaterialTextureParameterValue(FName ParameterName, class UTexture* Value);                              // [0x2772400] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	// void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);                                         // [0x2772330] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
	// bool LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // [0x2772210] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	// void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);                                         // [0xa1e2e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorApplySpline
	// void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, FName EditLayerName); // [0x2771e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
	// void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);                        // [0x2771df0] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
	// void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);                    // [0x2771d60] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
	// void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);                                     // [0x15e7eb0] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeLODDistanceFactor
	// void ChangeLODDistanceFactor(float InLODDistanceFactor);                                                                 // [0x2771cd0] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	// void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);                             // [0x2771c40] Native|Public|BlueprintCallable 
};

/// Class /Script/Landscape.Landscape
/// Size: 0x0000 (0x000598 - 0x000598)
class ALandscape : public ALandscapeProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1432;

public:
};

/// Class /Script/Landscape.LandscapeBlueprintBrushBase
/// Size: 0x0000 (0x000220 - 0x000220)
class ALandscapeBlueprintBrushBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:


	/// Functions
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
	// void RequestLandscapeUpdate();                                                                                           // [0x9a7970] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.Render
	// class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, FName& InWeightmapLayerName); // [0x27706c0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.Initialize
	// void Initialize(FTransform& InLandscapeTransform, FIntPoint& InLandscapeSize, FIntPoint& InLandscapeRenderTargetSize);   // [0x2770540] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
	// void GetBlueprintRenderDependencies(TArray<UObject*>& OutStreamableAssets);                                              // [0x198a600] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Landscape.LandscapeLODStreamingProxy
/// Size: 0x0008 (0x000060 - 0x000068)
class ULandscapeLODStreamingProxy : public UStreamableRenderAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/Landscape.LandscapeComponentMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeComponentMaterialOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FPerPlatformInt)                           LODIndex                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Landscape.WeightmapLayerAllocationInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FWeightmapLayerAllocationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class ULandscapeLayerInfoObject*)          LayerInfo                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(char)                                      WeightmapTextureIndex                                       OFFSET(get<char>, {0x8, 1, 0, 0})
	DMember(char)                                      WeightmapTextureChannel                                     OFFSET(get<char>, {0x9, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeComponent
/// Size: 0x0228 (0x000468 - 0x000690)
class ULandscapeComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	DMember(int32_t)                                   SectionBaseX                                                OFFSET(get<int32_t>, {0x468, 4, 0, 0})
	DMember(int32_t)                                   SectionBaseY                                                OFFSET(get<int32_t>, {0x46C, 4, 0, 0})
	DMember(int32_t)                                   ComponentSizeQuads                                          OFFSET(get<int32_t>, {0x470, 4, 0, 0})
	DMember(int32_t)                                   SubsectionSizeQuads                                         OFFSET(get<int32_t>, {0x474, 4, 0, 0})
	DMember(int32_t)                                   NumSubsections                                              OFFSET(get<int32_t>, {0x478, 4, 0, 0})
	CMember(class UMaterialInterface*)                 OverrideMaterial                                            OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UMaterialInterface*)                 OverrideHoleMaterial                                        OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(TArray<FLandscapeComponentMaterialOverride>) OverrideMaterials                                         OFFSET(get<T>, {0x490, 16, 0, 0})
	CMember(TArray<class UMaterialInstanceConstant*>)  MaterialInstances                                           OFFSET(get<T>, {0x4A0, 16, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   MaterialInstancesDynamic                                    OFFSET(get<T>, {0x4B0, 16, 0, 0})
	CMember(TArray<int8_t>)                            LODIndexToMaterialIndex                                     OFFSET(get<T>, {0x4C0, 16, 0, 0})
	CMember(TArray<int8_t>)                            MaterialIndexToDisabledTessellationMaterial                 OFFSET(get<T>, {0x4D0, 16, 0, 0})
	CMember(class UTexture2D*)                         XYOffsetmapTexture                                          OFFSET(get<T>, {0x4E0, 8, 0, 0})
	SMember(FVector4)                                  WeightmapScaleBias                                          OFFSET(getStruct<T>, {0x4F0, 16, 0, 0})
	DMember(float)                                     WeightmapSubsectionOffset                                   OFFSET(get<float>, {0x500, 4, 0, 0})
	SMember(FVector4)                                  HeightmapScaleBias                                          OFFSET(getStruct<T>, {0x510, 16, 0, 0})
	SMember(FBox)                                      CachedLocalBox                                              OFFSET(getStruct<T>, {0x520, 28, 0, 0})
	CMember(TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent*>) CollisionComponent                     OFFSET(get<T>, {0x53C, 28, 0, 0})
	CMember(class UTexture2D*)                         HeightmapTexture                                            OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(TArray<FWeightmapLayerAllocationInfo>)     WeightmapLayerAllocations                                   OFFSET(get<T>, {0x560, 16, 0, 0})
	CMember(TArray<class UTexture2D*>)                 WeightmapTextures                                           OFFSET(get<T>, {0x570, 16, 0, 0})
	CMember(class ULandscapeLODStreamingProxy*)        LODStreamingProxy                                           OFFSET(get<T>, {0x580, 8, 0, 0})
	SMember(FGuid)                                     MapBuildDataId                                              OFFSET(getStruct<T>, {0x588, 16, 0, 0})
	CMember(TArray<FGuid>)                             IrrelevantLights                                            OFFSET(get<T>, {0x598, 16, 0, 0})
	DMember(int32_t)                                   CollisionMipLevel                                           OFFSET(get<int32_t>, {0x5A8, 4, 0, 0})
	DMember(int32_t)                                   SimpleCollisionMipLevel                                     OFFSET(get<int32_t>, {0x5AC, 4, 0, 0})
	DMember(float)                                     NegativeZBoundsExtension                                    OFFSET(get<float>, {0x5B0, 4, 0, 0})
	DMember(float)                                     PositiveZBoundsExtension                                    OFFSET(get<float>, {0x5B4, 4, 0, 0})
	DMember(float)                                     StaticLightingResolution                                    OFFSET(get<float>, {0x5B8, 4, 0, 0})
	DMember(int32_t)                                   ForcedLOD                                                   OFFSET(get<int32_t>, {0x5BC, 4, 0, 0})
	DMember(int32_t)                                   LODBias                                                     OFFSET(get<int32_t>, {0x5C0, 4, 0, 0})
	SMember(FGuid)                                     StateId                                                     OFFSET(getStruct<T>, {0x5C4, 16, 0, 0})
	SMember(FGuid)                                     BakedTextureMaterialGuid                                    OFFSET(getStruct<T>, {0x5D4, 16, 0, 0})
	CMember(class UTexture2D*)                         GIBakedBaseColorTexture                                     OFFSET(get<T>, {0x5E8, 8, 0, 0})
	DMember(char)                                      MobileBlendableLayerMask                                    OFFSET(get<char>, {0x5F0, 1, 0, 0})
	CMember(class UMaterialInterface*)                 MobileMaterialInterface                                     OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         MobileMaterialInterfaces                                    OFFSET(get<T>, {0x600, 16, 0, 0})
	CMember(TArray<class UTexture2D*>)                 MobileWeightmapTextures                                     OFFSET(get<T>, {0x610, 16, 0, 0})


	/// Functions
	// Function /Script/Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	// class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);                                             // [0x2770470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	// float EditorGetPaintLayerWeightByNameAtLocation(FVector& InLocation, FName InPaintLayerName);                            // [0x2770390] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
	// float EditorGetPaintLayerWeightAtLocation(FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer);             // [0x27702b0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Landscape.LandscapeGizmoActor
/// Size: 0x0000 (0x000220 - 0x000220)
class ALandscapeGizmoActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
};

/// Class /Script/Landscape.LandscapeGizmoActiveActor
/// Size: 0x0050 (0x000220 - 0x000270)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
};

/// Class /Script/Landscape.LandscapeGizmoRenderComponent
/// Size: 0x0008 (0x000468 - 0x000470)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
};

/// Struct /Script/Landscape.GrassVariety
/// Size: 0x0058 (0x000000 - 0x000058)
class FGrassVariety : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UStaticMesh*)                        GrassMesh                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         OverrideMaterials                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FPerPlatformFloat)                         GrassDensity                                                OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	DMember(bool)                                      bUseGrid                                                    OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(float)                                     PlacementJitter                                             OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FPerPlatformInt)                           StartCullDistance                                           OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	SMember(FPerPlatformInt)                           EndCullDistance                                             OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MinLOD                                                      OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(EGrassScaling)                             Scaling                                                     OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FFloatInterval)                            ScaleX                                                      OFFSET(getStruct<T>, {0x34, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleY                                                      OFFSET(getStruct<T>, {0x3C, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleZ                                                      OFFSET(getStruct<T>, {0x44, 8, 0, 0})
	DMember(bool)                                      RandomRotation                                              OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(bool)                                      AlignToSurface                                              OFFSET(get<bool>, {0x4D, 1, 0, 0})
	DMember(bool)                                      bUseLandscapeLightmap                                       OFFSET(get<bool>, {0x4E, 1, 0, 0})
	SMember(FLightingChannels)                         LightingChannels                                            OFFSET(getStruct<T>, {0x4F, 1, 0, 0})
	DMember(bool)                                      bReceivesDecals                                             OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bCastDynamicShadow                                          OFFSET(get<bool>, {0x51, 1, 0, 0})
	DMember(bool)                                      bKeepInstanceBufferCPUCopy                                  OFFSET(get<bool>, {0x52, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeGrassType
/// Size: 0x0038 (0x000028 - 0x000060)
class ULandscapeGrassType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FGrassVariety>)                     GrassVarieties                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bEnableDensityScaling                                       OFFSET(get<bool>, {0x38, 1, 1, 0})
	CMember(class UStaticMesh*)                        GrassMesh                                                   OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(float)                                     GrassDensity                                                OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     PlacementJitter                                             OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   StartCullDistance                                           OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   EndCullDistance                                             OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(bool)                                      RandomRotation                                              OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      AlignToSurface                                              OFFSET(get<bool>, {0x59, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeHeightfieldCollisionComponent
/// Size: 0x00E8 (0x000468 - 0x000550)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	CMember(TArray<class ULandscapeLayerInfoObject*>)  ComponentLayerInfos                                         OFFSET(get<T>, {0x468, 16, 0, 0})
	DMember(int32_t)                                   SectionBaseX                                                OFFSET(get<int32_t>, {0x478, 4, 0, 0})
	DMember(int32_t)                                   SectionBaseY                                                OFFSET(get<int32_t>, {0x47C, 4, 0, 0})
	DMember(int32_t)                                   CollisionSizeQuads                                          OFFSET(get<int32_t>, {0x480, 4, 0, 0})
	DMember(float)                                     CollisionScale                                              OFFSET(get<float>, {0x484, 4, 0, 0})
	DMember(int32_t)                                   SimpleCollisionSizeQuads                                    OFFSET(get<int32_t>, {0x488, 4, 0, 0})
	CMember(TArray<char>)                              CollisionQuadFlags                                          OFFSET(get<T>, {0x490, 16, 0, 0})
	SMember(FGuid)                                     HeightfieldGuid                                             OFFSET(getStruct<T>, {0x4A0, 16, 0, 0})
	SMember(FBox)                                      CachedLocalBox                                              OFFSET(getStruct<T>, {0x4B0, 28, 0, 0})
	CMember(TLazyObjectPtr<class ULandscapeComponent*>) RenderComponent                                            OFFSET(get<T>, {0x4CC, 28, 0, 0})
	CMember(TArray<class UPhysicalMaterial*>)          CookedPhysicalMaterials                                     OFFSET(get<T>, {0x4F8, 16, 0, 0})


	/// Functions
	// Function /Script/Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
	// class ULandscapeComponent* GetRenderComponent();                                                                         // [0x2770510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Landscape.LandscapeInfo
/// Size: 0x01E8 (0x000028 - 0x000210)
class ULandscapeInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(TLazyObjectPtr<class ALandscape*>)         LandscapeActor                                              OFFSET(get<T>, {0x28, 28, 0, 0})
	SMember(FGuid)                                     LandscapeGuid                                               OFFSET(getStruct<T>, {0x44, 16, 0, 0})
	DMember(int32_t)                                   ComponentSizeQuads                                          OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   SubsectionSizeQuads                                         OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   ComponentNumSubsections                                     OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	SMember(FVector)                                   DrawScale                                                   OFFSET(getStruct<T>, {0x60, 12, 0, 0})
	CMember(TArray<class ALandscapeStreamingProxy*>)   Proxies                                                     OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeInfoMap
/// Size: 0x0058 (0x000028 - 0x000080)
class ULandscapeInfoMap : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/Landscape.LandscapeLayerInfoObject
/// Size: 0x0028 (0x000028 - 0x000050)
class ULandscapeLayerInfoObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     LayerName                                                   OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	CMember(class UPhysicalMaterial*)                  PhysMaterial                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(float)                                     Hardness                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FLinearColor)                              LayerUsageDebugColor                                        OFFSET(getStruct<T>, {0x3C, 16, 0, 0})
};

/// Struct /Script/Landscape.LandscapeMaterialTextureStreamingInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FLandscapeMaterialTextureStreamingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     TextureName                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     TexelFactor                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Class /Script/Landscape.LandscapeMaterialInstanceConstant
/// Size: 0x0018 (0x000380 - 0x000398)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(TArray<FLandscapeMaterialTextureStreamingInfo>) TextureStreamingInfo                                   OFFSET(get<T>, {0x380, 16, 0, 0})
	DMember(bool)                                      bIsLayerThumbnail                                           OFFSET(get<bool>, {0x390, 1, 1, 0})
	DMember(bool)                                      bDisableTessellation                                        OFFSET(get<bool>, {0x390, 1, 1, 1})
	DMember(bool)                                      bMobile                                                     OFFSET(get<bool>, {0x390, 1, 1, 2})
	DMember(bool)                                      bEditorToolUsage                                            OFFSET(get<bool>, {0x390, 1, 1, 3})
};

/// Class /Script/Landscape.LandscapeMeshCollisionComponent
/// Size: 0x0018 (0x000548 - 0x000560)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	SMember(FGuid)                                     MeshGuid                                                    OFFSET(getStruct<T>, {0x548, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeMeshProxyActor
/// Size: 0x0008 (0x000220 - 0x000228)
class ALandscapeMeshProxyActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	CMember(class ULandscapeMeshProxyComponent*)       LandscapeMeshProxyComponent                                 OFFSET(get<T>, {0x220, 8, 0, 0})
};

/// Class /Script/Landscape.LandscapeMeshProxyComponent
/// Size: 0x0028 (0x0004F8 - 0x000520)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	SMember(FGuid)                                     LandscapeGuid                                               OFFSET(getStruct<T>, {0x4F8, 16, 0, 0})
	CMember(TArray<FIntPoint>)                         ProxyComponentBases                                         OFFSET(get<T>, {0x508, 16, 0, 0})
	DMember(int8_t)                                    ProxyLOD                                                    OFFSET(get<int8_t>, {0x518, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class ULandscapeSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   MaxNumberOfLayers                                           OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplinesComponent
/// Size: 0x0038 (0x000468 - 0x0004A0)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	CMember(TArray<class ULandscapeSplineControlPoint*>) ControlPoints                                             OFFSET(get<T>, {0x468, 16, 0, 0})
	CMember(TArray<class ULandscapeSplineSegment*>)    Segments                                                    OFFSET(get<T>, {0x478, 16, 0, 0})
	CMember(TArray<class UMeshComponent*>)             CookedForeignMeshComponents                                 OFFSET(get<T>, {0x488, 16, 0, 0})


	/// Functions
	// Function /Script/Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	// TArray<USplineMeshComponent*> GetSplineMeshComponents();                                                                 // [0x27740c0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Landscape.LandscapeSplineConnection
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeSplineConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class ULandscapeSplineSegment*)            Segment                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      End                                                         OFFSET(get<bool>, {0x8, 1, 1, 0})
};

/// Struct /Script/Landscape.LandscapeSplineInterpPoint
/// Size: 0x0070 (0x000000 - 0x000070)
class FLandscapeSplineInterpPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   Center                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Left                                                        OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   Right                                                       OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector)                                   FalloffLeft                                                 OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	SMember(FVector)                                   FalloffRight                                                OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	SMember(FVector)                                   LayerLeft                                                   OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
	SMember(FVector)                                   LayerRight                                                  OFFSET(getStruct<T>, {0x48, 12, 0, 0})
	SMember(FVector)                                   LayerFalloffLeft                                            OFFSET(getStruct<T>, {0x54, 12, 0, 0})
	SMember(FVector)                                   LayerFalloffRight                                           OFFSET(getStruct<T>, {0x60, 12, 0, 0})
	DMember(float)                                     StartEndFalloff                                             OFFSET(get<float>, {0x6C, 4, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplineControlPoint
/// Size: 0x0080 (0x000028 - 0x0000A8)
class ULandscapeSplineControlPoint : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x34, 12, 0, 0})
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     LayerWidthRatio                                             OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     SideFalloff                                                 OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     LeftSideFalloffFactor                                       OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     RightSideFalloffFactor                                      OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     LeftSideLayerFalloffFactor                                  OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     RightSideLayerFalloffFactor                                 OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     EndFalloff                                                  OFFSET(get<float>, {0x5C, 4, 0, 0})
	CMember(TArray<FLandscapeSplineConnection>)        ConnectedSegments                                           OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FLandscapeSplineInterpPoint>)       Points                                                      OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x80, 28, 0, 0})
	CMember(class UControlPointMeshComponent*)         LocalMeshComponent                                          OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Struct /Script/Landscape.LandscapeSplineSegmentConnection
/// Size: 0x0018 (0x000000 - 0x000018)
class FLandscapeSplineSegmentConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class ULandscapeSplineControlPoint*)       ControlPoint                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     TangentLen                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0xC, 8, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplineSegment
/// Size: 0x0088 (0x000028 - 0x0000B0)
class ULandscapeSplineSegment : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FLandscapeSplineSegmentConnection)         Connections                                                 OFFSET(getStruct<T>, {0x28, 48, 0, 0})
	SMember(FInterpCurveVector)                        SplineInfo                                                  OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	CMember(TArray<FLandscapeSplineInterpPoint>)       Points                                                      OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x80, 28, 0, 0})
	CMember(TArray<class USplineMeshComponent*>)       LocalMeshComponents                                         OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeStreamingProxy
/// Size: 0x0020 (0x000598 - 0x0005B8)
class ALandscapeStreamingProxy : public ALandscapeProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1464;

public:
	CMember(TLazyObjectPtr<class ALandscape*>)         LandscapeActor                                              OFFSET(get<T>, {0x598, 28, 0, 0})
};

/// Class /Script/Landscape.LandscapeSubsystem
/// Size: 0x0018 (0x000030 - 0x000048)
class ULandscapeSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/Landscape.LandscapeWeightmapUsage
/// Size: 0x0030 (0x000028 - 0x000058)
class ULandscapeWeightmapUsage : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class ULandscapeComponent*)                ChannelUsage                                                OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FGuid)                                     LayerGuid                                                   OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/Landscape.GrassInput
/// Size: 0x0028 (0x000000 - 0x000028)
class FGrassInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(class ULandscapeGrassType*)                GrassType                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FExpressionInput)                          Input                                                       OFFSET(getStruct<T>, {0x10, 12, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeGrassOutput
/// Size: 0x0010 (0x000040 - 0x000050)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FGrassInput>)                       GrassTypes                                                  OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/Landscape.LayerBlendInput
/// Size: 0x0048 (0x000000 - 0x000048)
class FLayerBlendInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     LayerName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TEnumAsByte<ELandscapeLayerBlendType>)     BlendType                                                   OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FExpressionInput)                          LayerInput                                                  OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FExpressionInput)                          HeightInput                                                 OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(float)                                     PreviewWeight                                               OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FVector)                                   ConstLayerInput                                             OFFSET(getStruct<T>, {0x38, 12, 0, 0})
	DMember(float)                                     ConstHeightInput                                            OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerBlend
/// Size: 0x0020 (0x000040 - 0x000060)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FLayerBlendInput>)                  Layers                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FGuid)                                     ExpressionGUID                                              OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerCoords
/// Size: 0x0018 (0x000040 - 0x000058)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TEnumAsByte<ETerrainCoordMappingType>)     MappingType                                                 OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(TEnumAsByte<ELandscapeCustomizedCoordType>) CustomUVType                                               OFFSET(get<T>, {0x41, 1, 0, 0})
	DMember(float)                                     MappingScale                                                OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MappingRotation                                             OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     MappingPanU                                                 OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     MappingPanV                                                 OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSample
/// Size: 0x0020 (0x000040 - 0x000060)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	DMember(float)                                     PreviewWeight                                               OFFSET(get<float>, {0x48, 4, 0, 0})
	SMember(FGuid)                                     ExpressionGUID                                              OFFSET(getStruct<T>, {0x4C, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSwitch
/// Size: 0x0048 (0x000040 - 0x000088)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FExpressionInput)                          LayerUsed                                                   OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FExpressionInput)                          LayerNotUsed                                                OFFSET(getStruct<T>, {0x54, 12, 0, 0})
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(bool)                                      PreviewUsed                                                 OFFSET(get<bool>, {0x70, 1, 1, 0})
	SMember(FGuid)                                     ExpressionGUID                                              OFFSET(getStruct<T>, {0x74, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerWeight
/// Size: 0x0050 (0x000040 - 0x000090)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FExpressionInput)                          Base                                                        OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FExpressionInput)                          Layer                                                       OFFSET(getStruct<T>, {0x54, 12, 0, 0})
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(float)                                     PreviewWeight                                               OFFSET(get<float>, {0x70, 4, 0, 0})
	SMember(FVector)                                   ConstBase                                                   OFFSET(getStruct<T>, {0x74, 12, 0, 0})
	SMember(FGuid)                                     ExpressionGUID                                              OFFSET(getStruct<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/Landscape.PhysicalMaterialInput
/// Size: 0x0020 (0x000000 - 0x000020)
class FPhysicalMaterialInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UPhysicalMaterial*)                  PhysicalMaterial                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FExpressionInput)                          Input                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
/// Size: 0x0010 (0x000040 - 0x000050)
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FPhysicalMaterialInput>)            Inputs                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeVisibilityMask
/// Size: 0x0010 (0x000040 - 0x000050)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGuid)                                     ExpressionGUID                                              OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/Landscape.LandscapeLayerBrush
/// Size: 0x0001 (0x000000 - 0x000001)
class FLandscapeLayerBrush : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.LandscapeLayer
/// Size: 0x0088 (0x000000 - 0x000088)
class FLandscapeLayer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bLocked                                                     OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(float)                                     HeightmapAlpha                                              OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     WeightmapAlpha                                              OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(TEnumAsByte<ELandscapeBlendMode>)          BlendMode                                                   OFFSET(get<T>, {0x24, 1, 0, 0})
	CMember(TArray<FLandscapeLayerBrush>)              Brushes                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TMap<class ULandscapeLayerInfoObject*, bool>) WeightmapLayerAllocationBlend                            OFFSET(get<T>, {0x38, 80, 0, 0})
};

/// Struct /Script/Landscape.HeightmapData
/// Size: 0x0008 (0x000000 - 0x000008)
class FHeightmapData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UTexture2D*)                         Texture                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Landscape.WeightmapData
/// Size: 0x0030 (0x000000 - 0x000030)
class FWeightmapData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<class UTexture2D*>)                 Textures                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FWeightmapLayerAllocationInfo>)     LayerAllocations                                            OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<class ULandscapeWeightmapUsage*>)   TextureUsages                                               OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Landscape.LandscapeLayerComponentData
/// Size: 0x0038 (0x000000 - 0x000038)
class FLandscapeLayerComponentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FHeightmapData)                            HeightmapData                                               OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FWeightmapData)                            WeightmapData                                               OFFSET(getStruct<T>, {0x8, 48, 0, 0})
};

/// Struct /Script/Landscape.LandscapeEditToolRenderData
/// Size: 0x0038 (0x000000 - 0x000038)
class FLandscapeEditToolRenderData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UMaterialInterface*)                 ToolMaterial                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 GizmoMaterial                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   SelectedType                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   DebugChannelR                                               OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   DebugChannelG                                               OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   DebugChannelB                                               OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	CMember(class UTexture2D*)                         DataTexture                                                 OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class UTexture2D*)                         LayerContributionTexture                                    OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UTexture2D*)                         DirtyTexture                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/Landscape.GizmoSelectData
/// Size: 0x0050 (0x000000 - 0x000050)
class FGizmoSelectData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/Landscape.LandscapeInfoLayerSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeInfoLayerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class ULandscapeLayerInfoObject*)          LayerInfoObj                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     LayerName                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Landscape.LandscapeImportLayerInfo
/// Size: 0x0001 (0x000000 - 0x000001)
class FLandscapeImportLayerInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.LandscapeLayerStruct
/// Size: 0x0008 (0x000000 - 0x000008)
class FLandscapeLayerStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class ULandscapeLayerInfoObject*)          LayerInfoObj                                                OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Landscape.LandscapeEditorLayerSettings
/// Size: 0x0001 (0x000000 - 0x000001)
class FLandscapeEditorLayerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.ForeignWorldSplineData
/// Size: 0x0001 (0x000000 - 0x000001)
class FForeignWorldSplineData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.ForeignSplineSegmentData
/// Size: 0x0001 (0x000000 - 0x000001)
class FForeignSplineSegmentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.ForeignControlPointData
/// Size: 0x0001 (0x000000 - 0x000001)
class FForeignControlPointData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.LandscapeSplineMeshEntry
/// Size: 0x0038 (0x000000 - 0x000038)
class FLandscapeSplineMeshEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UStaticMesh*)                        Mesh                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         MaterialOverrides                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bCenterH                                                    OFFSET(get<bool>, {0x18, 1, 1, 0})
	SMember(FVector2D)                                 CenterAdjust                                                OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	DMember(bool)                                      bScaleToWidth                                               OFFSET(get<bool>, {0x24, 1, 1, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	CMember(TEnumAsByte<LandscapeSplineMeshOrientation>) Orientation                                               OFFSET(get<T>, {0x34, 1, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              ForwardAxis                                                 OFFSET(get<T>, {0x35, 1, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              UpAxis                                                      OFFSET(get<T>, {0x36, 1, 0, 0})
};

/// Enum /Script/Landscape.ELandscapeBlendMode
/// Size: 0x02
enum class ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend                                                               = 0,
	LSBM_AlphaBlend                                                                  = 1
};

/// Enum /Script/Landscape.ELandscapeSetupErrors
/// Size: 0x04
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                                                                         = 0,
	LSE_NoLandscapeInfo                                                              = 1,
	LSE_CollsionXY                                                                   = 2,
	LSE_NoLayerInfo                                                                  = 3
};

/// Enum /Script/Landscape.ELandscapeClearMode
/// Size: 0x03
enum class ELandscapeClearMode : uint8_t
{
	Clear_Weightmap                                                                  = 1,
	Clear_Heightmap                                                                  = 2,
	Clear_All                                                                        = 3
};

/// Enum /Script/Landscape.ELandscapeGizmoType
/// Size: 0x03
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                                                                         = 0,
	LGT_Height                                                                       = 1,
	LGT_Weight                                                                       = 2
};

/// Enum /Script/Landscape.EGrassScaling
/// Size: 0x03
enum class EGrassScaling : uint8_t
{
	EGrassScaling__Uniform                                                           = 0,
	EGrassScaling__Free                                                              = 1,
	EGrassScaling__LockXY                                                            = 2
};

/// Enum /Script/Landscape.ESplineModulationColorMask
/// Size: 0x04
enum class ESplineModulationColorMask : uint8_t
{
	ESplineModulationColorMask__Red                                                  = 0,
	ESplineModulationColorMask__Green                                                = 1,
	ESplineModulationColorMask__Blue                                                 = 2,
	ESplineModulationColorMask__Alpha                                                = 3
};

/// Enum /Script/Landscape.ELandscapeLODFalloff
/// Size: 0x02
enum class ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear                                                     = 0,
	ELandscapeLODFalloff__SquareRoot                                                 = 1
};

/// Enum /Script/Landscape.ELandscapeLayerDisplayMode
/// Size: 0x03
enum class ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default                                              = 0,
	ELandscapeLayerDisplayMode__Alphabetical                                         = 1,
	ELandscapeLayerDisplayMode__UserSpecific                                         = 2
};

/// Enum /Script/Landscape.ELandscapeLayerPaintingRestriction
/// Size: 0x04
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None                                         = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers                                 = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly                                 = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist                        = 3
};

/// Enum /Script/Landscape.ELandscapeImportAlphamapType
/// Size: 0x02
enum class ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive                                           = 0,
	ELandscapeImportAlphamapType__Layered                                            = 1
};

/// Enum /Script/Landscape.LandscapeSplineMeshOrientation
/// Size: 0x02
enum class LandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                                                                         = 0,
	LSMO_YUp                                                                         = 1
};

/// Enum /Script/Landscape.ELandscapeLayerBlendType
/// Size: 0x03
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                                                                   = 0,
	LB_AlphaBlend                                                                    = 1,
	LB_HeightBlend                                                                   = 2
};

/// Enum /Script/Landscape.ELandscapeCustomizedCoordType
/// Size: 0x05
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                                                                        = 0,
	LCCT_CustomUV0                                                                   = 1,
	LCCT_CustomUV1                                                                   = 2,
	LCCT_CustomUV2                                                                   = 3,
	LCCT_WeightMapUV                                                                 = 4
};

/// Enum /Script/Landscape.ETerrainCoordMappingType
/// Size: 0x04
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                                                                        = 0,
	TCMT_XY                                                                          = 1,
	TCMT_XZ                                                                          = 2,
	TCMT_YZ                                                                          = 3
};


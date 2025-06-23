
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "PhysicsCore.h"

#pragma pack(push, 0x1)

class AControlPointMeshActor;
class ALandscape;
class ALandscapeBlueprintBrushBase;
class ALandscapeGizmoActiveActor;
class ALandscapeGizmoActor;
class ALandscapeMeshProxyActor;
class ALandscapeProxy;
class ALandscapeStreamingProxy;
class UControlPointMeshComponent;
class ULandscapeComponent;
class ULandscapeGizmoRenderComponent;
class ULandscapeGrassType;
class ULandscapeHeightfieldCollisionComponent;
class ULandscapeInfo;
class ULandscapeInfoMap;
class ULandscapeLODStreamingProxy;
class ULandscapeLayerInfoObject;
class ULandscapeMaterialInstanceConstant;
class ULandscapeMeshCollisionComponent;
class ULandscapeMeshProxyComponent;
class ULandscapeSettings;
class ULandscapeSplineControlPoint;
class ULandscapeSplineSegment;
class ULandscapeSplinesComponent;
class ULandscapeSubsystem;
class ULandscapeWeightmapUsage;
class UMaterialExpressionLandscapeGrassOutput;
class UMaterialExpressionLandscapeLayerBlend;
class UMaterialExpressionLandscapeLayerCoords;
class UMaterialExpressionLandscapeLayerSample;
class UMaterialExpressionLandscapeLayerSwitch;
class UMaterialExpressionLandscapeLayerWeight;
class UMaterialExpressionLandscapePhysicalMaterialOutput;
class UMaterialExpressionLandscapeVisibilityMask;

/// Enum /Script/Landscape.ELandscapeBlendMode
/// Size: 0x01 (1 bytes)
enum class ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend                                                               = 0,
	LSBM_AlphaBlend                                                                  = 1
};

/// Enum /Script/Landscape.ELandscapeSetupErrors
/// Size: 0x01 (1 bytes)
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                                                                         = 0,
	LSE_NoLandscapeInfo                                                              = 1,
	LSE_CollsionXY                                                                   = 2,
	LSE_NoLayerInfo                                                                  = 3
};

/// Enum /Script/Landscape.ELandscapeClearMode
/// Size: 0x01 (1 bytes)
enum class ELandscapeClearMode : uint8_t
{
	Clear_Weightmap                                                                  = 1,
	Clear_Heightmap                                                                  = 2,
	Clear_All                                                                        = 3
};

/// Enum /Script/Landscape.ELandscapeGizmoType
/// Size: 0x01 (1 bytes)
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                                                                         = 0,
	LGT_Height                                                                       = 1,
	LGT_Weight                                                                       = 2
};

/// Enum /Script/Landscape.EGrassScaling
/// Size: 0x01 (1 bytes)
enum class EGrassScaling : uint8_t
{
	EGrassScaling__Uniform                                                           = 0,
	EGrassScaling__Free                                                              = 1,
	EGrassScaling__LockXY                                                            = 2
};

/// Enum /Script/Landscape.ESplineModulationColorMask
/// Size: 0x01 (1 bytes)
enum class ESplineModulationColorMask : uint8_t
{
	ESplineModulationColorMask__Red                                                  = 0,
	ESplineModulationColorMask__Green                                                = 1,
	ESplineModulationColorMask__Blue                                                 = 2,
	ESplineModulationColorMask__Alpha                                                = 3
};

/// Enum /Script/Landscape.ELandscapeLODFalloff
/// Size: 0x01 (1 bytes)
enum class ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear                                                     = 0,
	ELandscapeLODFalloff__SquareRoot                                                 = 1
};

/// Enum /Script/Landscape.ELandscapeLayerDisplayMode
/// Size: 0x01 (1 bytes)
enum class ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default                                              = 0,
	ELandscapeLayerDisplayMode__Alphabetical                                         = 1,
	ELandscapeLayerDisplayMode__UserSpecific                                         = 2
};

/// Enum /Script/Landscape.ELandscapeLayerPaintingRestriction
/// Size: 0x01 (1 bytes)
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None                                         = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers                                 = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly                                 = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist                        = 3
};

/// Enum /Script/Landscape.ELandscapeImportAlphamapType
/// Size: 0x01 (1 bytes)
enum class ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive                                           = 0,
	ELandscapeImportAlphamapType__Layered                                            = 1
};

/// Enum /Script/Landscape.LandscapeSplineMeshOrientation
/// Size: 0x01 (1 bytes)
enum class LandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                                                                         = 0,
	LSMO_YUp                                                                         = 1
};

/// Enum /Script/Landscape.ELandscapeLayerBlendType
/// Size: 0x01 (1 bytes)
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                                                                   = 0,
	LB_AlphaBlend                                                                    = 1,
	LB_HeightBlend                                                                   = 2
};

/// Enum /Script/Landscape.ELandscapeCustomizedCoordType
/// Size: 0x01 (1 bytes)
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                                                                        = 0,
	LCCT_CustomUV0                                                                   = 1,
	LCCT_CustomUV1                                                                   = 2,
	LCCT_CustomUV2                                                                   = 3,
	LCCT_WeightMapUV                                                                 = 4
};

/// Enum /Script/Landscape.ETerrainCoordMappingType
/// Size: 0x01 (1 bytes)
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                                                                        = 0,
	TCMT_XY                                                                          = 1,
	TCMT_XZ                                                                          = 2,
	TCMT_YZ                                                                          = 3
};

#pragma pack(pop)


static_assert(sizeof(AControlPointMeshActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UControlPointMeshComponent) == 0x0500); // 1280 bytes (0x0004F8 - 0x000500)
static_assert(sizeof(FLandscapeProxyMaterialOverride) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(ALandscapeProxy) == 0x0598); // 1432 bytes (0x000220 - 0x000598)
static_assert(sizeof(ALandscape) == 0x0598); // 1432 bytes (0x000598 - 0x000598)
static_assert(sizeof(ALandscapeBlueprintBrushBase) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(ULandscapeLODStreamingProxy) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(FLandscapeComponentMaterialOverride) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWeightmapLayerAllocationInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(ULandscapeComponent) == 0x0690); // 1680 bytes (0x000468 - 0x000690)
static_assert(sizeof(ALandscapeGizmoActor) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(ALandscapeGizmoActiveActor) == 0x0270); // 624 bytes (0x000220 - 0x000270)
static_assert(sizeof(ULandscapeGizmoRenderComponent) == 0x0470); // 1136 bytes (0x000468 - 0x000470)
static_assert(sizeof(FGrassVariety) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(ULandscapeGrassType) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(ULandscapeHeightfieldCollisionComponent) == 0x0548); // 1352 bytes (0x000468 - 0x000548)
static_assert(sizeof(ULandscapeInfo) == 0x0210); // 528 bytes (0x000028 - 0x000210)
static_assert(sizeof(ULandscapeInfoMap) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(ULandscapeLayerInfoObject) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FLandscapeMaterialTextureStreamingInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(ULandscapeMaterialInstanceConstant) == 0x0398); // 920 bytes (0x000380 - 0x000398)
static_assert(sizeof(ULandscapeMeshCollisionComponent) == 0x0560); // 1376 bytes (0x000548 - 0x000560)
static_assert(sizeof(ALandscapeMeshProxyActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(ULandscapeMeshProxyComponent) == 0x0520); // 1312 bytes (0x0004F8 - 0x000520)
static_assert(sizeof(ULandscapeSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(ULandscapeSplinesComponent) == 0x04A0); // 1184 bytes (0x000468 - 0x0004A0)
static_assert(sizeof(FLandscapeSplineConnection) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLandscapeSplineInterpPoint) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(ULandscapeSplineControlPoint) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(FLandscapeSplineSegmentConnection) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(ULandscapeSplineSegment) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(ALandscapeStreamingProxy) == 0x05B8); // 1464 bytes (0x000598 - 0x0005B8)
static_assert(sizeof(ULandscapeSubsystem) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(ULandscapeWeightmapUsage) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(FGrassInput) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UMaterialExpressionLandscapeGrassOutput) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(FLayerBlendInput) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UMaterialExpressionLandscapeLayerBlend) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMaterialExpressionLandscapeLayerCoords) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionLandscapeLayerSample) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMaterialExpressionLandscapeLayerSwitch) == 0x0088); // 136 bytes (0x000040 - 0x000088)
static_assert(sizeof(UMaterialExpressionLandscapeLayerWeight) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(FPhysicalMaterialInput) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UMaterialExpressionLandscapePhysicalMaterialOutput) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UMaterialExpressionLandscapeVisibilityMask) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(FLandscapeLayerBrush) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLandscapeLayer) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FHeightmapData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FWeightmapData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FLandscapeLayerComponentData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FLandscapeEditToolRenderData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FGizmoSelectData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FLandscapeInfoLayerSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLandscapeImportLayerInfo) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLandscapeLayerStruct) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLandscapeEditorLayerSettings) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FForeignWorldSplineData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FForeignSplineSegmentData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FForeignControlPointData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLandscapeSplineMeshEntry) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(offsetof(AControlPointMeshActor, ControlPointMeshComponent) == 0x0220);
static_assert(offsetof(FLandscapeProxyMaterialOverride, LODIndex) == 0x0000);
static_assert(offsetof(FLandscapeProxyMaterialOverride, Material) == 0x0008);
static_assert(offsetof(ALandscapeProxy, SplineComponent) == 0x0220);
static_assert(offsetof(ALandscapeProxy, LandscapeGuid) == 0x0228);
static_assert(offsetof(ALandscapeProxy, LandscapeSectionOffset) == 0x0238);
static_assert(offsetof(ALandscapeProxy, LODFalloff) == 0x0248);
static_assert(offsetof(ALandscapeProxy, DefaultPhysMaterial) == 0x0270);
static_assert(offsetof(ALandscapeProxy, LandscapeMaterial) == 0x0280);
static_assert(offsetof(ALandscapeProxy, LandscapeHoleMaterial) == 0x02A8);
static_assert(offsetof(ALandscapeProxy, LandscapeMaterialsOverride) == 0x02B0);
static_assert(offsetof(ALandscapeProxy, RuntimeVirtualTextures) == 0x02C8);
static_assert(offsetof(ALandscapeProxy, VirtualTextureRenderPassType) == 0x02E0);
static_assert(offsetof(ALandscapeProxy, LandscapeComponents) == 0x02F0);
static_assert(offsetof(ALandscapeProxy, CollisionComponents) == 0x0300);
static_assert(offsetof(ALandscapeProxy, FoliageComponents) == 0x0310);
static_assert(offsetof(ALandscapeProxy, LightingChannels) == 0x039D);
static_assert(offsetof(ALandscapeProxy, CustomDepthStencilWriteMask) == 0x03A4);
static_assert(offsetof(ALandscapeProxy, LightmassSettings) == 0x03B0);
static_assert(offsetof(ALandscapeProxy, BodyInstance) == 0x03D8);
static_assert(offsetof(ALandscapeProxy, NavigationGeometryGatheringMode) == 0x0545);
static_assert(offsetof(ALandscapeProxy, WeightmapUsageMap) == 0x0548);
static_assert(offsetof(FLandscapeComponentMaterialOverride, LODIndex) == 0x0000);
static_assert(offsetof(FLandscapeComponentMaterialOverride, Material) == 0x0008);
static_assert(offsetof(FWeightmapLayerAllocationInfo, LayerInfo) == 0x0000);
static_assert(offsetof(ULandscapeComponent, OverrideMaterial) == 0x0480);
static_assert(offsetof(ULandscapeComponent, OverrideHoleMaterial) == 0x0488);
static_assert(offsetof(ULandscapeComponent, OverrideMaterials) == 0x0490);
static_assert(offsetof(ULandscapeComponent, MaterialInstances) == 0x04A0);
static_assert(offsetof(ULandscapeComponent, MaterialInstancesDynamic) == 0x04B0);
static_assert(offsetof(ULandscapeComponent, LODIndexToMaterialIndex) == 0x04C0);
static_assert(offsetof(ULandscapeComponent, MaterialIndexToDisabledTessellationMaterial) == 0x04D0);
static_assert(offsetof(ULandscapeComponent, XYOffsetmapTexture) == 0x04E0);
static_assert(offsetof(ULandscapeComponent, WeightmapScaleBias) == 0x04F0);
static_assert(offsetof(ULandscapeComponent, HeightmapScaleBias) == 0x0510);
static_assert(offsetof(ULandscapeComponent, CachedLocalBox) == 0x0520);
static_assert(offsetof(ULandscapeComponent, CollisionComponent) == 0x053C);
static_assert(offsetof(ULandscapeComponent, HeightmapTexture) == 0x0558);
static_assert(offsetof(ULandscapeComponent, WeightmapLayerAllocations) == 0x0560);
static_assert(offsetof(ULandscapeComponent, WeightmapTextures) == 0x0570);
static_assert(offsetof(ULandscapeComponent, LODStreamingProxy) == 0x0580);
static_assert(offsetof(ULandscapeComponent, MapBuildDataId) == 0x0588);
static_assert(offsetof(ULandscapeComponent, IrrelevantLights) == 0x0598);
static_assert(offsetof(ULandscapeComponent, StateId) == 0x05C4);
static_assert(offsetof(ULandscapeComponent, BakedTextureMaterialGuid) == 0x05D4);
static_assert(offsetof(ULandscapeComponent, GIBakedBaseColorTexture) == 0x05E8);
static_assert(offsetof(ULandscapeComponent, MobileMaterialInterface) == 0x05F8);
static_assert(offsetof(ULandscapeComponent, MobileMaterialInterfaces) == 0x0600);
static_assert(offsetof(ULandscapeComponent, MobileWeightmapTextures) == 0x0610);
static_assert(offsetof(FGrassVariety, GrassMesh) == 0x0000);
static_assert(offsetof(FGrassVariety, OverrideMaterials) == 0x0008);
static_assert(offsetof(FGrassVariety, GrassDensity) == 0x0018);
static_assert(offsetof(FGrassVariety, StartCullDistance) == 0x0024);
static_assert(offsetof(FGrassVariety, EndCullDistance) == 0x0028);
static_assert(offsetof(FGrassVariety, Scaling) == 0x0030);
static_assert(offsetof(FGrassVariety, ScaleX) == 0x0034);
static_assert(offsetof(FGrassVariety, ScaleY) == 0x003C);
static_assert(offsetof(FGrassVariety, ScaleZ) == 0x0044);
static_assert(offsetof(FGrassVariety, LightingChannels) == 0x004F);
static_assert(offsetof(ULandscapeGrassType, GrassVarieties) == 0x0028);
static_assert(offsetof(ULandscapeGrassType, GrassMesh) == 0x0040);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, ComponentLayerInfos) == 0x0468);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CollisionQuadFlags) == 0x0490);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, HeightfieldGuid) == 0x04A0);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CachedLocalBox) == 0x04B0);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, RenderComponent) == 0x04CC);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CookedPhysicalMaterials) == 0x04F8);
static_assert(offsetof(ULandscapeInfo, LandscapeActor) == 0x0028);
static_assert(offsetof(ULandscapeInfo, LandscapeGuid) == 0x0044);
static_assert(offsetof(ULandscapeInfo, DrawScale) == 0x0060);
static_assert(offsetof(ULandscapeInfo, Proxies) == 0x0110);
static_assert(offsetof(ULandscapeLayerInfoObject, LayerName) == 0x0028);
static_assert(offsetof(ULandscapeLayerInfoObject, PhysMaterial) == 0x0030);
static_assert(offsetof(ULandscapeLayerInfoObject, LayerUsageDebugColor) == 0x003C);
static_assert(offsetof(FLandscapeMaterialTextureStreamingInfo, TextureName) == 0x0000);
static_assert(offsetof(ULandscapeMaterialInstanceConstant, TextureStreamingInfo) == 0x0380);
static_assert(offsetof(ULandscapeMeshCollisionComponent, MeshGuid) == 0x0548);
static_assert(offsetof(ALandscapeMeshProxyActor, LandscapeMeshProxyComponent) == 0x0220);
static_assert(offsetof(ULandscapeMeshProxyComponent, LandscapeGuid) == 0x04F8);
static_assert(offsetof(ULandscapeMeshProxyComponent, ProxyComponentBases) == 0x0508);
static_assert(offsetof(ULandscapeSplinesComponent, ControlPoints) == 0x0468);
static_assert(offsetof(ULandscapeSplinesComponent, Segments) == 0x0478);
static_assert(offsetof(ULandscapeSplinesComponent, CookedForeignMeshComponents) == 0x0488);
static_assert(offsetof(FLandscapeSplineConnection, Segment) == 0x0000);
static_assert(offsetof(FLandscapeSplineInterpPoint, Center) == 0x0000);
static_assert(offsetof(FLandscapeSplineInterpPoint, Left) == 0x000C);
static_assert(offsetof(FLandscapeSplineInterpPoint, Right) == 0x0018);
static_assert(offsetof(FLandscapeSplineInterpPoint, FalloffLeft) == 0x0024);
static_assert(offsetof(FLandscapeSplineInterpPoint, FalloffRight) == 0x0030);
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerLeft) == 0x003C);
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerRight) == 0x0048);
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerFalloffLeft) == 0x0054);
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerFalloffRight) == 0x0060);
static_assert(offsetof(ULandscapeSplineControlPoint, Location) == 0x0028);
static_assert(offsetof(ULandscapeSplineControlPoint, Rotation) == 0x0034);
static_assert(offsetof(ULandscapeSplineControlPoint, ConnectedSegments) == 0x0060);
static_assert(offsetof(ULandscapeSplineControlPoint, Points) == 0x0070);
static_assert(offsetof(ULandscapeSplineControlPoint, Bounds) == 0x0080);
static_assert(offsetof(ULandscapeSplineControlPoint, LocalMeshComponent) == 0x00A0);
static_assert(offsetof(FLandscapeSplineSegmentConnection, ControlPoint) == 0x0000);
static_assert(offsetof(FLandscapeSplineSegmentConnection, SocketName) == 0x000C);
static_assert(offsetof(ULandscapeSplineSegment, Connections) == 0x0028);
static_assert(offsetof(ULandscapeSplineSegment, SplineInfo) == 0x0058);
static_assert(offsetof(ULandscapeSplineSegment, Points) == 0x0070);
static_assert(offsetof(ULandscapeSplineSegment, Bounds) == 0x0080);
static_assert(offsetof(ULandscapeSplineSegment, LocalMeshComponents) == 0x00A0);
static_assert(offsetof(ALandscapeStreamingProxy, LandscapeActor) == 0x0598);
static_assert(offsetof(ULandscapeWeightmapUsage, ChannelUsage) == 0x0028);
static_assert(offsetof(ULandscapeWeightmapUsage, LayerGuid) == 0x0048);
static_assert(offsetof(FGrassInput, Name) == 0x0000);
static_assert(offsetof(FGrassInput, GrassType) == 0x0008);
static_assert(offsetof(FGrassInput, Input) == 0x0010);
static_assert(offsetof(UMaterialExpressionLandscapeGrassOutput, GrassTypes) == 0x0040);
static_assert(offsetof(FLayerBlendInput, LayerName) == 0x0000);
static_assert(offsetof(FLayerBlendInput, BlendType) == 0x0008);
static_assert(offsetof(FLayerBlendInput, LayerInput) == 0x000C);
static_assert(offsetof(FLayerBlendInput, HeightInput) == 0x0020);
static_assert(offsetof(FLayerBlendInput, ConstLayerInput) == 0x0038);
static_assert(offsetof(UMaterialExpressionLandscapeLayerBlend, Layers) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeLayerBlend, ExpressionGUID) == 0x0050);
static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, MappingType) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeLayerCoords, CustomUVType) == 0x0041);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSample, ParameterName) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSample, ExpressionGUID) == 0x004C);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, LayerUsed) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, LayerNotUsed) == 0x0054);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, ParameterName) == 0x0068);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, ExpressionGUID) == 0x0074);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, Base) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, Layer) == 0x0054);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, ParameterName) == 0x0068);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, ConstBase) == 0x0074);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, ExpressionGUID) == 0x0080);
static_assert(offsetof(FPhysicalMaterialInput, PhysicalMaterial) == 0x0000);
static_assert(offsetof(FPhysicalMaterialInput, Input) == 0x0008);
static_assert(offsetof(UMaterialExpressionLandscapePhysicalMaterialOutput, Inputs) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeVisibilityMask, ExpressionGUID) == 0x0040);
static_assert(offsetof(FLandscapeLayer, Guid) == 0x0000);
static_assert(offsetof(FLandscapeLayer, Name) == 0x0010);
static_assert(offsetof(FLandscapeLayer, BlendMode) == 0x0024);
static_assert(offsetof(FLandscapeLayer, Brushes) == 0x0028);
static_assert(offsetof(FLandscapeLayer, WeightmapLayerAllocationBlend) == 0x0038);
static_assert(offsetof(FHeightmapData, Texture) == 0x0000);
static_assert(offsetof(FWeightmapData, Textures) == 0x0000);
static_assert(offsetof(FWeightmapData, LayerAllocations) == 0x0010);
static_assert(offsetof(FWeightmapData, TextureUsages) == 0x0020);
static_assert(offsetof(FLandscapeLayerComponentData, HeightmapData) == 0x0000);
static_assert(offsetof(FLandscapeLayerComponentData, WeightmapData) == 0x0008);
static_assert(offsetof(FLandscapeEditToolRenderData, ToolMaterial) == 0x0000);
static_assert(offsetof(FLandscapeEditToolRenderData, GizmoMaterial) == 0x0008);
static_assert(offsetof(FLandscapeEditToolRenderData, DataTexture) == 0x0020);
static_assert(offsetof(FLandscapeEditToolRenderData, LayerContributionTexture) == 0x0028);
static_assert(offsetof(FLandscapeEditToolRenderData, DirtyTexture) == 0x0030);
static_assert(offsetof(FLandscapeInfoLayerSettings, LayerInfoObj) == 0x0000);
static_assert(offsetof(FLandscapeInfoLayerSettings, LayerName) == 0x0008);
static_assert(offsetof(FLandscapeLayerStruct, LayerInfoObj) == 0x0000);
static_assert(offsetof(FLandscapeSplineMeshEntry, Mesh) == 0x0000);
static_assert(offsetof(FLandscapeSplineMeshEntry, MaterialOverrides) == 0x0008);
static_assert(offsetof(FLandscapeSplineMeshEntry, CenterAdjust) == 0x001C);
static_assert(offsetof(FLandscapeSplineMeshEntry, Scale) == 0x0028);
static_assert(offsetof(FLandscapeSplineMeshEntry, Orientation) == 0x0034);
static_assert(offsetof(FLandscapeSplineMeshEntry, ForwardAxis) == 0x0035);
static_assert(offsetof(FLandscapeSplineMeshEntry, UpAxis) == 0x0036);

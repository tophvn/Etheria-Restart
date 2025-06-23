
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CinematicCamera.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "LevelSequence.h"

#pragma pack(push, 0x1)

class ADatasmithAreaLightActor;
class ADatasmithImportedSequencesActor;
class ADatasmithSceneActor;
class UDatasmithActorTemplate;
class UDatasmithAdditionalData;
class UDatasmithAreaLightActorTemplate;
class UDatasmithAssetImportData;
class UDatasmithAssetUserData;
class UDatasmithCADImportSceneData;
class UDatasmithCineCameraActorTemplate;
class UDatasmithCineCameraComponentTemplate;
class UDatasmithCommonTessellationOptions;
class UDatasmithContentBlueprintLibrary;
class UDatasmithCustomActionBase;
class UDatasmithDecalComponentTemplate;
class UDatasmithDeltaGenAssetImportData;
class UDatasmithDeltaGenSceneImportData;
class UDatasmithFBXSceneImportData;
class UDatasmithGLTFSceneImportData;
class UDatasmithIFCSceneImportData;
class UDatasmithImportOptions;
class UDatasmithLandscapeTemplate;
class UDatasmithLightComponentTemplate;
class UDatasmithMDLSceneImportData;
class UDatasmithMaterialInstanceTemplate;
class UDatasmithObjectTemplate;
class UDatasmithOptionsBase;
class UDatasmithPointLightComponentTemplate;
class UDatasmithPostProcessVolumeTemplate;
class UDatasmithScene;
class UDatasmithSceneComponentTemplate;
class UDatasmithSceneImportData;
class UDatasmithSkyLightComponentTemplate;
class UDatasmithSpotLightComponentTemplate;
class UDatasmithStaticMeshCADImportData;
class UDatasmithStaticMeshComponentTemplate;
class UDatasmithStaticMeshGLTFImportData;
class UDatasmithStaticMeshIFCImportData;
class UDatasmithStaticMeshImportData;
class UDatasmithStaticMeshTemplate;
class UDatasmithTranslatedSceneImportData;
class UDatasmithVREDAssetImportData;
class UDatasmithVREDSceneImportData;

/// Enum /Script/DatasmithContent.EDatasmithAreaLightActorType
/// Size: 0x01 (1 bytes)
enum class EDatasmithAreaLightActorType : uint8_t
{
	EDatasmithAreaLightActorType__Point                                              = 0,
	EDatasmithAreaLightActorType__Spot                                               = 1,
	EDatasmithAreaLightActorType__Rect                                               = 2
};

/// Enum /Script/DatasmithContent.EDatasmithAreaLightActorShape
/// Size: 0x01 (1 bytes)
enum class EDatasmithAreaLightActorShape : uint8_t
{
	EDatasmithAreaLightActorShape__Rectangle                                         = 0,
	EDatasmithAreaLightActorShape__Disc                                              = 1,
	EDatasmithAreaLightActorShape__Sphere                                            = 2,
	EDatasmithAreaLightActorShape__Cylinder                                          = 3,
	EDatasmithAreaLightActorShape__None                                              = 4
};

/// Enum /Script/DatasmithContent.EDatasmithCADRetessellationRule
/// Size: 0x01 (1 bytes)
enum class EDatasmithCADRetessellationRule : uint8_t
{
	EDatasmithCADRetessellationRule__All                                             = 0,
	EDatasmithCADRetessellationRule__SkipDeletedSurfaces                             = 1
};

/// Enum /Script/DatasmithContent.EDatasmithCADStitchingTechnique
/// Size: 0x01 (1 bytes)
enum class EDatasmithCADStitchingTechnique : uint8_t
{
	EDatasmithCADStitchingTechnique__StitchingNone                                   = 0,
	EDatasmithCADStitchingTechnique__StitchingHeal                                   = 1,
	EDatasmithCADStitchingTechnique__StitchingSew                                    = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportHierarchy
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportHierarchy : uint8_t
{
	EDatasmithImportHierarchy__UseMultipleActors                                     = 0,
	EDatasmithImportHierarchy__UseSingleActor                                        = 1,
	EDatasmithImportHierarchy__UseOneBlueprint                                       = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportScene
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportScene : uint8_t
{
	EDatasmithImportScene__NewLevel                                                  = 0,
	EDatasmithImportScene__CurrentLevel                                              = 1,
	EDatasmithImportScene__AssetsOnly                                                = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportLightmapMax
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportLightmapMax : uint8_t
{
	EDatasmithImportLightmapMax__LIGHTMAP                                            = 0,
	EDatasmithImportLightmapMax__LIGHTMAP2                                           = 1,
	EDatasmithImportLightmapMax__LIGHTMAP3                                           = 2,
	EDatasmithImportLightmapMax__LIGHTMAP4                                           = 3,
	EDatasmithImportLightmapMax__LIGHTMAP5                                           = 4,
	EDatasmithImportLightmapMax__LIGHTMAP6                                           = 5,
	EDatasmithImportLightmapMax__LIGHTMAP7                                           = 6
};

/// Enum /Script/DatasmithContent.EDatasmithImportLightmapMin
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportLightmapMin : uint8_t
{
	EDatasmithImportLightmapMin__LIGHTMAP                                            = 0,
	EDatasmithImportLightmapMin__LIGHTMAP2                                           = 1,
	EDatasmithImportLightmapMin__LIGHTMAP3                                           = 2,
	EDatasmithImportLightmapMin__LIGHTMAP4                                           = 3,
	EDatasmithImportLightmapMin__LIGHTMAP5                                           = 4,
	EDatasmithImportLightmapMin__LIGHTMAP6                                           = 5
};

/// Enum /Script/DatasmithContent.EDatasmithImportMaterialQuality
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportMaterialQuality : uint8_t
{
	EDatasmithImportMaterialQuality__UseNoFresnelCurves                              = 0,
	EDatasmithImportMaterialQuality__UseSimplifierFresnelCurves                      = 1,
	EDatasmithImportMaterialQuality__UseRealFresnelCurves                            = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportActorPolicy
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportActorPolicy : uint8_t
{
	EDatasmithImportActorPolicy__Update                                              = 0,
	EDatasmithImportActorPolicy__Full                                                = 1,
	EDatasmithImportActorPolicy__Ignore                                              = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportAssetConflictPolicy
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportAssetConflictPolicy : uint8_t
{
	EDatasmithImportAssetConflictPolicy__Replace                                     = 0,
	EDatasmithImportAssetConflictPolicy__Update                                      = 1,
	EDatasmithImportAssetConflictPolicy__Use                                         = 2,
	EDatasmithImportAssetConflictPolicy__Ignore                                      = 3
};

/// Enum /Script/DatasmithContent.EDatasmithImportSearchPackagePolicy
/// Size: 0x01 (1 bytes)
enum class EDatasmithImportSearchPackagePolicy : uint8_t
{
	EDatasmithImportSearchPackagePolicy__Current                                     = 0,
	EDatasmithImportSearchPackagePolicy__All                                         = 1
};

#pragma pack(pop)


static_assert(sizeof(UDatasmithObjectTemplate) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UDatasmithActorTemplate) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(UDatasmithAdditionalData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ADatasmithAreaLightActor) == 0x0278); // 632 bytes (0x000220 - 0x000278)
static_assert(sizeof(UDatasmithAreaLightActorTemplate) == 0x00A0); // 160 bytes (0x000030 - 0x0000A0)
static_assert(sizeof(UDatasmithAssetImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithStaticMeshImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithStaticMeshCADImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithSceneImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithTranslatedSceneImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithCADImportSceneData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithMDLSceneImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithGLTFSceneImportData) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UDatasmithStaticMeshGLTFImportData) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UDatasmithFBXSceneImportData) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UDatasmithDeltaGenAssetImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithDeltaGenSceneImportData) == 0x0090); // 144 bytes (0x000048 - 0x000090)
static_assert(sizeof(UDatasmithVREDAssetImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithVREDSceneImportData) == 0x00A8); // 168 bytes (0x000048 - 0x0000A8)
static_assert(sizeof(UDatasmithIFCSceneImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithStaticMeshIFCImportData) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UDatasmithAssetUserData) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FDatasmithCameraLookatTrackingSettingsTemplate) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UDatasmithCineCameraActorTemplate) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(FDatasmithCameraFilmbackSettingsTemplate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FDatasmithCameraLensSettingsTemplate) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FDatasmithCameraFocusSettingsTemplate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FDatasmithPostProcessSettingsTemplate) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UDatasmithCineCameraComponentTemplate) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UDatasmithContentBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDatasmithCustomActionBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UDatasmithDecalComponentTemplate) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(ADatasmithImportedSequencesActor) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UDatasmithOptionsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FDatasmithTessellationOptions) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UDatasmithCommonTessellationOptions) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FDatasmithAssetImportOptions) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FDatasmithStaticMeshImportOptions) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FDatasmithImportBaseOptions) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FDatasmithReimportOptions) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(UDatasmithImportOptions) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UDatasmithLandscapeTemplate) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UDatasmithLightComponentTemplate) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(FDatasmithStaticParameterSetTemplate) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UDatasmithMaterialInstanceTemplate) == 0x0198); // 408 bytes (0x000030 - 0x000198)
static_assert(sizeof(UDatasmithPointLightComponentTemplate) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UDatasmithPostProcessVolumeTemplate) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UDatasmithScene) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(ADatasmithSceneActor) == 0x0278); // 632 bytes (0x000220 - 0x000278)
static_assert(sizeof(UDatasmithSceneComponentTemplate) == 0x00F0); // 240 bytes (0x000030 - 0x0000F0)
static_assert(sizeof(UDatasmithSkyLightComponentTemplate) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UDatasmithSpotLightComponentTemplate) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UDatasmithStaticMeshComponentTemplate) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(FDatasmithMeshSectionInfoTemplate) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FDatasmithMeshSectionInfoMapTemplate) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FDatasmithMeshBuildSettingsTemplate) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FDatasmithStaticMaterialTemplate) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UDatasmithStaticMeshTemplate) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(FDatasmithRetessellationOptions) == 0x0014); // 20 bytes (0x000010 - 0x000014)
static_assert(offsetof(ADatasmithAreaLightActor, LightType) == 0x0220);
static_assert(offsetof(ADatasmithAreaLightActor, LightShape) == 0x0221);
static_assert(offsetof(ADatasmithAreaLightActor, Dimensions) == 0x0224);
static_assert(offsetof(ADatasmithAreaLightActor, IntensityUnits) == 0x0230);
static_assert(offsetof(ADatasmithAreaLightActor, Color) == 0x0234);
static_assert(offsetof(ADatasmithAreaLightActor, IESTexture) == 0x0248);
static_assert(offsetof(ADatasmithAreaLightActor, Rotation) == 0x0258);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, LightType) == 0x0030);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, LightShape) == 0x0031);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, Dimensions) == 0x0034);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, Color) == 0x003C);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, IntensityUnits) == 0x0050);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, IESTexture) == 0x0058);
static_assert(offsetof(UDatasmithAreaLightActorTemplate, Rotation) == 0x0088);
static_assert(offsetof(UDatasmithGLTFSceneImportData, Generator) == 0x0028);
static_assert(offsetof(UDatasmithGLTFSceneImportData, Author) == 0x0040);
static_assert(offsetof(UDatasmithGLTFSceneImportData, License) == 0x0050);
static_assert(offsetof(UDatasmithGLTFSceneImportData, Source) == 0x0060);
static_assert(offsetof(UDatasmithStaticMeshGLTFImportData, SourceMeshName) == 0x0028);
static_assert(offsetof(UDatasmithFBXSceneImportData, TexturesDir) == 0x0030);
static_assert(offsetof(UDatasmithDeltaGenSceneImportData, VarPath) == 0x0050);
static_assert(offsetof(UDatasmithDeltaGenSceneImportData, PosPath) == 0x0068);
static_assert(offsetof(UDatasmithDeltaGenSceneImportData, TmlPath) == 0x0080);
static_assert(offsetof(UDatasmithVREDSceneImportData, MatsPath) == 0x0050);
static_assert(offsetof(UDatasmithVREDSceneImportData, VarPath) == 0x0068);
static_assert(offsetof(UDatasmithVREDSceneImportData, LightInfoPath) == 0x0080);
static_assert(offsetof(UDatasmithVREDSceneImportData, ClipInfoPath) == 0x0098);
static_assert(offsetof(UDatasmithStaticMeshIFCImportData, SourceGlobalId) == 0x0028);
static_assert(offsetof(UDatasmithAssetUserData, MetaData) == 0x0028);
static_assert(offsetof(FDatasmithCameraLookatTrackingSettingsTemplate, ActorToTrack) == 0x0008);
static_assert(offsetof(UDatasmithCineCameraActorTemplate, LookatTrackingSettings) == 0x0030);
static_assert(offsetof(FDatasmithCameraFocusSettingsTemplate, FocusMethod) == 0x0000);
static_assert(offsetof(FDatasmithPostProcessSettingsTemplate, FilmWhitePoint) == 0x0010);
static_assert(offsetof(FDatasmithPostProcessSettingsTemplate, ColorSaturation) == 0x0020);
static_assert(offsetof(FDatasmithPostProcessSettingsTemplate, AutoExposureMethod) == 0x0030);
static_assert(offsetof(UDatasmithCineCameraComponentTemplate, FilmbackSettings) == 0x0030);
static_assert(offsetof(UDatasmithCineCameraComponentTemplate, LensSettings) == 0x0038);
static_assert(offsetof(UDatasmithCineCameraComponentTemplate, FocusSettings) == 0x003C);
static_assert(offsetof(UDatasmithCineCameraComponentTemplate, PostProcessSettings) == 0x0050);
static_assert(offsetof(UDatasmithDecalComponentTemplate, DecalSize) == 0x0034);
static_assert(offsetof(UDatasmithDecalComponentTemplate, Material) == 0x0040);
static_assert(offsetof(ADatasmithImportedSequencesActor, ImportedSequences) == 0x0220);
static_assert(offsetof(FDatasmithTessellationOptions, StitchingTechnique) == 0x000C);
static_assert(offsetof(UDatasmithCommonTessellationOptions, options) == 0x0028);
static_assert(offsetof(FDatasmithAssetImportOptions, PackagePath) == 0x0000);
static_assert(offsetof(FDatasmithStaticMeshImportOptions, MinLightmapResolution) == 0x0000);
static_assert(offsetof(FDatasmithStaticMeshImportOptions, MaxLightmapResolution) == 0x0001);
static_assert(offsetof(FDatasmithImportBaseOptions, SceneHandling) == 0x0000);
static_assert(offsetof(FDatasmithImportBaseOptions, AssetOptions) == 0x0008);
static_assert(offsetof(FDatasmithImportBaseOptions, StaticMeshOptions) == 0x0010);
static_assert(offsetof(UDatasmithImportOptions, SearchPackagePolicy) == 0x0028);
static_assert(offsetof(UDatasmithImportOptions, MaterialConflictPolicy) == 0x0029);
static_assert(offsetof(UDatasmithImportOptions, TextureConflictPolicy) == 0x002A);
static_assert(offsetof(UDatasmithImportOptions, StaticMeshActorImportPolicy) == 0x002B);
static_assert(offsetof(UDatasmithImportOptions, LightImportPolicy) == 0x002C);
static_assert(offsetof(UDatasmithImportOptions, CameraImportPolicy) == 0x002D);
static_assert(offsetof(UDatasmithImportOptions, OtherActorImportPolicy) == 0x002E);
static_assert(offsetof(UDatasmithImportOptions, MaterialQuality) == 0x002F);
static_assert(offsetof(UDatasmithImportOptions, BaseOptions) == 0x0034);
static_assert(offsetof(UDatasmithImportOptions, ReimportOptions) == 0x0048);
static_assert(offsetof(UDatasmithImportOptions, Filename) == 0x0050);
static_assert(offsetof(UDatasmithImportOptions, FilePath) == 0x0060);
static_assert(offsetof(UDatasmithLandscapeTemplate, LandscapeMaterial) == 0x0030);
static_assert(offsetof(UDatasmithLightComponentTemplate, LightColor) == 0x0044);
static_assert(offsetof(UDatasmithLightComponentTemplate, LightFunctionMaterial) == 0x0058);
static_assert(offsetof(UDatasmithLightComponentTemplate, IESTexture) == 0x0060);
static_assert(offsetof(FDatasmithStaticParameterSetTemplate, StaticSwitchParameters) == 0x0000);
static_assert(offsetof(UDatasmithMaterialInstanceTemplate, ParentMaterial) == 0x0030);
static_assert(offsetof(UDatasmithMaterialInstanceTemplate, ScalarParameterValues) == 0x0058);
static_assert(offsetof(UDatasmithMaterialInstanceTemplate, VectorParameterValues) == 0x00A8);
static_assert(offsetof(UDatasmithMaterialInstanceTemplate, StaticParameters) == 0x0148);
static_assert(offsetof(UDatasmithPointLightComponentTemplate, IntensityUnits) == 0x0030);
static_assert(offsetof(UDatasmithPostProcessVolumeTemplate, Settings) == 0x0030);
static_assert(offsetof(ADatasmithSceneActor, Scene) == 0x0220);
static_assert(offsetof(UDatasmithSceneComponentTemplate, RelativeTransform) == 0x0030);
static_assert(offsetof(UDatasmithSceneComponentTemplate, Mobility) == 0x0060);
static_assert(offsetof(UDatasmithSceneComponentTemplate, AttachParent) == 0x0068);
static_assert(offsetof(UDatasmithSkyLightComponentTemplate, SourceType) == 0x0030);
static_assert(offsetof(UDatasmithSkyLightComponentTemplate, Cubemap) == 0x0038);
static_assert(offsetof(UDatasmithStaticMeshComponentTemplate, StaticMesh) == 0x0030);
static_assert(offsetof(UDatasmithStaticMeshComponentTemplate, OverrideMaterials) == 0x0038);
static_assert(offsetof(FDatasmithMeshSectionInfoMapTemplate, Map) == 0x0000);
static_assert(offsetof(FDatasmithStaticMaterialTemplate, MaterialSlotName) == 0x0000);
static_assert(offsetof(FDatasmithStaticMaterialTemplate, MaterialInterface) == 0x0008);
static_assert(offsetof(UDatasmithStaticMeshTemplate, SectionInfoMap) == 0x0030);
static_assert(offsetof(UDatasmithStaticMeshTemplate, BuildSettings) == 0x0088);
static_assert(offsetof(UDatasmithStaticMeshTemplate, StaticMaterials) == 0x0098);
static_assert(offsetof(FDatasmithRetessellationOptions, RetessellationRule) == 0x0010);

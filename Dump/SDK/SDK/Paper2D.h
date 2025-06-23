
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "SlateCore.h"

#pragma pack(push, 0x1)

class APaperCharacter;
class APaperFlipbookActor;
class APaperGroupedSpriteActor;
class APaperSpriteActor;
class APaperTerrainActor;
class APaperTileMapActor;
class UMaterialExpressionSpriteTextureSampler;
class UPaperFlipbook;
class UPaperFlipbookComponent;
class UPaperGroupedSpriteComponent;
class UPaperRuntimeSettings;
class UPaperSprite;
class UPaperSpriteAtlas;
class UPaperSpriteBlueprintLibrary;
class UPaperSpriteComponent;
class UPaperTerrainComponent;
class UPaperTerrainMaterial;
class UPaperTerrainSplineComponent;
class UPaperTileLayer;
class UPaperTileMap;
class UPaperTileMapComponent;
class UPaperTileSet;
class UTileMapBlueprintLibrary;

/// Enum /Script/Paper2D.EFlipbookCollisionMode
/// Size: 0x01 (1 bytes)
enum class EFlipbookCollisionMode : uint8_t
{
	EFlipbookCollisionMode__NoCollision                                              = 0,
	EFlipbookCollisionMode__FirstFrameCollision                                      = 1,
	EFlipbookCollisionMode__EachFrameCollision                                       = 2
};

/// Enum /Script/Paper2D.EPaperSpriteAtlasPadding
/// Size: 0x01 (1 bytes)
enum class EPaperSpriteAtlasPadding : uint8_t
{
	EPaperSpriteAtlasPadding__DilateBorder                                           = 0,
	EPaperSpriteAtlasPadding__PadWithZero                                            = 1
};

/// Enum /Script/Paper2D.ETileMapProjectionMode
/// Size: 0x01 (1 bytes)
enum class ETileMapProjectionMode : uint8_t
{
	ETileMapProjectionMode__Orthogonal                                               = 0,
	ETileMapProjectionMode__IsometricDiamond                                         = 1,
	ETileMapProjectionMode__IsometricStaggered                                       = 2,
	ETileMapProjectionMode__HexagonalStaggered                                       = 3
};

/// Enum /Script/Paper2D.ESpritePivotMode
/// Size: 0x01 (1 bytes)
enum class ESpritePivotMode : uint8_t
{
	ESpritePivotMode__Top_Left                                                       = 0,
	ESpritePivotMode__Top_Center                                                     = 1,
	ESpritePivotMode__Top_Right                                                      = 2,
	ESpritePivotMode__Center_Left                                                    = 3,
	ESpritePivotMode__Center_Center                                                  = 4,
	ESpritePivotMode__Center_Right                                                   = 5,
	ESpritePivotMode__Bottom_Left                                                    = 6,
	ESpritePivotMode__Bottom_Center                                                  = 7,
	ESpritePivotMode__Bottom_Right                                                   = 8,
	ESpritePivotMode__Custom                                                         = 9
};

/// Enum /Script/Paper2D.ESpritePolygonMode
/// Size: 0x01 (1 bytes)
enum class ESpritePolygonMode : uint8_t
{
	ESpritePolygonMode__SourceBoundingBox                                            = 0,
	ESpritePolygonMode__TightBoundingBox                                             = 1,
	ESpritePolygonMode__ShrinkWrapped                                                = 2,
	ESpritePolygonMode__FullyCustom                                                  = 3,
	ESpritePolygonMode__Diced                                                        = 4
};

/// Enum /Script/Paper2D.ESpriteShapeType
/// Size: 0x01 (1 bytes)
enum class ESpriteShapeType : uint8_t
{
	ESpriteShapeType__Box                                                            = 0,
	ESpriteShapeType__Circle                                                         = 1,
	ESpriteShapeType__Polygon                                                        = 2
};

/// Enum /Script/Paper2D.ESpriteCollisionMode
/// Size: 0x01 (1 bytes)
enum class ESpriteCollisionMode : uint8_t
{
	ESpriteCollisionMode__None                                                       = 0,
	ESpriteCollisionMode__Use2DPhysics                                               = 1,
	ESpriteCollisionMode__Use3DPhysics                                               = 2
};

#pragma pack(pop)


static_assert(sizeof(UMaterialExpressionSpriteTextureSampler) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(APaperCharacter) == 0x04C0); // 1216 bytes (0x0004B8 - 0x0004C0)
static_assert(sizeof(FPaperFlipbookKeyFrame) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPaperFlipbook) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(APaperFlipbookActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UPaperFlipbookComponent) == 0x04E0); // 1248 bytes (0x000490 - 0x0004E0)
static_assert(sizeof(APaperGroupedSpriteActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(FSpriteInstanceData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UPaperGroupedSpriteComponent) == 0x04C0); // 1216 bytes (0x000490 - 0x0004C0)
static_assert(sizeof(UPaperRuntimeSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FPaperSpriteSocket) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UPaperSprite) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(APaperSpriteActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UPaperSpriteAtlas) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPaperSpriteBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPaperSpriteComponent) == 0x04B0); // 1200 bytes (0x000490 - 0x0004B0)
static_assert(sizeof(APaperTerrainActor) == 0x0238); // 568 bytes (0x000220 - 0x000238)
static_assert(sizeof(UPaperTerrainComponent) == 0x04C0); // 1216 bytes (0x000468 - 0x0004C0)
static_assert(sizeof(FPaperTerrainMaterialRule) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UPaperTerrainMaterial) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UPaperTerrainSplineComponent) == 0x0570); // 1392 bytes (0x000560 - 0x000570)
static_assert(sizeof(FPaperTileInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPaperTileLayer) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(UPaperTileMap) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(APaperTileMapActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UPaperTileMapComponent) == 0x04E0); // 1248 bytes (0x000490 - 0x0004E0)
static_assert(sizeof(FIntMargin) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSpriteGeometryShape) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FSpriteGeometryCollection) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPaperTileMetadata) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FPaperTileSetTerrain) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UPaperTileSet) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UTileMapBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPaperSpriteAtlasSlot) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FSpriteDrawCallRecord) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FSpriteAssetInitParameters) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(offsetof(UMaterialExpressionSpriteTextureSampler, SlotDisplayName) == 0x0088);
static_assert(offsetof(APaperCharacter, Sprite) == 0x04B8);
static_assert(offsetof(FPaperFlipbookKeyFrame, Sprite) == 0x0000);
static_assert(offsetof(UPaperFlipbook, KeyFrames) == 0x0030);
static_assert(offsetof(UPaperFlipbook, DefaultMaterial) == 0x0040);
static_assert(offsetof(UPaperFlipbook, CollisionSource) == 0x0048);
static_assert(offsetof(APaperFlipbookActor, RenderComponent) == 0x0220);
static_assert(offsetof(UPaperFlipbookComponent, SourceFlipbook) == 0x0490);
static_assert(offsetof(UPaperFlipbookComponent, Material) == 0x0498);
static_assert(offsetof(UPaperFlipbookComponent, SpriteColor) == 0x04B0);
static_assert(offsetof(UPaperFlipbookComponent, CachedBodySetup) == 0x04C0);
static_assert(offsetof(APaperGroupedSpriteActor, RenderComponent) == 0x0220);
static_assert(offsetof(FSpriteInstanceData, Transform) == 0x0000);
static_assert(offsetof(FSpriteInstanceData, SourceSprite) == 0x0040);
static_assert(offsetof(FSpriteInstanceData, VertexColor) == 0x0048);
static_assert(offsetof(UPaperGroupedSpriteComponent, InstanceMaterials) == 0x0490);
static_assert(offsetof(UPaperGroupedSpriteComponent, PerInstanceSpriteData) == 0x04A0);
static_assert(offsetof(FPaperSpriteSocket, LocalTransform) == 0x0000);
static_assert(offsetof(FPaperSpriteSocket, SocketName) == 0x0030);
static_assert(offsetof(UPaperSprite, AdditionalSourceTextures) == 0x0038);
static_assert(offsetof(UPaperSprite, BakedSourceUV) == 0x0048);
static_assert(offsetof(UPaperSprite, BakedSourceDimension) == 0x0050);
static_assert(offsetof(UPaperSprite, BakedSourceTexture) == 0x0058);
static_assert(offsetof(UPaperSprite, DefaultMaterial) == 0x0060);
static_assert(offsetof(UPaperSprite, AlternateMaterial) == 0x0068);
static_assert(offsetof(UPaperSprite, Sockets) == 0x0070);
static_assert(offsetof(UPaperSprite, SpriteCollisionDomain) == 0x0080);
static_assert(offsetof(UPaperSprite, BodySetup) == 0x0088);
static_assert(offsetof(UPaperSprite, BakedRenderData) == 0x0098);
static_assert(offsetof(APaperSpriteActor, RenderComponent) == 0x0220);
static_assert(offsetof(UPaperSpriteComponent, SourceSprite) == 0x0490);
static_assert(offsetof(UPaperSpriteComponent, MaterialOverride) == 0x0498);
static_assert(offsetof(UPaperSpriteComponent, SpriteColor) == 0x04A0);
static_assert(offsetof(APaperTerrainActor, DummyRoot) == 0x0220);
static_assert(offsetof(APaperTerrainActor, SplineComponent) == 0x0228);
static_assert(offsetof(APaperTerrainActor, RenderComponent) == 0x0230);
static_assert(offsetof(UPaperTerrainComponent, TerrainMaterial) == 0x0468);
static_assert(offsetof(UPaperTerrainComponent, AssociatedSpline) == 0x0478);
static_assert(offsetof(UPaperTerrainComponent, TerrainColor) == 0x0488);
static_assert(offsetof(UPaperTerrainComponent, SpriteCollisionDomain) == 0x049C);
static_assert(offsetof(UPaperTerrainComponent, CachedBodySetup) == 0x04A8);
static_assert(offsetof(FPaperTerrainMaterialRule, StartCap) == 0x0000);
static_assert(offsetof(FPaperTerrainMaterialRule, Body) == 0x0008);
static_assert(offsetof(FPaperTerrainMaterialRule, EndCap) == 0x0018);
static_assert(offsetof(UPaperTerrainMaterial, Rules) == 0x0030);
static_assert(offsetof(UPaperTerrainMaterial, InteriorFill) == 0x0040);
static_assert(offsetof(FPaperTileInfo, TileSet) == 0x0000);
static_assert(offsetof(UPaperTileLayer, LayerName) == 0x0028);
static_assert(offsetof(UPaperTileLayer, LayerColor) == 0x0054);
static_assert(offsetof(UPaperTileLayer, AllocatedCells) == 0x0070);
static_assert(offsetof(UPaperTileLayer, TileSet) == 0x0080);
static_assert(offsetof(UPaperTileLayer, AllocatedGrid) == 0x0088);
static_assert(offsetof(UPaperTileMap, SelectedTileSet) == 0x0048);
static_assert(offsetof(UPaperTileMap, Material) == 0x0070);
static_assert(offsetof(UPaperTileMap, TileLayers) == 0x0078);
static_assert(offsetof(UPaperTileMap, SpriteCollisionDomain) == 0x008C);
static_assert(offsetof(UPaperTileMap, ProjectionMode) == 0x008D);
static_assert(offsetof(UPaperTileMap, BodySetup) == 0x0098);
static_assert(offsetof(APaperTileMapActor, RenderComponent) == 0x0220);
static_assert(offsetof(UPaperTileMapComponent, DefaultLayerTileSet) == 0x04A0);
static_assert(offsetof(UPaperTileMapComponent, Material) == 0x04A8);
static_assert(offsetof(UPaperTileMapComponent, TileLayers) == 0x04B0);
static_assert(offsetof(UPaperTileMapComponent, TileMapColor) == 0x04C0);
static_assert(offsetof(UPaperTileMapComponent, TileMap) == 0x04D8);
static_assert(offsetof(FSpriteGeometryShape, ShapeType) == 0x0000);
static_assert(offsetof(FSpriteGeometryShape, Vertices) == 0x0008);
static_assert(offsetof(FSpriteGeometryShape, BoxSize) == 0x0018);
static_assert(offsetof(FSpriteGeometryShape, BoxPosition) == 0x0020);
static_assert(offsetof(FSpriteGeometryCollection, Shapes) == 0x0000);
static_assert(offsetof(FSpriteGeometryCollection, GeometryType) == 0x0010);
static_assert(offsetof(FPaperTileMetadata, UserDataName) == 0x0000);
static_assert(offsetof(FPaperTileMetadata, CollisionData) == 0x0008);
static_assert(offsetof(FPaperTileSetTerrain, TerrainName) == 0x0000);
static_assert(offsetof(UPaperTileSet, TileSize) == 0x0028);
static_assert(offsetof(UPaperTileSet, TileSheet) == 0x0030);
static_assert(offsetof(UPaperTileSet, AdditionalSourceTextures) == 0x0038);
static_assert(offsetof(UPaperTileSet, BorderMargin) == 0x0048);
static_assert(offsetof(UPaperTileSet, PerTileSpacing) == 0x0058);
static_assert(offsetof(UPaperTileSet, DrawingOffset) == 0x0060);
static_assert(offsetof(UPaperTileSet, PerTileData) == 0x0078);
static_assert(offsetof(UPaperTileSet, Terrains) == 0x0088);
static_assert(offsetof(FPaperSpriteAtlasSlot, SpriteRef) == 0x0000);
static_assert(offsetof(FSpriteDrawCallRecord, Destination) == 0x0000);
static_assert(offsetof(FSpriteDrawCallRecord, BaseTexture) == 0x0010);
static_assert(offsetof(FSpriteDrawCallRecord, Color) == 0x0048);


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

class AGeometryCacheActor;
class UGeometryCache;
class UGeometryCacheCodecBase;
class UGeometryCacheCodecRaw;
class UGeometryCacheCodecV1;
class UGeometryCacheComponent;
class UGeometryCacheTrack;
class UGeometryCacheTrackStreamable;
class UGeometryCacheTrack_FlipbookAnimation;
class UGeometryCacheTrack_TransformAnimation;
class UGeometryCacheTrack_TransformGroupAnimation;

#pragma pack(pop)


static_assert(sizeof(UGeometryCache) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(AGeometryCacheActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UGeometryCacheCodecBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UGeometryCacheCodecRaw) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UGeometryCacheCodecV1) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UGeometryCacheComponent) == 0x04F0); // 1264 bytes (0x000490 - 0x0004F0)
static_assert(sizeof(UGeometryCacheTrack) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UGeometryCacheTrack_FlipbookAnimation) == 0x0080); // 128 bytes (0x000058 - 0x000080)
static_assert(sizeof(UGeometryCacheTrackStreamable) == 0x00D0); // 208 bytes (0x000058 - 0x0000D0)
static_assert(sizeof(UGeometryCacheTrack_TransformAnimation) == 0x0100); // 256 bytes (0x000058 - 0x000100)
static_assert(sizeof(UGeometryCacheTrack_TransformGroupAnimation) == 0x0100); // 256 bytes (0x000058 - 0x000100)
static_assert(sizeof(FTrackRenderData) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FGeometryCacheMeshData) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FGeometryCacheVertexInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGeometryCacheMeshBatchInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(offsetof(UGeometryCache, Materials) == 0x0030);
static_assert(offsetof(UGeometryCache, Tracks) == 0x0040);
static_assert(offsetof(AGeometryCacheActor, GeometryCacheComponent) == 0x0220);
static_assert(offsetof(UGeometryCacheCodecBase, TopologyRanges) == 0x0028);
static_assert(offsetof(UGeometryCacheComponent, GeometryCache) == 0x0490);
static_assert(offsetof(UGeometryCacheTrackStreamable, Codec) == 0x0058);

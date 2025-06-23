
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

class UMovieSceneGeometryCollectionSection;
class UMovieSceneGeometryCollectionTrack;

#pragma pack(pop)


static_assert(sizeof(FMovieSceneGeometryCollectionParams) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UMovieSceneGeometryCollectionSection) == 0x0118); // 280 bytes (0x0000E8 - 0x000118)
static_assert(sizeof(UMovieSceneGeometryCollectionTrack) == 0x0090); // 144 bytes (0x000078 - 0x000090)
static_assert(sizeof(FMovieSceneGeometryCollectionSectionTemplateParameters) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FMovieSceneGeometryCollectionSectionTemplate) == 0x0058); // 88 bytes (0x000020 - 0x000058)
static_assert(offsetof(FMovieSceneGeometryCollectionParams, GeometryCollectionCache) == 0x0008);
static_assert(offsetof(FMovieSceneGeometryCollectionParams, StartFrameOffset) == 0x0020);
static_assert(offsetof(FMovieSceneGeometryCollectionParams, EndFrameOffset) == 0x0024);
static_assert(offsetof(UMovieSceneGeometryCollectionSection, Params) == 0x00E8);
static_assert(offsetof(UMovieSceneGeometryCollectionTrack, AnimationSections) == 0x0080);
static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplateParameters, SectionStartTime) == 0x0030);
static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplateParameters, SectionEndTime) == 0x0034);
static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplate, Params) == 0x0020);

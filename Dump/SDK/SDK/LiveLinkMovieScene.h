
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "LiveLinkInterface.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UMovieSceneLiveLinkSection;
class UMovieSceneLiveLinkSubSection;
class UMovieSceneLiveLinkSubSectionAnimation;
class UMovieSceneLiveLinkSubSectionBasicRole;
class UMovieSceneLiveLinkSubSectionProperties;
class UMovieSceneLiveLinkTrack;

#pragma pack(pop)


static_assert(sizeof(UMovieSceneLiveLinkSection) == 0x0228); // 552 bytes (0x0000E8 - 0x000228)
static_assert(sizeof(FLiveLinkPropertyData) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FLiveLinkSubSectionData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UMovieSceneLiveLinkSubSection) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UMovieSceneLiveLinkSubSectionAnimation) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UMovieSceneLiveLinkSubSectionBasicRole) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UMovieSceneLiveLinkSubSectionProperties) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UMovieSceneLiveLinkTrack) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(FMovieSceneLiveLinkSectionTemplate) == 0x00B8); // 184 bytes (0x000038 - 0x0000B8)
static_assert(offsetof(UMovieSceneLiveLinkSection, SubjectPreset) == 0x00E8);
static_assert(offsetof(UMovieSceneLiveLinkSection, ChannelMask) == 0x0120);
static_assert(offsetof(UMovieSceneLiveLinkSection, SubSections) == 0x0130);
static_assert(offsetof(UMovieSceneLiveLinkSection, SubjectName) == 0x0150);
static_assert(offsetof(UMovieSceneLiveLinkSection, TemplateToPush) == 0x0158);
static_assert(offsetof(UMovieSceneLiveLinkSection, RefSkeleton) == 0x01E8);
static_assert(offsetof(UMovieSceneLiveLinkSection, CurveNames) == 0x0208);
static_assert(offsetof(UMovieSceneLiveLinkSection, PropertyFloatChannels) == 0x0218);
static_assert(offsetof(FLiveLinkPropertyData, PropertyName) == 0x0000);
static_assert(offsetof(FLiveLinkPropertyData, FloatChannel) == 0x0008);
static_assert(offsetof(FLiveLinkPropertyData, StringChannel) == 0x0018);
static_assert(offsetof(FLiveLinkPropertyData, IntegerChannel) == 0x0028);
static_assert(offsetof(FLiveLinkPropertyData, BoolChannel) == 0x0038);
static_assert(offsetof(FLiveLinkPropertyData, ByteChannel) == 0x0048);
static_assert(offsetof(FLiveLinkSubSectionData, Properties) == 0x0000);
static_assert(offsetof(UMovieSceneLiveLinkSubSection, SubSectionData) == 0x0028);
static_assert(offsetof(UMovieSceneLiveLinkSubSection, SubjectRole) == 0x0038);
static_assert(offsetof(UMovieSceneLiveLinkTrack, TrackRole) == 0x00B0);
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, SubjectPreset) == 0x0038);
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, ChannelMask) == 0x0070);
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, SubSectionsData) == 0x0080);

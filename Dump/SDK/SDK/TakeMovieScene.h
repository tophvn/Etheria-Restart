
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UMovieSceneTakeSection;
class UMovieSceneTakeSettings;
class UMovieSceneTakeTrack;

#pragma pack(pop)


static_assert(sizeof(UMovieSceneTakeSection) == 0x0468); // 1128 bytes (0x0000E8 - 0x000468)
static_assert(sizeof(UMovieSceneTakeSettings) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UMovieSceneTakeTrack) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(offsetof(UMovieSceneTakeSection, HoursCurve) == 0x00E8);
static_assert(offsetof(UMovieSceneTakeSection, MinutesCurve) == 0x0178);
static_assert(offsetof(UMovieSceneTakeSection, SecondsCurve) == 0x0208);
static_assert(offsetof(UMovieSceneTakeSection, FramesCurve) == 0x0298);
static_assert(offsetof(UMovieSceneTakeSection, SubFramesCurve) == 0x0328);
static_assert(offsetof(UMovieSceneTakeSection, Slate) == 0x03C8);
static_assert(offsetof(UMovieSceneTakeSettings, HoursName) == 0x0028);
static_assert(offsetof(UMovieSceneTakeSettings, MinutesName) == 0x0038);
static_assert(offsetof(UMovieSceneTakeSettings, SecondsName) == 0x0048);
static_assert(offsetof(UMovieSceneTakeSettings, FramesName) == 0x0058);
static_assert(offsetof(UMovieSceneTakeSettings, SubFramesName) == 0x0068);
static_assert(offsetof(UMovieSceneTakeSettings, SlateName) == 0x0078);
static_assert(offsetof(UMovieSceneTakeTrack, Sections) == 0x0078);

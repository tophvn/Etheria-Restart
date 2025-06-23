
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "LipSyncRuntime.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UAnimBP_LipSync;
class UKV_LipSyncFilterBase;
class UKV_LipSyncPlayComponent;
class ULipSyncDownsampler;
class UMovieSceneLipSyncSection;
class UMovieSceneLipSyncTrack;

/// Enum /Script/KV_Lipsync.ELipSyncInterpType
/// Size: 0x01 (1 bytes)
enum class ELipSyncInterpType : uint8_t
{
	ELipSyncInterpType__Linear                                                       = 0
};

/// Enum /Script/KV_Lipsync.ELipSyncPlayState
/// Size: 0x01 (1 bytes)
enum class ELipSyncPlayState : uint8_t
{
	ELipSyncPlayState__LSP_Idle                                                      = 0,
	ELipSyncPlayState__LSP_Playing                                                   = 1,
	ELipSyncPlayState__LSP_Stopped                                                   = 2,
	ELipSyncPlayState__LSP_Remove                                                    = 3
};

#pragma pack(pop)


static_assert(sizeof(UAnimBP_LipSync) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKV_LipSyncFilterBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FLipSyncPlayState) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UKV_LipSyncPlayComponent) == 0x0230); // 560 bytes (0x0001F8 - 0x000230)
static_assert(sizeof(ULipSyncDownsampler) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FMovieSceneLipSyncParams) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(UMovieSceneLipSyncSection) == 0x0198); // 408 bytes (0x0000E8 - 0x000198)
static_assert(sizeof(UMovieSceneLipSyncTrack) == 0x0090); // 144 bytes (0x000078 - 0x000090)
static_assert(sizeof(FMovieSceneLipSyncSectionTemplateParameters) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(FMovieSceneLipSyncSectionTemplate) == 0x00D8); // 216 bytes (0x000020 - 0x0000D8)
static_assert(offsetof(FLipSyncPlayState, LipSyncSequence) == 0x0000);
static_assert(offsetof(FLipSyncPlayState, StateCode) == 0x0014);
static_assert(offsetof(FLipSyncPlayState, StateFilter) == 0x0018);
static_assert(offsetof(UKV_LipSyncPlayComponent, LipSyncPlayState) == 0x0208);
static_assert(offsetof(UKV_LipSyncPlayComponent, MeshComponent) == 0x0218);
static_assert(offsetof(UKV_LipSyncPlayComponent, CachedAnimInstance) == 0x0220);
static_assert(offsetof(ULipSyncDownsampler, InterpolateType) == 0x002C);
static_assert(offsetof(FMovieSceneLipSyncParams, LipSyncSequence) == 0x0000);
static_assert(offsetof(FMovieSceneLipSyncParams, LipSyncWeight) == 0x0010);
static_assert(offsetof(UMovieSceneLipSyncSection, Params) == 0x00E8);
static_assert(offsetof(UMovieSceneLipSyncTrack, Sections) == 0x0080);
static_assert(offsetof(FMovieSceneLipSyncSectionTemplateParameters, SectionStartTime) == 0x00B0);
static_assert(offsetof(FMovieSceneLipSyncSectionTemplateParameters, SectionEndTime) == 0x00B4);
static_assert(offsetof(FMovieSceneLipSyncSectionTemplate, Params) == 0x0020);

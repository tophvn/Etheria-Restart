
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UMoviePlayerSettings;

/// Enum /Script/MoviePlayer.EMoviePlaybackType
/// Size: 0x01 (1 bytes)
enum class EMoviePlaybackType : uint8_t
{
	MT_Normal                                                                        = 0,
	MT_Looped                                                                        = 1,
	MT_LoadingLoop                                                                   = 2
};

#pragma pack(pop)


static_assert(sizeof(UMoviePlayerSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(offsetof(UMoviePlayerSettings, StartupMovies) == 0x0030);

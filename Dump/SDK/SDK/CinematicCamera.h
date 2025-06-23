
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

class ACameraRig_Crane;
class ACameraRig_Rail;
class ACineCameraActor;
class UCineCameraComponent;

/// Enum /Script/CinematicCamera.ECameraFocusMethod
/// Size: 0x01 (1 bytes)
enum class ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__DoNotOverride                                                = 0,
	ECameraFocusMethod__Manual                                                       = 1,
	ECameraFocusMethod__Tracking                                                     = 2,
	ECameraFocusMethod__Disable                                                      = 3
};

#pragma pack(pop)


static_assert(sizeof(FCameraFilmbackSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FCameraLensSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCameraTrackingFocusSettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FCameraFocusSettings) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FNamedFilmbackPreset) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNamedLensPreset) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UCineCameraComponent) == 0x08D8); // 2264 bytes (0x0007E0 - 0x0008D8)
static_assert(sizeof(ACameraRig_Crane) == 0x0250); // 592 bytes (0x000220 - 0x000250)
static_assert(sizeof(ACameraRig_Rail) == 0x0240); // 576 bytes (0x000220 - 0x000240)
static_assert(sizeof(FCameraLookatTrackingSettings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(ACineCameraActor) == 0x0800); // 2048 bytes (0x0007A0 - 0x000800)
static_assert(offsetof(FCameraTrackingFocusSettings, ActorToTrack) == 0x0000);
static_assert(offsetof(FCameraTrackingFocusSettings, RelativeOffset) == 0x0028);
static_assert(offsetof(FCameraFocusSettings, FocusMethod) == 0x0000);
static_assert(offsetof(FCameraFocusSettings, TrackingFocusSettings) == 0x0008);
static_assert(offsetof(FCameraFocusSettings, DebugFocusPlaneColor) == 0x0044);
static_assert(offsetof(FNamedFilmbackPreset, Name) == 0x0000);
static_assert(offsetof(FNamedFilmbackPreset, FilmbackSettings) == 0x0010);
static_assert(offsetof(FNamedLensPreset, Name) == 0x0000);
static_assert(offsetof(FNamedLensPreset, LensSettings) == 0x0010);
static_assert(offsetof(UCineCameraComponent, FilmbackSettings) == 0x07E0);
static_assert(offsetof(UCineCameraComponent, Filmback) == 0x07EC);
static_assert(offsetof(UCineCameraComponent, LensSettings) == 0x07F8);
static_assert(offsetof(UCineCameraComponent, FocusSettings) == 0x0810);
static_assert(offsetof(UCineCameraComponent, FilmbackPresets) == 0x0880);
static_assert(offsetof(UCineCameraComponent, LensPresets) == 0x0890);
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPresetName) == 0x08A0);
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPreset) == 0x08B0);
static_assert(offsetof(UCineCameraComponent, DefaultLensPresetName) == 0x08C0);
static_assert(offsetof(ACameraRig_Crane, TransformComponent) == 0x0230);
static_assert(offsetof(ACameraRig_Crane, CraneYawControl) == 0x0238);
static_assert(offsetof(ACameraRig_Crane, CranePitchControl) == 0x0240);
static_assert(offsetof(ACameraRig_Crane, CraneCameraMount) == 0x0248);
static_assert(offsetof(ACameraRig_Rail, TransformComponent) == 0x0228);
static_assert(offsetof(ACameraRig_Rail, RailSplineComponent) == 0x0230);
static_assert(offsetof(ACameraRig_Rail, RailCameraMount) == 0x0238);
static_assert(offsetof(FCameraLookatTrackingSettings, ActorToTrack) == 0x0018);
static_assert(offsetof(FCameraLookatTrackingSettings, RelativeOffset) == 0x0040);
static_assert(offsetof(ACineCameraActor, LookatTrackingSettings) == 0x07A0);

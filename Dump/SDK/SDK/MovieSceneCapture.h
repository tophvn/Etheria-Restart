
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "ImageWriteQueue.h"

#pragma pack(push, 0x1)

class UCompositionGraphCaptureProtocol;
class UCompressedImageSequenceProtocol;
class UFrameGrabberProtocol;
class UImageSequenceProtocol;
class UImageSequenceProtocol_BMP;
class UImageSequenceProtocol_EXR;
class UImageSequenceProtocol_JPG;
class UImageSequenceProtocol_PNG;
class ULevelCapture;
class UMasterAudioSubmixCaptureProtocol;
class UMovieSceneAudioCaptureProtocolBase;
class UMovieSceneCapture;
class UMovieSceneCaptureEnvironment;
class UMovieSceneCaptureInterface;
class UMovieSceneCaptureProtocolBase;
class UMovieSceneImageCaptureProtocolBase;
class UNullAudioCaptureProtocol;
class UUserDefinedCaptureProtocol;
class UUserDefinedImageCaptureProtocol;
class UVideoCaptureProtocol;

/// Enum /Script/MovieSceneCapture.EHDRCaptureGamut
/// Size: 0x01 (1 bytes)
enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                                                                      = 0,
	HCGM_P3DCI                                                                       = 1,
	HCGM_Rec2020                                                                     = 2,
	HCGM_ACES                                                                        = 3,
	HCGM_ACEScg                                                                      = 4,
	HCGM_Linear                                                                      = 5
};

/// Enum /Script/MovieSceneCapture.EMovieSceneCaptureProtocolState
/// Size: 0x01 (1 bytes)
enum class EMovieSceneCaptureProtocolState : uint8_t
{
	EMovieSceneCaptureProtocolState__Idle                                            = 0,
	EMovieSceneCaptureProtocolState__Initialized                                     = 1,
	EMovieSceneCaptureProtocolState__Capturing                                       = 2,
	EMovieSceneCaptureProtocolState__Finalizing                                      = 3
};

#pragma pack(pop)


static_assert(sizeof(UMovieSceneCaptureProtocolBase) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UMovieSceneAudioCaptureProtocolBase) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UNullAudioCaptureProtocol) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UMasterAudioSubmixCaptureProtocol) == 0x0090); // 144 bytes (0x000058 - 0x000090)
static_assert(sizeof(UMovieSceneImageCaptureProtocolBase) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(FCompositionGraphCapturePasses) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UCompositionGraphCaptureProtocol) == 0x00C0); // 192 bytes (0x000058 - 0x0000C0)
static_assert(sizeof(UFrameGrabberProtocol) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(UImageSequenceProtocol) == 0x00D8); // 216 bytes (0x000068 - 0x0000D8)
static_assert(sizeof(UCompressedImageSequenceProtocol) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UImageSequenceProtocol_BMP) == 0x00D8); // 216 bytes (0x0000D8 - 0x0000D8)
static_assert(sizeof(UImageSequenceProtocol_PNG) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(UImageSequenceProtocol_JPG) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(UImageSequenceProtocol_EXR) == 0x00E8); // 232 bytes (0x0000D8 - 0x0000E8)
static_assert(sizeof(UMovieSceneCaptureInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FCaptureResolution) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMovieSceneCaptureSettings) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UMovieSceneCapture) == 0x0220); // 544 bytes (0x000028 - 0x000220)
static_assert(sizeof(ULevelCapture) == 0x0240); // 576 bytes (0x000220 - 0x000240)
static_assert(sizeof(UMovieSceneCaptureEnvironment) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUserDefinedCaptureProtocol) == 0x00D8); // 216 bytes (0x000058 - 0x0000D8)
static_assert(sizeof(UUserDefinedImageCaptureProtocol) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UVideoCaptureProtocol) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(FFrameMetrics) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCapturedPixels) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCapturedPixelsID) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(UMovieSceneCaptureProtocolBase, State) == 0x0050);
static_assert(offsetof(UMasterAudioSubmixCaptureProtocol, Filename) == 0x0058);
static_assert(offsetof(FCompositionGraphCapturePasses, Value) == 0x0000);
static_assert(offsetof(UCompositionGraphCaptureProtocol, IncludeRenderPasses) == 0x0058);
static_assert(offsetof(UCompositionGraphCaptureProtocol, CaptureGamut) == 0x0070);
static_assert(offsetof(UCompositionGraphCaptureProtocol, PostProcessingMaterial) == 0x0078);
static_assert(offsetof(UCompositionGraphCaptureProtocol, PostProcessingMaterialPtr) == 0x0098);
static_assert(offsetof(UImageSequenceProtocol_EXR, CaptureGamut) == 0x00D9);
static_assert(offsetof(FMovieSceneCaptureSettings, OutputDirectory) == 0x0000);
static_assert(offsetof(FMovieSceneCaptureSettings, GameModeOverride) == 0x0010);
static_assert(offsetof(FMovieSceneCaptureSettings, OutputFormat) == 0x0018);
static_assert(offsetof(FMovieSceneCaptureSettings, MovieExtension) == 0x0030);
static_assert(offsetof(FMovieSceneCaptureSettings, FrameRate) == 0x0044);
static_assert(offsetof(FMovieSceneCaptureSettings, CustomFrameRate) == 0x0050);
static_assert(offsetof(FMovieSceneCaptureSettings, Resolution) == 0x0058);
static_assert(offsetof(UMovieSceneCapture, ImageCaptureProtocolType) == 0x0038);
static_assert(offsetof(UMovieSceneCapture, AudioCaptureProtocolType) == 0x0050);
static_assert(offsetof(UMovieSceneCapture, ImageCaptureProtocol) == 0x0068);
static_assert(offsetof(UMovieSceneCapture, AudioCaptureProtocol) == 0x0070);
static_assert(offsetof(UMovieSceneCapture, Settings) == 0x0078);
static_assert(offsetof(UMovieSceneCapture, AdditionalCommandLineArguments) == 0x00F0);
static_assert(offsetof(UMovieSceneCapture, InheritedCommandLineArguments) == 0x0100);
static_assert(offsetof(ULevelCapture, PrerequisiteActorId) == 0x022C);
static_assert(offsetof(UUserDefinedCaptureProtocol, World) == 0x0058);
static_assert(offsetof(UUserDefinedImageCaptureProtocol, Format) == 0x00D8);
static_assert(offsetof(FCapturedPixelsID, Identifiers) == 0x0000);

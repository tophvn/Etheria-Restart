
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "LevelSequence.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "OpenColorIO.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class AMoviePipelineGameMode;
class UMoviePipeline;
class UMoviePipelineAntiAliasingSetting;
class UMoviePipelineBlueprintLibrary;
class UMoviePipelineCameraSetting;
class UMoviePipelineColorSetting;
class UMoviePipelineConfigBase;
class UMoviePipelineCustomTimeStep;
class UMoviePipelineExecutorBase;
class UMoviePipelineExecutorJob;
class UMoviePipelineExecutorShot;
class UMoviePipelineFCPXMLExporter;
class UMoviePipelineGameOverrideSetting;
class UMoviePipelineHighResSetting;
class UMoviePipelineInProcessExecutor;
class UMoviePipelineInProcessExecutorSettings;
class UMoviePipelineLinearExecutorBase;
class UMoviePipelineMasterConfig;
class UMoviePipelineOutputBase;
class UMoviePipelineOutputSetting;
class UMoviePipelinePythonHostExecutor;
class UMoviePipelineQueue;
class UMoviePipelineQueueEngineSubsystem;
class UMoviePipelineRenderPass;
class UMoviePipelineSetting;
class UMoviePipelineShotConfig;
class UMoviePipelineVideoOutputBase;
class UMovieRenderDebugWidget;

/// Enum /Script/MovieRenderPipelineCore.FCPXMLExportDataSource
/// Size: 0x01 (1 bytes)
enum class FCPXMLExportDataSource : uint8_t
{
	FCPXMLExportDataSource__OutputMetadata                                           = 0,
	FCPXMLExportDataSource__SequenceData                                             = 1
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineTextureStreamingMethod
/// Size: 0x01 (1 bytes)
enum class EMoviePipelineTextureStreamingMethod : uint8_t
{
	EMoviePipelineTextureStreamingMethod__None                                       = 0,
	EMoviePipelineTextureStreamingMethod__Disabled                                   = 1,
	EMoviePipelineTextureStreamingMethod__FullyLoad                                  = 2
};

/// Enum /Script/MovieRenderPipelineCore.EMoviePipelineShutterTiming
/// Size: 0x01 (1 bytes)
enum class EMoviePipelineShutterTiming : uint8_t
{
	EMoviePipelineShutterTiming__FrameOpen                                           = 0,
	EMoviePipelineShutterTiming__FrameCenter                                         = 1,
	EMoviePipelineShutterTiming__FrameClose                                          = 2
};

/// Enum /Script/MovieRenderPipelineCore.EMovieRenderShotState
/// Size: 0x01 (1 bytes)
enum class EMovieRenderShotState : uint8_t
{
	EMovieRenderShotState__Uninitialized                                             = 0,
	EMovieRenderShotState__WarmingUp                                                 = 1,
	EMovieRenderShotState__MotionBlur                                                = 2,
	EMovieRenderShotState__Rendering                                                 = 3,
	EMovieRenderShotState__Finished                                                  = 4
};

/// Enum /Script/MovieRenderPipelineCore.EMovieRenderPipelineState
/// Size: 0x01 (1 bytes)
enum class EMovieRenderPipelineState : uint8_t
{
	EMovieRenderPipelineState__Uninitialized                                         = 0,
	EMovieRenderPipelineState__ProducingFrames                                       = 1,
	EMovieRenderPipelineState__Finalize                                              = 2,
	EMovieRenderPipelineState__Export                                                = 3,
	EMovieRenderPipelineState__Finished                                              = 4
};

#pragma pack(pop)


static_assert(sizeof(UMoviePipeline) == 0x0298); // 664 bytes (0x000028 - 0x000298)
static_assert(sizeof(UMoviePipelineCustomTimeStep) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMoviePipelineSetting) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UMoviePipelineAntiAliasingSetting) == 0x0068); // 104 bytes (0x000048 - 0x000068)
static_assert(sizeof(UMoviePipelineBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMoviePipelineCameraSetting) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(UMoviePipelineColorSetting) == 0x00B0); // 176 bytes (0x000048 - 0x0000B0)
static_assert(sizeof(UMoviePipelineConfigBase) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UMoviePipelineExecutorBase) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(sizeof(UMoviePipelineOutputBase) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UMoviePipelineFCPXMLExporter) == 0x0080); // 128 bytes (0x000048 - 0x000080)
static_assert(sizeof(AMoviePipelineGameMode) == 0x02C0); // 704 bytes (0x0002C0 - 0x0002C0)
static_assert(sizeof(UMoviePipelineGameOverrideSetting) == 0x0100); // 256 bytes (0x000048 - 0x000100)
static_assert(sizeof(UMoviePipelineHighResSetting) == 0x0068); // 104 bytes (0x000048 - 0x000068)
static_assert(sizeof(UMoviePipelineLinearExecutorBase) == 0x0130); // 304 bytes (0x000108 - 0x000130)
static_assert(sizeof(UMoviePipelineInProcessExecutor) == 0x0168); // 360 bytes (0x000130 - 0x000168)
static_assert(sizeof(UMoviePipelineInProcessExecutorSettings) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UMoviePipelineMasterConfig) == 0x00B8); // 184 bytes (0x000050 - 0x0000B8)
static_assert(sizeof(UMoviePipelineOutputSetting) == 0x00A8); // 168 bytes (0x000048 - 0x0000A8)
static_assert(sizeof(UMoviePipelinePythonHostExecutor) == 0x0120); // 288 bytes (0x000108 - 0x000120)
static_assert(sizeof(UMoviePipelineExecutorShot) == 0x0180); // 384 bytes (0x000028 - 0x000180)
static_assert(sizeof(UMoviePipelineExecutorJob) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(UMoviePipelineQueue) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMoviePipelineQueueEngineSubsystem) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UMoviePipelineRenderPass) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UMoviePipelineShotConfig) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UMoviePipelineVideoOutputBase) == 0x0088); // 136 bytes (0x000048 - 0x000088)
static_assert(sizeof(UMovieRenderDebugWidget) == 0x0280); // 640 bytes (0x000280 - 0x000280)
static_assert(sizeof(FMoviePipelineCameraCutInfo) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FMoviePipelineSegmentWorkMetrics) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(UMoviePipeline, CustomTimeStep) == 0x0038);
static_assert(offsetof(UMoviePipeline, CachedPrevCustomTimeStep) == 0x0050);
static_assert(offsetof(UMoviePipeline, TargetSequence) == 0x0058);
static_assert(offsetof(UMoviePipeline, LevelSequenceActor) == 0x0060);
static_assert(offsetof(UMoviePipeline, DebugWidget) == 0x0068);
static_assert(offsetof(UMoviePipeline, PreviewTexture) == 0x0070);
static_assert(offsetof(UMoviePipeline, DebugWidgetClass) == 0x0250);
static_assert(offsetof(UMoviePipeline, CurrentJob) == 0x0258);
static_assert(offsetof(UMoviePipelineSetting, CachedPipeline) == 0x0028);
static_assert(offsetof(UMoviePipelineAntiAliasingSetting, AntiAliasingMethod) == 0x0051);
static_assert(offsetof(UMoviePipelineCameraSetting, ShutterTiming) == 0x0048);
static_assert(offsetof(UMoviePipelineColorSetting, OCIOConfiguration) == 0x0048);
static_assert(offsetof(UMoviePipelineConfigBase, DisplayName) == 0x0028);
static_assert(offsetof(UMoviePipelineConfigBase, Settings) == 0x0038);
static_assert(offsetof(UMoviePipelineExecutorBase, DebugWidgetClass) == 0x00A0);
static_assert(offsetof(UMoviePipelineExecutorBase, UserData) == 0x00A8);
static_assert(offsetof(UMoviePipelineExecutorBase, TargetPipelineClass) == 0x00B8);
static_assert(offsetof(UMoviePipelineFCPXMLExporter, FileNameFormat) == 0x0050);
static_assert(offsetof(UMoviePipelineFCPXMLExporter, DataSource) == 0x0060);
static_assert(offsetof(UMoviePipelineGameOverrideSetting, GameModeOverride) == 0x0048);
static_assert(offsetof(UMoviePipelineGameOverrideSetting, TextureStreaming) == 0x0051);
static_assert(offsetof(UMoviePipelineLinearExecutorBase, Queue) == 0x0108);
static_assert(offsetof(UMoviePipelineLinearExecutorBase, ActiveMoviePipeline) == 0x0110);
static_assert(offsetof(UMoviePipelineInProcessExecutorSettings, AdditionalCommandLineArguments) == 0x0040);
static_assert(offsetof(UMoviePipelineInProcessExecutorSettings, InheritedCommandLineArguments) == 0x0050);
static_assert(offsetof(UMoviePipelineMasterConfig, PerShotConfigMapping) == 0x0050);
static_assert(offsetof(UMoviePipelineMasterConfig, OutputSetting) == 0x00A0);
static_assert(offsetof(UMoviePipelineMasterConfig, TransientSettings) == 0x00A8);
static_assert(offsetof(UMoviePipelineOutputSetting, OutputDirectory) == 0x0048);
static_assert(offsetof(UMoviePipelineOutputSetting, FileNameFormat) == 0x0058);
static_assert(offsetof(UMoviePipelineOutputSetting, OutputResolution) == 0x0068);
static_assert(offsetof(UMoviePipelineOutputSetting, OutputFrameRate) == 0x0074);
static_assert(offsetof(UMoviePipelinePythonHostExecutor, ExecutorClass) == 0x0108);
static_assert(offsetof(UMoviePipelinePythonHostExecutor, PipelineQueue) == 0x0110);
static_assert(offsetof(UMoviePipelinePythonHostExecutor, LastLoadedWorld) == 0x0118);
static_assert(offsetof(UMoviePipelineExecutorShot, InnerPathKey) == 0x0030);
static_assert(offsetof(UMoviePipelineExecutorShot, OuterPathKey) == 0x0048);
static_assert(offsetof(UMoviePipelineExecutorShot, OuterName) == 0x0060);
static_assert(offsetof(UMoviePipelineExecutorShot, InnerName) == 0x0070);
static_assert(offsetof(UMoviePipelineExecutorShot, StatusMessage) == 0x0140);
static_assert(offsetof(UMoviePipelineExecutorShot, ShotOverrideConfig) == 0x0150);
static_assert(offsetof(UMoviePipelineExecutorShot, ShotOverridePresetOrigin) == 0x0158);
static_assert(offsetof(UMoviePipelineExecutorJob, JobName) == 0x0028);
static_assert(offsetof(UMoviePipelineExecutorJob, Sequence) == 0x0038);
static_assert(offsetof(UMoviePipelineExecutorJob, Map) == 0x0050);
static_assert(offsetof(UMoviePipelineExecutorJob, Author) == 0x0068);
static_assert(offsetof(UMoviePipelineExecutorJob, ShotInfo) == 0x0078);
static_assert(offsetof(UMoviePipelineExecutorJob, UserData) == 0x0088);
static_assert(offsetof(UMoviePipelineExecutorJob, StatusMessage) == 0x0098);
static_assert(offsetof(UMoviePipelineExecutorJob, Configuration) == 0x00B0);
static_assert(offsetof(UMoviePipelineExecutorJob, PresetOrigin) == 0x00B8);
static_assert(offsetof(UMoviePipelineQueue, Jobs) == 0x0028);
static_assert(offsetof(UMoviePipelineQueueEngineSubsystem, ActiveExecutor) == 0x0030);
static_assert(offsetof(UMoviePipelineQueueEngineSubsystem, CurrentQueue) == 0x0038);
static_assert(offsetof(FMoviePipelineSegmentWorkMetrics, SegmentName) == 0x0000);

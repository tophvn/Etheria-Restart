
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "ActorLayerUtilities.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "MovieRenderPipelineCore.h"

#pragma pack(push, 0x1)

class UMoviePipelineDeferredPassBase;
class UMoviePipelineDeferredPass_DetailLighting;
class UMoviePipelineDeferredPass_LightingOnly;
class UMoviePipelineDeferredPass_PathTracer;
class UMoviePipelineDeferredPass_ReflectionsOnly;
class UMoviePipelineDeferredPass_Unlit;
class UMoviePipelineImagePassBase;
class UMoviePipelineImageSequenceOutputBase;
class UMoviePipelineImageSequenceOutput_BMP;
class UMoviePipelineImageSequenceOutput_EXR;
class UMoviePipelineImageSequenceOutput_JPG;
class UMoviePipelineImageSequenceOutput_PNG;
class UMoviePipelineWaveOutput;

/// Enum /Script/MovieRenderPipelineRenderPasses.EEXRCompressionFormat
/// Size: 0x01 (1 bytes)
enum class EEXRCompressionFormat : uint8_t
{
	EEXRCompressionFormat__None                                                      = 0,
	EEXRCompressionFormat__PIZ                                                       = 1,
	EEXRCompressionFormat__ZIP                                                       = 2
};

#pragma pack(pop)


static_assert(sizeof(UMoviePipelineImagePassBase) == 0x00C8); // 200 bytes (0x000048 - 0x0000C8)
static_assert(sizeof(FMoviePipelinePostProcessPass) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UMoviePipelineDeferredPassBase) == 0x0160); // 352 bytes (0x0000C8 - 0x000160)
static_assert(sizeof(UMoviePipelineDeferredPass_Unlit) == 0x0160); // 352 bytes (0x000160 - 0x000160)
static_assert(sizeof(UMoviePipelineDeferredPass_DetailLighting) == 0x0160); // 352 bytes (0x000160 - 0x000160)
static_assert(sizeof(UMoviePipelineDeferredPass_LightingOnly) == 0x0160); // 352 bytes (0x000160 - 0x000160)
static_assert(sizeof(UMoviePipelineDeferredPass_ReflectionsOnly) == 0x0160); // 352 bytes (0x000160 - 0x000160)
static_assert(sizeof(UMoviePipelineDeferredPass_PathTracer) == 0x0160); // 352 bytes (0x000160 - 0x000160)
static_assert(sizeof(UMoviePipelineImageSequenceOutputBase) == 0x0068); // 104 bytes (0x000048 - 0x000068)
static_assert(sizeof(UMoviePipelineImageSequenceOutput_EXR) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UMoviePipelineImageSequenceOutput_BMP) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UMoviePipelineImageSequenceOutput_PNG) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UMoviePipelineImageSequenceOutput_JPG) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UMoviePipelineWaveOutput) == 0x0070); // 112 bytes (0x000048 - 0x000070)
static_assert(offsetof(FMoviePipelinePostProcessPass, Material) == 0x0008);
static_assert(offsetof(UMoviePipelineDeferredPassBase, AdditionalPostProcessMaterials) == 0x00D0);
static_assert(offsetof(UMoviePipelineDeferredPassBase, StencilLayers) == 0x00E8);
static_assert(offsetof(UMoviePipelineDeferredPassBase, ActivePostProcessMaterials) == 0x00F8);
static_assert(offsetof(UMoviePipelineDeferredPassBase, StencilLayerMaterial) == 0x0108);
static_assert(offsetof(UMoviePipelineDeferredPassBase, TileRenderTargets) == 0x0110);
static_assert(offsetof(UMoviePipelineImageSequenceOutput_EXR, Compression) == 0x0068);
static_assert(offsetof(UMoviePipelineWaveOutput, FileNameFormat) == 0x0048);

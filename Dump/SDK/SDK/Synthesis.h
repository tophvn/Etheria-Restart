
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "AudioExtensions.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "SlateCore.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UAudioImpulseResponse;
class UEnvelopeFollowerListener;
class UGranularSynth;
class UModularSynthComponent;
class UModularSynthLibrary;
class UModularSynthPresetBank;
class UMonoWaveTableSynthPreset;
class USourceEffectBitCrusherPreset;
class USourceEffectChorusPreset;
class USourceEffectDynamicsProcessorPreset;
class USourceEffectEQPreset;
class USourceEffectEnvelopeFollowerPreset;
class USourceEffectFilterPreset;
class USourceEffectFoldbackDistortionPreset;
class USourceEffectMidSideSpreaderPreset;
class USourceEffectPannerPreset;
class USourceEffectPhaserPreset;
class USourceEffectRingModulationPreset;
class USourceEffectSimpleDelayPreset;
class USourceEffectStereoDelayPreset;
class USourceEffectWaveShaperPreset;
class USubmixEffectConvolutionReverbPreset;
class USubmixEffectDelayPreset;
class USubmixEffectFilterPreset;
class USubmixEffectFlexiverbPreset;
class USubmixEffectMultibandCompressorPreset;
class USubmixEffectStereoDelayPreset;
class USubmixEffectTapDelayPreset;
class USynth2DSlider;
class USynthComponentMonoWaveTable;
class USynthComponentToneGenerator;
class USynthKnob;
class USynthSamplePlayer;
class USynthesisUtilitiesBlueprintFunctionLibrary;

/// Enum /Script/Synthesis.ESynth1PatchDestination
/// Size: 0x01 (1 bytes)
enum class ESynth1PatchDestination : uint8_t
{
	ESynth1PatchDestination__Osc1Gain                                                = 0,
	ESynth1PatchDestination__Osc1Frequency                                           = 1,
	ESynth1PatchDestination__Osc1Pulsewidth                                          = 2,
	ESynth1PatchDestination__Osc2Gain                                                = 3,
	ESynth1PatchDestination__Osc2Frequency                                           = 4,
	ESynth1PatchDestination__Osc2Pulsewidth                                          = 5,
	ESynth1PatchDestination__FilterFrequency                                         = 6,
	ESynth1PatchDestination__FilterQ                                                 = 7,
	ESynth1PatchDestination__Gain                                                    = 8,
	ESynth1PatchDestination__Pan                                                     = 9,
	ESynth1PatchDestination__LFO1Frequency                                           = 10,
	ESynth1PatchDestination__LFO1Gain                                                = 11,
	ESynth1PatchDestination__LFO2Frequency                                           = 12,
	ESynth1PatchDestination__LFO2Gain                                                = 13,
	ESynth1PatchDestination__Count                                                   = 14
};

/// Enum /Script/Synthesis.ESynth1PatchSource
/// Size: 0x01 (1 bytes)
enum class ESynth1PatchSource : uint8_t
{
	ESynth1PatchSource__LFO1                                                         = 0,
	ESynth1PatchSource__LFO2                                                         = 1,
	ESynth1PatchSource__Envelope                                                     = 2,
	ESynth1PatchSource__BiasEnvelope                                                 = 3,
	ESynth1PatchSource__Count                                                        = 4
};

/// Enum /Script/Synthesis.ESynthStereoDelayMode
/// Size: 0x01 (1 bytes)
enum class ESynthStereoDelayMode : uint8_t
{
	ESynthStereoDelayMode__Normal                                                    = 0,
	ESynthStereoDelayMode__Cross                                                     = 1,
	ESynthStereoDelayMode__PingPong                                                  = 2,
	ESynthStereoDelayMode__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynthFilterAlgorithm
/// Size: 0x01 (1 bytes)
enum class ESynthFilterAlgorithm : uint8_t
{
	ESynthFilterAlgorithm__OnePole                                                   = 0,
	ESynthFilterAlgorithm__StateVariable                                             = 1,
	ESynthFilterAlgorithm__Ladder                                                    = 2,
	ESynthFilterAlgorithm__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynthFilterType
/// Size: 0x01 (1 bytes)
enum class ESynthFilterType : uint8_t
{
	ESynthFilterType__LowPass                                                        = 0,
	ESynthFilterType__HighPass                                                       = 1,
	ESynthFilterType__BandPass                                                       = 2,
	ESynthFilterType__BandStop                                                       = 3,
	ESynthFilterType__Count                                                          = 4
};

/// Enum /Script/Synthesis.ESynthModEnvBiasPatch
/// Size: 0x01 (1 bytes)
enum class ESynthModEnvBiasPatch : uint8_t
{
	ESynthModEnvBiasPatch__PatchToNone                                               = 0,
	ESynthModEnvBiasPatch__PatchToOscFreq                                            = 1,
	ESynthModEnvBiasPatch__PatchToFilterFreq                                         = 2,
	ESynthModEnvBiasPatch__PatchToFilterQ                                            = 3,
	ESynthModEnvBiasPatch__PatchToLFO1Gain                                           = 4,
	ESynthModEnvBiasPatch__PatchToLFO2Gain                                           = 5,
	ESynthModEnvBiasPatch__PatchToLFO1Freq                                           = 6,
	ESynthModEnvBiasPatch__PatchToLFO2Freq                                           = 7,
	ESynthModEnvBiasPatch__Count                                                     = 8
};

/// Enum /Script/Synthesis.ESynthModEnvPatch
/// Size: 0x01 (1 bytes)
enum class ESynthModEnvPatch : uint8_t
{
	ESynthModEnvPatch__PatchToNone                                                   = 0,
	ESynthModEnvPatch__PatchToOscFreq                                                = 1,
	ESynthModEnvPatch__PatchToFilterFreq                                             = 2,
	ESynthModEnvPatch__PatchToFilterQ                                                = 3,
	ESynthModEnvPatch__PatchToLFO1Gain                                               = 4,
	ESynthModEnvPatch__PatchToLFO2Gain                                               = 5,
	ESynthModEnvPatch__PatchToLFO1Freq                                               = 6,
	ESynthModEnvPatch__PatchToLFO2Freq                                               = 7,
	ESynthModEnvPatch__Count                                                         = 8
};

/// Enum /Script/Synthesis.ESynthLFOPatchType
/// Size: 0x01 (1 bytes)
enum class ESynthLFOPatchType : uint8_t
{
	ESynthLFOPatchType__PatchToNone                                                  = 0,
	ESynthLFOPatchType__PatchToGain                                                  = 1,
	ESynthLFOPatchType__PatchToOscFreq                                               = 2,
	ESynthLFOPatchType__PatchToFilterFreq                                            = 3,
	ESynthLFOPatchType__PatchToFilterQ                                               = 4,
	ESynthLFOPatchType__PatchToOscPulseWidth                                         = 5,
	ESynthLFOPatchType__PatchToOscPan                                                = 6,
	ESynthLFOPatchType__PatchLFO1ToLFO2Frequency                                     = 7,
	ESynthLFOPatchType__PatchLFO1ToLFO2Gain                                          = 8,
	ESynthLFOPatchType__Count                                                        = 9
};

/// Enum /Script/Synthesis.ESynthLFOMode
/// Size: 0x01 (1 bytes)
enum class ESynthLFOMode : uint8_t
{
	ESynthLFOMode__Sync                                                              = 0,
	ESynthLFOMode__OneShot                                                           = 1,
	ESynthLFOMode__Free                                                              = 2,
	ESynthLFOMode__Count                                                             = 3
};

/// Enum /Script/Synthesis.ESynthLFOType
/// Size: 0x01 (1 bytes)
enum class ESynthLFOType : uint8_t
{
	ESynthLFOType__Sine                                                              = 0,
	ESynthLFOType__UpSaw                                                             = 1,
	ESynthLFOType__DownSaw                                                           = 2,
	ESynthLFOType__Square                                                            = 3,
	ESynthLFOType__Triangle                                                          = 4,
	ESynthLFOType__Exponential                                                       = 5,
	ESynthLFOType__RandomSampleHold                                                  = 6,
	ESynthLFOType__Count                                                             = 7
};

/// Enum /Script/Synthesis.ESynth1OscType
/// Size: 0x01 (1 bytes)
enum class ESynth1OscType : uint8_t
{
	ESynth1OscType__Sine                                                             = 0,
	ESynth1OscType__Saw                                                              = 1,
	ESynth1OscType__Triangle                                                         = 2,
	ESynth1OscType__Square                                                           = 3,
	ESynth1OscType__Noise                                                            = 4,
	ESynth1OscType__Count                                                            = 5
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsPeakMode
/// Size: 0x01 (1 bytes)
enum class ESourceEffectDynamicsPeakMode : uint8_t
{
	ESourceEffectDynamicsPeakMode__MeanSquared                                       = 0,
	ESourceEffectDynamicsPeakMode__RootMeanSquared                                   = 1,
	ESourceEffectDynamicsPeakMode__Peak                                              = 2,
	ESourceEffectDynamicsPeakMode__Count                                             = 3
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsProcessorType
/// Size: 0x01 (1 bytes)
enum class ESourceEffectDynamicsProcessorType : uint8_t
{
	ESourceEffectDynamicsProcessorType__Compressor                                   = 0,
	ESourceEffectDynamicsProcessorType__Limiter                                      = 1,
	ESourceEffectDynamicsProcessorType__Expander                                     = 2,
	ESourceEffectDynamicsProcessorType__Gate                                         = 3,
	ESourceEffectDynamicsProcessorType__Count                                        = 4
};

/// Enum /Script/Synthesis.EEnvelopeFollowerPeakMode
/// Size: 0x01 (1 bytes)
enum class EEnvelopeFollowerPeakMode : uint8_t
{
	EEnvelopeFollowerPeakMode__MeanSquared                                           = 0,
	EEnvelopeFollowerPeakMode__RootMeanSquared                                       = 1,
	EEnvelopeFollowerPeakMode__Peak                                                  = 2,
	EEnvelopeFollowerPeakMode__Count                                                 = 3
};

/// Enum /Script/Synthesis.ESourceEffectFilterParam
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterParam : uint8_t
{
	ESourceEffectFilterParam__FilterFrequency                                        = 0,
	ESourceEffectFilterParam__FilterResonance                                        = 1,
	ESourceEffectFilterParam__Count                                                  = 2
};

/// Enum /Script/Synthesis.ESourceEffectFilterType
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterType : uint8_t
{
	ESourceEffectFilterType__LowPass                                                 = 0,
	ESourceEffectFilterType__HighPass                                                = 1,
	ESourceEffectFilterType__BandPass                                                = 2,
	ESourceEffectFilterType__BandStop                                                = 3,
	ESourceEffectFilterType__Count                                                   = 4
};

/// Enum /Script/Synthesis.ESourceEffectFilterCircuit
/// Size: 0x01 (1 bytes)
enum class ESourceEffectFilterCircuit : uint8_t
{
	ESourceEffectFilterCircuit__OnePole                                              = 0,
	ESourceEffectFilterCircuit__StateVariable                                        = 1,
	ESourceEffectFilterCircuit__Ladder                                               = 2,
	ESourceEffectFilterCircuit__Count                                                = 3
};

/// Enum /Script/Synthesis.EStereoChannelMode
/// Size: 0x01 (1 bytes)
enum class EStereoChannelMode : uint8_t
{
	EStereoChannelMode__MidSide                                                      = 0,
	EStereoChannelMode__LeftRight                                                    = 1,
	EStereoChannelMode__count                                                        = 2
};

/// Enum /Script/Synthesis.EPhaserLFOType
/// Size: 0x01 (1 bytes)
enum class EPhaserLFOType : uint8_t
{
	EPhaserLFOType__Sine                                                             = 0,
	EPhaserLFOType__UpSaw                                                            = 1,
	EPhaserLFOType__DownSaw                                                          = 2,
	EPhaserLFOType__Square                                                           = 3,
	EPhaserLFOType__Triangle                                                         = 4,
	EPhaserLFOType__Exponential                                                      = 5,
	EPhaserLFOType__RandomSampleHold                                                 = 6,
	EPhaserLFOType__Count                                                            = 7
};

/// Enum /Script/Synthesis.ERingModulatorTypeSourceEffect
/// Size: 0x01 (1 bytes)
enum class ERingModulatorTypeSourceEffect : uint8_t
{
	ERingModulatorTypeSourceEffect__Sine                                             = 0,
	ERingModulatorTypeSourceEffect__Saw                                              = 1,
	ERingModulatorTypeSourceEffect__Triangle                                         = 2,
	ERingModulatorTypeSourceEffect__Square                                           = 3,
	ERingModulatorTypeSourceEffect__Count                                            = 4
};

/// Enum /Script/Synthesis.EStereoDelayFiltertype
/// Size: 0x01 (1 bytes)
enum class EStereoDelayFiltertype : uint8_t
{
	EStereoDelayFiltertype__Lowpass                                                  = 0,
	EStereoDelayFiltertype__Highpass                                                 = 1,
	EStereoDelayFiltertype__Bandpass                                                 = 2,
	EStereoDelayFiltertype__Notch                                                    = 3,
	EStereoDelayFiltertype__Count                                                    = 4
};

/// Enum /Script/Synthesis.EStereoDelaySourceEffect
/// Size: 0x01 (1 bytes)
enum class EStereoDelaySourceEffect : uint8_t
{
	EStereoDelaySourceEffect__Normal                                                 = 0,
	EStereoDelaySourceEffect__Cross                                                  = 1,
	EStereoDelaySourceEffect__PingPong                                               = 2,
	EStereoDelaySourceEffect__Count                                                  = 3
};

/// Enum /Script/Synthesis.ESubmixEffectConvolutionReverbBlockSize
/// Size: 0x01 (1 bytes)
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	ESubmixEffectConvolutionReverbBlockSize__BlockSize256                            = 0,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize512                            = 1,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize1024                           = 2
};

/// Enum /Script/Synthesis.ESubmixFilterAlgorithm
/// Size: 0x01 (1 bytes)
enum class ESubmixFilterAlgorithm : uint8_t
{
	ESubmixFilterAlgorithm__OnePole                                                  = 0,
	ESubmixFilterAlgorithm__StateVariable                                            = 1,
	ESubmixFilterAlgorithm__Ladder                                                   = 2,
	ESubmixFilterAlgorithm__Count                                                    = 3
};

/// Enum /Script/Synthesis.ESubmixFilterType
/// Size: 0x01 (1 bytes)
enum class ESubmixFilterType : uint8_t
{
	ESubmixFilterType__LowPass                                                       = 0,
	ESubmixFilterType__HighPass                                                      = 1,
	ESubmixFilterType__BandPass                                                      = 2,
	ESubmixFilterType__BandStop                                                      = 3,
	ESubmixFilterType__Count                                                         = 4
};

/// Enum /Script/Synthesis.ETapLineMode
/// Size: 0x01 (1 bytes)
enum class ETapLineMode : uint8_t
{
	ETapLineMode__SendToChannel                                                      = 0,
	ETapLineMode__Panning                                                            = 1,
	ETapLineMode__Disabled                                                           = 2
};

/// Enum /Script/Synthesis.EGranularSynthSeekType
/// Size: 0x01 (1 bytes)
enum class EGranularSynthSeekType : uint8_t
{
	EGranularSynthSeekType__FromBeginning                                            = 0,
	EGranularSynthSeekType__FromCurrentPosition                                      = 1,
	EGranularSynthSeekType__Count                                                    = 2
};

/// Enum /Script/Synthesis.EGranularSynthEnvelopeType
/// Size: 0x01 (1 bytes)
enum class EGranularSynthEnvelopeType : uint8_t
{
	EGranularSynthEnvelopeType__Rectangular                                          = 0,
	EGranularSynthEnvelopeType__Triangle                                             = 1,
	EGranularSynthEnvelopeType__DownwardTriangle                                     = 2,
	EGranularSynthEnvelopeType__UpwardTriangle                                       = 3,
	EGranularSynthEnvelopeType__ExponentialDecay                                     = 4,
	EGranularSynthEnvelopeType__ExponentialIncrease                                  = 5,
	EGranularSynthEnvelopeType__Gaussian                                             = 6,
	EGranularSynthEnvelopeType__Hanning                                              = 7,
	EGranularSynthEnvelopeType__Lanczos                                              = 8,
	EGranularSynthEnvelopeType__Cosine                                               = 9,
	EGranularSynthEnvelopeType__CosineSquared                                        = 10,
	EGranularSynthEnvelopeType__Welch                                                = 11,
	EGranularSynthEnvelopeType__Blackman                                             = 12,
	EGranularSynthEnvelopeType__BlackmanHarris                                       = 13,
	EGranularSynthEnvelopeType__Count                                                = 14
};

/// Enum /Script/Synthesis.CurveInterpolationType
/// Size: 0x01 (1 bytes)
enum class CurveInterpolationType : uint8_t
{
	CurveInterpolationType__AUTOINTERP                                               = 0,
	CurveInterpolationType__LINEAR                                                   = 1,
	CurveInterpolationType__CONSTANT                                                 = 2
};

/// Enum /Script/Synthesis.ESamplePlayerSeekType
/// Size: 0x01 (1 bytes)
enum class ESamplePlayerSeekType : uint8_t
{
	ESamplePlayerSeekType__FromBeginning                                             = 0,
	ESamplePlayerSeekType__FromCurrentPosition                                       = 1,
	ESamplePlayerSeekType__FromEnd                                                   = 2,
	ESamplePlayerSeekType__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynthKnobSize
/// Size: 0x01 (1 bytes)
enum class ESynthKnobSize : uint8_t
{
	ESynthKnobSize__Medium                                                           = 0,
	ESynthKnobSize__Large                                                            = 1,
	ESynthKnobSize__Count                                                            = 2
};

/// Enum /Script/Synthesis.ESynthSlateColorStyle
/// Size: 0x01 (1 bytes)
enum class ESynthSlateColorStyle : uint8_t
{
	ESynthSlateColorStyle__Light                                                     = 0,
	ESynthSlateColorStyle__Dark                                                      = 1,
	ESynthSlateColorStyle__Count                                                     = 2
};

/// Enum /Script/Synthesis.ESynthSlateSizeType
/// Size: 0x01 (1 bytes)
enum class ESynthSlateSizeType : uint8_t
{
	ESynthSlateSizeType__Small                                                       = 0,
	ESynthSlateSizeType__Medium                                                      = 1,
	ESynthSlateSizeType__Large                                                       = 2,
	ESynthSlateSizeType__Count                                                       = 3
};

#pragma pack(pop)


static_assert(sizeof(FSynth1PatchCable) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FEpicSynth1Patch) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FModularSynthPreset) == 0x00E0); // 224 bytes (0x000008 - 0x0000E0)
static_assert(sizeof(FModularSynthPresetBankEntry) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(UModularSynthPresetBank) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UModularSynthLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModularSynthComponent) == 0x0D80); // 3456 bytes (0x0006C0 - 0x000D80)
static_assert(sizeof(FSourceEffectBitCrusherSettings) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(USourceEffectBitCrusherPreset) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FSourceEffectChorusSettings) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(USourceEffectChorusPreset) == 0x0180); // 384 bytes (0x000068 - 0x000180)
static_assert(sizeof(FSourceEffectDynamicsProcessorSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(USourceEffectDynamicsProcessorPreset) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(UEnvelopeFollowerListener) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(FSourceEffectEnvelopeFollowerSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(USourceEffectEnvelopeFollowerPreset) == 0x00A8); // 168 bytes (0x000068 - 0x0000A8)
static_assert(sizeof(FSourceEffectEQBand) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSourceEffectEQSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(USourceEffectEQPreset) == 0x00B0); // 176 bytes (0x000068 - 0x0000B0)
static_assert(sizeof(FSourceEffectFilterAudioBusModulationSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSourceEffectFilterSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(USourceEffectFilterPreset) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FSourceEffectFoldbackDistortionSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(USourceEffectFoldbackDistortionPreset) == 0x00A8); // 168 bytes (0x000068 - 0x0000A8)
static_assert(sizeof(FSourceEffectMidSideSpreaderSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(USourceEffectMidSideSpreaderPreset) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FSourceEffectPannerSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(USourceEffectPannerPreset) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FSourceEffectPhaserSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(USourceEffectPhaserPreset) == 0x00B0); // 176 bytes (0x000068 - 0x0000B0)
static_assert(sizeof(FSourceEffectRingModulationSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(USourceEffectRingModulationPreset) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FSourceEffectSimpleDelaySettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(USourceEffectSimpleDelayPreset) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(FSourceEffectStereoDelaySettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(USourceEffectStereoDelayPreset) == 0x00D8); // 216 bytes (0x000068 - 0x0000D8)
static_assert(sizeof(FSourceEffectWaveShaperSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(USourceEffectWaveShaperPreset) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(UAudioImpulseResponse) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(FSubmixEffectConvolutionReverbSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(USubmixEffectConvolutionReverbPreset) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FSubmixEffectDelaySettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(USubmixEffectDelayPreset) == 0x00B8); // 184 bytes (0x000068 - 0x0000B8)
static_assert(sizeof(FSubmixEffectFilterSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(USubmixEffectFilterPreset) == 0x00A8); // 168 bytes (0x000068 - 0x0000A8)
static_assert(sizeof(FSubmixEffectFlexiverbSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(USubmixEffectFlexiverbPreset) == 0x00B0); // 176 bytes (0x000068 - 0x0000B0)
static_assert(sizeof(FDynamicsBandSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSubmixEffectMultibandCompressorSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(USubmixEffectMultibandCompressorPreset) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FSubmixEffectStereoDelaySettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(USubmixEffectStereoDelayPreset) == 0x00D8); // 216 bytes (0x000068 - 0x0000D8)
static_assert(sizeof(FTapDelayInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSubmixEffectTapDelaySettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(USubmixEffectTapDelayPreset) == 0x00D8); // 216 bytes (0x000068 - 0x0000D8)
static_assert(sizeof(FSynth2DSliderStyle) == 0x0430); // 1072 bytes (0x000008 - 0x000430)
static_assert(sizeof(USynth2DSlider) == 0x0610); // 1552 bytes (0x000128 - 0x000610)
static_assert(sizeof(UGranularSynth) == 0x0A80); // 2688 bytes (0x0006C0 - 0x000A80)
static_assert(sizeof(UMonoWaveTableSynthPreset) == 0x0170); // 368 bytes (0x000028 - 0x000170)
static_assert(sizeof(USynthComponentMonoWaveTable) == 0x0E00); // 3584 bytes (0x0006C0 - 0x000E00)
static_assert(sizeof(USynthComponentToneGenerator) == 0x06E0); // 1760 bytes (0x0006C0 - 0x0006E0)
static_assert(sizeof(USynthSamplePlayer) == 0x07F0); // 2032 bytes (0x0006C0 - 0x0007F0)
static_assert(sizeof(USynthesisUtilitiesBlueprintFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSynthKnobStyle) == 0x0360); // 864 bytes (0x000008 - 0x000360)
static_assert(sizeof(USynthKnob) == 0x0550); // 1360 bytes (0x000128 - 0x000550)
static_assert(sizeof(FPatchId) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSourceEffectBitCrusherBaseSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSourceEffectChorusBaseSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSynthSlateStyle) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(offsetof(FSynth1PatchCable, Destination) == 0x0004);
static_assert(offsetof(FEpicSynth1Patch, PatchSource) == 0x0000);
static_assert(offsetof(FEpicSynth1Patch, PatchCables) == 0x0008);
static_assert(offsetof(FModularSynthPreset, Osc1Type) == 0x000C);
static_assert(offsetof(FModularSynthPreset, Osc2Type) == 0x0024);
static_assert(offsetof(FModularSynthPreset, LFO1Type) == 0x0054);
static_assert(offsetof(FModularSynthPreset, LFO1Mode) == 0x0055);
static_assert(offsetof(FModularSynthPreset, LFO1PatchType) == 0x0056);
static_assert(offsetof(FModularSynthPreset, LFO2Type) == 0x0060);
static_assert(offsetof(FModularSynthPreset, LFO2Mode) == 0x0061);
static_assert(offsetof(FModularSynthPreset, LFO2PatchType) == 0x0062);
static_assert(offsetof(FModularSynthPreset, ModEnvPatchType) == 0x0078);
static_assert(offsetof(FModularSynthPreset, ModEnvBiasPatchType) == 0x0079);
static_assert(offsetof(FModularSynthPreset, FilterType) == 0x00A0);
static_assert(offsetof(FModularSynthPreset, FilterAlgorithm) == 0x00A1);
static_assert(offsetof(FModularSynthPreset, StereoDelayMode) == 0x00A8);
static_assert(offsetof(FModularSynthPreset, Patches) == 0x00D0);
static_assert(offsetof(FModularSynthPresetBankEntry, PresetName) == 0x0000);
static_assert(offsetof(FModularSynthPresetBankEntry, Preset) == 0x0010);
static_assert(offsetof(UModularSynthPresetBank, Presets) == 0x0028);
static_assert(offsetof(FSourceEffectBitCrusherSettings, SampleRateModulation) == 0x0008);
static_assert(offsetof(FSourceEffectBitCrusherSettings, BitModulation) == 0x0020);
static_assert(offsetof(USourceEffectBitCrusherPreset, Settings) == 0x00C0);
static_assert(offsetof(FSourceEffectChorusSettings, DepthModulation) == 0x0018);
static_assert(offsetof(FSourceEffectChorusSettings, FrequencyModulation) == 0x0028);
static_assert(offsetof(FSourceEffectChorusSettings, FeedbackModulation) == 0x0038);
static_assert(offsetof(FSourceEffectChorusSettings, WetModulation) == 0x0048);
static_assert(offsetof(FSourceEffectChorusSettings, DryModulation) == 0x0058);
static_assert(offsetof(FSourceEffectChorusSettings, SpreadModulation) == 0x0068);
static_assert(offsetof(USourceEffectChorusPreset, Settings) == 0x0108);
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, DynamicsProcessorType) == 0x0000);
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, PeakMode) == 0x0001);
static_assert(offsetof(USourceEffectDynamicsProcessorPreset, Settings) == 0x00B8);
static_assert(offsetof(FSourceEffectEnvelopeFollowerSettings, PeakMode) == 0x0008);
static_assert(offsetof(USourceEffectEnvelopeFollowerPreset, Settings) == 0x009C);
static_assert(offsetof(FSourceEffectEQSettings, EQBands) == 0x0000);
static_assert(offsetof(USourceEffectEQPreset, Settings) == 0x00A0);
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, AudioBus) == 0x0000);
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, FilterParam) == 0x0014);
static_assert(offsetof(FSourceEffectFilterSettings, FilterCircuit) == 0x0000);
static_assert(offsetof(FSourceEffectFilterSettings, FilterType) == 0x0001);
static_assert(offsetof(FSourceEffectFilterSettings, AudioBusModulation) == 0x0010);
static_assert(offsetof(USourceEffectFilterPreset, Settings) == 0x00B0);
static_assert(offsetof(USourceEffectFoldbackDistortionPreset, Settings) == 0x009C);
static_assert(offsetof(FSourceEffectMidSideSpreaderSettings, InputMode) == 0x0004);
static_assert(offsetof(FSourceEffectMidSideSpreaderSettings, OutputMode) == 0x0005);
static_assert(offsetof(USourceEffectMidSideSpreaderPreset, Settings) == 0x0098);
static_assert(offsetof(USourceEffectPannerPreset, Settings) == 0x0098);
static_assert(offsetof(FSourceEffectPhaserSettings, LFOType) == 0x000C);
static_assert(offsetof(USourceEffectPhaserPreset, Settings) == 0x00A0);
static_assert(offsetof(FSourceEffectRingModulationSettings, ModulatorType) == 0x0000);
static_assert(offsetof(FSourceEffectRingModulationSettings, AudioBusModulator) == 0x0018);
static_assert(offsetof(USourceEffectRingModulationPreset, Settings) == 0x00B0);
static_assert(offsetof(USourceEffectSimpleDelayPreset, Settings) == 0x00A8);
static_assert(offsetof(FSourceEffectStereoDelaySettings, DelayMode) == 0x0000);
static_assert(offsetof(FSourceEffectStereoDelaySettings, FilterType) == 0x0019);
static_assert(offsetof(USourceEffectStereoDelayPreset, Settings) == 0x00B4);
static_assert(offsetof(USourceEffectWaveShaperPreset, Settings) == 0x0098);
static_assert(offsetof(UAudioImpulseResponse, ImpulseResponse) == 0x0028);
static_assert(offsetof(UAudioImpulseResponse, IRData) == 0x0048);
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, ImpulseResponse) == 0x0018);
static_assert(offsetof(USubmixEffectConvolutionReverbPreset, ImpulseResponse) == 0x0068);
static_assert(offsetof(USubmixEffectConvolutionReverbPreset, Settings) == 0x0070);
static_assert(offsetof(USubmixEffectConvolutionReverbPreset, BlockSize) == 0x0098);
static_assert(offsetof(USubmixEffectDelayPreset, Settings) == 0x009C);
static_assert(offsetof(USubmixEffectDelayPreset, DynamicSettings) == 0x00A8);
static_assert(offsetof(FSubmixEffectFilterSettings, FilterType) == 0x0000);
static_assert(offsetof(FSubmixEffectFilterSettings, FilterAlgorithm) == 0x0001);
static_assert(offsetof(USubmixEffectFilterPreset, Settings) == 0x009C);
static_assert(offsetof(USubmixEffectFlexiverbPreset, Settings) == 0x00A0);
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, DynamicsProcessorType) == 0x0000);
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, PeakMode) == 0x0001);
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, Bands) == 0x0010);
static_assert(offsetof(USubmixEffectMultibandCompressorPreset, Settings) == 0x00B0);
static_assert(offsetof(FSubmixEffectStereoDelaySettings, DelayMode) == 0x0000);
static_assert(offsetof(FSubmixEffectStereoDelaySettings, FilterType) == 0x0019);
static_assert(offsetof(USubmixEffectStereoDelayPreset, Settings) == 0x00B4);
static_assert(offsetof(FTapDelayInfo, TapLineMode) == 0x0000);
static_assert(offsetof(FSubmixEffectTapDelaySettings, Taps) == 0x0008);
static_assert(offsetof(USubmixEffectTapDelayPreset, Settings) == 0x00A8);
static_assert(offsetof(FSynth2DSliderStyle, NormalThumbImage) == 0x0010);
static_assert(offsetof(FSynth2DSliderStyle, DisabledThumbImage) == 0x00E0);
static_assert(offsetof(FSynth2DSliderStyle, NormalBarImage) == 0x01B0);
static_assert(offsetof(FSynth2DSliderStyle, DisabledBarImage) == 0x0280);
static_assert(offsetof(FSynth2DSliderStyle, BackgroundImage) == 0x0350);
static_assert(offsetof(USynth2DSlider, WidgetStyle) == 0x0150);
static_assert(offsetof(USynth2DSlider, SliderHandleColor) == 0x0580);
static_assert(offsetof(UGranularSynth, GranulatedSoundWave) == 0x06C0);
static_assert(offsetof(UMonoWaveTableSynthPreset, PresetName) == 0x0028);
static_assert(offsetof(UMonoWaveTableSynthPreset, WaveTable) == 0x0048);
static_assert(offsetof(USynthComponentMonoWaveTable, CurrentPreset) == 0x06E0);
static_assert(offsetof(USynthSamplePlayer, SoundWave) == 0x06C0);
static_assert(offsetof(FSynthKnobStyle, LargeKnob) == 0x0010);
static_assert(offsetof(FSynthKnobStyle, LargeKnobOverlay) == 0x00E0);
static_assert(offsetof(FSynthKnobStyle, MediumKnob) == 0x01B0);
static_assert(offsetof(FSynthKnobStyle, MediumKnobOverlay) == 0x0280);
static_assert(offsetof(FSynthKnobStyle, KnobSize) == 0x0358);
static_assert(offsetof(USynthKnob, ParameterName) == 0x0140);
static_assert(offsetof(USynthKnob, ParameterUnits) == 0x0158);
static_assert(offsetof(USynthKnob, WidgetStyle) == 0x0180);
static_assert(offsetof(FSynthSlateStyle, SizeType) == 0x0008);
static_assert(offsetof(FSynthSlateStyle, ColorStyle) == 0x0009);


/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "AudioAnalyzer.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UAudioSynesthesiaNRT;
class UAudioSynesthesiaNRTSettings;
class UConstantQNRT;
class UConstantQNRTSettings;
class ULoudnessNRT;
class ULoudnessNRTSettings;
class UOnsetNRT;
class UOnsetNRTSettings;

/// Enum /Script/AudioSynesthesia.EConstantQFFTSizeEnum
/// Size: 0x01 (1 bytes)
enum class EConstantQFFTSizeEnum : uint8_t
{
	EConstantQFFTSizeEnum__Min                                                       = 0,
	EConstantQFFTSizeEnum__XXSmall                                                   = 1,
	EConstantQFFTSizeEnum__XSmall                                                    = 2,
	EConstantQFFTSizeEnum__Small                                                     = 3,
	EConstantQFFTSizeEnum__Medium                                                    = 4,
	EConstantQFFTSizeEnum__Large                                                     = 5,
	EConstantQFFTSizeEnum__XLarge                                                    = 6,
	EConstantQFFTSizeEnum__XXLarge                                                   = 7,
	EConstantQFFTSizeEnum__Max                                                       = 8
};

/// Enum /Script/AudioSynesthesia.EConstantQNormalizationEnum
/// Size: 0x01 (1 bytes)
enum class EConstantQNormalizationEnum : uint8_t
{
	EConstantQNormalizationEnum__EqualEuclideanNorm                                  = 0,
	EConstantQNormalizationEnum__EqualEnergy                                         = 1,
	EConstantQNormalizationEnum__EqualAmplitude                                      = 2
};

/// Enum /Script/AudioSynesthesia.ELoudnessNRTCurveTypeEnum
/// Size: 0x01 (1 bytes)
enum class ELoudnessNRTCurveTypeEnum : uint8_t
{
	ELoudnessNRTCurveTypeEnum__A                                                     = 0,
	ELoudnessNRTCurveTypeEnum__B                                                     = 1,
	ELoudnessNRTCurveTypeEnum__C                                                     = 2,
	ELoudnessNRTCurveTypeEnum__D                                                     = 3,
	ELoudnessNRTCurveTypeEnum__None                                                  = 4
};

#pragma pack(pop)


static_assert(sizeof(UAudioSynesthesiaNRTSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAudioSynesthesiaNRT) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UConstantQNRTSettings) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UConstantQNRT) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(ULoudnessNRTSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ULoudnessNRT) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(UOnsetNRTSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UOnsetNRT) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(offsetof(UConstantQNRTSettings, FFTSize) == 0x0039);
static_assert(offsetof(UConstantQNRTSettings, WindowType) == 0x003A);
static_assert(offsetof(UConstantQNRTSettings, SpectrumType) == 0x003B);
static_assert(offsetof(UConstantQNRTSettings, CQTNormalization) == 0x0040);
static_assert(offsetof(UConstantQNRT, Settings) == 0x0078);
static_assert(offsetof(ULoudnessNRTSettings, CurveType) == 0x0034);
static_assert(offsetof(ULoudnessNRT, Settings) == 0x0078);
static_assert(offsetof(UOnsetNRT, Settings) == 0x0078);

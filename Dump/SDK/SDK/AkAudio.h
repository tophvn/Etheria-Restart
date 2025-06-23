
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
#include "SlateCore.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "WwiseResourceLoader.h"
#include "WwiseSoundEngine.h"

#pragma pack(push, 0x1)

class AAkAcousticPortal;
class AAkAmbientSound;
class AAkReverbVolume;
class AAkSpatialAudioVolume;
class AAkSpotReflector;
class UAkAcousticTexture;
class UAkAcousticTextureSetComponent;
class UAkAndroidInitializationSettings;
class UAkAndroidPlatformInfo;
class UAkAssetData;
class UAkAssetPlatformData;
class UAkAudioBank;
class UAkAudioEvent;
class UAkAudioInputComponent;
class UAkAudioType;
class UAkAuxBus;
class UAkBattleComponent;
class UAkBattleSpeedRateSettings;
class UAkCallbackInfo;
class UAkCheckBox;
class UAkComponent;
class UAkDurationCallbackInfo;
class UAkEffectShareSet;
class UAkEventCallbackInfo;
class UAkExternalMediaAsset;
class UAkFolder;
class UAkGameObject;
class UAkGameplayStatics;
class UAkGeometryComponent;
class UAkGroupValue;
class UAkHololensInitializationSettings;
class UAkHololensPlatformInfo;
class UAkIOSInitializationSettings;
class UAkIOSPlatformInfo;
class UAkInitBank;
class UAkItemBoolProperties;
class UAkItemBoolPropertiesConv;
class UAkItemProperties;
class UAkItemPropertiesConv;
class UAkLateReverbComponent;
class UAkLinuxInitializationSettings;
class UAkLinuxPlatformInfo;
class UAkLocalizedMediaAsset;
class UAkMIDIEventCallbackInfo;
class UAkMacInitializationSettings;
class UAkMacPlatformInfo;
class UAkMarkerCallbackInfo;
class UAkMediaAsset;
class UAkMediaAssetData;
class UAkMusicSyncCallbackInfo;
class UAkPlatformInfo;
class UAkPlatformInitialisationSettingsBase;
class UAkPortalComponent;
class UAkRoomComponent;
class UAkRtpc;
class UAkSettings;
class UAkSettingsPerUser;
class UAkSlider;
class UAkStateValue;
class UAkSubmixInputComponent;
class UAkSurfaceReflectorSetComponent;
class UAkSwitchValue;
class UAkTVOSInitializationSettings;
class UAkTVOSPlatformInfo;
class UAkTrigger;
class UAkWaapiCalls;
class UAkWaapiJsonManager;
class UAkWaapiUriConv;
class UAkWin32PlatformInfo;
class UAkWin64PlatformInfo;
class UAkWindowsInitializationSettings;
class UAkWindowsPlatformInfo;
class UAkWwiseTree;
class UAkWwiseTreeSelector;
class UAnimNotify_AkEventBase;
class UDrawPortalComponent;
class UDrawRoomComponent;
class UMovieSceneAkAudioEventSection;
class UMovieSceneAkAudioEventTrack;
class UMovieSceneAkAudioRTPCSection;
class UMovieSceneAkAudioRTPCTrack;
class UMovieSceneAkTrack;
class UPostEventAsync;
class UPostEventAtLocationAsync;
class USAkWaapiFieldNamesConv;

/// Enum /Script/AkAudio.EAkCallbackType
/// Size: 0x01 (1 bytes)
enum class EAkCallbackType : uint8_t
{
	EAkCallbackType__EndOfEvent                                                      = 0,
	EAkCallbackType__Marker                                                          = 2,
	EAkCallbackType__Duration                                                        = 3,
	EAkCallbackType__Starvation                                                      = 5,
	EAkCallbackType__MusicPlayStarted                                                = 7,
	EAkCallbackType__MusicSyncBeat                                                   = 8,
	EAkCallbackType__MusicSyncBar                                                    = 9,
	EAkCallbackType__MusicSyncEntry                                                  = 10,
	EAkCallbackType__MusicSyncExit                                                   = 11,
	EAkCallbackType__MusicSyncGrid                                                   = 12,
	EAkCallbackType__MusicSyncUserCue                                                = 13,
	EAkCallbackType__MusicSyncPoint                                                  = 14,
	EAkCallbackType__MIDIEvent                                                       = 16
};

/// Enum /Script/AkAudio.EAkResult
/// Size: 0x01 (1 bytes)
enum class EAkResult : uint8_t
{
	EAkResult__NotImplemented                                                        = 0,
	EAkResult__Success                                                               = 1,
	EAkResult__Fail                                                                  = 2,
	EAkResult__PartialSuccess                                                        = 3,
	EAkResult__NotCompatible                                                         = 4,
	EAkResult__AlreadyConnected                                                      = 5,
	EAkResult__InvalidFile                                                           = 7,
	EAkResult__AudioFileHeaderTooLarge                                               = 8,
	EAkResult__MaxReached                                                            = 9,
	EAkResult__InvalidID                                                             = 14,
	EAkResult__IDNotFound                                                            = 15,
	EAkResult__InvalidInstanceID                                                     = 16,
	EAkResult__NoMoreData                                                            = 17,
	EAkResult__InvalidStateGroup                                                     = 20,
	EAkResult__ChildAlreadyHasAParent                                                = 21,
	EAkResult__InvalidLanguage                                                       = 22,
	EAkResult__CannotAddItseflAsAChild                                               = 23,
	EAkResult__InvalidParameter                                                      = 31,
	EAkResult__ElementAlreadyInList                                                  = 35,
	EAkResult__PathNotFound                                                          = 36,
	EAkResult__PathNoVertices                                                        = 37,
	EAkResult__PathNotRunning                                                        = 38,
	EAkResult__PathNotPaused                                                         = 39,
	EAkResult__PathNodeAlreadyInList                                                 = 40,
	EAkResult__PathNodeNotInList                                                     = 41,
	EAkResult__DataNeeded                                                            = 43,
	EAkResult__NoDataNeeded                                                          = 44,
	EAkResult__DataReady                                                             = 45,
	EAkResult__NoDataReady                                                           = 46,
	EAkResult__InsufficientMemory                                                    = 52,
	EAkResult__Cancelled                                                             = 53,
	EAkResult__UnknownBankID                                                         = 54,
	EAkResult__BankReadError                                                         = 56,
	EAkResult__InvalidSwitchType                                                     = 57,
	EAkResult__FormatNotReady                                                        = 63,
	EAkResult__WrongBankVersion                                                      = 64,
	EAkResult__FileNotFound                                                          = 66,
	EAkResult__DeviceNotReady                                                        = 67,
	EAkResult__BankAlreadyLoaded                                                     = 69,
	EAkResult__RenderedFX                                                            = 71,
	EAkResult__ProcessNeeded                                                         = 72,
	EAkResult__ProcessDone                                                           = 73,
	EAkResult__MemManagerNotInitialized                                              = 74,
	EAkResult__StreamMgrNotInitialized                                               = 75,
	EAkResult__SSEInstructionsNotSupported                                           = 76,
	EAkResult__Busy                                                                  = 77,
	EAkResult__UnsupportedChannelConfig                                              = 78,
	EAkResult__PluginMediaNotAvailable                                               = 79,
	EAkResult__MustBeVirtualized                                                     = 80,
	EAkResult__CommandTooLarge                                                       = 81,
	EAkResult__RejectedByFilter                                                      = 82,
	EAkResult__InvalidCustomPlatformName                                             = 83,
	EAkResult__DLLCannotLoad                                                         = 84,
	EAkResult__DLLPathNotFound                                                       = 85,
	EAkResult__NoJavaVM                                                              = 86,
	EAkResult__OpenSLError                                                           = 87,
	EAkResult__PluginNotRegistered                                                   = 88,
	EAkResult__DataAlignmentError                                                    = 89
};

/// Enum /Script/AkAudio.EAkAndroidAudioAPI
/// Size: 0x01 (1 bytes)
enum class EAkAndroidAudioAPI : uint8_t
{
	EAkAndroidAudioAPI__AAudio                                                       = 0,
	EAkAndroidAudioAPI__OpenSL_ES                                                    = 1
};

/// Enum /Script/AkAudio.EAkAudioSessionMode
/// Size: 0x04 (4 bytes)
enum class EAkAudioSessionMode : uint32_t
{
	EAkAudioSessionMode__Default                                                     = 0,
	EAkAudioSessionMode__VoiceChat                                                   = 1,
	EAkAudioSessionMode__GameChat                                                    = 2,
	EAkAudioSessionMode__VideoRecording                                              = 3,
	EAkAudioSessionMode__Measurement                                                 = 4,
	EAkAudioSessionMode__MoviePlayback                                               = 5,
	EAkAudioSessionMode__VideoChat                                                   = 6
};

/// Enum /Script/AkAudio.EAkAudioSessionCategoryOptions
/// Size: 0x01 (1 bytes)
enum class EAkAudioSessionCategoryOptions : uint8_t
{
	EAkAudioSessionCategoryOptions__MixWithOthers                                    = 0,
	EAkAudioSessionCategoryOptions__DuckOthers                                       = 1,
	EAkAudioSessionCategoryOptions__AllowBluetooth                                   = 2,
	EAkAudioSessionCategoryOptions__DefaultToSpeaker                                 = 3
};

/// Enum /Script/AkAudio.EAkAudioSessionCategory
/// Size: 0x04 (4 bytes)
enum class EAkAudioSessionCategory : uint32_t
{
	EAkAudioSessionCategory__Ambient                                                 = 0,
	EAkAudioSessionCategory__SoloAmbient                                             = 1,
	EAkAudioSessionCategory__PlayAndRecord                                           = 2
};

/// Enum /Script/AkAudio.ESpeedRateType
/// Size: 0x01 (1 bytes)
enum class ESpeedRateType : uint8_t
{
	ESpeedRateType__none                                                             = 0,
	ESpeedRateType__BattleRate1                                                      = 1,
	ESpeedRateType__BattleRate2                                                      = 2,
	ESpeedRateType__BattleRate3                                                      = 3
};

/// Enum /Script/AkAudio.EReflectionFilterBits
/// Size: 0x01 (1 bytes)
enum class EReflectionFilterBits : uint8_t
{
	EReflectionFilterBits__Wall                                                      = 0,
	EReflectionFilterBits__Ceiling                                                   = 1,
	EReflectionFilterBits__Floor                                                     = 2
};

/// Enum /Script/AkAudio.AkCodecId
/// Size: 0x01 (1 bytes)
enum class AkCodecId : uint8_t
{
	AkCodecId__None                                                                  = 0,
	AkCodecId__PCM                                                                   = 1,
	AkCodecId__ADPCM                                                                 = 2,
	AkCodecId__XMA                                                                   = 3,
	AkCodecId__Vorbis                                                                = 4,
	AkCodecId__ATRAC9                                                                = 12,
	AkCodecId__OpusNX                                                                = 17,
	AkCodecId__AkOpus                                                                = 19,
	AkCodecId__AkOpusWEM                                                             = 20
};

/// Enum /Script/AkAudio.EAkMidiCcValues
/// Size: 0x01 (1 bytes)
enum class EAkMidiCcValues : uint8_t
{
	EAkMidiCcValues__AkMidiCcBankSelectCoarse                                        = 0,
	EAkMidiCcValues__AkMidiCcModWheelCoarse                                          = 1,
	EAkMidiCcValues__AkMidiCcBreathCtrlCoarse                                        = 2,
	EAkMidiCcValues__AkMidiCcCtrl3Coarse                                             = 3,
	EAkMidiCcValues__AkMidiCcFootPedalCoarse                                         = 4,
	EAkMidiCcValues__AkMidiCcPortamentoCoarse                                        = 5,
	EAkMidiCcValues__AkMidiCcDataEntryCoarse                                         = 6,
	EAkMidiCcValues__AkMidiCcVolumeCoarse                                            = 7,
	EAkMidiCcValues__AkMidiCcBalanceCoarse                                           = 8,
	EAkMidiCcValues__AkMidiCcCtrl9Coarse                                             = 9,
	EAkMidiCcValues__AkMidiCcPanPositionCoarse                                       = 10,
	EAkMidiCcValues__AkMidiCcExpressionCoarse                                        = 11,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Coarse                                       = 12,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Coarse                                       = 13,
	EAkMidiCcValues__AkMidiCcCtrl14Coarse                                            = 14,
	EAkMidiCcValues__AkMidiCcCtrl15Coarse                                            = 15,
	EAkMidiCcValues__AkMidiCcGenSlider1                                              = 16,
	EAkMidiCcValues__AkMidiCcGenSlider2                                              = 17,
	EAkMidiCcValues__AkMidiCcGenSlider3                                              = 18,
	EAkMidiCcValues__AkMidiCcGenSlider4                                              = 19,
	EAkMidiCcValues__AkMidiCcCtrl20Coarse                                            = 20,
	EAkMidiCcValues__AkMidiCcCtrl21Coarse                                            = 21,
	EAkMidiCcValues__AkMidiCcCtrl22Coarse                                            = 22,
	EAkMidiCcValues__AkMidiCcCtrl23Coarse                                            = 23,
	EAkMidiCcValues__AkMidiCcCtrl24Coarse                                            = 24,
	EAkMidiCcValues__AkMidiCcCtrl25Coarse                                            = 25,
	EAkMidiCcValues__AkMidiCcCtrl26Coarse                                            = 26,
	EAkMidiCcValues__AkMidiCcCtrl27Coarse                                            = 27,
	EAkMidiCcValues__AkMidiCcCtrl28Coarse                                            = 28,
	EAkMidiCcValues__AkMidiCcCtrl29Coarse                                            = 29,
	EAkMidiCcValues__AkMidiCcCtrl30Coarse                                            = 30,
	EAkMidiCcValues__AkMidiCcCtrl31Coarse                                            = 31,
	EAkMidiCcValues__AkMidiCcBankSelectFine                                          = 32,
	EAkMidiCcValues__AkMidiCcModWheelFine                                            = 33,
	EAkMidiCcValues__AkMidiCcBreathCtrlFine                                          = 34,
	EAkMidiCcValues__AkMidiCcCtrl3Fine                                               = 35,
	EAkMidiCcValues__AkMidiCcFootPedalFine                                           = 36,
	EAkMidiCcValues__AkMidiCcPortamentoFine                                          = 37,
	EAkMidiCcValues__AkMidiCcDataEntryFine                                           = 38,
	EAkMidiCcValues__AkMidiCcVolumeFine                                              = 39,
	EAkMidiCcValues__AkMidiCcBalanceFine                                             = 40,
	EAkMidiCcValues__AkMidiCcCtrl9Fine                                               = 41,
	EAkMidiCcValues__AkMidiCcPanPositionFine                                         = 42,
	EAkMidiCcValues__AkMidiCcExpressionFine                                          = 43,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Fine                                         = 44,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Fine                                         = 45,
	EAkMidiCcValues__AkMidiCcCtrl14Fine                                              = 46,
	EAkMidiCcValues__AkMidiCcCtrl15Fine                                              = 47,
	EAkMidiCcValues__AkMidiCcCtrl20Fine                                              = 52,
	EAkMidiCcValues__AkMidiCcCtrl21Fine                                              = 53,
	EAkMidiCcValues__AkMidiCcCtrl22Fine                                              = 54,
	EAkMidiCcValues__AkMidiCcCtrl23Fine                                              = 55,
	EAkMidiCcValues__AkMidiCcCtrl24Fine                                              = 56,
	EAkMidiCcValues__AkMidiCcCtrl25Fine                                              = 57,
	EAkMidiCcValues__AkMidiCcCtrl26Fine                                              = 58,
	EAkMidiCcValues__AkMidiCcCtrl27Fine                                              = 59,
	EAkMidiCcValues__AkMidiCcCtrl28Fine                                              = 60,
	EAkMidiCcValues__AkMidiCcCtrl29Fine                                              = 61,
	EAkMidiCcValues__AkMidiCcCtrl30Fine                                              = 62,
	EAkMidiCcValues__AkMidiCcCtrl31Fine                                              = 63,
	EAkMidiCcValues__AkMidiCcHoldPedal                                               = 64,
	EAkMidiCcValues__AkMidiCcPortamentoOnOff                                         = 65,
	EAkMidiCcValues__AkMidiCcSustenutoPedal                                          = 66,
	EAkMidiCcValues__AkMidiCcSoftPedal                                               = 67,
	EAkMidiCcValues__AkMidiCcLegatoPedal                                             = 68,
	EAkMidiCcValues__AkMidiCcHoldPedal2                                              = 69,
	EAkMidiCcValues__AkMidiCcSoundVariation                                          = 70,
	EAkMidiCcValues__AkMidiCcSoundTimbre                                             = 71,
	EAkMidiCcValues__AkMidiCcSoundReleaseTime                                        = 72,
	EAkMidiCcValues__AkMidiCcSoundAttackTime                                         = 73,
	EAkMidiCcValues__AkMidiCcSoundBrightness                                         = 74,
	EAkMidiCcValues__AkMidiCcSoundCtrl6                                              = 75,
	EAkMidiCcValues__AkMidiCcSoundCtrl7                                              = 76,
	EAkMidiCcValues__AkMidiCcSoundCtrl8                                              = 77,
	EAkMidiCcValues__AkMidiCcSoundCtrl9                                              = 78,
	EAkMidiCcValues__AkMidiCcSoundCtrl10                                             = 79,
	EAkMidiCcValues__AkMidiCcGeneralButton1                                          = 80,
	EAkMidiCcValues__AkMidiCcGeneralButton2                                          = 81,
	EAkMidiCcValues__AkMidiCcGeneralButton3                                          = 82,
	EAkMidiCcValues__AkMidiCcGeneralButton4                                          = 83,
	EAkMidiCcValues__AkMidiCcReverbLevel                                             = 91,
	EAkMidiCcValues__AkMidiCcTremoloLevel                                            = 92,
	EAkMidiCcValues__AkMidiCcChorusLevel                                             = 93,
	EAkMidiCcValues__AkMidiCcCelesteLevel                                            = 94,
	EAkMidiCcValues__AkMidiCcPhaserLevel                                             = 95,
	EAkMidiCcValues__AkMidiCcDataButtonP1                                            = 96,
	EAkMidiCcValues__AkMidiCcDataButtonM1                                            = 97,
	EAkMidiCcValues__AkMidiCcNonRegisterCoarse                                       = 98,
	EAkMidiCcValues__AkMidiCcNonRegisterFine                                         = 99,
	EAkMidiCcValues__AkMidiCcAllSoundOff                                             = 120,
	EAkMidiCcValues__AkMidiCcAllControllersOff                                       = 121,
	EAkMidiCcValues__AkMidiCcLocalKeyboard                                           = 122,
	EAkMidiCcValues__AkMidiCcAllNotesOff                                             = 123,
	EAkMidiCcValues__AkMidiCcOmniModeOff                                             = 124,
	EAkMidiCcValues__AkMidiCcOmniModeOn                                              = 125,
	EAkMidiCcValues__AkMidiCcOmniMonophonicOn                                        = 126,
	EAkMidiCcValues__AkMidiCcOmniPolyphonicOn                                        = 127
};

/// Enum /Script/AkAudio.EAkMidiEventType
/// Size: 0x01 (1 bytes)
enum class EAkMidiEventType : uint8_t
{
	EAkMidiEventType__AkMidiEventTypeInvalid                                         = 0,
	EAkMidiEventType__AkMidiEventTypeNoteOff                                         = 128,
	EAkMidiEventType__AkMidiEventTypeNoteOn                                          = 144,
	EAkMidiEventType__AkMidiEventTypeNoteAftertouch                                  = 160,
	EAkMidiEventType__AkMidiEventTypeController                                      = 176,
	EAkMidiEventType__AkMidiEventTypeProgramChange                                   = 192,
	EAkMidiEventType__AkMidiEventTypeChannelAftertouch                               = 208,
	EAkMidiEventType__AkMidiEventTypePitchBend                                       = 224,
	EAkMidiEventType__AkMidiEventTypeSysex                                           = 240,
	EAkMidiEventType__AkMidiEventTypeEscape                                          = 247,
	EAkMidiEventType__AkMidiEventTypeMeta                                            = 255
};

/// Enum /Script/AkAudio.ERTPCValueType
/// Size: 0x01 (1 bytes)
enum class ERTPCValueType : uint8_t
{
	ERTPCValueType__Default                                                          = 0,
	ERTPCValueType__Global                                                           = 1,
	ERTPCValueType__GameObject                                                       = 2,
	ERTPCValueType__PlayingID                                                        = 3,
	ERTPCValueType__Unavailable                                                      = 4
};

/// Enum /Script/AkAudio.EAkCurveInterpolation
/// Size: 0x01 (1 bytes)
enum class EAkCurveInterpolation : uint8_t
{
	EAkCurveInterpolation__Log3                                                      = 0,
	EAkCurveInterpolation__Sine                                                      = 1,
	EAkCurveInterpolation__Log1                                                      = 2,
	EAkCurveInterpolation__InvSCurve                                                 = 3,
	EAkCurveInterpolation__Linear                                                    = 4,
	EAkCurveInterpolation__SCurve                                                    = 5,
	EAkCurveInterpolation__Exp1                                                      = 6,
	EAkCurveInterpolation__SineRecip                                                 = 7,
	EAkCurveInterpolation__Exp3                                                      = 8,
	EAkCurveInterpolation__LastFadeCurve                                             = 8,
	EAkCurveInterpolation__Constant                                                  = 9
};

/// Enum /Script/AkAudio.AkActionOnEventType
/// Size: 0x01 (1 bytes)
enum class AkActionOnEventType : uint8_t
{
	AkActionOnEventType__Stop                                                        = 0,
	AkActionOnEventType__Pause                                                       = 1,
	AkActionOnEventType__Resume                                                      = 2,
	AkActionOnEventType__Break                                                       = 3,
	AkActionOnEventType__ReleaseEnvelope                                             = 4
};

/// Enum /Script/AkAudio.AkMultiPositionType
/// Size: 0x01 (1 bytes)
enum class AkMultiPositionType : uint8_t
{
	AkMultiPositionType__SingleSource                                                = 0,
	AkMultiPositionType__MultiSources                                                = 1,
	AkMultiPositionType__MultiDirections                                             = 2
};

/// Enum /Script/AkAudio.AkSpeakerConfiguration
/// Size: 0x04 (4 bytes)
enum class AkSpeakerConfiguration : uint32_t
{
	AkSpeakerConfiguration__Ak_Speaker_Front_Left                                    = 1,
	AkSpeakerConfiguration__Ak_Speaker_Front_Right                                   = 2,
	AkSpeakerConfiguration__Ak_Speaker_Front_Center                                  = 4,
	AkSpeakerConfiguration__Ak_Speaker_Low_Frequency                                 = 8,
	AkSpeakerConfiguration__Ak_Speaker_Back_Left                                     = 16,
	AkSpeakerConfiguration__Ak_Speaker_Back_Right                                    = 32,
	AkSpeakerConfiguration__Ak_Speaker_Back_Center                                   = 256,
	AkSpeakerConfiguration__Ak_Speaker_Side_Left                                     = 512,
	AkSpeakerConfiguration__Ak_Speaker_Side_Right                                    = 1024,
	AkSpeakerConfiguration__Ak_Speaker_Top                                           = 2048,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Left                             = 4096,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Center                           = 8192,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Right                            = 16384,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Left                              = 32768,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Center                            = 65536,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Right                             = 131072
};

/// Enum /Script/AkAudio.AkChannelConfiguration
/// Size: 0x01 (1 bytes)
enum class AkChannelConfiguration : uint8_t
{
	AkChannelConfiguration__Ak_Parent                                                = 0,
	AkChannelConfiguration__Ak_MainMix                                               = 1,
	AkChannelConfiguration__Ak_Passthrough                                           = 2,
	AkChannelConfiguration__Ak_LFE                                                   = 3,
	AkChannelConfiguration__AK_Audio_Objects                                         = 4,
	AkChannelConfiguration__Ak_1                                                     = 5,
	AkChannelConfiguration__Ak_2                                                     = 6,
	AkChannelConfiguration__Ak_28                                                    = 7,
	AkChannelConfiguration__Ak_3                                                     = 8,
	AkChannelConfiguration__Ak_310                                                   = 9,
	AkChannelConfiguration__Ak_4                                                     = 10,
	AkChannelConfiguration__Ak_412                                                   = 11,
	AkChannelConfiguration__Ak_5                                                     = 12,
	AkChannelConfiguration__Ak_514                                                   = 13,
	AkChannelConfiguration__Ak_7                                                     = 14,
	AkChannelConfiguration__Ak_5_1                                                   = 15,
	AkChannelConfiguration__Ak_7_1                                                   = 16,
	AkChannelConfiguration__Ak_7_118                                                 = 17,
	AkChannelConfiguration__Ak_Auro_9                                                = 18,
	AkChannelConfiguration__Ak_Auro_10                                               = 19,
	AkChannelConfiguration__Ak_Auro_11                                               = 20,
	AkChannelConfiguration__Ak_Auro_13                                               = 21,
	AkChannelConfiguration__Ak_Ambisonics_1st_order                                  = 22,
	AkChannelConfiguration__Ak_Ambisonics_2nd_order                                  = 23,
	AkChannelConfiguration__Ak_Ambisonics_3rd_order                                  = 24,
	AkChannelConfiguration__Ak_Ambisonics_4th_order                                  = 25,
	AkChannelConfiguration__Ak_Ambisonics_5th_order                                  = 26
};

/// Enum /Script/AkAudio.AkAcousticPortalState
/// Size: 0x01 (1 bytes)
enum class AkAcousticPortalState : uint8_t
{
	AkAcousticPortalState__Closed                                                    = 0,
	AkAcousticPortalState__Open                                                      = 1
};

/// Enum /Script/AkAudio.PanningRule
/// Size: 0x01 (1 bytes)
enum class PanningRule : uint8_t
{
	PanningRule__PanningRule_Speakers                                                = 0,
	PanningRule__PanningRule_Headphones                                              = 1
};

/// Enum /Script/AkAudio.EAkAudioContext
/// Size: 0x01 (1 bytes)
enum class EAkAudioContext : uint8_t
{
	EAkAudioContext__Foreign                                                         = 0,
	EAkAudioContext__GameplayAudio                                                   = 1,
	EAkAudioContext__EditorAudio                                                     = 2,
	EAkAudioContext__AlwaysActive                                                    = 3
};

/// Enum /Script/AkAudio.AkMeshType
/// Size: 0x01 (1 bytes)
enum class AkMeshType : uint8_t
{
	AkMeshType__StaticMesh                                                           = 0,
	AkMeshType__CollisionMesh                                                        = 1
};

/// Enum /Script/AkAudio.EAkCommSystem
/// Size: 0x04 (4 bytes)
enum class EAkCommSystem : uint32_t
{
	EAkCommSystem__Socket                                                            = 0,
	EAkCommSystem__HTCS                                                              = 1
};

/// Enum /Script/AkAudio.EAkChannelMask
/// Size: 0x01 (1 bytes)
enum class EAkChannelMask : uint8_t
{
	EAkChannelMask__FrontLeft                                                        = 0,
	EAkChannelMask__FrontRight                                                       = 1,
	EAkChannelMask__FrontCenter                                                      = 2,
	EAkChannelMask__LowFrequency                                                     = 3,
	EAkChannelMask__BackLeft                                                         = 4,
	EAkChannelMask__BackRight                                                        = 5,
	EAkChannelMask__BackCenter                                                       = 8,
	EAkChannelMask__SideLeft                                                         = 9,
	EAkChannelMask__SideRight                                                        = 10,
	EAkChannelMask__Top                                                              = 11,
	EAkChannelMask__HeightFrontLeft                                                  = 12,
	EAkChannelMask__HeightFrontCenter                                                = 13,
	EAkChannelMask__HeightFrontRight                                                 = 14,
	EAkChannelMask__HeightBackLeft                                                   = 15,
	EAkChannelMask__HeightBackCenter                                                 = 16,
	EAkChannelMask__HeightBackRight                                                  = 17
};

/// Enum /Script/AkAudio.EAkChannelConfigType
/// Size: 0x04 (4 bytes)
enum class EAkChannelConfigType : uint32_t
{
	EAkChannelConfigType__Anonymous                                                  = 0,
	EAkChannelConfigType__Standard                                                   = 1,
	EAkChannelConfigType__Ambisonic                                                  = 2
};

/// Enum /Script/AkAudio.EAkPanningRule
/// Size: 0x04 (4 bytes)
enum class EAkPanningRule : uint32_t
{
	EAkPanningRule__Speakers                                                         = 0,
	EAkPanningRule__Headphones                                                       = 1
};

/// Enum /Script/AkAudio.EAkUnrealAudioRouting
/// Size: 0x04 (4 bytes)
enum class EAkUnrealAudioRouting : uint32_t
{
	EAkUnrealAudioRouting__Custom                                                    = 0,
	EAkUnrealAudioRouting__Separate                                                  = 1,
	EAkUnrealAudioRouting__AudioLink                                                 = 2,
	EAkUnrealAudioRouting__AudioMixer                                                = 3,
	EAkUnrealAudioRouting__EnableWwiseOnly                                           = 4,
	EAkUnrealAudioRouting__EnableUnrealOnly                                          = 5
};

/// Enum /Script/AkAudio.EAkCollisionChannel
/// Size: 0x01 (1 bytes)
enum class EAkCollisionChannel : uint8_t
{
	EAKCC_WorldStatic                                                                = 0,
	EAKCC_WorldDynamic                                                               = 1,
	EAKCC_Pawn                                                                       = 2,
	EAKCC_Visibility                                                                 = 3,
	EAKCC_Camera                                                                     = 4,
	EAKCC_PhysicsBody                                                                = 5,
	EAKCC_Vehicle                                                                    = 6,
	EAKCC_Destructible                                                               = 7,
	EAKCC_UseIntegrationSettingsDefault                                              = 8
};

/// Enum /Script/AkAudio.EAkFitToGeometryMode
/// Size: 0x01 (1 bytes)
enum class EAkFitToGeometryMode : uint8_t
{
	EAkFitToGeometryMode__OrientedBox                                                = 0,
	EAkFitToGeometryMode__AlignedBox                                                 = 1,
	EAkFitToGeometryMode__ConvexPolyhedron                                           = 2
};

/// Enum /Script/AkAudio.ESequenceSpeedRateType
/// Size: 0x01 (1 bytes)
enum class ESequenceSpeedRateType : uint8_t
{
	ESequenceSpeedRateType__none                                                     = 0,
	ESequenceSpeedRateType__BattleRate1                                              = 1,
	ESequenceSpeedRateType__BattleRate2                                              = 2,
	ESequenceSpeedRateType__BattleRate3                                              = 3
};

#pragma pack(pop)


static_assert(sizeof(UAkPortalComponent) == 0x02C0); // 704 bytes (0x0001F8 - 0x0002C0)
static_assert(sizeof(AAkAcousticPortal) == 0x0268); // 616 bytes (0x000258 - 0x000268)
static_assert(sizeof(UAkAudioType) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UAkAcousticTexture) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UAkAcousticTextureSetComponent) == 0x0210); // 528 bytes (0x0001F8 - 0x000210)
static_assert(sizeof(AAkAmbientSound) == 0x0260); // 608 bytes (0x000220 - 0x000260)
static_assert(sizeof(FAkMainOutputSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAkSpatialAudioSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAkCommonInitializationSettings) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FAkCommonInitializationSettingsWithSampleRate) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(FAkCommunicationSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAkCommunicationSettingsWithSystemInitialization) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FAkAdvancedInitializationSettings) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering) == 0x0038); // 56 bytes (0x00002C - 0x000038)
static_assert(sizeof(FAkAndroidAdvancedInitializationSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAkAndroidInitializationSettings) == 0x0100); // 256 bytes (0x000028 - 0x000100)
static_assert(sizeof(UAkPlatformInfo) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UAkAndroidPlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkAudioBank) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(FAkLocalizedMetaData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UAkAudioEvent) == 0x0110); // 272 bytes (0x000040 - 0x000110)
static_assert(sizeof(UAkGameObject) == 0x0218); // 536 bytes (0x0001F8 - 0x000218)
static_assert(sizeof(UAkComponent) == 0x03F0); // 1008 bytes (0x000218 - 0x0003F0)
static_assert(sizeof(UAkAudioInputComponent) == 0x0420); // 1056 bytes (0x0003F0 - 0x000420)
static_assert(sizeof(UAkAuxBus) == 0x00B0); // 176 bytes (0x000040 - 0x0000B0)
static_assert(sizeof(UAkBattleComponent) == 0x0410); // 1040 bytes (0x0003F0 - 0x000410)
static_assert(sizeof(UAkBattleSpeedRateSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FAkBoolPropertyToControl) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAkWwiseObjectDetails) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAkWwiseItemToControl) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UAkCheckBox) == 0x0EF0); // 3824 bytes (0x000140 - 0x000EF0)
static_assert(sizeof(UAkAssetData) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UAkAssetPlatformData) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UAkMediaAssetData) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UAkMediaAsset) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UAkLocalizedMediaAsset) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkExternalMediaAsset) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkFolder) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UDrawPortalComponent) == 0x0470); // 1136 bytes (0x000468 - 0x000470)
static_assert(sizeof(UDrawRoomComponent) == 0x0470); // 1136 bytes (0x000468 - 0x000470)
static_assert(sizeof(UAkEffectShareSet) == 0x00A8); // 168 bytes (0x000040 - 0x0000A8)
static_assert(sizeof(UAkGameplayStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAkCallbackInfo) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UAkEventCallbackInfo) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UAkMIDIEventCallbackInfo) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UAkMarkerCallbackInfo) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UAkDurationCallbackInfo) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FAkSegmentInfo) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UAkMusicSyncCallbackInfo) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(FAkGeometrySurfaceOverride) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAkAcousticSurface) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAkTriangle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAkGeometryData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UAkGeometryComponent) == 0x03A0); // 928 bytes (0x000210 - 0x0003A0)
static_assert(sizeof(UAkGroupValue) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(FAkHololensAdvancedInitializationSettings) == 0x003C); // 60 bytes (0x000038 - 0x00003C)
static_assert(sizeof(UAkHololensInitializationSettings) == 0x0100); // 256 bytes (0x000028 - 0x000100)
static_assert(sizeof(UAkHololensPlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkInitBank) == 0x0088); // 136 bytes (0x000040 - 0x000088)
static_assert(sizeof(FAkAudioSession) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UAkIOSInitializationSettings) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(sizeof(UAkIOSPlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkItemBoolPropertiesConv) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAkItemBoolProperties) == 0x0168); // 360 bytes (0x000128 - 0x000168)
static_assert(sizeof(UAkItemPropertiesConv) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAkItemProperties) == 0x0168); // 360 bytes (0x000128 - 0x000168)
static_assert(sizeof(UAkLateReverbComponent) == 0x0280); // 640 bytes (0x0001F8 - 0x000280)
static_assert(sizeof(UAkLinuxInitializationSettings) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(UAkLinuxPlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkMacInitializationSettings) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(UAkMacPlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkPlatformInitialisationSettingsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AAkReverbVolume) == 0x0290); // 656 bytes (0x000258 - 0x000290)
static_assert(sizeof(UAkRoomComponent) == 0x0250); // 592 bytes (0x000218 - 0x000250)
static_assert(sizeof(UAkRtpc) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(FAkGeometrySurfacePropertiesToMap) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAkAcousticTextureParams) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UAkSettings) == 0x0340); // 832 bytes (0x000028 - 0x000340)
static_assert(sizeof(UAkSettingsPerUser) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FAkPropertyToControl) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAkSlider) == 0x0710); // 1808 bytes (0x000128 - 0x000710)
static_assert(sizeof(AAkSpatialAudioVolume) == 0x0270); // 624 bytes (0x000258 - 0x000270)
static_assert(sizeof(AAkSpotReflector) == 0x0258); // 600 bytes (0x000220 - 0x000258)
static_assert(sizeof(UAkStateValue) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UAkSubmixInputComponent) == 0x0480); // 1152 bytes (0x000420 - 0x000480)
static_assert(sizeof(FAkSurfacePoly) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UAkSurfaceReflectorSetComponent) == 0x0240); // 576 bytes (0x000210 - 0x000240)
static_assert(sizeof(UAkSwitchValue) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UAkTrigger) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UAkTVOSInitializationSettings) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(sizeof(UAkTVOSPlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkWaapiCalls) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USAkWaapiFieldNamesConv) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAkWaapiJsonManager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAkWaapiUriConv) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAkWindowsAdvancedInitializationSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAkWindowsInitializationSettings) == 0x0100); // 256 bytes (0x000028 - 0x000100)
static_assert(sizeof(UAkWin32PlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkWin64PlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkWindowsPlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkWwiseTree) == 0x0168); // 360 bytes (0x000128 - 0x000168)
static_assert(sizeof(UAkWwiseTreeSelector) == 0x0188); // 392 bytes (0x000128 - 0x000188)
static_assert(sizeof(UAnimNotify_AkEventBase) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UMovieSceneAkAudioEventSection) == 0x0168); // 360 bytes (0x0000E8 - 0x000168)
static_assert(sizeof(UMovieSceneAkTrack) == 0x0090); // 144 bytes (0x000078 - 0x000090)
static_assert(sizeof(UMovieSceneAkAudioEventTrack) == 0x0098); // 152 bytes (0x000090 - 0x000098)
static_assert(sizeof(FMovieSceneTangentDataSerializationHelper) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMovieSceneFloatValueSerializationHelper) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMovieSceneFloatChannelSerializationHelper) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UMovieSceneAkAudioRTPCSection) == 0x0250); // 592 bytes (0x0000E8 - 0x000250)
static_assert(sizeof(UMovieSceneAkAudioRTPCTrack) == 0x0098); // 152 bytes (0x000090 - 0x000098)
static_assert(sizeof(UPostEventAsync) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UPostEventAtLocationAsync) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(FAKWaapiJsonObject) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAkWaapiSubscriptionId) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAkExternalSourceInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FAkMidiEventBase) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FAkMidiProgramChange) == 0x0003); // 3 bytes (0x000002 - 0x000003)
static_assert(sizeof(FAkMidiChannelAftertouch) == 0x0003); // 3 bytes (0x000002 - 0x000003)
static_assert(sizeof(FAkMidiNoteAftertouch) == 0x0004); // 4 bytes (0x000002 - 0x000004)
static_assert(sizeof(FAkMidiPitchBend) == 0x0008); // 8 bytes (0x000002 - 0x000008)
static_assert(sizeof(FAkMidiCc) == 0x0004); // 4 bytes (0x000002 - 0x000004)
static_assert(sizeof(FAkMidiNoteOnOff) == 0x0004); // 4 bytes (0x000002 - 0x000004)
static_assert(sizeof(FAkMidiGeneric) == 0x0004); // 4 bytes (0x000002 - 0x000004)
static_assert(sizeof(FAkOutputSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAkChannelMask) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FAkCommunicationSettingsWithCommSelection) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FAkReverbDescriptor) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAkSurfaceEdgeInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAkSurfaceEdgeVerts) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAkWaapiFieldNames) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAkWaapiUri) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMovieSceneAkAudioEventTemplate) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FMovieSceneAkAudioRTPCTemplate) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(offsetof(UAkPortalComponent, InitialState) == 0x01F9);
static_assert(offsetof(UAkPortalComponent, ObstructionCollisionChannel) == 0x0200);
static_assert(offsetof(AAkAcousticPortal, Portal) == 0x0258);
static_assert(offsetof(AAkAcousticPortal, InitialState) == 0x0260);
static_assert(offsetof(UAkAudioType, UserData) == 0x0030);
static_assert(offsetof(UAkAcousticTexture, AcousticTextureCookedData) == 0x0040);
static_assert(offsetof(AAkAmbientSound, AkAudioEvent) == 0x0220);
static_assert(offsetof(AAkAmbientSound, AkComponent) == 0x0228);
static_assert(offsetof(FAkMainOutputSettings, AudioDeviceShareSet) == 0x0000);
static_assert(offsetof(FAkMainOutputSettings, PanningRule) == 0x0014);
static_assert(offsetof(FAkMainOutputSettings, ChannelConfigType) == 0x0018);
static_assert(offsetof(FAkCommonInitializationSettings, MainOutputSettings) == 0x0010);
static_assert(offsetof(FAkCommonInitializationSettings, SpatialAudioSettings) == 0x0040);
static_assert(offsetof(FAkCommunicationSettings, NetworkName) == 0x0008);
static_assert(offsetof(UAkAndroidInitializationSettings, CommonSettings) == 0x0030);
static_assert(offsetof(UAkAndroidInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkAndroidInitializationSettings, AdvancedSettings) == 0x00C0);
static_assert(offsetof(UAkAudioEvent, EventCookedData) == 0x0050);
static_assert(offsetof(UAkAudioEvent, RequiredBank) == 0x00B0);
static_assert(offsetof(UAkAudioEvent, LocalizedMetaDatas) == 0x00B8);
static_assert(offsetof(UAkGameObject, AkAudioEvent) == 0x01F8);
static_assert(offsetof(UAkGameObject, EventName) == 0x0200);
static_assert(offsetof(UAkComponent, OcclusionCollisionChannel) == 0x0220);
static_assert(offsetof(UAkComponent, EarlyReflectionAuxBus) == 0x0230);
static_assert(offsetof(UAkComponent, EarlyReflectionAuxBusName) == 0x0238);
static_assert(offsetof(UAkAuxBus, AuxBusCookedData) == 0x0040);
static_assert(offsetof(UAkAuxBus, RequiredBank) == 0x00A0);
static_assert(offsetof(UAkBattleComponent, AkAudioEvent_x1) == 0x03F0);
static_assert(offsetof(UAkBattleComponent, AkAudioEvent_x2) == 0x03F8);
static_assert(offsetof(UAkBattleComponent, AkAudioEvent_x3) == 0x0400);
static_assert(offsetof(FAkBoolPropertyToControl, ItemProperty) == 0x0000);
static_assert(offsetof(FAkWwiseObjectDetails, ItemName) == 0x0000);
static_assert(offsetof(FAkWwiseObjectDetails, ItemPath) == 0x0010);
static_assert(offsetof(FAkWwiseObjectDetails, ItemId) == 0x0020);
static_assert(offsetof(FAkWwiseItemToControl, ItemPicked) == 0x0000);
static_assert(offsetof(FAkWwiseItemToControl, ItemPath) == 0x0030);
static_assert(offsetof(UAkCheckBox, CheckedState) == 0x05E8);
static_assert(offsetof(UAkCheckBox, WidgetStyle) == 0x0600);
static_assert(offsetof(UAkCheckBox, HorizontalAlignment) == 0x0E10);
static_assert(offsetof(UAkCheckBox, ThePropertyToControl) == 0x0E18);
static_assert(offsetof(UAkCheckBox, ItemToControl) == 0x0E28);
static_assert(offsetof(UAkAssetPlatformData, CurrentAssetData) == 0x0028);
static_assert(offsetof(UAkMediaAsset, MediaAssetDataPerPlatform) == 0x0028);
static_assert(offsetof(UAkEffectShareSet, ShareSetCookedData) == 0x0040);
static_assert(offsetof(UAkCallbackInfo, AkComponent) == 0x0028);
static_assert(offsetof(UAkMarkerCallbackInfo, Label) == 0x0040);
static_assert(offsetof(UAkMusicSyncCallbackInfo, SegmentInfo) == 0x0034);
static_assert(offsetof(UAkMusicSyncCallbackInfo, MusicSyncType) == 0x0058);
static_assert(offsetof(UAkMusicSyncCallbackInfo, UserCueName) == 0x0060);
static_assert(offsetof(FAkGeometrySurfaceOverride, AcousticTexture) == 0x0000);
static_assert(offsetof(FAkAcousticSurface, Name) == 0x0008);
static_assert(offsetof(FAkGeometryData, Vertices) == 0x0000);
static_assert(offsetof(FAkGeometryData, Surfaces) == 0x0010);
static_assert(offsetof(FAkGeometryData, Triangles) == 0x0020);
static_assert(offsetof(FAkGeometryData, ToOverrideAcousticTexture) == 0x0030);
static_assert(offsetof(FAkGeometryData, ToOverrideOcclusion) == 0x0040);
static_assert(offsetof(UAkGeometryComponent, MeshType) == 0x0210);
static_assert(offsetof(UAkGeometryComponent, StaticMeshSurfaceOverride) == 0x0220);
static_assert(offsetof(UAkGeometryComponent, CollisionMeshSurfaceOverride) == 0x0270);
static_assert(offsetof(UAkGeometryComponent, AssociatedRoom) == 0x0290);
static_assert(offsetof(UAkGeometryComponent, GeometryData) == 0x02A8);
static_assert(offsetof(UAkGeometryComponent, SurfaceAreas) == 0x02F8);
static_assert(offsetof(UAkGroupValue, GroupValueCookedData) == 0x0040);
static_assert(offsetof(UAkHololensInitializationSettings, CommonSettings) == 0x0030);
static_assert(offsetof(UAkHololensInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkHololensInitializationSettings, AdvancedSettings) == 0x00C0);
static_assert(offsetof(UAkInitBank, InitBankCookedData) == 0x0040);
static_assert(offsetof(FAkAudioSession, AudioSessionCategory) == 0x0000);
static_assert(offsetof(FAkAudioSession, AudioSessionMode) == 0x0008);
static_assert(offsetof(UAkIOSInitializationSettings, CommonSettings) == 0x0030);
static_assert(offsetof(UAkIOSInitializationSettings, AudioSession) == 0x00A0);
static_assert(offsetof(UAkIOSInitializationSettings, CommunicationSettings) == 0x00B0);
static_assert(offsetof(UAkIOSInitializationSettings, AdvancedSettings) == 0x00D0);
static_assert(offsetof(UAkLateReverbComponent, AuxBus) == 0x0210);
static_assert(offsetof(UAkLateReverbComponent, AuxBusName) == 0x0218);
static_assert(offsetof(UAkLateReverbComponent, AuxBusManual) == 0x0230);
static_assert(offsetof(UAkLinuxInitializationSettings, CommonSettings) == 0x0030);
static_assert(offsetof(UAkLinuxInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkLinuxInitializationSettings, AdvancedSettings) == 0x00C0);
static_assert(offsetof(UAkMacInitializationSettings, CommonSettings) == 0x0030);
static_assert(offsetof(UAkMacInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkMacInitializationSettings, AdvancedSettings) == 0x00C0);
static_assert(offsetof(AAkReverbVolume, AuxBus) == 0x0260);
static_assert(offsetof(AAkReverbVolume, AuxBusName) == 0x0268);
static_assert(offsetof(AAkReverbVolume, LateReverbComponent) == 0x0288);
static_assert(offsetof(UAkRoomComponent, GeometryComponent) == 0x0238);
static_assert(offsetof(UAkRtpc, GameParameterCookedData) == 0x0040);
static_assert(offsetof(FAkGeometrySurfacePropertiesToMap, AcousticTexture) == 0x0000);
static_assert(offsetof(FAkAcousticTextureParams, AbsorptionValues) == 0x0000);
static_assert(offsetof(UAkSettings, WwiseProjectPath) == 0x0030);
static_assert(offsetof(UAkSettings, WwiseSoundDataFolder) == 0x0040);
static_assert(offsetof(UAkSettings, GeneratedSoundBanksFolder) == 0x0050);
static_assert(offsetof(UAkSettings, WwiseStagingDirectory) == 0x0060);
static_assert(offsetof(UAkSettings, DefaultOcclusionCollisionChannel) == 0x0074);
static_assert(offsetof(UAkSettings, DefaultFitToGeometryCollisionChannel) == 0x0075);
static_assert(offsetof(UAkSettings, DefaultReverbAuxBus) == 0x00D0);
static_assert(offsetof(UAkSettings, HFDampingName) == 0x0148);
static_assert(offsetof(UAkSettings, DecayEstimateName) == 0x0158);
static_assert(offsetof(UAkSettings, TimeToFirstReflectionName) == 0x0168);
static_assert(offsetof(UAkSettings, HFDampingRTPC) == 0x0178);
static_assert(offsetof(UAkSettings, DecayEstimateRTPC) == 0x01A0);
static_assert(offsetof(UAkSettings, TimeToFirstReflectionRTPC) == 0x01C8);
static_assert(offsetof(UAkSettings, AudioInputEvent) == 0x01F0);
static_assert(offsetof(UAkSettings, AcousticTextureParamsMap) == 0x0218);
static_assert(offsetof(UAkSettings, CommandletCommitMessage) == 0x0270);
static_assert(offsetof(UAkSettings, UnrealCultureToWwiseCulture) == 0x0280);
static_assert(offsetof(UAkSettings, DefaultAssetCreationPath) == 0x02D0);
static_assert(offsetof(UAkSettings, InitBank) == 0x02E0);
static_assert(offsetof(UAkSettings, AudioRouting) == 0x0308);
static_assert(offsetof(UAkSettings, WwiseWindowsInstallationPath) == 0x0318);
static_assert(offsetof(UAkSettings, WwiseMacInstallationPath) == 0x0328);
static_assert(offsetof(UAkSettingsPerUser, WwiseWindowsInstallationPath) == 0x0028);
static_assert(offsetof(UAkSettingsPerUser, WwiseMacInstallationPath) == 0x0038);
static_assert(offsetof(UAkSettingsPerUser, GeneratedSoundBanksFolderUserOverride) == 0x0048);
static_assert(offsetof(UAkSettingsPerUser, WaapiIPAddress) == 0x0058);
static_assert(offsetof(FAkPropertyToControl, ItemProperty) == 0x0000);
static_assert(offsetof(UAkSlider, WidgetStyle) == 0x0140);
static_assert(offsetof(UAkSlider, Orientation) == 0x0640);
static_assert(offsetof(UAkSlider, SliderBarColor) == 0x0644);
static_assert(offsetof(UAkSlider, SliderHandleColor) == 0x0654);
static_assert(offsetof(UAkSlider, ThePropertyToControl) == 0x0670);
static_assert(offsetof(UAkSlider, ItemToControl) == 0x0680);
static_assert(offsetof(AAkSpatialAudioVolume, SurfaceReflectorSet) == 0x0258);
static_assert(offsetof(AAkSpatialAudioVolume, LateReverb) == 0x0260);
static_assert(offsetof(AAkSpatialAudioVolume, Room) == 0x0268);
static_assert(offsetof(AAkSpotReflector, EarlyReflectionAuxBus) == 0x0220);
static_assert(offsetof(AAkSpotReflector, EarlyReflectionAuxBusName) == 0x0228);
static_assert(offsetof(AAkSpotReflector, AcousticTexture) == 0x0238);
static_assert(offsetof(AAkSpotReflector, RoomOverride) == 0x0250);
static_assert(offsetof(UAkSubmixInputComponent, SubmixToRecord) == 0x0428);
static_assert(offsetof(FAkSurfacePoly, Texture) == 0x0000);
static_assert(offsetof(UAkSurfaceReflectorSetComponent, AcousticPolys) == 0x0218);
static_assert(offsetof(UAkSurfaceReflectorSetComponent, AssociatedRoom) == 0x0230);
static_assert(offsetof(UAkTrigger, TriggerCookedData) == 0x0040);
static_assert(offsetof(UAkTVOSInitializationSettings, CommonSettings) == 0x0030);
static_assert(offsetof(UAkTVOSInitializationSettings, AudioSession) == 0x00A0);
static_assert(offsetof(UAkTVOSInitializationSettings, CommunicationSettings) == 0x00B0);
static_assert(offsetof(UAkTVOSInitializationSettings, AdvancedSettings) == 0x00D0);
static_assert(offsetof(UAkWindowsInitializationSettings, CommonSettings) == 0x0030);
static_assert(offsetof(UAkWindowsInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkWindowsInitializationSettings, AdvancedSettings) == 0x00C0);
static_assert(offsetof(UAnimNotify_AkEventBase, SpeedRateType) == 0x0038);
static_assert(offsetof(UMovieSceneAkAudioEventSection, Event) == 0x0110);
static_assert(offsetof(UMovieSceneAkAudioEventSection, EventName) == 0x0128);
static_assert(offsetof(UMovieSceneAkAudioEventSection, SpeedRateType) == 0x0138);
static_assert(offsetof(UMovieSceneAkAudioEventSection, MaxDurationSourceID) == 0x0140);
static_assert(offsetof(UMovieSceneAkTrack, Sections) == 0x0078);
static_assert(offsetof(FMovieSceneTangentDataSerializationHelper, TangentWeightMode) == 0x0008);
static_assert(offsetof(FMovieSceneFloatValueSerializationHelper, InterpMode) == 0x0004);
static_assert(offsetof(FMovieSceneFloatValueSerializationHelper, TangentMode) == 0x0005);
static_assert(offsetof(FMovieSceneFloatValueSerializationHelper, Tangent) == 0x0008);
static_assert(offsetof(FMovieSceneFloatChannelSerializationHelper, PreInfinityExtrap) == 0x0000);
static_assert(offsetof(FMovieSceneFloatChannelSerializationHelper, PostInfinityExtrap) == 0x0001);
static_assert(offsetof(FMovieSceneFloatChannelSerializationHelper, Times) == 0x0008);
static_assert(offsetof(FMovieSceneFloatChannelSerializationHelper, Values) == 0x0018);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, RTPC) == 0x00E8);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, Name) == 0x00F0);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, FloatCurve) == 0x0100);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, FloatChannelSerializationHelper) == 0x0180);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, RTPCChannel) == 0x01B0);
static_assert(offsetof(FAkExternalSourceInfo, ExternalSrcName) == 0x0000);
static_assert(offsetof(FAkExternalSourceInfo, CodecID) == 0x0010);
static_assert(offsetof(FAkExternalSourceInfo, Filename) == 0x0018);
static_assert(offsetof(FAkExternalSourceInfo, ExternalSourceAsset) == 0x0028);
static_assert(offsetof(FAkMidiEventBase, Type) == 0x0000);
static_assert(offsetof(FAkMidiCc, Cc) == 0x0002);
static_assert(offsetof(FAkOutputSettings, AudioDeviceShareSetName) == 0x0000);
static_assert(offsetof(FAkOutputSettings, PanRule) == 0x0014);
static_assert(offsetof(FAkOutputSettings, ChannelConfig) == 0x0015);
static_assert(offsetof(FAkCommunicationSettingsWithCommSelection, CommunicationSystem) == 0x0018);
static_assert(offsetof(FAkReverbDescriptor, Primitive) == 0x0018);
static_assert(offsetof(FAkWaapiFieldNames, FieldName) == 0x0000);
static_assert(offsetof(FAkWaapiUri, Uri) == 0x0000);
static_assert(offsetof(FMovieSceneAkAudioEventTemplate, Section) == 0x0020);
static_assert(offsetof(FMovieSceneAkAudioRTPCTemplate, Section) == 0x0020);

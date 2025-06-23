
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LipSyncRuntime
/// dependency: MediaAssets
/// dependency: MovieScene
/// dependency: Slate

/// Struct /Script/StorylineRuntime.MovieSceneSubtitleData
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneSubtitleData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   SubtitleId                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FText)                                     SubtitleText                                                OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bShowHoloWhenStart                                          OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bHideHoloWhenFinish                                         OFFSET(get<bool>, {0x21, 1, 0, 0})
};

/// Class /Script/StorylineRuntime.MovieSceneSubtitleSection
/// Size: 0x0028 (0x0000E8 - 0x000110)
class UMovieSceneSubtitleSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FMovieSceneSubtitleData)                   SubtitleData                                                OFFSET(getStruct<T>, {0xE8, 40, 0, 0})
};

/// Class /Script/StorylineRuntime.MovieSceneSubtitleTrack
/// Size: 0x0018 (0x000078 - 0x000090)
class UMovieSceneSubtitleTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/StorylineRuntime.NPCInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FNPCInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   Asset                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	DMember(float)                                     TriggerRadius                                               OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Class /Script/StorylineRuntime.Storyline
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UStoryline : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(int32_t)                                   StorylineId                                                 OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(TMap<FString, FNPCInfo>)                   NPCs                                                        OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TArray<class UStorylineNode*>)             Data                                                        OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bInterruptGame                                              OFFSET(get<bool>, {0x90, 1, 0, 0})
	DMember(bool)                                      bHasBattle                                                  OFFSET(get<bool>, {0x91, 1, 0, 0})
	DMember(bool)                                      bKeepUI                                                     OFFSET(get<bool>, {0x92, 1, 0, 0})
	CMember(EStoryEndState)                            EndState                                                    OFFSET(get<T>, {0x93, 1, 0, 0})
	DMember(int32_t)                                   EndpointId                                                  OFFSET(get<int32_t>, {0x94, 4, 0, 0})
	CMember(EStoryFriEndState)                         FriEndState                                                 OFFSET(get<T>, {0x98, 1, 0, 0})
	DMember(int32_t)                                   FriEndId                                                    OFFSET(get<int32_t>, {0x9C, 4, 0, 0})
	DMember(bool)                                      bMain                                                       OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(bool)                                      bSaveProgress                                               OFFSET(get<bool>, {0xA1, 1, 0, 0})
	DMember(bool)                                      bAutoPassWhenExit                                           OFFSET(get<bool>, {0xA2, 1, 0, 0})
	CMember(EStoryHomeEndState)                        HomeEndState                                                OFFSET(get<T>, {0xA3, 1, 0, 0})
	DMember(float)                                     SofaCameraAngle                                             OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(int32_t)                                   EndCameraId                                                 OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(float)                                     EndCameraBlendTime                                          OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bDelayInterrupt                                             OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bStartWithBlack                                             OFFSET(get<bool>, {0xB1, 1, 0, 0})
	SMember(FString)                                   PlayerInitIdle                                              OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	DMember(bool)                                      bKeepFade                                                   OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(bool)                                      bLinkNextStory                                              OFFSET(get<bool>, {0xC9, 1, 0, 0})
	DMember(bool)                                      bKeepToBattle                                               OFFSET(get<bool>, {0xCA, 1, 0, 0})
	DMember(bool)                                      bKeepSceneUI                                                OFFSET(get<bool>, {0xCB, 1, 0, 0})
	DMember(bool)                                      bSmoothEnter                                                OFFSET(get<bool>, {0xCC, 1, 0, 0})
	DMember(bool)                                      bHideMonsters                                               OFFSET(get<bool>, {0xCD, 1, 0, 0})
	CMember(EStoryMode)                                Mode                                                        OFFSET(get<T>, {0xCE, 1, 0, 0})


	/// Functions
	// Function /Script/StorylineRuntime.Storyline.HasChangeLevelElements
	// bool HasChangeLevelElements();                                                                                           // [0x1201c50] Final|Native|Public  
	// Function /Script/StorylineRuntime.Storyline.GetVisibleNPCs
	// void GetVisibleNPCs(TSet<FString>& NPCNames);                                                                            // [0x1201b30] Final|Native|Public|HasOutParms 
	// Function /Script/StorylineRuntime.Storyline.GetValidActionsByFlag
	// TArray<UStorylineAction*> GetValidActionsByFlag(FString Flag);                                                           // [0x12018d0] Final|Native|Public  
	// Function /Script/StorylineRuntime.Storyline.GetToCacheCollectInfos
	// TSet<FString> GetToCacheCollectInfos();                                                                                  // [0x12016c0] Final|Native|Public  
	// Function /Script/StorylineRuntime.Storyline.GetStorylineContext
	// class UStorylineContext* GetStorylineContext();                                                                          // [0x1201690] Final|Native|Static|Public 
};

/// Class /Script/StorylineRuntime.StorylineAction
/// Size: 0x0028 (0x000028 - 0x000050)
class UStorylineAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bIsFree                                                     OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     StartDelay                                                  OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     FinishDelay                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x3C, 16, 0, 0})
	DMember(int32_t)                                   TypeMask                                                    OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineDialogAction
/// Size: 0x0090 (0x000050 - 0x0000E0)
class UStorylineDialogAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(int32_t)                                   StyleId                                                     OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   ConfigId                                                    OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification                                               OFFSET(get<T>, {0x58, 1, 0, 0})
	CMember(TArray<int32_t>)                           OptionConfigIds                                             OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<int32_t>)                           OptionStyleIds                                              OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<int32_t>)                           OptionRequireFlowNodes                                      OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<bool>)                              OptionGenders                                               OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(float)                                     interval                                                    OFFSET(get<float>, {0xA0, 4, 0, 0})
	SMember(FString)                                   GameWorldTime                                               OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   SpeakNPCName                                                OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	DMember(bool)                                      bSpineLipAnim                                               OFFSET(get<bool>, {0xC8, 1, 0, 0})
	CMember(class ULipSyncFrameSequence*)              LipSeq                                                      OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(bool)                                      bWithTextEffect                                             OFFSET(get<bool>, {0xD8, 1, 0, 0})
	CMember(EDialogImgSide)                            ImgSide                                                     OFFSET(get<T>, {0xD9, 1, 0, 0})
};

/// Struct /Script/StorylineRuntime.AppearSetting
/// Size: 0x0050 (0x000000 - 0x000050)
class FAppearSetting : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   side                                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   seat                                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     fx_time                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FString)                                   fx_tag                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   fx_name                                                     OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(float)                                     dissolve_time                                               OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FString)                                   dissolve_name                                               OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(float)                                     dissolve_duration                                           OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineBattleAppear
/// Size: 0x0010 (0x000050 - 0x000060)
class UStorylineBattleAppear : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FAppearSetting>)                    AppearSettings                                              OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineBattleDie
/// Size: 0x0018 (0x000050 - 0x000068)
class UStorylineBattleDie : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FString)                                   NPCName                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   DieType                                                     OFFSET(get<int32_t>, {0x60, 4, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineChangeBattleABP
/// Size: 0x0018 (0x000050 - 0x000068)
class UStorylineChangeBattleABP : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FString)                                   NPCName                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(class UClass*)                             AnimInstance                                                OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineBattleCutsceneStartNext
/// Size: 0x0000 (0x000050 - 0x000050)
class UStorylineBattleCutsceneStartNext : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/StorylineRuntime.StorylineShowBattleUI
/// Size: 0x0008 (0x000050 - 0x000058)
class UStorylineShowBattleUI : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      IsShow                                                      OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineShowPvpCountdownUI
/// Size: 0x0008 (0x000050 - 0x000058)
class UStorylineShowPvpCountdownUI : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      IsShow                                                      OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineShowBattleFigure
/// Size: 0x0010 (0x000050 - 0x000060)
class UStorylineShowBattleFigure : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   side                                                        OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   SeatId                                                      OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(bool)                                      IsShow                                                      OFFSET(get<bool>, {0x58, 1, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylinePresetSeq
/// Size: 0x0010 (0x000050 - 0x000060)
class UStorylinePresetSeq : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FString)                                   PresetTag                                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineCrackScreenAction
/// Size: 0x0000 (0x000050 - 0x000050)
class UStorylineCrackScreenAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/StorylineRuntime.StorylineAnimAction
/// Size: 0x0098 (0x000050 - 0x0000E8)
class UStorylineAnimAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FString)                                   NPCName                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(EStoryAnimType)                            AnimType                                                    OFFSET(get<T>, {0x60, 1, 0, 0})
	SMember(FString)                                   IdleName                                                    OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   ActName                                                     OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(class UAnimSequence*)                      Asset                                                       OFFSET(get<T>, {0x88, 8, 0, 0})
	DMember(bool)                                      bEnableLookAtControl                                        OFFSET(get<bool>, {0x90, 1, 0, 0})
	SMember(FRotator)                                  HeadAdditiveRotator                                         OFFSET(getStruct<T>, {0x94, 12, 0, 0})
	SMember(FRotator)                                  SpineAdditiveRotator                                        OFFSET(getStruct<T>, {0xA0, 12, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0xAC, 4, 0, 0})
	CMember(EAlphaBlendOption)                         BlendMode                                                   OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(class UCurveFloat*)                        CustomBlendCurve                                            OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UAnimSequence*)                      BattleAnim                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UAnimMontage*)                       MontageAsset                                                OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(float)                                     MontageStartPosition                                        OFFSET(get<float>, {0xD0, 4, 0, 0})
	SMember(FString)                                   MontageStartSection                                         OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineExpressionAction
/// Size: 0x0020 (0x000050 - 0x000070)
class UStorylineExpressionAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   NPCName                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   ExpressionName                                              OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineAutoLookAtAction
/// Size: 0x0038 (0x000050 - 0x000088)
class UStorylineAutoLookAtAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   NPCName                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   LookAtTarget                                                OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   LookAtBone                                                  OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bOnlyCurrent                                                OFFSET(get<bool>, {0x80, 1, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineAsideAction
/// Size: 0x0018 (0x000050 - 0x000068)
class UStorylineAsideAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(int32_t)                                   StyleId                                                     OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   ConfigId                                                    OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification                                               OFFSET(get<T>, {0x58, 1, 0, 0})
	DMember(float)                                     interval                                                    OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(bool)                                      bWithTextEffect                                             OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineCommandAction
/// Size: 0x0060 (0x000050 - 0x0000B0)
class UStorylineCommandAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FString)                                   Command                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TMap<FString, FString>)                    Payload                                                     OFFSET(get<T>, {0x60, 80, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineFadeAction
/// Size: 0x0030 (0x000050 - 0x000080)
class UStorylineFadeAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bIsFadeIn                                                   OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     StartValue                                                  OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     AimValue                                                    OFFSET(get<float>, {0x5C, 4, 0, 0})
	SMember(FLinearColor)                              FadeColor                                                   OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(EAlphaBlendOption)                         BlendMode                                                   OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(class UCurveFloat*)                        CustomBlendCurve                                            OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Struct /Script/StorylineRuntime.PPParamControlData
/// Size: 0x0018 (0x000000 - 0x000018)
class FPPParamControlData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     StartValue                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     EndValue                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EAlphaBlendOption)                         BlendMode                                                   OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(class UCurveFloat*)                        CustomBlendCurve                                            OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylinePostProcessAction
/// Size: 0x0070 (0x000050 - 0x0000C0)
class UStorylinePostProcessAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FString)                                   EffectName                                                  OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bTurnOn                                                     OFFSET(get<bool>, {0x60, 1, 0, 0})
	CMember(TMap<FString, FPPParamControlData>)        ParamsControl                                               OFFSET(get<T>, {0x68, 80, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0xB8, 4, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineMovieAction
/// Size: 0x0020 (0x000050 - 0x000070)
class UStorylineMovieAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   UIID                                                        OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	SMember(FString)                                   Asset                                                       OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bKeepToBattle                                               OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineSceneMovieAction
/// Size: 0x0010 (0x000050 - 0x000060)
class UStorylineSceneMovieAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UMediaPlayer*)                       Player                                                      OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UFileMediaSource*)                   Source                                                      OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineSoundAction
/// Size: 0x0068 (0x000050 - 0x0000B8)
class UStorylineSoundAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FString)                                   SoundName                                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TWeakObjectPtr<class UAkAudioEvent*>)      SoundEvent                                                  OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(EStorySoundType)                           Type                                                        OFFSET(get<T>, {0x88, 1, 0, 0})
	SMember(FString)                                   NPCName                                                     OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FString)                                   BGMLayer                                                    OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(bool)                                      bIsStopEvent                                                OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineSequenceAction
/// Size: 0x00A0 (0x000050 - 0x0000F0)
class UStorylineSequenceAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   SequenceName                                                OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TWeakObjectPtr<class ULevelSequence*>)     SequenceAsset                                               OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TMap<FString, FString>)                    BindingMap                                                  OFFSET(get<T>, {0x88, 80, 0, 0})
	SMember(FString)                                   CameraTrackName                                             OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	DMember(bool)                                      bUseBorderUI                                                OFFSET(get<bool>, {0xE8, 1, 0, 0})
	DMember(bool)                                      bKeepBorderUI                                               OFFSET(get<bool>, {0xE9, 1, 0, 0})
	DMember(bool)                                      bKeepToBattle                                               OFFSET(get<bool>, {0xEA, 1, 0, 0})
	DMember(bool)                                      bHidePlayer                                                 OFFSET(get<bool>, {0xEB, 1, 0, 0})
	DMember(bool)                                      bHideFriday                                                 OFFSET(get<bool>, {0xEC, 1, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineCameraAction
/// Size: 0x0680 (0x000050 - 0x0006D0)
class UStorylineCameraAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1744;

public:
	CMember(EStoryCameraActionType)                    Type                                                        OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(EAlphaBlendOption)                         BlendMode                                                   OFFSET(get<T>, {0x51, 1, 0, 0})
	CMember(class UCurveFloat*)                        CustomBlendCurve                                            OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(float)                                     TransSpeed                                                  OFFSET(get<float>, {0x60, 4, 0, 0})
	SMember(FString)                                   TargetNPCName                                               OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   CameraName                                                  OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   SequenceName                                                OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	CMember(TWeakObjectPtr<class ULevelSequence*>)     SequenceAsset                                               OFFSET(get<T>, {0x98, 8, 0, 0})
	DMember(bool)                                      bGoToEndWhenSkip                                            OFFSET(get<bool>, {0xC0, 1, 0, 0})
	SMember(FTransform)                                DirectCameraTransform                                       OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
	DMember(float)                                     DirectCameraFOV                                             OFFSET(get<float>, {0x100, 4, 0, 0})
	CMember(class UClass*)                             Shake                                                       OFFSET(get<T>, {0x108, 8, 0, 0})
	DMember(bool)                                      bOverridePP                                                 OFFSET(get<bool>, {0x110, 1, 0, 0})
	SMember(FPostProcessSettings)                      PPSetting                                                   OFFSET(getStruct<T>, {0x120, 1360, 0, 0})
	DMember(bool)                                      bAutoAdjusCameraHeight                                      OFFSET(get<bool>, {0x670, 1, 0, 0})
	SMember(FString)                                   RefNPCName                                                  OFFSET(getStruct<T>, {0x678, 16, 0, 0})
	SMember(FString)                                   RefBoneName                                                 OFFSET(getStruct<T>, {0x688, 16, 0, 0})
	DMember(float)                                     RefScreenRatio                                              OFFSET(get<float>, {0x698, 4, 0, 0})
	DMember(bool)                                      bEnableLightAdjust                                          OFFSET(get<bool>, {0x69C, 1, 0, 0})
	CMember(EStoryLightAdjustType)                     LightAdjustType                                             OFFSET(get<T>, {0x69D, 1, 0, 0})
	SMember(FString)                                   LightAimNPCName                                             OFFSET(getStruct<T>, {0x6A0, 16, 0, 0})
	DMember(float)                                     LightAdjustYaw                                              OFFSET(get<float>, {0x6B0, 4, 0, 0})
	CMember(ECameraGenderType)                         GenderType                                                  OFFSET(get<T>, {0x6B4, 1, 0, 0})
	SMember(FRotator)                                  GirlExtraRot                                                OFFSET(getStruct<T>, {0x6B8, 12, 0, 0})
	SMember(FVector)                                   GirlExtraVec                                                OFFSET(getStruct<T>, {0x6C4, 12, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineUnitMoveAction
/// Size: 0x0048 (0x000050 - 0x000098)
class UStorylineUnitMoveAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(EStoryUnitMoveActionType)                  Type                                                        OFFSET(get<T>, {0x50, 1, 0, 0})
	SMember(FString)                                   UnitName                                                    OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FVector)                                   DestLocation                                                OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	SMember(FRotator)                                  DestRotation                                                OFFSET(getStruct<T>, {0x74, 12, 0, 0})
	SMember(FString)                                   DestZoneName                                                OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	DMember(float)                                     MoveSpeed                                                   OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(bool)                                      bWalkOrRun                                                  OFFSET(get<bool>, {0x94, 1, 0, 0})
	DMember(bool)                                      bChangeZoneImmediate                                        OFFSET(get<bool>, {0x95, 1, 0, 0})
	DMember(bool)                                      bEnableAnim                                                 OFFSET(get<bool>, {0x96, 1, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineFriControlAction
/// Size: 0x0090 (0x000050 - 0x0000E0)
class UStorylineFriControlAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(EStoryFriControlType)                      Type                                                        OFFSET(get<T>, {0x50, 1, 0, 0})
	SMember(FTransform)                                FlyToTransform                                              OFFSET(getStruct<T>, {0x60, 48, 0, 0})
	SMember(FString)                                   FlyToSequenceName                                           OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	CMember(TWeakObjectPtr<class ULevelSequence*>)     FlyToSequenceAsset                                          OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FString)                                   FriTrackName                                                OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	DMember(int32_t)                                   FlySeqBlendFrameNum                                         OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineSceneInteractAction
/// Size: 0x0068 (0x000050 - 0x0000B8)
class UStorylineSceneInteractAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(EStorySceneInteractType)                   Type                                                        OFFSET(get<T>, {0x50, 1, 0, 0})
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(bool)                                      bAutoDisableControlUI                                       OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(TMap<FString, FString>)                    Payload                                                     OFFSET(get<T>, {0x60, 80, 0, 0})
	DMember(bool)                                      bHideSceneUIWhenFreeMove                                    OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineNPCControlAction
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UStorylineNPCControlAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TMap<FString, EStoryNPCControlState>)      Controls                                                    OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineNPCDeployAction
/// Size: 0x0060 (0x000050 - 0x0000B0)
class UStorylineNPCDeployAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EStoryNPCDeployMethod)                     method                                                      OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TMap<FString, FString>)                    Slot2NPC                                                    OFFSET(get<T>, {0x58, 80, 0, 0})
	DMember(int32_t)                                   TemplateStorylineId                                         OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineCameraMoveAction
/// Size: 0x0038 (0x000050 - 0x000088)
class UStorylineCameraMoveAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(EStoryCameraMoveType)                      Type                                                        OFFSET(get<T>, {0x50, 1, 0, 0})
	DMember(float)                                     MoveDuration                                                OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bGiveUpWhenSkip                                             OFFSET(get<bool>, {0x58, 1, 0, 0})
	SMember(FVector)                                   Center                                                      OFFSET(getStruct<T>, {0x5C, 12, 0, 0})
	DMember(float)                                     HorizontalSpeed                                             OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     VerticalSpeed                                               OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     XSpeed                                                      OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     YSpeed                                                      OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     ZSpeed                                                      OFFSET(get<float>, {0x78, 4, 0, 0})
	CMember(EStoryCameraMoveSpace)                     LineMoveSpace                                               OFFSET(get<T>, {0x7C, 1, 0, 0})
	DMember(float)                                     CenterLength                                                OFFSET(get<float>, {0x80, 4, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineCameraLookAtAction
/// Size: 0x0030 (0x000050 - 0x000080)
class UStorylineCameraLookAtAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bEnable                                                     OFFSET(get<bool>, {0x50, 1, 0, 0})
	SMember(FString)                                   NPCName                                                     OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   BoneName                                                    OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	DMember(float)                                     Threshold                                                   OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x7C, 4, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylinePopUIAction
/// Size: 0x0008 (0x000050 - 0x000058)
class UStorylinePopUIAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   WidgetId                                                    OFFSET(get<int32_t>, {0x50, 4, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineGetPropAction
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UStorylineGetPropAction : public UStorylineAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TMap<int32_t, int32_t>)                    Props                                                       OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineActionInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UStorylineActionInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/StorylineRuntime.StorylineActionInterface.GetVisibleNPCNames
	// void GetVisibleNPCNames(TSet<FString>& NPCNames);                                                                        // [0x1201a10] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/StorylineRuntime.StorylineActionInterface.GetToCacheObjectCollectInfos
	// void GetToCacheObjectCollectInfos(TSet<FString>& infos);                                                                 // [0x12017b0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/StorylineRuntime.StorylineActionInterface.GetNPCNames
	// void GetNPCNames(TArray<FString>& NPCNames);                                                                             // [0x1201590] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/StorylineRuntime.StorylineActionInterface.GetDescription
	// FString GetDescription();                                                                                                // [0x12013e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/StorylineRuntime.StorylineActionInterface.GetActionFlag
	// FString GetActionFlag();                                                                                                 // [0x1201360] Native|Event|Public|BlueprintEvent 
	// Function /Script/StorylineRuntime.StorylineActionInterface.CollectTextIds
	// void CollectTextIds(TArray<int32_t>& OutIds);                                                                            // [0x12012b0] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/StorylineRuntime.StorylineCondition
/// Size: 0x0010 (0x000028 - 0x000038)
class UStorylineCondition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UStorylineConditionUnit*>)    Conditions                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineConditionUnit
/// Size: 0x0000 (0x000028 - 0x000028)
class UStorylineConditionUnit : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/StorylineRuntime.StorylineConditionUnit.GetConditionFlag
	// FString GetConditionFlag();                                                                                              // [0xc4c400] Native|Public        
};

/// Class /Script/StorylineRuntime.StorylineEventConditionUnit
/// Size: 0x0010 (0x000028 - 0x000038)
class UStorylineEventConditionUnit : public UStorylineConditionUnit
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FString>)                           Events                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineSelectionConditionUnit
/// Size: 0x0018 (0x000028 - 0x000040)
class UStorylineSelectionConditionUnit : public UStorylineConditionUnit
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   SelectionId                                                 OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FString)                                   NodeFlag                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineStateConditionUnit
/// Size: 0x0020 (0x000028 - 0x000048)
class UStorylineStateConditionUnit : public UStorylineConditionUnit
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   StateName                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(EStoryStateValueType)                      ValueType                                                   OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(bool)                                      BoolValue                                                   OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(int32_t)                                   IntValue                                                    OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x40, 4, 0, 0})
	CMember(EStoryStateValueOp)                        Op                                                          OFFSET(get<T>, {0x44, 1, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineFirstPlayConditionUnit
/// Size: 0x0008 (0x000028 - 0x000030)
class UStorylineFirstPlayConditionUnit : public UStorylineConditionUnit
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bShouldFirstPlay                                            OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineContext
/// Size: 0x0008 (0x000028 - 0x000030)
class UStorylineContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FMulticastSparseDelegate)                  OnSequencerShowSubtitle                                     OFFSET(getStruct<T>, {0x28, 1, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylineFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UStorylineFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/StorylineRuntime.StorylineFunctionLibrary.GetDialogDescriptionText
	// FString GetDialogDescriptionText(int32_t ID, TArray<int32_t>& OptionIds);                                                // [0x1201460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/StorylineRuntime.StorylineProducts
/// Size: 0x0000 (0x000028 - 0x000028)
class UStorylineProducts : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/StorylineRuntime.StorylineNode
/// Size: 0x0060 (0x000028 - 0x000088)
class UStorylineNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<class UStorylineAction*>)           Actions                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<class UStorylineCondition*>)        EnterConditions                                             OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   NodeFlag                                                    OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(TArray<class UStorylineNode*>)             Nexts                                                       OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FString>)                           TriggerEvents                                               OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bCanSkip                                                    OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(bool)                                      bIsDefaultStartNode                                         OFFSET(get<bool>, {0x79, 1, 0, 0})
	DMember(bool)                                      bCanNext                                                    OFFSET(get<bool>, {0x7A, 1, 0, 0})
	DMember(bool)                                      bShowSkip                                                   OFFSET(get<bool>, {0x7B, 1, 0, 0})
	DMember(bool)                                      bMarkStoryPassed                                            OFFSET(get<bool>, {0x7C, 1, 0, 0})
	DMember(bool)                                      bStartInterrupt                                             OFFSET(get<bool>, {0x7D, 1, 0, 0})
	DMember(int32_t)                                   DefaultSelectionId                                          OFFSET(get<int32_t>, {0x80, 4, 0, 0})
};

/// Class /Script/StorylineRuntime.StorylinePreviewContext
/// Size: 0x0060 (0x000028 - 0x000088)
class UStorylinePreviewContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UStoryline*)                         Storyline                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TMap<class UStoryline*, class UStorylineNode*>) StartNodeData                                          OFFSET(get<T>, {0x30, 80, 0, 0})
	SMember(FMulticastSparseDelegate)                  OnActionChangeProperty                                      OFFSET(getStruct<T>, {0x80, 1, 0, 0})


	/// Functions
	// Function /Script/StorylineRuntime.StorylinePreviewContext.GetStartNode
	// class UStorylineNode* GetStartNode();                                                                                    // [0x1201660] Final|Native|Public  
};

/// Struct /Script/StorylineRuntime.MovieSceneSubtitleTemplate
/// Size: 0x0008 (0x000020 - 0x000028)
class FMovieSceneSubtitleTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UMovieSceneSubtitleSection*)         Section                                                     OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/StorylineRuntime.StoryEventInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FStoryEventInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EStoryEventType)                           Type                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/StorylineRuntime.StorylineTableStruct_Copy
/// Size: 0x0088 (0x000008 - 0x000090)
class FStorylineTableStruct_Copy : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FString)                                   Note                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   Chat                                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   SpineAltas                                                  OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   SpineSkeleton                                               OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   Anim                                                        OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   AudioName                                                   OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   SpeakNPCName                                                OFFSET(getStruct<T>, {0x80, 16, 0, 0})
};

/// Enum /Script/StorylineRuntime.EStoryMode
/// Size: 0x04
enum class EStoryMode : uint8_t
{
	EStoryMode__Story_3D                                                             = 0,
	EStoryMode__Story_2D                                                             = 1,
	EStoryMode__Story_3DWith2D                                                       = 2,
	EStoryMode__Story_Alone                                                          = 3
};

/// Enum /Script/StorylineRuntime.EStoryFriEndState
/// Size: 0x02
enum class EStoryFriEndState : uint8_t
{
	EStoryFriEndState__General                                                       = 0,
	EStoryFriEndState__Switch                                                        = 1
};

/// Enum /Script/StorylineRuntime.EStoryHomeEndState
/// Size: 0x08
enum class EStoryHomeEndState : uint8_t
{
	EStoryHomeEndState__Sofa                                                         = 0,
	EStoryHomeEndState__Closet                                                       = 1,
	EStoryHomeEndState__Console                                                      = 2,
	EStoryHomeEndState__Friday                                                       = 3,
	EStoryHomeEndState__Gacha                                                        = 4,
	EStoryHomeEndState__EdenLink                                                     = 5,
	EStoryHomeEndState__Teatable                                                     = 6,
	EStoryHomeEndState__ShowCase                                                     = 7
};

/// Enum /Script/StorylineRuntime.EStoryEndState
/// Size: 0x04
enum class EStoryEndState : uint8_t
{
	EStoryEndState__General                                                          = 0,
	EStoryEndState__Hide                                                             = 1,
	EStoryEndState__Rope                                                             = 2,
	EStoryEndState__Keep                                                             = 3
};

/// Enum /Script/StorylineRuntime.EStoryCameraMoveSpace
/// Size: 0x02
enum class EStoryCameraMoveSpace : uint8_t
{
	EStoryCameraMoveSpace__Camera                                                    = 0,
	EStoryCameraMoveSpace__World                                                     = 1
};

/// Enum /Script/StorylineRuntime.EStoryCameraMoveType
/// Size: 0x02
enum class EStoryCameraMoveType : uint8_t
{
	EStoryCameraMoveType__Circle                                                     = 0,
	EStoryCameraMoveType__Line                                                       = 1
};

/// Enum /Script/StorylineRuntime.EStoryNPCDeployMethod
/// Size: 0x02
enum class EStoryNPCDeployMethod : uint8_t
{
	EStoryNPCDeployMethod__Template                                                  = 0,
	EStoryNPCDeployMethod__Storyline                                                 = 1
};

/// Enum /Script/StorylineRuntime.EStoryNPCControlState
/// Size: 0x03
enum class EStoryNPCControlState : uint8_t
{
	EStoryNPCControlState__Show                                                      = 0,
	EStoryNPCControlState__Hide                                                      = 1,
	EStoryNPCControlState__Destroy                                                   = 2
};

/// Enum /Script/StorylineRuntime.EStorySceneInteractType
/// Size: 0x12
enum class EStorySceneInteractType : uint8_t
{
	EStorySceneInteractType__FreeMove                                                = 0,
	EStorySceneInteractType__Control                                                 = 1,
	EStorySceneInteractType__Hide                                                    = 2,
	EStorySceneInteractType__SingleRope                                              = 3,
	EStorySceneInteractType__RepeatRope                                              = 4,
	EStorySceneInteractType__Interact                                                = 5,
	EStorySceneInteractType__RemoteTrigger                                           = 6,
	EStorySceneInteractType__FollowCamera                                            = 7,
	EStorySceneInteractType__ControlCamera                                           = 8,
	EStorySceneInteractType__DisableInput                                            = 9,
	EStorySceneInteractType__EnableInput                                             = 10,
	EStorySceneInteractType__InteractExec                                            = 11
};

/// Enum /Script/StorylineRuntime.EStoryFriControlType
/// Size: 0x03
enum class EStoryFriControlType : uint8_t
{
	EStoryFriControlType__TurnOn                                                     = 0,
	EStoryFriControlType__TurnOff                                                    = 1,
	EStoryFriControlType__FlyTo                                                      = 2
};

/// Enum /Script/StorylineRuntime.EStoryUnitMoveActionType
/// Size: 0x03
enum class EStoryUnitMoveActionType : uint8_t
{
	EStoryUnitMoveActionType__AutoMove                                               = 0,
	EStoryUnitMoveActionType__Direct                                                 = 1,
	EStoryUnitMoveActionType__SimpleMove                                             = 2
};

/// Enum /Script/StorylineRuntime.ECameraGenderType
/// Size: 0x04
enum class ECameraGenderType : uint8_t
{
	ECameraGenderType__Default                                                       = 0,
	ECameraGenderType__Boy                                                           = 1,
	ECameraGenderType__Girl                                                          = 2,
	ECameraGenderType__Both                                                          = 3
};

/// Enum /Script/StorylineRuntime.EStoryLightAdjustType
/// Size: 0x02
enum class EStoryLightAdjustType : uint8_t
{
	EStoryLightAdjustType__NPC                                                       = 0,
	EStoryLightAdjustType__Manual                                                    = 1
};

/// Enum /Script/StorylineRuntime.EStoryCameraActionType
/// Size: 0x05
enum class EStoryCameraActionType : uint8_t
{
	EStoryCameraActionType__Sequence                                                 = 0,
	EStoryCameraActionType__Direct                                                   = 1,
	EStoryCameraActionType__Templete                                                 = 2,
	EStoryCameraActionType__FollowPlayer                                             = 3,
	EStoryCameraActionType__CloseUp                                                  = 4
};

/// Enum /Script/StorylineRuntime.EStorySoundType
/// Size: 0x03
enum class EStorySoundType : uint8_t
{
	EStorySoundType__Default                                                         = 0,
	EStorySoundType__Attach                                                          = 1,
	EStorySoundType__BGM                                                             = 2
};

/// Enum /Script/StorylineRuntime.EStoryAnimType
/// Size: 0x05
enum class EStoryAnimType : uint8_t
{
	EStoryAnimType__None                                                             = 0,
	EStoryAnimType__Idle                                                             = 1,
	EStoryAnimType__Act                                                              = 2,
	EStoryAnimType__Battle                                                           = 3,
	EStoryAnimType__Montage                                                          = 4
};

/// Enum /Script/StorylineRuntime.EDialogImgSide
/// Size: 0x06
enum class EDialogImgSide : uint8_t
{
	EDialogImgSide__Left                                                             = 0,
	EDialogImgSide__Right                                                            = 1,
	EDialogImgSide__Holo                                                             = 2,
	EDialogImgSide__LeftWithHolo                                                     = 3,
	EDialogImgSide__RightWithHolo                                                    = 4,
	EDialogImgSide__HoloWithLast                                                     = 5
};

/// Enum /Script/StorylineRuntime.EStoryEventType
/// Size: 0x02
enum class EStoryEventType : uint8_t
{
	EStoryEventType__ESET_Permanent                                                  = 0,
	EStoryEventType__ESET_Immediate                                                  = 1
};

/// Enum /Script/StorylineRuntime.EStoryActionType
/// Size: 0x04
enum class EStoryActionType : uint8_t
{
	EStoryActionType__Story_3D                                                       = 0,
	EStoryActionType__Story_2D                                                       = 1,
	EStoryActionType__Story_3DWith2D                                                 = 2,
	EStoryActionType__Story_Alone                                                    = 3
};

/// Enum /Script/StorylineRuntime.EStoryStateValueType
/// Size: 0x03
enum class EStoryStateValueType : uint8_t
{
	EStoryStateValueType__T_Bool                                                     = 0,
	EStoryStateValueType__T_Int                                                      = 1,
	EStoryStateValueType__T_Float                                                    = 2
};

/// Enum /Script/StorylineRuntime.EStoryStateValueOp
/// Size: 0x06
enum class EStoryStateValueOp : uint8_t
{
	EStoryStateValueOp__Equal                                                        = 0,
	EStoryStateValueOp__Less                                                         = 1,
	EStoryStateValueOp__LEqual                                                       = 2,
	EStoryStateValueOp__Greater                                                      = 3,
	EStoryStateValueOp__GEqual                                                       = 4,
	EStoryStateValueOp__NotEqual                                                     = 5
};


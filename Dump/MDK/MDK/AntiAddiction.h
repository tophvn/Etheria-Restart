
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: SlateCore
/// dependency: TapCommon
/// dependency: UMG

/// Class /Script/AntiAddiction.AAUBackViewWidget
/// Size: 0x0030 (0x000280 - 0x0002B0)
class UAAUBackViewWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(class UTextBlock*)                         TitleLabel                                                  OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class UButton*)                            BackButton                                                  OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UButton*)                            CloseButton                                                 OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UOverlay*)                           HeadOverlay                                                 OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UButton*)                            SubButton                                                   OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UTextBlock*)                         SubButtonLabel                                              OFFSET(get<T>, {0x2A8, 8, 0, 0})
};

/// Class /Script/AntiAddiction.AAUMobileTipWidget
/// Size: 0x0080 (0x000280 - 0x000300)
class UAAUMobileTipWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class UNativeWidgetHost*)                  ControllerTipHost                                           OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UTextBlock*)                         TitleLabel                                                  OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UTextBlock*)                         DetailLabel                                                 OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class USizeBox*)                           ContentBox                                                  OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UTextBlock*)                         SubButtonLabel                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UTapButton*)                         SubmitBtn                                                   OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/AntiAddiction.AAUMobileTipWidget.OnSubmitBtnClick
	// void OnSubmitBtnClick();                                                                                                 // [0x1052f80] Final|Native|Protected 
};

/// Struct /Script/AntiAddiction.ManualVerifyStyle
/// Size: 0x1278 (0x000008 - 0x001280)
class FManualVerifyStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4736;

public:
	SMember(FTextBlockStyle)                           ContentStyle                                                OFFSET(getStruct<T>, {0x10, 864, 0, 0})
	SMember(FScrollBoxStyle)                           ContentScrollBoxStyle                                       OFFSET(getStruct<T>, {0x370, 848, 0, 0})
	SMember(FMargin)                                   ContentMargin                                               OFFSET(getStruct<T>, {0x6C0, 16, 0, 0})
	SMember(FEditableTextBoxStyle)                     InputBoxStyle                                               OFFSET(getStruct<T>, {0x6D0, 2992, 0, 0})
};

/// Class /Script/AntiAddiction.ManualVerifyWidgetStyle
/// Size: 0x1280 (0x000030 - 0x0012B0)
class UManualVerifyWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4784;

public:
	SMember(FManualVerifyStyle)                        WidgetStyle                                                 OFFSET(getStruct<T>, {0x30, 4736, 0, 0})
};

/// Class /Script/AntiAddiction.TapAntiAddictionReflection
/// Size: 0x0000 (0x000028 - 0x000028)
class UTapAntiAddictionReflection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AntiAddiction.TapAntiAddictionReflection.Init
	// void Init();                                                                                                             // [0x1052f60] Final|Native|Static|Private 
};

/// Struct /Script/AntiAddiction.VerifyEntryStyle
/// Size: 0x07C8 (0x000008 - 0x0007D0)
class FVerifyEntryStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2000;

public:
	SMember(FSlateBrush)                               Icon                                                        OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FMargin)                                   IconMargin                                                  OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FTextBlockStyle)                           ContentStyle                                                OFFSET(getStruct<T>, {0xF0, 864, 0, 0})
	SMember(FMargin)                                   ContentMargin                                               OFFSET(getStruct<T>, {0x450, 16, 0, 0})
	SMember(FTextBlockStyle)                           TailStyle                                                   OFFSET(getStruct<T>, {0x460, 864, 0, 0})
	SMember(FMargin)                                   TailMargin                                                  OFFSET(getStruct<T>, {0x7C0, 16, 0, 0})
};

/// Class /Script/AntiAddiction.VerifyEntryWidgetStyle
/// Size: 0x07D0 (0x000030 - 0x000800)
class UVerifyEntryWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2048;

public:
	SMember(FVerifyEntryStyle)                         WidgetStyle                                                 OFFSET(getStruct<T>, {0x30, 2000, 0, 0})
};

/// Struct /Script/AntiAddiction.AAUPaymentModel
/// Size: 0x0010 (0x000000 - 0x000010)
class FAAUPaymentModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Message                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AntiAddiction.AAUPayableModel
/// Size: 0x0028 (0x000000 - 0x000028)
class FAAUPayableModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      allow                                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   description_plain                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/AntiAddiction.AAUPlayableModel
/// Size: 0x0028 (0x000000 - 0x000028)
class FAAUPlayableModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   remain_time                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   description_plain                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/AntiAddiction.AAUAuthIdentifyWord
/// Size: 0x0040 (0x000000 - 0x000040)
class FAAUAuthIdentifyWord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   description_plain                                           OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   negative_button                                             OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   positive_button                                             OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/AntiAddiction.AAUUIConfigModel
/// Size: 0x0100 (0x000000 - 0x000100)
class FAAUUIConfigModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAAUAuthIdentifyWord)                      taptap_auth                                                 OFFSET(getStruct<T>, {0x0, 64, 0, 0})
	SMember(FAAUAuthIdentifyWord)                      manual_auth                                                 OFFSET(getStruct<T>, {0x40, 64, 0, 0})
	SMember(FAAUAuthIdentifyWord)                      auth_waiting                                                OFFSET(getStruct<T>, {0x80, 64, 0, 0})
	SMember(FAAUAuthIdentifyWord)                      auth_failed                                                 OFFSET(getStruct<T>, {0xC0, 64, 0, 0})
};

/// Struct /Script/AntiAddiction.AAURealNameConfigModel
/// Size: 0x0108 (0x000000 - 0x000108)
class FAAURealNameConfigModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(bool)                                      manual_auth_enable                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FAAUUIConfigModel)                         real_name_text                                              OFFSET(getStruct<T>, {0x8, 256, 0, 0})
};

/// Struct /Script/AntiAddiction.AAURealNameResultModel
/// Size: 0x0020 (0x000000 - 0x000020)
class FAAURealNameResultModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   status                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   anti_addiction_token                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AntiAddiction.AACheckAgeModel
/// Size: 0x0001 (0x000000 - 0x000001)
class FAACheckAgeModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      allow                                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/AntiAddiction.AARealNameStateModel
/// Size: 0x0008 (0x000000 - 0x000008)
class FAARealNameStateModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      is_adult                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   age_limit                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/AntiAddiction.AAPolicyModel
/// Size: 0x0028 (0x000000 - 0x000028)
class FAAPolicyModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   policy_active                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   policy_model                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   policy_heartbeat_interval                                   OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/AntiAddiction.AAUStrictTipWord
/// Size: 0x0020 (0x000000 - 0x000020)
class FAAUStrictTipWord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   description_plain                                           OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AntiAddiction.AAUUITipModel
/// Size: 0x0040 (0x000000 - 0x000040)
class FAAUUITipModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FAAUStrictTipWord)                         allow                                                       OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FAAUStrictTipWord)                         reject                                                      OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/AntiAddiction.AATimeRangeModel
/// Size: 0x0070 (0x000000 - 0x000070)
class FAATimeRangeModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FAAUUITipModel)                            Text                                                        OFFSET(getStruct<T>, {0x0, 64, 0, 0})
	CMember(TArray<FString>)                           holidays                                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   time_start                                                  OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   time_end                                                    OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/AntiAddiction.AALocalModel
/// Size: 0x0070 (0x000000 - 0x000070)
class FAALocalModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FAATimeRangeModel)                         time_range                                                  OFFSET(getStruct<T>, {0x0, 112, 0, 0})
};

/// Struct /Script/AntiAddiction.AAUserConfigModel
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FAAUserConfigModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FAACheckAgeModel)                          content_rating_check                                        OFFSET(getStruct<T>, {0x0, 1, 0, 0})
	SMember(FAARealNameStateModel)                     real_name                                                   OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FAAPolicyModel)                            anti_addiction                                              OFFSET(getStruct<T>, {0x10, 40, 0, 0})
	SMember(FAALocalModel)                             Local                                                       OFFSET(getStruct<T>, {0x38, 112, 0, 0})
};

/// Struct /Script/AntiAddiction.AAUServerTimeModel
/// Size: 0x0008 (0x000000 - 0x000008)
class FAAUServerTimeModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   Timestamp                                                   OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/AntiAddiction.AAUSettingsModel
/// Size: 0x0001 (0x000000 - 0x000001)
class FAAUSettingsModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      stand_alone_mode                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/AntiAddiction.AAUStorage
/// Size: 0x0001 (0x000000 - 0x000001)
class FAAUStorage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/AntiAddiction.AAUConfig
/// Size: 0x0018 (0x000000 - 0x000018)
class FAAUConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ClientId                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      UseTapLogin                                                 OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      ShowSwitchAccount                                           OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      UseAgeRange                                                 OFFSET(get<bool>, {0x12, 1, 0, 0})
};

/// Struct /Script/AntiAddiction.AAUUser
/// Size: 0x0038 (0x000000 - 0x000038)
class FAAUUser : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   UserId                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   AccessTokenV2                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   AccessToken                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/AntiAddiction.AntiAddictionError
/// Size: 0x0040 (0x000000 - 0x000040)
class FAntiAddictionError : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   Code                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   Error                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   error_description                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Msg                                                         OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Enum /Script/AntiAddiction.EAAUAgeLimit
/// Size: 0x07
enum class EAAUAgeLimit : uint8_t
{
	EAAUAgeLimit__Unknown                                                            = -1,
	EAAUAgeLimit__Child                                                              = 0,
	EAAUAgeLimit__Teen                                                               = 8,
	EAAUAgeLimit__Young                                                              = 16,
	EAAUAgeLimit__Adult                                                              = 18,
	EAAUAgeLimit__UnknownAgeRange                                                    = 100,
	EAAUAgeLimit__UnknownAgeRangeAdult                                               = 110
};

/// Enum /Script/AntiAddiction.EAAURegion
/// Size: 0x01
enum class EAAURegion : uint8_t
{
	EAAURegion__China                                                                = 0
};


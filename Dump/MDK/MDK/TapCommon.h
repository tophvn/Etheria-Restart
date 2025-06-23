
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: JsonUtilities
/// dependency: SlateCore
/// dependency: UMG

/// Struct /Script/TapCommon.TapBoxWrapperStyle
/// Size: 0x0478 (0x000008 - 0x000480)
class FTapBoxWrapperStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FTextBlockStyle)                           TitleStyle                                                  OFFSET(getStruct<T>, {0xE0, 864, 0, 0})
	SMember(FMargin)                                   TitlePadding                                                OFFSET(getStruct<T>, {0x440, 16, 0, 0})
	SMember(FMargin)                                   ButtonBoxPadding                                            OFFSET(getStruct<T>, {0x450, 16, 0, 0})
	SMember(FVector2D)                                 ButtonSize                                                  OFFSET(getStruct<T>, {0x460, 8, 0, 0})
	DMember(float)                                     ButtonGap                                                   OFFSET(get<float>, {0x468, 4, 0, 0})
	SMember(FMargin)                                   CloseButtonPadding                                          OFFSET(getStruct<T>, {0x46C, 16, 0, 0})
};

/// Class /Script/TapCommon.TapBoxWrapperWidgetStyle
/// Size: 0x0480 (0x000030 - 0x0004B0)
class UTapBoxWrapperWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	SMember(FTapBoxWrapperStyle)                       WidgetStyle                                                 OFFSET(getStruct<T>, {0x30, 1152, 0, 0})
};

/// Class /Script/TapCommon.TapButton
/// Size: 0x0028 (0x000140 - 0x000168)
class UTapButton : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(ETapButtonStyleType)                       StyleType                                                   OFFSET(get<T>, {0x140, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnClicked                                                   OFFSET(getStruct<T>, {0x148, 16, 0, 0})
};

/// Class /Script/TapCommon.TapButtonSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UTapButtonSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x49, 1, 0, 0})


	/// Functions
	// Function /Script/TapCommon.TapButtonSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0xf162b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TapCommon.TapButtonSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0xf16220] Final|Native|Public|BlueprintCallable 
	// Function /Script/TapCommon.TapButtonSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0xf161a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TapCommon.TapCommonBPLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTapCommonBPLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TapCommon.TapCommonBPLibrary.RemoveEmptyString
	// TArray<FString> RemoveEmptyString(TArray<FString> stringArray);                                                          // [0xf15fb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TapCommon.TapCommonBPLibrary.RemoveEmptyKey
	// TMap<FString, FString> RemoveEmptyKey(TMap<FString, FString> stringMap);                                                 // [0xf15df0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TapCommon.TapCommonBPLibrary.Register
	// void Register(FString serviceClz, FString serviceImpl);                                                                  // [0xf15c60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TapCommon.TapCommonBPLibrary.OpenReviewInTapTap
	// void OpenReviewInTapTap(FString AppId);                                                                                  // [0xf15b20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TapCommon.TapCommonBPLibrary.OpenReviewInTapGlobal
	// void OpenReviewInTapGlobal(FString AppId);                                                                               // [0xf15b20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TapCommon.TapCommonBPLibrary.CallHandler
	// void CallHandler(FString Command);                                                                                       // [0xf15b20] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/TapCommon.TapMessageBoxStyle
/// Size: 0x0378 (0x000008 - 0x000380)
class FTapMessageBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FTextBlockStyle)                           RichTextBlockStyle                                          OFFSET(getStruct<T>, {0x10, 864, 0, 0})
	SMember(FMargin)                                   ContentPadding                                              OFFSET(getStruct<T>, {0x370, 16, 0, 0})
};

/// Class /Script/TapCommon.TapMessageBoxWidgetStyle
/// Size: 0x0380 (0x000030 - 0x0003B0)
class UTapMessageBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FTapMessageBoxStyle)                       WidgetStyle                                                 OFFSET(getStruct<T>, {0x30, 896, 0, 0})
};

/// Class /Script/TapCommon.TapSubsystem
/// Size: 0x0030 (0x000030 - 0x000060)
class UTapSubsystem : public ULocalPlayerSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UUserInterfaceSettings*)             UISetting                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
	DMember(int32_t)                                   TapWidgetZOrder                                             OFFSET(get<int32_t>, {0x58, 4, 0, 0})
};

/// Struct /Script/TapCommon.TapThrobberStyle
/// Size: 0x0BE8 (0x000008 - 0x000BF0)
class FTapThrobberStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3056;

public:
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FSlateBrush)                               BackGroundBrush_PC                                          OFFSET(getStruct<T>, {0xE0, 208, 0, 0})
	SMember(FSlateBrush)                               BackGroundBrush_PC_Text                                     OFFSET(getStruct<T>, {0x1B0, 208, 0, 0})
	SMember(FSlateBrush)                               ShadowBrush                                                 OFFSET(getStruct<T>, {0x280, 208, 0, 0})
	SMember(FSlateBrush)                               PieceImage                                                  OFFSET(getStruct<T>, {0x350, 208, 0, 0})
	SMember(FSlateBrush)                               PieceImage_PC                                               OFFSET(getStruct<T>, {0x420, 208, 0, 0})
	SMember(FSlateColor)                               ColorAndOpacity                                             OFFSET(getStruct<T>, {0x4F0, 40, 0, 0})
	SMember(FTextBlockStyle)                           ContentStyle                                                OFFSET(getStruct<T>, {0x520, 864, 0, 0})
	SMember(FTextBlockStyle)                           ContentStyle_PC                                             OFFSET(getStruct<T>, {0x880, 864, 0, 0})
	DMember(float)                                     RotationRate                                                OFFSET(get<float>, {0xBE0, 4, 0, 0})
};

/// Class /Script/TapCommon.TapThrobberWidgetStyle
/// Size: 0x0BF0 (0x000030 - 0x000C20)
class UTapThrobberWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3104;

public:
	SMember(FTapThrobberStyle)                         WidgetStyle                                                 OFFSET(getStruct<T>, {0x30, 3056, 0, 0})
};

/// Struct /Script/TapCommon.TapToastStyle
/// Size: 0x0518 (0x000008 - 0x000520)
class FTapToastStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	SMember(FSlateBrush)                               Background                                                  OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FSlateBrush)                               IconBrushTemplate                                           OFFSET(getStruct<T>, {0xE0, 208, 0, 0})
	SMember(FTextBlockStyle)                           ContentStyle                                                OFFSET(getStruct<T>, {0x1B0, 864, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x510, 4, 0, 0})
};

/// Class /Script/TapCommon.TapToastWidgetStyle
/// Size: 0x0520 (0x000030 - 0x000550)
class UTapToastWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	SMember(FTapToastStyle)                            WidgetStyle                                                 OFFSET(getStruct<T>, {0x30, 1312, 0, 0})
};

/// Class /Script/TapCommon.TapWidget
/// Size: 0x0000 (0x000280 - 0x000280)
class UTapWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
};

/// Class /Script/TapCommon.TapWebBrowser
/// Size: 0x0050 (0x000280 - 0x0002D0)
class UTapWebBrowser : public UTapWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UNativeWidgetHost*)                  WebBrowser                                                  OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UTapButton*)                         BTN_GoBack                                                  OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UTapButton*)                         BTN_Close                                                   OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UTapButton*)                         BTN_Retry                                                   OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UTextBlock*)                         TB_Retry                                                    OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UTextBlock*)                         TB_ErrorTip                                                 OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UImage*)                             ErrorTipIcon                                                OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UPanelWidget*)                       RetryPanel                                                  OFFSET(get<T>, {0x2C8, 8, 0, 0})


	/// Functions
	// Function /Script/TapCommon.TapWebBrowser.Reload
	// void Reload();                                                                                                           // [0xf15dd0] Native|Public        
	// Function /Script/TapCommon.TapWebBrowser.GoBack
	// void GoBack();                                                                                                           // [0xf15c40] Native|Public        
	// Function /Script/TapCommon.TapWebBrowser.Close
	// void Close();                                                                                                            // [0xf15c00] Native|Public        
};

/// Class /Script/TapCommon.TUHUD
/// Size: 0x0020 (0x000280 - 0x0002A0)
class UTUHUD : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class UTextBlock*)                         TitleLabel                                                  OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class USizeBox*)                           ImageBox                                                    OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UOverlay*)                           BackView                                                    OFFSET(get<T>, {0x290, 8, 0, 0})


	/// Functions
	// Function /Script/TapCommon.TUHUD.ShowWaitAndToast
	// void ShowWaitAndToast(FString Toast);                                                                                    // [0xf16430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TapCommon.TUHUD.ShowWait
	// void ShowWait();                                                                                                         // [0xf16410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TapCommon.TUHUD.ShowToast
	// void ShowToast(FString Toast, float TimeInterval);                                                                       // [0xf16330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TapCommon.TUHUD.Dismiss
	// void Dismiss();                                                                                                          // [0xf15c20] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/TapCommon.TapCommand
/// Size: 0x0048 (0x000000 - 0x000048)
class FTapCommand : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   service                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   method                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   args                                                        OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      callback                                                    OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      onceTime                                                    OFFSET(get<bool>, {0x31, 1, 0, 0})
	SMember(FString)                                   callbackId                                                  OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/TapCommon.TapCustomMessage
/// Size: 0x0020 (0x000000 - 0x000020)
class FTapCustomMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   MessageName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   MessageContent                                              OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/TapCommon.TapCommonRegionCode
/// Size: 0x0001 (0x000000 - 0x000001)
class FTapCommonRegionCode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      isMainland                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/TapCommon.TapControllerConfig
/// Size: 0x000C (0x000000 - 0x00000C)
class FTapControllerConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     DeadZone                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     CursorMaxSpeed                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ScrollMaxSpeed                                              OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/TapCommon.TapResponseWrapper
/// Size: 0x0030 (0x000000 - 0x000030)
class FTapResponseWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      Success                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FJsonObjectWrapper)                        Data                                                        OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	DMember(int64_t)                                   Now                                                         OFFSET(get<int64_t>, {0x28, 8, 0, 0})
};

/// Struct /Script/TapCommon.TapResult
/// Size: 0x0038 (0x000000 - 0x000038)
class FTapResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   callbackId                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Content                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Message                                                     OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   Code                                                        OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      onceTime                                                    OFFSET(get<bool>, {0x34, 1, 0, 0})
};

/// Struct /Script/TapCommon.TUCommonStorage
/// Size: 0x0001 (0x000000 - 0x000001)
class FTUCommonStorage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TapCommon.TUError
/// Size: 0x0028 (0x000000 - 0x000028)
class FTUError : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Code                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   error_description                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Msg                                                         OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/TapCommon.TUConfig
/// Size: 0x0098 (0x000000 - 0x000098)
class FTUConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FString)                                   ClientId                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ClientToken                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ClientPublicKey                                             OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(ERegionType)                               RegionType                                                  OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FString)                                   ServerURL                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/TapCommon.TapAntiAddictionConfig
/// Size: 0x0003 (0x000000 - 0x000003)
class FTapAntiAddictionConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      bShowSwitchAccount                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bUseAgeRange                                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(ETapAntiAddictionConfigRegion)             Region                                                      OFFSET(get<T>, {0x2, 1, 0, 0})
};

/// Struct /Script/TapCommon.BillboardConfig
/// Size: 0x0060 (0x000000 - 0x000060)
class FBillboardConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TMap<FString, FString>)                    Dimensions                                                  OFFSET(get<T>, {0x0, 80, 0, 0})
	SMember(FString)                                   BillboardUrl                                                OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Enum /Script/TapCommon.ETapButtonStyleType
/// Size: 0x14
enum class ETapButtonStyleType : uint8_t
{
	ETapButtonStyleType__Blue                                                        = 0,
	ETapButtonStyleType__White                                                       = 1,
	ETapButtonStyleType__Black                                                       = 2,
	ETapButtonStyleType__Orange                                                      = 3,
	ETapButtonStyleType__RefreshBlue                                                 = 4,
	ETapButtonStyleType__RefreshBlack                                                = 5,
	ETapButtonStyleType__RoundBack                                                   = 6,
	ETapButtonStyleType__RoundClose                                                  = 7,
	ETapButtonStyleType__SmallBack                                                   = 8,
	ETapButtonStyleType__SmallClose                                                  = 9,
	ETapButtonStyleType__Clear                                                       = 10,
	ETapButtonStyleType__BoldBack                                                    = 11,
	ETapButtonStyleType__BoldClose                                                   = 12,
	ETapButtonStyleType__LargeCopy                                                   = 13
};

/// Enum /Script/TapCommon.ETapInputMode
/// Size: 0x02
enum class ETapInputMode : uint8_t
{
	ETapInputMode__Focus                                                             = 0,
	ETapInputMode__Cursor                                                            = 1
};

/// Enum /Script/TapCommon.ETapControllerTipIconType
/// Size: 0x04
enum class ETapControllerTipIconType : uint8_t
{
	ETapControllerTipIconType__None                                                  = 0,
	ETapControllerTipIconType__Scroll                                                = 1,
	ETapControllerTipIconType__Back                                                  = 2,
	ETapControllerTipIconType__Accept                                                = 4
};

/// Enum /Script/TapCommon.ETapControllerType
/// Size: 0x03
enum class ETapControllerType : uint8_t
{
	ETapControllerType__PS                                                           = 0,
	ETapControllerType__XBox                                                         = 1,
	ETapControllerType__Switch                                                       = 2
};

/// Enum /Script/TapCommon.ETapAntiAddictionConfigRegion
/// Size: 0x02
enum class ETapAntiAddictionConfigRegion : uint8_t
{
	ETapAntiAddictionConfigRegion__China                                             = 0,
	ETapAntiAddictionConfigRegion__Vietnam                                           = 1
};

/// Enum /Script/TapCommon.ELanguageType
/// Size: 0x15
enum class ELanguageType : uint8_t
{
	ELanguageType__AUTO                                                              = 0,
	ELanguageType__ZH                                                                = 1,
	ELanguageType__EN                                                                = 2,
	ELanguageType__ZHTW                                                              = 3,
	ELanguageType__JA                                                                = 4,
	ELanguageType__KO                                                                = 5,
	ELanguageType__TH                                                                = 6,
	ELanguageType__ID                                                                = 7,
	ELanguageType__DE                                                                = 8,
	ELanguageType__ES                                                                = 9,
	ELanguageType__FR                                                                = 10,
	ELanguageType__PT                                                                = 11,
	ELanguageType__RU                                                                = 12,
	ELanguageType__TR                                                                = 13,
	ELanguageType__VI                                                                = 14
};

/// Enum /Script/TapCommon.ERegionType
/// Size: 0x02
enum class ERegionType : uint8_t
{
	ERegionType__CN                                                                  = 0,
	ERegionType__Global                                                              = 1
};


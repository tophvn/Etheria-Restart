
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
/// dependency: XDGCommon

/// Struct /Script/XDGAccount.CodeUnbindStyle
/// Size: 0x0708 (0x000008 - 0x000710)
class FCodeUnbindStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	SMember(FMargin)                                   BackgroundBoxMargin                                         OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FMargin)                                   ContentBoxPadding                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FMargin)                                   CloseButtonPadding                                          OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FVector2D)                                 CloseButtonSize                                             OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	DMember(float)                                     UnbindButtonSizeY                                           OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Gap                                                         OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     GapL                                                        OFFSET(get<float>, {0x48, 4, 0, 0})
	SMember(FTextBlockStyle)                           TitleTextBlockStyle                                         OFFSET(getStruct<T>, {0x50, 864, 0, 0})
	SMember(FTextBlockStyle)                           DefaultTextBlockStyle                                       OFFSET(getStruct<T>, {0x3B0, 864, 0, 0})
};

/// Class /Script/XDGAccount.CodeUnbindWidgetStyle
/// Size: 0x0710 (0x000030 - 0x000740)
class UCodeUnbindWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1856;

public:
	SMember(FCodeUnbindStyle)                          WidgetStyle                                                 OFFSET(getStruct<T>, {0x30, 1808, 0, 0})
};

/// Struct /Script/XDGAccount.EmailBoxStyle
/// Size: 0x0668 (0x000008 - 0x000670)
class FEmailBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	SMember(FEditableTextStyle)                        EditableTextStyle                                           OFFSET(getStruct<T>, {0x10, 768, 0, 0})
	SMember(FTextBlockStyle)                           ErrorTextBlockStyle                                         OFFSET(getStruct<T>, {0x310, 864, 0, 0})
};

/// Class /Script/XDGAccount.EmailBoxWidgetStyle
/// Size: 0x0670 (0x000030 - 0x0006A0)
class UEmailBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1696;

public:
	SMember(FEmailBoxStyle)                            WidgetStyle                                                 OFFSET(getStruct<T>, {0x30, 1648, 0, 0})
};

/// Struct /Script/XDGAccount.EmailCodeLoginStyle
/// Size: 0x0718 (0x000008 - 0x000720)
class FEmailCodeLoginStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1824;

public:
	SMember(FMargin)                                   BackgroundBoxMargin                                         OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FMargin)                                   ContentBoxPadding                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FMargin)                                   CloseButtonPadding                                          OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FVector2D)                                 CloseButtonSize                                             OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	DMember(float)                                     LoginButtonSizeY                                            OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Gap                                                         OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     GapL                                                        OFFSET(get<float>, {0x48, 4, 0, 0})
	SMember(FTextBlockStyle)                           TitleTextBlockStyle                                         OFFSET(getStruct<T>, {0x50, 864, 0, 0})
	SMember(FTextBlockStyle)                           AgreementTextBlockStyle                                     OFFSET(getStruct<T>, {0x3B0, 864, 0, 0})
	SMember(FLinearColor)                              LineColor                                                   OFFSET(getStruct<T>, {0x710, 16, 0, 0})
};

/// Class /Script/XDGAccount.EmailCodeLoginWidgetStyle
/// Size: 0x0720 (0x000030 - 0x000750)
class UEmailCodeLoginWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
	SMember(FEmailCodeLoginStyle)                      WidgetStyle                                                 OFFSET(getStruct<T>, {0x30, 1824, 0, 0})
};

/// Struct /Script/XDGAccount.PhoneNumberBoxStyle
/// Size: 0x19A8 (0x000008 - 0x0019B0)
class FPhoneNumberBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6576;

public:
	SMember(FSlateBrush)                               SelectionBoxBackgroundBrush                                 OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FSlateBrush)                               AreaCodeArrowBrush                                          OFFSET(getStruct<T>, {0xE0, 208, 0, 0})
	SMember(FMargin)                                   SelectionBoxPadding                                         OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	DMember(float)                                     SelectionBoxButtonSizeY                                     OFFSET(get<float>, {0x1C0, 4, 0, 0})
	DMember(float)                                     SizeY                                                       OFFSET(get<float>, {0x1C4, 4, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x1C8, 16, 0, 0})
	SMember(FTextBlockStyle)                           TextBlockStyle                                              OFFSET(getStruct<T>, {0x1E0, 864, 0, 0})
	SMember(FTextBlockStyle)                           FocusTextBlockStyle                                         OFFSET(getStruct<T>, {0x540, 864, 0, 0})
	SMember(FEditableTextStyle)                        EditableTextStyle                                           OFFSET(getStruct<T>, {0x8A0, 768, 0, 0})
	SMember(FScrollBoxStyle)                           ScrollBoxStyle                                              OFFSET(getStruct<T>, {0xBA0, 848, 0, 0})
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              OFFSET(getStruct<T>, {0xEF0, 1888, 0, 0})
	SMember(FTextBlockStyle)                           ErrorTextBlockStyle                                         OFFSET(getStruct<T>, {0x1650, 864, 0, 0})
};

/// Class /Script/XDGAccount.PhoneNumberBoxWidgetStyle
/// Size: 0x19B0 (0x000030 - 0x0019E0)
class UPhoneNumberBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6624;

public:
	SMember(FPhoneNumberBoxStyle)                      WidgetStyle                                                 OFFSET(getStruct<T>, {0x30, 6576, 0, 0})
};

/// Struct /Script/XDGAccount.SmsLoginStyle
/// Size: 0x0718 (0x000008 - 0x000720)
class FSmsLoginStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1824;

public:
	SMember(FMargin)                                   BackgroundBoxMargin                                         OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FMargin)                                   ContentBoxPadding                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FMargin)                                   CloseButtonPadding                                          OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FVector2D)                                 CloseButtonSize                                             OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	DMember(float)                                     LoginButtonSizeY                                            OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Gap                                                         OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     GapL                                                        OFFSET(get<float>, {0x48, 4, 0, 0})
	SMember(FTextBlockStyle)                           TitleTextBlockStyle                                         OFFSET(getStruct<T>, {0x50, 864, 0, 0})
	SMember(FTextBlockStyle)                           AgreementTextBlockStyle                                     OFFSET(getStruct<T>, {0x3B0, 864, 0, 0})
	SMember(FLinearColor)                              LineColor                                                   OFFSET(getStruct<T>, {0x710, 16, 0, 0})
};

/// Class /Script/XDGAccount.SmsLoginWidgetStyle
/// Size: 0x0720 (0x000030 - 0x000750)
class USmsLoginWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
	SMember(FSmsLoginStyle)                            WidgetStyle                                                 OFFSET(getStruct<T>, {0x30, 1824, 0, 0})
};

/// Struct /Script/XDGAccount.VerificationCodeBoxStyle
/// Size: 0x0D48 (0x000008 - 0x000D50)
class FVerificationCodeBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3408;

public:
	DMember(float)                                     SizeY                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0xC, 16, 0, 0})
	SMember(FEditableTextStyle)                        EditableTextStyle                                           OFFSET(getStruct<T>, {0x20, 768, 0, 0})
	SMember(FTextBlockStyle)                           TextBlockStyle                                              OFFSET(getStruct<T>, {0x320, 864, 0, 0})
	SMember(FTextBlockStyle)                           TextBlockStyleOrange                                        OFFSET(getStruct<T>, {0x680, 864, 0, 0})
	SMember(FTextBlockStyle)                           ErrorTextBlockStyle                                         OFFSET(getStruct<T>, {0x9E0, 864, 0, 0})
	SMember(FLinearColor)                              LineColor                                                   OFFSET(getStruct<T>, {0xD40, 16, 0, 0})
};

/// Class /Script/XDGAccount.VerificationCodeBoxWidgetStyle
/// Size: 0x0D50 (0x000030 - 0x000D80)
class UVerificationCodeBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3456;

public:
	SMember(FVerificationCodeBoxStyle)                 WidgetStyle                                                 OFFSET(getStruct<T>, {0x30, 3408, 0, 0})
};

/// Class /Script/XDGAccount.GetUserInfoWebFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UGetUserInfoWebFunction : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/XDGAccount.GetAccessToken
/// Size: 0x0000 (0x000028 - 0x000028)
class UGetAccessToken : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/XDGAccount.XUAccountCancellationWidget
/// Size: 0x0028 (0x0002D0 - 0x0002F8)
class UXUAccountCancellationWidget : public UTapWebBrowser
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(class UTextBlock*)                         TitleLabel                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UNativeWidgetHost*)                  ControllerTip                                               OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/XDGAccount.XUSmsCodeWidget
/// Size: 0x0120 (0x000280 - 0x0003A0)
class UXUSmsCodeWidget : public UTapWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	CMember(class UTapButton*)                         BackButton                                                  OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UTapButton*)                         CloseButton                                                 OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UTextBlock*)                         SentTipText                                                 OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UNativeWidgetHost*)                  SmsCodeLabelHost                                            OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UTapButton*)                         ResendButton                                                OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UTextBlock*)                         CodeTip                                                     OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UImage*)                             BGImage                                                     OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UTextBlock*)                         ResendButtonText                                            OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UNativeWidgetHost*)                  ControllerTip                                               OFFSET(get<T>, {0x368, 8, 0, 0})


	/// Functions
	// Function /Script/XDGAccount.XUSmsCodeWidget.OnSmsCodeLabelContentChanged
	// void OnSmsCodeLabelContentChanged(FText& Text);                                                                          // [0xfc12d0] Final|Native|Protected|HasOutParms 
	// Function /Script/XDGAccount.XUSmsCodeWidget.OnResendButtonClicked
	// void OnResendButtonClicked();                                                                                            // [0xfc12b0] Final|Native|Protected 
	// Function /Script/XDGAccount.XUSmsCodeWidget.OnCloseButtonClicked
	// void OnCloseButtonClicked();                                                                                             // [0xfc11d0] Final|Native|Protected 
	// Function /Script/XDGAccount.XUSmsCodeWidget.OnBackButtonClicked
	// void OnBackButtonClicked();                                                                                              // [0xfc1170] Final|Native|Protected 
};

/// Class /Script/XDGAccount.XUSmsLoginWidget
/// Size: 0x00D0 (0x000280 - 0x000350)
class UXUSmsLoginWidget : public UTapWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	CMember(class UTapButton*)                         CloseButton                                                 OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UTextBlock*)                         AreaCodeLabel                                               OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UNativeWidgetHost*)                  PhoneNumberLabelHost                                        OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UTextBlock*)                         CodeTip                                                     OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UImage*)                             BGImage                                                     OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UTapButton*)                         NextButton                                                  OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UNativeWidgetHost*)                  ControllerTip                                               OFFSET(get<T>, {0x348, 8, 0, 0})


	/// Functions
	// Function /Script/XDGAccount.XUSmsLoginWidget.OnNextButtonClicked
	// void OnNextButtonClicked();                                                                                              // [0xfc1290] Final|Native|Protected 
	// Function /Script/XDGAccount.XUSmsLoginWidget.OnCloseButtonClicked
	// void OnCloseButtonClicked();                                                                                             // [0xfc11f0] Final|Native|Protected 
};

/// Class /Script/XDGAccount.XUSmsSliderWidget
/// Size: 0x00A0 (0x0002D0 - 0x000370)
class UXUSmsSliderWidget : public UTapWebBrowser
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(class UNativeWidgetHost*)                  ControllerTip                                               OFFSET(get<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Script/XDGAccount.XUSmsSliderWidget.notifyjscallback
	// void notifyjscallback(FString JsonString);                                                                               // [0xfc1510] Final|Native|Public  
};

/// Class /Script/XDGAccount.XUUserCenterItemWidget
/// Size: 0x00B8 (0x000280 - 0x000338)
class UXUUserCenterItemWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(class UTextBlock*)                         TitleLabel                                                  OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UImage*)                             TitleImage                                                  OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UTapButton*)                         BindButton                                                  OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UTextBlock*)                         BindLabel                                                   OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UTextBlock*)                         IsBindingLabel                                              OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UImage*)                             line                                                        OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(TMap<EXDGLoginType, class UTexture2D*>)    LogoMap                                                     OFFSET(get<T>, {0x2E8, 80, 0, 0})


	/// Functions
	// Function /Script/XDGAccount.XUUserCenterItemWidget.OnBindBtnClick
	// void OnBindBtnClick();                                                                                                   // [0xfc1190] Final|Native|Protected 
};

/// Class /Script/XDGAccount.XUUserCenterTipWidget
/// Size: 0x00F0 (0x000280 - 0x000370)
class UXUUserCenterTipWidget : public UTapWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(class UTextBlock*)                         TitleLabel                                                  OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class URichTextBlock*)                     DetailLabel                                                 OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UEditableTextBox*)                   TextBox                                                     OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UBorder*)                            TextBorder                                                  OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UTapButton*)                         GreenButton                                                 OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UTapButton*)                         CloseButton                                                 OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UTextBlock*)                         GreenButtonLabel                                            OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UTapButton*)                         WhiteButton                                                 OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UTextBlock*)                         WhiteButtonLabel                                            OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UTextBlock*)                         RedTipLabel                                                 OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UNativeWidgetHost*)                  ControllerTip                                               OFFSET(get<T>, {0x2D0, 8, 0, 0})


	/// Functions
	// Function /Script/XDGAccount.XUUserCenterTipWidget.OnWhiteBtnClick
	// void OnWhiteBtnClick();                                                                                                  // [0xfc14f0] Final|Native|Protected 
	// Function /Script/XDGAccount.XUUserCenterTipWidget.OnTextBoxValueChange
	// void OnTextBoxValueChange(FText& Content);                                                                               // [0xfc13a0] Final|Native|Protected|HasOutParms 
	// Function /Script/XDGAccount.XUUserCenterTipWidget.OnGreenBtnClick
	// void OnGreenBtnClick();                                                                                                  // [0xfc1250] Final|Native|Protected 
};

/// Class /Script/XDGAccount.XUUserCenterWidget
/// Size: 0x00C0 (0x000280 - 0x000340)
class UXUUserCenterWidget : public UTapWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(class UTextBlock*)                         TitleLabel                                                  OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class UTextBlock*)                         StateLabel                                                  OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollPanel                                                 OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UTextBlock*)                         CurrentLoginTitleLabel                                      OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UTextBlock*)                         StateLabel2                                                 OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UTextBlock*)                         IDTitleLabel                                                OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UTextBlock*)                         BindInfoTitleLabel                                          OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UTapButton*)                         CopyButton                                                  OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UTapButton*)                         CloseButton                                                 OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UVerticalBox*)                       ListBox                                                     OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UTapButton*)                         ErrorButton                                                 OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UTextBlock*)                         ErrorButtonLabel                                            OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    ErrorSwitcher                                               OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UButton*)                            LogoutButton                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UTextBlock*)                         LogoutLabel                                                 OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UPanelWidget*)                       LogoutButtonBox                                             OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UNativeWidgetHost*)                  ControllerTip                                               OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UXUConfirmWidget*)                   ConfirmWidget                                               OFFSET(get<T>, {0x328, 8, 0, 0})


	/// Functions
	// Function /Script/XDGAccount.XUUserCenterWidget.OnUserScroll
	// void OnUserScroll(float CurrentOffset);                                                                                  // [0xfc1470] Final|Native|Protected 
	// Function /Script/XDGAccount.XUUserCenterWidget.OnLogoutBtnClick
	// void OnLogoutBtnClick();                                                                                                 // [0xfc1270] Final|Native|Protected 
	// Function /Script/XDGAccount.XUUserCenterWidget.OnErrorBtnClick
	// void OnErrorBtnClick();                                                                                                  // [0xfc1230] Final|Native|Protected 
	// Function /Script/XDGAccount.XUUserCenterWidget.OnCopyBtnClick
	// void OnCopyBtnClick();                                                                                                   // [0xfc1210] Final|Native|Protected 
	// Function /Script/XDGAccount.XUUserCenterWidget.OnCloseBtnClick
	// void OnCloseBtnClick();                                                                                                  // [0xfc11b0] Final|Native|Protected 
};

/// Struct /Script/XDGAccount.AuthCodeData
/// Size: 0x0020 (0x000000 - 0x000020)
class FAuthCodeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Scope                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Code                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/XDGAccount.AreaCodeData
/// Size: 0x0038 (0x000000 - 0x000038)
class FAreaCodeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   Region                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   regionName                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   areaCode                                                    OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	SMember(FString)                                   areaCodeName                                                OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/XDGAccount.XdAccountInfo
/// Size: 0x0060 (0x000000 - 0x000060)
class FXdAccountInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(EXDGLoginType)                             LoginType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   loginName                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   NickName                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   avatar                                                      OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   bindDate                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(EAccountBindingStatus)                     status                                                      OFFSET(get<T>, {0x48, 1, 0, 0})
	SMember(FString)                                   openid                                                      OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/XDGAccount.CodeSendResponse
/// Size: 0x0008 (0x000000 - 0x000008)
class FCodeSendResponse : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(double)                                    resendTime                                                  OFFSET(get<double>, {0x0, 8, 0, 0})
};

/// Struct /Script/XDGAccount.XDRefreshTokenModel
/// Size: 0x0060 (0x000000 - 0x000060)
class FXDRefreshTokenModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      isUpdated                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FAccessToken)                              token                                                       OFFSET(getStruct<T>, {0x8, 88, 0, 0})
};

/// Struct /Script/XDGAccount.XDMessageTwoButtons
/// Size: 0x0040 (0x000000 - 0x000040)
class FXDMessageTwoButtons : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Content                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   negativeButton                                              OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   positiveButton                                              OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Enum /Script/XDGAccount.EAccountBindingStatus
/// Size: 0x02
enum class EAccountBindingStatus : uint8_t
{
	EAccountBindingStatus__Bound                                                     = 0,
	EAccountBindingStatus__Unbound                                                   = 1
};


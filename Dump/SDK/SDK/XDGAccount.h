
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "SlateCore.h"
#include "TapCommon.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "XDGCommon.h"

#pragma pack(push, 0x1)

class UCodeUnbindWidgetStyle;
class UEmailBoxWidgetStyle;
class UEmailCodeLoginWidgetStyle;
class UGetAccessToken;
class UGetUserInfoWebFunction;
class UPhoneNumberBoxWidgetStyle;
class USmsLoginWidgetStyle;
class UVerificationCodeBoxWidgetStyle;
class UXUAccountCancellationWidget;
class UXUSmsCodeWidget;
class UXUSmsLoginWidget;
class UXUSmsSliderWidget;
class UXUUserCenterItemWidget;
class UXUUserCenterTipWidget;
class UXUUserCenterWidget;

/// Enum /Script/XDGAccount.EAccountBindingStatus
/// Size: 0x01 (1 bytes)
enum class EAccountBindingStatus : uint8_t
{
	EAccountBindingStatus__Bound                                                     = 0,
	EAccountBindingStatus__Unbound                                                   = 1
};

#pragma pack(pop)


static_assert(sizeof(FCodeUnbindStyle) == 0x0710); // 1808 bytes (0x000008 - 0x000710)
static_assert(sizeof(UCodeUnbindWidgetStyle) == 0x0740); // 1856 bytes (0x000030 - 0x000740)
static_assert(sizeof(FEmailBoxStyle) == 0x0670); // 1648 bytes (0x000008 - 0x000670)
static_assert(sizeof(UEmailBoxWidgetStyle) == 0x06A0); // 1696 bytes (0x000030 - 0x0006A0)
static_assert(sizeof(FEmailCodeLoginStyle) == 0x0720); // 1824 bytes (0x000008 - 0x000720)
static_assert(sizeof(UEmailCodeLoginWidgetStyle) == 0x0750); // 1872 bytes (0x000030 - 0x000750)
static_assert(sizeof(FPhoneNumberBoxStyle) == 0x19B0); // 6576 bytes (0x000008 - 0x0019B0)
static_assert(sizeof(UPhoneNumberBoxWidgetStyle) == 0x19E0); // 6624 bytes (0x000030 - 0x0019E0)
static_assert(sizeof(FSmsLoginStyle) == 0x0720); // 1824 bytes (0x000008 - 0x000720)
static_assert(sizeof(USmsLoginWidgetStyle) == 0x0750); // 1872 bytes (0x000030 - 0x000750)
static_assert(sizeof(FVerificationCodeBoxStyle) == 0x0D50); // 3408 bytes (0x000008 - 0x000D50)
static_assert(sizeof(UVerificationCodeBoxWidgetStyle) == 0x0D80); // 3456 bytes (0x000030 - 0x000D80)
static_assert(sizeof(UGetUserInfoWebFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGetAccessToken) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UXUAccountCancellationWidget) == 0x02F8); // 760 bytes (0x0002D0 - 0x0002F8)
static_assert(sizeof(UXUSmsCodeWidget) == 0x03A0); // 928 bytes (0x000280 - 0x0003A0)
static_assert(sizeof(UXUSmsLoginWidget) == 0x0350); // 848 bytes (0x000280 - 0x000350)
static_assert(sizeof(UXUSmsSliderWidget) == 0x0370); // 880 bytes (0x0002D0 - 0x000370)
static_assert(sizeof(UXUUserCenterItemWidget) == 0x0338); // 824 bytes (0x000280 - 0x000338)
static_assert(sizeof(UXUUserCenterTipWidget) == 0x0370); // 880 bytes (0x000280 - 0x000370)
static_assert(sizeof(UXUUserCenterWidget) == 0x0340); // 832 bytes (0x000280 - 0x000340)
static_assert(sizeof(FAuthCodeData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAreaCodeData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FXdAccountInfo) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FCodeSendResponse) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FXDRefreshTokenModel) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FXDMessageTwoButtons) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(offsetof(FCodeUnbindStyle, BackgroundBoxMargin) == 0x0008);
static_assert(offsetof(FCodeUnbindStyle, ContentBoxPadding) == 0x0018);
static_assert(offsetof(FCodeUnbindStyle, CloseButtonPadding) == 0x0028);
static_assert(offsetof(FCodeUnbindStyle, CloseButtonSize) == 0x0038);
static_assert(offsetof(FCodeUnbindStyle, TitleTextBlockStyle) == 0x0050);
static_assert(offsetof(FCodeUnbindStyle, DefaultTextBlockStyle) == 0x03B0);
static_assert(offsetof(UCodeUnbindWidgetStyle, WidgetStyle) == 0x0030);
static_assert(offsetof(FEmailBoxStyle, EditableTextStyle) == 0x0010);
static_assert(offsetof(FEmailBoxStyle, ErrorTextBlockStyle) == 0x0310);
static_assert(offsetof(UEmailBoxWidgetStyle, WidgetStyle) == 0x0030);
static_assert(offsetof(FEmailCodeLoginStyle, BackgroundBoxMargin) == 0x0008);
static_assert(offsetof(FEmailCodeLoginStyle, ContentBoxPadding) == 0x0018);
static_assert(offsetof(FEmailCodeLoginStyle, CloseButtonPadding) == 0x0028);
static_assert(offsetof(FEmailCodeLoginStyle, CloseButtonSize) == 0x0038);
static_assert(offsetof(FEmailCodeLoginStyle, TitleTextBlockStyle) == 0x0050);
static_assert(offsetof(FEmailCodeLoginStyle, AgreementTextBlockStyle) == 0x03B0);
static_assert(offsetof(FEmailCodeLoginStyle, LineColor) == 0x0710);
static_assert(offsetof(UEmailCodeLoginWidgetStyle, WidgetStyle) == 0x0030);
static_assert(offsetof(FPhoneNumberBoxStyle, SelectionBoxBackgroundBrush) == 0x0010);
static_assert(offsetof(FPhoneNumberBoxStyle, AreaCodeArrowBrush) == 0x00E0);
static_assert(offsetof(FPhoneNumberBoxStyle, SelectionBoxPadding) == 0x01B0);
static_assert(offsetof(FPhoneNumberBoxStyle, Padding) == 0x01C8);
static_assert(offsetof(FPhoneNumberBoxStyle, TextBlockStyle) == 0x01E0);
static_assert(offsetof(FPhoneNumberBoxStyle, FocusTextBlockStyle) == 0x0540);
static_assert(offsetof(FPhoneNumberBoxStyle, EditableTextStyle) == 0x08A0);
static_assert(offsetof(FPhoneNumberBoxStyle, ScrollBoxStyle) == 0x0BA0);
static_assert(offsetof(FPhoneNumberBoxStyle, ScrollBarStyle) == 0x0EF0);
static_assert(offsetof(FPhoneNumberBoxStyle, ErrorTextBlockStyle) == 0x1650);
static_assert(offsetof(UPhoneNumberBoxWidgetStyle, WidgetStyle) == 0x0030);
static_assert(offsetof(FSmsLoginStyle, BackgroundBoxMargin) == 0x0008);
static_assert(offsetof(FSmsLoginStyle, ContentBoxPadding) == 0x0018);
static_assert(offsetof(FSmsLoginStyle, CloseButtonPadding) == 0x0028);
static_assert(offsetof(FSmsLoginStyle, CloseButtonSize) == 0x0038);
static_assert(offsetof(FSmsLoginStyle, TitleTextBlockStyle) == 0x0050);
static_assert(offsetof(FSmsLoginStyle, AgreementTextBlockStyle) == 0x03B0);
static_assert(offsetof(FSmsLoginStyle, LineColor) == 0x0710);
static_assert(offsetof(USmsLoginWidgetStyle, WidgetStyle) == 0x0030);
static_assert(offsetof(FVerificationCodeBoxStyle, Padding) == 0x000C);
static_assert(offsetof(FVerificationCodeBoxStyle, EditableTextStyle) == 0x0020);
static_assert(offsetof(FVerificationCodeBoxStyle, TextBlockStyle) == 0x0320);
static_assert(offsetof(FVerificationCodeBoxStyle, TextBlockStyleOrange) == 0x0680);
static_assert(offsetof(FVerificationCodeBoxStyle, ErrorTextBlockStyle) == 0x09E0);
static_assert(offsetof(FVerificationCodeBoxStyle, LineColor) == 0x0D40);
static_assert(offsetof(UVerificationCodeBoxWidgetStyle, WidgetStyle) == 0x0030);
static_assert(offsetof(UXUAccountCancellationWidget, TitleLabel) == 0x02D0);
static_assert(offsetof(UXUAccountCancellationWidget, ControllerTip) == 0x02D8);
static_assert(offsetof(UXUSmsCodeWidget, BackButton) == 0x0318);
static_assert(offsetof(UXUSmsCodeWidget, CloseButton) == 0x0320);
static_assert(offsetof(UXUSmsCodeWidget, SentTipText) == 0x0328);
static_assert(offsetof(UXUSmsCodeWidget, SmsCodeLabelHost) == 0x0330);
static_assert(offsetof(UXUSmsCodeWidget, ResendButton) == 0x0348);
static_assert(offsetof(UXUSmsCodeWidget, CodeTip) == 0x0350);
static_assert(offsetof(UXUSmsCodeWidget, BGImage) == 0x0358);
static_assert(offsetof(UXUSmsCodeWidget, ResendButtonText) == 0x0360);
static_assert(offsetof(UXUSmsCodeWidget, ControllerTip) == 0x0368);
static_assert(offsetof(UXUSmsLoginWidget, CloseButton) == 0x0300);
static_assert(offsetof(UXUSmsLoginWidget, AreaCodeLabel) == 0x0308);
static_assert(offsetof(UXUSmsLoginWidget, PhoneNumberLabelHost) == 0x0310);
static_assert(offsetof(UXUSmsLoginWidget, CodeTip) == 0x0328);
static_assert(offsetof(UXUSmsLoginWidget, BGImage) == 0x0330);
static_assert(offsetof(UXUSmsLoginWidget, NextButton) == 0x0338);
static_assert(offsetof(UXUSmsLoginWidget, ControllerTip) == 0x0348);
static_assert(offsetof(UXUSmsSliderWidget, ControllerTip) == 0x0360);
static_assert(offsetof(UXUUserCenterItemWidget, TitleLabel) == 0x02A0);
static_assert(offsetof(UXUUserCenterItemWidget, TitleImage) == 0x02A8);
static_assert(offsetof(UXUUserCenterItemWidget, BindButton) == 0x02B0);
static_assert(offsetof(UXUUserCenterItemWidget, BindLabel) == 0x02B8);
static_assert(offsetof(UXUUserCenterItemWidget, IsBindingLabel) == 0x02C0);
static_assert(offsetof(UXUUserCenterItemWidget, line) == 0x02C8);
static_assert(offsetof(UXUUserCenterItemWidget, LogoMap) == 0x02E8);
static_assert(offsetof(UXUUserCenterTipWidget, TitleLabel) == 0x0280);
static_assert(offsetof(UXUUserCenterTipWidget, DetailLabel) == 0x0288);
static_assert(offsetof(UXUUserCenterTipWidget, TextBox) == 0x0290);
static_assert(offsetof(UXUUserCenterTipWidget, TextBorder) == 0x0298);
static_assert(offsetof(UXUUserCenterTipWidget, GreenButton) == 0x02A0);
static_assert(offsetof(UXUUserCenterTipWidget, CloseButton) == 0x02A8);
static_assert(offsetof(UXUUserCenterTipWidget, GreenButtonLabel) == 0x02B0);
static_assert(offsetof(UXUUserCenterTipWidget, WhiteButton) == 0x02B8);
static_assert(offsetof(UXUUserCenterTipWidget, WhiteButtonLabel) == 0x02C0);
static_assert(offsetof(UXUUserCenterTipWidget, RedTipLabel) == 0x02C8);
static_assert(offsetof(UXUUserCenterTipWidget, ControllerTip) == 0x02D0);
static_assert(offsetof(UXUUserCenterWidget, TitleLabel) == 0x0280);
static_assert(offsetof(UXUUserCenterWidget, StateLabel) == 0x0288);
static_assert(offsetof(UXUUserCenterWidget, ScrollPanel) == 0x0290);
static_assert(offsetof(UXUUserCenterWidget, CurrentLoginTitleLabel) == 0x0298);
static_assert(offsetof(UXUUserCenterWidget, StateLabel2) == 0x02A0);
static_assert(offsetof(UXUUserCenterWidget, IDTitleLabel) == 0x02A8);
static_assert(offsetof(UXUUserCenterWidget, BindInfoTitleLabel) == 0x02B0);
static_assert(offsetof(UXUUserCenterWidget, CopyButton) == 0x02B8);
static_assert(offsetof(UXUUserCenterWidget, CloseButton) == 0x02C0);
static_assert(offsetof(UXUUserCenterWidget, ListBox) == 0x02C8);
static_assert(offsetof(UXUUserCenterWidget, ErrorButton) == 0x02D0);
static_assert(offsetof(UXUUserCenterWidget, ErrorButtonLabel) == 0x02D8);
static_assert(offsetof(UXUUserCenterWidget, ErrorSwitcher) == 0x02E0);
static_assert(offsetof(UXUUserCenterWidget, LogoutButton) == 0x02E8);
static_assert(offsetof(UXUUserCenterWidget, LogoutLabel) == 0x02F0);
static_assert(offsetof(UXUUserCenterWidget, LogoutButtonBox) == 0x02F8);
static_assert(offsetof(UXUUserCenterWidget, ControllerTip) == 0x0300);
static_assert(offsetof(UXUUserCenterWidget, ConfirmWidget) == 0x0328);
static_assert(offsetof(FAuthCodeData, Scope) == 0x0000);
static_assert(offsetof(FAuthCodeData, Code) == 0x0010);
static_assert(offsetof(FAreaCodeData, Region) == 0x0000);
static_assert(offsetof(FAreaCodeData, regionName) == 0x0010);
static_assert(offsetof(FAreaCodeData, areaCodeName) == 0x0028);
static_assert(offsetof(FXdAccountInfo, LoginType) == 0x0000);
static_assert(offsetof(FXdAccountInfo, loginName) == 0x0008);
static_assert(offsetof(FXdAccountInfo, NickName) == 0x0018);
static_assert(offsetof(FXdAccountInfo, avatar) == 0x0028);
static_assert(offsetof(FXdAccountInfo, bindDate) == 0x0038);
static_assert(offsetof(FXdAccountInfo, status) == 0x0048);
static_assert(offsetof(FXdAccountInfo, openid) == 0x0050);
static_assert(offsetof(FXDRefreshTokenModel, token) == 0x0008);
static_assert(offsetof(FXDMessageTwoButtons, Title) == 0x0000);
static_assert(offsetof(FXDMessageTwoButtons, Content) == 0x0010);
static_assert(offsetof(FXDMessageTwoButtons, negativeButton) == 0x0020);
static_assert(offsetof(FXDMessageTwoButtons, positiveButton) == 0x0030);


/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "JsonUtilities.h"
#include "SlateCore.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UTUHUD;
class UTapBoxWrapperWidgetStyle;
class UTapButton;
class UTapButtonSlot;
class UTapCommonBPLibrary;
class UTapMessageBoxWidgetStyle;
class UTapSubsystem;
class UTapThrobberWidgetStyle;
class UTapToastWidgetStyle;
class UTapWebBrowser;
class UTapWidget;

/// Enum /Script/TapCommon.ETapButtonStyleType
/// Size: 0x01 (1 bytes)
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
/// Size: 0x01 (1 bytes)
enum class ETapInputMode : uint8_t
{
	ETapInputMode__Focus                                                             = 0,
	ETapInputMode__Cursor                                                            = 1
};

/// Enum /Script/TapCommon.ETapControllerTipIconType
/// Size: 0x01 (1 bytes)
enum class ETapControllerTipIconType : uint8_t
{
	ETapControllerTipIconType__None                                                  = 0,
	ETapControllerTipIconType__Scroll                                                = 1,
	ETapControllerTipIconType__Back                                                  = 2,
	ETapControllerTipIconType__Accept                                                = 4
};

/// Enum /Script/TapCommon.ETapControllerType
/// Size: 0x01 (1 bytes)
enum class ETapControllerType : uint8_t
{
	ETapControllerType__PS                                                           = 0,
	ETapControllerType__XBox                                                         = 1,
	ETapControllerType__Switch                                                       = 2
};

/// Enum /Script/TapCommon.ETapAntiAddictionConfigRegion
/// Size: 0x01 (1 bytes)
enum class ETapAntiAddictionConfigRegion : uint8_t
{
	ETapAntiAddictionConfigRegion__China                                             = 0,
	ETapAntiAddictionConfigRegion__Vietnam                                           = 1
};

/// Enum /Script/TapCommon.ELanguageType
/// Size: 0x01 (1 bytes)
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
/// Size: 0x01 (1 bytes)
enum class ERegionType : uint8_t
{
	ERegionType__CN                                                                  = 0,
	ERegionType__Global                                                              = 1
};

#pragma pack(pop)


static_assert(sizeof(FTapBoxWrapperStyle) == 0x0480); // 1152 bytes (0x000008 - 0x000480)
static_assert(sizeof(UTapBoxWrapperWidgetStyle) == 0x04B0); // 1200 bytes (0x000030 - 0x0004B0)
static_assert(sizeof(UTapButton) == 0x0168); // 360 bytes (0x000140 - 0x000168)
static_assert(sizeof(UTapButtonSlot) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UTapCommonBPLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FTapMessageBoxStyle) == 0x0380); // 896 bytes (0x000008 - 0x000380)
static_assert(sizeof(UTapMessageBoxWidgetStyle) == 0x03B0); // 944 bytes (0x000030 - 0x0003B0)
static_assert(sizeof(UTapSubsystem) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(FTapThrobberStyle) == 0x0BF0); // 3056 bytes (0x000008 - 0x000BF0)
static_assert(sizeof(UTapThrobberWidgetStyle) == 0x0C20); // 3104 bytes (0x000030 - 0x000C20)
static_assert(sizeof(FTapToastStyle) == 0x0520); // 1312 bytes (0x000008 - 0x000520)
static_assert(sizeof(UTapToastWidgetStyle) == 0x0550); // 1360 bytes (0x000030 - 0x000550)
static_assert(sizeof(UTapWidget) == 0x0280); // 640 bytes (0x000280 - 0x000280)
static_assert(sizeof(UTapWebBrowser) == 0x02D0); // 720 bytes (0x000280 - 0x0002D0)
static_assert(sizeof(UTUHUD) == 0x02A0); // 672 bytes (0x000280 - 0x0002A0)
static_assert(sizeof(FTapCommand) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FTapCustomMessage) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FTapCommonRegionCode) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FTapControllerConfig) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FTapResponseWrapper) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FTapResult) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FTUCommonStorage) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FTUError) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FTUConfig) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FTapAntiAddictionConfig) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(FBillboardConfig) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(FTapBoxWrapperStyle, BackgroundBrush) == 0x0010);
static_assert(offsetof(FTapBoxWrapperStyle, TitleStyle) == 0x00E0);
static_assert(offsetof(FTapBoxWrapperStyle, TitlePadding) == 0x0440);
static_assert(offsetof(FTapBoxWrapperStyle, ButtonBoxPadding) == 0x0450);
static_assert(offsetof(FTapBoxWrapperStyle, ButtonSize) == 0x0460);
static_assert(offsetof(FTapBoxWrapperStyle, CloseButtonPadding) == 0x046C);
static_assert(offsetof(UTapBoxWrapperWidgetStyle, WidgetStyle) == 0x0030);
static_assert(offsetof(UTapButton, StyleType) == 0x0140);
static_assert(offsetof(UTapButtonSlot, Padding) == 0x0038);
static_assert(offsetof(UTapButtonSlot, HorizontalAlignment) == 0x0048);
static_assert(offsetof(UTapButtonSlot, VerticalAlignment) == 0x0049);
static_assert(offsetof(FTapMessageBoxStyle, RichTextBlockStyle) == 0x0010);
static_assert(offsetof(FTapMessageBoxStyle, ContentPadding) == 0x0370);
static_assert(offsetof(UTapMessageBoxWidgetStyle, WidgetStyle) == 0x0030);
static_assert(offsetof(UTapSubsystem, UISetting) == 0x0050);
static_assert(offsetof(FTapThrobberStyle, BackgroundBrush) == 0x0010);
static_assert(offsetof(FTapThrobberStyle, BackGroundBrush_PC) == 0x00E0);
static_assert(offsetof(FTapThrobberStyle, BackGroundBrush_PC_Text) == 0x01B0);
static_assert(offsetof(FTapThrobberStyle, ShadowBrush) == 0x0280);
static_assert(offsetof(FTapThrobberStyle, PieceImage) == 0x0350);
static_assert(offsetof(FTapThrobberStyle, PieceImage_PC) == 0x0420);
static_assert(offsetof(FTapThrobberStyle, ColorAndOpacity) == 0x04F0);
static_assert(offsetof(FTapThrobberStyle, ContentStyle) == 0x0520);
static_assert(offsetof(FTapThrobberStyle, ContentStyle_PC) == 0x0880);
static_assert(offsetof(UTapThrobberWidgetStyle, WidgetStyle) == 0x0030);
static_assert(offsetof(FTapToastStyle, Background) == 0x0010);
static_assert(offsetof(FTapToastStyle, IconBrushTemplate) == 0x00E0);
static_assert(offsetof(FTapToastStyle, ContentStyle) == 0x01B0);
static_assert(offsetof(UTapToastWidgetStyle, WidgetStyle) == 0x0030);
static_assert(offsetof(UTapWebBrowser, WebBrowser) == 0x0290);
static_assert(offsetof(UTapWebBrowser, BTN_GoBack) == 0x0298);
static_assert(offsetof(UTapWebBrowser, BTN_Close) == 0x02A0);
static_assert(offsetof(UTapWebBrowser, BTN_Retry) == 0x02A8);
static_assert(offsetof(UTapWebBrowser, TB_Retry) == 0x02B0);
static_assert(offsetof(UTapWebBrowser, TB_ErrorTip) == 0x02B8);
static_assert(offsetof(UTapWebBrowser, ErrorTipIcon) == 0x02C0);
static_assert(offsetof(UTapWebBrowser, RetryPanel) == 0x02C8);
static_assert(offsetof(UTUHUD, TitleLabel) == 0x0280);
static_assert(offsetof(UTUHUD, ImageBox) == 0x0288);
static_assert(offsetof(UTUHUD, BackView) == 0x0290);
static_assert(offsetof(FTapCommand, service) == 0x0000);
static_assert(offsetof(FTapCommand, method) == 0x0010);
static_assert(offsetof(FTapCommand, args) == 0x0020);
static_assert(offsetof(FTapCommand, callbackId) == 0x0038);
static_assert(offsetof(FTapCustomMessage, MessageName) == 0x0000);
static_assert(offsetof(FTapCustomMessage, MessageContent) == 0x0010);
static_assert(offsetof(FTapResponseWrapper, Data) == 0x0008);
static_assert(offsetof(FTapResult, callbackId) == 0x0000);
static_assert(offsetof(FTapResult, Content) == 0x0010);
static_assert(offsetof(FTapResult, Message) == 0x0020);
static_assert(offsetof(FTUError, error_description) == 0x0008);
static_assert(offsetof(FTUError, Msg) == 0x0018);
static_assert(offsetof(FTUConfig, ClientId) == 0x0000);
static_assert(offsetof(FTUConfig, ClientToken) == 0x0010);
static_assert(offsetof(FTUConfig, ClientPublicKey) == 0x0020);
static_assert(offsetof(FTUConfig, RegionType) == 0x0030);
static_assert(offsetof(FTUConfig, ServerURL) == 0x0038);
static_assert(offsetof(FTapAntiAddictionConfig, Region) == 0x0002);
static_assert(offsetof(FBillboardConfig, Dimensions) == 0x0000);
static_assert(offsetof(FBillboardConfig, BillboardUrl) == 0x0050);

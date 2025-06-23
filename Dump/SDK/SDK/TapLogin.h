
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

#pragma pack(push, 0x1)

class UPermissionCheckBoxWidgetStyle;
class UQrCodeScanTipButtonWidgetStyle;
class UTULoginReflection;
class UTapLoginWidgetStyle;

#pragma pack(pop)


static_assert(sizeof(FPermissionCheckBoxStyle) == 0x0B80); // 2944 bytes (0x000008 - 0x000B80)
static_assert(sizeof(UPermissionCheckBoxWidgetStyle) == 0x0BB0); // 2992 bytes (0x000030 - 0x000BB0)
static_assert(sizeof(FQrCodeScanTipButtonStyle) == 0x05E0); // 1504 bytes (0x000008 - 0x0005E0)
static_assert(sizeof(UQrCodeScanTipButtonWidgetStyle) == 0x0610); // 1552 bytes (0x000030 - 0x000610)
static_assert(sizeof(FTapLoginStyle) == 0x37D0); // 14288 bytes (0x000008 - 0x0037D0)
static_assert(sizeof(UTapLoginWidgetStyle) == 0x3800); // 14336 bytes (0x000030 - 0x003800)
static_assert(sizeof(UTULoginReflection) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FLoginWrapper) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FFriendWrapper) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FTUAccessToken) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FTUAntiAddictionModel) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTULoginError) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FTULoginFriendInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FTULoginFriendResult) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FTULoginProfileModel) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FTULoginStorage) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FTULoginConfig) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FTUQrCodeModel) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(FPermissionCheckBoxStyle, PermissionCheckBoxStyle) == 0x0010);
static_assert(offsetof(FPermissionCheckBoxStyle, PermissionTextBlockStyle) == 0x0820);
static_assert(offsetof(UPermissionCheckBoxWidgetStyle, WidgetStyle) == 0x0030);
static_assert(offsetof(FQrCodeScanTipButtonStyle, ScanTipTextBlockStyle) == 0x0010);
static_assert(offsetof(FQrCodeScanTipButtonStyle, IconBrush) == 0x0370);
static_assert(offsetof(FQrCodeScanTipButtonStyle, OpenBrush) == 0x0440);
static_assert(offsetof(FQrCodeScanTipButtonStyle, CloseBrush) == 0x0510);
static_assert(offsetof(UQrCodeScanTipButtonWidgetStyle, WidgetStyle) == 0x0030);
static_assert(offsetof(FTapLoginStyle, TitleTextBlockStyle) == 0x0010);
static_assert(offsetof(FTapLoginStyle, TitlePadding) == 0x0370);
static_assert(offsetof(FTapLoginStyle, SubtitleTextBlockStyle) == 0x0380);
static_assert(offsetof(FTapLoginStyle, QrCodePadding) == 0x06E0);
static_assert(offsetof(FTapLoginStyle, QrCodeDescription2Padding) == 0x06F0);
static_assert(offsetof(FTapLoginStyle, QrCodeDescriptionStyle) == 0x0700);
static_assert(offsetof(FTapLoginStyle, QrCodeDescriptionStyle2) == 0x0A60);
static_assert(offsetof(FTapLoginStyle, TipContainerBrush) == 0x0DC0);
static_assert(offsetof(FTapLoginStyle, QrCodeScanTipButtonStyle) == 0x0E90);
static_assert(offsetof(FTapLoginStyle, RetryBrush) == 0x1470);
static_assert(offsetof(FTapLoginStyle, RetryContentPadding) == 0x1540);
static_assert(offsetof(FTapLoginStyle, QrCodeRetryIconBrush) == 0x1550);
static_assert(offsetof(FTapLoginStyle, QrCodeRetryTextBlockStyle) == 0x1620);
static_assert(offsetof(FTapLoginStyle, QrCodeRetryDescriptionStyle) == 0x1980);
static_assert(offsetof(FTapLoginStyle, NoPermissionPadding) == 0x1CE0);
static_assert(offsetof(FTapLoginStyle, NoPermissionBrush) == 0x1CF0);
static_assert(offsetof(FTapLoginStyle, WebAuthButtonPadding) == 0x1DC0);
static_assert(offsetof(FTapLoginStyle, WebAuthTextBlockStyle) == 0x1DD0);
static_assert(offsetof(FTapLoginStyle, WebAuthArrow) == 0x2130);
static_assert(offsetof(FTapLoginStyle, WebAuthHAlignment) == 0x2200);
static_assert(offsetof(FTapLoginStyle, WebAuthTipTextBlockStyle) == 0x2210);
static_assert(offsetof(FTapLoginStyle, WebAuthTipTextBlockStyle2) == 0x2570);
static_assert(offsetof(FTapLoginStyle, WebAuthTip2Padding) == 0x28D0);
static_assert(offsetof(FTapLoginStyle, PermissionItemPadding) == 0x28E0);
static_assert(offsetof(FTapLoginStyle, PermissionTitleTextBlockStyle) == 0x28F0);
static_assert(offsetof(FTapLoginStyle, PermissionCheckBoxStyle) == 0x2C50);
static_assert(offsetof(UTapLoginWidgetStyle, WidgetStyle) == 0x0030);
static_assert(offsetof(FLoginWrapper, wrapper) == 0x0000);
static_assert(offsetof(FFriendWrapper, Content) == 0x0000);
static_assert(offsetof(FTUAccessToken, Kid) == 0x0000);
static_assert(offsetof(FTUAccessToken, access_token) == 0x0010);
static_assert(offsetof(FTUAccessToken, token_type) == 0x0020);
static_assert(offsetof(FTUAccessToken, mac_key) == 0x0030);
static_assert(offsetof(FTUAccessToken, mac_algorithm) == 0x0040);
static_assert(offsetof(FTUAccessToken, Scope) == 0x0050);
static_assert(offsetof(FTUAntiAddictionModel, Code) == 0x0000);
static_assert(offsetof(FTULoginError, Msg) == 0x0008);
static_assert(offsetof(FTULoginError, Error) == 0x0018);
static_assert(offsetof(FTULoginError, error_description) == 0x0028);
static_assert(offsetof(FTULoginFriendInfo, Name) == 0x0000);
static_assert(offsetof(FTULoginFriendInfo, avatar) == 0x0010);
static_assert(offsetof(FTULoginFriendInfo, openid) == 0x0020);
static_assert(offsetof(FTULoginFriendResult, Data) == 0x0000);
static_assert(offsetof(FTULoginFriendResult, Cursor) == 0x0010);
static_assert(offsetof(FTULoginProfileModel, Name) == 0x0000);
static_assert(offsetof(FTULoginProfileModel, avatar) == 0x0010);
static_assert(offsetof(FTULoginProfileModel, openid) == 0x0020);
static_assert(offsetof(FTULoginProfileModel, unionid) == 0x0030);
static_assert(offsetof(FTULoginConfig, ClientId) == 0x0000);
static_assert(offsetof(FTULoginConfig, RegionType) == 0x0010);
static_assert(offsetof(FTUQrCodeModel, qrcode_url) == 0x0000);
static_assert(offsetof(FTUQrCodeModel, verification_url) == 0x0010);
static_assert(offsetof(FTUQrCodeModel, device_code) == 0x0020);
static_assert(offsetof(FTUQrCodeModel, user_code) == 0x0030);


/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "JsonUtilities.h"
#include "SlateCore.h"
#include "TapCommon.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UAgreementPageWidgetStyle;
class UBackgroundColorWebFunction;
class UClipboardWebFunction;
class UCloseButtonWebFunction;
class UCloseWebFunction;
class UGameMessageWebFunction;
class UGetDeviceInfoWebFunction;
class UGetSafeAreaWebFunction;
class UGetStorageWebFunction;
class UHttpRequestWebFunction;
class UIWebFunction;
class UIniGenerateCommandlet;
class ULoadingWebFunction;
class ULogWebFunction;
class UNavigationBarWebFunction;
class UOpenPageWebFunction;
class UPutStorageWebFunction;
class URegionStatic;
class UToastWebFunction;
class UTrackWebFunction;
class UWebBrowserWidgetStyle;
class UWebCallback;
class UWebFunctionManager;
class UXDButton;
class UXDConfig;
class UXDConfigConverterCommandlet;
class UXDEditableText;
class UXDGConfig;
class UXUConfirmWidget;
class UXUPrivacyDisagreeWidget;
class UXdWebBridge;

/// Enum /Script/XDGCommon.EWebResponseType
/// Size: 0x01 (1 bytes)
enum class EWebResponseType : uint8_t
{
	ExecuteSuccess                                                                   = 0,
	ExecuteFailed                                                                    = 1,
	FunctionNotFound                                                                 = 2
};

/// Enum /Script/XDGCommon.EWebAction
/// Size: 0x04 (4 bytes)
enum class EWebAction : uint32_t
{
	EWebAction__CLOSE                                                                = 0,
	EWebAction__MESSAGE                                                              = 1
};

/// Enum /Script/XDGCommon.EXDGLoginType
/// Size: 0x01 (1 bytes)
enum class EXDGLoginType : uint8_t
{
	EXDGLoginType__Default                                                           = 255,
	EXDGLoginType__Guest                                                             = 0,
	EXDGLoginType__WeChat                                                            = 1,
	EXDGLoginType__Apple                                                             = 2,
	EXDGLoginType__Google                                                            = 3,
	EXDGLoginType__Facebook                                                          = 4,
	EXDGLoginType__TapTap                                                            = 5,
	EXDGLoginType__LINE                                                              = 6,
	EXDGLoginType__Twitter                                                           = 7,
	EXDGLoginType__QQ                                                                = 8,
	EXDGLoginType__Steam                                                             = 10,
	EXDGLoginType__Phone                                                             = 11,
	EXDGLoginType__Email                                                             = 12
};

/// Enum /Script/XDGCommon.EXDGRegionType
/// Size: 0x01 (1 bytes)
enum class EXDGRegionType : uint8_t
{
	EXDGRegionType__CN                                                               = 0,
	EXDGRegionType__Global                                                           = 1
};

/// Enum /Script/XDGCommon.FXDGPackageType
/// Size: 0x01 (1 bytes)
enum class FXDGPackageType : uint8_t
{
	PackageType_Default                                                              = 0,
	PackageType_AppStore                                                             = 1,
	PackageType_Android_Normal                                                       = 2,
	PackageType_GooglePlay                                                           = 3,
	PackageType_Android_TapTap                                                       = 4,
	PackageType_Android_TapIO                                                        = 5,
	PackageType_PC_Normal                                                            = 6,
	PackageType_PC_Steam                                                             = 7,
	PackageType_PC_TapTap                                                            = 8
};

#pragma pack(pop)


static_assert(sizeof(UIWebFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAgreementPageStyle) == 0x1A30); // 6704 bytes (0x000008 - 0x001A30)
static_assert(sizeof(UAgreementPageWidgetStyle) == 0x1A60); // 6752 bytes (0x000030 - 0x001A60)
static_assert(sizeof(UIniGenerateCommandlet) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UXdWebBridge) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UWebCallback) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UWebFunctionManager) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FWebBrowserStyle) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(UWebBrowserWidgetStyle) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UCloseWebFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGetStorageWebFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UToastWebFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPutStorageWebFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UHttpRequestWebFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGetDeviceInfoWebFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameMessageWebFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULogWebFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULoadingWebFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UGetSafeAreaWebFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBackgroundColorWebFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNavigationBarWebFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCloseButtonWebFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTrackWebFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOpenPageWebFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClipboardWebFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UXDButton) == 0x0590); // 1424 bytes (0x000588 - 0x000590)
static_assert(sizeof(FAdjustEvent_XD) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UXDConfig) == 0x0330); // 816 bytes (0x000038 - 0x000330)
static_assert(sizeof(UXDConfigConverterCommandlet) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UXDEditableText) == 0x02D0); // 720 bytes (0x000280 - 0x0002D0)
static_assert(sizeof(FAdjustEvent) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UXDGConfig) == 0x03C0); // 960 bytes (0x000038 - 0x0003C0)
static_assert(sizeof(UXUConfirmWidget) == 0x0308); // 776 bytes (0x000280 - 0x000308)
static_assert(sizeof(UXUPrivacyDisagreeWidget) == 0x02B0); // 688 bytes (0x000280 - 0x0002B0)
static_assert(sizeof(URegionStatic) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAccessToken) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FUpdateAgreementResponse) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FJsResponse) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FJsRequest) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FWebStorage) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FWebBridgeResponse) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FWebRequest) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FWebResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAgreementSignInfo) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FAgreementOptionData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FXDGAgreement) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAgreementData) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FXdWebActionResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FXdgSuccess) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FXUResponseModel) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FXDGError) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FXDGRegionInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FXDGInitParams) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FXDGUser) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FXULanguageModel) == 0x0860); // 2144 bytes (0x000000 - 0x000860)
static_assert(sizeof(FSteamQueryResponse) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FSteamQueryParam) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FSteamPayNotifyResponse) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FSteamPayNotifyParam) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FSteamPayResponse) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FSteamPayParam) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FXUPayCheckModel) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FXUPayCheckResponseModel) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FXUPhoneSend) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FXUServerConfigAgreement) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FXUServerConfigBindEntries) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FXUServerConfigTapSdk) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FXUServerConfigConfigs) == 0x01E8); // 488 bytes (0x000000 - 0x0001E8)
static_assert(sizeof(FXUServerConfig) == 0x0208); // 520 bytes (0x000000 - 0x000208)
static_assert(sizeof(FXUStorage) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FXUSyncTokenModel) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FAgreementPageStyle, BoxPadding) == 0x0008);
static_assert(offsetof(FAgreementPageStyle, BackgroundBoxMargin) == 0x0018);
static_assert(offsetof(FAgreementPageStyle, ButtonPadding) == 0x0028);
static_assert(offsetof(FAgreementPageStyle, TitleStyle) == 0x0040);
static_assert(offsetof(FAgreementPageStyle, SummaryStyle) == 0x03B0);
static_assert(offsetof(FAgreementPageStyle, SummaryScrollBoxStyle) == 0x0710);
static_assert(offsetof(FAgreementPageStyle, PromptStyle) == 0x0A60);
static_assert(offsetof(FAgreementPageStyle, CheckBoxStyle) == 0x0DC0);
static_assert(offsetof(FAgreementPageStyle, CheckBoxTextStyle) == 0x15D0);
static_assert(offsetof(FAgreementPageStyle, TextPadding) == 0x1934);
static_assert(offsetof(FAgreementPageStyle, CheckBoxPadding) == 0x1944);
static_assert(offsetof(FAgreementPageStyle, AgreeButtonBrush) == 0x1960);
static_assert(offsetof(UAgreementPageWidgetStyle, WidgetStyle) == 0x0030);
static_assert(offsetof(UWebFunctionManager, WebFunctions) == 0x0028);
static_assert(offsetof(FWebBrowserStyle, BackgroundBoxMargin) == 0x0008);
static_assert(offsetof(FWebBrowserStyle, ContentBoxPadding) == 0x0018);
static_assert(offsetof(FWebBrowserStyle, CloseButtonPadding) == 0x0028);
static_assert(offsetof(FWebBrowserStyle, CloseButtonSize) == 0x0038);
static_assert(offsetof(UWebBrowserWidgetStyle, WidgetStyle) == 0x0030);
static_assert(offsetof(FAdjustEvent_XD, EventName) == 0x0000);
static_assert(offsetof(FAdjustEvent_XD, token) == 0x0010);
static_assert(offsetof(UXDConfig, ClientId) == 0x0038);
static_assert(offsetof(UXDConfig, RegionType) == 0x0048);
static_assert(offsetof(UXDConfig, AppId) == 0x0058);
static_assert(offsetof(UXDConfig, gameName) == 0x0068);
static_assert(offsetof(UXDConfig, logoutUrl) == 0x0078);
static_assert(offsetof(UXDConfig, reportUrl) == 0x0088);
static_assert(offsetof(UXDConfig, WebPayUrl) == 0x0098);
static_assert(offsetof(UXDConfig, webPayUrlForPC) == 0x00A8);
static_assert(offsetof(UXDConfig, Logos) == 0x00B8);
static_assert(offsetof(UXDConfig, TapSDK_ClientID) == 0x00D0);
static_assert(offsetof(UXDConfig, TapSDK_ClientToken) == 0x00E0);
static_assert(offsetof(UXDConfig, TapSDK_ServerUrl) == 0x00F0);
static_assert(offsetof(UXDConfig, TapSDK_Permissions) == 0x0100);
static_assert(offsetof(UXDConfig, TapDB_Channel) == 0x0118);
static_assert(offsetof(UXDConfig, TapDB_GameVersion) == 0x0128);
static_assert(offsetof(UXDConfig, Facebook_AppID) == 0x0138);
static_assert(offsetof(UXDConfig, Facebook_ClientToken) == 0x0148);
static_assert(offsetof(UXDConfig, Facebook_Permissions) == 0x0158);
static_assert(offsetof(UXDConfig, Line_ChannelID) == 0x0168);
static_assert(offsetof(UXDConfig, Twitter_ConsumerKey) == 0x0178);
static_assert(offsetof(UXDConfig, Twitter_ConsumerSecret) == 0x0188);
static_assert(offsetof(UXDConfig, Apple_ServiceID) == 0x0198);
static_assert(offsetof(UXDConfig, Google_ClientID) == 0x01A8);
static_assert(offsetof(UXDConfig, Google_ClientIDForAndroid) == 0x01B8);
static_assert(offsetof(UXDConfig, Google_ClientIDForPC) == 0x01C8);
static_assert(offsetof(UXDConfig, Adjust_AppToken) == 0x01E0);
static_assert(offsetof(UXDConfig, Adjust_Events) == 0x01F0);
static_assert(offsetof(UXDConfig, Appsflyer_AppID) == 0x0200);
static_assert(offsetof(UXDConfig, Appsflyer_DevKey_iOS) == 0x0210);
static_assert(offsetof(UXDConfig, Appsflyer_DevKey_Android) == 0x0220);
static_assert(offsetof(UXDConfig, Aliyun_PhoneAuthTokenForios) == 0x0230);
static_assert(offsetof(UXDConfig, Aliyun_PhoneAuthTokenForAndroid) == 0x0240);
static_assert(offsetof(UXDConfig, AD_TT_AppID) == 0x0250);
static_assert(offsetof(UXDConfig, AD_TT_AppName) == 0x0260);
static_assert(offsetof(UXDConfig, AD_GDT_UserActionSetID) == 0x0270);
static_assert(offsetof(UXDConfig, AD_GDT_AppSecretKey) == 0x0280);
static_assert(offsetof(UXDConfig, Wechat_AppID) == 0x0290);
static_assert(offsetof(UXDConfig, Wechat_UniversalLink) == 0x02A0);
static_assert(offsetof(UXDConfig, QQ_AppID) == 0x02B0);
static_assert(offsetof(UXDConfig, QQ_UniversalLink) == 0x02C0);
static_assert(offsetof(UXDConfig, Weibo_AppID) == 0x02D0);
static_assert(offsetof(UXDConfig, Weibo_UniversalLink) == 0x02E0);
static_assert(offsetof(UXDConfig, XHS_AppIdIos) == 0x02F0);
static_assert(offsetof(UXDConfig, XHS_AppIdAndroid) == 0x0300);
static_assert(offsetof(UXDConfig, XHS_UniversalLink) == 0x0310);
static_assert(offsetof(UXDConfig, DouYin_AppId) == 0x0320);
static_assert(offsetof(UXDEditableText, EditableText) == 0x02A0);
static_assert(offsetof(UXDEditableText, LastText) == 0x02B0);
static_assert(offsetof(FAdjustEvent, event_name) == 0x0000);
static_assert(offsetof(FAdjustEvent, token) == 0x0010);
static_assert(offsetof(UXDGConfig, client_id) == 0x0038);
static_assert(offsetof(UXDGConfig, region_type) == 0x0048);
static_assert(offsetof(UXDGConfig, app_id) == 0x0050);
static_assert(offsetof(UXDGConfig, game_name) == 0x0060);
static_assert(offsetof(UXDGConfig, logout_url) == 0x0070);
static_assert(offsetof(UXDGConfig, report_url) == 0x0080);
static_assert(offsetof(UXDGConfig, web_pay_url) == 0x0090);
static_assert(offsetof(UXDGConfig, webpay_url_for_pc) == 0x00A0);
static_assert(offsetof(UXDGConfig, tapsdk__client_id) == 0x00B8);
static_assert(offsetof(UXDGConfig, tapsdk__client_token) == 0x00C8);
static_assert(offsetof(UXDGConfig, tapsdk__server_url) == 0x00D8);
static_assert(offsetof(UXDGConfig, tapsdk__client_public_key) == 0x00E8);
static_assert(offsetof(UXDGConfig, tapsdk__permissions) == 0x00F8);
static_assert(offsetof(UXDGConfig, tapsdk__db_config__channel) == 0x0110);
static_assert(offsetof(UXDGConfig, tapsdk__db_config__game_version) == 0x0120);
static_assert(offsetof(UXDGConfig, facebook__app_id) == 0x0130);
static_assert(offsetof(UXDGConfig, facebook__client_token) == 0x0140);
static_assert(offsetof(UXDGConfig, facebook__permissions) == 0x0150);
static_assert(offsetof(UXDGConfig, line__channel_id) == 0x0160);
static_assert(offsetof(UXDGConfig, twitter__consumer_key) == 0x0170);
static_assert(offsetof(UXDGConfig, twitter__consumer_secret) == 0x0180);
static_assert(offsetof(UXDGConfig, apple__service_id) == 0x0190);
static_assert(offsetof(UXDGConfig, google__CLIENT_ID) == 0x01A0);
static_assert(offsetof(UXDGConfig, google__CLIENT_ID_FOR_ANDROID) == 0x01B0);
static_assert(offsetof(UXDGConfig, google__CLIENT_ID_FOR_PC) == 0x01C0);
static_assert(offsetof(UXDGConfig, adjust__app_token) == 0x01D8);
static_assert(offsetof(UXDGConfig, adjust__events) == 0x01E8);
static_assert(offsetof(UXDGConfig, appsflyer__app_id) == 0x01F8);
static_assert(offsetof(UXDGConfig, appsflyer__dev_key_ios) == 0x0208);
static_assert(offsetof(UXDGConfig, appsflyer__dev_key_android) == 0x0218);
static_assert(offsetof(UXDGConfig, aliyun__phone_auth_token_ios) == 0x0228);
static_assert(offsetof(UXDGConfig, aliyun__phone_auth_token_android) == 0x0238);
static_assert(offsetof(UXDGConfig, aliyun__push_key_ios) == 0x0248);
static_assert(offsetof(UXDGConfig, aliyun__push_secret_ios) == 0x0258);
static_assert(offsetof(UXDGConfig, aliyun__push_key_android) == 0x0268);
static_assert(offsetof(UXDGConfig, aliyun__push_secret_android) == 0x0278);
static_assert(offsetof(UXDGConfig, ad_config__tt_config__app_id) == 0x0288);
static_assert(offsetof(UXDGConfig, ad_config__tt_config__app_name) == 0x0298);
static_assert(offsetof(UXDGConfig, ad_config__gdt_config__user_action_set_id) == 0x02B0);
static_assert(offsetof(UXDGConfig, ad_config__gdt_config__app_secret_key) == 0x02C0);
static_assert(offsetof(UXDGConfig, wechat__app_id) == 0x02D0);
static_assert(offsetof(UXDGConfig, wechat__universal_link) == 0x02E0);
static_assert(offsetof(UXDGConfig, qq__app_id) == 0x02F0);
static_assert(offsetof(UXDGConfig, qq__universal_link) == 0x0300);
static_assert(offsetof(UXDGConfig, weibo__app_id) == 0x0310);
static_assert(offsetof(UXDGConfig, weibo__universal_link) == 0x0320);
static_assert(offsetof(UXDGConfig, xhs__app_id_ios) == 0x0330);
static_assert(offsetof(UXDGConfig, xhs__app_id_android) == 0x0340);
static_assert(offsetof(UXDGConfig, xhs__universal_link) == 0x0350);
static_assert(offsetof(UXDGConfig, douyin__app_id) == 0x0360);
static_assert(offsetof(UXDGConfig, push_config__channel_name_android) == 0x0370);
static_assert(offsetof(UXUConfirmWidget, WhiteButton) == 0x02B0);
static_assert(offsetof(UXUConfirmWidget, BlueButton) == 0x02B8);
static_assert(offsetof(UXUConfirmWidget, CloseButton) == 0x02C0);
static_assert(offsetof(UXUConfirmWidget, ControllerTip) == 0x02C8);
static_assert(offsetof(UXUConfirmWidget, ButtonSwitcher) == 0x02D0);
static_assert(offsetof(UXUConfirmWidget, BlueButton0) == 0x02D8);
static_assert(offsetof(UXUConfirmWidget, BlueButtonText) == 0x02E0);
static_assert(offsetof(UXUConfirmWidget, Title) == 0x02E8);
static_assert(offsetof(UXUConfirmWidget, Content) == 0x02F0);
static_assert(offsetof(UXUConfirmWidget, WhiteButtonText) == 0x02F8);
static_assert(offsetof(UXUConfirmWidget, BlueButtonText1) == 0x0300);
static_assert(offsetof(UXUPrivacyDisagreeWidget, ContentLabel) == 0x0280);
static_assert(offsetof(UXUPrivacyDisagreeWidget, ConfirmButton) == 0x0288);
static_assert(offsetof(UXUPrivacyDisagreeWidget, ConfirmButtonLabel) == 0x0290);
static_assert(offsetof(UXUPrivacyDisagreeWidget, DeclineButton) == 0x0298);
static_assert(offsetof(UXUPrivacyDisagreeWidget, DeclineButtonLabel) == 0x02A0);
static_assert(offsetof(UXUPrivacyDisagreeWidget, ControllerTip) == 0x02A8);
static_assert(offsetof(FAccessToken, Kid) == 0x0000);
static_assert(offsetof(FAccessToken, MacKey) == 0x0010);
static_assert(offsetof(FAccessToken, TokenType) == 0x0020);
static_assert(offsetof(FAccessToken, MacAlgorithm) == 0x0030);
static_assert(offsetof(FAccessToken, ConsoleID) == 0x0040);
static_assert(offsetof(FUpdateAgreementResponse, agreementVersion) == 0x0008);
static_assert(offsetof(FWebStorage, Key) == 0x0000);
static_assert(offsetof(FWebStorage, Value) == 0x0010);
static_assert(offsetof(FAgreementSignInfo, ClientId) == 0x0008);
static_assert(offsetof(FAgreementSignInfo, deviceCode) == 0x0018);
static_assert(offsetof(FAgreementSignInfo, agreementVersion) == 0x0028);
static_assert(offsetof(FAgreementSignInfo, agreementRegion) == 0x0038);
static_assert(offsetof(FAgreementSignInfo, UserId) == 0x0048);
static_assert(offsetof(FAgreementSignInfo, extra) == 0x0058);
static_assert(offsetof(FAgreementOptionData, Name) == 0x0008);
static_assert(offsetof(FAgreementOptionData, Title) == 0x0018);
static_assert(offsetof(FXDGAgreement, Type) == 0x0000);
static_assert(offsetof(FXDGAgreement, URL) == 0x0010);
static_assert(offsetof(FAgreementData, agreementVersion) == 0x0000);
static_assert(offsetof(FAgreementData, agreementRegion) == 0x0010);
static_assert(offsetof(FAgreementData, titleFirst) == 0x0020);
static_assert(offsetof(FAgreementData, summaryFirst) == 0x0030);
static_assert(offsetof(FAgreementData, promptFirst) == 0x0040);
static_assert(offsetof(FAgreementData, Title) == 0x0050);
static_assert(offsetof(FAgreementData, summary) == 0x0060);
static_assert(offsetof(FAgreementData, prompt) == 0x0070);
static_assert(offsetof(FAgreementData, agree) == 0x0080);
static_assert(offsetof(FAgreementData, disagree) == 0x0090);
static_assert(offsetof(FAgreementData, agreeAll) == 0x00A0);
static_assert(offsetof(FAgreementData, options) == 0x00B0);
static_assert(offsetof(FAgreementData, Agreements) == 0x00C0);
static_assert(offsetof(FXdWebActionResult, Action) == 0x0000);
static_assert(offsetof(FXUResponseModel, Msg) == 0x0008);
static_assert(offsetof(FXUResponseModel, Detail) == 0x0018);
static_assert(offsetof(FXDGError, Msg) == 0x0008);
static_assert(offsetof(FXDGError, Detail) == 0x0018);
static_assert(offsetof(FXDGRegionInfo, country_code) == 0x0000);
static_assert(offsetof(FXDGRegionInfo, TimeZone) == 0x0010);
static_assert(offsetof(FXDGRegionInfo, City) == 0x0020);
static_assert(offsetof(FXDGRegionInfo, LocationInfoType) == 0x0030);
static_assert(offsetof(FXDGInitParams, PackageType) == 0x0000);
static_assert(offsetof(FXDGUser, UserId) == 0x0000);
static_assert(offsetof(FXDGUser, username) == 0x0010);
static_assert(offsetof(FXDGUser, NickName) == 0x0020);
static_assert(offsetof(FXDGUser, avatar) == 0x0030);
static_assert(offsetof(FXDGUser, LoginTypeEntry) == 0x0040);
static_assert(offsetof(FXDGUser, LoginType) == 0x0050);
static_assert(offsetof(FXDGUser, token) == 0x0058);
static_assert(offsetof(FXDGUser, loginList) == 0x00B0);
static_assert(offsetof(FXULanguageModel, tds_account_safe_info) == 0x0000);
static_assert(offsetof(FXULanguageModel, tds_account_info) == 0x0010);
static_assert(offsetof(FXULanguageModel, tds_account_bind_info) == 0x0020);
static_assert(offsetof(FXULanguageModel, tds_unbind) == 0x0030);
static_assert(offsetof(FXULanguageModel, tds_bind) == 0x0040);
static_assert(offsetof(FXULanguageModel, tds_guest) == 0x0050);
static_assert(offsetof(FXULanguageModel, tds_delete_account_title) == 0x0060);
static_assert(offsetof(FXULanguageModel, tds_unbind_account_title) == 0x0070);
static_assert(offsetof(FXULanguageModel, tds_delete_account_sure_title) == 0x0080);
static_assert(offsetof(FXULanguageModel, tds_delete_account) == 0x0090);
static_assert(offsetof(FXULanguageModel, tds_unbind_account) == 0x00A0);
static_assert(offsetof(FXULanguageModel, tds_unbind_account_button) == 0x00B0);
static_assert(offsetof(FXULanguageModel, tds_delete_account_sure) == 0x00C0);
static_assert(offsetof(FXULanguageModel, tds_delete_content) == 0x00D0);
static_assert(offsetof(FXULanguageModel, tds_unbind_content) == 0x00E0);
static_assert(offsetof(FXULanguageModel, tds_unbind_delete_content) == 0x00F0);
static_assert(offsetof(FXULanguageModel, tds_unbind_confirm_Content) == 0x0100);
static_assert(offsetof(FXULanguageModel, tds_delete_confirm_content) == 0x0110);
static_assert(offsetof(FXULanguageModel, tds_input_error) == 0x0120);
static_assert(offsetof(FXULanguageModel, tds_cancel) == 0x0130);
static_assert(offsetof(FXULanguageModel, tds_input_error_re) == 0x0140);
static_assert(offsetof(FXULanguageModel, tds_confirm) == 0x0150);
static_assert(offsetof(FXULanguageModel, tds_delete) == 0x0160);
static_assert(offsetof(FXULanguageModel, tds_loading) == 0x0170);
static_assert(offsetof(FXULanguageModel, tds_current_account_prefix) == 0x0180);
static_assert(offsetof(FXULanguageModel, tds_account_format) == 0x0190);
static_assert(offsetof(FXULanguageModel, tds_current_id) == 0x01A0);
static_assert(offsetof(FXULanguageModel, tds_copy_success) == 0x01B0);
static_assert(offsetof(FXULanguageModel, tds_cancel_bind) == 0x01C0);
static_assert(offsetof(FXULanguageModel, tds_unbind_error) == 0x01D0);
static_assert(offsetof(FXULanguageModel, tds_bind_error_reason_format) == 0x01E0);
static_assert(offsetof(FXULanguageModel, tds_bind_error) == 0x01F0);
static_assert(offsetof(FXULanguageModel, tds_bind_success) == 0x0200);
static_assert(offsetof(FXULanguageModel, tds_delete_account_tip) == 0x0210);
static_assert(offsetof(FXULanguageModel, tds_no_account_detected) == 0x0220);
static_assert(offsetof(FXULanguageModel, tds_unbind_success) == 0x0230);
static_assert(offsetof(FXULanguageModel, tds_unbind_success_return_sign) == 0x0240);
static_assert(offsetof(FXULanguageModel, tds_unbind_delete_success_return_sign) == 0x0250);
static_assert(offsetof(FXULanguageModel, tds_unbind_guest_return) == 0x0260);
static_assert(offsetof(FXULanguageModel, tds_loading_error_retry) == 0x0270);
static_assert(offsetof(FXULanguageModel, tds_network_error_retry) == 0x0280);
static_assert(offsetof(FXULanguageModel, tds_login_success) == 0x0290);
static_assert(offsetof(FXULanguageModel, tds_login_cancel) == 0x02A0);
static_assert(offsetof(FXULanguageModel, tds_login_failed) == 0x02B0);
static_assert(offsetof(FXULanguageModel, tds_login_button_title) == 0x02C0);
static_assert(offsetof(FXULanguageModel, tds_confirm_logout_title) == 0x02D0);
static_assert(offsetof(FXULanguageModel, tds_confirm_logout_content) == 0x02E0);
static_assert(offsetof(FXULanguageModel, tds_bound) == 0x02F0);
static_assert(offsetof(FXULanguageModel, tds_user_center_logout) == 0x0300);
static_assert(offsetof(FXULanguageModel, tds_logout) == 0x0310);
static_assert(offsetof(FXULanguageModel, tds_code_unbind_subtitle) == 0x0320);
static_assert(offsetof(FXULanguageModel, tds_code_box_hint) == 0x0330);
static_assert(offsetof(FXULanguageModel, tds_code_box_send_code) == 0x0340);
static_assert(offsetof(FXULanguageModel, tds_user_agreement) == 0x0350);
static_assert(offsetof(FXULanguageModel, tds_privacy_policy) == 0x0360);
static_assert(offsetof(FXULanguageModel, tds_code_send_success) == 0x0370);
static_assert(offsetof(FXULanguageModel, tds_code_bind_footer_format) == 0x0380);
static_assert(offsetof(FXULanguageModel, tds_code_bind_footer_support) == 0x0390);
static_assert(offsetof(FXULanguageModel, tds_code_unbind_title) == 0x03A0);
static_assert(offsetof(FXULanguageModel, tds_code_unbind_footer) == 0x03B0);
static_assert(offsetof(FXULanguageModel, tds_sms_login_title) == 0x03C0);
static_assert(offsetof(FXULanguageModel, tds_phone_box_hint) == 0x03D0);
static_assert(offsetof(FXULanguageModel, tds_sms_bind_title) == 0x03E0);
static_assert(offsetof(FXULanguageModel, tds_email_login_title) == 0x03F0);
static_assert(offsetof(FXULanguageModel, tds_email_box_hint) == 0x0400);
static_assert(offsetof(FXULanguageModel, tds_email_bind_title) == 0x0410);
static_assert(offsetof(FXULanguageModel, tds_email_empty) == 0x0420);
static_assert(offsetof(FXULanguageModel, tds_phone_number_empty) == 0x0430);
static_assert(offsetof(FXULanguageModel, tds_code_empty) == 0x0440);
static_assert(offsetof(FXULanguageModel, tds_code_login_button) == 0x0450);
static_assert(offsetof(FXULanguageModel, tds_code_unbind_button_text) == 0x0460);
static_assert(offsetof(FXULanguageModel, tds_code_box_retry) == 0x0470);
static_assert(offsetof(FXULanguageModel, tds_phone_box_search_hint) == 0x0480);
static_assert(offsetof(FXULanguageModel, tds_phone) == 0x0490);
static_assert(offsetof(FXULanguageModel, tds_email) == 0x04A0);
static_assert(offsetof(FXULanguageModel, tds_authorization_cancel) == 0x04B0);
static_assert(offsetof(FXULanguageModel, tds_authorization_failed) == 0x04C0);
static_assert(offsetof(FXULanguageModel, tds_network_error_login) == 0x04D0);
static_assert(offsetof(FXULanguageModel, tds_network_error_safe_retry) == 0x04E0);
static_assert(offsetof(FXULanguageModel, tds_refund_custom_service_tip) == 0x04F0);
static_assert(offsetof(FXULanguageModel, tds_refund_contact_custom_service) == 0x0500);
static_assert(offsetof(FXULanguageModel, tds_refund_custom_service_tip_tail) == 0x0510);
static_assert(offsetof(FXULanguageModel, tds_refund_success) == 0x0520);
static_assert(offsetof(FXULanguageModel, tds_refund_fail) == 0x0530);
static_assert(offsetof(FXULanguageModel, tds_refund_cancel) == 0x0540);
static_assert(offsetof(FXULanguageModel, tds_refund_action) == 0x0550);
static_assert(offsetof(FXULanguageModel, tds_refund_login_restrict_title) == 0x0560);
static_assert(offsetof(FXULanguageModel, tds_refund_login_restrict_sub_title) == 0x0570);
static_assert(offsetof(FXULanguageModel, tds_refund_ios_pay_tip) == 0x0580);
static_assert(offsetof(FXULanguageModel, tds_pay_success) == 0x0590);
static_assert(offsetof(FXULanguageModel, tds_pay_fail) == 0x05A0);
static_assert(offsetof(FXULanguageModel, tds_pay_cancel) == 0x05B0);
static_assert(offsetof(FXULanguageModel, tds_button_confirm) == 0x05C0);
static_assert(offsetof(FXULanguageModel, tds_promotion_exchange_title) == 0x05D0);
static_assert(offsetof(FXULanguageModel, tds_promotion_exchange_desc) == 0x05E0);
static_assert(offsetof(FXULanguageModel, tds_refund_android_pay_tip) == 0x05F0);
static_assert(offsetof(FXULanguageModel, tds_refund_all_pay_tip) == 0x0600);
static_assert(offsetof(FXULanguageModel, tds_pay_net_fail) == 0x0610);
static_assert(offsetof(FXULanguageModel, tds_refund_net_fail) == 0x0620);
static_assert(offsetof(FXULanguageModel, tds_purchase_processing) == 0x0630);
static_assert(offsetof(FXULanguageModel, tds_terms_agreement) == 0x0640);
static_assert(offsetof(FXULanguageModel, tds_service_terms_agreement) == 0x0650);
static_assert(offsetof(FXULanguageModel, tds_push_agreement) == 0x0660);
static_assert(offsetof(FXULanguageModel, tds_confirm_agreement) == 0x0670);
static_assert(offsetof(FXULanguageModel, tds_agreement_option_not_agree_alert_content) == 0x0680);
static_assert(offsetof(FXULanguageModel, tds_agreement_option_not_agree_alert_confirm) == 0x0690);
static_assert(offsetof(FXULanguageModel, tds_agreement_option_not_agree_alert_cancel) == 0x06A0);
static_assert(offsetof(FXULanguageModel, tds_is_adult_agreement) == 0x06B0);
static_assert(offsetof(FXULanguageModel, tds_california_agreement) == 0x06C0);
static_assert(offsetof(FXULanguageModel, tds_cancel_claim) == 0x06D0);
static_assert(offsetof(FXULanguageModel, tds_custom_service) == 0x06E0);
static_assert(offsetof(FXULanguageModel, tds_product_not_exists) == 0x06F0);
static_assert(offsetof(FXULanguageModel, tds_ios_restricted_payment_title) == 0x0700);
static_assert(offsetof(FXULanguageModel, tds_ios_restricted_payment_description) == 0x0710);
static_assert(offsetof(FXULanguageModel, xd_agreement_agree) == 0x0720);
static_assert(offsetof(FXULanguageModel, xd_agreement_disagree) == 0x0730);
static_assert(offsetof(FXULanguageModel, xd_agreement_disagree_confirm_content) == 0x0740);
static_assert(offsetof(FXULanguageModel, xd_agreement_disagree_confirm_exit) == 0x0750);
static_assert(offsetof(FXULanguageModel, xd_agreement_disagree_confirm_back) == 0x0760);
static_assert(offsetof(FXULanguageModel, xd_agreement_age_tips) == 0x0770);
static_assert(offsetof(FXULanguageModel, xd_agreement_load_failed) == 0x0780);
static_assert(offsetof(FXULanguageModel, tds_retry) == 0x0790);
static_assert(offsetof(FXULanguageModel, tds_net_error) == 0x07A0);
static_assert(offsetof(FXULanguageModel, tds_load_error) == 0x07B0);
static_assert(offsetof(FXULanguageModel, tds_login_dialog_email_title) == 0x07C0);
static_assert(offsetof(FXULanguageModel, tds_login_dialog_email_title0) == 0x07D0);
static_assert(offsetof(FXULanguageModel, tds_login_dialog_email_content) == 0x07E0);
static_assert(offsetof(FXULanguageModel, tds_login_dialog_email_content1) == 0x07F0);
static_assert(offsetof(FXULanguageModel, tds_login_dialog_email_content2) == 0x0800);
static_assert(offsetof(FXULanguageModel, tds_login_dialog_email_right_text) == 0x0810);
static_assert(offsetof(FXULanguageModel, tds_service_required) == 0x0820);
static_assert(offsetof(FXULanguageModel, tds_service_optional) == 0x0830);
static_assert(offsetof(FXULanguageModel, tds_service_agree) == 0x0840);
static_assert(offsetof(FXULanguageModel, tds_service_user_info) == 0x0850);
static_assert(offsetof(FSteamQueryResponse, productSkuName) == 0x0000);
static_assert(offsetof(FSteamQueryResponse, productSkuCode) == 0x0010);
static_assert(offsetof(FSteamQueryResponse, desc) == 0x0020);
static_assert(offsetof(FSteamQueryResponse, channelSkuCode) == 0x0030);
static_assert(offsetof(FSteamQueryResponse, currency) == 0x0040);
static_assert(offsetof(FSteamQueryResponse, Region) == 0x0050);
static_assert(offsetof(FSteamQueryResponse, displayCostPrice) == 0x0070);
static_assert(offsetof(FSteamQueryParam, ClientId) == 0x0000);
static_assert(offsetof(FSteamQueryParam, Region) == 0x0010);
static_assert(offsetof(FSteamQueryParam, skus) == 0x0020);
static_assert(offsetof(FSteamQueryParam, steamId) == 0x0030);
static_assert(offsetof(FSteamPayNotifyParam, outTradeNo) == 0x0000);
static_assert(offsetof(FSteamPayNotifyParam, bankTradeNo) == 0x0010);
static_assert(offsetof(FSteamPayNotifyParam, tradeNo) == 0x0020);
static_assert(offsetof(FSteamPayNotifyParam, rawCallback) == 0x0038);
static_assert(offsetof(FSteamPayNotifyParam, ProductId) == 0x0050);
static_assert(offsetof(FSteamPayNotifyParam, appRoleId) == 0x0068);
static_assert(offsetof(FSteamPayNotifyParam, appServerId) == 0x0078);
static_assert(offsetof(FSteamPayNotifyParam, remark) == 0x0088);
static_assert(offsetof(FSteamPayNotifyParam, Price) == 0x0098);
static_assert(offsetof(FSteamPayNotifyParam, currency) == 0x00A8);
static_assert(offsetof(FSteamPayResponse, tradeNo) == 0x0000);
static_assert(offsetof(FSteamPayResponse, outTradeNo) == 0x0010);
static_assert(offsetof(FSteamPayResponse, currency) == 0x0020);
static_assert(offsetof(FSteamPayResponse, requestTime) == 0x0038);
static_assert(offsetof(FSteamPayResponse, payUrl) == 0x0048);
static_assert(offsetof(FSteamPayParam, ProductId) == 0x0000);
static_assert(offsetof(FSteamPayParam, appRoleId) == 0x0010);
static_assert(offsetof(FSteamPayParam, appServerId) == 0x0020);
static_assert(offsetof(FSteamPayParam, outTradeNo) == 0x0038);
static_assert(offsetof(FSteamPayParam, remark) == 0x0050);
static_assert(offsetof(FSteamPayParam, currency) == 0x0070);
static_assert(offsetof(FSteamPayParam, clientStoreRegion) == 0x0080);
static_assert(offsetof(FSteamPayParam, eventSessionId) == 0x0090);
static_assert(offsetof(FSteamPayParam, steamId) == 0x00A0);
static_assert(offsetof(FSteamPayParam, steamLanguage) == 0x00B0);
static_assert(offsetof(FXUPayCheckModel, tradeNo) == 0x0000);
static_assert(offsetof(FXUPayCheckModel, outTradeNo) == 0x0010);
static_assert(offsetof(FXUPayCheckModel, ProductId) == 0x0020);
static_assert(offsetof(FXUPayCheckModel, currency) == 0x0030);
static_assert(offsetof(FXUPayCheckModel, channelType) == 0x0040);
static_assert(offsetof(FXUPayCheckModel, channelId) == 0x0050);
static_assert(offsetof(FXUPayCheckResponseModel, list) == 0x0000);
static_assert(offsetof(FXUServerConfigAgreement, agreementRegion) == 0x0000);
static_assert(offsetof(FXUServerConfigAgreement, agreementVersion) == 0x0010);
static_assert(offsetof(FXUServerConfigAgreement, agreementUrl) == 0x0020);
static_assert(offsetof(FXUServerConfigBindEntries, entryName) == 0x0008);
static_assert(offsetof(FXUServerConfigTapSdk, ClientId) == 0x0000);
static_assert(offsetof(FXUServerConfigTapSdk, tapDBChannel) == 0x0010);
static_assert(offsetof(FXUServerConfigTapSdk, ClientToken) == 0x0020);
static_assert(offsetof(FXUServerConfigTapSdk, ServerURL) == 0x0030);
static_assert(offsetof(FXUServerConfigConfigs, webPayUrlForPC) == 0x0000);
static_assert(offsetof(FXUServerConfigConfigs, agreement) == 0x0010);
static_assert(offsetof(FXUServerConfigConfigs, serviceAgreementUrl) == 0x0048);
static_assert(offsetof(FXUServerConfigConfigs, serviceAgreementTxt) == 0x0058);
static_assert(offsetof(FXUServerConfigConfigs, gameLogos) == 0x0068);
static_assert(offsetof(FXUServerConfigConfigs, googlePlayGamesAndroidClientId) == 0x0080);
static_assert(offsetof(FXUServerConfigConfigs, serviceTermsUrl) == 0x0090);
static_assert(offsetof(FXUServerConfigConfigs, serviceTermsTxt) == 0x00A0);
static_assert(offsetof(FXUServerConfigConfigs, reportUrl) == 0x00B0);
static_assert(offsetof(FXUServerConfigConfigs, bindEntriesConfig) == 0x00C0);
static_assert(offsetof(FXUServerConfigConfigs, androidLoginEntries) == 0x00D0);
static_assert(offsetof(FXUServerConfigConfigs, iosLoginEntries) == 0x00E8);
static_assert(offsetof(FXUServerConfigConfigs, californiaPrivacyUrl) == 0x00F8);
static_assert(offsetof(FXUServerConfigConfigs, gameName) == 0x0108);
static_assert(offsetof(FXUServerConfigConfigs, tapSdkConfig) == 0x0118);
static_assert(offsetof(FXUServerConfigConfigs, tapLoginPermissions) == 0x0160);
static_assert(offsetof(FXUServerConfigConfigs, bindEntries) == 0x0170);
static_assert(offsetof(FXUServerConfigConfigs, AppId) == 0x0180);
static_assert(offsetof(FXUServerConfigConfigs, facebookClientId) == 0x0190);
static_assert(offsetof(FXUServerConfigConfigs, fbLoginPermissions) == 0x01A0);
static_assert(offsetof(FXUServerConfigConfigs, Region) == 0x01B0);
static_assert(offsetof(FXUServerConfigConfigs, logoutUrl) == 0x01C0);
static_assert(offsetof(FXUServerConfigConfigs, webWhiteList) == 0x01D8);
static_assert(offsetof(FXUServerConfig, Version) == 0x0000);
static_assert(offsetof(FXUServerConfig, groupId) == 0x0010);
static_assert(offsetof(FXUServerConfig, configs) == 0x0020);
static_assert(offsetof(FXUSyncTokenModel, sessionToken) == 0x0000);

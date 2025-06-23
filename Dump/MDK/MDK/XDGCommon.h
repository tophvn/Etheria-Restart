
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: JsonUtilities
/// dependency: SlateCore
/// dependency: TapCommon
/// dependency: UMG

/// Class /Script/XDGCommon.IWebFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UIWebFunction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/XDGCommon.AgreementPageStyle
/// Size: 0x1A28 (0x000008 - 0x001A30)
class FAgreementPageStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6704;

public:
	SMember(FMargin)                                   BoxPadding                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FMargin)                                   BackgroundBoxMargin                                         OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FMargin)                                   ButtonPadding                                               OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FTextBlockStyle)                           TitleStyle                                                  OFFSET(getStruct<T>, {0x40, 864, 0, 0})
	DMember(float)                                     TitleHeight                                                 OFFSET(get<float>, {0x3A0, 4, 0, 0})
	SMember(FTextBlockStyle)                           SummaryStyle                                                OFFSET(getStruct<T>, {0x3B0, 864, 0, 0})
	SMember(FScrollBoxStyle)                           SummaryScrollBoxStyle                                       OFFSET(getStruct<T>, {0x710, 848, 0, 0})
	SMember(FTextBlockStyle)                           PromptStyle                                                 OFFSET(getStruct<T>, {0xA60, 864, 0, 0})
	SMember(FCheckBoxStyle)                            CheckBoxStyle                                               OFFSET(getStruct<T>, {0xDC0, 2064, 0, 0})
	SMember(FTextBlockStyle)                           CheckBoxTextStyle                                           OFFSET(getStruct<T>, {0x15D0, 864, 0, 0})
	DMember(float)                                     ButtonBoxHeight                                             OFFSET(get<float>, {0x1930, 4, 0, 0})
	SMember(FMargin)                                   TextPadding                                                 OFFSET(getStruct<T>, {0x1934, 16, 0, 0})
	SMember(FMargin)                                   CheckBoxPadding                                             OFFSET(getStruct<T>, {0x1944, 16, 0, 0})
	SMember(FSlateBrush)                               AgreeButtonBrush                                            OFFSET(getStruct<T>, {0x1960, 208, 0, 0})
};

/// Class /Script/XDGCommon.AgreementPageWidgetStyle
/// Size: 0x1A30 (0x000030 - 0x001A60)
class UAgreementPageWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6752;

public:
	SMember(FAgreementPageStyle)                       WidgetStyle                                                 OFFSET(getStruct<T>, {0x30, 6704, 0, 0})
};

/// Class /Script/XDGCommon.IniGenerateCommandlet
/// Size: 0x0000 (0x000080 - 0x000080)
class UIniGenerateCommandlet : public UCommandlet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/XDGCommon.XdWebBridge
/// Size: 0x0010 (0x000028 - 0x000038)
class UXdWebBridge : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/XDGCommon.XdWebBridge.post
	// void post(FString Result);                                                                                               // [0x1012950] Final|Native|Public|Const 
};

/// Class /Script/XDGCommon.WebCallback
/// Size: 0x0010 (0x000028 - 0x000038)
class UWebCallback : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/XDGCommon.WebCallback.notifyjscallback
	// void notifyjscallback(FString Result);                                                                                   // [0x10128b0] Final|Native|Public  
};

/// Class /Script/XDGCommon.WebFunctionManager
/// Size: 0x0050 (0x000028 - 0x000078)
class UWebFunctionManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FString, class UIWebFunction*>)       WebFunctions                                                OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Struct /Script/XDGCommon.WebBrowserStyle
/// Size: 0x0038 (0x000008 - 0x000040)
class FWebBrowserStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMargin)                                   BackgroundBoxMargin                                         OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FMargin)                                   ContentBoxPadding                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FMargin)                                   CloseButtonPadding                                          OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FVector2D)                                 CloseButtonSize                                             OFFSET(getStruct<T>, {0x38, 8, 0, 0})
};

/// Class /Script/XDGCommon.WebBrowserWidgetStyle
/// Size: 0x0040 (0x000030 - 0x000070)
class UWebBrowserWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FWebBrowserStyle)                          WidgetStyle                                                 OFFSET(getStruct<T>, {0x30, 64, 0, 0})
};

/// Class /Script/XDGCommon.CloseWebFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UCloseWebFunction : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/XDGCommon.GetStorageWebFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UGetStorageWebFunction : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/XDGCommon.ToastWebFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UToastWebFunction : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/XDGCommon.PutStorageWebFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UPutStorageWebFunction : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/XDGCommon.HttpRequestWebFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UHttpRequestWebFunction : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/XDGCommon.GetDeviceInfoWebFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UGetDeviceInfoWebFunction : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/XDGCommon.GameMessageWebFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameMessageWebFunction : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/XDGCommon.LogWebFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class ULogWebFunction : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/XDGCommon.LoadingWebFunction
/// Size: 0x0008 (0x000028 - 0x000030)
class ULoadingWebFunction : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/XDGCommon.GetSafeAreaWebFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UGetSafeAreaWebFunction : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/XDGCommon.BackgroundColorWebFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UBackgroundColorWebFunction : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/XDGCommon.NavigationBarWebFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavigationBarWebFunction : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/XDGCommon.CloseButtonWebFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UCloseButtonWebFunction : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/XDGCommon.TrackWebFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UTrackWebFunction : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/XDGCommon.OpenPageWebFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UOpenPageWebFunction : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/XDGCommon.ClipboardWebFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UClipboardWebFunction : public UIWebFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/XDGCommon.XDButton
/// Size: 0x0008 (0x000588 - 0x000590)
class UXDButton : public UButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
};

/// Struct /Script/XDGCommon.AdjustEvent_XD
/// Size: 0x0020 (0x000000 - 0x000020)
class FAdjustEvent_XD : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   token                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Class /Script/XDGCommon.XDConfig
/// Size: 0x02F8 (0x000038 - 0x000330)
class UXDConfig : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FString)                                   ClientId                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   RegionType                                                  OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   AppId                                                       OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   gameName                                                    OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   logoutUrl                                                   OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   reportUrl                                                   OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FString)                                   WebPayUrl                                                   OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FString)                                   webPayUrlForPC                                              OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FString>)                           Logos                                                       OFFSET(get<T>, {0xB8, 16, 0, 0})
	DMember(bool)                                      idfaEnabled                                                 OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(bool)                                      bSteamSDKLoginEnable                                        OFFSET(get<bool>, {0xC9, 1, 0, 0})
	SMember(FString)                                   TapSDK_ClientID                                             OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FString)                                   TapSDK_ClientToken                                          OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FString)                                   TapSDK_ServerUrl                                            OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	CMember(TArray<FString>)                           TapSDK_Permissions                                          OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(bool)                                      TapDB_Enable                                                OFFSET(get<bool>, {0x110, 1, 0, 0})
	SMember(FString)                                   TapDB_Channel                                               OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FString)                                   TapDB_GameVersion                                           OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FString)                                   Facebook_AppID                                              OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FString)                                   Facebook_ClientToken                                        OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	CMember(TArray<FString>)                           Facebook_Permissions                                        OFFSET(get<T>, {0x158, 16, 0, 0})
	SMember(FString)                                   Line_ChannelID                                              OFFSET(getStruct<T>, {0x168, 16, 0, 0})
	SMember(FString)                                   Twitter_ConsumerKey                                         OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	SMember(FString)                                   Twitter_ConsumerSecret                                      OFFSET(getStruct<T>, {0x188, 16, 0, 0})
	SMember(FString)                                   Apple_ServiceID                                             OFFSET(getStruct<T>, {0x198, 16, 0, 0})
	SMember(FString)                                   Google_ClientID                                             OFFSET(getStruct<T>, {0x1A8, 16, 0, 0})
	SMember(FString)                                   Google_ClientIDForAndroid                                   OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})
	SMember(FString)                                   Google_ClientIDForPC                                        OFFSET(getStruct<T>, {0x1C8, 16, 0, 0})
	DMember(bool)                                      Firebase_EnableTrack                                        OFFSET(get<bool>, {0x1D8, 1, 0, 0})
	SMember(FString)                                   Adjust_AppToken                                             OFFSET(getStruct<T>, {0x1E0, 16, 0, 0})
	CMember(TArray<FAdjustEvent_XD>)                   Adjust_Events                                               OFFSET(get<T>, {0x1F0, 16, 0, 0})
	SMember(FString)                                   Appsflyer_AppID                                             OFFSET(getStruct<T>, {0x200, 16, 0, 0})
	SMember(FString)                                   Appsflyer_DevKey_iOS                                        OFFSET(getStruct<T>, {0x210, 16, 0, 0})
	SMember(FString)                                   Appsflyer_DevKey_Android                                    OFFSET(getStruct<T>, {0x220, 16, 0, 0})
	SMember(FString)                                   Aliyun_PhoneAuthTokenForios                                 OFFSET(getStruct<T>, {0x230, 16, 0, 0})
	SMember(FString)                                   Aliyun_PhoneAuthTokenForAndroid                             OFFSET(getStruct<T>, {0x240, 16, 0, 0})
	SMember(FString)                                   AD_TT_AppID                                                 OFFSET(getStruct<T>, {0x250, 16, 0, 0})
	SMember(FString)                                   AD_TT_AppName                                               OFFSET(getStruct<T>, {0x260, 16, 0, 0})
	SMember(FString)                                   AD_GDT_UserActionSetID                                      OFFSET(getStruct<T>, {0x270, 16, 0, 0})
	SMember(FString)                                   AD_GDT_AppSecretKey                                         OFFSET(getStruct<T>, {0x280, 16, 0, 0})
	SMember(FString)                                   Wechat_AppID                                                OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	SMember(FString)                                   Wechat_UniversalLink                                        OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	SMember(FString)                                   QQ_AppID                                                    OFFSET(getStruct<T>, {0x2B0, 16, 0, 0})
	SMember(FString)                                   QQ_UniversalLink                                            OFFSET(getStruct<T>, {0x2C0, 16, 0, 0})
	SMember(FString)                                   Weibo_AppID                                                 OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	SMember(FString)                                   Weibo_UniversalLink                                         OFFSET(getStruct<T>, {0x2E0, 16, 0, 0})
	SMember(FString)                                   XHS_AppIdIos                                                OFFSET(getStruct<T>, {0x2F0, 16, 0, 0})
	SMember(FString)                                   XHS_AppIdAndroid                                            OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	SMember(FString)                                   XHS_UniversalLink                                           OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FString)                                   DouYin_AppId                                                OFFSET(getStruct<T>, {0x320, 16, 0, 0})
};

/// Class /Script/XDGCommon.XDConfigConverterCommandlet
/// Size: 0x0000 (0x000080 - 0x000080)
class UXDConfigConverterCommandlet : public UCommandlet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/XDGCommon.XDEditableText
/// Size: 0x0050 (0x000280 - 0x0002D0)
class UXDEditableText : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FMulticastInlineDelegate)                  OnTextChanged                                               OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	CMember(class UEditableText*)                      EditableText                                                OFFSET(get<T>, {0x2A0, 8, 0, 0})
	DMember(bool)                                      bNumberOnly                                                 OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(int32_t)                                   MaxLen                                                      OFFSET(get<int32_t>, {0x2AC, 4, 0, 0})
	SMember(FText)                                     LastText                                                    OFFSET(getStruct<T>, {0x2B0, 24, 0, 0})
	DMember(bool)                                      bLastFocus                                                  OFFSET(get<bool>, {0x2C8, 1, 0, 0})


	/// Functions
	// Function /Script/XDGCommon.XDEditableText.HandleOnTextChanged
	// void HandleOnTextChanged(FText& newText);                                                                                // [0x10127e0] Final|Native|Protected|HasOutParms 
};

/// Struct /Script/XDGCommon.AdjustEvent
/// Size: 0x0020 (0x000000 - 0x000020)
class FAdjustEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   event_name                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   token                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Class /Script/XDGCommon.XDGConfig
/// Size: 0x0388 (0x000038 - 0x0003C0)
class UXDGConfig : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FString)                                   client_id                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(EXDGRegionType)                            region_type                                                 OFFSET(get<T>, {0x48, 1, 0, 0})
	SMember(FString)                                   app_id                                                      OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   game_name                                                   OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   logout_url                                                  OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   report_url                                                  OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   web_pay_url                                                 OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FString)                                   webpay_url_for_pc                                           OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(bool)                                      idfa_enabled                                                OFFSET(get<bool>, {0xB0, 1, 0, 0})
	SMember(FString)                                   tapsdk__client_id                                           OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FString)                                   tapsdk__client_token                                        OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FString)                                   tapsdk__server_url                                          OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FString)                                   tapsdk__client_public_key                                   OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	CMember(TArray<FString>)                           tapsdk__permissions                                         OFFSET(get<T>, {0xF8, 16, 0, 0})
	DMember(bool)                                      tapsdk__db_config__enable                                   OFFSET(get<bool>, {0x108, 1, 0, 0})
	SMember(FString)                                   tapsdk__db_config__channel                                  OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FString)                                   tapsdk__db_config__game_version                             OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FString)                                   facebook__app_id                                            OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FString)                                   facebook__client_token                                      OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	CMember(TArray<FString>)                           facebook__permissions                                       OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FString)                                   line__channel_id                                            OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	SMember(FString)                                   twitter__consumer_key                                       OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	SMember(FString)                                   twitter__consumer_secret                                    OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	SMember(FString)                                   apple__service_id                                           OFFSET(getStruct<T>, {0x190, 16, 0, 0})
	SMember(FString)                                   google__CLIENT_ID                                           OFFSET(getStruct<T>, {0x1A0, 16, 0, 0})
	SMember(FString)                                   google__CLIENT_ID_FOR_ANDROID                               OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	SMember(FString)                                   google__CLIENT_ID_FOR_PC                                    OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
	DMember(bool)                                      firebase__enableTrack                                       OFFSET(get<bool>, {0x1D0, 1, 0, 0})
	SMember(FString)                                   adjust__app_token                                           OFFSET(getStruct<T>, {0x1D8, 16, 0, 0})
	CMember(TArray<FAdjustEvent>)                      adjust__events                                              OFFSET(get<T>, {0x1E8, 16, 0, 0})
	SMember(FString)                                   appsflyer__app_id                                           OFFSET(getStruct<T>, {0x1F8, 16, 0, 0})
	SMember(FString)                                   appsflyer__dev_key_ios                                      OFFSET(getStruct<T>, {0x208, 16, 0, 0})
	SMember(FString)                                   appsflyer__dev_key_android                                  OFFSET(getStruct<T>, {0x218, 16, 0, 0})
	SMember(FString)                                   aliyun__phone_auth_token_ios                                OFFSET(getStruct<T>, {0x228, 16, 0, 0})
	SMember(FString)                                   aliyun__phone_auth_token_android                            OFFSET(getStruct<T>, {0x238, 16, 0, 0})
	SMember(FString)                                   aliyun__push_key_ios                                        OFFSET(getStruct<T>, {0x248, 16, 0, 0})
	SMember(FString)                                   aliyun__push_secret_ios                                     OFFSET(getStruct<T>, {0x258, 16, 0, 0})
	SMember(FString)                                   aliyun__push_key_android                                    OFFSET(getStruct<T>, {0x268, 16, 0, 0})
	SMember(FString)                                   aliyun__push_secret_android                                 OFFSET(getStruct<T>, {0x278, 16, 0, 0})
	SMember(FString)                                   ad_config__tt_config__app_id                                OFFSET(getStruct<T>, {0x288, 16, 0, 0})
	SMember(FString)                                   ad_config__tt_config__app_name                              OFFSET(getStruct<T>, {0x298, 16, 0, 0})
	DMember(bool)                                      ad_config__tt_config__ios_enable                            OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	SMember(FString)                                   ad_config__gdt_config__user_action_set_id                   OFFSET(getStruct<T>, {0x2B0, 16, 0, 0})
	SMember(FString)                                   ad_config__gdt_config__app_secret_key                       OFFSET(getStruct<T>, {0x2C0, 16, 0, 0})
	SMember(FString)                                   wechat__app_id                                              OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	SMember(FString)                                   wechat__universal_link                                      OFFSET(getStruct<T>, {0x2E0, 16, 0, 0})
	SMember(FString)                                   qq__app_id                                                  OFFSET(getStruct<T>, {0x2F0, 16, 0, 0})
	SMember(FString)                                   qq__universal_link                                          OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	SMember(FString)                                   weibo__app_id                                               OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FString)                                   weibo__universal_link                                       OFFSET(getStruct<T>, {0x320, 16, 0, 0})
	SMember(FString)                                   xhs__app_id_ios                                             OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	SMember(FString)                                   xhs__app_id_android                                         OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	SMember(FString)                                   xhs__universal_link                                         OFFSET(getStruct<T>, {0x350, 16, 0, 0})
	SMember(FString)                                   douyin__app_id                                              OFFSET(getStruct<T>, {0x360, 16, 0, 0})
	SMember(FString)                                   push_config__channel_name_android                           OFFSET(getStruct<T>, {0x370, 16, 0, 0})
};

/// Class /Script/XDGCommon.XUConfirmWidget
/// Size: 0x0088 (0x000280 - 0x000308)
class UXUConfirmWidget : public UTapWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(class UTapButton*)                         WhiteButton                                                 OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UTapButton*)                         BlueButton                                                  OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UTapButton*)                         CloseButton                                                 OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UNativeWidgetHost*)                  ControllerTip                                               OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    ButtonSwitcher                                              OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UTapButton*)                         BlueButton1                                                 OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UTextBlock*)                         BlueButtonText                                              OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UTextBlock*)                         Title                                                       OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class URichTextBlock*)                     Content                                                     OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UTextBlock*)                         WhiteButtonText                                             OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UTextBlock*)                         BlueButtonText1                                             OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/XDGCommon.XUConfirmWidget.OnWhiteButtonClickedEvent
	// void OnWhiteButtonClickedEvent();                                                                                        // [0x10161c0] Final|Native|Protected 
	// Function /Script/XDGCommon.XUConfirmWidget.OnCloseButtonClickedEvent
	// void OnCloseButtonClickedEvent();                                                                                        // [0x1016180] Final|Native|Protected 
	// Function /Script/XDGCommon.XUConfirmWidget.OnBlueButtonClickedEvent
	// void OnBlueButtonClickedEvent();                                                                                         // [0x1016160] Final|Native|Protected 
};

/// Class /Script/XDGCommon.XUPrivacyDisagreeWidget
/// Size: 0x0030 (0x000280 - 0x0002B0)
class UXUPrivacyDisagreeWidget : public UTapWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(class UTextBlock*)                         ContentLabel                                                OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class UTapButton*)                         ConfirmButton                                               OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UTextBlock*)                         ConfirmButtonLabel                                          OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UTapButton*)                         DeclineButton                                               OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UTextBlock*)                         DeclineButtonLabel                                          OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UNativeWidgetHost*)                  ControllerTip                                               OFFSET(get<T>, {0x2A8, 8, 0, 0})


	/// Functions
	// Function /Script/XDGCommon.XUPrivacyDisagreeWidget.OnDeclineButtonClick
	// void OnDeclineButtonClick();                                                                                             // [0x10161a0] Final|Native|Protected 
	// Function /Script/XDGCommon.XUPrivacyDisagreeWidget.OnConfirmButtonClick
	// void OnConfirmButtonClick();                                                                                             // [0xfc11b0] Final|Native|Protected 
};

/// Class /Script/XDGCommon.RegionStatic
/// Size: 0x0000 (0x000028 - 0x000028)
class URegionStatic : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/XDGCommon.RegionStatic.NotifySucceeded
	// void NotifySucceeded(FString URL);                                                                                       // [0x10160d0] Final|Native|Static|Private 
	// Function /Script/XDGCommon.RegionStatic.NotifyFailed
	// void NotifyFailed(FString URL);                                                                                          // [0x1016040] Final|Native|Static|Private 
};

/// Struct /Script/XDGCommon.AccessToken
/// Size: 0x0058 (0x000000 - 0x000058)
class FAccessToken : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   Kid                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   MacKey                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   TokenType                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   MacAlgorithm                                                OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   ConsoleID                                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(int64_t)                                   ExpireIn                                                    OFFSET(get<int64_t>, {0x50, 8, 0, 0})
};

/// Struct /Script/XDGCommon.UpdateAgreementResponse
/// Size: 0x0018 (0x000000 - 0x000018)
class FUpdateAgreementResponse : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      isSuccess                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   agreementVersion                                            OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/XDGCommon.JsResponse
/// Size: 0x0020 (0x000000 - 0x000020)
class FJsResponse : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/XDGCommon.JsRequest
/// Size: 0x0030 (0x000000 - 0x000030)
class FJsRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/XDGCommon.WebStorage
/// Size: 0x0020 (0x000000 - 0x000020)
class FWebStorage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Key                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/XDGCommon.WebBridgeResponse
/// Size: 0x0070 (0x000000 - 0x000070)
class FWebBridgeResponse : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/XDGCommon.WebRequest
/// Size: 0x0048 (0x000000 - 0x000048)
class FWebRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/XDGCommon.WebResponse
/// Size: 0x0010 (0x000000 - 0x000010)
class FWebResponse : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/XDGCommon.AgreementSignInfo
/// Size: 0x0078 (0x000000 - 0x000078)
class FAgreementSignInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bUploaded                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   ClientId                                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   deviceCode                                                  OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   agreementVersion                                            OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   agreementRegion                                             OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   UserId                                                      OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        extra                                                       OFFSET(getStruct<T>, {0x58, 32, 0, 0})
};

/// Struct /Script/XDGCommon.AgreementOptionData
/// Size: 0x0028 (0x000000 - 0x000028)
class FAgreementOptionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      required                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/XDGCommon.XDGAgreement
/// Size: 0x0020 (0x000000 - 0x000020)
class FXDGAgreement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Type                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   URL                                                         OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/XDGCommon.AgreementData
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FAgreementData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FString)                                   agreementVersion                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   agreementRegion                                             OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   titleFirst                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   summaryFirst                                                OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   promptFirst                                                 OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   summary                                                     OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   prompt                                                      OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   agree                                                       OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   disagree                                                    OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FString)                                   agreeAll                                                    OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FAgreementOptionData>)              options                                                     OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FXDGAgreement>)                     Agreements                                                  OFFSET(get<T>, {0xC0, 16, 0, 0})
};

/// Struct /Script/XDGCommon.XdWebActionResult
/// Size: 0x0018 (0x000000 - 0x000018)
class FXdWebActionResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EWebAction)                                Action                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/XDGCommon.XdgSuccess
/// Size: 0x0001 (0x000000 - 0x000001)
class FXdgSuccess : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/XDGCommon.XUResponseModel
/// Size: 0x0028 (0x000000 - 0x000028)
class FXUResponseModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Code                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   Msg                                                         OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Detail                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/XDGCommon.XDGError
/// Size: 0x0048 (0x000000 - 0x000048)
class FXDGError : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int64_t)                                   Code                                                        OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FString)                                   Msg                                                         OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Detail                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/XDGCommon.XDGRegionInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FXDGRegionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   country_code                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   TimeZone                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   City                                                        OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   LocationInfoType                                            OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/XDGCommon.XDGInitParams
/// Size: 0x0010 (0x000000 - 0x000010)
class FXDGInitParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   PackageType                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/XDGCommon.XDGUser
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FXDGUser : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FString)                                   UserId                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   username                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   NickName                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   avatar                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   LoginTypeEntry                                              OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(EXDGLoginType)                             LoginType                                                   OFFSET(get<T>, {0x50, 1, 0, 0})
	SMember(FAccessToken)                              token                                                       OFFSET(getStruct<T>, {0x58, 88, 0, 0})
	CMember(TArray<FString>)                           loginList                                                   OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/XDGCommon.XULanguageModel
/// Size: 0x0860 (0x000000 - 0x000860)
class FXULanguageModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2144;

public:
	SMember(FString)                                   tds_account_safe_info                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   tds_account_info                                            OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   tds_account_bind_info                                       OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   tds_unbind                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   tds_bind                                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   tds_guest                                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   tds_delete_account_title                                    OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   tds_unbind_account_title                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   tds_delete_account_sure_title                               OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   tds_delete_account                                          OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FString)                                   tds_unbind_account                                          OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FString)                                   tds_unbind_account_button                                   OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FString)                                   tds_delete_account_sure                                     OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FString)                                   tds_delete_content                                          OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FString)                                   tds_unbind_content                                          OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FString)                                   tds_unbind_delete_content                                   OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FString)                                   tds_unbind_confirm_Content                                  OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FString)                                   tds_delete_confirm_content                                  OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FString)                                   tds_input_error                                             OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FString)                                   tds_cancel                                                  OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FString)                                   tds_input_error_re                                          OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FString)                                   tds_confirm                                                 OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	SMember(FString)                                   tds_delete                                                  OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	SMember(FString)                                   tds_loading                                                 OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	SMember(FString)                                   tds_current_account_prefix                                  OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	SMember(FString)                                   tds_account_format                                          OFFSET(getStruct<T>, {0x190, 16, 0, 0})
	SMember(FString)                                   tds_current_id                                              OFFSET(getStruct<T>, {0x1A0, 16, 0, 0})
	SMember(FString)                                   tds_copy_success                                            OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	SMember(FString)                                   tds_cancel_bind                                             OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
	SMember(FString)                                   tds_unbind_error                                            OFFSET(getStruct<T>, {0x1D0, 16, 0, 0})
	SMember(FString)                                   tds_bind_error_reason_format                                OFFSET(getStruct<T>, {0x1E0, 16, 0, 0})
	SMember(FString)                                   tds_bind_error                                              OFFSET(getStruct<T>, {0x1F0, 16, 0, 0})
	SMember(FString)                                   tds_bind_success                                            OFFSET(getStruct<T>, {0x200, 16, 0, 0})
	SMember(FString)                                   tds_delete_account_tip                                      OFFSET(getStruct<T>, {0x210, 16, 0, 0})
	SMember(FString)                                   tds_no_account_detected                                     OFFSET(getStruct<T>, {0x220, 16, 0, 0})
	SMember(FString)                                   tds_unbind_success                                          OFFSET(getStruct<T>, {0x230, 16, 0, 0})
	SMember(FString)                                   tds_unbind_success_return_sign                              OFFSET(getStruct<T>, {0x240, 16, 0, 0})
	SMember(FString)                                   tds_unbind_delete_success_return_sign                       OFFSET(getStruct<T>, {0x250, 16, 0, 0})
	SMember(FString)                                   tds_unbind_guest_return                                     OFFSET(getStruct<T>, {0x260, 16, 0, 0})
	SMember(FString)                                   tds_loading_error_retry                                     OFFSET(getStruct<T>, {0x270, 16, 0, 0})
	SMember(FString)                                   tds_network_error_retry                                     OFFSET(getStruct<T>, {0x280, 16, 0, 0})
	SMember(FString)                                   tds_login_success                                           OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	SMember(FString)                                   tds_login_cancel                                            OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	SMember(FString)                                   tds_login_failed                                            OFFSET(getStruct<T>, {0x2B0, 16, 0, 0})
	SMember(FString)                                   tds_login_button_title                                      OFFSET(getStruct<T>, {0x2C0, 16, 0, 0})
	SMember(FString)                                   tds_confirm_logout_title                                    OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	SMember(FString)                                   tds_confirm_logout_content                                  OFFSET(getStruct<T>, {0x2E0, 16, 0, 0})
	SMember(FString)                                   tds_bound                                                   OFFSET(getStruct<T>, {0x2F0, 16, 0, 0})
	SMember(FString)                                   tds_user_center_logout                                      OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	SMember(FString)                                   tds_logout                                                  OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FString)                                   tds_code_unbind_subtitle                                    OFFSET(getStruct<T>, {0x320, 16, 0, 0})
	SMember(FString)                                   tds_code_box_hint                                           OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	SMember(FString)                                   tds_code_box_send_code                                      OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	SMember(FString)                                   tds_user_agreement                                          OFFSET(getStruct<T>, {0x350, 16, 0, 0})
	SMember(FString)                                   tds_privacy_policy                                          OFFSET(getStruct<T>, {0x360, 16, 0, 0})
	SMember(FString)                                   tds_code_send_success                                       OFFSET(getStruct<T>, {0x370, 16, 0, 0})
	SMember(FString)                                   tds_code_bind_footer_format                                 OFFSET(getStruct<T>, {0x380, 16, 0, 0})
	SMember(FString)                                   tds_code_bind_footer_support                                OFFSET(getStruct<T>, {0x390, 16, 0, 0})
	SMember(FString)                                   tds_code_unbind_title                                       OFFSET(getStruct<T>, {0x3A0, 16, 0, 0})
	SMember(FString)                                   tds_code_unbind_footer                                      OFFSET(getStruct<T>, {0x3B0, 16, 0, 0})
	SMember(FString)                                   tds_sms_login_title                                         OFFSET(getStruct<T>, {0x3C0, 16, 0, 0})
	SMember(FString)                                   tds_phone_box_hint                                          OFFSET(getStruct<T>, {0x3D0, 16, 0, 0})
	SMember(FString)                                   tds_sms_bind_title                                          OFFSET(getStruct<T>, {0x3E0, 16, 0, 0})
	SMember(FString)                                   tds_email_login_title                                       OFFSET(getStruct<T>, {0x3F0, 16, 0, 0})
	SMember(FString)                                   tds_email_box_hint                                          OFFSET(getStruct<T>, {0x400, 16, 0, 0})
	SMember(FString)                                   tds_email_bind_title                                        OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	SMember(FString)                                   tds_email_empty                                             OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	SMember(FString)                                   tds_phone_number_empty                                      OFFSET(getStruct<T>, {0x430, 16, 0, 0})
	SMember(FString)                                   tds_code_empty                                              OFFSET(getStruct<T>, {0x440, 16, 0, 0})
	SMember(FString)                                   tds_code_login_button                                       OFFSET(getStruct<T>, {0x450, 16, 0, 0})
	SMember(FString)                                   tds_code_unbind_button_text                                 OFFSET(getStruct<T>, {0x460, 16, 0, 0})
	SMember(FString)                                   tds_code_box_retry                                          OFFSET(getStruct<T>, {0x470, 16, 0, 0})
	SMember(FString)                                   tds_phone_box_search_hint                                   OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	SMember(FString)                                   tds_phone                                                   OFFSET(getStruct<T>, {0x490, 16, 0, 0})
	SMember(FString)                                   tds_email                                                   OFFSET(getStruct<T>, {0x4A0, 16, 0, 0})
	SMember(FString)                                   tds_authorization_cancel                                    OFFSET(getStruct<T>, {0x4B0, 16, 0, 0})
	SMember(FString)                                   tds_authorization_failed                                    OFFSET(getStruct<T>, {0x4C0, 16, 0, 0})
	SMember(FString)                                   tds_network_error_login                                     OFFSET(getStruct<T>, {0x4D0, 16, 0, 0})
	SMember(FString)                                   tds_network_error_safe_retry                                OFFSET(getStruct<T>, {0x4E0, 16, 0, 0})
	SMember(FString)                                   tds_refund_custom_service_tip                               OFFSET(getStruct<T>, {0x4F0, 16, 0, 0})
	SMember(FString)                                   tds_refund_contact_custom_service                           OFFSET(getStruct<T>, {0x500, 16, 0, 0})
	SMember(FString)                                   tds_refund_custom_service_tip_tail                          OFFSET(getStruct<T>, {0x510, 16, 0, 0})
	SMember(FString)                                   tds_refund_success                                          OFFSET(getStruct<T>, {0x520, 16, 0, 0})
	SMember(FString)                                   tds_refund_fail                                             OFFSET(getStruct<T>, {0x530, 16, 0, 0})
	SMember(FString)                                   tds_refund_cancel                                           OFFSET(getStruct<T>, {0x540, 16, 0, 0})
	SMember(FString)                                   tds_refund_action                                           OFFSET(getStruct<T>, {0x550, 16, 0, 0})
	SMember(FString)                                   tds_refund_login_restrict_title                             OFFSET(getStruct<T>, {0x560, 16, 0, 0})
	SMember(FString)                                   tds_refund_login_restrict_sub_title                         OFFSET(getStruct<T>, {0x570, 16, 0, 0})
	SMember(FString)                                   tds_refund_ios_pay_tip                                      OFFSET(getStruct<T>, {0x580, 16, 0, 0})
	SMember(FString)                                   tds_pay_success                                             OFFSET(getStruct<T>, {0x590, 16, 0, 0})
	SMember(FString)                                   tds_pay_fail                                                OFFSET(getStruct<T>, {0x5A0, 16, 0, 0})
	SMember(FString)                                   tds_pay_cancel                                              OFFSET(getStruct<T>, {0x5B0, 16, 0, 0})
	SMember(FString)                                   tds_button_confirm                                          OFFSET(getStruct<T>, {0x5C0, 16, 0, 0})
	SMember(FString)                                   tds_promotion_exchange_title                                OFFSET(getStruct<T>, {0x5D0, 16, 0, 0})
	SMember(FString)                                   tds_promotion_exchange_desc                                 OFFSET(getStruct<T>, {0x5E0, 16, 0, 0})
	SMember(FString)                                   tds_refund_android_pay_tip                                  OFFSET(getStruct<T>, {0x5F0, 16, 0, 0})
	SMember(FString)                                   tds_refund_all_pay_tip                                      OFFSET(getStruct<T>, {0x600, 16, 0, 0})
	SMember(FString)                                   tds_pay_net_fail                                            OFFSET(getStruct<T>, {0x610, 16, 0, 0})
	SMember(FString)                                   tds_refund_net_fail                                         OFFSET(getStruct<T>, {0x620, 16, 0, 0})
	SMember(FString)                                   tds_purchase_processing                                     OFFSET(getStruct<T>, {0x630, 16, 0, 0})
	SMember(FString)                                   tds_terms_agreement                                         OFFSET(getStruct<T>, {0x640, 16, 0, 0})
	SMember(FString)                                   tds_service_terms_agreement                                 OFFSET(getStruct<T>, {0x650, 16, 0, 0})
	SMember(FString)                                   tds_push_agreement                                          OFFSET(getStruct<T>, {0x660, 16, 0, 0})
	SMember(FString)                                   tds_confirm_agreement                                       OFFSET(getStruct<T>, {0x670, 16, 0, 0})
	SMember(FString)                                   tds_agreement_option_not_agree_alert_content                OFFSET(getStruct<T>, {0x680, 16, 0, 0})
	SMember(FString)                                   tds_agreement_option_not_agree_alert_confirm                OFFSET(getStruct<T>, {0x690, 16, 0, 0})
	SMember(FString)                                   tds_agreement_option_not_agree_alert_cancel                 OFFSET(getStruct<T>, {0x6A0, 16, 0, 0})
	SMember(FString)                                   tds_is_adult_agreement                                      OFFSET(getStruct<T>, {0x6B0, 16, 0, 0})
	SMember(FString)                                   tds_california_agreement                                    OFFSET(getStruct<T>, {0x6C0, 16, 0, 0})
	SMember(FString)                                   tds_cancel_claim                                            OFFSET(getStruct<T>, {0x6D0, 16, 0, 0})
	SMember(FString)                                   tds_custom_service                                          OFFSET(getStruct<T>, {0x6E0, 16, 0, 0})
	SMember(FString)                                   tds_product_not_exists                                      OFFSET(getStruct<T>, {0x6F0, 16, 0, 0})
	SMember(FString)                                   tds_ios_restricted_payment_title                            OFFSET(getStruct<T>, {0x700, 16, 0, 0})
	SMember(FString)                                   tds_ios_restricted_payment_description                      OFFSET(getStruct<T>, {0x710, 16, 0, 0})
	SMember(FString)                                   xd_agreement_agree                                          OFFSET(getStruct<T>, {0x720, 16, 0, 0})
	SMember(FString)                                   xd_agreement_disagree                                       OFFSET(getStruct<T>, {0x730, 16, 0, 0})
	SMember(FString)                                   xd_agreement_disagree_confirm_content                       OFFSET(getStruct<T>, {0x740, 16, 0, 0})
	SMember(FString)                                   xd_agreement_disagree_confirm_exit                          OFFSET(getStruct<T>, {0x750, 16, 0, 0})
	SMember(FString)                                   xd_agreement_disagree_confirm_back                          OFFSET(getStruct<T>, {0x760, 16, 0, 0})
	SMember(FString)                                   xd_agreement_age_tips                                       OFFSET(getStruct<T>, {0x770, 16, 0, 0})
	SMember(FString)                                   xd_agreement_load_failed                                    OFFSET(getStruct<T>, {0x780, 16, 0, 0})
	SMember(FString)                                   tds_retry                                                   OFFSET(getStruct<T>, {0x790, 16, 0, 0})
	SMember(FString)                                   tds_net_error                                               OFFSET(getStruct<T>, {0x7A0, 16, 0, 0})
	SMember(FString)                                   tds_load_error                                              OFFSET(getStruct<T>, {0x7B0, 16, 0, 0})
	SMember(FString)                                   tds_login_dialog_email_title                                OFFSET(getStruct<T>, {0x7C0, 16, 0, 0})
	SMember(FString)                                   tds_login_dialog_email_title1                               OFFSET(getStruct<T>, {0x7D0, 16, 0, 0})
	SMember(FString)                                   tds_login_dialog_email_content                              OFFSET(getStruct<T>, {0x7E0, 16, 0, 0})
	SMember(FString)                                   tds_login_dialog_email_content1                             OFFSET(getStruct<T>, {0x7F0, 16, 0, 0})
	SMember(FString)                                   tds_login_dialog_email_content2                             OFFSET(getStruct<T>, {0x800, 16, 0, 0})
	SMember(FString)                                   tds_login_dialog_email_right_text                           OFFSET(getStruct<T>, {0x810, 16, 0, 0})
	SMember(FString)                                   tds_service_required                                        OFFSET(getStruct<T>, {0x820, 16, 0, 0})
	SMember(FString)                                   tds_service_optional                                        OFFSET(getStruct<T>, {0x830, 16, 0, 0})
	SMember(FString)                                   tds_service_agree                                           OFFSET(getStruct<T>, {0x840, 16, 0, 0})
	SMember(FString)                                   tds_service_user_info                                       OFFSET(getStruct<T>, {0x850, 16, 0, 0})
};

/// Struct /Script/XDGCommon.SteamQueryResponse
/// Size: 0x0080 (0x000000 - 0x000080)
class FSteamQueryResponse : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   productSkuName                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   productSkuCode                                              OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   desc                                                        OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   channelSkuCode                                              OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   currency                                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   Region                                                      OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(double)                                    costPrice                                                   OFFSET(get<double>, {0x60, 8, 0, 0})
	DMember(double)                                    salePrice                                                   OFFSET(get<double>, {0x68, 8, 0, 0})
	SMember(FString)                                   displayCostPrice                                            OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/XDGCommon.SteamQueryParam
/// Size: 0x0048 (0x000000 - 0x000048)
class FSteamQueryParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   ClientId                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Region                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   skus                                                        OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   steamId                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/XDGCommon.SteamPayNotifyResponse
/// Size: 0x0001 (0x000000 - 0x000001)
class FSteamPayNotifyResponse : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      isSuccess                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/XDGCommon.SteamPayNotifyParam
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FSteamPayNotifyParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FString)                                   outTradeNo                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   bankTradeNo                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   tradeNo                                                     OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   orderType                                                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FString)                                   rawCallback                                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(int32_t)                                   channelType                                                 OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   paymentType                                                 OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	SMember(FString)                                   ProductId                                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(int64_t)                                   refundTradeNo                                               OFFSET(get<int64_t>, {0x60, 8, 0, 0})
	SMember(FString)                                   appRoleId                                                   OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   appServerId                                                 OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   remark                                                      OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FString)                                   Price                                                       OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FString)                                   currency                                                    OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/XDGCommon.SteamPayResponse
/// Size: 0x0058 (0x000000 - 0x000058)
class FSteamPayResponse : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   tradeNo                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   outTradeNo                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   currency                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(double)                                    totalAmount                                                 OFFSET(get<double>, {0x30, 8, 0, 0})
	SMember(FString)                                   requestTime                                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   payUrl                                                      OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/XDGCommon.SteamPayParam
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FSteamPayParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FString)                                   ProductId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   appRoleId                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   appServerId                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   channelType                                                 OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FString)                                   outTradeNo                                                  OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(int32_t)                                   paymentType                                                 OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	SMember(FString)                                   remark                                                      OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   orderType                                                   OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(double)                                    Price                                                       OFFSET(get<double>, {0x68, 8, 0, 0})
	SMember(FString)                                   currency                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   clientStoreRegion                                           OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   eventSessionId                                              OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FString)                                   steamId                                                     OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FString)                                   steamLanguage                                               OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/XDGCommon.XUPayCheckModel
/// Size: 0x0078 (0x000000 - 0x000078)
class FXUPayCheckModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FString)                                   tradeNo                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   outTradeNo                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ProductId                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   currency                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   channelType                                                 OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   channelId                                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(int64_t)                                   supplyStatus                                                OFFSET(get<int64_t>, {0x60, 8, 0, 0})
	DMember(int64_t)                                   platform                                                    OFFSET(get<int64_t>, {0x68, 8, 0, 0})
	DMember(double)                                    refundAmount                                                OFFSET(get<double>, {0x70, 8, 0, 0})
};

/// Struct /Script/XDGCommon.XUPayCheckResponseModel
/// Size: 0x0010 (0x000000 - 0x000010)
class FXUPayCheckResponseModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FXUPayCheckModel>)                  list                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/XDGCommon.XUPhoneSend
/// Size: 0x0004 (0x000000 - 0x000004)
class FXUPhoneSend : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   resendTime                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/XDGCommon.XUServerConfigAgreement
/// Size: 0x0038 (0x000000 - 0x000038)
class FXUServerConfigAgreement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   agreementRegion                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   agreementVersion                                            OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   agreementUrl                                                OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      isKRPushServiceSwitchEnable                                 OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/XDGCommon.XUServerConfigBindEntries
/// Size: 0x0020 (0x000000 - 0x000020)
class FXUServerConfigBindEntries : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      canBind                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   entryName                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      canUnbind                                                   OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/XDGCommon.XUServerConfigTapSdk
/// Size: 0x0048 (0x000000 - 0x000048)
class FXUServerConfigTapSdk : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   ClientId                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   tapDBChannel                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ClientToken                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   ServerURL                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      enableTapDB                                                 OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Struct /Script/XDGCommon.XUServerConfigConfigs
/// Size: 0x01E8 (0x000000 - 0x0001E8)
class FXUServerConfigConfigs : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FString)                                   webPayUrlForPC                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FXUServerConfigAgreement)                  agreement                                                   OFFSET(getStruct<T>, {0x10, 56, 0, 0})
	SMember(FString)                                   serviceAgreementUrl                                         OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   serviceAgreementTxt                                         OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(TArray<FString>)                           gameLogos                                                   OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      isProtocolUiEnable                                          OFFSET(get<bool>, {0x78, 1, 0, 0})
	SMember(FString)                                   googlePlayGamesAndroidClientId                              OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   serviceTermsUrl                                             OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FString)                                   serviceTermsTxt                                             OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FString)                                   reportUrl                                                   OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FXUServerConfigBindEntries>)        bindEntriesConfig                                           OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FString>)                           androidLoginEntries                                         OFFSET(get<T>, {0xD0, 16, 0, 0})
	DMember(bool)                                      enableFirebaseTrack                                         OFFSET(get<bool>, {0xE0, 1, 0, 0})
	CMember(TArray<FString>)                           iosLoginEntries                                             OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FString)                                   californiaPrivacyUrl                                        OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FString)                                   gameName                                                    OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FXUServerConfigTapSdk)                     tapSdkConfig                                                OFFSET(getStruct<T>, {0x118, 72, 0, 0})
	CMember(TArray<FString>)                           tapLoginPermissions                                         OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<FString>)                           bindEntries                                                 OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FString)                                   AppId                                                       OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	SMember(FString)                                   facebookClientId                                            OFFSET(getStruct<T>, {0x190, 16, 0, 0})
	CMember(TArray<FString>)                           fbLoginPermissions                                          OFFSET(get<T>, {0x1A0, 16, 0, 0})
	SMember(FString)                                   Region                                                      OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	SMember(FString)                                   logoutUrl                                                   OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
	DMember(bool)                                      isKRPushServiceSwitchEnable                                 OFFSET(get<bool>, {0x1D0, 1, 0, 0})
	CMember(TArray<FString>)                           webWhiteList                                                OFFSET(get<T>, {0x1D8, 16, 0, 0})
};

/// Struct /Script/XDGCommon.XUServerConfig
/// Size: 0x0208 (0x000000 - 0x000208)
class FXUServerConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FString)                                   Version                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   groupId                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FXUServerConfigConfigs)                    configs                                                     OFFSET(getStruct<T>, {0x20, 488, 0, 0})
};

/// Struct /Script/XDGCommon.XUStorage
/// Size: 0x0001 (0x000000 - 0x000001)
class FXUStorage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/XDGCommon.XUSyncTokenModel
/// Size: 0x0010 (0x000000 - 0x000010)
class FXUSyncTokenModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   sessionToken                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/XDGCommon.EWebResponseType
/// Size: 0x03
enum class EWebResponseType : uint8_t
{
	ExecuteSuccess                                                                   = 0,
	ExecuteFailed                                                                    = 1,
	FunctionNotFound                                                                 = 2
};

/// Enum /Script/XDGCommon.EWebAction
/// Size: 0x02
enum class EWebAction : uint32_t
{
	EWebAction__CLOSE                                                                = 0,
	EWebAction__MESSAGE                                                              = 1
};

/// Enum /Script/XDGCommon.EXDGLoginType
/// Size: 0x13
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
/// Size: 0x02
enum class EXDGRegionType : uint8_t
{
	EXDGRegionType__CN                                                               = 0,
	EXDGRegionType__Global                                                           = 1
};

/// Enum /Script/XDGCommon.FXDGPackageType
/// Size: 0x09
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


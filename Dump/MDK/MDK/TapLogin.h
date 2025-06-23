
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: SlateCore
/// dependency: TapCommon

/// Struct /Script/TapLogin.PermissionCheckBoxStyle
/// Size: 0x0B78 (0x000008 - 0x000B80)
class FPermissionCheckBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2944;

public:
	SMember(FCheckBoxStyle)                            PermissionCheckBoxStyle                                     OFFSET(getStruct<T>, {0x10, 2064, 0, 0})
	SMember(FTextBlockStyle)                           PermissionTextBlockStyle                                    OFFSET(getStruct<T>, {0x820, 864, 0, 0})
};

/// Class /Script/TapLogin.PermissionCheckBoxWidgetStyle
/// Size: 0x0B80 (0x000030 - 0x000BB0)
class UPermissionCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2992;

public:
	SMember(FPermissionCheckBoxStyle)                  WidgetStyle                                                 OFFSET(getStruct<T>, {0x30, 2944, 0, 0})
};

/// Struct /Script/TapLogin.QrCodeScanTipButtonStyle
/// Size: 0x05D8 (0x000008 - 0x0005E0)
class FQrCodeScanTipButtonStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	SMember(FTextBlockStyle)                           ScanTipTextBlockStyle                                       OFFSET(getStruct<T>, {0x10, 864, 0, 0})
	SMember(FSlateBrush)                               IconBrush                                                   OFFSET(getStruct<T>, {0x370, 208, 0, 0})
	SMember(FSlateBrush)                               OpenBrush                                                   OFFSET(getStruct<T>, {0x440, 208, 0, 0})
	SMember(FSlateBrush)                               CloseBrush                                                  OFFSET(getStruct<T>, {0x510, 208, 0, 0})
};

/// Class /Script/TapLogin.QrCodeScanTipButtonWidgetStyle
/// Size: 0x05E0 (0x000030 - 0x000610)
class UQrCodeScanTipButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	SMember(FQrCodeScanTipButtonStyle)                 WidgetStyle                                                 OFFSET(getStruct<T>, {0x30, 1504, 0, 0})
};

/// Struct /Script/TapLogin.TapLoginStyle
/// Size: 0x37C8 (0x000008 - 0x0037D0)
class FTapLoginStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 14288;

public:
	SMember(FTextBlockStyle)                           TitleTextBlockStyle                                         OFFSET(getStruct<T>, {0x10, 864, 0, 0})
	SMember(FMargin)                                   TitlePadding                                                OFFSET(getStruct<T>, {0x370, 16, 0, 0})
	SMember(FTextBlockStyle)                           SubtitleTextBlockStyle                                      OFFSET(getStruct<T>, {0x380, 864, 0, 0})
	SMember(FMargin)                                   QrCodePadding                                               OFFSET(getStruct<T>, {0x6E0, 16, 0, 0})
	SMember(FMargin)                                   QrCodeDescription2Padding                                   OFFSET(getStruct<T>, {0x6F0, 16, 0, 0})
	SMember(FTextBlockStyle)                           QrCodeDescriptionStyle                                      OFFSET(getStruct<T>, {0x700, 864, 0, 0})
	SMember(FTextBlockStyle)                           QrCodeDescriptionStyle2                                     OFFSET(getStruct<T>, {0xA60, 864, 0, 0})
	SMember(FSlateBrush)                               TipContainerBrush                                           OFFSET(getStruct<T>, {0xDC0, 208, 0, 0})
	SMember(FQrCodeScanTipButtonStyle)                 QrCodeScanTipButtonStyle                                    OFFSET(getStruct<T>, {0xE90, 1504, 0, 0})
	SMember(FSlateBrush)                               RetryBrush                                                  OFFSET(getStruct<T>, {0x1470, 208, 0, 0})
	SMember(FMargin)                                   RetryContentPadding                                         OFFSET(getStruct<T>, {0x1540, 16, 0, 0})
	SMember(FSlateBrush)                               QrCodeRetryIconBrush                                        OFFSET(getStruct<T>, {0x1550, 208, 0, 0})
	SMember(FTextBlockStyle)                           QrCodeRetryTextBlockStyle                                   OFFSET(getStruct<T>, {0x1620, 864, 0, 0})
	SMember(FTextBlockStyle)                           QrCodeRetryDescriptionStyle                                 OFFSET(getStruct<T>, {0x1980, 864, 0, 0})
	SMember(FMargin)                                   NoPermissionPadding                                         OFFSET(getStruct<T>, {0x1CE0, 16, 0, 0})
	SMember(FSlateBrush)                               NoPermissionBrush                                           OFFSET(getStruct<T>, {0x1CF0, 208, 0, 0})
	SMember(FMargin)                                   WebAuthButtonPadding                                        OFFSET(getStruct<T>, {0x1DC0, 16, 0, 0})
	SMember(FTextBlockStyle)                           WebAuthTextBlockStyle                                       OFFSET(getStruct<T>, {0x1DD0, 864, 0, 0})
	SMember(FSlateBrush)                               WebAuthArrow                                                OFFSET(getStruct<T>, {0x2130, 208, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         WebAuthHAlignment                                           OFFSET(get<T>, {0x2200, 1, 0, 0})
	SMember(FTextBlockStyle)                           WebAuthTipTextBlockStyle                                    OFFSET(getStruct<T>, {0x2210, 864, 0, 0})
	SMember(FTextBlockStyle)                           WebAuthTipTextBlockStyle2                                   OFFSET(getStruct<T>, {0x2570, 864, 0, 0})
	SMember(FMargin)                                   WebAuthTip2Padding                                          OFFSET(getStruct<T>, {0x28D0, 16, 0, 0})
	SMember(FMargin)                                   PermissionItemPadding                                       OFFSET(getStruct<T>, {0x28E0, 16, 0, 0})
	SMember(FTextBlockStyle)                           PermissionTitleTextBlockStyle                               OFFSET(getStruct<T>, {0x28F0, 864, 0, 0})
	SMember(FPermissionCheckBoxStyle)                  PermissionCheckBoxStyle                                     OFFSET(getStruct<T>, {0x2C50, 2944, 0, 0})
};

/// Class /Script/TapLogin.TapLoginWidgetStyle
/// Size: 0x37D0 (0x000030 - 0x003800)
class UTapLoginWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 14336;

public:
	SMember(FTapLoginStyle)                            WidgetStyle                                                 OFFSET(getStruct<T>, {0x30, 14288, 0, 0})
};

/// Class /Script/TapLogin.TULoginReflection
/// Size: 0x0000 (0x000028 - 0x000028)
class UTULoginReflection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/TapLogin.TULoginReflection.GetOpenID
	// FString GetOpenID();                                                                                                     // [0xf40510] Final|Native|Static|Private 
};

/// Struct /Script/TapLogin.LoginWrapper
/// Size: 0x0018 (0x000000 - 0x000018)
class FLoginWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   wrapper                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(uint64_t)                                  loginCallbackCode                                           OFFSET(get<uint64_t>, {0x10, 8, 0, 0})
};

/// Struct /Script/TapLogin.FriendWrapper
/// Size: 0x0020 (0x000000 - 0x000020)
class FFriendWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Content                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      Success                                                     OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(int64_t)                                   Code                                                        OFFSET(get<int64_t>, {0x18, 8, 0, 0})
};

/// Struct /Script/TapLogin.TUAccessToken
/// Size: 0x0060 (0x000000 - 0x000060)
class FTUAccessToken : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FString)                                   Kid                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   access_token                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   token_type                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   mac_key                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   mac_algorithm                                               OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   Scope                                                       OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/TapLogin.TUAntiAddictionModel
/// Size: 0x0010 (0x000000 - 0x000010)
class FTUAntiAddictionModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Code                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/TapLogin.TULoginError
/// Size: 0x0040 (0x000000 - 0x000040)
class FTULoginError : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   Code                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   Msg                                                         OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   Error                                                       OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   error_description                                           OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/TapLogin.TULoginFriendInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FTULoginFriendInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   avatar                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   openid                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/TapLogin.TULoginFriendResult
/// Size: 0x0020 (0x000000 - 0x000020)
class FTULoginFriendResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FTULoginFriendInfo>)                Data                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Cursor                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/TapLogin.TULoginProfileModel
/// Size: 0x0040 (0x000000 - 0x000040)
class FTULoginProfileModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   avatar                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   openid                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   unionid                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/TapLogin.TULoginStorage
/// Size: 0x0001 (0x000000 - 0x000001)
class FTULoginStorage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TapLogin.TULoginConfig
/// Size: 0x0018 (0x000000 - 0x000018)
class FTULoginConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ClientId                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(ERegionType)                               RegionType                                                  OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(bool)                                      bRoundCorner                                                OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/TapLogin.TUQrCodeModel
/// Size: 0x0050 (0x000000 - 0x000050)
class FTUQrCodeModel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   qrcode_url                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   verification_url                                            OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   device_code                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   user_code                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(int64_t)                                   expires_in                                                  OFFSET(get<int64_t>, {0x40, 8, 0, 0})
	DMember(int64_t)                                   interval                                                    OFFSET(get<int64_t>, {0x48, 8, 0, 0})
};


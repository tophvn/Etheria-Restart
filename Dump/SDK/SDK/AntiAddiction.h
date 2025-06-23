
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

#pragma pack(push, 0x1)

class UAAUBackViewWidget;
class UAAUMobileTipWidget;
class UManualVerifyWidgetStyle;
class UTapAntiAddictionReflection;
class UVerifyEntryWidgetStyle;

/// Enum /Script/AntiAddiction.EAAUAgeLimit
/// Size: 0x01 (1 bytes)
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
/// Size: 0x01 (1 bytes)
enum class EAAURegion : uint8_t
{
	EAAURegion__China                                                                = 0
};

#pragma pack(pop)


static_assert(sizeof(UAAUBackViewWidget) == 0x02B0); // 688 bytes (0x000280 - 0x0002B0)
static_assert(sizeof(UAAUMobileTipWidget) == 0x0300); // 768 bytes (0x000280 - 0x000300)
static_assert(sizeof(FManualVerifyStyle) == 0x1280); // 4736 bytes (0x000008 - 0x001280)
static_assert(sizeof(UManualVerifyWidgetStyle) == 0x12B0); // 4784 bytes (0x000030 - 0x0012B0)
static_assert(sizeof(UTapAntiAddictionReflection) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FVerifyEntryStyle) == 0x07D0); // 2000 bytes (0x000008 - 0x0007D0)
static_assert(sizeof(UVerifyEntryWidgetStyle) == 0x0800); // 2048 bytes (0x000030 - 0x000800)
static_assert(sizeof(FAAUPaymentModel) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAAUPayableModel) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAAUPlayableModel) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAAUAuthIdentifyWord) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FAAUUIConfigModel) == 0x0100); // 256 bytes (0x000000 - 0x000100)
static_assert(sizeof(FAAURealNameConfigModel) == 0x0108); // 264 bytes (0x000000 - 0x000108)
static_assert(sizeof(FAAURealNameResultModel) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAACheckAgeModel) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FAARealNameStateModel) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAAPolicyModel) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAAUStrictTipWord) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAAUUITipModel) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FAATimeRangeModel) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FAALocalModel) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FAAUserConfigModel) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FAAUServerTimeModel) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAAUSettingsModel) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FAAUStorage) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FAAUConfig) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAAUUser) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FAntiAddictionError) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(offsetof(UAAUBackViewWidget, TitleLabel) == 0x0280);
static_assert(offsetof(UAAUBackViewWidget, BackButton) == 0x0288);
static_assert(offsetof(UAAUBackViewWidget, CloseButton) == 0x0290);
static_assert(offsetof(UAAUBackViewWidget, HeadOverlay) == 0x0298);
static_assert(offsetof(UAAUBackViewWidget, SubButton) == 0x02A0);
static_assert(offsetof(UAAUBackViewWidget, SubButtonLabel) == 0x02A8);
static_assert(offsetof(UAAUMobileTipWidget, ControllerTipHost) == 0x02D0);
static_assert(offsetof(UAAUMobileTipWidget, TitleLabel) == 0x02D8);
static_assert(offsetof(UAAUMobileTipWidget, DetailLabel) == 0x02E0);
static_assert(offsetof(UAAUMobileTipWidget, ContentBox) == 0x02E8);
static_assert(offsetof(UAAUMobileTipWidget, SubButtonLabel) == 0x02F0);
static_assert(offsetof(UAAUMobileTipWidget, SubmitBtn) == 0x02F8);
static_assert(offsetof(FManualVerifyStyle, ContentStyle) == 0x0010);
static_assert(offsetof(FManualVerifyStyle, ContentScrollBoxStyle) == 0x0370);
static_assert(offsetof(FManualVerifyStyle, ContentMargin) == 0x06C0);
static_assert(offsetof(FManualVerifyStyle, InputBoxStyle) == 0x06D0);
static_assert(offsetof(UManualVerifyWidgetStyle, WidgetStyle) == 0x0030);
static_assert(offsetof(FVerifyEntryStyle, Icon) == 0x0010);
static_assert(offsetof(FVerifyEntryStyle, IconMargin) == 0x00E0);
static_assert(offsetof(FVerifyEntryStyle, ContentStyle) == 0x00F0);
static_assert(offsetof(FVerifyEntryStyle, ContentMargin) == 0x0450);
static_assert(offsetof(FVerifyEntryStyle, TailStyle) == 0x0460);
static_assert(offsetof(FVerifyEntryStyle, TailMargin) == 0x07C0);
static_assert(offsetof(UVerifyEntryWidgetStyle, WidgetStyle) == 0x0030);
static_assert(offsetof(FAAUPaymentModel, Message) == 0x0000);
static_assert(offsetof(FAAUPayableModel, Title) == 0x0008);
static_assert(offsetof(FAAUPayableModel, description_plain) == 0x0018);
static_assert(offsetof(FAAUPlayableModel, Title) == 0x0008);
static_assert(offsetof(FAAUPlayableModel, description_plain) == 0x0018);
static_assert(offsetof(FAAUAuthIdentifyWord, Title) == 0x0000);
static_assert(offsetof(FAAUAuthIdentifyWord, description_plain) == 0x0010);
static_assert(offsetof(FAAUAuthIdentifyWord, negative_button) == 0x0020);
static_assert(offsetof(FAAUAuthIdentifyWord, positive_button) == 0x0030);
static_assert(offsetof(FAAUUIConfigModel, taptap_auth) == 0x0000);
static_assert(offsetof(FAAUUIConfigModel, manual_auth) == 0x0040);
static_assert(offsetof(FAAUUIConfigModel, auth_waiting) == 0x0080);
static_assert(offsetof(FAAUUIConfigModel, auth_failed) == 0x00C0);
static_assert(offsetof(FAAURealNameConfigModel, real_name_text) == 0x0008);
static_assert(offsetof(FAAURealNameResultModel, status) == 0x0000);
static_assert(offsetof(FAAURealNameResultModel, anti_addiction_token) == 0x0010);
static_assert(offsetof(FAAPolicyModel, policy_active) == 0x0000);
static_assert(offsetof(FAAPolicyModel, policy_model) == 0x0010);
static_assert(offsetof(FAAUStrictTipWord, Title) == 0x0000);
static_assert(offsetof(FAAUStrictTipWord, description_plain) == 0x0010);
static_assert(offsetof(FAAUUITipModel, allow) == 0x0000);
static_assert(offsetof(FAAUUITipModel, reject) == 0x0020);
static_assert(offsetof(FAATimeRangeModel, Text) == 0x0000);
static_assert(offsetof(FAATimeRangeModel, holidays) == 0x0040);
static_assert(offsetof(FAATimeRangeModel, time_start) == 0x0050);
static_assert(offsetof(FAATimeRangeModel, time_end) == 0x0060);
static_assert(offsetof(FAALocalModel, time_range) == 0x0000);
static_assert(offsetof(FAAUserConfigModel, content_rating_check) == 0x0000);
static_assert(offsetof(FAAUserConfigModel, real_name) == 0x0004);
static_assert(offsetof(FAAUserConfigModel, anti_addiction) == 0x0010);
static_assert(offsetof(FAAUserConfigModel, Local) == 0x0038);
static_assert(offsetof(FAAUConfig, ClientId) == 0x0000);
static_assert(offsetof(FAAUUser, UserId) == 0x0000);
static_assert(offsetof(FAAUUser, AccessTokenV2) == 0x0010);
static_assert(offsetof(FAAUUser, AccessToken) == 0x0020);
static_assert(offsetof(FAntiAddictionError, Error) == 0x0008);
static_assert(offsetof(FAntiAddictionError, error_description) == 0x0018);
static_assert(offsetof(FAntiAddictionError, Msg) == 0x0028);

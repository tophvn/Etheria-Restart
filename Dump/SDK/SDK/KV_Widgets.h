
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "AkAudio.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "EthInput.h"
#include "Slate.h"
#include "SlateCore.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UKV_Button;
class UKV_InfinitScrollPanel;
class UKV_InputBlockArea;
class UKV_JigsawPanel;
class UKV_MaskBox;
class UKV_ScaleAdaptor;
class UKV_TextBlock;
class UKV_WidgetSetting;
class UKV_WidgetSwitcher;
class UScrolledItemFactory;

/// Enum /Script/KV_Widgets.EButtonResetMode
/// Size: 0x01 (1 bytes)
enum class EButtonResetMode : uint8_t
{
	EButtonResetMode__AutoReset                                                      = 0,
	EButtonResetMode__Manual                                                         = 1,
	EButtonResetMode__Fixxed                                                         = 2
};

/// Enum /Script/KV_Widgets.EKV_ScrollDirection
/// Size: 0x01 (1 bytes)
enum class EKV_ScrollDirection : uint8_t
{
	EKV_ScrollDirection__Horizontal                                                  = 0,
	EKV_ScrollDirection__Vertical                                                    = 1
};

#pragma pack(pop)


static_assert(sizeof(UKV_Button) == 0x0640); // 1600 bytes (0x0005F8 - 0x000640)
static_assert(sizeof(UKV_InfinitScrollPanel) == 0x01A8); // 424 bytes (0x000128 - 0x0001A8)
static_assert(sizeof(UKV_InputBlockArea) == 0x0150); // 336 bytes (0x000140 - 0x000150)
static_assert(sizeof(UKV_JigsawPanel) == 0x0230); // 560 bytes (0x000150 - 0x000230)
static_assert(sizeof(UKV_MaskBox) == 0x0198); // 408 bytes (0x000170 - 0x000198)
static_assert(sizeof(UKV_ScaleAdaptor) == 0x0158); // 344 bytes (0x000150 - 0x000158)
static_assert(sizeof(UKV_TextBlock) == 0x0340); // 832 bytes (0x000310 - 0x000340)
static_assert(sizeof(UKV_WidgetSetting) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UKV_WidgetSwitcher) == 0x0160); // 352 bytes (0x000158 - 0x000160)
static_assert(sizeof(UScrolledItemFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(UKV_Button, AkPressEvent) == 0x0600);
static_assert(offsetof(UKV_Button, AkReleaseEvent) == 0x0608);
static_assert(offsetof(UKV_Button, AkClickEvent) == 0x0610);
static_assert(offsetof(UKV_Button, AkEventName) == 0x0618);
static_assert(offsetof(UKV_Button, ResetMode) == 0x0628);
static_assert(offsetof(UKV_InfinitScrollPanel, ItemFactoryClass) == 0x0128);
static_assert(offsetof(UKV_InfinitScrollPanel, ScrollDirection) == 0x0130);
static_assert(offsetof(UKV_InfinitScrollPanel, HorizontalAlignment) == 0x013C);
static_assert(offsetof(UKV_InfinitScrollPanel, VerticalAlignment) == 0x013D);
static_assert(offsetof(UKV_InfinitScrollPanel, FactoryObject) == 0x01A0);
static_assert(offsetof(UKV_JigsawPanel, Brush) == 0x0150);
static_assert(offsetof(UKV_MaskBox, MaskTexture) == 0x0170);
static_assert(offsetof(UKV_MaskBox, MaskSize) == 0x0178);
static_assert(offsetof(UKV_MaskBox, MaskHorizontalAlignment) == 0x0180);
static_assert(offsetof(UKV_MaskBox, MaskVerticalAlignment) == 0x0181);
static_assert(offsetof(UKV_MaskBox, MaskTextureParameter) == 0x0188);
static_assert(offsetof(UKV_MaskBox, MaskWeightParameter) == 0x0190);
static_assert(offsetof(UKV_ScaleAdaptor, DesignResolution) == 0x0150);
static_assert(offsetof(UKV_TextBlock, HAlign) == 0x0311);
static_assert(offsetof(UKV_TextBlock, VAlign) == 0x0312);
static_assert(offsetof(UKV_TextBlock, Stretch) == 0x0313);
static_assert(offsetof(UKV_TextBlock, StretchDirection) == 0x0314);
static_assert(offsetof(UKV_WidgetSetting, DefaultButtonPressEvent) == 0x0028);
static_assert(offsetof(UKV_WidgetSetting, DefaultButtonReleaseEvent) == 0x0050);
static_assert(offsetof(UKV_WidgetSetting, DefaultButtonClickEvent) == 0x0078);
static_assert(offsetof(UKV_WidgetSwitcher, AkEventOnSwitch) == 0x0158);

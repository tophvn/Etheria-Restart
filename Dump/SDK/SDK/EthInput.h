
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "GameplayTags.h"
#include "InputCore.h"
#include "SlateCore.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class AEthPlayerController;
class UActionInputBar;
class UActionInputBarIcon;
class UActionInputButton;
class UActionInputContent;
class UActionInputContentSlot;
class UActionInputIcon;
class UActionInputInterface;
class UActionInputLibrary;
class UActionInputShow;
class UActionInputSwitch;
class UActionInputWidget;
class UAxisCacheData;
class UCustomTouchInterface;
class UEthGameViewportClient;
class UEthInputSettings;
class UOnlyPcActionData;
class URichTextBlockActionDecorator;
class UUIActionInput;
class UUIActionRouter;

/// Enum /Script/EthInput.ENavigation
/// Size: 0x01 (1 bytes)
enum class ENavigation : uint8_t
{
	ENavigation__Current                                                             = 0,
	ENavigation__Next                                                                = 1,
	ENavigation__Previous                                                            = 2
};

/// Enum /Script/EthInput.EInputMode
/// Size: 0x01 (1 bytes)
enum class EInputMode : uint8_t
{
	EInputMode__Game                                                                 = 0,
	EInputMode__GameAndUI                                                            = 1,
	EInputMode__UI                                                                   = 2,
	EInputMode__Invalid                                                              = 4
};

/// Enum /Script/EthInput.EGamepadType
/// Size: 0x01 (1 bytes)
enum class EGamepadType : uint8_t
{
	EGamepadType__None                                                               = 0,
	EGamepadType__Xbox                                                               = 1,
	EGamepadType__PS                                                                 = 2,
	EGamepadType__NS                                                                 = 3,
	EGamepadType__Max                                                                = 4
};

/// Enum /Script/EthInput.EInputType
/// Size: 0x01 (1 bytes)
enum class EInputType : uint8_t
{
	EInputType__MouseAndKeyboard                                                     = 0,
	EInputType__Gamepad                                                              = 1,
	EInputType__Touch                                                                = 2,
	EInputType__Max                                                                  = 3
};

/// Enum /Script/EthInput.EActionInputFunction
/// Size: 0x01 (1 bytes)
enum class EActionInputFunction : uint8_t
{
	EActionInputFunction__None                                                       = 0,
	EActionInputFunction__ButtonClick                                                = 1,
	EActionInputFunction__ButtonClickWhenRelease                                     = 2,
	EActionInputFunction__ActionInput                                                = 3,
	EActionInputFunction__NavigationToCurrent                                        = 4,
	EActionInputFunction__NavigationToNext                                           = 5,
	EActionInputFunction__NavigationToPrevious                                       = 6,
	EActionInputFunction__ClearFocus                                                 = 7,
	EActionInputFunction__ActionInputDown                                            = 8,
	EActionInputFunction__ActionInputUp                                              = 9
};

#pragma pack(pop)


static_assert(sizeof(FActionInputBinding) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FActionInputDeco) == 0x0110); // 272 bytes (0x000000 - 0x000110)
static_assert(sizeof(UActionInputButton) == 0x05F8); // 1528 bytes (0x000588 - 0x0005F8)
static_assert(sizeof(UActionInputBar) == 0x0298); // 664 bytes (0x0001F8 - 0x000298)
static_assert(sizeof(UActionInputBarIcon) == 0x02B0); // 688 bytes (0x000280 - 0x0002B0)
static_assert(sizeof(UActionInputContent) == 0x01C8); // 456 bytes (0x000140 - 0x0001C8)
static_assert(sizeof(UActionInputContentSlot) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UActionInputIcon) == 0x0190); // 400 bytes (0x000140 - 0x000190)
static_assert(sizeof(UActionInputLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UActionInputShow) == 0x01B8); // 440 bytes (0x000140 - 0x0001B8)
static_assert(sizeof(UActionInputSwitch) == 0x0168); // 360 bytes (0x000158 - 0x000168)
static_assert(sizeof(UActionInputWidget) == 0x02A8); // 680 bytes (0x000280 - 0x0002A8)
static_assert(sizeof(FCustomTouchInputControl) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(UCustomTouchInterface) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(UEthGameViewportClient) == 0x0378); // 888 bytes (0x000360 - 0x000378)
static_assert(sizeof(UEthInputSettings) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(UAxisCacheData) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UOnlyPcActionData) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(AEthPlayerController) == 0x0750); // 1872 bytes (0x000570 - 0x000750)
static_assert(sizeof(UActionInputInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URichTextBlockActionDecorator) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UUIActionInput) == 0x0170); // 368 bytes (0x000030 - 0x000170)
static_assert(sizeof(UUIActionRouter) == 0x00C8); // 200 bytes (0x000030 - 0x0000C8)
static_assert(sizeof(FKeyIconData) == 0x00F0); // 240 bytes (0x000008 - 0x0000F0)
static_assert(sizeof(FActionInputInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FActionInputRemapData) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FActionInputData) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FActionInputConfig) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(offsetof(FActionInputBinding, ActionTag) == 0x0000);
static_assert(offsetof(FActionInputBinding, OverrideText) == 0x0010);
static_assert(offsetof(FActionInputDeco, Tag) == 0x0000);
static_assert(offsetof(FActionInputDeco, HorizontalAlignment) == 0x0008);
static_assert(offsetof(FActionInputDeco, VerticalAlignment) == 0x0009);
static_assert(offsetof(FActionInputDeco, Offset) == 0x000C);
static_assert(offsetof(FActionInputDeco, Pivot) == 0x001C);
static_assert(offsetof(FActionInputDeco, Brush) == 0x0030);
static_assert(offsetof(UActionInputButton, ActionInputFunction) == 0x0590);
static_assert(offsetof(UActionInputButton, NavigationNextFunction) == 0x0591);
static_assert(offsetof(UActionInputButton, NavigationPreviousFunction) == 0x0592);
static_assert(offsetof(UActionInputButton, FocusByNavigationFunction) == 0x0593);
static_assert(offsetof(UActionInputButton, ActionBindings) == 0x0598);
static_assert(offsetof(UActionInputButton, ActionInputDecos) == 0x05B0);
static_assert(offsetof(UActionInputBar, Font) == 0x0200);
static_assert(offsetof(UActionInputBar, ColorAndOpacity) == 0x0258);
static_assert(offsetof(UActionInputBar, Margin) == 0x0280);
static_assert(offsetof(UActionInputContent, ActionInputFunction) == 0x0148);
static_assert(offsetof(UActionInputContent, NavigationNextFunction) == 0x0149);
static_assert(offsetof(UActionInputContent, NavigationPreviousFunction) == 0x014A);
static_assert(offsetof(UActionInputContent, FocusByNavigationFunction) == 0x014B);
static_assert(offsetof(UActionInputContent, ActionBindings) == 0x0150);
static_assert(offsetof(UActionInputContentSlot, HorizontalAlignment) == 0x0038);
static_assert(offsetof(UActionInputContentSlot, VerticalAlignment) == 0x0039);
static_assert(offsetof(UActionInputContentSlot, Padding) == 0x003C);
static_assert(offsetof(UActionInputIcon, IconPadding) == 0x0140);
static_assert(offsetof(UActionInputIcon, IconHorizontalAlignment) == 0x0150);
static_assert(offsetof(UActionInputIcon, IconVerticalAlignment) == 0x0151);
static_assert(offsetof(UActionInputIcon, ActionTag) == 0x0154);
static_assert(offsetof(UActionInputShow, IconPadding) == 0x0140);
static_assert(offsetof(UActionInputShow, IconHorizontalAlignment) == 0x0150);
static_assert(offsetof(UActionInputShow, IconVerticalAlignment) == 0x0151);
static_assert(offsetof(UActionInputShow, Binding) == 0x0158);
static_assert(offsetof(UActionInputWidget, ActionInputFunction) == 0x0288);
static_assert(offsetof(UActionInputWidget, NavigationNextFunction) == 0x0289);
static_assert(offsetof(UActionInputWidget, NavigationPreviousFunction) == 0x028A);
static_assert(offsetof(UActionInputWidget, FocusByNavigationFunction) == 0x028B);
static_assert(offsetof(UActionInputWidget, ActionBindings) == 0x0290);
static_assert(offsetof(UActionInputWidget, InputMode) == 0x02A2);
static_assert(offsetof(FCustomTouchInputControl, Image1) == 0x0000);
static_assert(offsetof(FCustomTouchInputControl, Image2) == 0x0008);
static_assert(offsetof(FCustomTouchInputControl, Image3) == 0x0010);
static_assert(offsetof(FCustomTouchInputControl, CenterPicSize) == 0x0020);
static_assert(offsetof(FCustomTouchInputControl, Center) == 0x0028);
static_assert(offsetof(FCustomTouchInputControl, VisualSize) == 0x0030);
static_assert(offsetof(FCustomTouchInputControl, ThumbSize) == 0x0038);
static_assert(offsetof(FCustomTouchInputControl, InteractionSize) == 0x0040);
static_assert(offsetof(FCustomTouchInputControl, InputScale) == 0x0048);
static_assert(offsetof(FCustomTouchInputControl, MainInputKey) == 0x0050);
static_assert(offsetof(FCustomTouchInputControl, AltInputKey) == 0x0068);
static_assert(offsetof(UCustomTouchInterface, CustomControls) == 0x0058);
static_assert(offsetof(UEthInputSettings, ActionInputData) == 0x0028);
static_assert(offsetof(UEthInputSettings, ActionInputRemapData) == 0x0050);
static_assert(offsetof(UEthInputSettings, InitVars) == 0x00C8);
static_assert(offsetof(UAxisCacheData, ActionKey) == 0x0028);
static_assert(offsetof(UAxisCacheData, ActionName) == 0x0040);
static_assert(offsetof(UAxisCacheData, GamePadModel) == 0x0054);
static_assert(offsetof(UOnlyPcActionData, ActionKey) == 0x0028);
static_assert(offsetof(UOnlyPcActionData, ActionName) == 0x0040);
static_assert(offsetof(AEthPlayerController, InputModel) == 0x0578);
static_assert(offsetof(AEthPlayerController, GamePadModel) == 0x0579);
static_assert(offsetof(AEthPlayerController, UIActionInput) == 0x05B0);
static_assert(offsetof(AEthPlayerController, WidgetInteractionComponents) == 0x05B8);
static_assert(offsetof(AEthPlayerController, WidgetInteractionComponent) == 0x05C8);
static_assert(offsetof(AEthPlayerController, AxisCacheMap) == 0x05D0);
static_assert(offsetof(AEthPlayerController, InputCastMapOnlyPC) == 0x0620);
static_assert(offsetof(UUIActionInput, ActionInputTable) == 0x0118);
static_assert(offsetof(UUIActionInput, IconTables) == 0x0120);
static_assert(offsetof(FKeyIconData, Key) == 0x0008);
static_assert(offsetof(FKeyIconData, Brush) == 0x0020);
static_assert(offsetof(FActionInputInfo, Keys) == 0x0000);
static_assert(offsetof(FActionInputRemapData, InputType) == 0x0008);
static_assert(offsetof(FActionInputRemapData, RemapInputInfo) == 0x0010);
static_assert(offsetof(FActionInputData, ActionTag) == 0x0008);
static_assert(offsetof(FActionInputData, DisplayName) == 0x0010);
static_assert(offsetof(FActionInputData, GamepadInputInfo) == 0x0028);
static_assert(offsetof(FActionInputData, MouseAndKeyInputInfo) == 0x0038);
static_assert(offsetof(FActionInputData, TouchInputInfo) == 0x0048);
static_assert(offsetof(FActionInputConfig, DisplayName) == 0x0000);
static_assert(offsetof(FActionInputConfig, ActionInputInfoMap) == 0x0020);
static_assert(offsetof(FActionInputConfig, RemapInputInfoMap) == 0x0070);


/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UFontBulkData;
class UFontFaceInterface;
class UFontProviderInterface;
class USlateTypes;
class USlateWidgetStyleAsset;
class USlateWidgetStyleContainerBase;
class USlateWidgetStyleContainerInterface;

/// Enum /Script/SlateCore.EFocusCause
/// Size: 0x01 (1 bytes)
enum class EFocusCause : uint8_t
{
	EFocusCause__Mouse                                                               = 0,
	EFocusCause__Navigation                                                          = 1,
	EFocusCause__SetDirectly                                                         = 2,
	EFocusCause__Cleared                                                             = 3,
	EFocusCause__OtherWidgetLostFocus                                                = 4,
	EFocusCause__WindowActivate                                                      = 5
};

/// Enum /Script/SlateCore.EUINavigation
/// Size: 0x01 (1 bytes)
enum class EUINavigation : uint8_t
{
	EUINavigation__Left                                                              = 0,
	EUINavigation__Right                                                             = 1,
	EUINavigation__Up                                                                = 2,
	EUINavigation__Down                                                              = 3,
	EUINavigation__Next                                                              = 4,
	EUINavigation__Previous                                                          = 5,
	EUINavigation__Num                                                               = 6,
	EUINavigation__Invalid                                                           = 7
};

/// Enum /Script/SlateCore.ECheckBoxState
/// Size: 0x01 (1 bytes)
enum class ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked                                                        = 0,
	ECheckBoxState__Checked                                                          = 1,
	ECheckBoxState__Undetermined                                                     = 2
};

/// Enum /Script/SlateCore.EWidgetClipping
/// Size: 0x01 (1 bytes)
enum class EWidgetClipping : uint8_t
{
	EWidgetClipping__Inherit                                                         = 0,
	EWidgetClipping__ClipToBounds                                                    = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting                                 = 2,
	EWidgetClipping__ClipToBoundsAlways                                              = 3,
	EWidgetClipping__OnDemand                                                        = 4
};

/// Enum /Script/SlateCore.ESlateBrushImageType
/// Size: 0x01 (1 bytes)
enum class ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage                                                    = 0,
	ESlateBrushImageType__FullColor                                                  = 1,
	ESlateBrushImageType__Linear                                                     = 2
};

/// Enum /Script/SlateCore.ESlateBrushMirrorType
/// Size: 0x01 (1 bytes)
enum class ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror                                                  = 0,
	ESlateBrushMirrorType__Horizontal                                                = 1,
	ESlateBrushMirrorType__Vertical                                                  = 2,
	ESlateBrushMirrorType__Both                                                      = 3
};

/// Enum /Script/SlateCore.ESlateBrushTileType
/// Size: 0x01 (1 bytes)
enum class ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile                                                      = 0,
	ESlateBrushTileType__Horizontal                                                  = 1,
	ESlateBrushTileType__Vertical                                                    = 2,
	ESlateBrushTileType__Both                                                        = 3
};

/// Enum /Script/SlateCore.ESlateBrushDrawType
/// Size: 0x01 (1 bytes)
enum class ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType                                                  = 0,
	ESlateBrushDrawType__Box                                                         = 1,
	ESlateBrushDrawType__Border                                                      = 2,
	ESlateBrushDrawType__Image                                                       = 3,
	ESlateBrushDrawType__RoundedBox                                                  = 4
};

/// Enum /Script/SlateCore.ESlateBrushRoundingType
/// Size: 0x01 (1 bytes)
enum class ESlateBrushRoundingType : uint8_t
{
	ESlateBrushRoundingType__FixedRadius                                             = 0,
	ESlateBrushRoundingType__HalfHeightRadius                                        = 1
};

/// Enum /Script/SlateCore.ESlateColorStylingMode
/// Size: 0x01 (1 bytes)
enum class ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified                                       = 0,
	ESlateColorStylingMode__UseColor_Specified_Link                                  = 1,
	ESlateColorStylingMode__UseColor_Foreground                                      = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued                              = 3
};

/// Enum /Script/SlateCore.EUINavigationRule
/// Size: 0x01 (1 bytes)
enum class EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape                                                        = 0,
	EUINavigationRule__Explicit                                                      = 1,
	EUINavigationRule__Wrap                                                          = 2,
	EUINavigationRule__Stop                                                          = 3,
	EUINavigationRule__Custom                                                        = 4,
	EUINavigationRule__CustomBoundary                                                = 5,
	EUINavigationRule__Invalid                                                       = 6
};

/// Enum /Script/SlateCore.EFlowDirectionPreference
/// Size: 0x01 (1 bytes)
enum class EFlowDirectionPreference : uint8_t
{
	EFlowDirectionPreference__Inherit                                                = 0,
	EFlowDirectionPreference__Culture                                                = 1,
	EFlowDirectionPreference__LeftToRight                                            = 2,
	EFlowDirectionPreference__RightToLeft                                            = 3
};

/// Enum /Script/SlateCore.EColorVisionDeficiency
/// Size: 0x01 (1 bytes)
enum class EColorVisionDeficiency : uint8_t
{
	EColorVisionDeficiency__NormalVision                                             = 0,
	EColorVisionDeficiency__Deuteranope                                              = 1,
	EColorVisionDeficiency__Protanope                                                = 2,
	EColorVisionDeficiency__Tritanope                                                = 3
};

/// Enum /Script/SlateCore.ESelectInfo
/// Size: 0x01 (1 bytes)
enum class ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress                                                          = 0,
	ESelectInfo__OnNavigation                                                        = 1,
	ESelectInfo__OnMouseClick                                                        = 2,
	ESelectInfo__Direct                                                              = 3
};

/// Enum /Script/SlateCore.ETextCommit
/// Size: 0x01 (1 bytes)
enum class ETextCommit : uint8_t
{
	ETextCommit__Default                                                             = 0,
	ETextCommit__OnEnter                                                             = 1,
	ETextCommit__OnUserMovedFocus                                                    = 2,
	ETextCommit__OnCleared                                                           = 3
};

/// Enum /Script/SlateCore.ETextShapingMethod
/// Size: 0x01 (1 bytes)
enum class ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto                                                         = 0,
	ETextShapingMethod__KerningOnly                                                  = 1,
	ETextShapingMethod__FullShaping                                                  = 2
};

/// Enum /Script/SlateCore.EMenuPlacement
/// Size: 0x01 (1 bytes)
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor                                                        = 0,
	MenuPlacement_CenteredBelowAnchor                                                = 1,
	MenuPlacement_BelowRightAnchor                                                   = 2,
	MenuPlacement_ComboBox                                                           = 3,
	MenuPlacement_ComboBoxRight                                                      = 4,
	MenuPlacement_MenuRight                                                          = 5,
	MenuPlacement_AboveAnchor                                                        = 6,
	MenuPlacement_CenteredAboveAnchor                                                = 7,
	MenuPlacement_AboveRightAnchor                                                   = 8,
	MenuPlacement_MenuLeft                                                           = 9,
	MenuPlacement_Center                                                             = 10,
	MenuPlacement_RightLeftCenter                                                    = 11,
	MenuPlacement_MatchBottomLeft                                                    = 12
};

/// Enum /Script/SlateCore.EFontLayoutMethod
/// Size: 0x01 (1 bytes)
enum class EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics                                                       = 0,
	EFontLayoutMethod__BoundingBox                                                   = 1
};

/// Enum /Script/SlateCore.EFontLoadingPolicy
/// Size: 0x01 (1 bytes)
enum class EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad                                                     = 0,
	EFontLoadingPolicy__Stream                                                       = 1,
	EFontLoadingPolicy__Inline                                                       = 2
};

/// Enum /Script/SlateCore.EFontHinting
/// Size: 0x01 (1 bytes)
enum class EFontHinting : uint8_t
{
	EFontHinting__Default                                                            = 0,
	EFontHinting__Auto                                                               = 1,
	EFontHinting__AutoLight                                                          = 2,
	EFontHinting__Monochrome                                                         = 3,
	EFontHinting__None                                                               = 4
};

/// Enum /Script/SlateCore.ESlateDebuggingFocusEvent
/// Size: 0x01 (1 bytes)
enum class ESlateDebuggingFocusEvent : uint8_t
{
	ESlateDebuggingFocusEvent__FocusChanging                                         = 0,
	ESlateDebuggingFocusEvent__FocusLost                                             = 1,
	ESlateDebuggingFocusEvent__FocusReceived                                         = 2
};

/// Enum /Script/SlateCore.ESlateDebuggingNavigationMethod
/// Size: 0x01 (1 bytes)
enum class ESlateDebuggingNavigationMethod : uint8_t
{
	ESlateDebuggingNavigationMethod__Unknown                                         = 0,
	ESlateDebuggingNavigationMethod__Explicit                                        = 1,
	ESlateDebuggingNavigationMethod__CustomDelegateBound                             = 2,
	ESlateDebuggingNavigationMethod__CustomDelegateUnbound                           = 3,
	ESlateDebuggingNavigationMethod__NextOrPrevious                                  = 4,
	ESlateDebuggingNavigationMethod__HitTestGrid                                     = 5
};

/// Enum /Script/SlateCore.ESlateDebuggingStateChangeEvent
/// Size: 0x01 (1 bytes)
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
	ESlateDebuggingStateChangeEvent__MouseCaptureGained                              = 0,
	ESlateDebuggingStateChangeEvent__MouseCaptureLost                                = 1
};

/// Enum /Script/SlateCore.ESlateDebuggingInputEvent
/// Size: 0x01 (1 bytes)
enum class ESlateDebuggingInputEvent : uint8_t
{
	ESlateDebuggingInputEvent__MouseMove                                             = 0,
	ESlateDebuggingInputEvent__MouseEnter                                            = 1,
	ESlateDebuggingInputEvent__MouseLeave                                            = 2,
	ESlateDebuggingInputEvent__PreviewMouseButtonDown                                = 3,
	ESlateDebuggingInputEvent__MouseButtonDown                                       = 4,
	ESlateDebuggingInputEvent__MouseButtonUp                                         = 5,
	ESlateDebuggingInputEvent__MouseButtonDoubleClick                                = 6,
	ESlateDebuggingInputEvent__MouseWheel                                            = 7,
	ESlateDebuggingInputEvent__TouchStart                                            = 8,
	ESlateDebuggingInputEvent__TouchEnd                                              = 9,
	ESlateDebuggingInputEvent__TouchForceChanged                                     = 10,
	ESlateDebuggingInputEvent__TouchFirstMove                                        = 11,
	ESlateDebuggingInputEvent__TouchMoved                                            = 12,
	ESlateDebuggingInputEvent__DragDetected                                          = 13,
	ESlateDebuggingInputEvent__DragEnter                                             = 14,
	ESlateDebuggingInputEvent__DragLeave                                             = 15,
	ESlateDebuggingInputEvent__DragOver                                              = 16,
	ESlateDebuggingInputEvent__DragDrop                                              = 17,
	ESlateDebuggingInputEvent__DropMessage                                           = 18,
	ESlateDebuggingInputEvent__PreviewKeyDown                                        = 19,
	ESlateDebuggingInputEvent__KeyDown                                               = 20,
	ESlateDebuggingInputEvent__KeyUp                                                 = 21,
	ESlateDebuggingInputEvent__KeyChar                                               = 22,
	ESlateDebuggingInputEvent__AnalogInput                                           = 23,
	ESlateDebuggingInputEvent__TouchGesture                                          = 24,
	ESlateDebuggingInputEvent__MotionDetected                                        = 25
};

/// Enum /Script/SlateCore.EScrollDirection
/// Size: 0x01 (1 bytes)
enum class EScrollDirection : uint8_t
{
	Scroll_Down                                                                      = 0,
	Scroll_Up                                                                        = 1
};

/// Enum /Script/SlateCore.EOrientation
/// Size: 0x01 (1 bytes)
enum class EOrientation : uint8_t
{
	Orient_Horizontal                                                                = 0,
	Orient_Vertical                                                                  = 1
};

/// Enum /Script/SlateCore.EVerticalAlignment
/// Size: 0x01 (1 bytes)
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                                                                      = 0,
	VAlign_Top                                                                       = 1,
	VAlign_Center                                                                    = 2,
	VAlign_Bottom                                                                    = 3
};

/// Enum /Script/SlateCore.EHorizontalAlignment
/// Size: 0x01 (1 bytes)
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                                                                      = 0,
	HAlign_Left                                                                      = 1,
	HAlign_Center                                                                    = 2,
	HAlign_Right                                                                     = 3
};

/// Enum /Script/SlateCore.ENavigationGenesis
/// Size: 0x01 (1 bytes)
enum class ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard                                                     = 0,
	ENavigationGenesis__Controller                                                   = 1,
	ENavigationGenesis__User                                                         = 2
};

/// Enum /Script/SlateCore.ENavigationSource
/// Size: 0x01 (1 bytes)
enum class ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget                                                 = 0,
	ENavigationSource__WidgetUnderCursor                                             = 1
};

/// Enum /Script/SlateCore.EUINavigationAction
/// Size: 0x01 (1 bytes)
enum class EUINavigationAction : uint8_t
{
	EUINavigationAction__Accept                                                      = 0,
	EUINavigationAction__Back                                                        = 1,
	EUINavigationAction__Num                                                         = 2,
	EUINavigationAction__Invalid                                                     = 3
};

/// Enum /Script/SlateCore.EButtonPressMethod
/// Size: 0x01 (1 bytes)
enum class EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp                                                    = 0,
	EButtonPressMethod__ButtonPress                                                  = 1,
	EButtonPressMethod__ButtonRelease                                                = 2
};

/// Enum /Script/SlateCore.EButtonTouchMethod
/// Size: 0x01 (1 bytes)
enum class EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp                                                    = 0,
	EButtonTouchMethod__Down                                                         = 1,
	EButtonTouchMethod__PreciseTap                                                   = 2
};

/// Enum /Script/SlateCore.EButtonClickMethod
/// Size: 0x01 (1 bytes)
enum class EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp                                                    = 0,
	EButtonClickMethod__MouseDown                                                    = 1,
	EButtonClickMethod__MouseUp                                                      = 2,
	EButtonClickMethod__PreciseClick                                                 = 3
};

/// Enum /Script/SlateCore.ESlateCheckBoxType
/// Size: 0x01 (1 bytes)
enum class ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox                                                     = 0,
	ESlateCheckBoxType__ToggleButton                                                 = 1
};

/// Enum /Script/SlateCore.ESlateParentWindowSearchMethod
/// Size: 0x01 (1 bytes)
enum class ESlateParentWindowSearchMethod : uint8_t
{
	ESlateParentWindowSearchMethod__ActiveWindow                                     = 0,
	ESlateParentWindowSearchMethod__MainWindow                                       = 1
};

/// Enum /Script/SlateCore.EConsumeMouseWheel
/// Size: 0x01 (1 bytes)
enum class EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible                                        = 0,
	EConsumeMouseWheel__Always                                                       = 1,
	EConsumeMouseWheel__Never                                                        = 2
};

#pragma pack(pop)


static_assert(sizeof(USlateWidgetStyleContainerBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UFontBulkData) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UFontFaceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UFontProviderInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USlateTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USlateWidgetStyleAsset) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(USlateWidgetStyleContainerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FInputEvent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPointerEvent) == 0x0070); // 112 bytes (0x000018 - 0x000070)
static_assert(sizeof(FGeometry) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FMargin) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSlateColor) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSlateBrushOutlineSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FSlateBrush) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FCharacterEvent) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FKeyEvent) == 0x0038); // 56 bytes (0x000018 - 0x000038)
static_assert(sizeof(FNavigationEvent) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FAnalogInputEvent) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(FFontOutlineSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSlateFontInfo) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FSlateWidgetStyle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTableRowStyle) == 0x0BC0); // 3008 bytes (0x000008 - 0x000BC0)
static_assert(sizeof(FSlateSound) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FButtonStyle) == 0x03A0); // 928 bytes (0x000008 - 0x0003A0)
static_assert(sizeof(FComboButtonStyle) == 0x0580); // 1408 bytes (0x000008 - 0x000580)
static_assert(sizeof(FComboBoxStyle) == 0x05C0); // 1472 bytes (0x000008 - 0x0005C0)
static_assert(sizeof(FEditableTextStyle) == 0x0300); // 768 bytes (0x000008 - 0x000300)
static_assert(sizeof(FScrollBarStyle) == 0x0760); // 1888 bytes (0x000008 - 0x000760)
static_assert(sizeof(FEditableTextBoxStyle) == 0x0BB0); // 2992 bytes (0x000008 - 0x000BB0)
static_assert(sizeof(FTextBlockStyle) == 0x0360); // 864 bytes (0x000008 - 0x000360)
static_assert(sizeof(FSpinBoxStyle) == 0x0460); // 1120 bytes (0x000008 - 0x000460)
static_assert(sizeof(FCheckBoxStyle) == 0x0810); // 2064 bytes (0x000008 - 0x000810)
static_assert(sizeof(FScrollBoxStyle) == 0x0350); // 848 bytes (0x000008 - 0x000350)
static_assert(sizeof(FFontData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FTypefaceEntry) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FTypeface) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCompositeFallbackFont) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCompositeSubFont) == 0x0038); // 56 bytes (0x000018 - 0x000038)
static_assert(sizeof(FCompositeFont) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMotionEvent) == 0x0048); // 72 bytes (0x000018 - 0x000048)
static_assert(sizeof(FCaptureLostEvent) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFocusEvent) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FWindowStyle) == 0x1800); // 6144 bytes (0x000008 - 0x001800)
static_assert(sizeof(FScrollBorderStyle) == 0x01B0); // 432 bytes (0x000008 - 0x0001B0)
static_assert(sizeof(FDockTabStyle) == 0x0A70); // 2672 bytes (0x000008 - 0x000A70)
static_assert(sizeof(FTableColumnHeaderStyle) == 0x0760); // 1888 bytes (0x000008 - 0x000760)
static_assert(sizeof(FSplitterStyle) == 0x01B0); // 432 bytes (0x000008 - 0x0001B0)
static_assert(sizeof(FHeaderRowStyle) == 0x1180); // 4480 bytes (0x000008 - 0x001180)
static_assert(sizeof(FInlineTextImageStyle) == 0x00F0); // 240 bytes (0x000008 - 0x0000F0)
static_assert(sizeof(FSliderStyle) == 0x0500); // 1280 bytes (0x000008 - 0x000500)
static_assert(sizeof(FVolumeControlStyle) == 0x0920); // 2336 bytes (0x000008 - 0x000920)
static_assert(sizeof(FSearchBoxStyle) == 0x0F80); // 3968 bytes (0x000008 - 0x000F80)
static_assert(sizeof(FExpandableAreaStyle) == 0x01C0); // 448 bytes (0x000008 - 0x0001C0)
static_assert(sizeof(FProgressBarStyle) == 0x0280); // 640 bytes (0x000008 - 0x000280)
static_assert(sizeof(FInlineEditableTextBlockStyle) == 0x0F20); // 3872 bytes (0x000008 - 0x000F20)
static_assert(sizeof(FHyperlinkStyle) == 0x0720); // 1824 bytes (0x000008 - 0x000720)
static_assert(offsetof(USlateWidgetStyleAsset, CustomStyle) == 0x0028);
static_assert(offsetof(FSlateColor, SpecifiedColor) == 0x0000);
static_assert(offsetof(FSlateColor, ColorUseRule) == 0x0010);
static_assert(offsetof(FSlateBrushOutlineSettings, CornerRadii) == 0x0000);
static_assert(offsetof(FSlateBrushOutlineSettings, Color) == 0x0010);
static_assert(offsetof(FSlateBrushOutlineSettings, RoundingType) == 0x003C);
static_assert(offsetof(FSlateBrush, ImageSize) == 0x0010);
static_assert(offsetof(FSlateBrush, Margin) == 0x0018);
static_assert(offsetof(FSlateBrush, TintColor) == 0x0028);
static_assert(offsetof(FSlateBrush, OutlineSettings) == 0x0050);
static_assert(offsetof(FSlateBrush, ResourceObject) == 0x0090);
static_assert(offsetof(FSlateBrush, ResourceName) == 0x0098);
static_assert(offsetof(FSlateBrush, UVRegion) == 0x00A0);
static_assert(offsetof(FSlateBrush, DrawAs) == 0x00B4);
static_assert(offsetof(FSlateBrush, Tiling) == 0x00B5);
static_assert(offsetof(FSlateBrush, Mirroring) == 0x00B6);
static_assert(offsetof(FSlateBrush, ImageType) == 0x00B7);
static_assert(offsetof(FFontOutlineSettings, OutlineMaterial) == 0x0008);
static_assert(offsetof(FFontOutlineSettings, OutlineColor) == 0x0010);
static_assert(offsetof(FSlateFontInfo, FontObject) == 0x0000);
static_assert(offsetof(FSlateFontInfo, FontMaterial) == 0x0008);
static_assert(offsetof(FSlateFontInfo, OutlineSettings) == 0x0010);
static_assert(offsetof(FSlateFontInfo, TypefaceFontName) == 0x0040);
static_assert(offsetof(FTableRowStyle, SelectorFocusedBrush) == 0x0010);
static_assert(offsetof(FTableRowStyle, ActiveHoveredBrush) == 0x00E0);
static_assert(offsetof(FTableRowStyle, ActiveBrush) == 0x01B0);
static_assert(offsetof(FTableRowStyle, InactiveHoveredBrush) == 0x0280);
static_assert(offsetof(FTableRowStyle, InactiveBrush) == 0x0350);
static_assert(offsetof(FTableRowStyle, EvenRowBackgroundHoveredBrush) == 0x0420);
static_assert(offsetof(FTableRowStyle, EvenRowBackgroundBrush) == 0x04F0);
static_assert(offsetof(FTableRowStyle, OddRowBackgroundHoveredBrush) == 0x05C0);
static_assert(offsetof(FTableRowStyle, OddRowBackgroundBrush) == 0x0690);
static_assert(offsetof(FTableRowStyle, TextColor) == 0x0760);
static_assert(offsetof(FTableRowStyle, SelectedTextColor) == 0x0788);
static_assert(offsetof(FTableRowStyle, DropIndicator_Above) == 0x07B0);
static_assert(offsetof(FTableRowStyle, DropIndicator_Onto) == 0x0880);
static_assert(offsetof(FTableRowStyle, DropIndicator_Below) == 0x0950);
static_assert(offsetof(FTableRowStyle, ActiveHighlightedBrush) == 0x0A20);
static_assert(offsetof(FTableRowStyle, InactiveHighlightedBrush) == 0x0AF0);
static_assert(offsetof(FSlateSound, ResourceObject) == 0x0000);
static_assert(offsetof(FButtonStyle, Normal) == 0x0010);
static_assert(offsetof(FButtonStyle, Hovered) == 0x00E0);
static_assert(offsetof(FButtonStyle, Pressed) == 0x01B0);
static_assert(offsetof(FButtonStyle, Disabled) == 0x0280);
static_assert(offsetof(FButtonStyle, NormalPadding) == 0x0350);
static_assert(offsetof(FButtonStyle, PressedPadding) == 0x0360);
static_assert(offsetof(FButtonStyle, PressedSlateSound) == 0x0370);
static_assert(offsetof(FButtonStyle, HoveredSlateSound) == 0x0388);
static_assert(offsetof(FComboButtonStyle, ButtonStyle) == 0x0010);
static_assert(offsetof(FComboButtonStyle, DownArrowImage) == 0x03B0);
static_assert(offsetof(FComboButtonStyle, ShadowOffset) == 0x0480);
static_assert(offsetof(FComboButtonStyle, ShadowColorAndOpacity) == 0x0488);
static_assert(offsetof(FComboButtonStyle, MenuBorderBrush) == 0x04A0);
static_assert(offsetof(FComboButtonStyle, MenuBorderPadding) == 0x0570);
static_assert(offsetof(FComboBoxStyle, ComboButtonStyle) == 0x0010);
static_assert(offsetof(FComboBoxStyle, PressedSlateSound) == 0x0590);
static_assert(offsetof(FComboBoxStyle, SelectionChangeSlateSound) == 0x05A8);
static_assert(offsetof(FEditableTextStyle, Font) == 0x0008);
static_assert(offsetof(FEditableTextStyle, ColorAndOpacity) == 0x0060);
static_assert(offsetof(FEditableTextStyle, BackgroundImageSelected) == 0x0090);
static_assert(offsetof(FEditableTextStyle, BackgroundImageComposing) == 0x0160);
static_assert(offsetof(FEditableTextStyle, CaretImage) == 0x0230);
static_assert(offsetof(FScrollBarStyle, HorizontalBackgroundImage) == 0x0010);
static_assert(offsetof(FScrollBarStyle, VerticalBackgroundImage) == 0x00E0);
static_assert(offsetof(FScrollBarStyle, VerticalTopSlotImage) == 0x01B0);
static_assert(offsetof(FScrollBarStyle, HorizontalTopSlotImage) == 0x0280);
static_assert(offsetof(FScrollBarStyle, VerticalBottomSlotImage) == 0x0350);
static_assert(offsetof(FScrollBarStyle, HorizontalBottomSlotImage) == 0x0420);
static_assert(offsetof(FScrollBarStyle, NormalThumbImage) == 0x04F0);
static_assert(offsetof(FScrollBarStyle, HoveredThumbImage) == 0x05C0);
static_assert(offsetof(FScrollBarStyle, DraggedThumbImage) == 0x0690);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageNormal) == 0x0010);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageHovered) == 0x00E0);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageFocused) == 0x01B0);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageReadOnly) == 0x0280);
static_assert(offsetof(FEditableTextBoxStyle, Padding) == 0x0350);
static_assert(offsetof(FEditableTextBoxStyle, Font) == 0x0360);
static_assert(offsetof(FEditableTextBoxStyle, ForegroundColor) == 0x03B8);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundColor) == 0x03E0);
static_assert(offsetof(FEditableTextBoxStyle, ReadOnlyForegroundColor) == 0x0408);
static_assert(offsetof(FEditableTextBoxStyle, HScrollBarPadding) == 0x0430);
static_assert(offsetof(FEditableTextBoxStyle, VScrollBarPadding) == 0x0440);
static_assert(offsetof(FEditableTextBoxStyle, ScrollBarStyle) == 0x0450);
static_assert(offsetof(FTextBlockStyle, Font) == 0x0008);
static_assert(offsetof(FTextBlockStyle, ColorAndOpacity) == 0x0060);
static_assert(offsetof(FTextBlockStyle, ShadowOffset) == 0x0088);
static_assert(offsetof(FTextBlockStyle, ShadowColorAndOpacity) == 0x0090);
static_assert(offsetof(FTextBlockStyle, SelectedBackgroundColor) == 0x00A0);
static_assert(offsetof(FTextBlockStyle, HighlightColor) == 0x00C8);
static_assert(offsetof(FTextBlockStyle, HighlightShape) == 0x00E0);
static_assert(offsetof(FTextBlockStyle, StrikeBrush) == 0x01B0);
static_assert(offsetof(FTextBlockStyle, UnderlineBrush) == 0x0280);
static_assert(offsetof(FTextBlockStyle, UnderlineOffset) == 0x0350);
static_assert(offsetof(FSpinBoxStyle, BackgroundBrush) == 0x0010);
static_assert(offsetof(FSpinBoxStyle, HoveredBackgroundBrush) == 0x00E0);
static_assert(offsetof(FSpinBoxStyle, ActiveFillBrush) == 0x01B0);
static_assert(offsetof(FSpinBoxStyle, InactiveFillBrush) == 0x0280);
static_assert(offsetof(FSpinBoxStyle, ArrowsImage) == 0x0350);
static_assert(offsetof(FSpinBoxStyle, ForegroundColor) == 0x0420);
static_assert(offsetof(FSpinBoxStyle, TextPadding) == 0x0448);
static_assert(offsetof(FCheckBoxStyle, CheckBoxType) == 0x0008);
static_assert(offsetof(FCheckBoxStyle, UncheckedImage) == 0x0010);
static_assert(offsetof(FCheckBoxStyle, UncheckedHoveredImage) == 0x00E0);
static_assert(offsetof(FCheckBoxStyle, UncheckedPressedImage) == 0x01B0);
static_assert(offsetof(FCheckBoxStyle, CheckedImage) == 0x0280);
static_assert(offsetof(FCheckBoxStyle, CheckedHoveredImage) == 0x0350);
static_assert(offsetof(FCheckBoxStyle, CheckedPressedImage) == 0x0420);
static_assert(offsetof(FCheckBoxStyle, UndeterminedImage) == 0x04F0);
static_assert(offsetof(FCheckBoxStyle, UndeterminedHoveredImage) == 0x05C0);
static_assert(offsetof(FCheckBoxStyle, UndeterminedPressedImage) == 0x0690);
static_assert(offsetof(FCheckBoxStyle, Padding) == 0x0760);
static_assert(offsetof(FCheckBoxStyle, ForegroundColor) == 0x0770);
static_assert(offsetof(FCheckBoxStyle, BorderBackgroundColor) == 0x0798);
static_assert(offsetof(FCheckBoxStyle, CheckedSlateSound) == 0x07C0);
static_assert(offsetof(FCheckBoxStyle, UncheckedSlateSound) == 0x07D8);
static_assert(offsetof(FCheckBoxStyle, HoveredSlateSound) == 0x07F0);
static_assert(offsetof(FScrollBoxStyle, TopShadowBrush) == 0x0010);
static_assert(offsetof(FScrollBoxStyle, BottomShadowBrush) == 0x00E0);
static_assert(offsetof(FScrollBoxStyle, LeftShadowBrush) == 0x01B0);
static_assert(offsetof(FScrollBoxStyle, RightShadowBrush) == 0x0280);
static_assert(offsetof(FFontData, FontFilename) == 0x0000);
static_assert(offsetof(FFontData, Hinting) == 0x0010);
static_assert(offsetof(FFontData, LoadingPolicy) == 0x0011);
static_assert(offsetof(FFontData, FontFaceAsset) == 0x0018);
static_assert(offsetof(FTypefaceEntry, Name) == 0x0000);
static_assert(offsetof(FTypefaceEntry, Font) == 0x0008);
static_assert(offsetof(FTypeface, Fonts) == 0x0000);
static_assert(offsetof(FCompositeFallbackFont, Typeface) == 0x0000);
static_assert(offsetof(FCompositeSubFont, CharacterRanges) == 0x0018);
static_assert(offsetof(FCompositeSubFont, Cultures) == 0x0028);
static_assert(offsetof(FCompositeFont, DefaultTypeface) == 0x0000);
static_assert(offsetof(FCompositeFont, FallbackTypeface) == 0x0010);
static_assert(offsetof(FCompositeFont, SubTypefaces) == 0x0028);
static_assert(offsetof(FWindowStyle, MinimizeButtonStyle) == 0x0010);
static_assert(offsetof(FWindowStyle, MaximizeButtonStyle) == 0x03B0);
static_assert(offsetof(FWindowStyle, RestoreButtonStyle) == 0x0750);
static_assert(offsetof(FWindowStyle, CloseButtonStyle) == 0x0AF0);
static_assert(offsetof(FWindowStyle, TitleTextStyle) == 0x0E90);
static_assert(offsetof(FWindowStyle, ActiveTitleBrush) == 0x11F0);
static_assert(offsetof(FWindowStyle, InactiveTitleBrush) == 0x12C0);
static_assert(offsetof(FWindowStyle, FlashTitleBrush) == 0x1390);
static_assert(offsetof(FWindowStyle, BackgroundColor) == 0x1460);
static_assert(offsetof(FWindowStyle, OutlineBrush) == 0x1490);
static_assert(offsetof(FWindowStyle, OutlineColor) == 0x1560);
static_assert(offsetof(FWindowStyle, BorderBrush) == 0x1590);
static_assert(offsetof(FWindowStyle, BackgroundBrush) == 0x1660);
static_assert(offsetof(FWindowStyle, ChildBackgroundBrush) == 0x1730);
static_assert(offsetof(FScrollBorderStyle, TopShadowBrush) == 0x0010);
static_assert(offsetof(FScrollBorderStyle, BottomShadowBrush) == 0x00E0);
static_assert(offsetof(FDockTabStyle, CloseButtonStyle) == 0x0010);
static_assert(offsetof(FDockTabStyle, NormalBrush) == 0x03B0);
static_assert(offsetof(FDockTabStyle, ActiveBrush) == 0x0480);
static_assert(offsetof(FDockTabStyle, ColorOverlayTabBrush) == 0x0550);
static_assert(offsetof(FDockTabStyle, ColorOverlayIconBrush) == 0x0620);
static_assert(offsetof(FDockTabStyle, ForegroundBrush) == 0x06F0);
static_assert(offsetof(FDockTabStyle, HoveredBrush) == 0x07C0);
static_assert(offsetof(FDockTabStyle, ContentAreaBrush) == 0x0890);
static_assert(offsetof(FDockTabStyle, TabWellBrush) == 0x0960);
static_assert(offsetof(FDockTabStyle, TabPadding) == 0x0A30);
static_assert(offsetof(FDockTabStyle, FlashColor) == 0x0A48);
static_assert(offsetof(FTableColumnHeaderStyle, SortPrimaryAscendingImage) == 0x0010);
static_assert(offsetof(FTableColumnHeaderStyle, SortPrimaryDescendingImage) == 0x00E0);
static_assert(offsetof(FTableColumnHeaderStyle, SortSecondaryAscendingImage) == 0x01B0);
static_assert(offsetof(FTableColumnHeaderStyle, SortSecondaryDescendingImage) == 0x0280);
static_assert(offsetof(FTableColumnHeaderStyle, NormalBrush) == 0x0350);
static_assert(offsetof(FTableColumnHeaderStyle, HoveredBrush) == 0x0420);
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownImage) == 0x04F0);
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownNormalBorderBrush) == 0x05C0);
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownHoveredBorderBrush) == 0x0690);
static_assert(offsetof(FSplitterStyle, HandleNormalBrush) == 0x0010);
static_assert(offsetof(FSplitterStyle, HandleHighlightBrush) == 0x00E0);
static_assert(offsetof(FHeaderRowStyle, ColumnStyle) == 0x0010);
static_assert(offsetof(FHeaderRowStyle, LastColumnStyle) == 0x0770);
static_assert(offsetof(FHeaderRowStyle, ColumnSplitterStyle) == 0x0ED0);
static_assert(offsetof(FHeaderRowStyle, BackgroundBrush) == 0x1080);
static_assert(offsetof(FHeaderRowStyle, ForegroundColor) == 0x1150);
static_assert(offsetof(FInlineTextImageStyle, Image) == 0x0010);
static_assert(offsetof(FSliderStyle, NormalBarImage) == 0x0010);
static_assert(offsetof(FSliderStyle, HoveredBarImage) == 0x00E0);
static_assert(offsetof(FSliderStyle, DisabledBarImage) == 0x01B0);
static_assert(offsetof(FSliderStyle, NormalThumbImage) == 0x0280);
static_assert(offsetof(FSliderStyle, HoveredThumbImage) == 0x0350);
static_assert(offsetof(FSliderStyle, DisabledThumbImage) == 0x0420);
static_assert(offsetof(FVolumeControlStyle, SliderStyle) == 0x0010);
static_assert(offsetof(FVolumeControlStyle, HighVolumeImage) == 0x0510);
static_assert(offsetof(FVolumeControlStyle, MidVolumeImage) == 0x05E0);
static_assert(offsetof(FVolumeControlStyle, LowVolumeImage) == 0x06B0);
static_assert(offsetof(FVolumeControlStyle, NoVolumeImage) == 0x0780);
static_assert(offsetof(FVolumeControlStyle, MutedImage) == 0x0850);
static_assert(offsetof(FSearchBoxStyle, TextBoxStyle) == 0x0010);
static_assert(offsetof(FSearchBoxStyle, ActiveFontInfo) == 0x0BC0);
static_assert(offsetof(FSearchBoxStyle, UpArrowImage) == 0x0C20);
static_assert(offsetof(FSearchBoxStyle, DownArrowImage) == 0x0CF0);
static_assert(offsetof(FSearchBoxStyle, GlassImage) == 0x0DC0);
static_assert(offsetof(FSearchBoxStyle, ClearImage) == 0x0E90);
static_assert(offsetof(FSearchBoxStyle, ImagePadding) == 0x0F60);
static_assert(offsetof(FExpandableAreaStyle, CollapsedImage) == 0x0010);
static_assert(offsetof(FExpandableAreaStyle, ExpandedImage) == 0x00E0);
static_assert(offsetof(FProgressBarStyle, BackgroundImage) == 0x0010);
static_assert(offsetof(FProgressBarStyle, FillImage) == 0x00E0);
static_assert(offsetof(FProgressBarStyle, MarqueeImage) == 0x01B0);
static_assert(offsetof(FInlineEditableTextBlockStyle, EditableTextBoxStyle) == 0x0010);
static_assert(offsetof(FInlineEditableTextBlockStyle, TextStyle) == 0x0BC0);
static_assert(offsetof(FHyperlinkStyle, UnderlineStyle) == 0x0010);
static_assert(offsetof(FHyperlinkStyle, TextStyle) == 0x03B0);
static_assert(offsetof(FHyperlinkStyle, Padding) == 0x0710);

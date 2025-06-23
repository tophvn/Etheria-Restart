
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/SlateCore.SlateWidgetStyleContainerBase
/// Size: 0x0008 (0x000028 - 0x000030)
class USlateWidgetStyleContainerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/SlateCore.FontBulkData
/// Size: 0x0050 (0x000028 - 0x000078)
class UFontBulkData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/SlateCore.FontFaceInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFontFaceInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SlateCore.FontProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFontProviderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SlateCore.SlateTypes
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateTypes : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SlateCore.SlateWidgetStyleAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class USlateWidgetStyleAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class USlateWidgetStyleContainerBase*)     CustomStyle                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateWidgetStyleContainerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/SlateCore.InputEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FInputEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/SlateCore.PointerEvent
/// Size: 0x0058 (0x000018 - 0x000070)
class FPointerEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/SlateCore.Geometry
/// Size: 0x0070 (0x000000 - 0x000070)
class FGeometry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/SlateCore.Margin
/// Size: 0x0010 (0x000000 - 0x000010)
class FMargin : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Left                                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Top                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Right                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Bottom                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/SlateCore.SlateColor
/// Size: 0x0028 (0x000000 - 0x000028)
class FSlateColor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FLinearColor)                              SpecifiedColor                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TEnumAsByte<ESlateColorStylingMode>)       ColorUseRule                                                OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/SlateCore.SlateBrushOutlineSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FSlateBrushOutlineSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector4)                                  CornerRadii                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FSlateColor)                               Color                                                       OFFSET(getStruct<T>, {0x10, 40, 0, 0})
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x38, 4, 0, 0})
	CMember(TEnumAsByte<ESlateBrushRoundingType>)      RoundingType                                                OFFSET(get<T>, {0x3C, 1, 0, 0})
	DMember(bool)                                      bUseBrushTransparency                                       OFFSET(get<bool>, {0x3D, 1, 0, 0})
};

/// Struct /Script/SlateCore.SlateBrush
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FSlateBrush : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FVector2D)                                 ImageSize                                                   OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FSlateColor)                               TintColor                                                   OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FSlateBrushOutlineSettings)                OutlineSettings                                             OFFSET(getStruct<T>, {0x50, 64, 0, 0})
	CMember(class UObject*)                            ResourceObject                                              OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FName)                                     ResourceName                                                OFFSET(getStruct<T>, {0x98, 8, 0, 0})
	SMember(FBox2D)                                    UVRegion                                                    OFFSET(getStruct<T>, {0xA0, 20, 0, 0})
	CMember(TEnumAsByte<ESlateBrushDrawType>)          DrawAs                                                      OFFSET(get<T>, {0xB4, 1, 0, 0})
	CMember(TEnumAsByte<ESlateBrushTileType>)          Tiling                                                      OFFSET(get<T>, {0xB5, 1, 0, 0})
	CMember(TEnumAsByte<ESlateBrushMirrorType>)        Mirroring                                                   OFFSET(get<T>, {0xB6, 1, 0, 0})
	CMember(TEnumAsByte<ESlateBrushImageType>)         ImageType                                                   OFFSET(get<T>, {0xB7, 1, 0, 0})
	DMember(bool)                                      bIsDynamicallyLoaded                                        OFFSET(get<bool>, {0xC8, 1, 1, 0})
	DMember(bool)                                      bHasUObject                                                 OFFSET(get<bool>, {0xC8, 1, 1, 1})
};

/// Struct /Script/SlateCore.CharacterEvent
/// Size: 0x0008 (0x000018 - 0x000020)
class FCharacterEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/SlateCore.KeyEvent
/// Size: 0x0020 (0x000018 - 0x000038)
class FKeyEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/SlateCore.NavigationEvent
/// Size: 0x0008 (0x000018 - 0x000020)
class FNavigationEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/SlateCore.AnalogInputEvent
/// Size: 0x0008 (0x000038 - 0x000040)
class FAnalogInputEvent : public FKeyEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/SlateCore.FontOutlineSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FFontOutlineSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   OutlineSize                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bSeparateFillAlpha                                          OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bApplyOutlineToDropShadows                                  OFFSET(get<bool>, {0x5, 1, 0, 0})
	CMember(class UObject*)                            OutlineMaterial                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FLinearColor)                              OutlineColor                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/SlateCore.SlateFontInfo
/// Size: 0x0058 (0x000000 - 0x000058)
class FSlateFontInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UObject*)                            FontObject                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UObject*)                            FontMaterial                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FFontOutlineSettings)                      OutlineSettings                                             OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FName)                                     TypefaceFontName                                            OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	DMember(int32_t)                                   Size                                                        OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   LetterSpacing                                               OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
};

/// Struct /Script/SlateCore.SlateWidgetStyle
/// Size: 0x0008 (0x000000 - 0x000008)
class FSlateWidgetStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SlateCore.TableRowStyle
/// Size: 0x0BB8 (0x000008 - 0x000BC0)
class FTableRowStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3008;

public:
	SMember(FSlateBrush)                               SelectorFocusedBrush                                        OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FSlateBrush)                               ActiveHoveredBrush                                          OFFSET(getStruct<T>, {0xE0, 208, 0, 0})
	SMember(FSlateBrush)                               ActiveBrush                                                 OFFSET(getStruct<T>, {0x1B0, 208, 0, 0})
	SMember(FSlateBrush)                               InactiveHoveredBrush                                        OFFSET(getStruct<T>, {0x280, 208, 0, 0})
	SMember(FSlateBrush)                               InactiveBrush                                               OFFSET(getStruct<T>, {0x350, 208, 0, 0})
	SMember(FSlateBrush)                               EvenRowBackgroundHoveredBrush                               OFFSET(getStruct<T>, {0x420, 208, 0, 0})
	SMember(FSlateBrush)                               EvenRowBackgroundBrush                                      OFFSET(getStruct<T>, {0x4F0, 208, 0, 0})
	SMember(FSlateBrush)                               OddRowBackgroundHoveredBrush                                OFFSET(getStruct<T>, {0x5C0, 208, 0, 0})
	SMember(FSlateBrush)                               OddRowBackgroundBrush                                       OFFSET(getStruct<T>, {0x690, 208, 0, 0})
	SMember(FSlateColor)                               TextColor                                                   OFFSET(getStruct<T>, {0x760, 40, 0, 0})
	SMember(FSlateColor)                               SelectedTextColor                                           OFFSET(getStruct<T>, {0x788, 40, 0, 0})
	SMember(FSlateBrush)                               DropIndicator_Above                                         OFFSET(getStruct<T>, {0x7B0, 208, 0, 0})
	SMember(FSlateBrush)                               DropIndicator_Onto                                          OFFSET(getStruct<T>, {0x880, 208, 0, 0})
	SMember(FSlateBrush)                               DropIndicator_Below                                         OFFSET(getStruct<T>, {0x950, 208, 0, 0})
	SMember(FSlateBrush)                               ActiveHighlightedBrush                                      OFFSET(getStruct<T>, {0xA20, 208, 0, 0})
	SMember(FSlateBrush)                               InactiveHighlightedBrush                                    OFFSET(getStruct<T>, {0xAF0, 208, 0, 0})
};

/// Struct /Script/SlateCore.SlateSound
/// Size: 0x0018 (0x000000 - 0x000018)
class FSlateSound : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UObject*)                            ResourceObject                                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/SlateCore.ButtonStyle
/// Size: 0x0398 (0x000008 - 0x0003A0)
class FButtonStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	SMember(FSlateBrush)                               Normal                                                      OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FSlateBrush)                               Hovered                                                     OFFSET(getStruct<T>, {0xE0, 208, 0, 0})
	SMember(FSlateBrush)                               Pressed                                                     OFFSET(getStruct<T>, {0x1B0, 208, 0, 0})
	SMember(FSlateBrush)                               Disabled                                                    OFFSET(getStruct<T>, {0x280, 208, 0, 0})
	SMember(FMargin)                                   NormalPadding                                               OFFSET(getStruct<T>, {0x350, 16, 0, 0})
	SMember(FMargin)                                   PressedPadding                                              OFFSET(getStruct<T>, {0x360, 16, 0, 0})
	SMember(FSlateSound)                               PressedSlateSound                                           OFFSET(getStruct<T>, {0x370, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSound                                           OFFSET(getStruct<T>, {0x388, 24, 0, 0})
};

/// Struct /Script/SlateCore.ComboButtonStyle
/// Size: 0x0578 (0x000008 - 0x000580)
class FComboButtonStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	SMember(FButtonStyle)                              ButtonStyle                                                 OFFSET(getStruct<T>, {0x10, 928, 0, 0})
	SMember(FSlateBrush)                               DownArrowImage                                              OFFSET(getStruct<T>, {0x3B0, 208, 0, 0})
	SMember(FVector2D)                                 ShadowOffset                                                OFFSET(getStruct<T>, {0x480, 8, 0, 0})
	SMember(FLinearColor)                              ShadowColorAndOpacity                                       OFFSET(getStruct<T>, {0x488, 16, 0, 0})
	SMember(FSlateBrush)                               MenuBorderBrush                                             OFFSET(getStruct<T>, {0x4A0, 208, 0, 0})
	SMember(FMargin)                                   MenuBorderPadding                                           OFFSET(getStruct<T>, {0x570, 16, 0, 0})
};

/// Struct /Script/SlateCore.ComboBoxStyle
/// Size: 0x05B8 (0x000008 - 0x0005C0)
class FComboBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	SMember(FComboButtonStyle)                         ComboButtonStyle                                            OFFSET(getStruct<T>, {0x10, 1408, 0, 0})
	SMember(FSlateSound)                               PressedSlateSound                                           OFFSET(getStruct<T>, {0x590, 24, 0, 0})
	SMember(FSlateSound)                               SelectionChangeSlateSound                                   OFFSET(getStruct<T>, {0x5A8, 24, 0, 0})
};

/// Struct /Script/SlateCore.EditableTextStyle
/// Size: 0x02F8 (0x000008 - 0x000300)
class FEditableTextStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x8, 88, 0, 0})
	SMember(FSlateColor)                               ColorAndOpacity                                             OFFSET(getStruct<T>, {0x60, 40, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageSelected                                     OFFSET(getStruct<T>, {0x90, 208, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageComposing                                    OFFSET(getStruct<T>, {0x160, 208, 0, 0})
	SMember(FSlateBrush)                               CaretImage                                                  OFFSET(getStruct<T>, {0x230, 208, 0, 0})
};

/// Struct /Script/SlateCore.ScrollBarStyle
/// Size: 0x0758 (0x000008 - 0x000760)
class FScrollBarStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1888;

public:
	SMember(FSlateBrush)                               HorizontalBackgroundImage                                   OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FSlateBrush)                               VerticalBackgroundImage                                     OFFSET(getStruct<T>, {0xE0, 208, 0, 0})
	SMember(FSlateBrush)                               VerticalTopSlotImage                                        OFFSET(getStruct<T>, {0x1B0, 208, 0, 0})
	SMember(FSlateBrush)                               HorizontalTopSlotImage                                      OFFSET(getStruct<T>, {0x280, 208, 0, 0})
	SMember(FSlateBrush)                               VerticalBottomSlotImage                                     OFFSET(getStruct<T>, {0x350, 208, 0, 0})
	SMember(FSlateBrush)                               HorizontalBottomSlotImage                                   OFFSET(getStruct<T>, {0x420, 208, 0, 0})
	SMember(FSlateBrush)                               NormalThumbImage                                            OFFSET(getStruct<T>, {0x4F0, 208, 0, 0})
	SMember(FSlateBrush)                               HoveredThumbImage                                           OFFSET(getStruct<T>, {0x5C0, 208, 0, 0})
	SMember(FSlateBrush)                               DraggedThumbImage                                           OFFSET(getStruct<T>, {0x690, 208, 0, 0})
};

/// Struct /Script/SlateCore.EditableTextBoxStyle
/// Size: 0x0BA8 (0x000008 - 0x000BB0)
class FEditableTextBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2992;

public:
	SMember(FSlateBrush)                               BackgroundImageNormal                                       OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageHovered                                      OFFSET(getStruct<T>, {0xE0, 208, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageFocused                                      OFFSET(getStruct<T>, {0x1B0, 208, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageReadOnly                                     OFFSET(getStruct<T>, {0x280, 208, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x350, 16, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x360, 88, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x3B8, 40, 0, 0})
	SMember(FSlateColor)                               BackgroundColor                                             OFFSET(getStruct<T>, {0x3E0, 40, 0, 0})
	SMember(FSlateColor)                               ReadOnlyForegroundColor                                     OFFSET(getStruct<T>, {0x408, 40, 0, 0})
	SMember(FMargin)                                   HScrollBarPadding                                           OFFSET(getStruct<T>, {0x430, 16, 0, 0})
	SMember(FMargin)                                   VScrollBarPadding                                           OFFSET(getStruct<T>, {0x440, 16, 0, 0})
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              OFFSET(getStruct<T>, {0x450, 1888, 0, 0})
};

/// Struct /Script/SlateCore.TextBlockStyle
/// Size: 0x0358 (0x000008 - 0x000360)
class FTextBlockStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x8, 88, 0, 0})
	SMember(FSlateColor)                               ColorAndOpacity                                             OFFSET(getStruct<T>, {0x60, 40, 0, 0})
	SMember(FVector2D)                                 ShadowOffset                                                OFFSET(getStruct<T>, {0x88, 8, 0, 0})
	SMember(FLinearColor)                              ShadowColorAndOpacity                                       OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FSlateColor)                               SelectedBackgroundColor                                     OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FLinearColor)                              HighlightColor                                              OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FSlateBrush)                               HighlightShape                                              OFFSET(getStruct<T>, {0xE0, 208, 0, 0})
	SMember(FSlateBrush)                               StrikeBrush                                                 OFFSET(getStruct<T>, {0x1B0, 208, 0, 0})
	SMember(FSlateBrush)                               UnderlineBrush                                              OFFSET(getStruct<T>, {0x280, 208, 0, 0})
	SMember(FVector2D)                                 UnderlineOffset                                             OFFSET(getStruct<T>, {0x350, 8, 0, 0})
};

/// Struct /Script/SlateCore.SpinBoxStyle
/// Size: 0x0458 (0x000008 - 0x000460)
class FSpinBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FSlateBrush)                               HoveredBackgroundBrush                                      OFFSET(getStruct<T>, {0xE0, 208, 0, 0})
	SMember(FSlateBrush)                               ActiveFillBrush                                             OFFSET(getStruct<T>, {0x1B0, 208, 0, 0})
	SMember(FSlateBrush)                               InactiveFillBrush                                           OFFSET(getStruct<T>, {0x280, 208, 0, 0})
	SMember(FSlateBrush)                               ArrowsImage                                                 OFFSET(getStruct<T>, {0x350, 208, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x420, 40, 0, 0})
	SMember(FMargin)                                   TextPadding                                                 OFFSET(getStruct<T>, {0x448, 16, 0, 0})
};

/// Struct /Script/SlateCore.CheckBoxStyle
/// Size: 0x0808 (0x000008 - 0x000810)
class FCheckBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2064;

public:
	CMember(TEnumAsByte<ESlateCheckBoxType>)           CheckBoxType                                                OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FSlateBrush)                               UncheckedImage                                              OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FSlateBrush)                               UncheckedHoveredImage                                       OFFSET(getStruct<T>, {0xE0, 208, 0, 0})
	SMember(FSlateBrush)                               UncheckedPressedImage                                       OFFSET(getStruct<T>, {0x1B0, 208, 0, 0})
	SMember(FSlateBrush)                               CheckedImage                                                OFFSET(getStruct<T>, {0x280, 208, 0, 0})
	SMember(FSlateBrush)                               CheckedHoveredImage                                         OFFSET(getStruct<T>, {0x350, 208, 0, 0})
	SMember(FSlateBrush)                               CheckedPressedImage                                         OFFSET(getStruct<T>, {0x420, 208, 0, 0})
	SMember(FSlateBrush)                               UndeterminedImage                                           OFFSET(getStruct<T>, {0x4F0, 208, 0, 0})
	SMember(FSlateBrush)                               UndeterminedHoveredImage                                    OFFSET(getStruct<T>, {0x5C0, 208, 0, 0})
	SMember(FSlateBrush)                               UndeterminedPressedImage                                    OFFSET(getStruct<T>, {0x690, 208, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x760, 16, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x770, 40, 0, 0})
	SMember(FSlateColor)                               BorderBackgroundColor                                       OFFSET(getStruct<T>, {0x798, 40, 0, 0})
	SMember(FSlateSound)                               CheckedSlateSound                                           OFFSET(getStruct<T>, {0x7C0, 24, 0, 0})
	SMember(FSlateSound)                               UncheckedSlateSound                                         OFFSET(getStruct<T>, {0x7D8, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSound                                           OFFSET(getStruct<T>, {0x7F0, 24, 0, 0})
};

/// Struct /Script/SlateCore.ScrollBoxStyle
/// Size: 0x0348 (0x000008 - 0x000350)
class FScrollBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FSlateBrush)                               TopShadowBrush                                              OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FSlateBrush)                               BottomShadowBrush                                           OFFSET(getStruct<T>, {0xE0, 208, 0, 0})
	SMember(FSlateBrush)                               LeftShadowBrush                                             OFFSET(getStruct<T>, {0x1B0, 208, 0, 0})
	SMember(FSlateBrush)                               RightShadowBrush                                            OFFSET(getStruct<T>, {0x280, 208, 0, 0})
};

/// Struct /Script/SlateCore.FontData
/// Size: 0x0020 (0x000000 - 0x000020)
class FFontData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   FontFilename                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EFontHinting)                              Hinting                                                     OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(EFontLoadingPolicy)                        LoadingPolicy                                               OFFSET(get<T>, {0x11, 1, 0, 0})
	DMember(int32_t)                                   SubFaceIndex                                                OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(class UObject*)                            FontFaceAsset                                               OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/SlateCore.TypefaceEntry
/// Size: 0x0028 (0x000000 - 0x000028)
class FTypefaceEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FFontData)                                 Font                                                        OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/SlateCore.Typeface
/// Size: 0x0010 (0x000000 - 0x000010)
class FTypeface : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FTypefaceEntry>)                    Fonts                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SlateCore.CompositeFallbackFont
/// Size: 0x0018 (0x000000 - 0x000018)
class FCompositeFallbackFont : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FTypeface)                                 Typeface                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     ScalingFactor                                               OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/SlateCore.CompositeSubFont
/// Size: 0x0020 (0x000018 - 0x000038)
class FCompositeSubFont : public FCompositeFallbackFont
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FInt32Range>)                       CharacterRanges                                             OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Cultures                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/SlateCore.CompositeFont
/// Size: 0x0038 (0x000000 - 0x000038)
class FCompositeFont : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FTypeface)                                 DefaultTypeface                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FCompositeFallbackFont)                    FallbackTypeface                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	CMember(TArray<FCompositeSubFont>)                 SubTypefaces                                                OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/SlateCore.MotionEvent
/// Size: 0x0030 (0x000018 - 0x000048)
class FMotionEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/SlateCore.CaptureLostEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FCaptureLostEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SlateCore.FocusEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FFocusEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SlateCore.WindowStyle
/// Size: 0x17F8 (0x000008 - 0x001800)
class FWindowStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6144;

public:
	SMember(FButtonStyle)                              MinimizeButtonStyle                                         OFFSET(getStruct<T>, {0x10, 928, 0, 0})
	SMember(FButtonStyle)                              MaximizeButtonStyle                                         OFFSET(getStruct<T>, {0x3B0, 928, 0, 0})
	SMember(FButtonStyle)                              RestoreButtonStyle                                          OFFSET(getStruct<T>, {0x750, 928, 0, 0})
	SMember(FButtonStyle)                              CloseButtonStyle                                            OFFSET(getStruct<T>, {0xAF0, 928, 0, 0})
	SMember(FTextBlockStyle)                           TitleTextStyle                                              OFFSET(getStruct<T>, {0xE90, 864, 0, 0})
	SMember(FSlateBrush)                               ActiveTitleBrush                                            OFFSET(getStruct<T>, {0x11F0, 208, 0, 0})
	SMember(FSlateBrush)                               InactiveTitleBrush                                          OFFSET(getStruct<T>, {0x12C0, 208, 0, 0})
	SMember(FSlateBrush)                               FlashTitleBrush                                             OFFSET(getStruct<T>, {0x1390, 208, 0, 0})
	SMember(FSlateColor)                               BackgroundColor                                             OFFSET(getStruct<T>, {0x1460, 40, 0, 0})
	SMember(FSlateBrush)                               OutlineBrush                                                OFFSET(getStruct<T>, {0x1490, 208, 0, 0})
	SMember(FSlateColor)                               OutlineColor                                                OFFSET(getStruct<T>, {0x1560, 40, 0, 0})
	SMember(FSlateBrush)                               BorderBrush                                                 OFFSET(getStruct<T>, {0x1590, 208, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0x1660, 208, 0, 0})
	SMember(FSlateBrush)                               ChildBackgroundBrush                                        OFFSET(getStruct<T>, {0x1730, 208, 0, 0})
};

/// Struct /Script/SlateCore.ScrollBorderStyle
/// Size: 0x01A8 (0x000008 - 0x0001B0)
class FScrollBorderStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FSlateBrush)                               TopShadowBrush                                              OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FSlateBrush)                               BottomShadowBrush                                           OFFSET(getStruct<T>, {0xE0, 208, 0, 0})
};

/// Struct /Script/SlateCore.DockTabStyle
/// Size: 0x0A68 (0x000008 - 0x000A70)
class FDockTabStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2672;

public:
	SMember(FButtonStyle)                              CloseButtonStyle                                            OFFSET(getStruct<T>, {0x10, 928, 0, 0})
	SMember(FSlateBrush)                               NormalBrush                                                 OFFSET(getStruct<T>, {0x3B0, 208, 0, 0})
	SMember(FSlateBrush)                               ActiveBrush                                                 OFFSET(getStruct<T>, {0x480, 208, 0, 0})
	SMember(FSlateBrush)                               ColorOverlayTabBrush                                        OFFSET(getStruct<T>, {0x550, 208, 0, 0})
	SMember(FSlateBrush)                               ColorOverlayIconBrush                                       OFFSET(getStruct<T>, {0x620, 208, 0, 0})
	SMember(FSlateBrush)                               ForegroundBrush                                             OFFSET(getStruct<T>, {0x6F0, 208, 0, 0})
	SMember(FSlateBrush)                               HoveredBrush                                                OFFSET(getStruct<T>, {0x7C0, 208, 0, 0})
	SMember(FSlateBrush)                               ContentAreaBrush                                            OFFSET(getStruct<T>, {0x890, 208, 0, 0})
	SMember(FSlateBrush)                               TabWellBrush                                                OFFSET(getStruct<T>, {0x960, 208, 0, 0})
	SMember(FMargin)                                   TabPadding                                                  OFFSET(getStruct<T>, {0xA30, 16, 0, 0})
	DMember(float)                                     OverlapWidth                                                OFFSET(get<float>, {0xA40, 4, 0, 0})
	SMember(FSlateColor)                               FlashColor                                                  OFFSET(getStruct<T>, {0xA48, 40, 0, 0})
};

/// Struct /Script/SlateCore.TableColumnHeaderStyle
/// Size: 0x0758 (0x000008 - 0x000760)
class FTableColumnHeaderStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1888;

public:
	SMember(FSlateBrush)                               SortPrimaryAscendingImage                                   OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FSlateBrush)                               SortPrimaryDescendingImage                                  OFFSET(getStruct<T>, {0xE0, 208, 0, 0})
	SMember(FSlateBrush)                               SortSecondaryAscendingImage                                 OFFSET(getStruct<T>, {0x1B0, 208, 0, 0})
	SMember(FSlateBrush)                               SortSecondaryDescendingImage                                OFFSET(getStruct<T>, {0x280, 208, 0, 0})
	SMember(FSlateBrush)                               NormalBrush                                                 OFFSET(getStruct<T>, {0x350, 208, 0, 0})
	SMember(FSlateBrush)                               HoveredBrush                                                OFFSET(getStruct<T>, {0x420, 208, 0, 0})
	SMember(FSlateBrush)                               MenuDropdownImage                                           OFFSET(getStruct<T>, {0x4F0, 208, 0, 0})
	SMember(FSlateBrush)                               MenuDropdownNormalBorderBrush                               OFFSET(getStruct<T>, {0x5C0, 208, 0, 0})
	SMember(FSlateBrush)                               MenuDropdownHoveredBorderBrush                              OFFSET(getStruct<T>, {0x690, 208, 0, 0})
};

/// Struct /Script/SlateCore.SplitterStyle
/// Size: 0x01A8 (0x000008 - 0x0001B0)
class FSplitterStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FSlateBrush)                               HandleNormalBrush                                           OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FSlateBrush)                               HandleHighlightBrush                                        OFFSET(getStruct<T>, {0xE0, 208, 0, 0})
};

/// Struct /Script/SlateCore.HeaderRowStyle
/// Size: 0x1178 (0x000008 - 0x001180)
class FHeaderRowStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4480;

public:
	SMember(FTableColumnHeaderStyle)                   ColumnStyle                                                 OFFSET(getStruct<T>, {0x10, 1888, 0, 0})
	SMember(FTableColumnHeaderStyle)                   LastColumnStyle                                             OFFSET(getStruct<T>, {0x770, 1888, 0, 0})
	SMember(FSplitterStyle)                            ColumnSplitterStyle                                         OFFSET(getStruct<T>, {0xED0, 432, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0x1080, 208, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x1150, 40, 0, 0})
};

/// Struct /Script/SlateCore.InlineTextImageStyle
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FInlineTextImageStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FSlateBrush)                               Image                                                       OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	DMember(int16_t)                                   Baseline                                                    OFFSET(get<int16_t>, {0xE0, 2, 0, 0})
};

/// Struct /Script/SlateCore.SliderStyle
/// Size: 0x04F8 (0x000008 - 0x000500)
class FSliderStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1280;

public:
	SMember(FSlateBrush)                               NormalBarImage                                              OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FSlateBrush)                               HoveredBarImage                                             OFFSET(getStruct<T>, {0xE0, 208, 0, 0})
	SMember(FSlateBrush)                               DisabledBarImage                                            OFFSET(getStruct<T>, {0x1B0, 208, 0, 0})
	SMember(FSlateBrush)                               NormalThumbImage                                            OFFSET(getStruct<T>, {0x280, 208, 0, 0})
	SMember(FSlateBrush)                               HoveredThumbImage                                           OFFSET(getStruct<T>, {0x350, 208, 0, 0})
	SMember(FSlateBrush)                               DisabledThumbImage                                          OFFSET(getStruct<T>, {0x420, 208, 0, 0})
	DMember(float)                                     BarThickness                                                OFFSET(get<float>, {0x4F0, 4, 0, 0})
};

/// Struct /Script/SlateCore.VolumeControlStyle
/// Size: 0x0918 (0x000008 - 0x000920)
class FVolumeControlStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2336;

public:
	SMember(FSliderStyle)                              SliderStyle                                                 OFFSET(getStruct<T>, {0x10, 1280, 0, 0})
	SMember(FSlateBrush)                               HighVolumeImage                                             OFFSET(getStruct<T>, {0x510, 208, 0, 0})
	SMember(FSlateBrush)                               MidVolumeImage                                              OFFSET(getStruct<T>, {0x5E0, 208, 0, 0})
	SMember(FSlateBrush)                               LowVolumeImage                                              OFFSET(getStruct<T>, {0x6B0, 208, 0, 0})
	SMember(FSlateBrush)                               NoVolumeImage                                               OFFSET(getStruct<T>, {0x780, 208, 0, 0})
	SMember(FSlateBrush)                               MutedImage                                                  OFFSET(getStruct<T>, {0x850, 208, 0, 0})
};

/// Struct /Script/SlateCore.SearchBoxStyle
/// Size: 0x0F78 (0x000008 - 0x000F80)
class FSearchBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3968;

public:
	SMember(FEditableTextBoxStyle)                     TextBoxStyle                                                OFFSET(getStruct<T>, {0x10, 2992, 0, 0})
	SMember(FSlateFontInfo)                            ActiveFontInfo                                              OFFSET(getStruct<T>, {0xBC0, 88, 0, 0})
	SMember(FSlateBrush)                               UpArrowImage                                                OFFSET(getStruct<T>, {0xC20, 208, 0, 0})
	SMember(FSlateBrush)                               DownArrowImage                                              OFFSET(getStruct<T>, {0xCF0, 208, 0, 0})
	SMember(FSlateBrush)                               GlassImage                                                  OFFSET(getStruct<T>, {0xDC0, 208, 0, 0})
	SMember(FSlateBrush)                               ClearImage                                                  OFFSET(getStruct<T>, {0xE90, 208, 0, 0})
	SMember(FMargin)                                   ImagePadding                                                OFFSET(getStruct<T>, {0xF60, 16, 0, 0})
	DMember(bool)                                      bLeftAlignButtons                                           OFFSET(get<bool>, {0xF70, 1, 0, 0})
};

/// Struct /Script/SlateCore.ExpandableAreaStyle
/// Size: 0x01B8 (0x000008 - 0x0001C0)
class FExpandableAreaStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FSlateBrush)                               CollapsedImage                                              OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FSlateBrush)                               ExpandedImage                                               OFFSET(getStruct<T>, {0xE0, 208, 0, 0})
	DMember(float)                                     RolloutAnimationSeconds                                     OFFSET(get<float>, {0x1B0, 4, 0, 0})
};

/// Struct /Script/SlateCore.ProgressBarStyle
/// Size: 0x0278 (0x000008 - 0x000280)
class FProgressBarStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	SMember(FSlateBrush)                               BackgroundImage                                             OFFSET(getStruct<T>, {0x10, 208, 0, 0})
	SMember(FSlateBrush)                               FillImage                                                   OFFSET(getStruct<T>, {0xE0, 208, 0, 0})
	SMember(FSlateBrush)                               MarqueeImage                                                OFFSET(getStruct<T>, {0x1B0, 208, 0, 0})
};

/// Struct /Script/SlateCore.InlineEditableTextBlockStyle
/// Size: 0x0F18 (0x000008 - 0x000F20)
class FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3872;

public:
	SMember(FEditableTextBoxStyle)                     EditableTextBoxStyle                                        OFFSET(getStruct<T>, {0x10, 2992, 0, 0})
	SMember(FTextBlockStyle)                           TextStyle                                                   OFFSET(getStruct<T>, {0xBC0, 864, 0, 0})
};

/// Struct /Script/SlateCore.HyperlinkStyle
/// Size: 0x0718 (0x000008 - 0x000720)
class FHyperlinkStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1824;

public:
	SMember(FButtonStyle)                              UnderlineStyle                                              OFFSET(getStruct<T>, {0x10, 928, 0, 0})
	SMember(FTextBlockStyle)                           TextStyle                                                   OFFSET(getStruct<T>, {0x3B0, 864, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x710, 16, 0, 0})
};

/// Enum /Script/SlateCore.EFocusCause
/// Size: 0x06
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
/// Size: 0x08
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
/// Size: 0x03
enum class ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked                                                        = 0,
	ECheckBoxState__Checked                                                          = 1,
	ECheckBoxState__Undetermined                                                     = 2
};

/// Enum /Script/SlateCore.EWidgetClipping
/// Size: 0x05
enum class EWidgetClipping : uint8_t
{
	EWidgetClipping__Inherit                                                         = 0,
	EWidgetClipping__ClipToBounds                                                    = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting                                 = 2,
	EWidgetClipping__ClipToBoundsAlways                                              = 3,
	EWidgetClipping__OnDemand                                                        = 4
};

/// Enum /Script/SlateCore.ESlateBrushImageType
/// Size: 0x03
enum class ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage                                                    = 0,
	ESlateBrushImageType__FullColor                                                  = 1,
	ESlateBrushImageType__Linear                                                     = 2
};

/// Enum /Script/SlateCore.ESlateBrushMirrorType
/// Size: 0x04
enum class ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror                                                  = 0,
	ESlateBrushMirrorType__Horizontal                                                = 1,
	ESlateBrushMirrorType__Vertical                                                  = 2,
	ESlateBrushMirrorType__Both                                                      = 3
};

/// Enum /Script/SlateCore.ESlateBrushTileType
/// Size: 0x04
enum class ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile                                                      = 0,
	ESlateBrushTileType__Horizontal                                                  = 1,
	ESlateBrushTileType__Vertical                                                    = 2,
	ESlateBrushTileType__Both                                                        = 3
};

/// Enum /Script/SlateCore.ESlateBrushDrawType
/// Size: 0x05
enum class ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType                                                  = 0,
	ESlateBrushDrawType__Box                                                         = 1,
	ESlateBrushDrawType__Border                                                      = 2,
	ESlateBrushDrawType__Image                                                       = 3,
	ESlateBrushDrawType__RoundedBox                                                  = 4
};

/// Enum /Script/SlateCore.ESlateBrushRoundingType
/// Size: 0x02
enum class ESlateBrushRoundingType : uint8_t
{
	ESlateBrushRoundingType__FixedRadius                                             = 0,
	ESlateBrushRoundingType__HalfHeightRadius                                        = 1
};

/// Enum /Script/SlateCore.ESlateColorStylingMode
/// Size: 0x04
enum class ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified                                       = 0,
	ESlateColorStylingMode__UseColor_Specified_Link                                  = 1,
	ESlateColorStylingMode__UseColor_Foreground                                      = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued                              = 3
};

/// Enum /Script/SlateCore.EUINavigationRule
/// Size: 0x07
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
/// Size: 0x04
enum class EFlowDirectionPreference : uint8_t
{
	EFlowDirectionPreference__Inherit                                                = 0,
	EFlowDirectionPreference__Culture                                                = 1,
	EFlowDirectionPreference__LeftToRight                                            = 2,
	EFlowDirectionPreference__RightToLeft                                            = 3
};

/// Enum /Script/SlateCore.EColorVisionDeficiency
/// Size: 0x04
enum class EColorVisionDeficiency : uint8_t
{
	EColorVisionDeficiency__NormalVision                                             = 0,
	EColorVisionDeficiency__Deuteranope                                              = 1,
	EColorVisionDeficiency__Protanope                                                = 2,
	EColorVisionDeficiency__Tritanope                                                = 3
};

/// Enum /Script/SlateCore.ESelectInfo
/// Size: 0x04
enum class ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress                                                          = 0,
	ESelectInfo__OnNavigation                                                        = 1,
	ESelectInfo__OnMouseClick                                                        = 2,
	ESelectInfo__Direct                                                              = 3
};

/// Enum /Script/SlateCore.ETextCommit
/// Size: 0x04
enum class ETextCommit : uint8_t
{
	ETextCommit__Default                                                             = 0,
	ETextCommit__OnEnter                                                             = 1,
	ETextCommit__OnUserMovedFocus                                                    = 2,
	ETextCommit__OnCleared                                                           = 3
};

/// Enum /Script/SlateCore.ETextShapingMethod
/// Size: 0x03
enum class ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto                                                         = 0,
	ETextShapingMethod__KerningOnly                                                  = 1,
	ETextShapingMethod__FullShaping                                                  = 2
};

/// Enum /Script/SlateCore.EMenuPlacement
/// Size: 0x13
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
/// Size: 0x02
enum class EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics                                                       = 0,
	EFontLayoutMethod__BoundingBox                                                   = 1
};

/// Enum /Script/SlateCore.EFontLoadingPolicy
/// Size: 0x03
enum class EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad                                                     = 0,
	EFontLoadingPolicy__Stream                                                       = 1,
	EFontLoadingPolicy__Inline                                                       = 2
};

/// Enum /Script/SlateCore.EFontHinting
/// Size: 0x05
enum class EFontHinting : uint8_t
{
	EFontHinting__Default                                                            = 0,
	EFontHinting__Auto                                                               = 1,
	EFontHinting__AutoLight                                                          = 2,
	EFontHinting__Monochrome                                                         = 3,
	EFontHinting__None                                                               = 4
};

/// Enum /Script/SlateCore.ESlateDebuggingFocusEvent
/// Size: 0x03
enum class ESlateDebuggingFocusEvent : uint8_t
{
	ESlateDebuggingFocusEvent__FocusChanging                                         = 0,
	ESlateDebuggingFocusEvent__FocusLost                                             = 1,
	ESlateDebuggingFocusEvent__FocusReceived                                         = 2
};

/// Enum /Script/SlateCore.ESlateDebuggingNavigationMethod
/// Size: 0x06
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
/// Size: 0x02
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
	ESlateDebuggingStateChangeEvent__MouseCaptureGained                              = 0,
	ESlateDebuggingStateChangeEvent__MouseCaptureLost                                = 1
};

/// Enum /Script/SlateCore.ESlateDebuggingInputEvent
/// Size: 0x26
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
/// Size: 0x02
enum class EScrollDirection : uint8_t
{
	Scroll_Down                                                                      = 0,
	Scroll_Up                                                                        = 1
};

/// Enum /Script/SlateCore.EOrientation
/// Size: 0x02
enum class EOrientation : uint8_t
{
	Orient_Horizontal                                                                = 0,
	Orient_Vertical                                                                  = 1
};

/// Enum /Script/SlateCore.EVerticalAlignment
/// Size: 0x04
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                                                                      = 0,
	VAlign_Top                                                                       = 1,
	VAlign_Center                                                                    = 2,
	VAlign_Bottom                                                                    = 3
};

/// Enum /Script/SlateCore.EHorizontalAlignment
/// Size: 0x04
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                                                                      = 0,
	HAlign_Left                                                                      = 1,
	HAlign_Center                                                                    = 2,
	HAlign_Right                                                                     = 3
};

/// Enum /Script/SlateCore.ENavigationGenesis
/// Size: 0x03
enum class ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard                                                     = 0,
	ENavigationGenesis__Controller                                                   = 1,
	ENavigationGenesis__User                                                         = 2
};

/// Enum /Script/SlateCore.ENavigationSource
/// Size: 0x02
enum class ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget                                                 = 0,
	ENavigationSource__WidgetUnderCursor                                             = 1
};

/// Enum /Script/SlateCore.EUINavigationAction
/// Size: 0x04
enum class EUINavigationAction : uint8_t
{
	EUINavigationAction__Accept                                                      = 0,
	EUINavigationAction__Back                                                        = 1,
	EUINavigationAction__Num                                                         = 2,
	EUINavigationAction__Invalid                                                     = 3
};

/// Enum /Script/SlateCore.EButtonPressMethod
/// Size: 0x03
enum class EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp                                                    = 0,
	EButtonPressMethod__ButtonPress                                                  = 1,
	EButtonPressMethod__ButtonRelease                                                = 2
};

/// Enum /Script/SlateCore.EButtonTouchMethod
/// Size: 0x03
enum class EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp                                                    = 0,
	EButtonTouchMethod__Down                                                         = 1,
	EButtonTouchMethod__PreciseTap                                                   = 2
};

/// Enum /Script/SlateCore.EButtonClickMethod
/// Size: 0x04
enum class EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp                                                    = 0,
	EButtonClickMethod__MouseDown                                                    = 1,
	EButtonClickMethod__MouseUp                                                      = 2,
	EButtonClickMethod__PreciseClick                                                 = 3
};

/// Enum /Script/SlateCore.ESlateCheckBoxType
/// Size: 0x02
enum class ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox                                                     = 0,
	ESlateCheckBoxType__ToggleButton                                                 = 1
};

/// Enum /Script/SlateCore.ESlateParentWindowSearchMethod
/// Size: 0x02
enum class ESlateParentWindowSearchMethod : uint8_t
{
	ESlateParentWindowSearchMethod__ActiveWindow                                     = 0,
	ESlateParentWindowSearchMethod__MainWindow                                       = 1
};

/// Enum /Script/SlateCore.EConsumeMouseWheel
/// Size: 0x03
enum class EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible                                        = 0,
	EConsumeMouseWheel__Always                                                       = 1,
	EConsumeMouseWheel__Never                                                        = 2
};


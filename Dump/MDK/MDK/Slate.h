
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: InputCore
/// dependency: SlateCore

/// Class /Script/Slate.ButtonWidgetStyle
/// Size: 0x03A0 (0x000030 - 0x0003D0)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	SMember(FButtonStyle)                              ButtonStyle                                                 OFFSET(getStruct<T>, {0x30, 928, 0, 0})
};

/// Class /Script/Slate.CheckBoxWidgetStyle
/// Size: 0x0810 (0x000030 - 0x000840)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2112;

public:
	SMember(FCheckBoxStyle)                            CheckBoxStyle                                               OFFSET(getStruct<T>, {0x30, 2064, 0, 0})
};

/// Class /Script/Slate.ComboBoxWidgetStyle
/// Size: 0x05C0 (0x000030 - 0x0005F0)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	SMember(FComboBoxStyle)                            ComboBoxStyle                                               OFFSET(getStruct<T>, {0x30, 1472, 0, 0})
};

/// Class /Script/Slate.ComboButtonWidgetStyle
/// Size: 0x0580 (0x000030 - 0x0005B0)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	SMember(FComboButtonStyle)                         ComboButtonStyle                                            OFFSET(getStruct<T>, {0x30, 1408, 0, 0})
};

/// Class /Script/Slate.EditableTextBoxWidgetStyle
/// Size: 0x0BB0 (0x000030 - 0x000BE0)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3040;

public:
	SMember(FEditableTextBoxStyle)                     EditableTextBoxStyle                                        OFFSET(getStruct<T>, {0x30, 2992, 0, 0})
};

/// Class /Script/Slate.EditableTextWidgetStyle
/// Size: 0x0300 (0x000030 - 0x000330)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FEditableTextStyle)                        EditableTextStyle                                           OFFSET(getStruct<T>, {0x30, 768, 0, 0})
};

/// Class /Script/Slate.ProgressWidgetStyle
/// Size: 0x0280 (0x000030 - 0x0002B0)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FProgressBarStyle)                         ProgressBarStyle                                            OFFSET(getStruct<T>, {0x30, 640, 0, 0})
};

/// Class /Script/Slate.ScrollBarWidgetStyle
/// Size: 0x0760 (0x000030 - 0x000790)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1936;

public:
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              OFFSET(getStruct<T>, {0x30, 1888, 0, 0})
};

/// Class /Script/Slate.ScrollBoxWidgetStyle
/// Size: 0x0350 (0x000030 - 0x000380)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FScrollBoxStyle)                           ScrollBoxStyle                                              OFFSET(getStruct<T>, {0x30, 848, 0, 0})
};

/// Class /Script/Slate.SlateSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class USlateSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bExplicitCanvasChildZOrder                                  OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/Slate.SpinBoxWidgetStyle
/// Size: 0x0460 (0x000030 - 0x000490)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	SMember(FSpinBoxStyle)                             SpinBoxStyle                                                OFFSET(getStruct<T>, {0x30, 1120, 0, 0})
};

/// Class /Script/Slate.TextBlockWidgetStyle
/// Size: 0x0360 (0x000030 - 0x000390)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FTextBlockStyle)                           TextBlockStyle                                              OFFSET(getStruct<T>, {0x30, 864, 0, 0})
};

/// Class /Script/Slate.ToolMenuBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UToolMenuBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/Slate.VirtualKeyboardOptions
/// Size: 0x0001 (0x000000 - 0x000001)
class FVirtualKeyboardOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bEnableAutocorrect                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/Slate.InputChord
/// Size: 0x0020 (0x000000 - 0x000020)
class FInputChord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FKey)                                      Key                                                         OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      bShift                                                      OFFSET(get<bool>, {0x18, 1, 1, 0})
	DMember(bool)                                      bCtrl                                                       OFFSET(get<bool>, {0x18, 1, 1, 1})
	DMember(bool)                                      bAlt                                                        OFFSET(get<bool>, {0x18, 1, 1, 2})
	DMember(bool)                                      bCmd                                                        OFFSET(get<bool>, {0x18, 1, 1, 3})
};

/// Struct /Script/Slate.Anchors
/// Size: 0x0010 (0x000000 - 0x000010)
class FAnchors : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FVector2D)                                 Minimum                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector2D)                                 Maximum                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Slate.CustomizedToolMenuEntry
/// Size: 0x0004 (0x000000 - 0x000004)
class FCustomizedToolMenuEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	CMember(ECustomizedToolMenuVisibility)             Visibility                                                  OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/Slate.CustomizedToolMenuSection
/// Size: 0x0004 (0x000000 - 0x000004)
class FCustomizedToolMenuSection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	CMember(ECustomizedToolMenuVisibility)             Visibility                                                  OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/Slate.CustomizedToolMenuNameArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FCustomizedToolMenuNameArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FName>)                             Names                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Slate.CustomizedToolMenu
/// Size: 0x01E8 (0x000000 - 0x0001E8)
class FCustomizedToolMenu : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TMap<FName, FCustomizedToolMenuEntry>)     Entries                                                     OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TMap<FName, FCustomizedToolMenuSection>)   Sections                                                    OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(TMap<FName, FCustomizedToolMenuNameArray>) EntryOrder                                                  OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TArray<FName>)                             SectionOrder                                                OFFSET(get<T>, {0xF8, 16, 0, 0})
};

/// Enum /Script/Slate.ETextJustify
/// Size: 0x03
enum class ETextJustify : uint8_t
{
	ETextJustify__Left                                                               = 0,
	ETextJustify__Center                                                             = 1,
	ETextJustify__Right                                                              = 2
};

/// Enum /Script/Slate.ETextFlowDirection
/// Size: 0x03
enum class ETextFlowDirection : uint8_t
{
	ETextFlowDirection__Auto                                                         = 0,
	ETextFlowDirection__LeftToRight                                                  = 1,
	ETextFlowDirection__RightToLeft                                                  = 2
};

/// Enum /Script/Slate.EVirtualKeyboardDismissAction
/// Size: 0x03
enum class EVirtualKeyboardDismissAction : uint8_t
{
	EVirtualKeyboardDismissAction__TextChangeOnDismiss                               = 0,
	EVirtualKeyboardDismissAction__TextCommitOnAccept                                = 1,
	EVirtualKeyboardDismissAction__TextCommitOnDismiss                               = 2
};

/// Enum /Script/Slate.EVirtualKeyboardTrigger
/// Size: 0x02
enum class EVirtualKeyboardTrigger : uint8_t
{
	EVirtualKeyboardTrigger__OnFocusByPointer                                        = 0,
	EVirtualKeyboardTrigger__OnAllFocusEvents                                        = 1
};

/// Enum /Script/Slate.ETextWrappingPolicy
/// Size: 0x02
enum class ETextWrappingPolicy : uint8_t
{
	ETextWrappingPolicy__DefaultWrapping                                             = 0,
	ETextWrappingPolicy__AllowPerCharacterWrapping                                   = 1
};

/// Enum /Script/Slate.ETableViewMode
/// Size: 0x03
enum class ETableViewMode : uint8_t
{
	ETableViewMode__List                                                             = 0,
	ETableViewMode__Tile                                                             = 1,
	ETableViewMode__Tree                                                             = 2
};

/// Enum /Script/Slate.ESelectionMode
/// Size: 0x04
enum class ESelectionMode : uint8_t
{
	ESelectionMode__None                                                             = 0,
	ESelectionMode__Single                                                           = 1,
	ESelectionMode__SingleToggle                                                     = 2,
	ESelectionMode__Multi                                                            = 3
};

/// Enum /Script/Slate.EMultiBlockType
/// Size: 0x09
enum class EMultiBlockType : uint8_t
{
	EMultiBlockType__None                                                            = 0,
	EMultiBlockType__ButtonRow                                                       = 1,
	EMultiBlockType__EditableText                                                    = 2,
	EMultiBlockType__Heading                                                         = 3,
	EMultiBlockType__MenuEntry                                                       = 4,
	EMultiBlockType__Separator                                                       = 5,
	EMultiBlockType__ToolBarButton                                                   = 6,
	EMultiBlockType__ToolBarComboButton                                              = 7,
	EMultiBlockType__Widget                                                          = 8
};

/// Enum /Script/Slate.EMultiBoxType
/// Size: 0x06
enum class EMultiBoxType : uint8_t
{
	EMultiBoxType__MenuBar                                                           = 0,
	EMultiBoxType__ToolBar                                                           = 1,
	EMultiBoxType__VerticalToolBar                                                   = 2,
	EMultiBoxType__UniformToolBar                                                    = 3,
	EMultiBoxType__Menu                                                              = 4,
	EMultiBoxType__ButtonRow                                                         = 5
};

/// Enum /Script/Slate.EProgressBarFillType
/// Size: 0x05
enum class EProgressBarFillType : uint8_t
{
	EProgressBarFillType__LeftToRight                                                = 0,
	EProgressBarFillType__RightToLeft                                                = 1,
	EProgressBarFillType__FillFromCenter                                             = 2,
	EProgressBarFillType__TopToBottom                                                = 3,
	EProgressBarFillType__BottomToTop                                                = 4
};

/// Enum /Script/Slate.EStretch
/// Size: 0x08
enum class EStretch : uint8_t
{
	EStretch__None                                                                   = 0,
	EStretch__Fill                                                                   = 1,
	EStretch__ScaleToFit                                                             = 2,
	EStretch__ScaleToFitX                                                            = 3,
	EStretch__ScaleToFitY                                                            = 4,
	EStretch__ScaleToFill                                                            = 5,
	EStretch__ScaleBySafeZone                                                        = 6,
	EStretch__UserSpecified                                                          = 7
};

/// Enum /Script/Slate.EStretchDirection
/// Size: 0x03
enum class EStretchDirection : uint8_t
{
	EStretchDirection__Both                                                          = 0,
	EStretchDirection__DownOnly                                                      = 1,
	EStretchDirection__UpOnly                                                        = 2
};

/// Enum /Script/Slate.EScrollWhenFocusChanges
/// Size: 0x03
enum class EScrollWhenFocusChanges : uint8_t
{
	EScrollWhenFocusChanges__NoScroll                                                = 0,
	EScrollWhenFocusChanges__InstantScroll                                           = 1,
	EScrollWhenFocusChanges__AnimatedScroll                                          = 2
};

/// Enum /Script/Slate.EDescendantScrollDestination
/// Size: 0x03
enum class EDescendantScrollDestination : uint8_t
{
	EDescendantScrollDestination__IntoView                                           = 0,
	EDescendantScrollDestination__TopOrLeft                                          = 1,
	EDescendantScrollDestination__Center                                             = 2
};

/// Enum /Script/Slate.EListItemAlignment
/// Size: 0x07
enum class EListItemAlignment : uint8_t
{
	EListItemAlignment__EvenlyDistributed                                            = 0,
	EListItemAlignment__EvenlySize                                                   = 1,
	EListItemAlignment__EvenlyWide                                                   = 2,
	EListItemAlignment__LeftAligned                                                  = 3,
	EListItemAlignment__RightAligned                                                 = 4,
	EListItemAlignment__CenterAligned                                                = 5,
	EListItemAlignment__Fill                                                         = 6
};

/// Enum /Script/Slate.ETextTransformPolicy
/// Size: 0x03
enum class ETextTransformPolicy : uint8_t
{
	ETextTransformPolicy__None                                                       = 0,
	ETextTransformPolicy__ToLower                                                    = 1,
	ETextTransformPolicy__ToUpper                                                    = 2
};

/// Enum /Script/Slate.ECustomizedToolMenuVisibility
/// Size: 0x03
enum class ECustomizedToolMenuVisibility : uint32_t
{
	ECustomizedToolMenuVisibility__None                                              = 0,
	ECustomizedToolMenuVisibility__Visible                                           = 1,
	ECustomizedToolMenuVisibility__Hidden                                            = 2
};

/// Enum /Script/Slate.EMultipleKeyBindingIndex
/// Size: 0x03
enum class EMultipleKeyBindingIndex : uint8_t
{
	EMultipleKeyBindingIndex__Primary                                                = 0,
	EMultipleKeyBindingIndex__Secondary                                              = 1,
	EMultipleKeyBindingIndex__NumChords                                              = 2
};

/// Enum /Script/Slate.EUserInterfaceActionType
/// Size: 0x06
enum class EUserInterfaceActionType : uint8_t
{
	EUserInterfaceActionType__None                                                   = 0,
	EUserInterfaceActionType__Button                                                 = 1,
	EUserInterfaceActionType__ToggleButton                                           = 2,
	EUserInterfaceActionType__RadioButton                                            = 3,
	EUserInterfaceActionType__Check                                                  = 4,
	EUserInterfaceActionType__CollapsedButton                                        = 5
};


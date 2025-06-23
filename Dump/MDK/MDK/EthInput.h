
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: InputCore
/// dependency: SlateCore
/// dependency: UMG

/// Struct /Script/EthInput.ActionInputBinding
/// Size: 0x0030 (0x000000 - 0x000030)
class FActionInputBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              ActionTag                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bShouldFocus                                                OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     HoldTime                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FText)                                     OverrideText                                                OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/EthInput.ActionInputDeco
/// Size: 0x0110 (0x000000 - 0x000110)
class FActionInputDeco : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FGameplayTag)                              Tag                                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x9, 1, 0, 0})
	SMember(FMargin)                                   Offset                                                      OFFSET(getStruct<T>, {0xC, 16, 0, 0})
	SMember(FVector2D)                                 Pivot                                                       OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	SMember(FSlateBrush)                               Brush                                                       OFFSET(getStruct<T>, {0x30, 208, 0, 0})
	DMember(bool)                                      bVisibility                                                 OFFSET(get<bool>, {0x100, 1, 0, 0})
};

/// Class /Script/EthInput.ActionInputButton
/// Size: 0x0078 (0x000588 - 0x000600)
class UActionInputButton : public UButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	CMember(EActionInputFunction)                      ActionInputFunction                                         OFFSET(get<T>, {0x590, 1, 0, 0})
	CMember(EActionInputFunction)                      NavigationNextFunction                                      OFFSET(get<T>, {0x591, 1, 0, 0})
	CMember(EActionInputFunction)                      NavigationPreviousFunction                                  OFFSET(get<T>, {0x592, 1, 0, 0})
	CMember(EActionInputFunction)                      FocusByNavigationFunction                                   OFFSET(get<T>, {0x593, 1, 0, 0})
	DMember(char)                                      ReceiveHoverInputMask                                       OFFSET(get<char>, {0x594, 1, 0, 0})
	DMember(bool)                                      bBlockInput                                                 OFFSET(get<bool>, {0x595, 1, 0, 0})
	DMember(bool)                                      bIsActionEnable                                             OFFSET(get<bool>, {0x596, 1, 0, 0})
	CMember(TArray<FActionInputBinding>)               ActionBindings                                              OFFSET(get<T>, {0x598, 16, 0, 0})
	DMember(bool)                                      bHideDecorates                                              OFFSET(get<bool>, {0x5A8, 1, 0, 0})
	CMember(TArray<FActionInputDeco>)                  ActionInputDecos                                            OFFSET(get<T>, {0x5B0, 16, 0, 0})
	DMember(bool)                                      bIsClearFocusWhenInvisible                                  OFFSET(get<bool>, {0x5C0, 1, 0, 0})
	DMember(bool)                                      bIsInFocusNavigationPath                                    OFFSET(get<bool>, {0x5C1, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFocusReceived                                             OFFSET(getStruct<T>, {0x5C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFocusLost                                                 OFFSET(getStruct<T>, {0x5D8, 16, 0, 0})
	SMember(FDelegateProperty)                         OnGetNavigationWidgetEvent                                  OFFSET(getStruct<T>, {0x5E8, 16, 0, 0})


	/// Functions
	// Function /Script/EthInput.ActionInputButton.SetNavigationFocus
	// void SetNavigationFocus();                                                                                               // [0xa0b3c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputButton.SetIsHideDecorates
	// void SetIsHideDecorates(bool bInHideDecorates);                                                                          // [0xa0b140] Final|Native|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputButton.SetIsActionEnable
	// void SetIsActionEnable(bool bInIsActionEnable);                                                                          // [0xa0b0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputButton.RemoveAllActionBinding
	// void RemoveAllActionBinding();                                                                                           // [0xa0a930] Final|Native|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputButton.RemoveActionBindingByName
	// void RemoveActionBindingByName(FName& ActionName);                                                                       // [0xa0a780] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EthInput.ActionInputButton.RemoveActionBinding
	// void RemoveActionBinding(FGameplayTag& ActionTag);                                                                       // [0xa0a5d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EthInput.ActionInputButton.ClearFocus
	// void ClearFocus(bool bIgnoreFocusInPath);                                                                                // [0xa09940] Final|Native|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputButton.AddActionBindingByName
	// void AddActionBindingByName(FName& ActionName, bool bShouldFocus, float InHoldTime, FText InOverrideText);               // [0xa08820] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EthInput.ActionInputButton.AddActionBinding
	// void AddActionBinding(FGameplayTag& ActionTag, bool bShouldFocus, float InHoldTime, FText InOverrideText);               // [0xa082b0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/EthInput.ActionInputBar
/// Size: 0x00A0 (0x0001F8 - 0x000298)
class UActionInputBar : public UDynamicEntryBoxBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x200, 88, 0, 0})
	SMember(FSlateColor)                               ColorAndOpacity                                             OFFSET(getStruct<T>, {0x258, 40, 0, 0})
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x280, 16, 0, 0})
};

/// Class /Script/EthInput.ActionInputBarIcon
/// Size: 0x0030 (0x000280 - 0x0002B0)
class UActionInputBarIcon : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Script/EthInput.ActionInputContent
/// Size: 0x0088 (0x000140 - 0x0001C8)
class UActionInputContent : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	CMember(EActionInputFunction)                      ActionInputFunction                                         OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(EActionInputFunction)                      NavigationNextFunction                                      OFFSET(get<T>, {0x149, 1, 0, 0})
	CMember(EActionInputFunction)                      NavigationPreviousFunction                                  OFFSET(get<T>, {0x14A, 1, 0, 0})
	CMember(EActionInputFunction)                      FocusByNavigationFunction                                   OFFSET(get<T>, {0x14B, 1, 0, 0})
	DMember(bool)                                      bBlockInput                                                 OFFSET(get<bool>, {0x14C, 1, 0, 0})
	CMember(TArray<FActionInputBinding>)               ActionBindings                                              OFFSET(get<T>, {0x150, 16, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0x160, 1, 0, 0})
	DMember(bool)                                      bIsClearFocusWhenInvisible                                  OFFSET(get<bool>, {0x161, 1, 0, 0})
	DMember(bool)                                      bIsInFocusNavigationPath                                    OFFSET(get<bool>, {0x162, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFocusReceived                                             OFFSET(getStruct<T>, {0x168, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFocusLost                                                 OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActionInputDownEvent                                      OFFSET(getStruct<T>, {0x188, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActionInputUpEvent                                        OFFSET(getStruct<T>, {0x198, 16, 0, 0})
	SMember(FDelegateProperty)                         OnGetNavigationWidgetEvent                                  OFFSET(getStruct<T>, {0x1A8, 16, 0, 0})


	/// Functions
	// Function /Script/EthInput.ActionInputContent.SetNavigationFocus
	// void SetNavigationFocus();                                                                                               // [0xa0b3c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputContent.RemoveAllActionBinding
	// void RemoveAllActionBinding();                                                                                           // [0xa0a950] Final|Native|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputContent.RemoveActionBindingByName
	// void RemoveActionBindingByName(FName& ActionName);                                                                       // [0xa0a810] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EthInput.ActionInputContent.RemoveActionBinding
	// void RemoveActionBinding(FGameplayTag& ActionTag);                                                                       // [0xa0a660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EthInput.ActionInputContent.ClearFocus
	// void ClearFocus(bool bIgnoreFocusInPath);                                                                                // [0xa09940] Final|Native|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputContent.AddActionBindingByName
	// void AddActionBindingByName(FName& ActionName, bool bShouldFocus, float InHoldTime, FText InOverrideText);               // [0xa089f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EthInput.ActionInputContent.AddActionBinding
	// void AddActionBinding(FGameplayTag& ActionTag, bool bShouldFocus, float InHoldTime, FText InOverrideText);               // [0xa08480] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/EthInput.ActionInputContentSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UActionInputContentSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x39, 1, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x3C, 16, 0, 0})


	/// Functions
	// Function /Script/EthInput.ActionInputContentSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0xa0b610] Final|Native|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputContentSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0xa0b3e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputContentSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0xa0af20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EthInput.ActionInputIcon
/// Size: 0x0050 (0x000140 - 0x000190)
class UActionInputIcon : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FMargin)                                   IconPadding                                                 OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         IconHorizontalAlignment                                     OFFSET(get<T>, {0x150, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           IconVerticalAlignment                                       OFFSET(get<T>, {0x151, 1, 0, 0})
	SMember(FGameplayTag)                              ActionTag                                                   OFFSET(getStruct<T>, {0x154, 8, 0, 0})


	/// Functions
	// Function /Script/EthInput.ActionInputIcon.SetActionTag
	// void SetActionTag(FGameplayTag InActionTag);                                                                             // [0xa0ac60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EthInput.ActionInputLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UActionInputLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/EthInput.ActionInputLibrary.SetRenderFocusRule
	// void SetRenderFocusRule(class UObject* WorldContextObject, ERenderFocusRule Rule);                                       // [0xa0b470] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputLibrary.Reload
	// void Reload(class UObject* WorldContextObject, bool bClearDataCache, bool bApplyImmediately);                            // [0xa0a4c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputLibrary.MakeActionInputRemapData
	// FActionInputRemapData MakeActionInputRemapData(EInputType InputType, TMap<FGameplayTag, FActionInputInfo>& InRemapInputInfo); // [0xa0a2e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/EthInput.ActionInputLibrary.MakeActionInputInfo
	// FActionInputInfo MakeActionInputInfo(TArray<FKey>& InKeys);                                                              // [0xa0a150] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/EthInput.ActionInputLibrary.IsGamePad
	// bool IsGamePad(class UObject* WorldContextObject);                                                                       // [0xa0a0c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputLibrary.GetKeyboardLayout
	// int32_t GetKeyboardLayout();                                                                                             // [0xa09f10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputLibrary.GetCurInputType
	// EInputType GetCurInputType(class UObject* WorldContextObject);                                                           // [0xa09c90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputLibrary.GetCurInputMode
	// EInputMode GetCurInputMode(class UObject* WorldContextObject);                                                           // [0xa09be0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputLibrary.ClearRemap
	// void ClearRemap(class UObject* WorldContextObject, EInputType InputType, bool bApplyImmediately);                        // [0xa099d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputLibrary.ClearAllRemap
	// void ClearAllRemap(class UObject* WorldContextObject, bool bApplyImmediately);                                           // [0xa09880] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputLibrary.BreakActionInputRemapData
	// void BreakActionInputRemapData(FActionInputRemapData& InActionInputRemapData, EInputType& OutInputType, TMap<FGameplayTag, FActionInputInfo>& OutRemapInputInfo); // [0xa09630] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/EthInput.ActionInputLibrary.BreakActionInputInfo
	// void BreakActionInputInfo(FActionInputInfo& InActionInputInfo, TArray<FKey>& OutKeys);                                   // [0xa094a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/EthInput.ActionInputLibrary.ApplyRemap
	// void ApplyRemap(class UObject* WorldContextObject);                                                                      // [0xa092b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputLibrary.AddRemapPreset
	// void AddRemapPreset(class UObject* WorldContextObject, FName PresetName, bool bApplyImmediately);                        // [0xa09120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputLibrary.AddRemapData
	// void AddRemapData(class UObject* WorldContextObject, FActionInputRemapData& InData, bool bApplyImmediately);             // [0xa08f70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EthInput.ActionInputLibrary.AddRemap
	// void AddRemap(class UObject* WorldContextObject, EInputType InputType, FGameplayTag InputActionTag, FActionInputInfo& ActionInputInfo, bool bApplyImmediately); // [0xa08d90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/EthInput.ActionInputShow
/// Size: 0x0078 (0x000140 - 0x0001B8)
class UActionInputShow : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	SMember(FMargin)                                   IconPadding                                                 OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         IconHorizontalAlignment                                     OFFSET(get<T>, {0x150, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           IconVerticalAlignment                                       OFFSET(get<T>, {0x151, 1, 0, 0})
	SMember(FActionInputBinding)                       Binding                                                     OFFSET(getStruct<T>, {0x158, 48, 0, 0})


	/// Functions
	// Function /Script/EthInput.ActionInputShow.SetActionInputBinding
	// void SetActionInputBinding(FActionInputBinding InBinding);                                                               // [0xa0ab50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EthInput.ActionInputSwitch
/// Size: 0x0010 (0x000158 - 0x000168)
class UActionInputSwitch : public UWidgetSwitcher
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	DMember(int32_t)                                   MouseAndKeyboardIndex                                       OFFSET(get<int32_t>, {0x158, 4, 0, 0})
	DMember(int32_t)                                   GamepadIndex                                                OFFSET(get<int32_t>, {0x15C, 4, 0, 0})
	DMember(int32_t)                                   TouchIndex                                                  OFFSET(get<int32_t>, {0x160, 4, 0, 0})
};

/// Class /Script/EthInput.ActionInputWidget
/// Size: 0x0028 (0x000280 - 0x0002A8)
class UActionInputWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(EActionInputFunction)                      ActionInputFunction                                         OFFSET(get<T>, {0x288, 1, 0, 0})
	CMember(EActionInputFunction)                      NavigationNextFunction                                      OFFSET(get<T>, {0x289, 1, 0, 0})
	CMember(EActionInputFunction)                      NavigationPreviousFunction                                  OFFSET(get<T>, {0x28A, 1, 0, 0})
	CMember(EActionInputFunction)                      FocusByNavigationFunction                                   OFFSET(get<T>, {0x28B, 1, 0, 0})
	DMember(bool)                                      bBlockInput                                                 OFFSET(get<bool>, {0x28C, 1, 0, 0})
	CMember(TArray<FActionInputBinding>)               ActionBindings                                              OFFSET(get<T>, {0x290, 16, 0, 0})
	DMember(bool)                                      bIsClearFocusWhenInvisible                                  OFFSET(get<bool>, {0x2A0, 1, 0, 0})
	DMember(bool)                                      bIsInFocusNavigationPath                                    OFFSET(get<bool>, {0x2A1, 1, 0, 0})
	CMember(EInputMode)                                InputMode                                                   OFFSET(get<T>, {0x2A2, 1, 0, 0})


	/// Functions
	// Function /Script/EthInput.ActionInputWidget.SetNavigationFocus
	// void SetNavigationFocus();                                                                                               // [0xa0b3c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputWidget.SetInputMode
	// void SetInputMode(EInputMode InInputMode);                                                                               // [0xa0b030] Final|Native|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputWidget.RemoveAllActionBinding
	// void RemoveAllActionBinding();                                                                                           // [0xa0a970] Final|Native|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputWidget.RemoveActionBindingByName
	// void RemoveActionBindingByName(FName& ActionName);                                                                       // [0xa0a8a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EthInput.ActionInputWidget.RemoveActionBinding
	// void RemoveActionBinding(FGameplayTag& ActionTag);                                                                       // [0xa0a6f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EthInput.ActionInputWidget.OnFocusReceivedFromNavigation
	// void OnFocusReceivedFromNavigation();                                                                                    // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/EthInput.ActionInputWidget.OnActionInputUp
	// void OnActionInputUp(FGameplayTag& GameplayTag);                                                                         // [0x198a600] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/EthInput.ActionInputWidget.OnActionInputDown
	// void OnActionInputDown(FGameplayTag& GameplayTag);                                                                       // [0x198a600] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/EthInput.ActionInputWidget.GetNavigationWidget
	// class UWidget* GetNavigationWidget(ENavigation InNavigation);                                                            // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/EthInput.ActionInputWidget.ClearFocus
	// void ClearFocus(bool bIgnoreFocusInPath);                                                                                // [0xa09940] Final|Native|Public|BlueprintCallable 
	// Function /Script/EthInput.ActionInputWidget.AddActionBindingByName
	// void AddActionBindingByName(FName& ActionName, bool bShouldFocus, float InHoldTime, FText InOverrideText);               // [0xa08bc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EthInput.ActionInputWidget.AddActionBinding
	// void AddActionBinding(FGameplayTag& ActionTag, bool bShouldFocus, float InHoldTime, FText InOverrideText);               // [0xa08650] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/EthInput.CustomTouchInputControl
/// Size: 0x0080 (0x000000 - 0x000080)
class FCustomTouchInputControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UTexture2D*)                         Image1                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UTexture2D*)                         Image2                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UTexture2D*)                         Image3                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(float)                                     PointerShowThreshold                                        OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     SmallPointImageScale                                        OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FVector2D)                                 CenterPicSize                                               OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FVector2D)                                 Center                                                      OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	SMember(FVector2D)                                 VisualSize                                                  OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	SMember(FVector2D)                                 ThumbSize                                                   OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FVector2D)                                 InteractionSize                                             OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	SMember(FVector2D)                                 InputScale                                                  OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	SMember(FKey)                                      MainInputKey                                                OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FKey)                                      AltInputKey                                                 OFFSET(getStruct<T>, {0x68, 24, 0, 0})
};

/// Class /Script/EthInput.CustomTouchInterface
/// Size: 0x0010 (0x000058 - 0x000068)
class UCustomTouchInterface : public UTouchInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FCustomTouchInputControl>)          CustomControls                                              OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/EthInput.EthGameViewportClient
/// Size: 0x0018 (0x000360 - 0x000378)
class UEthGameViewportClient : public UGameViewportClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
};

/// Class /Script/EthInput.EthInputSettings
/// Size: 0x00F0 (0x000028 - 0x000118)
class UEthInputSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TWeakObjectPtr<class UDataTable*>)         ActionInputData                                             OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<class UDataTable*>)         ActionInputRemapData                                        OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TMap<FName, TWeakObjectPtr<UDataTable*>>)  KeyIconDatas                                                OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TMap<FName, float>)                        InitVars                                                    OFFSET(get<T>, {0xC8, 80, 0, 0})
};

/// Class /Script/EthInput.AxisCacheData
/// Size: 0x0038 (0x000028 - 0x000060)
class UAxisCacheData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FKey)                                      ActionKey                                                   OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FGameplayTag)                              ActionName                                                  OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	DMember(float)                                     FrameDelta                                                  OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     DeltaTime                                                   OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   NumSamples                                                  OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	CMember(EGamepadType)                              GamePadModel                                                OFFSET(get<T>, {0x54, 1, 0, 0})
};

/// Class /Script/EthInput.OnlyPcActionData
/// Size: 0x0030 (0x000028 - 0x000058)
class UOnlyPcActionData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FKey)                                      ActionKey                                                   OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FGameplayTag)                              ActionName                                                  OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	SMember(FDelegateProperty)                         Delegate                                                    OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Class /Script/EthInput.EthPlayerController
/// Size: 0x01E0 (0x000570 - 0x000750)
class AEthPlayerController : public APlayerController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
	CMember(EInputType)                                InputModel                                                  OFFSET(get<T>, {0x578, 1, 0, 0})
	CMember(EGamepadType)                              GamePadModel                                                OFFSET(get<T>, {0x579, 1, 0, 0})
	DMember(bool)                                      InitLockMouse                                               OFFSET(get<bool>, {0x57A, 1, 0, 0})
	DMember(bool)                                      bInputAxisEnabled                                           OFFSET(get<bool>, {0x57B, 1, 0, 0})
	CMember(class UUIActionInput*)                     UIActionInput                                               OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(TArray<class UWidgetInteractionComponent*>) WidgetInteractionComponents                                OFFSET(get<T>, {0x5B8, 16, 0, 0})
	CMember(class UWidgetInteractionComponent*)        WidgetInteractionComponent                                  OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(TMap<FGameplayTag, class UAxisCacheData*>) AxisCacheMap                                                OFFSET(get<T>, {0x5D0, 80, 0, 0})
	CMember(TMap<FGameplayTag, class UOnlyPcActionData*>) InputCastMapOnlyPC                                       OFFSET(get<T>, {0x620, 80, 0, 0})


	/// Functions
	// Function /Script/EthInput.EthPlayerController.UnbindInputKeyOnlyPCByName
	// bool UnbindInputKeyOnlyPCByName(FName Name);                                                                             // [0xa0b7c0] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.UnbindInputKeyOnlyPC
	// bool UnbindInputKeyOnlyPC(FGameplayTag Key);                                                                             // [0xa0b720] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.SetVirtualJoyShowState
	// void SetVirtualJoyShowState(int32_t InState);                                                                            // [0xa0b690] Final|Native|Public|BlueprintCallable 
	// Function /Script/EthInput.EthPlayerController.SetReverseTurn
	// bool SetReverseTurn(bool Val, bool bAxisX);                                                                              // [0xa0b530] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.SetMouseCursorStyle
	// bool SetMouseCursorStyle(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, FName CursorName, FVector2D HotSpot); // [0xa0b260] Final|Native|Public|HasDefaults 
	// Function /Script/EthInput.EthPlayerController.SetLockMouseModel
	// void SetLockMouseModel(bool lock);                                                                                       // [0xa0b1d0] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.SetInputAxisEnable
	// void SetInputAxisEnable(bool enable);                                                                                    // [0xa0afa0] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.SetControllerManualMouseLock
	// void SetControllerManualMouseLock(bool Model);                                                                           // [0xa0ae10] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.SetCameraSensitivity
	// float SetCameraSensitivity(float Val, EInputType InputType, bool bAxisX);                                                // [0xa0acf0] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.ResetTouchProxy
	// void ResetTouchProxy(TEnumAsByte<ETouchIndex> Type);                                                                     // [0xa0aad0] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.ResetInputAxis
	// void ResetInputAxis(FGameplayTag inputActEnum);                                                                          // [0xa0aa40] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.ResetAllAxis
	// void ResetAllAxis();                                                                                                     // [0xa0aa20] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.RemoveWidgetInteractionComponent
	// void RemoveWidgetInteractionComponent(class UWidgetInteractionComponent* Interaction);                                   // [0xa0a990] Final|Native|Public|BlueprintCallable 
	// Function /Script/EthInput.EthPlayerController.GetZoomValue
	// float GetZoomValue();                                                                                                    // [0xa0a090] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.GetTouchSlide
	// FVector2D GetTouchSlide();                                                                                               // [0xa0a050] Final|Native|Public|HasDefaults 
	// Function /Script/EthInput.EthPlayerController.GetTouchPressedFlag
	// bool GetTouchPressedFlag();                                                                                              // [0xa0a010] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.GetReverseTurn
	// bool GetReverseTurn(bool bAxisX);                                                                                        // [0xa09f70] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.GetLockMouseModel
	// bool GetLockMouseModel();                                                                                                // [0xa09f40] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.GetJoystickCenterAndSize
	// bool GetJoystickCenterAndSize(int32_t ControlIndex, FVector2D& OutCenter, FVector2D& OutSize);                           // [0xa09df0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/EthInput.EthPlayerController.GetInputAxis
	// float GetInputAxis(FGameplayTag inputActEnum, bool checkUpFrame);                                                        // [0xa09d20] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.GetCurInputModel
	// EInputType GetCurInputModel();                                                                                           // [0xa09c70] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.GetCurInputMode
	// EInputMode GetCurInputMode();                                                                                            // [0xa09bc0] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.GetCurGamePadModel
	// EGamepadType GetCurGamePadModel();                                                                                       // [0xa09ba0] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.GetCameraSensitivity
	// float GetCameraSensitivity(EInputType InputType, bool bAxisX);                                                           // [0xa09ad0] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.CleanupInputKeyOnlyPC
	// void CleanupInputKeyOnlyPC();                                                                                            // [0xa09860] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.BindInputKeyOnlyPCByName
	// class UOnlyPcActionData* BindInputKeyOnlyPCByName(FName Name);                                                           // [0xa09400] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.BindInputKeyOnlyPC
	// class UOnlyPcActionData* BindInputKeyOnlyPC(FGameplayTag Key);                                                           // [0xa09360] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.AutoSetMouseCursorStyle
	// bool AutoSetMouseCursorStyle();                                                                                          // [0xa09330] Final|Native|Public  
	// Function /Script/EthInput.EthPlayerController.AddWidgetInteractionComponent
	// void AddWidgetInteractionComponent(class UWidgetInteractionComponent* Interaction);                                      // [0xa09220] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EthInput.ActionInputInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UActionInputInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/EthInput.RichTextBlockActionDecorator
/// Size: 0x0008 (0x000028 - 0x000030)
class URichTextBlockActionDecorator : public URichTextBlockDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/EthInput.UIActionInput
/// Size: 0x0140 (0x000030 - 0x000170)
class UUIActionInput : public ULocalPlayerSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(class UDataTable*)                         ActionInputTable                                            OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TMap<FName, class UDataTable*>)            IconTables                                                  OFFSET(get<T>, {0x120, 80, 0, 0})
};

/// Class /Script/EthInput.UIActionRouter
/// Size: 0x0098 (0x000030 - 0x0000C8)
class UUIActionRouter : public ULocalPlayerSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:


	/// Functions
	// Function /Script/EthInput.UIActionRouter.SetDefaultInputMode
	// void SetDefaultInputMode(EInputMode InDefaultInputMode);                                                                 // [0xa0aea0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/EthInput.KeyIconData
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FKeyIconData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FKey)                                      Key                                                         OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FSlateBrush)                               Brush                                                       OFFSET(getStruct<T>, {0x20, 208, 0, 0})
};

/// Struct /Script/EthInput.ActionInputInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FActionInputInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FKey>)                              Keys                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/EthInput.ActionInputRemapData
/// Size: 0x0058 (0x000008 - 0x000060)
class FActionInputRemapData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(EInputType)                                InputType                                                   OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(TMap<FGameplayTag, FActionInputInfo>)      RemapInputInfo                                              OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/EthInput.ActionInputData
/// Size: 0x0058 (0x000008 - 0x000060)
class FActionInputData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTag)                              ActionTag                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FActionInputInfo)                          GamepadInputInfo                                            OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FActionInputInfo)                          MouseAndKeyInputInfo                                        OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FActionInputInfo)                          TouchInputInfo                                              OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(float)                                     AxisDeadZone                                                OFFSET(get<float>, {0x58, 4, 0, 0})
};

/// Struct /Script/EthInput.ActionInputConfig
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FActionInputConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     AxisDeadZone                                                OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(TMap<EInputType, FActionInputInfo>)        ActionInputInfoMap                                          OFFSET(get<T>, {0x20, 80, 0, 0})
	CMember(TMap<EInputType, FActionInputInfo>)        RemapInputInfoMap                                           OFFSET(get<T>, {0x70, 80, 0, 0})
};

/// Enum /Script/EthInput.ENavigation
/// Size: 0x03
enum class ENavigation : uint8_t
{
	ENavigation__Current                                                             = 0,
	ENavigation__Next                                                                = 1,
	ENavigation__Previous                                                            = 2
};

/// Enum /Script/EthInput.EInputMode
/// Size: 0x04
enum class EInputMode : uint8_t
{
	EInputMode__Game                                                                 = 0,
	EInputMode__GameAndUI                                                            = 1,
	EInputMode__UI                                                                   = 2,
	EInputMode__Invalid                                                              = 4
};

/// Enum /Script/EthInput.EGamepadType
/// Size: 0x05
enum class EGamepadType : uint8_t
{
	EGamepadType__None                                                               = 0,
	EGamepadType__Xbox                                                               = 1,
	EGamepadType__PS                                                                 = 2,
	EGamepadType__NS                                                                 = 3,
	EGamepadType__Max                                                                = 4
};

/// Enum /Script/EthInput.EInputType
/// Size: 0x04
enum class EInputType : uint8_t
{
	EInputType__MouseAndKeyboard                                                     = 0,
	EInputType__Gamepad                                                              = 1,
	EInputType__Touch                                                                = 2,
	EInputType__Max                                                                  = 3
};

/// Enum /Script/EthInput.EActionInputFunction
/// Size: 0x10
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


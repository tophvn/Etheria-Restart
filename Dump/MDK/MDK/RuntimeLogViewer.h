
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/RuntimeLogViewer.RuntimeLogViewerBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class URuntimeLogViewerBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/RuntimeLogViewer.RuntimeLogViewerBlueprintLibrary.BeginListenLogOutput
	// void BeginListenLogOutput();                                                                                             // [0x118c110] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/RuntimeLogViewer.RuntimeLogViewerWidget
/// Size: 0x0020 (0x000128 - 0x000148)
class URuntimeLogViewerWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FMulticastInlineDelegate)                  OnFullScreenButtonClickedEvent                              OFFSET(getStruct<T>, {0x128, 16, 0, 0})


	/// Functions
	// Function /Script/RuntimeLogViewer.RuntimeLogViewerWidget.BeginListenEngine
	// void BeginListenEngine();                                                                                                // [0x118c0f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RuntimeLogViewer.SearchableTextComboBox
/// Size: 0x2558 (0x000128 - 0x002680)
class USearchableTextComboBox : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 9856;

public:
	CMember(TArray<FString>)                           DefaultOptions                                              OFFSET(get<T>, {0x128, 16, 0, 0})
	SMember(FString)                                   SelectedOption                                              OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FComboBoxStyle)                            WidgetStyle                                                 OFFSET(getStruct<T>, {0x150, 1472, 0, 0})
	SMember(FEditableTextBoxStyle)                     SearchBoxStyle                                              OFFSET(getStruct<T>, {0x710, 2992, 0, 0})
	SMember(FTableRowStyle)                            ItemStyle                                                   OFFSET(getStruct<T>, {0x12C0, 3008, 0, 0})
	SMember(FMargin)                                   ContentPadding                                              OFFSET(getStruct<T>, {0x1E80, 16, 0, 0})
	DMember(float)                                     MaxListHeight                                               OFFSET(get<float>, {0x1E90, 4, 0, 0})
	DMember(bool)                                      HasDownArrow                                                OFFSET(get<bool>, {0x1E94, 1, 0, 0})
	DMember(bool)                                      EnableSearchBox                                             OFFSET(get<bool>, {0x1E95, 1, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x1E98, 88, 0, 0})
	SMember(FTextBlockStyle)                           DefaultTextStyle                                            OFFSET(getStruct<T>, {0x1EF0, 864, 0, 0})
	SMember(FTextBlockStyle)                           HighlightTextStyle                                          OFFSET(getStruct<T>, {0x2250, 864, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x25B0, 40, 0, 0})
	DMember(bool)                                      bIsFocusable                                                OFFSET(get<bool>, {0x25D8, 1, 0, 0})
	SMember(FDelegateProperty)                         OnGenerateWidgetEvent                                       OFFSET(getStruct<T>, {0x25DC, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSelectionChanged                                          OFFSET(getStruct<T>, {0x25F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOpening                                                   OFFSET(getStruct<T>, {0x2600, 16, 0, 0})


	/// Functions
	// Function /Script/RuntimeLogViewer.SearchableTextComboBox.SetSelectedOption
	// void SetSelectedOption(FString Option);                                                                                  // [0x118c570] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeLogViewer.SearchableTextComboBox.SetSelectedIndex
	// void SetSelectedIndex(int32_t Index);                                                                                    // [0x118c4e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeLogViewer.SearchableTextComboBox.RemoveOption
	// bool RemoveOption(FString Option);                                                                                       // [0x118c430] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeLogViewer.SearchableTextComboBox.RefreshOptions
	// void RefreshOptions();                                                                                                   // [0x118c410] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeLogViewer.SearchableTextComboBox.OnSelectionChangedEvent__DelegateSignature
	// void OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);           // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/RuntimeLogViewer.SearchableTextComboBox.OnOpeningEvent__DelegateSignature
	// void OnOpeningEvent__DelegateSignature();                                                                                // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/RuntimeLogViewer.SearchableTextComboBox.IsOpen
	// bool IsOpen();                                                                                                           // [0x118c3e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeLogViewer.SearchableTextComboBox.GetSelectedOption
	// FString GetSelectedOption();                                                                                             // [0x118c360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeLogViewer.SearchableTextComboBox.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                              // [0x118c330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeLogViewer.SearchableTextComboBox.GetOptionCount
	// int32_t GetOptionCount();                                                                                                // [0x118c300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeLogViewer.SearchableTextComboBox.GetOptionAtIndex
	// FString GetOptionAtIndex(int32_t Index);                                                                                 // [0x118c220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeLogViewer.SearchableTextComboBox.FindOptionIndex
	// int32_t FindOptionIndex(FString Option);                                                                                 // [0x118c170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RuntimeLogViewer.SearchableTextComboBox.ClearSelection
	// void ClearSelection();                                                                                                   // [0x118c150] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeLogViewer.SearchableTextComboBox.ClearOptions
	// void ClearOptions();                                                                                                     // [0x118c130] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeLogViewer.SearchableTextComboBox.AddOptionWithFilter
	// void AddOptionWithFilter(FString Option, FString OptionFilter);                                                          // [0x118bff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RuntimeLogViewer.SearchableTextComboBox.AddOption
	// void AddOption(FString Option);                                                                                          // [0x118bf50] Final|Native|Public|BlueprintCallable 
};


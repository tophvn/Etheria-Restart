
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore

/// Class /Script/LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkDebuggerBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.HideLiveLinkDebugger
	// void HideLiveLinkDebugger();                                                                                             // [0xc43c70] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.DisplayLiveLinkDebugger
	// void DisplayLiveLinkDebugger(FString SubjectName);                                                                       // [0xc439e0] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/LiveLinkCurveDebugUI.LiveLinkDebuggerSettings
/// Size: 0x0058 (0x000028 - 0x000080)
class ULiveLinkDebuggerSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FSlateColor)                               MinBarColor                                                 OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FSlateColor)                               MaxBarColor                                                 OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	DMember(float)                                     DPIScaleMultiplier                                          OFFSET(get<float>, {0x78, 4, 0, 0})


	/// Functions
	// Function /Script/LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetDPIScaleBasedOnSize
	// float GetDPIScaleBasedOnSize(FIntPoint Size);                                                                            // [0xc43be0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetBarColorForCurveValue
	// FSlateColor GetBarColorForCurveValue(float CurveValue);                                                                  // [0xc43ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};


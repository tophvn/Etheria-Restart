
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: UMG

/// Class /Script/WebBrowserWidget.WebBrowser
/// Size: 0x0048 (0x000128 - 0x000170)
class UWebBrowser : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FMulticastInlineDelegate)                  OnUrlChanged                                                OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBeforePopup                                               OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FString)                                   InitialURL                                                  OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	DMember(bool)                                      bSupportsTransparency                                       OFFSET(get<bool>, {0x158, 1, 0, 0})


	/// Functions
	// Function /Script/WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
	// void OnUrlChanged__DelegateSignature(FText& Text);                                                                       // [0x198a600] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
	// void OnBeforePopup__DelegateSignature(FString URL, FString Frame);                                                       // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/WebBrowserWidget.WebBrowser.LoadURL
	// void LoadURL(FString NewURL);                                                                                            // [0x1060040] Final|Native|Public|BlueprintCallable 
	// Function /Script/WebBrowserWidget.WebBrowser.LoadString
	// void LoadString(FString Contents, FString DummyURL);                                                                     // [0x105fec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/WebBrowserWidget.WebBrowser.GetUrl
	// FString GetUrl();                                                                                                        // [0x105fe40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WebBrowserWidget.WebBrowser.GetTitleText
	// FText GetTitleText();                                                                                                    // [0x105fda0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WebBrowserWidget.WebBrowser.ExecuteJavascript
	// void ExecuteJavascript(FString ScriptText);                                                                              // [0x105fd00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/WebBrowserWidget.WebBrowserAssetManager
/// Size: 0x0050 (0x000028 - 0x000078)
class UWebBrowserAssetManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TWeakObjectPtr<class UMaterial*>)          DefaultMaterial                                             OFFSET(get<T>, {0x28, 8, 0, 0})
};


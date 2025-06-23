
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AkAudio
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EthInput
/// dependency: Slate
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/KV_Widgets.KV_Button
/// Size: 0x0048 (0x0005F8 - 0x000640)
class UKV_Button : public UActionInputButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	DMember(bool)                                      bOverrideDefaultAkEvent                                     OFFSET(get<bool>, {0x5F8, 1, 0, 0})
	CMember(class UAkAudioEvent*)                      AkPressEvent                                                OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(class UAkAudioEvent*)                      AkReleaseEvent                                              OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(class UAkAudioEvent*)                      AkClickEvent                                                OFFSET(get<T>, {0x610, 8, 0, 0})
	SMember(FString)                                   AkEventName                                                 OFFSET(getStruct<T>, {0x618, 16, 0, 0})
	CMember(EButtonResetMode)                          ResetMode                                                   OFFSET(get<T>, {0x628, 1, 0, 0})
	DMember(float)                                     ResetInterval                                               OFFSET(get<float>, {0x62C, 4, 0, 0})


	/// Functions
	// Function /Script/KV_Widgets.KV_Button.SetResetMode
	// void SetResetMode(EButtonResetMode Mode, float interval);                                                                // [0x9daa80] Final|Native|Public|BlueprintCallable 
	// Function /Script/KV_Widgets.KV_Button.ManualResetButton
	// void ManualResetButton();                                                                                                // [0x9da6a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KV_Widgets.KV_InfinitScrollPanel
/// Size: 0x0080 (0x000128 - 0x0001A8)
class UKV_InfinitScrollPanel : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(class UClass*)                             ItemFactoryClass                                            OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(EKV_ScrollDirection)                       ScrollDirection                                             OFFSET(get<T>, {0x130, 1, 0, 0})
	DMember(float)                                     ScrollSpeed                                                 OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     CellPadding                                                 OFFSET(get<float>, {0x138, 4, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x13C, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x13D, 1, 0, 0})
	CMember(TSet<UWidget*>)                            ReferencedWidget                                            OFFSET(get<T>, {0x150, 80, 0, 0})
	CMember(class UScrolledItemFactory*)               FactoryObject                                               OFFSET(get<T>, {0x1A0, 8, 0, 0})
};

/// Class /Script/KV_Widgets.KV_InputBlockArea
/// Size: 0x0010 (0x000140 - 0x000150)
class UKV_InputBlockArea : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/KV_Widgets.KV_JigsawPanel
/// Size: 0x00E0 (0x000150 - 0x000230)
class UKV_JigsawPanel : public UCanvasPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FSlateBrush)                               Brush                                                       OFFSET(getStruct<T>, {0x150, 208, 0, 0})
	SMember(FDelegateProperty)                         BrushDelegate                                               OFFSET(getStruct<T>, {0x220, 16, 0, 0})
};

/// Class /Script/KV_Widgets.KV_MaskBox
/// Size: 0x0028 (0x000170 - 0x000198)
class UKV_MaskBox : public URetainerBox
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(class UTexture*)                           MaskTexture                                                 OFFSET(get<T>, {0x170, 8, 0, 0})
	SMember(FIntPoint)                                 MaskSize                                                    OFFSET(getStruct<T>, {0x178, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         MaskHorizontalAlignment                                     OFFSET(get<T>, {0x180, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           MaskVerticalAlignment                                       OFFSET(get<T>, {0x181, 1, 0, 0})
	DMember(float)                                     MaskWeight                                                  OFFSET(get<float>, {0x184, 4, 0, 0})
	SMember(FName)                                     MaskTextureParameter                                        OFFSET(getStruct<T>, {0x188, 8, 0, 0})
	SMember(FName)                                     MaskWeightParameter                                         OFFSET(getStruct<T>, {0x190, 8, 0, 0})


	/// Functions
	// Function /Script/KV_Widgets.KV_MaskBox.SetMaskWeightParameter
	// void SetMaskWeightParameter(FName& Parameter);                                                                           // [0x9da9f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KV_Widgets.KV_MaskBox.SetMaskWeight
	// void SetMaskWeight(float MaskWeight);                                                                                    // [0x9da970] Final|Native|Public|BlueprintCallable 
	// Function /Script/KV_Widgets.KV_MaskBox.SetMaskTextureParameter
	// void SetMaskTextureParameter(FName& Parameter);                                                                          // [0x9da8e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KV_Widgets.KV_MaskBox.SetMaskTexture
	// void SetMaskTexture(class UTexture* MaskTexture, FIntPoint& MaskSize);                                                   // [0x9da810] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KV_Widgets.KV_MaskBox.SetMaskAlignment
	// void SetMaskAlignment(TEnumAsByte<EHorizontalAlignment> Horizontal, TEnumAsByte<EVerticalAlignment> Vertical);           // [0x9da740] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KV_Widgets.KV_ScaleAdaptor
/// Size: 0x0008 (0x000150 - 0x000158)
class UKV_ScaleAdaptor : public UOverlay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FVector2D)                                 DesignResolution                                            OFFSET(getStruct<T>, {0x150, 8, 0, 0})
};

/// Class /Script/KV_Widgets.KV_TextBlock
/// Size: 0x0030 (0x000310 - 0x000340)
class UKV_TextBlock : public UTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	DMember(bool)                                      bEnableScaleBox                                             OFFSET(get<bool>, {0x310, 1, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HAlign                                                      OFFSET(get<T>, {0x311, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VAlign                                                      OFFSET(get<T>, {0x312, 1, 0, 0})
	CMember(TEnumAsByte<EStretch>)                     Stretch                                                     OFFSET(get<T>, {0x313, 1, 0, 0})
	CMember(TEnumAsByte<EStretchDirection>)            StretchDirection                                            OFFSET(get<T>, {0x314, 1, 0, 0})
	DMember(bool)                                      bOverride_WidthOverride                                     OFFSET(get<bool>, {0x315, 1, 1, 0})
	DMember(float)                                     TextWidth                                                   OFFSET(get<float>, {0x318, 4, 0, 0})
	DMember(bool)                                      bOverride_HeightOverride                                    OFFSET(get<bool>, {0x31C, 1, 1, 0})
	DMember(float)                                     TextHeight                                                  OFFSET(get<float>, {0x320, 4, 0, 0})


	/// Functions
	// Function /Script/KV_Widgets.KV_TextBlock.SetWidthOverride
	// void SetWidthOverride(float InWidthOverride);                                                                            // [0x9dab50] Final|Native|Public|BlueprintCallable 
	// Function /Script/KV_Widgets.KV_TextBlock.SetHeightOverride
	// void SetHeightOverride(float InHeightOverride);                                                                          // [0x9da6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KV_Widgets.KV_TextBlock.ClearWidthOverride
	// void ClearWidthOverride();                                                                                               // [0x9da510] Final|Native|Public|BlueprintCallable 
	// Function /Script/KV_Widgets.KV_TextBlock.ClearHeightOverride
	// void ClearHeightOverride();                                                                                              // [0x9da4f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KV_Widgets.KV_WidgetSetting
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UKV_WidgetSetting : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TWeakObjectPtr<class UAkAudioEvent*>)      DefaultButtonPressEvent                                     OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<class UAkAudioEvent*>)      DefaultButtonReleaseEvent                                   OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TWeakObjectPtr<class UAkAudioEvent*>)      DefaultButtonClickEvent                                     OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/KV_Widgets.KV_WidgetSwitcher
/// Size: 0x0008 (0x000158 - 0x000160)
class UKV_WidgetSwitcher : public UWidgetSwitcher
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(class UAkAudioEvent*)                      AkEventOnSwitch                                             OFFSET(get<T>, {0x158, 8, 0, 0})
};

/// Class /Script/KV_Widgets.ScrolledItemFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UScrolledItemFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/KV_Widgets.ScrolledItemFactory.FactoryCreateWidget
	// class UWidget* FactoryCreateWidget(class UWidget* Context);                                                              // [0x9da600] Native|Event|Public|BlueprintEvent 
	// Function /Script/KV_Widgets.ScrolledItemFactory.ConstructUserWidget
	// class UUserWidget* ConstructUserWidget(class UObject* Context, class UClass* Class);                                     // [0x9da530] Final|Native|Protected|BlueprintCallable 
};

/// Enum /Script/KV_Widgets.EButtonResetMode
/// Size: 0x03
enum class EButtonResetMode : uint8_t
{
	EButtonResetMode__AutoReset                                                      = 0,
	EButtonResetMode__Manual                                                         = 1,
	EButtonResetMode__Fixxed                                                         = 2
};

/// Enum /Script/KV_Widgets.EKV_ScrollDirection
/// Size: 0x02
enum class EKV_ScrollDirection : uint8_t
{
	EKV_ScrollDirection__Horizontal                                                  = 0,
	EKV_ScrollDirection__Vertical                                                    = 1
};


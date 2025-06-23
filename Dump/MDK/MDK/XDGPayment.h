
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: TapCommon
/// dependency: UMG

/// Class /Script/XDGPayment.PaymentReflection
/// Size: 0x0000 (0x000028 - 0x000028)
class UPaymentReflection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/XDGPayment.PaymentReflection.CheckRefundStatusWithUI
	// void CheckRefundStatusWithUI();                                                                                          // [0xf5f760] Final|Native|Static|Public 
};

/// Class /Script/XDGPayment.XUPayHintAlert
/// Size: 0x0038 (0x000280 - 0x0002B8)
class UXUPayHintAlert : public UTapWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(class UTextBlock*)                         TitleLabel                                                  OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class UTextBlock*)                         DetailLabel                                                 OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UTextBlock*)                         ContentLabel                                                OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UTextBlock*)                         TailLabel                                                   OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UTextBlock*)                         ButtonLabel                                                 OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UButton*)                            ContactCustomerServiceButton                                OFFSET(get<T>, {0x2A8, 8, 0, 0})


	/// Functions
	// Function /Script/XDGPayment.XUPayHintAlert.OnContactCustomerServiceBtnClick
	// void OnContactCustomerServiceBtnClick();                                                                                 // [0xf5f780] Final|Native|Protected 
};

/// Class /Script/XDGPayment.XUPayWebWidget
/// Size: 0x0060 (0x0002D0 - 0x000330)
class UXUPayWebWidget : public UTapWebBrowser
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(class UNativeWidgetHost*)                  ControllerTip                                               OFFSET(get<T>, {0x320, 8, 0, 0})
};

/// Struct /Script/XDGPayment.XdgPaymentParams
/// Size: 0x0058 (0x000000 - 0x000058)
class FXdgPaymentParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   GameOrderId                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ProductId                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   RoleId                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   ServerId                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   Ext                                                         OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   Quantity                                                    OFFSET(get<int32_t>, {0x50, 4, 0, 0})
};

/// Struct /Script/XDGPayment.XDMessage
/// Size: 0x0020 (0x000000 - 0x000020)
class FXDMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Content                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};


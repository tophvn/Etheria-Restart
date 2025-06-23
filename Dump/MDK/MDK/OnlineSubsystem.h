
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/OnlineSubsystem.NamedInterface
/// Size: 0x0010 (0x000000 - 0x000010)
class FNamedInterface : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     InterfaceName                                               OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(class UObject*)                            InterfaceObject                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/OnlineSubsystem.NamedInterfaceDef
/// Size: 0x0018 (0x000000 - 0x000018)
class FNamedInterfaceDef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     InterfaceName                                               OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   InterfaceClassName                                          OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Class /Script/OnlineSubsystem.NamedInterfaces
/// Size: 0x0038 (0x000028 - 0x000060)
class UNamedInterfaces : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FNamedInterface>)                   NamedInterfaces                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FNamedInterfaceDef>)                NamedInterfaceDefs                                          OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/OnlineSubsystem.TurnBasedMatchInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTurnBasedMatchInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
	// void OnMatchReceivedTurn(FString Match, bool bDidBecomeActive);                                                          // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
	// void OnMatchEnded(FString Match);                                                                                        // [0x198a600] Event|Public|BlueprintEvent 
};

/// Struct /Script/OnlineSubsystem.InAppPurchaseProductInfo
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FInAppPurchaseProductInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FString)                                   Identifier                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   TransactionIdentifier                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   DisplayName                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   DisplayDescription                                          OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   DisplayPrice                                                OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(float)                                     RawPrice                                                    OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FString)                                   CurrencyCode                                                OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   CurrencySymbol                                              OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   DecimalSeparator                                            OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   GroupingSeparator                                           OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FString)                                   ReceiptData                                                 OFFSET(getStruct<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystem.InAppPurchaseRestoreInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FInAppPurchaseRestoreInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Identifier                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ReceiptData                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   TransactionIdentifier                                       OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystem.InAppPurchaseProductRequest
/// Size: 0x0018 (0x000000 - 0x000018)
class FInAppPurchaseProductRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ProductIdentifier                                           OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsConsumable                                               OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Enum /Script/OnlineSubsystem.EInAppPurchaseState
/// Size: 0x08
enum class EInAppPurchaseState : uint8_t
{
	EInAppPurchaseState__Unknown                                                     = 0,
	EInAppPurchaseState__Success                                                     = 1,
	EInAppPurchaseState__Failed                                                      = 2,
	EInAppPurchaseState__Cancelled                                                   = 3,
	EInAppPurchaseState__Invalid                                                     = 4,
	EInAppPurchaseState__NotAllowed                                                  = 5,
	EInAppPurchaseState__Restored                                                    = 6,
	EInAppPurchaseState__AlreadyOwned                                                = 7
};

/// Enum /Script/OnlineSubsystem.EMPMatchOutcome
/// Size: 0x10
enum class EMPMatchOutcome : uint8_t
{
	EMPMatchOutcome__None                                                            = 0,
	EMPMatchOutcome__Quit                                                            = 1,
	EMPMatchOutcome__Won                                                             = 2,
	EMPMatchOutcome__Lost                                                            = 3,
	EMPMatchOutcome__Tied                                                            = 4,
	EMPMatchOutcome__TimeExpired                                                     = 5,
	EMPMatchOutcome__First                                                           = 6,
	EMPMatchOutcome__Second                                                          = 7,
	EMPMatchOutcome__Third                                                           = 8,
	EMPMatchOutcome__Fourth                                                          = 9
};


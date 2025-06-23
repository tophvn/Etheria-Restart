
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UNamedInterfaces;
class UTurnBasedMatchInterface;

/// Enum /Script/OnlineSubsystem.EInAppPurchaseState
/// Size: 0x01 (1 bytes)
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
/// Size: 0x01 (1 bytes)
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

#pragma pack(pop)


static_assert(sizeof(FNamedInterface) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNamedInterfaceDef) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNamedInterfaces) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UTurnBasedMatchInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FInAppPurchaseProductInfo) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FInAppPurchaseRestoreInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FInAppPurchaseProductRequest) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FNamedInterface, InterfaceName) == 0x0000);
static_assert(offsetof(FNamedInterface, InterfaceObject) == 0x0008);
static_assert(offsetof(FNamedInterfaceDef, InterfaceName) == 0x0000);
static_assert(offsetof(FNamedInterfaceDef, InterfaceClassName) == 0x0008);
static_assert(offsetof(UNamedInterfaces, NamedInterfaces) == 0x0028);
static_assert(offsetof(UNamedInterfaces, NamedInterfaceDefs) == 0x0038);
static_assert(offsetof(FInAppPurchaseProductInfo, Identifier) == 0x0000);
static_assert(offsetof(FInAppPurchaseProductInfo, TransactionIdentifier) == 0x0010);
static_assert(offsetof(FInAppPurchaseProductInfo, DisplayName) == 0x0020);
static_assert(offsetof(FInAppPurchaseProductInfo, DisplayDescription) == 0x0030);
static_assert(offsetof(FInAppPurchaseProductInfo, DisplayPrice) == 0x0040);
static_assert(offsetof(FInAppPurchaseProductInfo, CurrencyCode) == 0x0058);
static_assert(offsetof(FInAppPurchaseProductInfo, CurrencySymbol) == 0x0068);
static_assert(offsetof(FInAppPurchaseProductInfo, DecimalSeparator) == 0x0078);
static_assert(offsetof(FInAppPurchaseProductInfo, GroupingSeparator) == 0x0088);
static_assert(offsetof(FInAppPurchaseProductInfo, ReceiptData) == 0x0098);
static_assert(offsetof(FInAppPurchaseRestoreInfo, Identifier) == 0x0000);
static_assert(offsetof(FInAppPurchaseRestoreInfo, ReceiptData) == 0x0010);
static_assert(offsetof(FInAppPurchaseRestoreInfo, TransactionIdentifier) == 0x0020);
static_assert(offsetof(FInAppPurchaseProductRequest, ProductIdentifier) == 0x0000);

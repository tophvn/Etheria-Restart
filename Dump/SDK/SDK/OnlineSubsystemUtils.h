
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "OnlineSubsystem.h"

#pragma pack(push, 0x1)

class AOnlineBeacon;
class AOnlineBeaconClient;
class AOnlineBeaconHost;
class AOnlineBeaconHostObject;
class APartyBeaconClient;
class APartyBeaconHost;
class ASpectatorBeaconClient;
class ASpectatorBeaconHost;
class ATestBeaconClient;
class ATestBeaconHost;
class UAchievementBlueprintLibrary;
class UAchievementQueryCallbackProxy;
class UAchievementWriteCallbackProxy;
class UConnectionCallbackProxy;
class UCreateSessionCallbackProxy;
class UDestroySessionCallbackProxy;
class UEndMatchCallbackProxy;
class UEndTurnCallbackProxy;
class UFindSessionsCallbackProxy;
class UFindTurnBasedMatchCallbackProxy;
class UInAppPurchaseCallbackProxy;
class UInAppPurchaseCallbackProxy2;
class UInAppPurchaseQueryCallbackProxy;
class UInAppPurchaseQueryCallbackProxy2;
class UInAppPurchaseRestoreCallbackProxy;
class UInAppPurchaseRestoreCallbackProxy2;
class UIpConnection;
class UIpNetDriver;
class UJoinSessionCallbackProxy;
class ULeaderboardBlueprintLibrary;
class ULeaderboardFlushCallbackProxy;
class ULeaderboardQueryCallbackProxy;
class ULogoutCallbackProxy;
class UOnlineEngineInterfaceImpl;
class UOnlinePIESettings;
class UOnlineSessionClient;
class UPartyBeaconState;
class UQuitMatchCallbackProxy;
class UShowLoginUICallbackProxy;
class USpectatorBeaconState;
class UTurnBasedBlueprintLibrary;
class UVoipListenerSynthComponent;

/// Enum /Script/OnlineSubsystemUtils.EInAppPurchaseStatus
/// Size: 0x01 (1 bytes)
enum class EInAppPurchaseStatus : uint8_t
{
	EInAppPurchaseStatus__Invalid                                                    = 0,
	EInAppPurchaseStatus__Failed                                                     = 1,
	EInAppPurchaseStatus__Deferred                                                   = 2,
	EInAppPurchaseStatus__Canceled                                                   = 3,
	EInAppPurchaseStatus__Purchased                                                  = 4,
	EInAppPurchaseStatus__Restored                                                   = 5
};

/// Enum /Script/OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
/// Size: 0x01 (1 bytes)
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
	EOnlineProxyStoreOfferDiscountType__NotOnSale                                    = 0,
	EOnlineProxyStoreOfferDiscountType__Percentage                                   = 1,
	EOnlineProxyStoreOfferDiscountType__DiscountAmount                               = 2,
	EOnlineProxyStoreOfferDiscountType__PayAmount                                    = 3
};

/// Enum /Script/OnlineSubsystemUtils.EBeaconConnectionState
/// Size: 0x01 (1 bytes)
enum class EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid                                                  = 0,
	EBeaconConnectionState__Closed                                                   = 1,
	EBeaconConnectionState__Pending                                                  = 2,
	EBeaconConnectionState__Open                                                     = 3
};

/// Enum /Script/OnlineSubsystemUtils.EClientRequestType
/// Size: 0x01 (1 bytes)
enum class EClientRequestType : uint8_t
{
	EClientRequestType__NonePending                                                  = 0,
	EClientRequestType__ExistingSessionReservation                                   = 1,
	EClientRequestType__ReservationUpdate                                            = 2,
	EClientRequestType__EmptyServerReservation                                       = 3,
	EClientRequestType__Reconnect                                                    = 4,
	EClientRequestType__Abandon                                                      = 5,
	EClientRequestType__ReservationRemoveMembers                                     = 6
};

/// Enum /Script/OnlineSubsystemUtils.EPartyReservationResult
/// Size: 0x01 (1 bytes)
enum class EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult                                                = 0,
	EPartyReservationResult__RequestPending                                          = 1,
	EPartyReservationResult__GeneralError                                            = 2,
	EPartyReservationResult__PartyLimitReached                                       = 3,
	EPartyReservationResult__IncorrectPlayerCount                                    = 4,
	EPartyReservationResult__RequestTimedOut                                         = 5,
	EPartyReservationResult__ReservationDuplicate                                    = 6,
	EPartyReservationResult__ReservationNotFound                                     = 7,
	EPartyReservationResult__ReservationAccepted                                     = 8,
	EPartyReservationResult__ReservationDenied                                       = 9,
	EPartyReservationResult__ReservationDenied_CrossPlayRestriction                  = 10,
	EPartyReservationResult__ReservationDenied_Banned                                = 11,
	EPartyReservationResult__ReservationRequestCanceled                              = 12,
	EPartyReservationResult__ReservationInvalid                                      = 13,
	EPartyReservationResult__BadSessionId                                            = 14,
	EPartyReservationResult__ReservationDenied_ContainsExistingPlayers               = 15
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorClientRequestType
/// Size: 0x01 (1 bytes)
enum class ESpectatorClientRequestType : uint8_t
{
	ESpectatorClientRequestType__NonePending                                         = 0,
	ESpectatorClientRequestType__ExistingSessionReservation                          = 1,
	ESpectatorClientRequestType__ReservationUpdate                                   = 2,
	ESpectatorClientRequestType__EmptyServerReservation                              = 3,
	ESpectatorClientRequestType__Reconnect                                           = 4,
	ESpectatorClientRequestType__Abandon                                             = 5
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorReservationResult
/// Size: 0x01 (1 bytes)
enum class ESpectatorReservationResult : uint8_t
{
	ESpectatorReservationResult__NoResult                                            = 0,
	ESpectatorReservationResult__RequestPending                                      = 1,
	ESpectatorReservationResult__GeneralError                                        = 2,
	ESpectatorReservationResult__SpectatorLimitReached                               = 3,
	ESpectatorReservationResult__IncorrectPlayerCount                                = 4,
	ESpectatorReservationResult__RequestTimedOut                                     = 5,
	ESpectatorReservationResult__ReservationDuplicate                                = 6,
	ESpectatorReservationResult__ReservationNotFound                                 = 7,
	ESpectatorReservationResult__ReservationAccepted                                 = 8,
	ESpectatorReservationResult__ReservationDenied                                   = 9,
	ESpectatorReservationResult__ReservationDenied_CrossPlayRestriction              = 10,
	ESpectatorReservationResult__ReservationDenied_Banned                            = 11,
	ESpectatorReservationResult__ReservationRequestCanceled                          = 12,
	ESpectatorReservationResult__ReservationInvalid                                  = 13,
	ESpectatorReservationResult__BadSessionId                                        = 14,
	ESpectatorReservationResult__ReservationDenied_ContainsExistingPlayers           = 15
};

#pragma pack(pop)


static_assert(sizeof(UAchievementBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAchievementQueryCallbackProxy) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UAchievementWriteCallbackProxy) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UConnectionCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UCreateSessionCallbackProxy) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UDestroySessionCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UEndMatchCallbackProxy) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UEndTurnCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UFindSessionsCallbackProxy) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UFindTurnBasedMatchCallbackProxy) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UInAppPurchaseCallbackProxy) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UInAppPurchaseCallbackProxy2) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UInAppPurchaseQueryCallbackProxy) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UInAppPurchaseQueryCallbackProxy2) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UInAppPurchaseRestoreCallbackProxy) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UInAppPurchaseRestoreCallbackProxy2) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UIpConnection) == 0x1B90); // 7056 bytes (0x001AF0 - 0x001B90)
static_assert(sizeof(UIpNetDriver) == 0x07B8); // 1976 bytes (0x000748 - 0x0007B8)
static_assert(sizeof(UJoinSessionCallbackProxy) == 0x0180); // 384 bytes (0x000030 - 0x000180)
static_assert(sizeof(ULeaderboardBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULeaderboardFlushCallbackProxy) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(ULeaderboardQueryCallbackProxy) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(ULogoutCallbackProxy) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(AOnlineBeacon) == 0x0250); // 592 bytes (0x000220 - 0x000250)
static_assert(sizeof(AOnlineBeaconClient) == 0x02B0); // 688 bytes (0x000250 - 0x0002B0)
static_assert(sizeof(AOnlineBeaconHost) == 0x0308); // 776 bytes (0x000250 - 0x000308)
static_assert(sizeof(AOnlineBeaconHostObject) == 0x0248); // 584 bytes (0x000220 - 0x000248)
static_assert(sizeof(UOnlineEngineInterfaceImpl) == 0x0128); // 296 bytes (0x000028 - 0x000128)
static_assert(sizeof(FPIELoginSettingsInternal) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UOnlinePIESettings) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UOnlineSessionClient) == 0x01E0); // 480 bytes (0x000028 - 0x0001E0)
static_assert(sizeof(FPlayerReservation) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FPartyReservation) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(APartyBeaconClient) == 0x0370); // 880 bytes (0x0002B0 - 0x000370)
static_assert(sizeof(APartyBeaconHost) == 0x02C0); // 704 bytes (0x000248 - 0x0002C0)
static_assert(sizeof(UPartyBeaconState) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UQuitMatchCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UShowLoginUICallbackProxy) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(FSpectatorReservation) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(ASpectatorBeaconClient) == 0x0398); // 920 bytes (0x0002B0 - 0x000398)
static_assert(sizeof(ASpectatorBeaconHost) == 0x02C0); // 704 bytes (0x000248 - 0x0002C0)
static_assert(sizeof(USpectatorBeaconState) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(ATestBeaconClient) == 0x02B0); // 688 bytes (0x0002B0 - 0x0002B0)
static_assert(sizeof(ATestBeaconHost) == 0x0248); // 584 bytes (0x000248 - 0x000248)
static_assert(sizeof(UTurnBasedBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVoipListenerSynthComponent) == 0x0720); // 1824 bytes (0x0006C0 - 0x000720)
static_assert(sizeof(FBlueprintSessionResult) == 0x0108); // 264 bytes (0x000000 - 0x000108)
static_assert(sizeof(FInAppPurchaseReceiptInfo2) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FOnlineProxyStoreOffer) == 0x0110); // 272 bytes (0x000000 - 0x000110)
static_assert(sizeof(FInAppPurchaseRestoreInfo2) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FInAppPurchaseReceiptInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FInAppPurchaseProductInfo2) == 0x00F8); // 248 bytes (0x000000 - 0x0000F8)
static_assert(sizeof(FInAppPurchaseProductRequest2) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(AOnlineBeacon, NetDriver) == 0x0230);
static_assert(offsetof(AOnlineBeaconClient, BeaconOwner) == 0x0250);
static_assert(offsetof(AOnlineBeaconClient, BeaconConnection) == 0x0258);
static_assert(offsetof(AOnlineBeaconClient, ConnectionState) == 0x0260);
static_assert(offsetof(AOnlineBeaconHost, ClientActors) == 0x0258);
static_assert(offsetof(AOnlineBeaconHostObject, BeaconTypeName) == 0x0220);
static_assert(offsetof(AOnlineBeaconHostObject, ClientBeaconActorClass) == 0x0230);
static_assert(offsetof(AOnlineBeaconHostObject, ClientActors) == 0x0238);
static_assert(offsetof(UOnlineEngineInterfaceImpl, VoiceSubsystemNameOverride) == 0x0028);
static_assert(offsetof(FPIELoginSettingsInternal, ID) == 0x0000);
static_assert(offsetof(FPIELoginSettingsInternal, token) == 0x0010);
static_assert(offsetof(FPIELoginSettingsInternal, Type) == 0x0020);
static_assert(offsetof(FPIELoginSettingsInternal, TokenBytes) == 0x0030);
static_assert(offsetof(UOnlinePIESettings, Logins) == 0x0040);
static_assert(offsetof(FPlayerReservation, UniqueId) == 0x0000);
static_assert(offsetof(FPlayerReservation, ValidationStr) == 0x0028);
static_assert(offsetof(FPlayerReservation, platform) == 0x0038);
static_assert(offsetof(FPartyReservation, PartyLeader) == 0x0008);
static_assert(offsetof(FPartyReservation, PartyMembers) == 0x0030);
static_assert(offsetof(FPartyReservation, RemovedPartyMembers) == 0x0040);
static_assert(offsetof(APartyBeaconClient, DestSessionId) == 0x02E0);
static_assert(offsetof(APartyBeaconClient, PendingReservation) == 0x02F0);
static_assert(offsetof(APartyBeaconClient, RequestType) == 0x0340);
static_assert(offsetof(APartyBeaconHost, State) == 0x0248);
static_assert(offsetof(UPartyBeaconState, SessionName) == 0x0028);
static_assert(offsetof(UPartyBeaconState, TeamAssignmentMethod) == 0x0040);
static_assert(offsetof(UPartyBeaconState, Reservations) == 0x0058);
static_assert(offsetof(FSpectatorReservation, SpectatorId) == 0x0000);
static_assert(offsetof(FSpectatorReservation, Spectator) == 0x0028);
static_assert(offsetof(ASpectatorBeaconClient, DestSessionId) == 0x02E0);
static_assert(offsetof(ASpectatorBeaconClient, PendingReservation) == 0x02F0);
static_assert(offsetof(ASpectatorBeaconClient, RequestType) == 0x0368);
static_assert(offsetof(ASpectatorBeaconHost, State) == 0x0248);
static_assert(offsetof(USpectatorBeaconState, SessionName) == 0x0028);
static_assert(offsetof(USpectatorBeaconState, Reservations) == 0x0040);
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ItemName) == 0x0000);
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ItemId) == 0x0010);
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ValidationInfo) == 0x0020);
static_assert(offsetof(FOnlineProxyStoreOffer, OfferId) == 0x0000);
static_assert(offsetof(FOnlineProxyStoreOffer, Title) == 0x0010);
static_assert(offsetof(FOnlineProxyStoreOffer, Description) == 0x0028);
static_assert(offsetof(FOnlineProxyStoreOffer, LongDescription) == 0x0040);
static_assert(offsetof(FOnlineProxyStoreOffer, RegularPriceText) == 0x0058);
static_assert(offsetof(FOnlineProxyStoreOffer, PriceText) == 0x0078);
static_assert(offsetof(FOnlineProxyStoreOffer, CurrencyCode) == 0x0098);
static_assert(offsetof(FOnlineProxyStoreOffer, ReleaseDate) == 0x00A8);
static_assert(offsetof(FOnlineProxyStoreOffer, ExpirationDate) == 0x00B0);
static_assert(offsetof(FOnlineProxyStoreOffer, DiscountType) == 0x00B8);
static_assert(offsetof(FOnlineProxyStoreOffer, DynamicFields) == 0x00C0);
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ItemName) == 0x0000);
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ItemId) == 0x0010);
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ValidationInfo) == 0x0020);
static_assert(offsetof(FInAppPurchaseReceiptInfo, ItemName) == 0x0000);
static_assert(offsetof(FInAppPurchaseReceiptInfo, ItemId) == 0x0010);
static_assert(offsetof(FInAppPurchaseReceiptInfo, ValidationInfo) == 0x0020);
static_assert(offsetof(FInAppPurchaseProductInfo2, Identifier) == 0x0000);
static_assert(offsetof(FInAppPurchaseProductInfo2, TransactionIdentifier) == 0x0010);
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayName) == 0x0020);
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayDescription) == 0x0030);
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayPrice) == 0x0040);
static_assert(offsetof(FInAppPurchaseProductInfo2, CurrencyCode) == 0x0058);
static_assert(offsetof(FInAppPurchaseProductInfo2, CurrencySymbol) == 0x0068);
static_assert(offsetof(FInAppPurchaseProductInfo2, DecimalSeparator) == 0x0078);
static_assert(offsetof(FInAppPurchaseProductInfo2, GroupingSeparator) == 0x0088);
static_assert(offsetof(FInAppPurchaseProductInfo2, ReceiptData) == 0x0098);
static_assert(offsetof(FInAppPurchaseProductInfo2, DynamicFields) == 0x00A8);
static_assert(offsetof(FInAppPurchaseProductRequest2, ProductIdentifier) == 0x0000);

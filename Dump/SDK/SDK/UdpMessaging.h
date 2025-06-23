
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UUdpMessagingSettings;

/// Enum /Script/UdpMessaging.EUdpMessageFormat
/// Size: 0x01 (1 bytes)
enum class EUdpMessageFormat : uint8_t
{
	EUdpMessageFormat__None                                                          = 0,
	EUdpMessageFormat__Json                                                          = 1,
	EUdpMessageFormat__TaggedProperty                                                = 2,
	EUdpMessageFormat__CborPlatformEndianness                                        = 3,
	EUdpMessageFormat__CborStandardEndianness                                        = 4
};

#pragma pack(pop)


static_assert(sizeof(UUdpMessagingSettings) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(FUdpMockMessage) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UUdpMessagingSettings, UnicastEndpoint) == 0x0030);
static_assert(offsetof(UUdpMessagingSettings, MulticastEndpoint) == 0x0040);
static_assert(offsetof(UUdpMessagingSettings, MessageFormat) == 0x0050);
static_assert(offsetof(UUdpMessagingSettings, StaticEndpoints) == 0x0058);
static_assert(offsetof(UUdpMessagingSettings, TunnelUnicastEndpoint) == 0x0070);
static_assert(offsetof(UUdpMessagingSettings, TunnelMulticastEndpoint) == 0x0080);
static_assert(offsetof(UUdpMessagingSettings, RemoteTunnelEndpoints) == 0x0090);
static_assert(offsetof(FUdpMockMessage, Data) == 0x0000);

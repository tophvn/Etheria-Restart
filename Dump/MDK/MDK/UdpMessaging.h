
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/UdpMessaging.UdpMessagingSettings
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UUdpMessagingSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      EnabledByDefault                                            OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      EnableTransport                                             OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bAutoRepair                                                 OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bStopServiceWhenAppDeactivates                              OFFSET(get<bool>, {0x2B, 1, 0, 0})
	SMember(FString)                                   UnicastEndpoint                                             OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   MulticastEndpoint                                           OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(EUdpMessageFormat)                         MessageFormat                                               OFFSET(get<T>, {0x50, 1, 0, 0})
	DMember(char)                                      MulticastTimeToLive                                         OFFSET(get<char>, {0x51, 1, 0, 0})
	CMember(TArray<FString>)                           StaticEndpoints                                             OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      EnableTunnel                                                OFFSET(get<bool>, {0x68, 1, 0, 0})
	SMember(FString)                                   TunnelUnicastEndpoint                                       OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   TunnelMulticastEndpoint                                     OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	CMember(TArray<FString>)                           RemoteTunnelEndpoints                                       OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/UdpMessaging.UdpMockMessage
/// Size: 0x0010 (0x000000 - 0x000010)
class FUdpMockMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<char>)                              Data                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/UdpMessaging.EUdpMessageFormat
/// Size: 0x05
enum class EUdpMessageFormat : uint8_t
{
	EUdpMessageFormat__None                                                          = 0,
	EUdpMessageFormat__Json                                                          = 1,
	EUdpMessageFormat__TaggedProperty                                                = 2,
	EUdpMessageFormat__CborPlatformEndianness                                        = 3,
	EUdpMessageFormat__CborStandardEndianness                                        = 4
};


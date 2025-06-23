
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)


#pragma pack(pop)


static_assert(sizeof(FDirectLinkMsg_HaveListMessage) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FDirectLinkMsg_DeltaMessage) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FDirectLinkMsg_CloseStreamRequest) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FDirectLinkMsg_OpenStreamAnswer) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FDirectLinkMsg_OpenStreamRequest) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FDirectLinkMsg_QueryEndpointState) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNamedId) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FDirectLinkMsg_EndpointState) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FDirectLinkMsg_EndpointLifecycle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(FDirectLinkMsg_HaveListMessage, Payload) == 0x0010);
static_assert(offsetof(FDirectLinkMsg_HaveListMessage, NodeIds) == 0x0020);
static_assert(offsetof(FDirectLinkMsg_HaveListMessage, Hashes) == 0x0030);
static_assert(offsetof(FDirectLinkMsg_DeltaMessage, Payload) == 0x0010);
static_assert(offsetof(FDirectLinkMsg_OpenStreamAnswer, Error) == 0x0008);
static_assert(offsetof(FDirectLinkMsg_OpenStreamRequest, SourceGuid) == 0x0008);
static_assert(offsetof(FDirectLinkMsg_OpenStreamRequest, DestinationGuid) == 0x0018);
static_assert(offsetof(FNamedId, Name) == 0x0000);
static_assert(offsetof(FNamedId, ID) == 0x0010);
static_assert(offsetof(FDirectLinkMsg_EndpointState, ComputerName) == 0x0010);
static_assert(offsetof(FDirectLinkMsg_EndpointState, username) == 0x0020);
static_assert(offsetof(FDirectLinkMsg_EndpointState, ExecutableName) == 0x0038);
static_assert(offsetof(FDirectLinkMsg_EndpointState, NiceName) == 0x0048);
static_assert(offsetof(FDirectLinkMsg_EndpointState, Destinations) == 0x0058);
static_assert(offsetof(FDirectLinkMsg_EndpointState, Sources) == 0x0068);

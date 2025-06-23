
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "LiveLinkInterface.h"

#pragma pack(push, 0x1)


#pragma pack(pop)


static_assert(sizeof(FLiveLinkSubjectFrameMessage) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FLiveLinkSubjectDataMessage) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FLiveLinkClearSubject) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLiveLinkHeartbeatMessage) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLiveLinkConnectMessage) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FLiveLinkPongMessage) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FLiveLinkPingMessage) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(offsetof(FLiveLinkSubjectFrameMessage, SubjectName) == 0x0000);
static_assert(offsetof(FLiveLinkSubjectFrameMessage, Transforms) == 0x0008);
static_assert(offsetof(FLiveLinkSubjectFrameMessage, Curves) == 0x0018);
static_assert(offsetof(FLiveLinkSubjectFrameMessage, MetaData) == 0x0028);
static_assert(offsetof(FLiveLinkSubjectDataMessage, RefSkeleton) == 0x0000);
static_assert(offsetof(FLiveLinkSubjectDataMessage, SubjectName) == 0x0020);
static_assert(offsetof(FLiveLinkClearSubject, SubjectName) == 0x0000);
static_assert(offsetof(FLiveLinkPongMessage, ProviderName) == 0x0000);
static_assert(offsetof(FLiveLinkPongMessage, MachineName) == 0x0010);
static_assert(offsetof(FLiveLinkPongMessage, PollRequest) == 0x0020);
static_assert(offsetof(FLiveLinkPingMessage, PollRequest) == 0x0000);


/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "JsonUtilities.h"

#pragma pack(push, 0x1)


#pragma pack(pop)


static_assert(sizeof(FFetchAnnouncementsResponseData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FAnnouncementStorage) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(offsetof(FFetchAnnouncementsResponseData, ID) == 0x0000);
static_assert(offsetof(FFetchAnnouncementsResponseData, Type) == 0x0010);
static_assert(offsetof(FFetchAnnouncementsResponseData, ShortTitle) == 0x0020);
static_assert(offsetof(FFetchAnnouncementsResponseData, LongTitle) == 0x0030);
static_assert(offsetof(FFetchAnnouncementsResponseData, Link) == 0x0050);
static_assert(offsetof(FFetchAnnouncementsResponseData, Image) == 0x0060);
static_assert(offsetof(FFetchAnnouncementsResponseData, Dimensions) == 0x0070);
static_assert(offsetof(FFetchAnnouncementsResponseData, Content) == 0x0080);
static_assert(offsetof(FAnnouncementStorage, Expires) == 0x0000);
static_assert(offsetof(FAnnouncementStorage, ETag) == 0x0008);
static_assert(offsetof(FAnnouncementStorage, LastModifiedTime) == 0x0018);
static_assert(offsetof(FAnnouncementStorage, ServerTime) == 0x0020);
static_assert(offsetof(FAnnouncementStorage, ResponseData) == 0x0028);

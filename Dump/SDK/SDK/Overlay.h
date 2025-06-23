
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UBasicOverlays;
class ULocalizedOverlays;
class UOverlays;

#pragma pack(pop)


static_assert(sizeof(UOverlays) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FOverlayItem) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UBasicOverlays) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ULocalizedOverlays) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(offsetof(FOverlayItem, StartTime) == 0x0000);
static_assert(offsetof(FOverlayItem, EndTime) == 0x0008);
static_assert(offsetof(FOverlayItem, Text) == 0x0010);
static_assert(offsetof(FOverlayItem, Position) == 0x0020);
static_assert(offsetof(UBasicOverlays, Overlays) == 0x0028);
static_assert(offsetof(ULocalizedOverlays, DefaultOverlays) == 0x0028);
static_assert(offsetof(ULocalizedOverlays, LocaleToOverlaysMap) == 0x0030);

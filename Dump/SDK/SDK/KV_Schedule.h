
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UKV_AttachDecorate;
class UKV_TaskDecorObject;
class UKV_TaskObject;
class UKV_TaskScheduleState;
class UKV_TaskScheduler;

/// Enum /Script/KV_Schedule.EScheduleReply
/// Size: 0x01 (1 bytes)
enum class EScheduleReply : uint8_t
{
	EScheduleReply__No_Reply                                                         = 0,
	EScheduleReply__Reply_Should                                                     = 1,
	EScheduleReply__Reply_Reject                                                     = 2
};

#pragma pack(pop)


static_assert(sizeof(UKV_TaskDecorObject) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKV_AttachDecorate) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKV_TaskObject) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UKV_TaskScheduler) == 0x01B8); // 440 bytes (0x000028 - 0x0001B8)
static_assert(sizeof(UKV_TaskScheduleState) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(FKV_ScheduleEvent) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(offsetof(UKV_TaskScheduler, ScheduleState) == 0x0138);

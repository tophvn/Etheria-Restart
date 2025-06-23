
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class UProtoSchema;

/// Enum /Script/ProtoCodec.EProtoChannel
/// Size: 0x01 (1 bytes)
enum class EProtoChannel : uint8_t
{
	EProtoChannel__CHAN_SYSTEM                                                       = 0,
	EProtoChannel__CHAN_NORMAL                                                       = 1
};

/// Enum /Script/ProtoCodec.EProtoRetryPolicy
/// Size: 0x01 (1 bytes)
enum class EProtoRetryPolicy : uint8_t
{
	EProtoRetryPolicy__NoRetry                                                       = 0,
	EProtoRetryPolicy__General                                                       = 1,
	EProtoRetryPolicy__Infinity                                                      = 2
};

#pragma pack(pop)


static_assert(sizeof(FProtoMeta) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UProtoSchema) == 0x00F0); // 240 bytes (0x000030 - 0x0000F0)
static_assert(offsetof(FProtoMeta, RetryPolicy) == 0x0009);
static_assert(offsetof(FProtoMeta, Channel) == 0x000A);
static_assert(offsetof(UProtoSchema, CMapping) == 0x0030);
static_assert(offsetof(UProtoSchema, SMapping) == 0x0080);
static_assert(offsetof(UProtoSchema, Data) == 0x00D0);
static_assert(offsetof(UProtoSchema, ProtoMeta) == 0x00E0);

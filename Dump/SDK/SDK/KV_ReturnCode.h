
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

class UKV_ReturnCodeLibrary;
class UKV_ReturnCodeSetting;

/// Enum /Script/KV_ReturnCode.EKV_RetHandleResult
/// Size: 0x01 (1 bytes)
enum class EKV_RetHandleResult : uint8_t
{
	EKV_RetHandleResult__RES_Succeed                                                 = 0,
	EKV_RetHandleResult__RES_Handled                                                 = 1,
	EKV_RetHandleResult__RES_Unhandled                                               = 2
};

/// Enum /Script/KV_ReturnCode.EKV_ReturnCodeType
/// Size: 0x01 (1 bytes)
enum class EKV_ReturnCodeType : uint8_t
{
	EKV_ReturnCodeType__RT_GeneralError                                              = 0,
	EKV_ReturnCodeType__RT_VerifyExpire                                              = 1,
	EKV_ReturnCodeType__RT_GameLogout                                                = 2,
	EKV_ReturnCodeType__RT_AccountLogout                                             = 3,
	EKV_ReturnCodeType__RT_AccountExpire                                             = 4,
	EKV_ReturnCodeType__RT_NeedUpdate                                                = 5,
	EKV_ReturnCodeType__RT_NeedPatch                                                 = 6,
	EKV_ReturnCodeType__RT_Corrupted                                                 = 7,
	EKV_ReturnCodeType__RT_ServerInvalid                                             = 8,
	EKV_ReturnCodeType__RT_NeedRegister                                              = 9,
	EKV_ReturnCodeType__RT_Succeed                                                   = 255
};

#pragma pack(pop)


static_assert(sizeof(UKV_ReturnCodeLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FReturnCodeSpace) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UKV_ReturnCodeSetting) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FKV_ReturnCodeStruct) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(offsetof(FReturnCodeSpace, Name) == 0x0000);
static_assert(offsetof(FReturnCodeSpace, DataTable) == 0x0018);
static_assert(offsetof(UKV_ReturnCodeSetting, Declarations) == 0x0028);
static_assert(offsetof(UKV_ReturnCodeSetting, DefaultMessageFormat) == 0x0038);
static_assert(offsetof(FKV_ReturnCodeStruct, CodeName) == 0x0010);
static_assert(offsetof(FKV_ReturnCodeStruct, CodeMessage) == 0x0020);
static_assert(offsetof(FKV_ReturnCodeStruct, CodeType) == 0x0038);

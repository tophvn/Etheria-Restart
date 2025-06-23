
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UKWSDKSettings;

/// Enum /Script/KWSDK.EKWSDKServer
/// Size: 0x01 (1 bytes)
enum class EKWSDKServer : uint8_t
{
	EKWSDKServer__None                                                               = 0,
	EKWSDKServer__Staging                                                            = 1,
	EKWSDKServer__Prod                                                               = 2,
	EKWSDKServer__Oversea                                                            = 3
};

#pragma pack(pop)


static_assert(sizeof(FKWSDKSetting) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UKWSDKSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(offsetof(FKWSDKSetting, Server) == 0x0000);
static_assert(offsetof(FKWSDKSetting, ProjectID) == 0x0008);
static_assert(offsetof(FKWSDKSetting, AndroidAppKey) == 0x0018);
static_assert(offsetof(FKWSDKSetting, IOSAppKey) == 0x0028);
static_assert(offsetof(FKWSDKSetting, WindowsAppKey) == 0x0038);
static_assert(offsetof(UKWSDKSettings, KWSDKSettings) == 0x0028);

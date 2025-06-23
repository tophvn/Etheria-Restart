
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "GameUE.h"
#include "Gauntlet.h"

#pragma pack(push, 0x1)

class UDelayTask;
class UEtheriaGauntletController;
class UEtheriaGauntletSetting;
class UEtheriaGauntletTask;
class UEtheriaGauntletTest;

/// Enum /Script/EtheriaGauntlet.EGauntletTaskResult
/// Size: 0x01 (1 bytes)
enum class EGauntletTaskResult : uint8_t
{
	EGauntletTaskResult__WaitResult                                                  = 0,
	EGauntletTaskResult__ResultOK                                                    = 1,
	EGauntletTaskResult__ResultFailed                                                = 2
};

#pragma pack(pop)


static_assert(sizeof(UEtheriaGauntletTask) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UDelayTask) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UEtheriaGauntletController) == 0x0128); // 296 bytes (0x000030 - 0x000128)
static_assert(sizeof(UEtheriaGauntletSetting) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UEtheriaGauntletTest) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(offsetof(UEtheriaGauntletTask, Controller) == 0x0028);
static_assert(offsetof(UEtheriaGauntletTask, TaskKey) == 0x0030);
static_assert(offsetof(UEtheriaGauntletTask, TaskName) == 0x0040);
static_assert(offsetof(UEtheriaGauntletTask, CaseScope) == 0x0050);
static_assert(offsetof(UEtheriaGauntletController, DefaultTestClass) == 0x0040);
static_assert(offsetof(UEtheriaGauntletController, GauntletTest) == 0x0070);
static_assert(offsetof(UEtheriaGauntletController, AutomationAgent) == 0x0098);
static_assert(offsetof(UEtheriaGauntletController, BuiltTaskFlow) == 0x00A0);
static_assert(offsetof(UEtheriaGauntletController, CurrentTask) == 0x00B0);
static_assert(offsetof(UEtheriaGauntletSetting, Channel) == 0x0038);
static_assert(offsetof(UEtheriaGauntletSetting, GauntletControllerClass) == 0x0048);
static_assert(offsetof(UEtheriaGauntletSetting, GauntletTestClass) == 0x0050);
static_assert(offsetof(UEtheriaGauntletSetting, GauntletHostAddress) == 0x0060);
static_assert(offsetof(UEtheriaGauntletTest, AccountId) == 0x0030);
static_assert(offsetof(UEtheriaGauntletTest, Password) == 0x0040);
static_assert(offsetof(UEtheriaGauntletTest, channelId) == 0x0058);
static_assert(offsetof(UEtheriaGauntletTest, GauntletTestName) == 0x0068);
static_assert(offsetof(UEtheriaGauntletTest, TaskFlow) == 0x00C8);
static_assert(offsetof(UEtheriaGauntletTest, CurrentTask) == 0x00D8);
static_assert(offsetof(UEtheriaGauntletTest, Controller) == 0x00E0);

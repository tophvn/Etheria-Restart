
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UGameFlowsheet;
class UGameFlowsheetNodeInterface;
class UGameFlowsheet_BaseNode;
class UGameFlowsheet_EndNode;
class UGameFlowsheet_FunctionalNode;
class UGameFlowsheet_LogicNode;
class UGameFlowsheet_MonsterBattleNode;
class UGameFlowsheet_RootNode;

/// Enum /Script/GameFlowsheetRuntime.EFlowNodeFlagBit
/// Size: 0x01 (1 bytes)
enum class EFlowNodeFlagBit : uint8_t
{
	EFlowNodeFlagBit__Bit_Determinate                                                = 0,
	EFlowNodeFlagBit__Bit_BreakPoint                                                 = 1
};

/// Enum /Script/GameFlowsheetRuntime.EGameFlowsheet_LogicType
/// Size: 0x04 (4 bytes)
enum class EGameFlowsheet_LogicType : uint32_t
{
	EGameFlowsheet_LogicType__AND                                                    = 0,
	EGameFlowsheet_LogicType__OR                                                     = 1
};

#pragma pack(pop)


static_assert(sizeof(UGameFlowsheet) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UGameFlowsheetNodeInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameFlowsheet_BaseNode) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UGameFlowsheet_RootNode) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UGameFlowsheet_EndNode) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UGameFlowsheet_LogicNode) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UGameFlowsheet_FunctionalNode) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UGameFlowsheet_MonsterBattleNode) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(offsetof(UGameFlowsheet, Nodes) == 0x0028);
static_assert(offsetof(UGameFlowsheet, RootNode) == 0x0038);
static_assert(offsetof(UGameFlowsheet_BaseNode, PrecList) == 0x0048);
static_assert(offsetof(UGameFlowsheet_BaseNode, SuccList) == 0x0058);
static_assert(offsetof(UGameFlowsheet_BaseNode, GameFlowsheet) == 0x0068);
static_assert(offsetof(UGameFlowsheet_LogicNode, LogicType) == 0x0070);
static_assert(offsetof(UGameFlowsheet_FunctionalNode, Comment) == 0x0070);

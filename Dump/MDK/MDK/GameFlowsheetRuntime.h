
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/GameFlowsheetRuntime.GameFlowsheet
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameFlowsheet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<class UGameFlowsheet_BaseNode*>)    Nodes                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(class UGameFlowsheet_BaseNode*)            RootNode                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   MaxNodeId                                                   OFFSET(get<int32_t>, {0x40, 4, 0, 0})


	/// Functions
	// Function /Script/GameFlowsheetRuntime.GameFlowsheet.GetRootNode
	// class UGameFlowsheet_RootNode* GetRootNode();                                                                            // [0xc4c350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GameFlowsheetRuntime.GameFlowsheetNodeInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFlowsheetNodeInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameFlowsheetRuntime.GameFlowsheetNodeInterface.GetTypeName
	// FString GetTypeName();                                                                                                   // [0xc4c380] Native|Event|Public|BlueprintEvent 
	// Function /Script/GameFlowsheetRuntime.GameFlowsheetNodeInterface.CustomPreSave
	// void CustomPreSave();                                                                                                    // [0xc4c170] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/GameFlowsheetRuntime.GameFlowsheet_BaseNode
/// Size: 0x0048 (0x000028 - 0x000070)
class UGameFlowsheet_BaseNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   NodeId                                                      OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(float)                                     NodeCost                                                    OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   NodePriority                                                OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   ForceVerification                                           OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bResetWhenActive                                            OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(int32_t)                                   ReactiveNodeId                                              OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	CMember(TArray<class UGameFlowsheet_BaseNode*>)    PrecList                                                    OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<class UGameFlowsheet_BaseNode*>)    SuccList                                                    OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(class UGameFlowsheet*)                     GameFlowsheet                                               OFFSET(get<T>, {0x68, 8, 0, 0})


	/// Functions
	// Function /Script/GameFlowsheetRuntime.GameFlowsheet_BaseNode.SerializePropertyParams
	// FString SerializePropertyParams();                                                                                       // [0xc4c400] Native|Public        
	// Function /Script/GameFlowsheetRuntime.GameFlowsheet_BaseNode.GetNodePropertyNames
	// TArray<FString> GetNodePropertyNames();                                                                                  // [0xc4c200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameFlowsheetRuntime.GameFlowsheet_BaseNode.GetNodeFlag
	// int32_t GetNodeFlag();                                                                                                   // [0xc4c1d0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GameFlowsheetRuntime.GameFlowsheet_BaseNode.GetNodeCost
	// int32_t GetNodeCost();                                                                                                   // [0xc4c190] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/GameFlowsheetRuntime.GameFlowsheet_RootNode
/// Size: 0x0000 (0x000070 - 0x000070)
class UGameFlowsheet_RootNode : public UGameFlowsheet_BaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/GameFlowsheetRuntime.GameFlowsheet_EndNode
/// Size: 0x0000 (0x000070 - 0x000070)
class UGameFlowsheet_EndNode : public UGameFlowsheet_BaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/GameFlowsheetRuntime.GameFlowsheet_LogicNode
/// Size: 0x0008 (0x000070 - 0x000078)
class UGameFlowsheet_LogicNode : public UGameFlowsheet_BaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(EGameFlowsheet_LogicType)                  LogicType                                                   OFFSET(get<T>, {0x70, 4, 0, 0})
};

/// Class /Script/GameFlowsheetRuntime.GameFlowsheet_FunctionalNode
/// Size: 0x0010 (0x000070 - 0x000080)
class UGameFlowsheet_FunctionalNode : public UGameFlowsheet_BaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   Comment                                                     OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Class /Script/GameFlowsheetRuntime.GameFlowsheet_MonsterBattleNode
/// Size: 0x0000 (0x000080 - 0x000080)
class UGameFlowsheet_MonsterBattleNode : public UGameFlowsheet_FunctionalNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Enum /Script/GameFlowsheetRuntime.EFlowNodeFlagBit
/// Size: 0x02
enum class EFlowNodeFlagBit : uint8_t
{
	EFlowNodeFlagBit__Bit_Determinate                                                = 0,
	EFlowNodeFlagBit__Bit_BreakPoint                                                 = 1
};

/// Enum /Script/GameFlowsheetRuntime.EGameFlowsheet_LogicType
/// Size: 0x02
enum class EGameFlowsheet_LogicType : uint32_t
{
	EGameFlowsheet_LogicType__AND                                                    = 0,
	EGameFlowsheet_LogicType__OR                                                     = 1
};


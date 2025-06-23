
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/UnLua.UnLuaCusTomDefineMediator
/// Size: 0x0000 (0x000028 - 0x000028)
class UUnLuaCusTomDefineMediator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/UnLua.UnLuaCusTomDefineMediator.HandleLuaDefineAndReWriteForLuaPack
	// bool HandleLuaDefineAndReWriteForLuaPack(FString InLuaSourcePath, FString InLuaFileName, FString OutLuaSourcePath);      // [0x9a7810] Final|Native|Static|Public 
};

/// Class /Script/UnLua.UnLuaInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UUnLuaInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/UnLua.UnLuaInterface.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x9a7620] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/UnLua.UnLuaLatentAction
/// Size: 0x0020 (0x000028 - 0x000048)
class UUnLuaLatentAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FDelegateProperty)                         callback                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bTickEvenWhenPaused                                         OFFSET(get<bool>, {0x40, 1, 1, 0})


	/// Functions
	// Function /Script/UnLua.UnLuaLatentAction.SetTickableWhenPaused
	// void SetTickableWhenPaused(bool bTickableWhenPaused);                                                                    // [0x9a7c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaLatentAction.OnLegacyCallback
	// void OnLegacyCallback(int32_t InLinkage);                                                                                // [0x9a7ab0] Final|Native|Public  
	// Function /Script/UnLua.UnLuaLatentAction.OnCompleted
	// void OnCompleted(int32_t InLinkage);                                                                                     // [0x9a7990] Final|Native|Public|Const 
	// Function /Script/UnLua.UnLuaLatentAction.GetTickableWhenPaused
	// bool GetTickableWhenPaused();                                                                                            // [0x9a77e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaLatentAction.CreateInfoForLegacy
	// FLatentActionInfo CreateInfoForLegacy();                                                                                 // [0x9a71a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaLatentAction.CreateInfo
	// FLatentActionInfo CreateInfo(int32_t Linkage);                                                                           // [0x9a70f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UnLua.UnLuaManager
/// Size: 0x01E8 (0x000028 - 0x000210)
class UUnLuaManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(TSet<UObject*>)                            ObjectAddToRoot                                             OFFSET(get<T>, {0x30, 80, 0, 0})


	/// Functions
	// Function /Script/UnLua.UnLuaManager.OnLatentActionCompleted
	// void OnLatentActionCompleted(int32_t LinkID);                                                                            // [0x9a7a20] Final|Native|Public  
};

/// Class /Script/UnLua.UnLuaPerformanceTestProxy
/// Size: 0x0060 (0x000220 - 0x000280)
class AUnLuaPerformanceTestProxy : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	DMember(int32_t)                                   MeshID                                                      OFFSET(get<int32_t>, {0x228, 4, 0, 0})
	SMember(FString)                                   MeshName                                                    OFFSET(getStruct<T>, {0x230, 16, 0, 0})
	SMember(FVector)                                   COM                                                         OFFSET(getStruct<T>, {0x240, 12, 0, 0})
	CMember(TArray<int32_t>)                           Indices                                                     OFFSET(get<T>, {0x250, 16, 0, 0})
	CMember(TArray<FVector>)                           Positions                                                   OFFSET(get<T>, {0x260, 16, 0, 0})
	CMember(TArray<FVector>)                           PredictedPositions                                          OFFSET(get<T>, {0x270, 16, 0, 0})


	/// Functions
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.UpdatePositions
	// void UpdatePositions(TArray<FVector>& NewPositions);                                                                     // [0x9a76a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.UpdateMeshName
	// FString UpdateMeshName(FString NewName);                                                                                 // [0x9a7df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.UpdateMeshID
	// int32_t UpdateMeshID(int32_t NewID);                                                                                     // [0x9a7d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.UpdateIndices
	// void UpdateIndices(TArray<int32_t>& NewIndices);                                                                         // [0x9a7220] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.Simulate
	// void Simulate(float DeltaTime);                                                                                          // [0x9a7cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.Raycast
	// bool Raycast(FVector& Origin, FVector& Direction);                                                                       // [0x9a7b40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.NOP
	// void NOP();                                                                                                              // [0x9a7970] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetPredictedPositions
	// TArray<FVector> GetPredictedPositions();                                                                                 // [0x9a7750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetPositions
	// void GetPositions(TArray<FVector>& OutPositions);                                                                        // [0x9a76a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetMeshName
	// FString GetMeshName();                                                                                                   // [0x9a7590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetMeshInfo
	// bool GetMeshInfo(int32_t& OutMeshID, FString& OutMeshName, FVector& OutCOM, TArray<int32_t>& OutIndices, TArray<FVector>& OutPositions, TArray<FVector>& OutPredictedPositions); // [0x9a7300] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetMeshID
	// int32_t GetMeshID();                                                                                                     // [0x9a72d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetIndices
	// void GetIndices(TArray<int32_t>& OutIndices);                                                                            // [0x9a7220] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetCOM
	// FVector GetCOM();                                                                                                        // [0x9a71e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/UnLua.PropertyCollector
/// Size: 0x0001 (0x000000 - 0x000001)
class FPropertyCollector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	SMember(FIntPoint)                                 None                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   None1                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};



/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/GameplayTasks.GameplayTask
/// Size: 0x0040 (0x000028 - 0x000068)
class UGameplayTask : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FName)                                     InstanceName                                                OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	CMember(ETaskResourceOverlapPolicy)                ResourceOverlapPolicy                                       OFFSET(get<T>, {0x3A, 1, 0, 0})
	CMember(class UGameplayTask*)                      ChildTask                                                   OFFSET(get<T>, {0x60, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask.ReadyForActivation
	// void ReadyForActivation();                                                                                               // [0x3651060] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
	// void GenericGameplayTaskDelegate__DelegateSignature();                                                                   // [0x198a600] MulticastDelegate|Public|Delegate 
	// Function /Script/GameplayTasks.GameplayTask.EndTask
	// void EndTask();                                                                                                          // [0x3650d00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_ClaimResource
/// Size: 0x0000 (0x000068 - 0x000068)
class UGameplayTask_ClaimResource : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_ClaimResource.ClaimResources
	// class UGameplayTask_ClaimResource* ClaimResources(TScriptInterface<Class> InTaskOwner, TArray<UClass*> ResourceClasses, char Priority, FName TaskInstanceName); // [0x3650b40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_ClaimResource.ClaimResource
	// class UGameplayTask_ClaimResource* ClaimResource(TScriptInterface<Class> InTaskOwner, class UClass* ResourceClass, char Priority, FName TaskInstanceName); // [0x36509d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_SpawnActor
/// Size: 0x0040 (0x000068 - 0x0000A8)
class UGameplayTask_SpawnActor : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  Success                                                     OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DidNotSpawn                                                 OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(class UClass*)                             ClassToSpawn                                                OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	// class UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<Class> TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority); // [0x3651080] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
	// void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);                                 // [0x3650d20] Native|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
	// bool BeginSpawningActor(class UObject* WorldContextObject, class AActor*& SpawnedActor);                                 // [0x36508f0] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_TimeLimitedExecution
/// Size: 0x0030 (0x000068 - 0x000098)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnFinished                                                  OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTimeExpired                                               OFFSET(getStruct<T>, {0x78, 16, 0, 0})
};

/// Class /Script/GameplayTasks.GameplayTask_WaitDelay
/// Size: 0x0018 (0x000068 - 0x000080)
class UGameplayTask_WaitDelay : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  OnFinish                                                    OFFSET(getStruct<T>, {0x68, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	// class UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<Class> TaskOwner, float Time, char Priority);              // [0x3651250] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
	// void TaskDelayDelegate__DelegateSignature();                                                                             // [0x198a600] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayTasks.GameplayTaskOwnerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayTaskOwnerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayTasks.GameplayTaskResource
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameplayTaskResource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   ManualResourceID                                            OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int8_t)                                    AutoResourceID                                              OFFSET(get<int8_t>, {0x2C, 1, 0, 0})
	DMember(bool)                                      bManuallySetID                                              OFFSET(get<bool>, {0x30, 1, 1, 0})
};

/// Class /Script/GameplayTasks.GameplayTasksComponent
/// Size: 0x0070 (0x0000B0 - 0x000120)
class UGameplayTasksComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(bool)                                      bIsNetDirty                                                 OFFSET(get<bool>, {0xBC, 1, 1, 1})
	CMember(TArray<class UGameplayTask*>)              SimulatedTasks                                              OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<class UGameplayTask*>)              TaskPriorityQueue                                           OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<class UGameplayTask*>)              TickingTasks                                                OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<class UGameplayTask*>)              KnownTasks                                                  OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnClaimedResourcesChange                                    OFFSET(getStruct<T>, {0x110, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	// void OnRep_SimulatedTasks();                                                                                             // [0x3651040] Final|Native|Public  
	// Function /Script/GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
	// EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<Class> TaskOwner, class UGameplayTask* Task, char Priority, TArray<UClass*> AdditionalRequiredResources, TArray<UClass*> AdditionalClaimedResources); // [0x3650df0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/GameplayTasks.GameplayResourceSet
/// Size: 0x0002 (0x000000 - 0x000002)
class FGameplayResourceSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
};

/// Enum /Script/GameplayTasks.ETaskResourceOverlapPolicy
/// Size: 0x02
enum class ETaskResourceOverlapPolicy : uint8_t
{
	ETaskResourceOverlapPolicy__StartOnTop                                           = 0,
	ETaskResourceOverlapPolicy__StartAtEnd                                           = 1
};

/// Enum /Script/GameplayTasks.EGameplayTaskState
/// Size: 0x05
enum class EGameplayTaskState : uint8_t
{
	EGameplayTaskState__Uninitialized                                                = 0,
	EGameplayTaskState__AwaitingActivation                                           = 1,
	EGameplayTaskState__Paused                                                       = 2,
	EGameplayTaskState__Active                                                       = 3,
	EGameplayTaskState__Finished                                                     = 4
};

/// Enum /Script/GameplayTasks.EGameplayTaskRunResult
/// Size: 0x05
enum class EGameplayTaskRunResult : uint8_t
{
	EGameplayTaskRunResult__Error                                                    = 0,
	EGameplayTaskRunResult__Failed                                                   = 1,
	EGameplayTaskRunResult__Success_Paused                                           = 2,
	EGameplayTaskRunResult__Success_Active                                           = 3,
	EGameplayTaskRunResult__Success_Finished                                         = 4
};


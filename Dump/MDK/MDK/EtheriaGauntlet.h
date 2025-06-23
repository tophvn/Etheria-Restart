
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: GameUE
/// dependency: Gauntlet

/// Class /Script/EtheriaGauntlet.EtheriaGauntletTask
/// Size: 0x0038 (0x000028 - 0x000060)
class UEtheriaGauntletTask : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UEtheriaGauntletController*)         Controller                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     TaskKey                                                     OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	DMember(float)                                     TimeoutValue                                                OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     TimeoutCount                                                OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FString)                                   TaskName                                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   CaseScope                                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})


	/// Functions
	// Function /Script/EtheriaGauntlet.EtheriaGauntletTask.UpdateTaskTimeout
	// void UpdateTaskTimeout(float Timeout);                                                                                   // [0x11272e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EtheriaGauntlet.EtheriaGauntletTask.UpdateTask
	// void UpdateTask(float DeltaTime);                                                                                        // [0xc8bf50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/EtheriaGauntlet.EtheriaGauntletTask.SetTaskName
	// void SetTaskName(FString Name);                                                                                          // [0x11271f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EtheriaGauntlet.EtheriaGauntletTask.HandleGauntletEvent
	// void HandleGauntletEvent(FName& EventName, int32_t RelativeId);                                                          // [0x1127110] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/EtheriaGauntlet.EtheriaGauntletTask.GiveupTask
	// void GiveupTask();                                                                                                       // [0xc8b130] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/EtheriaGauntlet.EtheriaGauntletTask.GetResult
	// EGauntletTaskResult GetResult();                                                                                         // [0x11270e0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/EtheriaGauntlet.EtheriaGauntletTask.BeginTask
	// void BeginTask();                                                                                                        // [0x89bc50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/EtheriaGauntlet.DelayTask
/// Size: 0x0008 (0x000060 - 0x000068)
class UDelayTask : public UEtheriaGauntletTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(float)                                     DelayTime                                                   OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Class /Script/EtheriaGauntlet.EtheriaGauntletController
/// Size: 0x00F8 (0x000030 - 0x000128)
class UEtheriaGauntletController : public UGauntletTestController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(TSoftObjectPtr<class UClass*>)             DefaultTestClass                                            OFFSET(get<T>, {0x40, 40, 0, 0})
	DMember(bool)                                      bEmbededController                                          OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bAutoExitAppWhenFinished                                    OFFSET(get<bool>, {0x69, 1, 0, 0})
	CMember(class UEtheriaGauntletTest*)               GauntletTest                                                OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class UAutomationAgent*)                   AutomationAgent                                             OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TArray<class UEtheriaGauntletTask*>)       BuiltTaskFlow                                               OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(class UEtheriaGauntletTask*)               CurrentTask                                                 OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(int32_t)                                   CurrentTaskIndex                                            OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
};

/// Class /Script/EtheriaGauntlet.EtheriaGauntletSetting
/// Size: 0x0048 (0x000028 - 0x000070)
class UEtheriaGauntletSetting : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      EnableGauntletTest                                          OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      GauntletRandomAccount                                       OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      OpenScreenshot                                              OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      EnableGauntletServer                                        OFFSET(get<bool>, {0x2B, 1, 0, 0})
	DMember(int32_t)                                   GauntletRegionId                                            OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   GauntletServerId                                            OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FString)                                   Channel                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(class UClass*)                             GauntletControllerClass                                     OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UClass*)                             GauntletTestClass                                           OFFSET(get<T>, {0x50, 8, 0, 0})
	DMember(bool)                                      EnableAutoTestGraphicQualitySettings                        OFFSET(get<bool>, {0x58, 1, 0, 0})
	SMember(FString)                                   GauntletHostAddress                                         OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Class /Script/EtheriaGauntlet.EtheriaGauntletTest
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UEtheriaGauntletTest : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bUseRandomAccount                                           OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FString)                                   AccountId                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   Password                                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   ServerId                                                    OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   RegionId                                                    OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	SMember(FString)                                   channelId                                                   OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   GauntletTestName                                            OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	CMember(TSet<FName>)                               options                                                     OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TArray<class UEtheriaGauntletTask*>)       TaskFlow                                                    OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(class UEtheriaGauntletTask*)               CurrentTask                                                 OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UEtheriaGauntletController*)         Controller                                                  OFFSET(get<T>, {0xE0, 8, 0, 0})


	/// Functions
	// Function /Script/EtheriaGauntlet.EtheriaGauntletTest.GetBuiltTask
	// TArray<UEtheriaGauntletTask*> GetBuiltTask();                                                                            // [0x1127050] Final|Native|Public|BlueprintCallable 
	// Function /Script/EtheriaGauntlet.EtheriaGauntletTest.BuildTestFlow
	// void BuildTestFlow();                                                                                                    // [0x89bc50] Native|Event|Public|BlueprintEvent 
	// Function /Script/EtheriaGauntlet.EtheriaGauntletTest.BeginGauntletCase
	// void BeginGauntletCase(FString CaseName);                                                                                // [0x1126fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EtheriaGauntlet.EtheriaGauntletTest.AddTask
	// class UEtheriaGauntletTask* AddTask(class UClass* Class, FString TaskName);                                              // [0x1126ec0] Final|Native|Private|BlueprintCallable 
};

/// Enum /Script/EtheriaGauntlet.EGauntletTaskResult
/// Size: 0x03
enum class EGauntletTaskResult : uint8_t
{
	EGauntletTaskResult__WaitResult                                                  = 0,
	EGauntletTaskResult__ResultOK                                                    = 1,
	EGauntletTaskResult__ResultFailed                                                = 2
};


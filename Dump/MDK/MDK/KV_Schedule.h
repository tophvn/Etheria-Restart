
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/KV_Schedule.KV_TaskDecorObject
/// Size: 0x0000 (0x000028 - 0x000028)
class UKV_TaskDecorObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/KV_Schedule.KV_TaskDecorObject.ShouldComplete
	// EScheduleReply ShouldComplete();                                                                                         // [0x11270e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/KV_Schedule.KV_TaskDecorObject.Reset
	// void Reset();                                                                                                            // [0x116c190] Native|Event|Public|BlueprintEvent 
	// Function /Script/KV_Schedule.KV_TaskDecorObject.OnTaskUpdate
	// void OnTaskUpdate(TSet<FKV_ScheduleEvent>& OutEvent);                                                                    // [0x116c050] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/KV_Schedule.KV_TaskDecorObject.OnTaskComplete
	// void OnTaskComplete(TSet<FKV_ScheduleEvent>& OutEvent);                                                                  // [0xc193c0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/KV_Schedule.KV_TaskDecorObject.OnTaskBegin
	// void OnTaskBegin(TSet<FKV_ScheduleEvent>& OutEvent);                                                                     // [0x116b9b0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/KV_Schedule.KV_TaskDecorObject.HandleScheduleEvent
	// void HandleScheduleEvent(FKV_ScheduleEvent& Event);                                                                      // [0x116bd00] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/KV_Schedule.KV_TaskDecorObject.GetRelevantEvents
	// TArray<FKV_ScheduleEvent> GetRelevantEvents();                                                                           // [0x116bc80] Native|Event|Public|BlueprintEvent 
	// Function /Script/KV_Schedule.KV_TaskDecorObject.CheckShouldRun
	// EScheduleReply CheckShouldRun();                                                                                         // [0xc8b010] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/KV_Schedule.KV_AttachDecorate
/// Size: 0x0000 (0x000028 - 0x000028)
class UKV_AttachDecorate : public UKV_TaskDecorObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/KV_Schedule.KV_TaskObject
/// Size: 0x0008 (0x000028 - 0x000030)
class UKV_TaskObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/KV_Schedule.KV_TaskObject.UpdateTask
	// void UpdateTask(TSet<FKV_ScheduleEvent>& OutEvent);                                                                      // [0x116c050] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/KV_Schedule.KV_TaskObject.SetReadyToComplete
	// void SetReadyToComplete();                                                                                               // [0x116c210] Final|Native|Public|BlueprintCallable 
	// Function /Script/KV_Schedule.KV_TaskObject.Reset
	// void Reset();                                                                                                            // [0x116c1b0] Native|Event|Public|BlueprintEvent 
	// Function /Script/KV_Schedule.KV_TaskObject.HandleScheduleEvent
	// void HandleScheduleEvent(FKV_ScheduleEvent& Event);                                                                      // [0x116bda0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/KV_Schedule.KV_TaskObject.GetRelevantEvents
	// TArray<FKV_ScheduleEvent> GetRelevantEvents();                                                                           // [0x9cb400] Native|Event|Public|BlueprintEvent 
	// Function /Script/KV_Schedule.KV_TaskObject.CompleteTask
	// void CompleteTask(TSet<FKV_ScheduleEvent>& OutEvent);                                                                    // [0x116bb40] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/KV_Schedule.KV_TaskObject.BeginTask
	// void BeginTask(TSet<FKV_ScheduleEvent>& OutEvent);                                                                       // [0x116b9b0] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/KV_Schedule.KV_TaskScheduler
/// Size: 0x0190 (0x000028 - 0x0001B8)
class UKV_TaskScheduler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	CMember(TSet<UKV_TaskDecorObject*>)                AllTaskDecorates                                            OFFSET(get<T>, {0x98, 80, 0, 0})
	CMember(TSet<UKV_TaskObject*>)                     AllTaskObjects                                              OFFSET(get<T>, {0xE8, 80, 0, 0})
	CMember(class UKV_TaskScheduleState*)              ScheduleState                                               OFFSET(get<T>, {0x138, 8, 0, 0})


	/// Functions
	// Function /Script/KV_Schedule.KV_TaskScheduler.Update
	// void Update(float DeltaTime);                                                                                            // [0x116c230] Final|Native|Public|BlueprintCallable 
	// Function /Script/KV_Schedule.KV_TaskScheduler.Run
	// void Run();                                                                                                              // [0x116c1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KV_Schedule.KV_TaskScheduler.Reset
	// void Reset();                                                                                                            // [0x116c1d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KV_Schedule.KV_TaskScheduler.IsComplete
	// bool IsComplete();                                                                                                       // [0x116be40] Final|Native|Public|BlueprintCallable 
	// Function /Script/KV_Schedule.KV_TaskScheduler.BuildStart
	// class UKV_TaskScheduler* BuildStart();                                                                                   // [0x116bb10] Final|Native|Public|BlueprintCallable 
	// Function /Script/KV_Schedule.KV_TaskScheduler.BuildEnd
	// void BuildEnd();                                                                                                         // [0x116baf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KV_Schedule.KV_TaskScheduler.AddTask
	// class UKV_TaskScheduler* AddTask(FName& Name, class UKV_TaskObject* TaskObject);                                         // [0x116b8c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KV_Schedule.KV_TaskScheduler.AddDecorate
	// class UKV_TaskScheduler* AddDecorate(class UKV_TaskDecorObject* Decorate);                                               // [0x116b820] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KV_Schedule.KV_TaskScheduleState
/// Size: 0x00F0 (0x000028 - 0x000118)
class UKV_TaskScheduleState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:


	/// Functions
	// Function /Script/KV_Schedule.KV_TaskScheduleState.IsTaskStarted
	// bool IsTaskStarted(FName& Name);                                                                                         // [0x116bfb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KV_Schedule.KV_TaskScheduleState.IsTaskRunned
	// bool IsTaskRunned(FName& Name);                                                                                          // [0x116bf10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KV_Schedule.KV_TaskScheduleState.IsTaskEnded
	// bool IsTaskEnded(FName& Name);                                                                                           // [0x116be70] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/KV_Schedule.KV_ScheduleEvent
/// Size: 0x000C (0x000000 - 0x00000C)
class FKV_ScheduleEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Enum /Script/KV_Schedule.EScheduleReply
/// Size: 0x03
enum class EScheduleReply : uint8_t
{
	EScheduleReply__No_Reply                                                         = 0,
	EScheduleReply__Reply_Should                                                     = 1,
	EScheduleReply__Reply_Reject                                                     = 2
};


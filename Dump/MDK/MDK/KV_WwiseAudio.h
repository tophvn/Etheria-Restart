
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AkAudio
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/KV_WwiseAudio.AnimNotify_AkEvent
/// Size: 0x0048 (0x000040 - 0x000088)
class UAnimNotify_AkEvent : public UAnimNotify_AkEventBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(int32_t)                                   StackLimitation                                             OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FString)                                   AttachName                                                  OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(class UAkAudioEvent*)                      Event                                                       OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(bool)                                      bFollow                                                     OFFSET(get<bool>, {0x60, 1, 0, 0})
	SMember(FString)                                   EventName                                                   OFFSET(getStruct<T>, {0x68, 16, 0, 0})


	/// Functions
	// Function /Script/KV_WwiseAudio.AnimNotify_AkEvent.SetEvent
	// void SetEvent(class UAkAudioEvent* NewEvent);                                                                            // [0x110e670] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/KV_WwiseAudio.AnimNotify_AkEvent.PostEventFollowComponent
	// void PostEventFollowComponent(class USkeletalMeshComponent* MeshComp, FString SocketName);                               // [0x110e2d0] Final|Native|Protected|BlueprintCallable|Const 
	// Function /Script/KV_WwiseAudio.AnimNotify_AkEvent.PostEventAtLocation
	// void PostEventAtLocation(class USkeletalMeshComponent* MeshComp);                                                        // [0x110df20] Final|Native|Protected|BlueprintCallable|Const 
	// Function /Script/KV_WwiseAudio.AnimNotify_AkEvent.GetEventName
	// void GetEventName(FString& OutEventName, FString& OutPathName);                                                          // [0x110d490] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/KV_WwiseAudio.AnimNotify_AkEvent.CheckStackLimitation
	// bool CheckStackLimitation(class USkeletalMeshComponent* MeshComp);                                                       // [0x110d060] Final|Native|Protected|BlueprintCallable|Const 
};

/// Class /Script/KV_WwiseAudio.AnimNotifyState_AkEvent
/// Size: 0x0018 (0x000030 - 0x000048)
class UAnimNotifyState_AkEvent : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UAkAudioEvent*)                      StartAkEvent                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UAkAudioEvent*)                      StopAkEvent                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(ESpeedRateType)                            SpeedRateType                                               OFFSET(get<T>, {0x40, 1, 0, 0})
};

/// Class /Script/KV_WwiseAudio.KV_WwiseAudioLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UKV_WwiseAudioLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.UnsetupStandalone
	// void UnsetupStandalone(int32_t GameObjectID, FString Name);                                                              // [0x110f660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.StopEventStandalone
	// void StopEventStandalone(int32_t PlayingID, int32_t Duration, EAkCurveInterpolation FadeCurve);                          // [0x110f560] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.StopEventByPlayingID
	// void StopEventByPlayingID(int32_t PlayingID, class UObject* Parent, int32_t Duration, EAkCurveInterpolation FadeCurve);  // [0x110f420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.StopEvent2DByPlayingID
	// void StopEvent2DByPlayingID(int32_t PlayingID, int32_t Duration, EAkCurveInterpolation FadeCurve);                       // [0x110f320] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.StopAll
	// void StopAll();                                                                                                          // [0x110f300] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.StopActor
	// void StopActor(class AActor* Actor);                                                                                     // [0x110f280] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.Stop
	// void Stop(class UAkGameObject* AkObj);                                                                                   // [0x110f200] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.SetupStandalone
	// void SetupStandalone(int32_t GameObjectID, FString Name);                                                                // [0x110f130] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.SetSwitch2D
	// void SetSwitch2D(class UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState);                           // [0x110ee40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.SetSwitch
	// void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, FName SwitchGroup, FName SwitchState);            // [0x110efe0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.SetState
	// void SetState(class UAkStateValue* StateValue, FName StateGroup, FName State);                                           // [0x110ed40] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.SetStandaloneOutputBusVolume
	// void SetStandaloneOutputBusVolume(int32_t GameObjectID, float Volume);                                                   // [0x110ec80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.SetRTPCValueOnAkComponent
	// void SetRTPCValueOnAkComponent(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class UAkComponent* AkComp, FString RTPC); // [0x110eab0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.SetRTPCValue
	// void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class AActor* Actor, FName RTPC);  // [0x110e920] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.SetOutputBusVolume
	// void SetOutputBusVolume(float BusVolume, class AActor* Actor);                                                           // [0x110e860] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.SetMultiplePositions
	// void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x110e700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.SetCurrentAudioCultureAsync
	// void SetCurrentAudioCultureAsync(FString AudioCulture, FDelegateProperty& Completed);                                    // [0x110e580] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.SeekOnEvent
	// void SeekOnEvent(class UAkAudioEvent* AkEvent, int32_t PlayingID, float startTimeInSeconds);                             // [0x110e480] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.PostEventStandalone
	// int32_t PostEventStandalone(class UAkAudioEvent* AkEvent, int32_t GameObjectID);                                         // [0x110e3b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.PostEventFollowActorOrComponent
	// int32_t PostEventFollowActorOrComponent(class UAkAudioEvent* AkEvent, class UObject* Parent, int32_t CallbackMask, FDelegateProperty& PostEventCallback, bool bStopWhenAttachedToDestroyed); // [0x110e130] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.PostEventAtLocation
	// int32_t PostEventAtLocation(class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, class UObject* WorldContextObject); // [0x110dfb0] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.PostEvent2D
	// int32_t PostEvent2D(class UAkAudioEvent* AkEvent, int32_t CallbackMask, FDelegateProperty& PostEventCallback, class UObject* WorldContextObject); // [0x110dc10] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.PostEvent
	// int32_t PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, bool bStopWhenAttachedToDestroyed); // [0x110dd80] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.PostAssociatedAkEvent
	// int32_t PostAssociatedAkEvent(class UAkGameObject* AkObj, int32_t CallbackMask, FDelegateProperty& PostEventCallback);   // [0x110dae0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.PostAkEvent
	// int32_t PostAkEvent(class UAkGameObject* AkObj, class UAkAudioEvent* AkEvent, int32_t CallbackMask, FDelegateProperty& PostEventCallback); // [0x110d970] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.IsPlayingIDActive
	// bool IsPlayingIDActive(int32_t EventId, int32_t PlayingID);                                                              // [0x110d8a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.IsGame
	// bool IsGame(class UObject* WorldContextObject);                                                                          // [0x110d810] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.IsEditor
	// bool IsEditor();                                                                                                         // [0x110d7e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.GetRTPCValue
	// void GetRTPCValue(class UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, class AActor* Actor, FName RTPC); // [0x110d5b0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.GetDefaultListener
	// class UAkComponent* GetDefaultListener();                                                                                // [0x110d460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.GetCurrentAudioCulture
	// FString GetCurrentAudioCulture();                                                                                        // [0x110d3e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.GetAkComponent
	// class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation> LocationType); // [0x110d240] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.ExecuteActionOnPlayingID
	// void ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve); // [0x110d100] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.CheckIsAkEventAndMediaIsLoaded
	// bool CheckIsAkEventAndMediaIsLoaded(class UObject* Obj);                                                                 // [0x110cfd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.AkWakeUpFromSuspend
	// void AkWakeUpFromSuspend();                                                                                              // [0x110cfb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KV_WwiseAudio.KV_WwiseAudioLibrary.AkSuspend
	// void AkSuspend();                                                                                                        // [0x110cf90] Final|Native|Static|Public|BlueprintCallable 
};



/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AkAudio
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EthInput
/// dependency: GameHotPatcher
/// dependency: GameplayTags
/// dependency: GameUE
/// dependency: KV_Widgets
/// dependency: MediaAssets
/// dependency: Slate
/// dependency: SlateCore
/// dependency: SpinePlugin
/// dependency: UMG
/// dependency: XDMaterialLib

/// Class /Game/Blueprints/Setting/BP_EtheriaSoundConfigs.BP_EtheriaSoundConfigs_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UBP_EtheriaSoundConfigs_C : public UEtheriaSoundSettingConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Blueprints/Framework/BP_Game_EtheriaInstance.BP_Game_EtheriaInstance_C
/// Size: 0x0000 (0x000260 - 0x000260)
class UBP_Game_EtheriaInstance_C : public UGameUEInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Main_StateMachine.BP_Main_StateMachine_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UBP_Main_StateMachine_C : public UStateMachine_Main
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Framework/BP_LayerManager.BP_LayerManager_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UBP_LayerManager_C : public ULayerManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Framework/BP_UIManager.BP_UIManager_C
/// Size: 0x0000 (0x000110 - 0x000110)
class UBP_UIManager_C : public UUIManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Game/Blueprints/Framework/BP_ViewFramework.BP_ViewFramework_C
/// Size: 0x0000 (0x000130 - 0x000130)
class UBP_ViewFramework_C : public UViewFramework
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Game/Blueprints/Misc/BP_LuaInstanceData.BP_LuaInstanceData_C
/// Size: 0x0008 (0x000028 - 0x000030)
class UBP_LuaInstanceData_C : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x28, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Misc/BP_LuaInstanceData.BP_LuaInstanceData_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/Misc/BP_LuaInstanceData.BP_LuaInstanceData_C.ManualDestroy
	// void ManualDestroy();                                                                                                    // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Misc/BP_LuaInstanceData.BP_LuaInstanceData_C.ExecuteUbergraph_BP_LuaInstanceData
	// void ExecuteUbergraph_BP_LuaInstanceData(int32_t EntryPoint);                                                            // [0x198a600] Final                
};

/// Class /Game/Blueprints/Framework/Actors/BP_LuaBridge.BP_LuaBridge_C
/// Size: 0x0008 (0x000228 - 0x000230)
class ABP_LuaBridge_C : public ALuaBridge
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x228, 8, 0, 0})
};

/// Class /Game/Blueprints/Scene/Common/Actors/BP_Login_WwiseSoundManager.BP_Login_WwiseSoundManager_C
/// Size: 0x0000 (0x000428 - 0x000428)
class ABP_Login_WwiseSoundManager_C : public AWwiseAudioManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:


	/// Functions
	// Function /Game/Blueprints/Scene/Common/Actors/BP_Login_WwiseSoundManager.BP_Login_WwiseSoundManager_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Blueprints/Scene/Common/Blueprint/BP_WwiseSoundBg.BP_WwiseSoundBg_C
/// Size: 0x0028 (0x000220 - 0x000248)
class ABP_WwiseSoundBg_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	CMember(class UAkComponent*)                       Ak                                                          OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class UAkAudioEvent*)                      AkEvent                                                     OFFSET(get<T>, {0x230, 8, 0, 0})
	SMember(FName)                                     Group                                                       OFFSET(getStruct<T>, {0x238, 8, 0, 0})
	SMember(FName)                                     State                                                       OFFSET(getStruct<T>, {0x240, 8, 0, 0})
};

/// Class /Game/Blueprints/SystemMessage/BP_SystemMessage_Actor.BP_SystemMessage_Actor_C
/// Size: 0x0010 (0x000220 - 0x000230)
class ABP_SystemMessage_Actor_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x220, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x228, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/SystemMessage/BP_SystemMessage_Actor.BP_SystemMessage_Actor_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x9a60e0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/SystemMessage/BP_SystemMessage_Actor.BP_SystemMessage_Actor_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x9a60e0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/SystemMessage/BP_SystemMessage_Actor.BP_SystemMessage_Actor_C.CloseMaqueeCopy
	// void CloseMaqueeCopy();                                                                                                  // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/SystemMessage/BP_SystemMessage_Actor.BP_SystemMessage_Actor_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x9a60e0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/SystemMessage/BP_SystemMessage_Actor.BP_SystemMessage_Actor_C.ReceiveEndPlayCopy
	// void ReceiveEndPlayCopy(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                      // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/SystemMessage/BP_SystemMessage_Actor.BP_SystemMessage_Actor_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/SystemMessage/BP_SystemMessage_Actor.BP_SystemMessage_Actor_C.CloseMaquee
	// void CloseMaquee();                                                                                                      // [0x9a60e0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/SystemMessage/BP_SystemMessage_Actor.BP_SystemMessage_Actor_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x9a60e0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/SystemMessage/BP_SystemMessage_Actor.BP_SystemMessage_Actor_C.ExecuteUbergraph_BP_SystemMessage_Actor
	// void ExecuteUbergraph_BP_SystemMessage_Actor(int32_t EntryPoint);                                                        // [0x198a600] Final                
};

/// Class /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C
/// Size: 0x0098 (0x000220 - 0x0002B8)
class ABP_Regist_MainScript_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x220, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x228, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  Event_Select                                                OFFSET(getStruct<T>, {0x230, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  Event_Return                                                OFFSET(getStruct<T>, {0x240, 16, 0, 0})
	CMember(class UWBP_UI_RegistWidget_C*)             RegistWidget                                                OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(class ULevelStreaming*)                    MasterLevel                                                 OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(class ULevelStreaming*)                    CaptureLevel                                                OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(TArray<class ULevelStreaming*>)            SecondaryLevels                                             OFFSET(get<T>, {0x268, 16, 0, 0})
	DMember(bool)                                      bWorldIdle                                                  OFFSET(get<bool>, {0x278, 1, 0, 0})
	DMember(int32_t)                                   CurrentGender                                               OFFSET(get<int32_t>, {0x27C, 4, 0, 0})
	DMember(bool)                                      bWorldReady                                                 OFFSET(get<bool>, {0x280, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  Event_PlayRegistIntro                                       OFFSET(getStruct<T>, {0x288, 16, 0, 0})
	CMember(TArray<class ULevelStreamingDynamic*>)     Array                                                       OFFSET(get<T>, {0x298, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  Event_OnRegisterEnd                                         OFFSET(getStruct<T>, {0x2A8, 16, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.GetNameActor
	// void GetNameActor(FName LevelName, TSet<FString> ActorNames, TMap<FString, AActor*>& Actors);                            // [0x198a600] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.RemoveWidget
	// void RemoveWidget(class UUserWidget* Widget);                                                                            // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.EndMoveCamera
	// void EndMoveCamera();                                                                                                    // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.BeginMoveCamera
	// void BeginMoveCamera(int32_t Selection);                                                                                 // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.BeginRegist
	// void BeginRegist();                                                                                                      // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.BindMovieEvents
	// void BindMovieEvents();                                                                                                  // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.OnMovieFinished
	// void OnMovieFinished();                                                                                                  // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.EndRegist
	// void EndRegist();                                                                                                        // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.RegistFailed
	// void RegistFailed(FString Message);                                                                                      // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.BindActionEvents
	// void BindActionEvents();                                                                                                 // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.BindEventOnSelect
	// void BindEventOnSelect();                                                                                                // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.BindEventOnReturn
	// void BindEventOnReturn();                                                                                                // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.BindEventOnRegist
	// void BindEventOnRegist();                                                                                                // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.EventOnSelect
	// void EventOnSelect(int32_t Gender);                                                                                      // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.EventOnReturn
	// void EventOnReturn();                                                                                                    // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.EventOnRegist
	// void EventOnRegist(FString CharName);                                                                                    // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.RegistSucceed
	// void RegistSucceed();                                                                                                    // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.ExecuteUbergraph_BP_Regist_MainScript
	// void ExecuteUbergraph_BP_Regist_MainScript(int32_t EntryPoint);                                                          // [0x198a600] Final                
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.Event_OnRegisterEnd__DelegateSignature
	// void Event_OnRegisterEnd__DelegateSignature();                                                                           // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.Event_PlayRegistIntro__DelegateSignature
	// void Event_PlayRegistIntro__DelegateSignature();                                                                         // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.Event_Return__DelegateSignature
	// void Event_Return__DelegateSignature();                                                                                  // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Login/BP_Regist_MainScript.BP_Regist_MainScript_C.Event_Select__DelegateSignature
	// void Event_Select__DelegateSignature(int32_t Selection);                                                                 // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C
/// Size: 0x00B0 (0x000310 - 0x0003C0)
class ABP_GameMode_Login_C : public AGameUEGameModeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x310, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UBP_HotPatchView_C*)                 VersionWidget                                               OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UBP_LoginView_C*)                    LoginWidget                                                 OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class ABP_Regist_MainScript_C*)            RegistScript                                                OFFSET(get<T>, {0x330, 8, 0, 0})
	DMember(int32_t)                                   VIEW_LOGIN                                                  OFFSET(get<int32_t>, {0x338, 4, 0, 0})
	DMember(int32_t)                                   VIEW_VERSION                                                OFFSET(get<int32_t>, {0x33C, 4, 0, 0})
	DMember(int32_t)                                   VIEW_SPLASH                                                 OFFSET(get<int32_t>, {0x340, 4, 0, 0})
	DMember(int32_t)                                   VIEW_REGISTER                                               OFFSET(get<int32_t>, {0x344, 4, 0, 0})
	DMember(int32_t)                                   CurrentView                                                 OFFSET(get<int32_t>, {0x348, 4, 0, 0})
	DMember(int32_t)                                   BGMPlayingID                                                OFFSET(get<int32_t>, {0x34C, 4, 0, 0})
	CMember(TWeakObjectPtr<class UMediaPlayer*>)       SoftMediaPlayer                                             OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             RegistScriptClass                                           OFFSET(get<T>, {0x380, 40, 0, 0})
	CMember(TArray<class UBP_SysDialog_C*>)            Dialogs                                                     OFFSET(get<T>, {0x3A8, 16, 0, 0})
	CMember(class UWBP_Login_SharedBG_C*)              SharedBGWidget                                              OFFSET(get<T>, {0x3B8, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnRestartLogin
	// void OnRestartLogin();                                                                                                   // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OpenAnnouncement
	// void OpenAnnouncement(TArray<FString>& AnnDatas);                                                                        // [0x198a600] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnAnnouncement
	// void OnAnnouncement(class USysEvent* Ev);                                                                                // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnUpdateTapBillboardBadge
	// void OnUpdateTapBillboardBadge(class USysEvent* NewParam);                                                               // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.StopLoginBGM
	// void StopLoginBGM();                                                                                                     // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.PlayLoginBGM
	// void PlayLoginBGM();                                                                                                     // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.SplashOut
	// void SplashOut();                                                                                                        // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.Splash In
	// void Splash In(int32_t LastView);                                                                                        // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnSplash
	// void OnSplash();                                                                                                         // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnCloseDialog
	// void OnCloseDialog(class USysEvent* Ev);                                                                                 // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnHotPatch
	// void OnHotPatch();                                                                                                       // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.PushControl
	// void PushControl(int32_t ID);                                                                                            // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnDialog
	// void OnDialog(class USysEvent* Ev);                                                                                      // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OpenDialog
	// void OpenDialog(EDialogStyle DialogStyle, FText Message, FText Title, int32_t DialogKey, FText YesText, FText NoText, class UBP_SysDialog_C*& Widget); // [0x198a600] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnRegisterSucc
	// void OnRegisterSucc();                                                                                                   // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.CloseMarqueeWidget
	// void CloseMarqueeWidget();                                                                                               // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnMaintainUpdate
	// void OnMaintainUpdate(class USysEvent* Ev);                                                                              // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnOpenSelect
	// void OnOpenSelect(class USysEvent* NewParam);                                                                            // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnCloseHotPatchWidget
	// void OnCloseHotPatchWidget();                                                                                            // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnCheckHotPatch
	// void OnCheckHotPatch();                                                                                                  // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnRegisterFail
	// void OnRegisterFail(class USysEvent* FailEvent);                                                                         // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnRegister
	// void OnRegister(class USysEvent* RegEvent);                                                                              // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnInit
	// void OnInit();                                                                                                           // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.InitSystemMessageActor
	// void InitSystemMessageActor();                                                                                           // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnRealmList
	// void OnRealmList(class USysEvent* Event);                                                                                // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnOpenEntry
	// void OnOpenEntry(class USysEvent* Event);                                                                                // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnDevLogin
	// void OnDevLogin();                                                                                                       // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.ToggleLoginView
	// void ToggleLoginView(int32_t NewView);                                                                                   // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.StopLoginMedia
	// void StopLoginMedia();                                                                                                   // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.PlayLoginMedia
	// void PlayLoginMedia();                                                                                                   // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.RegisterIn
	// void RegisterIn(int32_t LastView);                                                                                       // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.RegisterOut
	// void RegisterOut();                                                                                                      // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.LoginIn
	// void LoginIn(int32_t LastView);                                                                                          // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.LoginOut
	// void LoginOut();                                                                                                         // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.VersionIn
	// void VersionIn(int32_t LastView);                                                                                        // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.VersionOut
	// void VersionOut();                                                                                                       // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.HandleSysEvent
	// void HandleSysEvent(class USysEvent* Ev);                                                                                // [0x198a600] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnOverlayAddWidget
	// void OnOverlayAddWidget(class UUserWidget* Widget);                                                                      // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnOverlayRemoveWidget
	// void OnOverlayRemoveWidget(class UUserWidget* Widget);                                                                   // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.AddSharedBG
	// void AddSharedBG();                                                                                                      // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.OnSplashFinish
	// void OnSplashFinish();                                                                                                   // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.RemoveSharedBG
	// void RemoveSharedBG();                                                                                                   // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/GameModes/BP_GameMode_Login.BP_GameMode_Login_C.ExecuteUbergraph_BP_GameMode_Login
	// void ExecuteUbergraph_BP_GameMode_Login(int32_t EntryPoint);                                                             // [0x198a600] Final                
};

/// Class /Game/Blueprints/Framework/Actors/BP_Login_ContextManager.BP_Login_ContextManager_C
/// Size: 0x0008 (0x000280 - 0x000288)
class ABP_Login_ContextManager_C : public AContextManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x280, 8, 0, 0})
};

/// Class /Game/Blueprints/Framework/State/BP_Main_SplashMovieState.BP_Main_SplashMovieState_C
/// Size: 0x0000 (0x000060 - 0x000060)
class UBP_Main_SplashMovieState_C : public USplashMovieState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Game_ValidateState.BP_Game_ValidateState_C
/// Size: 0x0080 (0x000058 - 0x0000D8)
class UBP_Game_ValidateState_C : public UValidateState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TSet<FString>)                             UnsupportedPlatform                                         OFFSET(get<T>, {0x58, 80, 0, 0})
	SMember(FText)                                     Message_PlatformNotSupported                                OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FText)                                     Caption_PlatformNotSupported                                OFFSET(getStruct<T>, {0xC0, 24, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Framework/State/BP_Game_ValidateState.BP_Game_ValidateState_C.ValidateEmulator
	// void ValidateEmulator(bool& Result);                                                                                     // [0x198a600] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Framework/State/BP_Game_ValidateState.BP_Game_ValidateState_C.ValidateEnvironment
	// bool ValidateEnvironment();                                                                                              // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/Framework/State/BP_Main_StartupState.BP_Main_StartupState_C
/// Size: 0x0000 (0x000060 - 0x000060)
class UBP_Main_StartupState_C : public UStartupState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Main_SplashState.BP_Main_SplashState_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UBP_Main_SplashState_C : public USplashState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Main_InitServerState.BP_Main_InitServerState_C
/// Size: 0x0008 (0x000060 - 0x000068)
class UBP_Main_InitServerState_C : public UInitServerState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x60, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Framework/State/BP_Main_InitServerState.BP_Main_InitServerState_C.EnterState
	// void EnterState(class UGameStateObjectBase* Previous);                                                                   // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Framework/State/BP_Main_InitServerState.BP_Main_InitServerState_C.ExecuteUbergraph_BP_Main_InitServerState
	// void ExecuteUbergraph_BP_Main_InitServerState(int32_t EntryPoint);                                                       // [0x198a600] Final                
};

/// Class /Game/Blueprints/Framework/State/BP_Main_VersionState.BP_Main_VersionState_C
/// Size: 0x0000 (0x000068 - 0x000068)
class UBP_Main_VersionState_C : public UVersionState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Main_PatchState.BP_Main_PatchState_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UBP_Main_PatchState_C : public UPatchState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Game_StateMachine.BP_Game_StateMachine_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UBP_Game_StateMachine_C : public UStateMachine_Game
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Init_StateQueue.BP_Init_StateQueue_C
/// Size: 0x0000 (0x000090 - 0x000090)
class UBP_Init_StateQueue_C : public UStateQueue_Init
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Login_StateQueue.BP_Login_StateQueue_C
/// Size: 0x0000 (0x000150 - 0x000150)
class UBP_Login_StateQueue_C : public UStateQueue_Login
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Game/Blueprints/Setting/BP_SecretBook.BP_SecretBook_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UBP_SecretBook_C : public USecretBook
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Init_ProtoState.BP_Init_ProtoState_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UBP_Init_ProtoState_C : public UInit_ProtoState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Init_LuaPackState.BP_Init_LuaPackState_C
/// Size: 0x0000 (0x000080 - 0x000080)
class UBP_Init_LuaPackState_C : public UInit_LuaPackState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Init_LuaModuleState.BP_Init_LuaModuleState_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UBP_Init_LuaModuleState_C : public UInit_LuaModuleState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Game/Blueprints/Engine/Rendering/BP_LibGraphicQualitySettings.BP_LibGraphicQualitySettings_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_LibGraphicQualitySettings_C : public UEtheriaGraphicQualityLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Init_FinishState.BP_Init_FinishState_C
/// Size: 0x0000 (0x000060 - 0x000060)
class UBP_Init_FinishState_C : public UInit_FinishState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Login_DefaultLoginState.BP_Login_DefaultLoginState_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UBP_Login_DefaultLoginState_C : public ULogin_DefaultLoginState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Login_PlatformState.BP_Login_PlatformState_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UBP_Login_PlatformState_C : public ULogin_SelectPlatformState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Login_LoginState.BP_Login_LoginState_C
/// Size: 0x0000 (0x000060 - 0x000060)
class UBP_Login_LoginState_C : public ULogin_LoginState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Login_RecommendState.BP_Login_RecommendState_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UBP_Login_RecommendState_C : public ULogin_RecommendState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Login_RedirectState.BP_Login_RedirectState_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UBP_Login_RedirectState_C : public ULogin_RedirectState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/Blueprints/Framework/State/BP_Login_ServerListState.BP_Login_ServerListState_C
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UBP_Login_ServerListState_C : public ULogin_ServerListState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Struct /Game/Blueprints/DownloadWhilePlaying/BPS_AudioLocalizationDefine.BPS_AudioLocalizationDefine
/// Size: 0x0030 (0x000000 - 0x000030)
class FBPS_AudioLocalizationDefine : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   id_8_812F5B4A451CC55B8517EE89CF22E007                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   unreal_key_5_130383A34D04D002DDFBC9BEA2AEBC17               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FText)                                     name_4_89945A05424EF3CAF2650B838E81A90B                     OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Class /Game/UI/Widgets/SysUI/WBP_NetworkCongest.WBP_NetworkCongest_C
/// Size: 0x0010 (0x0002A8 - 0x0002B8)
class UWBP_NetworkCongest_C : public UNetworkCongestWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(class UWBP_UI_Share_Circle_C*)             WBP_UI_Share_Circle                                         OFFSET(get<T>, {0x2B0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/SysUI/WBP_NetworkCongest.WBP_NetworkCongest_C.SetNetworkCongest
	// void SetNetworkCongest(bool bNewCongest);                                                                                // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_NetworkCongest.WBP_NetworkCongest_C.ExecuteUbergraph_WBP_NetworkCongest
	// void ExecuteUbergraph_WBP_NetworkCongest(int32_t EntryPoint);                                                            // [0x198a600] Final                
};

/// Class /Game/UI/Widgets/Share/WBP_UI_Share_Circle.WBP_UI_Share_Circle_C
/// Size: 0x0028 (0x000280 - 0x0002A8)
class UWBP_UI_Share_Circle_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x280, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_Loop                                                   OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x2A4, 4, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Circle.WBP_UI_Share_Circle_C.SetDuration
	// void SetDuration(float InputDuration);                                                                                   // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Circle.WBP_UI_Share_Circle_C.StopAnimationLoop
	// void StopAnimationLoop();                                                                                                // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Circle.WBP_UI_Share_Circle_C.PlayAnimationLoop
	// void PlayAnimationLoop();                                                                                                // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Circle.WBP_UI_Share_Circle_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Circle.WBP_UI_Share_Circle_C.ExecuteUbergraph_WBP_UI_Share_Circle
	// void ExecuteUbergraph_WBP_UI_Share_Circle(int32_t EntryPoint);                                                           // [0x198a600] Final|HasDefaults    
};

/// Class /Game/UI/Blueprint/Common/BP_UIScript_Default.BP_UIScript_Default_C
/// Size: 0x0000 (0x000240 - 0x000240)
class UBP_UIScript_Default_C : public UUIScript
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:


	/// Functions
	// Function /Game/UI/Blueprint/Common/BP_UIScript_Default.BP_UIScript_Default_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/UI/Widgets/SysUI/WBP_Regist_TypeText.WBP_Regist_TypeText_C
/// Size: 0x00B8 (0x000280 - 0x000338)
class UWBP_Regist_TypeText_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x280, 8, 0, 0})
	CMember(class UImage*)                             Image_Cursor                                                OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UTextBlock*)                         LayoutText                                                  OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UTextBlock*)                         TypeText                                                    OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x2A0, 88, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	DMember(float)                                     CursorCycle                                                 OFFSET(get<float>, {0x308, 4, 0, 0})
	SMember(FString)                                   Text                                                        OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	DMember(int32_t)                                   TextLength                                                  OFFSET(get<int32_t>, {0x320, 4, 0, 0})
	DMember(float)                                     CursorTime                                                  OFFSET(get<float>, {0x324, 4, 0, 0})
	DMember(float)                                     TypeTime                                                    OFFSET(get<float>, {0x328, 4, 0, 0})
	DMember(int32_t)                                   TypeLength                                                  OFFSET(get<int32_t>, {0x32C, 4, 0, 0})
	DMember(bool)                                      bIsTyping                                                   OFFSET(get<bool>, {0x330, 1, 0, 0})
	DMember(float)                                     TypeInterval                                                OFFSET(get<float>, {0x334, 4, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/SysUI/WBP_Regist_TypeText.WBP_Regist_TypeText_C.SetLayoutText
	// void SetLayoutText(FText Text);                                                                                          // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Regist_TypeText.WBP_Regist_TypeText_C.TypeForward
	// void TypeForward();                                                                                                      // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Regist_TypeText.WBP_Regist_TypeText_C.ResetTypeCursor
	// void ResetTypeCursor(float Offset);                                                                                      // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Regist_TypeText.WBP_Regist_TypeText_C.UpdateTypeCursor
	// void UpdateTypeCursor(float DeltaTime);                                                                                  // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Regist_TypeText.WBP_Regist_TypeText_C.Skip
	// void Skip();                                                                                                             // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Regist_TypeText.WBP_Regist_TypeText_C.Stop
	// void Stop();                                                                                                             // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Regist_TypeText.WBP_Regist_TypeText_C.Type
	// void Type(FString Text, float Duration);                                                                                 // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Regist_TypeText.WBP_Regist_TypeText_C.Construct
	// void Construct();                                                                                                        // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Regist_TypeText.WBP_Regist_TypeText_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Regist_TypeText.WBP_Regist_TypeText_C.ExecuteUbergraph_WBP_Regist_TypeText
	// void ExecuteUbergraph_WBP_Regist_TypeText(int32_t EntryPoint);                                                           // [0x198a600] Final|HasDefaults    
};

/// Class /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C
/// Size: 0x0430 (0x0002A8 - 0x0006D8)
class UWBP_UI_RegistWidget_C : public UActionInputWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1752;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_NameLayer_Exit                                         OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_NameLayer_Entry                                        OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_ReturnFadeIn                                           OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_FadeOut                                                OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_FadeIn                                                 OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_Lower                                                  OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_Transition                                             OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UCanvasPanel*)                       AvatarHintLayer                                             OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UScaleBox*)                          AvatarLayer                                                 OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UImage*)                             AvatarTexture                                               OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UBorder*)                            BlackBG                                                     OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UButton*)                            Block_VX                                                    OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UButton*)                            Blocker                                                     OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Boy                                                  OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Confirm                                              OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Girl                                                 OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_PreSkip                                              OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Return                                               OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UImage*)                             DialogBG                                                    OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UTextBlock*)                         HintMessage                                                 OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UImage*)                             Image_OverlayBlack                                          OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UImage*)                             Image_VX                                                    OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UImage*)                             MaskLayer                                                   OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class USizeBox*)                           MovieCustomSubtitle                                         OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UImage*)                             MovieImage                                                  OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UScaleBox*)                          MovieLayer                                                  OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UEditableTextBox*)                   NameInput                                                   OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(class UCanvasPanel*)                       NameLayer                                                   OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(class UOverlay*)                           NameLayout                                                  OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class UKV_Button*)                         RandomButton                                                OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class UKV_Button*)                         SkipButton                                                  OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class UTextBlock*)                         SubtitleText                                                OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UTextBlock*)                         TextConfirm                                                 OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(class UWBP_Regist_TypeText_C*)             TypeLine1                                                   OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class UWBP_Regist_TypeText_C*)             TypeLine2                                                   OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UWBP_Regist_TypeText_C*)             TypeLine3                                                   OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class UVirtualKeyboardZone*)               VirtualKeyboardZone_Name                                    OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(class UImage*)                             VX_DialogBG                                                 OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(class UImage*)                             VX_DialogBG1                                                OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(class UImage*)                             VX_DialogBG2                                                OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(class UOverlay*)                           VX_Layer                                                    OFFSET(get<T>, {0x3F8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  Event_Regist_OnSelect                                       OFFSET(getStruct<T>, {0x400, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  Event_Regist_OnReturn                                       OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  Event_Regist_OnConfirmName                                  OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	DMember(int32_t)                                   Selection                                                   OFFSET(get<int32_t>, {0x430, 4, 0, 0})
	DMember(bool)                                      bWorldIdle                                                  OFFSET(get<bool>, {0x434, 1, 0, 0})
	SMember(FSlateColor)                               HintOK                                                      OFFSET(getStruct<T>, {0x438, 40, 0, 0})
	SMember(FSlateColor)                               HintFail                                                    OFFSET(getStruct<T>, {0x460, 40, 0, 0})
	SMember(FSlateColor)                               HintNorm                                                    OFFSET(getStruct<T>, {0x488, 40, 0, 0})
	CMember(TArray<FInt32Range>)                       PrefixExcludes                                              OFFSET(get<T>, {0x4B0, 16, 0, 0})
	CMember(TArray<FInt32Range>)                       CharacterRanges                                             OFFSET(get<T>, {0x4C0, 16, 0, 0})
	CMember(TArray<FCharacterWeight>)                  CharacterWeights                                            OFFSET(get<T>, {0x4D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  Event_Movie_OnPlay                                          OFFSET(getStruct<T>, {0x4E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  Event_Movie_OnPause                                         OFFSET(getStruct<T>, {0x4F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  Event_Movie_OnFinish                                        OFFSET(getStruct<T>, {0x500, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  Event_Movie_OnResume                                        OFFSET(getStruct<T>, {0x510, 16, 0, 0})
	CMember(class UMaterialInterface*)                 MovieMaterialTemplate                                       OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           MovieMaterialInstance                                       OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(class UMediaTexture*)                      MovieTexture                                                OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(class UMediaPlayer*)                       MoviePlayer                                                 OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(class UMediaSource*)                       MovieSource                                                 OFFSET(get<T>, {0x540, 8, 0, 0})
	SMember(FLinearColor)                              MaskFactorGirl                                              OFFSET(getStruct<T>, {0x548, 16, 0, 0})
	SMember(FLinearColor)                              MaskFactorBoy                                               OFFSET(getStruct<T>, {0x558, 16, 0, 0})
	DMember(bool)                                      bWorldReady                                                 OFFSET(get<bool>, {0x568, 1, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           SceneMaterialDynamic                                        OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UDataTable*)                         RandomPatternTable                                          OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UDataTable*)                         RandomLibraryTable                                          OFFSET(get<T>, {0x580, 8, 0, 0})
	SMember(FName)                                     CultureDefault                                              OFFSET(getStruct<T>, {0x588, 8, 0, 0})
	CMember(TMap<FString, float>)                      FilteredPattern                                             OFFSET(get<T>, {0x590, 80, 0, 0})
	CMember(TArray<FWeightedReplaceText>)              FilteredText                                                OFFSET(get<T>, {0x5E0, 16, 0, 0})
	DMember(bool)                                      bRandomInited                                               OFFSET(get<bool>, {0x5F0, 1, 0, 0})
	DMember(bool)                                      bRandomEnabled                                              OFFSET(get<bool>, {0x5F1, 1, 0, 0})
	DMember(int32_t)                                   PendingSelection                                            OFFSET(get<int32_t>, {0x5F4, 4, 0, 0})
	CMember(class UMultiMediaPlayer*)                  MultiPlayer                                                 OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(TWeakObjectPtr<class USoundWave*>)         MovieSound                                                  OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(class UDataTable*)                         SubtitleDataTable                                           OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(class UMediaAssistObject*)                 AssistObj                                                   OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(TSet<FName>)                               BlockCultures                                               OFFSET(get<T>, {0x638, 80, 0, 0})
	CMember(TWeakObjectPtr<class UDataTable*>)         SoftPatternTable                                            OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(TWeakObjectPtr<class UDataTable*>)         SoftLibraryTable                                            OFFSET(get<T>, {0x6B0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.SequenceEvent__ENTRYPOINTWBP_UI_RegistWidget
	// void SequenceEvent__ENTRYPOINTWBP_UI_RegistWidget();                                                                     // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.LayoutTyper
	// void LayoutTyper();                                                                                                      // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.TypeEnd
	// void TypeEnd();                                                                                                          // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.TypeSubtitle3
	// void TypeSubtitle3(FString Text, float Duration);                                                                        // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.TypeSubtitle2
	// void TypeSubtitle2(FString Text, float Duration);                                                                        // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.TypeSubtitle1
	// void TypeSubtitle1(FString Text, float Duration);                                                                        // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.GetSymbolsAllowed
	// void GetSymbolsAllowed(TArray<FInt32Range>& Result);                                                                     // [0x198a600] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.CheckRandomEnabled
	// void CheckRandomEnabled();                                                                                               // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.InitRandomName
	// void InitRandomName();                                                                                                   // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.MakeRandomName
	// void MakeRandomName(FString& Name);                                                                                      // [0x198a600] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.SetGender
	// void SetGender(int32_t Gender);                                                                                          // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.SetSceneTexture
	// void SetSceneTexture(class UTexture* Texture);                                                                           // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.InitMovie
	// void InitMovie();                                                                                                        // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.CreateCharacter
	// void CreateCharacter();                                                                                                  // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.InitializeValidation
	// void InitializeValidation();                                                                                             // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.UpdateValidation
	// void UpdateValidation(FString Name);                                                                                     // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.ValidateCharacterName
	// void ValidateCharacterName(FString Name, FText& Message, bool& bIsValid);                                                // [0x198a600] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.UpdateHintMessage
	// void UpdateHintMessage(int32_t Type, FText Message);                                                                     // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.OnReturnDark
	// void OnReturnDark();                                                                                                     // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.PlayMovie
	// void PlayMovie();                                                                                                        // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.PauseMovie
	// void PauseMovie();                                                                                                       // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.StopMovie
	// void StopMovie();                                                                                                        // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.BindMovieOpened
	// void BindMovieOpened();                                                                                                  // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.BindMoviePaused
	// void BindMoviePaused();                                                                                                  // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.BindMovieComplete
	// void BindMovieComplete();                                                                                                // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.OnMoviePaused
	// void OnMoviePaused();                                                                                                    // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.BindMovieResumed
	// void BindMovieResumed();                                                                                                 // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.OnMovieResumed
	// void OnMovieResumed();                                                                                                   // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.OnMovieFinished
	// void OnMovieFinished();                                                                                                  // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.ResumeMovie
	// void ResumeMovie();                                                                                                      // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.BndEvt__SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                          // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.BindMovieOpenFailed
	// void BindMovieOpenFailed();                                                                                              // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.OnMoviePlayed
	// void OnMoviePlayed();                                                                                                    // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.OnOpenFailed
	// void OnOpenFailed();                                                                                                     // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.BindSubtitleUpdate
	// void BindSubtitleUpdate();                                                                                               // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.OnSubtitleUpdate
	// void OnSubtitleUpdate(FString Subtitle);                                                                                 // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.onAppBackground
	// void onAppBackground();                                                                                                  // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.onAppForeground
	// void onAppForeground();                                                                                                  // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.OnSetAssistObjAndBindAppChangeState
	// void OnSetAssistObjAndBindAppChangeState();                                                                              // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.OnClearAssistObj
	// void OnClearAssistObj();                                                                                                 // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.OnCustomSubtitle
	// void OnCustomSubtitle(FName& Name, FString Subtitle, float Length, float TimeOffset);                                    // [0x198a600] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.OnCustomEvent
	// void OnCustomEvent(FName& Name);                                                                                         // [0x198a600] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.SelectAvatar
	// void SelectAvatar(int32_t NewSelection);                                                                                 // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.ReturnToSelect
	// void ReturnToSelect();                                                                                                   // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.WorldSelectFinished
	// void WorldSelectFinished();                                                                                              // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.WorldReturnFinished
	// void WorldReturnFinished();                                                                                              // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.RegisterFailed
	// void RegisterFailed(FString Message);                                                                                    // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.RegisterSucceed
	// void RegisterSucceed();                                                                                                  // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();                      // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.BndEvt__Button_Return_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Return_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();                       // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.WorldReady
	// void WorldReady();                                                                                                       // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.BndEvt__RandomButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__RandomButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();                        // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.OnReturnAnimation
	// void OnReturnAnimation();                                                                                                // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.OnRegistAnimation
	// void OnRegistAnimation();                                                                                                // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.BndEvt__Button_PreSkip_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_PreSkip_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();                      // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.Construct
	// void Construct();                                                                                                        // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.BndEvt__Button_Girl_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Girl_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                         // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.BndEvt__Button_Boy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Boy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();                          // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.OnInitialized
	// void OnInitialized();                                                                                                    // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.Destruct
	// void Destruct();                                                                                                         // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.Anim_TransFinish
	// void Anim_TransFinish();                                                                                                 // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.FadeIn_SelectAvatar
	// void FadeIn_SelectAvatar(int32_t Gender);                                                                                // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.OnFadeIn_SelectAvatar
	// void OnFadeIn_SelectAvatar();                                                                                            // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.FadeOut_SelectAvatar
	// void FadeOut_SelectAvatar();                                                                                             // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.FadeIn_ReturnAvatar
	// void FadeIn_ReturnAvatar();                                                                                              // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.OnFadeIn_ReturnAvatar
	// void OnFadeIn_ReturnAvatar();                                                                                            // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.FadeOut_ReturnAvatar
	// void FadeOut_ReturnAvatar();                                                                                             // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.ExecuteUbergraph_WBP_UI_RegistWidget
	// void ExecuteUbergraph_WBP_UI_RegistWidget(int32_t EntryPoint);                                                           // [0x198a600] Final|HasDefaults    
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.Event_Movie_OnResume__DelegateSignature
	// void Event_Movie_OnResume__DelegateSignature();                                                                          // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.Event_Movie_OnFinish__DelegateSignature
	// void Event_Movie_OnFinish__DelegateSignature();                                                                          // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.Event_Movie_OnPause__DelegateSignature
	// void Event_Movie_OnPause__DelegateSignature();                                                                           // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.Event_Movie_OnPlay__DelegateSignature
	// void Event_Movie_OnPlay__DelegateSignature();                                                                            // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.Event_Regist_OnConfirmName__DelegateSignature
	// void Event_Regist_OnConfirmName__DelegateSignature(FString CharName);                                                    // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.Event_Regist_OnReturn__DelegateSignature
	// void Event_Regist_OnReturn__DelegateSignature();                                                                         // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_RegistWidget.WBP_UI_RegistWidget_C.Event_Regist_OnSelect__DelegateSignature
	// void Event_Regist_OnSelect__DelegateSignature(int32_t Gender);                                                           // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Widgets/SysUI/WBP_UI_LocalizationOptItem.WBP_UI_LocalizationOptItem_C
/// Size: 0x0061 (0x000280 - 0x0002E1)
class UWBP_UI_LocalizationOptItem_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 737;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x280, 8, 0, 0})
	CMember(class UKV_Button*)                         Btn                                                         OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UOverlay*)                           check                                                       OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UOverlay*)                           DefaultFlag                                                 OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UTextBlock*)                         NameText                                                    OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UTextBlock*)                         SizeText                                                    OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UTextBlock*)                         TextDownload                                                OFFSET(get<T>, {0x2B8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemClicked                                               OFFSET(getStruct<T>, {0x2C0, 16, 0, 0})
	DMember(bool)                                      Selected                                                    OFFSET(get<bool>, {0x2D0, 1, 0, 0})
	DMember(bool)                                      IsDefault                                                   OFFSET(get<bool>, {0x2D1, 1, 0, 0})
	DMember(int32_t)                                   ChunkId                                                     OFFSET(get<int32_t>, {0x2D4, 4, 0, 0})
	DMember(int64_t)                                   DownloadSize                                                OFFSET(get<int64_t>, {0x2D8, 8, 0, 0})
	DMember(bool)                                      isToDownload                                                OFFSET(get<bool>, {0x2E0, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/SysUI/WBP_UI_LocalizationOptItem.WBP_UI_LocalizationOptItem_C.GetSizeFormatStr
	// void GetSizeFormatStr(int64_t InSize, FString& OutSpeedStr);                                                             // [0x198a600] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_LocalizationOptItem.WBP_UI_LocalizationOptItem_C.CheckShowDefault
	// void CheckShowDefault(bool CheckShow);                                                                                   // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_LocalizationOptItem.WBP_UI_LocalizationOptItem_C.Init
	// void Init(int32_t ChunkId, bool IsDefault, FText Name, int64_t Size, bool ToDownload);                                   // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_LocalizationOptItem.WBP_UI_LocalizationOptItem_C.OnSelect
	// void OnSelect(bool Value);                                                                                               // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_LocalizationOptItem.WBP_UI_LocalizationOptItem_C.BP_OnEntryReleased
	// void BP_OnEntryReleased();                                                                                               // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_LocalizationOptItem.WBP_UI_LocalizationOptItem_C.BP_OnItemExpansionChanged
	// void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_LocalizationOptItem.WBP_UI_LocalizationOptItem_C.BP_OnItemSelectionChanged
	// void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_LocalizationOptItem.WBP_UI_LocalizationOptItem_C.OnListItemObjectSet
	// void OnListItemObjectSet(class UObject* ListItemObject);                                                                 // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_LocalizationOptItem.WBP_UI_LocalizationOptItem_C.BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();                                 // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/WBP_UI_LocalizationOptItem.WBP_UI_LocalizationOptItem_C.ExecuteUbergraph_WBP_UI_LocalizationOptItem
	// void ExecuteUbergraph_WBP_UI_LocalizationOptItem(int32_t EntryPoint);                                                    // [0x198a600] Final                
	// Function /Game/UI/Widgets/SysUI/WBP_UI_LocalizationOptItem.WBP_UI_LocalizationOptItem_C.OnItemClicked__DelegateSignature
	// void OnItemClicked__DelegateSignature(class UWBP_UI_LocalizationOptItem_C* Item);                                        // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Widgets/SysUI/WBP_UI_localizationOpt.WBP_UI_localizationOpt_C
/// Size: 0x0170 (0x0002A8 - 0x000418)
class UWBP_UI_localizationOpt_C : public UActionInputWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(class UKV_Button*)                         GetReardBtn                                                 OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_ItemParent                                        OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Title_NoDownload                                       OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UTextBlock*)                         TextDefault                                                 OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(TArray<class UWBP_UI_LocalizationOptItem_C*>) Items                                                    OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(class UDataTable*)                         DTChunk                                                     OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(TMap<int32_t, int64_t>)                    Chunk2SizeMap                                               OFFSET(get<T>, {0x2F0, 80, 0, 0})
	CMember(TArray<int32_t>)                           TmpChunkIds                                                 OFFSET(get<T>, {0x340, 16, 0, 0})
	DMember(int32_t)                                   DefaultChunkId                                              OFFSET(get<int32_t>, {0x350, 4, 0, 0})
	DMember(bool)                                      Initialized                                                 OFFSET(get<bool>, {0x354, 1, 0, 0})
	CMember(class UDataTable*)                         DTLocalizationDefine                                        OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(TArray<class UWBP_UI_LocalizationOptItem_C*>) SelectedItems                                            OFFSET(get<T>, {0x360, 16, 0, 0})
	CMember(TMap<int32_t, FString>)                    Chunk2Localization                                          OFFSET(get<T>, {0x370, 80, 0, 0})
	CMember(class UDataTable*)                         DTAudioLocalizationDefine                                   OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(TMap<int32_t, FText>)                      AudioId2Names                                               OFFSET(get<T>, {0x3C8, 80, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/SysUI/WBP_UI_localizationOpt.WBP_UI_localizationOpt_C.NeedDownload
	// void NeedDownload(bool& Ret);                                                                                            // [0x198a600] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_localizationOpt.WBP_UI_localizationOpt_C.CheckShow
	// void CheckShow();                                                                                                        // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_localizationOpt.WBP_UI_localizationOpt_C.OnItemClickedCall
	// void OnItemClickedCall(class UWBP_UI_LocalizationOptItem_C* Item);                                                       // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_localizationOpt.WBP_UI_localizationOpt_C.CreateLocalizationOptItem
	// void CreateLocalizationOptItem(int32_t ChunkId, FText Name, bool IsDefault);                                             // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_localizationOpt.WBP_UI_localizationOpt_C.Construct
	// void Construct();                                                                                                        // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_localizationOpt.WBP_UI_localizationOpt_C.BndEvt__GetReardBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__GetReardBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                         // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/WBP_UI_localizationOpt.WBP_UI_localizationOpt_C.CustomEvent
	// void CustomEvent(bool Succeeded);                                                                                        // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_localizationOpt.WBP_UI_localizationOpt_C.ExecuteUbergraph_WBP_UI_localizationOpt
	// void ExecuteUbergraph_WBP_UI_localizationOpt(int32_t EntryPoint);                                                        // [0x198a600] Final                
};

/// Class /Game/UI/Widgets/SysUI/WBP_Login_ServerItem.WBP_Login_ServerItem_C
/// Size: 0x00B9 (0x0002A8 - 0x000361)
class UWBP_Login_ServerItem_C : public UActionInputWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 865;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   ServerPanel_In                                              OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   ServerItem_Select_Loop                                      OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   ServerItem_Click_In                                         OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   ServerItem_Select_Out                                       OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UImage*)                             BG_Hover                                                    OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UImage*)                             Image_State                                                 OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UTextBlock*)                         NameText                                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_Recent                                              OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_Recomment                                           OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_Selection                                           OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UHorizontalBox*)                     Region_Layout                                               OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UTextBlock*)                         RegionAbbr                                                  OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UImage*)                             RegionBG                                                    OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class USizeBox*)                           Role_Layout                                                 OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UTextBlock*)                         RoleText                                                    OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UHorizontalBox*)                     Server_Layout                                               OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UServerData*)                        ServerData                                                  OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(TArray<class UObject*>)                    StateIcons                                                  OFFSET(get<T>, {0x338, 16, 0, 0})
	DMember(bool)                                      IsSelect                                                    OFFSET(get<bool>, {0x348, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAnimeEnd                                                  OFFSET(getStruct<T>, {0x350, 16, 0, 0})
	DMember(bool)                                      bWithRegionTag                                              OFFSET(get<bool>, {0x360, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerItem.WBP_Login_ServerItem_C.UpdateServerInfo
	// void UpdateServerInfo();                                                                                                 // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerItem.WBP_Login_ServerItem_C.UpdateRoleInfo
	// void UpdateRoleInfo(int32_t Level, FString Name);                                                                        // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerItem.WBP_Login_ServerItem_C.SetRegionTagEnabled
	// void SetRegionTagEnabled(bool bEnabled);                                                                                 // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerItem.WBP_Login_ServerItem_C.UpdateRecommend
	// void UpdateRecommend();                                                                                                  // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerItem.WBP_Login_ServerItem_C.UpdateSelection
	// void UpdateSelection();                                                                                                  // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerItem.WBP_Login_ServerItem_C.SetServerStatus
	// void SetServerStatus(int32_t status);                                                                                    // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerItem.WBP_Login_ServerItem_C.BP_OnEntryReleased
	// void BP_OnEntryReleased();                                                                                               // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerItem.WBP_Login_ServerItem_C.BP_OnItemExpansionChanged
	// void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerItem.WBP_Login_ServerItem_C.BP_OnItemSelectionChanged
	// void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerItem.WBP_Login_ServerItem_C.OnListItemObjectSet
	// void OnListItemObjectSet(class UObject* ListItemObject);                                                                 // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerItem.WBP_Login_ServerItem_C.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x198a600] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerItem.WBP_Login_ServerItem_C.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x198a600] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerItem.WBP_Login_ServerItem_C.ExecuteUbergraph_WBP_Login_ServerItem
	// void ExecuteUbergraph_WBP_Login_ServerItem(int32_t EntryPoint);                                                          // [0x198a600] Final|HasDefaults    
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerItem.WBP_Login_ServerItem_C.OnAnimeEnd__DelegateSignature
	// void OnAnimeEnd__DelegateSignature();                                                                                    // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Widgets/SysUI/WBP_Login_ServerTab.WBP_Login_ServerTab_C
/// Size: 0x00A4 (0x000280 - 0x000324)
class UWBP_Login_ServerTab_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 804;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x280, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Click                                                OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UImage*)                             Image_Arrow_R                                               OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UImage*)                             Image_DecLine                                               OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UImage*)                             Image_Selected                                              OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Name                                                   OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    WidgetSwitcher_Deco                                         OFFSET(get<T>, {0x2B0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTabClicked                                                OFFSET(getStruct<T>, {0x2B8, 16, 0, 0})
	DMember(bool)                                      bSelected                                                   OFFSET(get<bool>, {0x2C8, 1, 0, 0})
	SMember(FSlateColor)                               SelectedTextColor                                           OFFSET(getStruct<T>, {0x2D0, 40, 0, 0})
	SMember(FSlateColor)                               UnselectedTextColor                                         OFFSET(getStruct<T>, {0x2F8, 40, 0, 0})
	DMember(int32_t)                                   TabKey                                                      OFFSET(get<int32_t>, {0x320, 4, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerTab.WBP_Login_ServerTab_C.BndEvt__Button_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Click_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                        // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerTab.WBP_Login_ServerTab_C.SetSelected
	// void SetSelected(bool bSelected);                                                                                        // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerTab.WBP_Login_ServerTab_C.InitializeTab
	// void InitializeTab(int32_t Key, FText Name);                                                                             // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerTab.WBP_Login_ServerTab_C.UpdateTabName
	// void UpdateTabName(FText Name);                                                                                          // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerTab.WBP_Login_ServerTab_C.ExecuteUbergraph_WBP_Login_ServerTab
	// void ExecuteUbergraph_WBP_Login_ServerTab(int32_t EntryPoint);                                                           // [0x198a600] Final|HasDefaults    
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerTab.WBP_Login_ServerTab_C.OnTabClicked__DelegateSignature
	// void OnTabClicked__DelegateSignature(class UWBP_Login_ServerTab_C* TabObject);                                           // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Widgets/SysUI/WBP_Login_ServerPanel.WBP_Login_ServerPanel_C
/// Size: 0x0080 (0x0002A8 - 0x000328)
class UWBP_Login_ServerPanel_C : public UActionInputWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   ServerPanel_In                                              OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   ServerPanel_Out                                             OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UImage*)                             Image_Busy                                                  OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UImage*)                             Image_Full                                                  OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UImage*)                             Image_Idle                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UImage*)                             Image_Maintain                                              OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UTileView*)                          ServerContainer                                             OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UTextBlock*)                         TextTitle                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemSelect                                                OFFSET(getStruct<T>, {0x2F0, 16, 0, 0})
	CMember(class UServerData*)                        CurrSelectItem                                              OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UServerData*)                        NextSelectItem                                              OFFSET(get<T>, {0x308, 8, 0, 0})
	DMember(bool)                                      bWithRegionTag                                              OFFSET(get<bool>, {0x310, 1, 0, 0})
	CMember(TArray<class UWBP_Login_ServerItem_C*>)    GeneratedEntries                                            OFFSET(get<T>, {0x318, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerPanel.WBP_Login_ServerPanel_C.UpdateServerState
	// void UpdateServerState();                                                                                                // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerPanel.WBP_Login_ServerPanel_C.SetWithRegionTag
	// void SetWithRegionTag(bool bWithRegionTag);                                                                              // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerPanel.WBP_Login_ServerPanel_C.OnNavigationNext
	// class UWidget* OnNavigationNext(EUINavigation Navigation);                                                               // [0x198a600] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerPanel.WBP_Login_ServerPanel_C.OnActionInputDown
	// void OnActionInputDown(FGameplayTag& GameplayTag);                                                                       // [0x198a600] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerPanel.WBP_Login_ServerPanel_C.UpdataSelection
	// void UpdataSelection();                                                                                                  // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerPanel.WBP_Login_ServerPanel_C.SetServerData
	// void SetServerData(TArray<UServerData*>& Servers);                                                                       // [0x198a600] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerPanel.WBP_Login_ServerPanel_C.BndEvt__ServerContainer_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature
	// void BndEvt__ServerContainer_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget); // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerPanel.WBP_Login_ServerPanel_C.BndEvt__ServerContainer_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
	// void BndEvt__ServerContainer_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item); // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerPanel.WBP_Login_ServerPanel_C.ExecuteUbergraph_WBP_Login_ServerPanel
	// void ExecuteUbergraph_WBP_Login_ServerPanel(int32_t EntryPoint);                                                         // [0x198a600] Final                
	// Function /Game/UI/Widgets/SysUI/WBP_Login_ServerPanel.WBP_Login_ServerPanel_C.OnItemSelect__DelegateSignature
	// void OnItemSelect__DelegateSignature(class UObject* Item);                                                               // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Structs/Share/BP_RichTextBlockDecorator_Tips.BP_RichTextBlockDecorator_Tips_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBP_RichTextBlockDecorator_Tips_C : public URichTextBlockImageDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Game/UI/Widgets/Share/WBP_UI_Share_Safe_Zone.WBP_UI_Share_Safe_Zone_C
/// Size: 0x002E (0x0002C0 - 0x0002EE)
class UWBP_UI_Share_Safe_Zone_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 750;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(class UEdenSafeZone*)                      EdenSafeZone                                                OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UNamedSlot*)                         NamedSlot_Safe_Zone                                         OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class USpacer*)                            Spacer_Menu_Bar                                             OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class USpacer*)                            Spacer_Tab_Bar                                              OFFSET(get<T>, {0x2E0, 8, 0, 0})
	DMember(bool)                                      bPadLeft                                                    OFFSET(get<bool>, {0x2E8, 1, 0, 0})
	DMember(bool)                                      bPadTop                                                     OFFSET(get<bool>, {0x2E9, 1, 0, 0})
	DMember(bool)                                      bPadRight                                                   OFFSET(get<bool>, {0x2EA, 1, 0, 0})
	DMember(bool)                                      bPadBottom                                                  OFFSET(get<bool>, {0x2EB, 1, 0, 0})
	DMember(bool)                                      bHasMenuBar                                                 OFFSET(get<bool>, {0x2EC, 1, 0, 0})
	DMember(bool)                                      bHasTabBar                                                  OFFSET(get<bool>, {0x2ED, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Safe_Zone.WBP_UI_Share_Safe_Zone_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Safe_Zone.WBP_UI_Share_Safe_Zone_C.ExecuteUbergraph_WBP_UI_Share_Safe_Zone
	// void ExecuteUbergraph_WBP_UI_Share_Safe_Zone(int32_t EntryPoint);                                                        // [0x198a600] Final                
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_Input_Key.WBP_UI_Setting_Input_Key_C
/// Size: 0x0038 (0x000280 - 0x0002B8)
class UWBP_UI_Setting_Input_Key_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x280, 8, 0, 0})
	CMember(class UActionInputIcon*)                   ActionInputIcon_Show                                        OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Setting_Name                                           OFFSET(get<T>, {0x290, 8, 0, 0})
	SMember(FGameplayTag)                              ActionTag                                                   OFFSET(getStruct<T>, {0x298, 8, 0, 0})
	SMember(FText)                                     ShowName                                                    OFFSET(getStruct<T>, {0x2A0, 24, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Input_Key.WBP_UI_Setting_Input_Key_C.UpdateView
	// void UpdateView();                                                                                                       // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Input_Key.WBP_UI_Setting_Input_Key_C.SetData
	// void SetData(FGameplayTag ActionTag, FText ShowName);                                                                    // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Input_Key.WBP_UI_Setting_Input_Key_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Input_Key.WBP_UI_Setting_Input_Key_C.ExecuteUbergraph_WBP_UI_Setting_Input_Key
	// void ExecuteUbergraph_WBP_UI_Setting_Input_Key(int32_t EntryPoint);                                                      // [0x198a600] Final                
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_Input_Preset.WBP_UI_Setting_Input_Preset_C
/// Size: 0x0080 (0x0002C0 - 0x000340)
class UWBP_UI_Setting_Input_Preset_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(class UWidgetAnimation*)                   Anim_Turn_On                                                OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UImage*)                             bg                                                          OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Combo_Box                                            OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UImage*)                             ButtonIcon                                                  OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UCanvasPanel*)                       CanvasPanel_Clip                                            OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UCanvasPanel*)                       CanvasPanel_Size                                            OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Button                                      OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Key                                         OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UImage*)                             ImageBg                                                     OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_List                                                OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Combo_Button                                           OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Setting_Name                                           OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(TArray<FGameplayTag>)                      ActionTagList                                               OFFSET(get<T>, {0x320, 16, 0, 0})
	CMember(TArray<FText>)                             ShowNameList                                                OFFSET(get<T>, {0x330, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Input_Preset.WBP_UI_Setting_Input_Preset_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Input_Preset.WBP_UI_Setting_Input_Preset_C.UpdateKeyList
	// void UpdateKeyList();                                                                                                    // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_CheckBox.WBP_UI_Setting_CheckBox_C
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UWBP_UI_Setting_CheckBox_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(class UKV_Button*)                         Button_CheckBox_Setting                                     OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UImage*)                             Image_Bg                                                    OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UImage*)                             Image_Check                                                 OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Setting_Name                                           OFFSET(get<T>, {0x2D8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_CheckBox.WBP_UI_Setting_CheckBox_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_Combo_Box_Button.WBP_UI_Setting_Combo_Box_Button_C
/// Size: 0x0038 (0x0002C0 - 0x0002F8)
class UWBP_UI_Setting_Combo_Box_Button_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(class UKV_Button*)                         Button_Combo_Box                                            OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UImage*)                             ButtonIcon                                                  OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UImage*)                             Image_Selected                                              OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UImage*)                             ImageBg                                                     OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Button                                                 OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Button1                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    WidgetSwitcher_Button                                       OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Combo_Box_Button.WBP_UI_Setting_Combo_Box_Button_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_Switch.WBP_UI_Setting_Switch_C
/// Size: 0x0060 (0x0002C0 - 0x000320)
class UWBP_UI_Setting_Switch_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(class UImage*)                             bg                                                          OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Switch                                               OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UHorizontalBox*)                     Horizontal_Box_Switch1                                      OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UHorizontalBox*)                     Horizontal_Box_Switch2                                      OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UImage*)                             Image_Button                                                OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UImage*)                             Image_OFF                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UImage*)                             Image_ON                                                    OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_OFF_Switch                                             OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_OFF_Switch1                                            OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_ON_Switch                                              OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_ON_Switch1                                             OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Setting_Name                                           OFFSET(get<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Switch.WBP_UI_Setting_Switch_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_Slider.WBP_UI_Setting_Slider_C
/// Size: 0x0058 (0x0002C0 - 0x000318)
class UWBP_UI_Setting_Slider_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(class UImage*)                             bg                                                          OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Setting_Slider_Minus                                 OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Setting_Slider_Plus                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UImage*)                             Image2                                                      OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UImage*)                             Image3                                                      OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UProgressBar*)                       ProgressBar_Slider                                          OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class USlider*)                            Slider_Setting                                              OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Setting_Name                                           OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Slider_Value                                           OFFSET(get<T>, {0x310, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Slider.WBP_UI_Setting_Slider_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_Combo_Box.WBP_UI_Setting_Combo_Box_C
/// Size: 0x0058 (0x0002C0 - 0x000318)
class UWBP_UI_Setting_Combo_Box_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(class UWidgetAnimation*)                   Anim_Turn_On                                                OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UImage*)                             bg                                                          OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Combo_Box                                            OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UImage*)                             ButtonIcon                                                  OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UCanvasPanel*)                       CanvasPanel_Clip                                            OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UCanvasPanel*)                       CanvasPanel_Size                                            OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Button                                      OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UImage*)                             ImageBg                                                     OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_List                                                OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Combo_Button                                           OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Setting_Name                                           OFFSET(get<T>, {0x310, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Combo_Box.WBP_UI_Setting_Combo_Box_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_CheckBox_Bar.WBP_UI_Setting_CheckBox_Bar_C
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class UWBP_UI_Setting_CheckBox_Bar_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(class UImage*)                             bg                                                          OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_CheckBox                                    OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Setting_Name                                           OFFSET(get<T>, {0x2D0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_CheckBox_Bar.WBP_UI_Setting_CheckBox_Bar_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_Button.WBP_UI_Setting_Button_C
/// Size: 0x0038 (0x0002C0 - 0x0002F8)
class UWBP_UI_Setting_Button_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(class UImage*)                             bg                                                          OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button                                                      OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UHorizontalBox*)                     Horizontal_Box                                              OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UImage*)                             Image_ON                                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_On                                                     OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Setting_Name                                           OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Button.WBP_UI_Setting_Button_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Button.WBP_UI_Setting_Button_C.CallFunTest
	// void CallFunTest();                                                                                                      // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_Item.WBP_UI_Setting_Item_C
/// Size: 0x0040 (0x0002C0 - 0x000300)
class UWBP_UI_Setting_Item_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class UCanvasPanel*)                       CanvasPanel                                                 OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_Setting                                             OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UWBP_UI_Setting_Button_C*)           WBP_UI_Setting_Button                                       OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UWBP_UI_Setting_CheckBox_Bar_C*)     WBP_UI_Setting_CheckBox_Bar                                 OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UWBP_UI_Setting_Combo_Box_C*)        WBP_UI_Setting_Combo_Box                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UWBP_UI_Setting_Slider_C*)           WBP_UI_Setting_Slider                                       OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UWBP_UI_Setting_Switch_C*)           WBP_UI_Setting_Switch                                       OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    WidgetSwitcher_Setting_Item                                 OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Item.WBP_UI_Setting_Item_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/UI/Widgets/Share/WBP_UI_Share_Tab.WBP_UI_Share_Tab_2_C
/// Size: 0x0070 (0x0002C0 - 0x000330)
class UWBP_UI_Share_Tab_2_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_Deselect                                               OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_Select                                                 OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Click                                                OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UImage*)                             Image_Arrow                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UImage*)                             Image_Icon                                                  OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UImage*)                             Image_Selected                                              OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_Flag                                                OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_Icon                                                OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Flag                                                   OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Name                                                   OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UWBP_UI_Share_Badge_C*)              WBP_UI_Share_Badge                                          OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    WidgetSwitcher_Deco                                         OFFSET(get<T>, {0x328, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Tab.WBP_UI_Share_Tab_2_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Tab.WBP_UI_Share_Tab_2_C.PlayClickAudio
	// void PlayClickAudio();                                                                                                   // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Tab.WBP_UI_Share_Tab_2_C.SetSelection
	// void SetSelection(bool IsSelected, bool IsImmediately);                                                                  // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Tab.WBP_UI_Share_Tab_2_C.CustomPlayAnimation
	// void CustomPlayAnimation(class UWidgetAnimation* Anime, bool IsImmediately);                                             // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Tab.WBP_UI_Share_Tab_2_C.ExecuteUbergraph_WBP_UI_Share_Tab
	// void ExecuteUbergraph_WBP_UI_Share_Tab(int32_t EntryPoint);                                                              // [0x198a600] Final                
};

/// Class /Game/UI/Widgets/Share/WBP_UI_Share_White_BG.WBP_UI_Share_White_BG_C
/// Size: 0x0029 (0x0002C0 - 0x0002E9)
class UWBP_UI_Share_White_BG_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 745;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_Entry                                                  OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_Loop                                                   OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_Tab                                                 OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UImage*)                             VX_01                                                       OFFSET(get<T>, {0x2E0, 8, 0, 0})
	DMember(bool)                                      IsShowTab                                                   OFFSET(get<bool>, {0x2E8, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_White_BG.WBP_UI_Share_White_BG_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_White_BG.WBP_UI_Share_White_BG_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_White_BG.WBP_UI_Share_White_BG_C.ExecuteUbergraph_WBP_UI_Share_White_BG
	// void ExecuteUbergraph_WBP_UI_Share_White_BG(int32_t EntryPoint);                                                         // [0x198a600] Final                
};

/// Class /Game/UI/Widgets/Share/WBP_UI_Share_Tab_Bar.WBP_UI_Share_Tab_Bar_2_C
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UWBP_UI_Share_Tab_Bar_2_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(class UWidgetAnimation*)                   Anim_Entry                                                  OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UActionInputContent*)                ActionInputContent_Tab                                      OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Tab                                         OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_Tab                                               OFFSET(get<T>, {0x2D8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Tab_Bar.WBP_UI_Share_Tab_Bar_2_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_Sound.WBP_UI_Setting_Sound_C
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class UWBP_UI_Setting_Sound_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Sound                                       OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UImage*)                             line                                                        OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Sound.WBP_UI_Setting_Sound_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_Push.WBP_UI_Setting_Push_C
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class UWBP_UI_Setting_Push_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Push                                        OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UImage*)                             line                                                        OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Push.WBP_UI_Setting_Push_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_Other.WBP_UI_Setting_Other_C
/// Size: 0x00B8 (0x0002C0 - 0x000378)
class UWBP_UI_Setting_Other_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	CMember(class UHorizontalBox*)                     ArchiveLayout                                               OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UImage*)                             bg                                                          OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UTextBlock*)                         BindPhone_AwardNum                                          OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UTextBlock*)                         BindPhoneAwardText                                          OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UOverlay*)                           BindPhoneLayout                                             OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Archive                                              OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Bind_Phone                                           OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Logout                                               OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Redeem_Code                                          OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Restore                                              OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Other                                       OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UHorizontalBox*)                     Horizontal_Box                                              OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UImage*)                             Image_ON                                                    OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UImage*)                             line                                                        OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UImage*)                             Reward_Icon                                                 OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Bind_Des                                               OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Cancel                                                 OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Cancel1                                                OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Cancel2                                                OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_OK                                                     OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Setting_Name                                           OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x370, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Other.WBP_UI_Setting_Other_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_Operation.WBP_UI_Setting_Operation_C
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UWBP_UI_Setting_Operation_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Operation                                   OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UImage*)                             line                                                        OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UWBP_UI_Setting_Input_Preset_C*)     WBP_UI_Setting_Input_Preset                                 OFFSET(get<T>, {0x2D8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Operation.WBP_UI_Setting_Operation_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_Language.WBP_UI_Setting_Language_C
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class UWBP_UI_Setting_Language_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Language                                    OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UImage*)                             line                                                        OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Language.WBP_UI_Setting_Language_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_Graphics.WBP_UI_Setting_Graphics_C
/// Size: 0x01C8 (0x0002C0 - 0x000488)
class UWBP_UI_Setting_Graphics_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	CMember(class UImage*)                             bg                                                          OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UButton*)                            Button_Advanced                                             OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UButton*)                            Button_Normal                                               OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Quality0                                             OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Quality1                                             OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Quality2                                             OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Quality3                                             OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Quality4                                             OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Quality5                                             OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Graphics_Advanced                           OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Graphics_Normal                             OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UImage*)                             Image_Des5                                                  OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UImage*)                             Image_Level0                                                OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UImage*)                             Image_Level01                                               OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UImage*)                             Image_Level1                                                OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UImage*)                             Image_Level11                                               OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UImage*)                             Image_Level2                                                OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UImage*)                             Image_Level21                                               OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UImage*)                             Image_Level3                                                OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UImage*)                             Image_Level31                                               OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UImage*)                             Image_Level4                                                OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UImage*)                             Image_Level41                                               OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UImage*)                             Image_Level5                                                OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UImage*)                             Image_Level51                                               OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UImage*)                             Image_Split                                                 OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UImage*)                             line                                                        OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(class UImage*)                             Line0                                                       OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(class UImage*)                             Line1                                                       OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class UImage*)                             Line2                                                       OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class UImage*)                             Line3                                                       OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class UImage*)                             Line4                                                       OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UImage*)                             Line41                                                      OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(class UImage*)                             Line42                                                      OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class UImage*)                             Line43                                                      OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UImage*)                             Line44                                                      OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class UImage*)                             Line45                                                      OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(class UImage*)                             Line46                                                      OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(class UImage*)                             Line47                                                      OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(class UImage*)                             Line48                                                      OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(class UVerticalBox*)                       Overlay_Des0                                                OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(class UVerticalBox*)                       Overlay_Des1                                                OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(class UVerticalBox*)                       Overlay_Des2                                                OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UVerticalBox*)                       Overlay_Des3                                                OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UVerticalBox*)                       Overlay_Des4                                                OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UVerticalBox*)                       Overlay_Des5                                                OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UScrollBox*)                         Scroll_Box_Advanced                                         OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UScrollBox*)                         Scroll_Box_Normal                                           OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Des0                                                   OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Des1                                                   OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Des2                                                   OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Des3                                                   OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Des4                                                   OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Des5                                                   OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Setting_Advanced                                       OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Setting_Name                                           OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Setting_Normal                                         OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      Text_Title                                                  OFFSET(get<T>, {0x480, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Graphics.WBP_UI_Setting_Graphics_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_Account.WBP_UI_Setting_Account_C
/// Size: 0x0040 (0x0002C0 - 0x000300)
class UWBP_UI_Setting_Account_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class UImage*)                             bg                                                          OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Account_Cancel                                       OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Logout                                               OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Account                                     OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Cancel                                                 OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_OK                                                     OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UWBP_UI_Share_Safe_Zone_C*)          WBP_UI_Share_Safe_Zone                                      OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Account.WBP_UI_Setting_Account_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/UI/Widgets/Popup/WBP_UI_Popup_BG_S.WBP_UI_Popup_BG_S_C
/// Size: 0x00F1 (0x0002C0 - 0x0003B1)
class UWBP_UI_Popup_BG_S_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 945;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_Exit                                                   OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_Entry                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Cancel                                               OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Close                                                OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_OK                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UNamedSlot*)                         NamedSlot_Button                                            OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UNamedSlot*)                         NamedSlot_Content                                           OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class URichTextBlock*)                     RichTextBlock_Desc                                          OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Cancel                                                 OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_OK                                                     OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x318, 8, 0, 0})
	SMember(FText)                                     TextTitle                                                   OFFSET(getStruct<T>, {0x320, 24, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCloseEvent                                                OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCancelEvent                                               OFFSET(getStruct<T>, {0x348, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOKEvent                                                   OFFSET(getStruct<T>, {0x358, 16, 0, 0})
	SMember(FText)                                     TextDesc                                                    OFFSET(getStruct<T>, {0x368, 24, 0, 0})
	SMember(FText)                                     TextCancel                                                  OFFSET(getStruct<T>, {0x380, 24, 0, 0})
	SMember(FText)                                     TextOK                                                      OFFSET(getStruct<T>, {0x398, 24, 0, 0})
	DMember(bool)                                      bShowOnConstruct                                            OFFSET(get<bool>, {0x3B0, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Popup/WBP_UI_Popup_BG_S.WBP_UI_Popup_BG_S_C.Show
	// void Show();                                                                                                             // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Popup/WBP_UI_Popup_BG_S.WBP_UI_Popup_BG_S_C.SetDescText
	// void SetDescText(FText Text);                                                                                            // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Popup/WBP_UI_Popup_BG_S.WBP_UI_Popup_BG_S_C.SetTitleText
	// void SetTitleText(FText Text);                                                                                           // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Popup/WBP_UI_Popup_BG_S.WBP_UI_Popup_BG_S_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/Popup/WBP_UI_Popup_BG_S.WBP_UI_Popup_BG_S_C.Construct
	// void Construct();                                                                                                        // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/Popup/WBP_UI_Popup_BG_S.WBP_UI_Popup_BG_S_C.OnClose
	// void OnClose();                                                                                                          // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Popup/WBP_UI_Popup_BG_S.WBP_UI_Popup_BG_S_C.OnCancel
	// void OnCancel();                                                                                                         // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Popup/WBP_UI_Popup_BG_S.WBP_UI_Popup_BG_S_C.OnOK
	// void OnOK();                                                                                                             // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Popup/WBP_UI_Popup_BG_S.WBP_UI_Popup_BG_S_C.ExecuteUbergraph_WBP_UI_Popup_BG_S
	// void ExecuteUbergraph_WBP_UI_Popup_BG_S(int32_t EntryPoint);                                                             // [0x198a600] Final                
	// Function /Game/UI/Widgets/Popup/WBP_UI_Popup_BG_S.WBP_UI_Popup_BG_S_C.OnOKEvent__DelegateSignature
	// void OnOKEvent__DelegateSignature();                                                                                     // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Popup/WBP_UI_Popup_BG_S.WBP_UI_Popup_BG_S_C.OnCancelEvent__DelegateSignature
	// void OnCancelEvent__DelegateSignature();                                                                                 // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Popup/WBP_UI_Popup_BG_S.WBP_UI_Popup_BG_S_C.OnCloseEvent__DelegateSignature
	// void OnCloseEvent__DelegateSignature();                                                                                  // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Widgets/SysUI/WBP_UI_QuitGame_View.WBP_UI_QuitGame_View_C
/// Size: 0x0070 (0x0002C0 - 0x000330)
class UWBP_UI_QuitGame_View_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(class UKV_Button*)                         BTN_Close                                                   OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Cancel                                               OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Confirm                                              OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class USpacer*)                            Button_Spacer                                               OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class USizeBox*)                           Cancel_Layout                                               OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class USizeBox*)                           Confirm_Layout                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class USizeBox*)                           SizeBox_Exit                                                OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UTextBlock*)                         TitleText                                                   OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    WidgetSwitcher_Des                                          OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(FString)                                   Des_Ios                                                     OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FString)                                   Des_Other                                                   OFFSET(getStruct<T>, {0x320, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/SysUI/WBP_UI_QuitGame_View.WBP_UI_QuitGame_View_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_QuitGame_View.WBP_UI_QuitGame_View_C.UpdateDes
	// void UpdateDes();                                                                                                        // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_QuitGame_View.WBP_UI_QuitGame_View_C.Construct
	// void Construct();                                                                                                        // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_QuitGame_View.WBP_UI_QuitGame_View_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                       // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/WBP_UI_QuitGame_View.WBP_UI_QuitGame_View_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();                           // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/WBP_UI_QuitGame_View.WBP_UI_QuitGame_View_C.BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();                      // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/WBP_UI_QuitGame_View.WBP_UI_QuitGame_View_C.ExecuteUbergraph_WBP_UI_QuitGame_View
	// void ExecuteUbergraph_WBP_UI_QuitGame_View(int32_t EntryPoint);                                                          // [0x198a600] Final                
};

/// Class /Game/UI/Widgets/SysUI/WBP_UI_Children_Notice.WBP_UI_Children_Notice_C
/// Size: 0x0058 (0x0002C0 - 0x000318)
class UWBP_UI_Children_Notice_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Close                                                OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Title_Sub                                              OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UTextBlock*)                         TextContent                                                 OFFSET(get<T>, {0x2E0, 8, 0, 0})
	SMember(FText)                                     TextTile                                                    OFFSET(getStruct<T>, {0x2E8, 24, 0, 0})
	SMember(FText)                                     ChildreNoticeText                                           OFFSET(getStruct<T>, {0x300, 24, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/SysUI/WBP_UI_Children_Notice.WBP_UI_Children_Notice_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_Children_Notice.WBP_UI_Children_Notice_C.Construct
	// void Construct();                                                                                                        // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_UI_Children_Notice.WBP_UI_Children_Notice_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                        // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/WBP_UI_Children_Notice.WBP_UI_Children_Notice_C.ExecuteUbergraph_WBP_UI_Children_Notice
	// void ExecuteUbergraph_WBP_UI_Children_Notice(int32_t EntryPoint);                                                        // [0x198a600] Final                
};

/// Class /Game/UI/Widgets/Share/WBP_UI_Share_Confirm_Box.WBP_UI_Share_Confirm_Box_C
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UWBP_UI_Share_Confirm_Box_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UWidgetAnimation*)                   Anim_Entry                                                  OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UWBP_UI_Popup_BG_S_C*)               WBP_UI_Popup_BG_S                                           OFFSET(get<T>, {0x2C8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Confirm_Box.WBP_UI_Share_Confirm_Box_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Confirm_Box.WBP_UI_Share_Confirm_Box_C.PlayAnimEntry
	// void PlayAnimEntry();                                                                                                    // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Widgets/Setting/WBP_UI_Setting_Main.WBP_UI_Setting_Main_C
/// Size: 0x00F8 (0x0002C0 - 0x0003B8)
class UWBP_UI_Setting_Main_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_Entry                                                  OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_Show                                                   OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UTextBlock*)                         Base_Version                                                OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Cancel                                               OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Close                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_OK                                                   OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Return                                               OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UTextBlock*)                         Channel_Des                                                 OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UTextBlock*)                         Channel_Value                                               OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UNamedSlot*)                         NamedSlot_Button                                            OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UNamedSlot*)                         NamedSlot_Content                                           OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Cancel                                                 OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Content                                                OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Message                                                OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_OK                                                     OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Title_Sub                                              OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UTextBlock*)                         Version_Value                                               OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UOverlay*)                           WarningOverlay                                              OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UOverlay*)                           WarnOverlay                                                 OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UWBP_UI_Setting_Account_C*)          WBP_UI_Setting_Account                                      OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UWBP_UI_Setting_Graphics_C*)         WBP_UI_Setting_Graphics                                     OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UWBP_UI_Setting_Language_C*)         WBP_UI_Setting_Language                                     OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UWBP_UI_Setting_Operation_C*)        WBP_UI_Setting_Operation                                    OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(class UWBP_UI_Setting_Other_C*)            WBP_UI_Setting_Other                                        OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(class UWBP_UI_Setting_Push_C*)             WBP_UI_Setting_Push                                         OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class UWBP_UI_Setting_Sound_C*)            WBP_UI_Setting_Sound                                        OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class UWBP_UI_Share_Tab_Bar_2_C*)          WBP_UI_Share_Tab_Bar                                        OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class UWBP_UI_Share_White_BG_C*)           WBP_UI_Share_White_BG                                       OFFSET(get<T>, {0x3B0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Main.WBP_UI_Setting_Main_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Main.WBP_UI_Setting_Main_C.Construct
	// void Construct();                                                                                                        // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Main.WBP_UI_Setting_Main_C.BndEvt__Button_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_OK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                           // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Main.WBP_UI_Setting_Main_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();                       // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Main.WBP_UI_Setting_Main_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Close_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();                        // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/Setting/WBP_UI_Setting_Main.WBP_UI_Setting_Main_C.ExecuteUbergraph_WBP_UI_Setting_Main
	// void ExecuteUbergraph_WBP_UI_Setting_Main(int32_t EntryPoint);                                                           // [0x198a600] Final                
};

/// Class /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C
/// Size: 0x00C0 (0x0002A8 - 0x000368)
class UBP_ServerList_C : public UActionInputWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   ServerList_In                                               OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Close                                                OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Tab                                         OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UWBP_Login_ServerPanel_C*)           ServerPanel                                                 OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnViewClosed                                                OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	DMember(int32_t)                                   CurrentTab                                                  OFFSET(get<int32_t>, {0x2E0, 4, 0, 0})
	DMember(int32_t)                                   TAB_KEY_UNDEFINED                                           OFFSET(get<int32_t>, {0x2E4, 4, 0, 0})
	CMember(TArray<class UServerData*>)                RoleServers                                                 OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(TArray<class URegionData*>)                ServerRegions                                               OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(class URegionProxy*)                       Proxy                                                       OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(TMap<int32_t, class URegionData*>)         ServerRegionMap                                             OFFSET(get<T>, {0x310, 80, 0, 0})
	CMember(class UWBP_Login_ServerTab_C*)             RoleServerTab                                               OFFSET(get<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.Update Server Panel
	// void Update Server Panel();                                                                                              // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.UpdateServerTabList
	// void UpdateServerTabList();                                                                                              // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.SelectTab
	// void SelectTab(int32_t ID);                                                                                              // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.UpdateServerList
	// void UpdateServerList(TArray<UServerData*>& InRoleServers, TArray<URegionData*>& InServerRegions);                       // [0x198a600] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.OnServerSelect
	// void OnServerSelect(class UObject* Item);                                                                                // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                        // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.BindServerListUpdate
	// void BindServerListUpdate();                                                                                             // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.BindSelectUpdate
	// void BindSelectUpdate();                                                                                                 // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.UnbindServerListUpdate
	// void UnbindServerListUpdate();                                                                                           // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.UnbindSelectionUpdate
	// void UnbindSelectionUpdate();                                                                                            // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.BindOnClickTab
	// void BindOnClickTab(class UWBP_Login_ServerTab_C* Widget);                                                               // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.Custom_OnClickTab
	// void Custom_OnClickTab(class UWBP_Login_ServerTab_C* TabObject);                                                         // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.OnServerListUpdate
	// void OnServerListUpdate();                                                                                               // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.OnSelectUpdate
	// void OnSelectUpdate();                                                                                                   // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.CloseServerView
	// void CloseServerView();                                                                                                  // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.OpenServerView
	// void OpenServerView(class URegionProxy* InProxy);                                                                        // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.BndEvt__ServerPanel_K2Node_ComponentBoundEvent_1_OnItemSelect__DelegateSignature
	// void BndEvt__ServerPanel_K2Node_ComponentBoundEvent_1_OnItemSelect__DelegateSignature(class UObject* Item);              // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.BindServerStateUpdate
	// void BindServerStateUpdate();                                                                                            // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.UnbindServerStateUpdate
	// void UnbindServerStateUpdate();                                                                                          // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.OnServerStateUpdate
	// void OnServerStateUpdate();                                                                                              // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.ExecuteUbergraph_BP_ServerList
	// void ExecuteUbergraph_BP_ServerList(int32_t EntryPoint);                                                                 // [0x198a600] Final|HasDefaults    
	// Function /Game/UI/Widgets/SysUI/BP_ServerList.BP_ServerList_C.OnViewClosed__DelegateSignature
	// void OnViewClosed__DelegateSignature();                                                                                  // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Widgets/SysUI/BP_Billboard_Maintenance.BP_Billboard_Maintenance_C
/// Size: 0x00A0 (0x0002C0 - 0x000360)
class UBP_Billboard_Maintenance_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(class UImage*)                             bg                                                          OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UImage*)                             Billboard_Icon                                              OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Cancel                                               OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Close                                                OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_OK                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UScrollBox*)                         Scroll_Box_Content                                          OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Cancel                                                 OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class URichTextBlock*)                     Text_Content                                                OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Content1                                               OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_OK                                                     OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x318, 8, 0, 0})
	SMember(FString)                                   BillboardContent                                            OFFSET(getStruct<T>, {0x320, 16, 0, 0})
	SMember(FString)                                   MaintainTitle                                               OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	SMember(FString)                                   MaintainLinkText                                            OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	SMember(FString)                                   MaintainLinkAddr                                            OFFSET(getStruct<T>, {0x350, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/SysUI/BP_Billboard_Maintenance.BP_Billboard_Maintenance_C.SetBillboardContent
	// void SetBillboardContent(FString BillboardContent, FString MaintenanceTitle, FString MaintainLinkText, FString MaintainLinkAddr); // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_Billboard_Maintenance.BP_Billboard_Maintenance_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_Billboard_Maintenance.BP_Billboard_Maintenance_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();                        // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_Billboard_Maintenance.BP_Billboard_Maintenance_C.BndEvt__Button_OK_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_OK_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();                         // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_Billboard_Maintenance.BP_Billboard_Maintenance_C.BndEvt__Button_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();                     // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_Billboard_Maintenance.BP_Billboard_Maintenance_C.ExecuteUbergraph_BP_Billboard_Maintenance
	// void ExecuteUbergraph_BP_Billboard_Maintenance(int32_t EntryPoint);                                                      // [0x198a600] Final                
};

/// Class /Game/UI/Widgets/Share/WBP_UI_Share_Badge.WBP_UI_Share_Badge_C
/// Size: 0x0058 (0x0002C0 - 0x000318)
class UWBP_UI_Share_Badge_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(class UTextBlock*)                         extraText3                                                  OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      extraText4                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UImage*)                             Image_NumBadgeBg                                            OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_Flag                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Debug                                                  OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    WidgetSwitcher_Badge                                        OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    WidgetSwitcher_New                                          OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(int32_t)                                   DefaultID                                                   OFFSET(get<int32_t>, {0x308, 4, 0, 0})
	DMember(bool)                                      bIsAutoUpdate                                               OFFSET(get<bool>, {0x30C, 1, 0, 0})
	CMember(class UTexture2D*)                         Img_NumBg                                                   OFFSET(get<T>, {0x310, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Badge.WBP_UI_Share_Badge_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Badge.WBP_UI_Share_Badge_C.UpdateCulture
	// void UpdateCulture();                                                                                                    // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Badge.WBP_UI_Share_Badge_C.SetBadgeData
	// void SetBadgeData(int32_t BadgeId, bool IsAutoUpdate);                                                                   // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Badge.WBP_UI_Share_Badge_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Badge.WBP_UI_Share_Badge_C.Construct
	// void Construct();                                                                                                        // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/Share/WBP_UI_Share_Badge.WBP_UI_Share_Badge_C.ExecuteUbergraph_WBP_UI_Share_Badge
	// void ExecuteUbergraph_WBP_UI_Share_Badge(int32_t EntryPoint);                                                            // [0x198a600] Final                
};

/// Class /Game/UI/Widgets/Announcement/WBP_UI_Announcement_Btn.WBP_UI_Announcement_Btn_C
/// Size: 0x0048 (0x0002C0 - 0x000308)
class UWBP_UI_Announcement_Btn_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(class UKV_Button*)                         Btn                                                         OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UImage*)                             Btn_Bg                                                      OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UImage*)                             Btn_Bg1                                                     OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UTextBlock*)                         Btn_Name                                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UTextBlock*)                         Btn_Name1                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UWBP_UI_Share_Badge_C*)              WBP_UI_Share_Badge                                          OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    WidgetSwitcher_Ann                                          OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Announcement/WBP_UI_Announcement_Btn.WBP_UI_Announcement_Btn_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/UI/Widgets/Announcement/WBP_UI_Announcement_Btn.WBP_UI_Announcement_Btn_C.BP_OnEntryReleased
	// void BP_OnEntryReleased();                                                                                               // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Widgets/Announcement/WBP_UI_Announcement_Btn.WBP_UI_Announcement_Btn_C.BP_OnItemExpansionChanged
	// void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Widgets/Announcement/WBP_UI_Announcement_Btn.WBP_UI_Announcement_Btn_C.BP_OnItemSelectionChanged
	// void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Widgets/Announcement/WBP_UI_Announcement_Btn.WBP_UI_Announcement_Btn_C.OnListItemObjectSet
	// void OnListItemObjectSet(class UObject* ListItemObject);                                                                 // [0x198a600] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Widgets/Announcement/WBP_UI_Announcement_Btn.WBP_UI_Announcement_Btn_C.ExecuteUbergraph_WBP_UI_Announcement_Btn
	// void ExecuteUbergraph_WBP_UI_Announcement_Btn(int32_t EntryPoint);                                                       // [0x198a600] Final                
};

/// Class /Game/UI/Structs/Share/BP_HyperLinkRichTextBlockDecorator.BP_HyperLinkRichTextBlockDecorator_C
/// Size: 0x0028 (0x000750 - 0x000778)
class UBP_HyperLinkRichTextBlockDecorator_C : public UHyperLinkRichTextBlockDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1912;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x750, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnClickFuncId                                               OFFSET(getStruct<T>, {0x758, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnClickPlayerId                                             OFFSET(getStruct<T>, {0x768, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Structs/Share/BP_HyperLinkRichTextBlockDecorator.BP_HyperLinkRichTextBlockDecorator_C.ClickFun
	// void ClickFun(TMap<FString, FString>& MetaData);                                                                         // [0x198a600] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Structs/Share/BP_HyperLinkRichTextBlockDecorator.BP_HyperLinkRichTextBlockDecorator_C.ExecuteUbergraph_BP_HyperLinkRichTextBlockDecorator
	// void ExecuteUbergraph_BP_HyperLinkRichTextBlockDecorator(int32_t EntryPoint);                                            // [0x198a600] Final|HasDefaults    
	// Function /Game/UI/Structs/Share/BP_HyperLinkRichTextBlockDecorator.BP_HyperLinkRichTextBlockDecorator_C.OnClickPlayerId__DelegateSignature
	// void OnClickPlayerId__DelegateSignature(FString PlayerId);                                                               // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Structs/Share/BP_HyperLinkRichTextBlockDecorator.BP_HyperLinkRichTextBlockDecorator_C.OnClickFuncId__DelegateSignature
	// void OnClickFuncId__DelegateSignature(int32_t FuncID);                                                                   // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Widgets/Announcement/WBP_UI_Announcement.WBP_UI_Announcement_C
/// Size: 0x01B0 (0x0002C0 - 0x000470)
class UWBP_UI_Announcement_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(class UKV_Button*)                         Activity_Btn                                                OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UImage*)                             Activity_Btn_Bg                                             OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      ActivityBtnText                                             OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UImage*)                             Announcement_Icon                                           OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UImage*)                             bg                                                          OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Close                                                OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UKV_Button*)                         Game_Btn                                                    OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UImage*)                             Game_Btn_Bg                                                 OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UImage*)                             Game_Btn_Bg1                                                OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UImage*)                             Game_Btn_Bg2                                                OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      GameBtnText                                                 OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      GameBtnText1                                                OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      GameBtnText2                                                OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UImage*)                             Image_Null                                                  OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UImage*)                             line                                                        OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UListView*)                          ListView_Tab_List                                           OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UScrollBox*)                         Scroll_Box_Content                                          OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UOverlay*)                           Tab_list_Null                                               OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UImage*)                             Tab_Null                                                    OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UImage*)                             Tab_Null1                                                   OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UImage*)                             Tab_Null2                                                   OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UImage*)                             Tab_Null3                                                   OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UImage*)                             Tab_Null4                                                   OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class URichTextBlock*)                     Text_Content                                                OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(class UTextBlock*)                         Title_Text                                                  OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    WidgetSwitcher_Activity                                     OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    WidgetSwitcher_Content                                      OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    WidgetSwitcher_Game                                         OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    WidgetSwitcher_Tab_List                                     OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(TArray<FString>)                           AnnouncementDatas                                           OFFSET(get<T>, {0x3B8, 16, 0, 0})
	CMember(class UTexture2DDynamic*)                  Texture                                                     OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(TMap<int32_t, FString>)                    AnnIdUrlMap                                                 OFFSET(get<T>, {0x3D0, 80, 0, 0})
	CMember(TMap<int32_t, class UTexture2DDynamic*>)   AnnIdTextureMap                                             OFFSET(get<T>, {0x420, 80, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/Announcement/WBP_UI_Announcement.WBP_UI_Announcement_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x198a600] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/UI/Widgets/Announcement/WBP_UI_Announcement.WBP_UI_Announcement_C.LoadURLImage
	// void LoadURLImage(FString ImageURL, int32_t AnnId);                                                                      // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Announcement/WBP_UI_Announcement.WBP_UI_Announcement_C.SetData
	// void SetData(TArray<FString>& AnnDatas);                                                                                 // [0x198a600] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Announcement/WBP_UI_Announcement.WBP_UI_Announcement_C.OnFail_84C3F9EF415CAC00997207878A99F8B7
	// void OnFail_84C3F9EF415CAC00997207878A99F8B7(class UTexture2DDynamic* Texture);                                          // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Announcement/WBP_UI_Announcement.WBP_UI_Announcement_C.OnSuccess_84C3F9EF415CAC00997207878A99F8B7
	// void OnSuccess_84C3F9EF415CAC00997207878A99F8B7(class UTexture2DDynamic* Texture);                                       // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Announcement/WBP_UI_Announcement.WBP_UI_Announcement_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                        // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/Announcement/WBP_UI_Announcement.WBP_UI_Announcement_C.OnDownLoadImage
	// void OnDownLoadImage(FString ImageURL, int32_t AnnId);                                                                   // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/Announcement/WBP_UI_Announcement.WBP_UI_Announcement_C.ExecuteUbergraph_WBP_UI_Announcement
	// void ExecuteUbergraph_WBP_UI_Announcement(int32_t EntryPoint);                                                           // [0x198a600] Final                
};

/// Class /Game/UI/Widgets/SysUI/WBP_Login_SharedBG.WBP_Login_SharedBG_C
/// Size: 0x00F8 (0x0002A8 - 0x0003A0)
class UWBP_Login_SharedBG_C : public UActionInputWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   BG_Enter                                                    OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UImage*)                             Image_Dark                                                  OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class USpineWidget*)                       Spine_BG                                                    OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class USpineWidget*)                       Spine_Logo                                                  OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(float)                                     BG_EnterOffset                                              OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(int32_t)                                   AnimState                                                   OFFSET(get<int32_t>, {0x2D4, 4, 0, 0})
	DMember(int32_t)                                   STATE_IDLE                                                  OFFSET(get<int32_t>, {0x2D8, 4, 0, 0})
	DMember(int32_t)                                   STATE_ENTER                                                 OFFSET(get<int32_t>, {0x2DC, 4, 0, 0})
	DMember(int32_t)                                   STATE_LOOP                                                  OFFSET(get<int32_t>, {0x2E0, 4, 0, 0})
	DMember(float)                                     StateTime                                                   OFFSET(get<float>, {0x2E4, 4, 0, 0})
	SMember(FString)                                   Logo_EnterAnim                                              OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	SMember(FString)                                   Logo_LoopAnim                                               OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	SMember(FString)                                   BG_EnterAnim                                                OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	SMember(FString)                                   BG_LoopAnim                                                 OFFSET(getStruct<T>, {0x318, 16, 0, 0})
	DMember(float)                                     StateTimeLast                                               OFFSET(get<float>, {0x328, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSplashFinished                                            OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr<USpineDataAsset*>>) LocalizedLogoSpine                                    OFFSET(get<T>, {0x340, 80, 0, 0})
	SMember(FString)                                   LocalizeString                                              OFFSET(getStruct<T>, {0x390, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/SysUI/WBP_Login_SharedBG.WBP_Login_SharedBG_C.UpdateLocalizeLogo
	// void UpdateLocalizeLogo();                                                                                               // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_SharedBG.WBP_Login_SharedBG_C.InitLocalization
	// void InitLocalization();                                                                                                 // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_SharedBG.WBP_Login_SharedBG_C.NormalEnter
	// void NormalEnter();                                                                                                      // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_SharedBG.WBP_Login_SharedBG_C.SplashEnter
	// void SplashEnter();                                                                                                      // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_SharedBG.WBP_Login_SharedBG_C.PlaySpineAnimation
	// void PlaySpineAnimation(class USpineWidget* Widget, FString AnimName, bool bReset, bool bLooped);                        // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_SharedBG.WBP_Login_SharedBG_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_SharedBG.WBP_Login_SharedBG_C.OnInitialized
	// void OnInitialized();                                                                                                    // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_SharedBG.WBP_Login_SharedBG_C.OnBGEnger
	// void OnBGEnger();                                                                                                        // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/WBP_Login_SharedBG.WBP_Login_SharedBG_C.ExecuteUbergraph_WBP_Login_SharedBG
	// void ExecuteUbergraph_WBP_Login_SharedBG(int32_t EntryPoint);                                                            // [0x198a600] Final|HasDefaults    
	// Function /Game/UI/Widgets/SysUI/WBP_Login_SharedBG.WBP_Login_SharedBG_C.OnSplashFinished__DelegateSignature
	// void OnSplashFinished__DelegateSignature();                                                                              // [0x198a600] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Widgets/SysUI/BP_SysDialog.BP_SysDialog_C
/// Size: 0x007C (0x0002C0 - 0x00033C)
class UBP_SysDialog_C : public UStageWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 828;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(class UKV_Button*)                         BTN_Close                                                   OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Cancel                                               OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Confirm                                              OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class USpacer*)                            Button_Spacer                                               OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class USizeBox*)                           Cancel_Layout                                               OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class USizeBox*)                           Confirm_Layout                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UKV_TextBlock*)                      ContentText                                                 OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Cancel                                                 OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Confirm                                                OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UTextBlock*)                         TitleText                                                   OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class USysBus*)                            Bus                                                         OFFSET(get<T>, {0x318, 8, 0, 0})
	DMember(int32_t)                                   DialogCls                                                   OFFSET(get<int32_t>, {0x320, 4, 0, 0})
	CMember(class AGameUEGameModeBase*)                Mode                                                        OFFSET(get<T>, {0x328, 8, 0, 0})
	DMember(bool)                                      CanClose                                                    OFFSET(get<bool>, {0x330, 1, 0, 0})
	DMember(int32_t)                                   Code                                                        OFFSET(get<int32_t>, {0x334, 4, 0, 0})
	DMember(int32_t)                                   DialogKey                                                   OFFSET(get<int32_t>, {0x338, 4, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/SysUI/BP_SysDialog.BP_SysDialog_C.GetDialogKey
	// void GetDialogKey(int32_t& Key);                                                                                         // [0x198a600] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_SysDialog.BP_SysDialog_C.DialogControl
	// void DialogControl(int32_t Control);                                                                                     // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_SysDialog.BP_SysDialog_C.Setup
	// void Setup(class USysBus* InBus, class AGameUEGameModeBase* InMode, int32_t DialogKey);                                  // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_SysDialog.BP_SysDialog_C.InitView
	// void InitView(EDialogStyle Style, FText Content, FText Title, FText YesText, FText NoText);                              // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_SysDialog.BP_SysDialog_C.Construct
	// void Construct();                                                                                                        // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_SysDialog.BP_SysDialog_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                       // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_SysDialog.BP_SysDialog_C.BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();                      // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_SysDialog.BP_SysDialog_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();                           // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_SysDialog.BP_SysDialog_C.Destruct
	// void Destruct();                                                                                                         // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_SysDialog.BP_SysDialog_C.ExecuteUbergraph_BP_SysDialog
	// void ExecuteUbergraph_BP_SysDialog(int32_t EntryPoint);                                                                  // [0x198a600] Final                
};

/// Class /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C
/// Size: 0x0338 (0x0002A8 - 0x0005E0)
class UBP_LoginView_C : public UActionInputWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anime_End                                                   OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anime_Begin                                                 OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anime_Loop                                                  OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UEditableText*)                      AccountInput                                                OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UImage*)                             Apple_Icon                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class USizeBox*)                           AppleLayout                                                 OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UImage*)                             Btn_Bg                                                      OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UImage*)                             Btn_Bg1                                                     OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UImage*)                             Btn_Bg2                                                     OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UImage*)                             Btn_Bg3                                                     OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UImage*)                             Btn_Bg4                                                     OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UKV_Button*)                         BtnApple                                                    OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UKV_Button*)                         BtnEmail                                                    OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UKV_Button*)                         BtnGoogle                                                   OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UKV_Button*)                         BtnGuest                                                    OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UKV_Button*)                         BtnPhone                                                    OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UKV_Button*)                         BtnSuper                                                    OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class UKV_Button*)                         BtnTaptap                                                   OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class UButton*)                            Button                                                      OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UButton*)                            Button1                                                     OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Account                                              OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Notice                                               OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_QuitGame                                             OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Setting                                              OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Super_Cancel                                         OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Super_Confirm                                        OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Support                                              OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UCheckBox*)                          CheckBox_Jump                                               OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(class UImage*)                             Children_Level                                              OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(class UImage*)                             Children_Level1                                             OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class UKV_Button*)                         Children_Level_Btn                                          OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class UKV_Button*)                         Children_Level_Btn_TW                                       OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class USizeBox*)                           EmailLayout                                                 OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UImage*)                             Emial_Icon                                                  OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(class UKV_Button*)                         EnterBtn                                                    OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class UVerticalBox*)                       Function_Block                                              OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UImage*)                             Google_Icon                                                 OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class USizeBox*)                           GoogleLayout                                                OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(class UImage*)                             Guest_Icon                                                  OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(class USizeBox*)                           GuestLayout                                                 OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(class UHorizontalBox*)                     HintLayout                                                  OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(class UImage*)                             Image_ServerStatus                                          OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(class UImage*)                             Image_Switch                                                OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(class UVerticalBox*)                       Layout_Info_CN                                              OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UVerticalBox*)                       Layout_Info_Global                                          OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UImage*)                             Phone_Icon                                                  OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class USizeBox*)                           PhoneLayout                                                 OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UHorizontalBox*)                     Select_Block                                                OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UVerticalBox*)                       Select_Block_All                                            OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UKV_Button*)                         ServerBtn                                                   OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UCanvasPanel*)                       SignIn_Block                                                OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UButton*)                            Super_Block                                                 OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class USizeBox*)                           SuperLayout                                                 OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class USizeBox*)                           TaptapLayout                                                OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_ClientVersion                                          OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_ServerCategory                                         OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_ServerName                                             OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_ServerStatus                                           OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UCanvasPanel*)                       ViewCanv                                                    OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UVirtualKeyboardZone*)               VirtualKeyboardZone_Super                                   OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(class UBP_ServerList_C*)                   ServerListView                                              OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class USysBus*)                            Bus                                                         OFFSET(get<T>, {0x498, 8, 0, 0})
	SMember(FMargin)                                   ZERO_MARGIN                                                 OFFSET(getStruct<T>, {0x4A0, 16, 0, 0})
	SMember(FAnchors)                                  STRECH_ANCHOR                                               OFFSET(getStruct<T>, {0x4B0, 16, 0, 0})
	CMember(class UServerData*)                        Server                                                      OFFSET(get<T>, {0x4C0, 8, 0, 0})
	DMember(int32_t)                                   PROCESS_APPEAR                                              OFFSET(get<int32_t>, {0x4C8, 4, 0, 0})
	DMember(int32_t)                                   PROCESS_SELECT                                              OFFSET(get<int32_t>, {0x4CC, 4, 0, 0})
	DMember(int32_t)                                   PROCESS_DEV_LOGIN                                           OFFSET(get<int32_t>, {0x4D0, 4, 0, 0})
	DMember(int32_t)                                   PROCESS_LOGIN_READY                                         OFFSET(get<int32_t>, {0x4D4, 4, 0, 0})
	DMember(int32_t)                                   PROCESS_SERVERLIST                                          OFFSET(get<int32_t>, {0x4D8, 4, 0, 0})
	DMember(int32_t)                                   PROCESS_LOGIN                                               OFFSET(get<int32_t>, {0x4DC, 4, 0, 0})
	DMember(int32_t)                                   CurrentProcess                                              OFFSET(get<int32_t>, {0x4E0, 4, 0, 0})
	CMember(TArray<int32_t>)                           ProcessQueue                                                OFFSET(get<T>, {0x4E8, 16, 0, 0})
	CMember(class ABP_WwiseSoundBg_C*)                 BgmPlayer                                                   OFFSET(get<T>, {0x4F8, 8, 0, 0})
	DMember(bool)                                      bAutoCompleteGuide                                          OFFSET(get<bool>, {0x500, 1, 0, 0})
	DMember(int32_t)                                   LoginType                                                   OFFSET(get<int32_t>, {0x504, 4, 0, 0})
	DMember(int32_t)                                   ButtonLayoutState                                           OFFSET(get<int32_t>, {0x508, 4, 0, 0})
	DMember(int32_t)                                   DevLoginIndex                                               OFFSET(get<int32_t>, {0x50C, 4, 0, 0})
	DMember(bool)                                      bSuperAccess                                                OFFSET(get<bool>, {0x510, 1, 0, 0})
	CMember(class URegionProxy*)                       ServerProxy                                                 OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(class UWBP_UI_Share_Confirm_Box_C*)        ShareConfirmChildrenNoticeView                              OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(class UObject*)                            Outer                                                       OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(TSet<int32_t>)                             PlatformAvaiables                                           OFFSET(get<T>, {0x530, 80, 0, 0})
	CMember(class UBP_Billboard_Maintenance_C*)        MaintainWidget                                              OFFSET(get<T>, {0x580, 8, 0, 0})
	DMember(float)                                     SuperPressTime                                              OFFSET(get<float>, {0x588, 4, 0, 0})
	CMember(TArray<FText>)                             ServerStateText                                             OFFSET(get<T>, {0x590, 16, 0, 0})
	CMember(TArray<class UTexture2D*>)                 ServerStateImage                                            OFFSET(get<T>, {0x5A0, 16, 0, 0})
	CMember(TArray<FSlateColor>)                       ServerStateColor                                            OFFSET(get<T>, {0x5B0, 16, 0, 0})
	CMember(TArray<int32_t>)                           SecretInput                                                 OFFSET(get<T>, {0x5C0, 16, 0, 0})
	CMember(TArray<int32_t>)                           Secret                                                      OFFSET(get<T>, {0x5D0, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.SequenceEvent__ENTRYPOINTBP_LoginView
	// void SequenceEvent__ENTRYPOINTBP_LoginView();                                                                            // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.SwitchRegionSetting
	// void SwitchRegionSetting();                                                                                              // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.SwitchByOversea
	// void SwitchByOversea();                                                                                                  // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.TryOpenNotice
	// void TryOpenNotice();                                                                                                    // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.OpenQuitGame
	// void OpenQuitGame();                                                                                                     // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.UpdateServerStatus
	// void UpdateServerStatus(int32_t status);                                                                                 // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.ActivePlatformOption
	// void ActivePlatformOption(class UWidget* Widget, EPlatformInterface platform, bool bActive);                             // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.OpenSetting
	// void OpenSetting();                                                                                                      // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.OpenChildrenNotice
	// void OpenChildrenNotice();                                                                                               // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.SetUserNameByCache
	// void SetUserNameByCache();                                                                                               // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.SetGameVersion
	// void SetGameVersion();                                                                                                   // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.EnqueueProcess
	// void EnqueueProcess(int32_t ProcessId, bool Idle);                                                                       // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.CompleteProcess
	// void CompleteProcess(int32_t ProgressId);                                                                                // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BeginProcess
	// void BeginProcess(int32_t ProcessId);                                                                                    // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.UpdateServerName
	// void UpdateServerName();                                                                                                 // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.Open Sub Widget
	// void Open Sub Widget(class UClass* WidgetCls, class UUserWidget* Instance, int32_t ZDepth, class UUserWidget*& Result);  // [0x198a600] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.EnterVisible
	// void EnterVisible(ESlateVisibility InVis);                                                                               // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.PushControl
	// void PushControl(int32_t ID, class UClass* Class, class UObject*& Result);                                               // [0x198a600] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.EnterDevLogin
	// void EnterDevLogin();                                                                                                    // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.EnterServerlist
	// void EnterServerlist();                                                                                                  // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.OnChooseServer_Internal
	// void OnChooseServer_Internal();                                                                                          // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.PlayLoginFlash
	// void PlayLoginFlash();                                                                                                   // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.OnFlash_Internal
	// void OnFlash_Internal();                                                                                                 // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.EnterSelect
	// void EnterSelect();                                                                                                      // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.OnBeginAnimEnd
	// void OnBeginAnimEnd();                                                                                                   // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.EnterLoginPhase
	// void EnterLoginPhase();                                                                                                  // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__CheckBox_Jump_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	// void BndEvt__CheckBox_Jump_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__EnterBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__EnterBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                            // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__ServerBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__ServerBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();                           // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__Button_Account_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Account_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();                      // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__Button_Logout_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Logout_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();                       // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__Button_Notice_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Notice_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();                       // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__Button_Contract_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Contract_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();                    // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__BtnTaptap_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__BtnTaptap_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                           // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__BtnSuper_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__BtnSuper_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();                            // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();                       // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();                      // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__Children_Level_Btn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Children_Level_Btn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();                 // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature
	// void BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature();                           // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonReleasedEvent__DelegateSignature
	// void BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonReleasedEvent__DelegateSignature();                          // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();                           // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__BtnGoogle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__BtnGoogle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                           // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__BtnApple_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__BtnApple_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();                            // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__Button_Customer_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Customer_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();                    // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__BtnPhone_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__BtnPhone_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();                            // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.OpenSignIn
	// void OpenSignIn();                                                                                                       // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.OpenDevLogin
	// void OpenDevLogin();                                                                                                     // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.OpenSelect
	// void OpenSelect(TSet<int32_t> Platforms);                                                                                // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.UpdateMaintain
	// void UpdateMaintain(bool bBlock, FString Content, FString Title, FString LinkText, FString LinkAddr);                    // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__BtnEmail_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__BtnEmail_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                            // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.BndEvt__BtnGuest_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__BtnGuest_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();                            // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.SequenceEvent_AnimeBeginAudio
	// void SequenceEvent_AnimeBeginAudio();                                                                                    // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.Construct
	// void Construct();                                                                                                        // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.InitializeServerProxy
	// void InitializeServerProxy(class UGameUEInstance* GameInst);                                                             // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.UpdateCurrentServer
	// void UpdateCurrentServer();                                                                                              // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_LoginView.BP_LoginView_C.ExecuteUbergraph_BP_LoginView
	// void ExecuteUbergraph_BP_LoginView(int32_t EntryPoint);                                                                  // [0x198a600] Final|HasDefaults    
};

/// Class /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C
/// Size: 0x00A0 (0x0002A8 - 0x000348)
class UBP_HotPatchView_C : public UActionInputWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Anim_Loading                                                OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UKV_Button*)                         Button_Cancel                                               OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UTextBlock*)                         ConnectText                                                 OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UWBP_UI_Popup_BG_S_C*)               ErrorMessagePanell                                          OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UProgressBar*)                       LoadingProgressBar                                          OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UWBP_UI_localizationOpt_C*)          LocalizationOptPanel                                        OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UOverlay*)                           ProgressFX                                                  OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UOverlay*)                           ProgressLayout                                              OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Cancel                                                 OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_ClientVersion                                          OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_Progress                                               OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UWBP_UI_Popup_BG_S_C*)               UserConfirmDownloadPanell                                   OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(TEnumAsByte<EHotPatchMsgCode>)             Code                                                        OFFSET(get<T>, {0x310, 1, 0, 0})
	SMember(FString)                                   Error_Message                                               OFFSET(getStruct<T>, {0x318, 16, 0, 0})
	CMember(TEnumAsByte<EHotPatchState>)               State                                                       OFFSET(get<T>, {0x328, 1, 0, 0})
	DMember(float)                                     Progress                                                    OFFSET(get<float>, {0x32C, 4, 0, 0})
	SMember(FText)                                     In_Text                                                     OFFSET(getStruct<T>, {0x330, 24, 0, 0})


	/// Functions
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.UpdateProgressBar
	// void UpdateProgressBar(float Value);                                                                                     // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.OnUserLocalizationOptSelecting
	// void OnUserLocalizationOptSelecting();                                                                                   // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.OnUserLocalizationOptOpen
	// void OnUserLocalizationOptOpen();                                                                                        // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.OnStartMateralWarmup
	// void OnStartMateralWarmup();                                                                                             // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.OnEndMateralWarmup
	// void OnEndMateralWarmup();                                                                                               // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.OnRestartApp
	// void OnRestartApp();                                                                                                     // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.CloseView
	// void CloseView();                                                                                                        // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.SetGameVersion
	// void SetGameVersion();                                                                                                   // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.OnNeetUserConfirmDownload
	// void OnNeetUserConfirmDownload();                                                                                        // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.On Mount
	// void On Mount();                                                                                                         // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.OnRequestVersion
	// void OnRequestVersion();                                                                                                 // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.On Material Warmup
	// void On Material Warmup();                                                                                               // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.UpdateProgress
	// void UpdateProgress();                                                                                                   // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.OnMessage
	// void OnMessage();                                                                                                        // [0x198a600] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.OnUpdate
	// void OnUpdate();                                                                                                         // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.InitView
	// void InitView();                                                                                                         // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.OnHotPatchMountPak
	// void OnHotPatchMountPak();                                                                                               // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.OnHotPatchDiffPak
	// void OnHotPatchDiffPak();                                                                                                // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.On Hot Patch Download
	// void On Hot Patch Download();                                                                                            // [0x198a600] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.ꁚ[I
	// void ꁚ[I(TEnumAsByte<EHotPatchState> State, TEnumAsByte<EHotPatchMsgCode> Code, FString ErrorMessage);                 // [0x198a600] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();                       // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.Construct
	// void Construct();                                                                                                        // [0x198a600] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.BndEvt__UserConfirmDownloadPanell_K2Node_ComponentBoundEvent_5_OnCloseEvent__DelegateSignature
	// void BndEvt__UserConfirmDownloadPanell_K2Node_ComponentBoundEvent_5_OnCloseEvent__DelegateSignature();                   // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.BndEvt__UserConfirmDownloadPanell_K2Node_ComponentBoundEvent_6_OnCancelEvent__DelegateSignature
	// void BndEvt__UserConfirmDownloadPanell_K2Node_ComponentBoundEvent_6_OnCancelEvent__DelegateSignature();                  // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.BndEvt__UserConfirmDownloadPanell_K2Node_ComponentBoundEvent_7_OnOKEvent__DelegateSignature
	// void BndEvt__UserConfirmDownloadPanell_K2Node_ComponentBoundEvent_7_OnOKEvent__DelegateSignature();                      // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.BndEvt__ErrorMessagePanell_K2Node_ComponentBoundEvent_8_OnCloseEvent__DelegateSignature
	// void BndEvt__ErrorMessagePanell_K2Node_ComponentBoundEvent_8_OnCloseEvent__DelegateSignature();                          // [0x198a600] BlueprintEvent       
	// Function /Game/UI/Widgets/SysUI/BP_HotPatchView.BP_HotPatchView_C.ExecuteUbergraph_BP_HotPatchView
	// void ExecuteUbergraph_BP_HotPatchView(int32_t EntryPoint);                                                               // [0x198a600] Final|HasDefaults    
};

/// Enum /Game/Blueprints/Scene/Common/Actors/E_Audio_BGMLayer.E_Audio_BGMLayer
/// Size: 0x04
enum class E_Audio_BGMLayer : uint8_t
{
	E_Audio_BGMLayer__NewEnumerator3                                                 = 0,
	E_Audio_BGMLayer__NewEnumerator2                                                 = 1,
	E_Audio_BGMLayer__NewEnumerator1                                                 = 2,
	E_Audio_BGMLayer__NewEnumerator0                                                 = 3
};

/// Enum /Game/Blueprints/Storyline/Enum/Enum_StorylineTriggerType.Enum_StorylineTriggerType
/// Size: 0x02
enum class Enum_StorylineTriggerType : uint8_t
{
	Enum_StorylineTriggerType__NewEnumerator0                                        = 0,
	Enum_StorylineTriggerType__NewEnumerator2                                        = 1
};

/// Enum /Game/Blueprints/Scene/Common/Data/Enum/Enum_StoryMoveMode.Enum_StoryMoveMode
/// Size: 0x02
enum class Enum_StoryMoveMode : uint8_t
{
	Enum_StoryMoveMode__NewEnumerator0                                               = 0,
	Enum_StoryMoveMode__NewEnumerator1                                               = 1
};

/// Enum /Game/Blueprints/Scene/Common/Data/Enum/Enum_StoryAnimState.Enum_StoryAnimState
/// Size: 0x02
enum class Enum_StoryAnimState : uint8_t
{
	Enum_StoryAnimState__NewEnumerator0                                              = 0,
	Enum_StoryAnimState__NewEnumerator1                                              = 1
};

/// Enum /Game/Blueprints/Scene/Common/Data/Enum/Enum_LipSyncViseme.Enum_LipSyncViseme
/// Size: 0x15
enum class Enum_LipSyncViseme : uint8_t
{
	Enum_LipSyncViseme__NewEnumerator0                                               = 0,
	Enum_LipSyncViseme__NewEnumerator1                                               = 1,
	Enum_LipSyncViseme__NewEnumerator2                                               = 2,
	Enum_LipSyncViseme__NewEnumerator3                                               = 3,
	Enum_LipSyncViseme__NewEnumerator4                                               = 4,
	Enum_LipSyncViseme__NewEnumerator5                                               = 5,
	Enum_LipSyncViseme__NewEnumerator6                                               = 6,
	Enum_LipSyncViseme__NewEnumerator7                                               = 7,
	Enum_LipSyncViseme__NewEnumerator8                                               = 8,
	Enum_LipSyncViseme__NewEnumerator9                                               = 9,
	Enum_LipSyncViseme__NewEnumerator10                                              = 10,
	Enum_LipSyncViseme__NewEnumerator11                                              = 11,
	Enum_LipSyncViseme__NewEnumerator12                                              = 12,
	Enum_LipSyncViseme__NewEnumerator13                                              = 13,
	Enum_LipSyncViseme__NewEnumerator14                                              = 14
};

/// Enum /Game/Blueprints/Scene/Common/AnimNotify/Enum_ScenePawnNotify.Enum_ScenePawnNotify
/// Size: 0x12
enum class Enum_ScenePawnNotify : uint8_t
{
	Enum_ScenePawnNotify__NewEnumerator4                                             = 0,
	Enum_ScenePawnNotify__NewEnumerator5                                             = 1,
	Enum_ScenePawnNotify__NewEnumerator6                                             = 2,
	Enum_ScenePawnNotify__NewEnumerator7                                             = 3,
	Enum_ScenePawnNotify__NewEnumerator8                                             = 4,
	Enum_ScenePawnNotify__NewEnumerator9                                             = 5,
	Enum_ScenePawnNotify__NewEnumerator10                                            = 6,
	Enum_ScenePawnNotify__NewEnumerator11                                            = 7,
	Enum_ScenePawnNotify__NewEnumerator12                                            = 8,
	Enum_ScenePawnNotify__NewEnumerator13                                            = 9,
	Enum_ScenePawnNotify__NewEnumerator14                                            = 10,
	Enum_ScenePawnNotify__NewEnumerator15                                            = 11
};

/// Enum /Game/Blueprints/Scene/Common/AnimNotify/Enum_NotifyWwiseSound.Enum_NotifyWwiseSound
/// Size: 0x03
enum class Enum_NotifyWwiseSound : uint8_t
{
	Enum_NotifyWwiseSound__NewEnumerator0                                            = 0,
	Enum_NotifyWwiseSound__NewEnumerator1                                            = 1,
	Enum_NotifyWwiseSound__NewEnumerator2                                            = 2
};

/// Enum /Game/Blueprints/Scene/Common/Actors/Characters/Player/GeneralPlayer/Data/Enum_PlayerAnim_Action.Enum_PlayerAnim_Action
/// Size: 0x09
enum class Enum_PlayerAnim_Action : uint8_t
{
	Enum_PlayerAnim_Action__NewEnumerator0                                           = 0,
	Enum_PlayerAnim_Action__NewEnumerator1                                           = 1,
	Enum_PlayerAnim_Action__NewEnumerator2                                           = 2,
	Enum_PlayerAnim_Action__NewEnumerator3                                           = 3,
	Enum_PlayerAnim_Action__NewEnumerator4                                           = 4,
	Enum_PlayerAnim_Action__NewEnumerator5                                           = 5,
	Enum_PlayerAnim_Action__NewEnumerator6                                           = 6,
	Enum_PlayerAnim_Action__NewEnumerator7                                           = 7,
	Enum_PlayerAnim_Action__NewEnumerator9                                           = 8
};


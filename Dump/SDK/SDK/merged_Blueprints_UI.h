
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "AkAudio.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "EthInput.h"
#include "GameHotPatcher.h"
#include "GameplayTags.h"
#include "GameUE.h"
#include "KV_Widgets.h"
#include "MediaAssets.h"
#include "Slate.h"
#include "SlateCore.h"
#include "SpinePlugin.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "XDMaterialLib.h"

#pragma pack(push, 0x1)

class ABP_GameMode_Login_C;
class ABP_Login_ContextManager_C;
class ABP_Login_WwiseSoundManager_C;
class ABP_LuaBridge_C;
class ABP_Regist_MainScript_C;
class ABP_SystemMessage_Actor_C;
class ABP_WwiseSoundBg_C;
class UBP_Billboard_Maintenance_C;
class UBP_EtheriaSoundConfigs_C;
class UBP_Game_EtheriaInstance_C;
class UBP_Game_StateMachine_C;
class UBP_Game_ValidateState_C;
class UBP_HotPatchView_C;
class UBP_HyperLinkRichTextBlockDecorator_C;
class UBP_Init_FinishState_C;
class UBP_Init_LuaModuleState_C;
class UBP_Init_LuaPackState_C;
class UBP_Init_ProtoState_C;
class UBP_Init_StateQueue_C;
class UBP_LayerManager_C;
class UBP_LibGraphicQualitySettings_C;
class UBP_LoginView_C;
class UBP_Login_DefaultLoginState_C;
class UBP_Login_LoginState_C;
class UBP_Login_PlatformState_C;
class UBP_Login_RecommendState_C;
class UBP_Login_RedirectState_C;
class UBP_Login_ServerListState_C;
class UBP_Login_StateQueue_C;
class UBP_LuaInstanceData_C;
class UBP_Main_InitServerState_C;
class UBP_Main_PatchState_C;
class UBP_Main_SplashMovieState_C;
class UBP_Main_SplashState_C;
class UBP_Main_StartupState_C;
class UBP_Main_StateMachine_C;
class UBP_Main_VersionState_C;
class UBP_RichTextBlockDecorator_Tips_C;
class UBP_SecretBook_C;
class UBP_ServerList_C;
class UBP_SysDialog_C;
class UBP_UIManager_C;
class UBP_UIScript_Default_C;
class UBP_ViewFramework_C;
class UWBP_Login_ServerItem_C;
class UWBP_Login_ServerPanel_C;
class UWBP_Login_ServerTab_C;
class UWBP_Login_SharedBG_C;
class UWBP_NetworkCongest_C;
class UWBP_Regist_TypeText_C;
class UWBP_UI_Announcement_Btn_C;
class UWBP_UI_Announcement_C;
class UWBP_UI_Children_Notice_C;
class UWBP_UI_LocalizationOptItem_C;
class UWBP_UI_Popup_BG_S_C;
class UWBP_UI_QuitGame_View_C;
class UWBP_UI_RegistWidget_C;
class UWBP_UI_Setting_Account_C;
class UWBP_UI_Setting_Button_C;
class UWBP_UI_Setting_CheckBox_Bar_C;
class UWBP_UI_Setting_CheckBox_C;
class UWBP_UI_Setting_Combo_Box_Button_C;
class UWBP_UI_Setting_Combo_Box_C;
class UWBP_UI_Setting_Graphics_C;
class UWBP_UI_Setting_Input_Key_C;
class UWBP_UI_Setting_Input_Preset_C;
class UWBP_UI_Setting_Item_C;
class UWBP_UI_Setting_Language_C;
class UWBP_UI_Setting_Main_C;
class UWBP_UI_Setting_Operation_C;
class UWBP_UI_Setting_Other_C;
class UWBP_UI_Setting_Push_C;
class UWBP_UI_Setting_Slider_C;
class UWBP_UI_Setting_Sound_C;
class UWBP_UI_Setting_Switch_C;
class UWBP_UI_Share_Badge_C;
class UWBP_UI_Share_Circle_C;
class UWBP_UI_Share_Confirm_Box_C;
class UWBP_UI_Share_Safe_Zone_C;
class UWBP_UI_Share_Tab_2_C;
class UWBP_UI_Share_Tab_Bar_2_C;
class UWBP_UI_Share_White_BG_C;
class UWBP_UI_localizationOpt_C;

/// Enum /Game/Blueprints/Scene/Common/Actors/E_Audio_BGMLayer.E_Audio_BGMLayer
/// Size: 0x01 (1 bytes)
enum class E_Audio_BGMLayer : uint8_t
{
	E_Audio_BGMLayer__NewEnumerator3                                                 = 0,
	E_Audio_BGMLayer__NewEnumerator2                                                 = 1,
	E_Audio_BGMLayer__NewEnumerator1                                                 = 2,
	E_Audio_BGMLayer__NewEnumerator0                                                 = 3
};

/// Enum /Game/Blueprints/Storyline/Enum/Enum_StorylineTriggerType.Enum_StorylineTriggerType
/// Size: 0x01 (1 bytes)
enum class Enum_StorylineTriggerType : uint8_t
{
	Enum_StorylineTriggerType__NewEnumerator0                                        = 0,
	Enum_StorylineTriggerType__NewEnumerator2                                        = 1
};

/// Enum /Game/Blueprints/Scene/Common/Data/Enum/Enum_StoryMoveMode.Enum_StoryMoveMode
/// Size: 0x01 (1 bytes)
enum class Enum_StoryMoveMode : uint8_t
{
	Enum_StoryMoveMode__NewEnumerator0                                               = 0,
	Enum_StoryMoveMode__NewEnumerator1                                               = 1
};

/// Enum /Game/Blueprints/Scene/Common/Data/Enum/Enum_StoryAnimState.Enum_StoryAnimState
/// Size: 0x01 (1 bytes)
enum class Enum_StoryAnimState : uint8_t
{
	Enum_StoryAnimState__NewEnumerator0                                              = 0,
	Enum_StoryAnimState__NewEnumerator1                                              = 1
};

/// Enum /Game/Blueprints/Scene/Common/Data/Enum/Enum_LipSyncViseme.Enum_LipSyncViseme
/// Size: 0x01 (1 bytes)
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
/// Size: 0x01 (1 bytes)
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
/// Size: 0x01 (1 bytes)
enum class Enum_NotifyWwiseSound : uint8_t
{
	Enum_NotifyWwiseSound__NewEnumerator0                                            = 0,
	Enum_NotifyWwiseSound__NewEnumerator1                                            = 1,
	Enum_NotifyWwiseSound__NewEnumerator2                                            = 2
};

/// Enum /Game/Blueprints/Scene/Common/Actors/Characters/Player/GeneralPlayer/Data/Enum_PlayerAnim_Action.Enum_PlayerAnim_Action
/// Size: 0x01 (1 bytes)
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

#pragma pack(pop)


static_assert(sizeof(UBP_EtheriaSoundConfigs_C) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UBP_Game_EtheriaInstance_C) == 0x0260); // 608 bytes (0x000260 - 0x000260)
static_assert(sizeof(UBP_Main_StateMachine_C) == 0x0128); // 296 bytes (0x000128 - 0x000128)
static_assert(sizeof(UBP_LayerManager_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UBP_UIManager_C) == 0x0110); // 272 bytes (0x000110 - 0x000110)
static_assert(sizeof(UBP_ViewFramework_C) == 0x0130); // 304 bytes (0x000130 - 0x000130)
static_assert(sizeof(UBP_LuaInstanceData_C) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(ABP_LuaBridge_C) == 0x0230); // 560 bytes (0x000228 - 0x000230)
static_assert(sizeof(ABP_Login_WwiseSoundManager_C) == 0x0428); // 1064 bytes (0x000428 - 0x000428)
static_assert(sizeof(ABP_WwiseSoundBg_C) == 0x0248); // 584 bytes (0x000220 - 0x000248)
static_assert(sizeof(ABP_SystemMessage_Actor_C) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(ABP_Regist_MainScript_C) == 0x02B8); // 696 bytes (0x000220 - 0x0002B8)
static_assert(sizeof(ABP_GameMode_Login_C) == 0x03C0); // 960 bytes (0x000310 - 0x0003C0)
static_assert(sizeof(ABP_Login_ContextManager_C) == 0x0288); // 648 bytes (0x000280 - 0x000288)
static_assert(sizeof(UBP_Main_SplashMovieState_C) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UBP_Game_ValidateState_C) == 0x00D8); // 216 bytes (0x000058 - 0x0000D8)
static_assert(sizeof(UBP_Main_StartupState_C) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UBP_Main_SplashState_C) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UBP_Main_InitServerState_C) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UBP_Main_VersionState_C) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UBP_Main_PatchState_C) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UBP_Game_StateMachine_C) == 0x0128); // 296 bytes (0x000128 - 0x000128)
static_assert(sizeof(UBP_Init_StateQueue_C) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UBP_Login_StateQueue_C) == 0x0150); // 336 bytes (0x000150 - 0x000150)
static_assert(sizeof(UBP_SecretBook_C) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UBP_Init_ProtoState_C) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UBP_Init_LuaPackState_C) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UBP_Init_LuaModuleState_C) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UBP_LibGraphicQualitySettings_C) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UBP_Init_FinishState_C) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UBP_Login_DefaultLoginState_C) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UBP_Login_PlatformState_C) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UBP_Login_LoginState_C) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UBP_Login_RecommendState_C) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UBP_Login_RedirectState_C) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UBP_Login_ServerListState_C) == 0x00C8); // 200 bytes (0x0000C8 - 0x0000C8)
static_assert(sizeof(FBPS_AudioLocalizationDefine) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UWBP_NetworkCongest_C) == 0x02B8); // 696 bytes (0x0002A8 - 0x0002B8)
static_assert(sizeof(UWBP_UI_Share_Circle_C) == 0x02A8); // 680 bytes (0x000280 - 0x0002A8)
static_assert(sizeof(UBP_UIScript_Default_C) == 0x0240); // 576 bytes (0x000240 - 0x000240)
static_assert(sizeof(UWBP_Regist_TypeText_C) == 0x0338); // 824 bytes (0x000280 - 0x000338)
static_assert(sizeof(UWBP_UI_RegistWidget_C) == 0x06D8); // 1752 bytes (0x0002A8 - 0x0006D8)
static_assert(sizeof(UWBP_UI_LocalizationOptItem_C) == 0x02E1); // 737 bytes (0x000280 - 0x0002E1)
static_assert(sizeof(UWBP_UI_localizationOpt_C) == 0x0418); // 1048 bytes (0x0002A8 - 0x000418)
static_assert(sizeof(UWBP_Login_ServerItem_C) == 0x0361); // 865 bytes (0x0002A8 - 0x000361)
static_assert(sizeof(UWBP_Login_ServerTab_C) == 0x0324); // 804 bytes (0x000280 - 0x000324)
static_assert(sizeof(UWBP_Login_ServerPanel_C) == 0x0328); // 808 bytes (0x0002A8 - 0x000328)
static_assert(sizeof(UBP_RichTextBlockDecorator_Tips_C) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UWBP_UI_Share_Safe_Zone_C) == 0x02EE); // 750 bytes (0x0002C0 - 0x0002EE)
static_assert(sizeof(UWBP_UI_Setting_Input_Key_C) == 0x02B8); // 696 bytes (0x000280 - 0x0002B8)
static_assert(sizeof(UWBP_UI_Setting_Input_Preset_C) == 0x0340); // 832 bytes (0x0002C0 - 0x000340)
static_assert(sizeof(UWBP_UI_Setting_CheckBox_C) == 0x02E0); // 736 bytes (0x0002C0 - 0x0002E0)
static_assert(sizeof(UWBP_UI_Setting_Combo_Box_Button_C) == 0x02F8); // 760 bytes (0x0002C0 - 0x0002F8)
static_assert(sizeof(UWBP_UI_Setting_Switch_C) == 0x0320); // 800 bytes (0x0002C0 - 0x000320)
static_assert(sizeof(UWBP_UI_Setting_Slider_C) == 0x0318); // 792 bytes (0x0002C0 - 0x000318)
static_assert(sizeof(UWBP_UI_Setting_Combo_Box_C) == 0x0318); // 792 bytes (0x0002C0 - 0x000318)
static_assert(sizeof(UWBP_UI_Setting_CheckBox_Bar_C) == 0x02D8); // 728 bytes (0x0002C0 - 0x0002D8)
static_assert(sizeof(UWBP_UI_Setting_Button_C) == 0x02F8); // 760 bytes (0x0002C0 - 0x0002F8)
static_assert(sizeof(UWBP_UI_Setting_Item_C) == 0x0300); // 768 bytes (0x0002C0 - 0x000300)
static_assert(sizeof(UWBP_UI_Share_Tab_2_C) == 0x0330); // 816 bytes (0x0002C0 - 0x000330)
static_assert(sizeof(UWBP_UI_Share_White_BG_C) == 0x02E9); // 745 bytes (0x0002C0 - 0x0002E9)
static_assert(sizeof(UWBP_UI_Share_Tab_Bar_2_C) == 0x02E0); // 736 bytes (0x0002C0 - 0x0002E0)
static_assert(sizeof(UWBP_UI_Setting_Sound_C) == 0x02D8); // 728 bytes (0x0002C0 - 0x0002D8)
static_assert(sizeof(UWBP_UI_Setting_Push_C) == 0x02D8); // 728 bytes (0x0002C0 - 0x0002D8)
static_assert(sizeof(UWBP_UI_Setting_Other_C) == 0x0378); // 888 bytes (0x0002C0 - 0x000378)
static_assert(sizeof(UWBP_UI_Setting_Operation_C) == 0x02E0); // 736 bytes (0x0002C0 - 0x0002E0)
static_assert(sizeof(UWBP_UI_Setting_Language_C) == 0x02D8); // 728 bytes (0x0002C0 - 0x0002D8)
static_assert(sizeof(UWBP_UI_Setting_Graphics_C) == 0x0488); // 1160 bytes (0x0002C0 - 0x000488)
static_assert(sizeof(UWBP_UI_Setting_Account_C) == 0x0300); // 768 bytes (0x0002C0 - 0x000300)
static_assert(sizeof(UWBP_UI_Popup_BG_S_C) == 0x03B1); // 945 bytes (0x0002C0 - 0x0003B1)
static_assert(sizeof(UWBP_UI_QuitGame_View_C) == 0x0330); // 816 bytes (0x0002C0 - 0x000330)
static_assert(sizeof(UWBP_UI_Children_Notice_C) == 0x0318); // 792 bytes (0x0002C0 - 0x000318)
static_assert(sizeof(UWBP_UI_Share_Confirm_Box_C) == 0x02D0); // 720 bytes (0x0002C0 - 0x0002D0)
static_assert(sizeof(UWBP_UI_Setting_Main_C) == 0x03B8); // 952 bytes (0x0002C0 - 0x0003B8)
static_assert(sizeof(UBP_ServerList_C) == 0x0368); // 872 bytes (0x0002A8 - 0x000368)
static_assert(sizeof(UBP_Billboard_Maintenance_C) == 0x0360); // 864 bytes (0x0002C0 - 0x000360)
static_assert(sizeof(UWBP_UI_Share_Badge_C) == 0x0318); // 792 bytes (0x0002C0 - 0x000318)
static_assert(sizeof(UWBP_UI_Announcement_Btn_C) == 0x0308); // 776 bytes (0x0002C0 - 0x000308)
static_assert(sizeof(UBP_HyperLinkRichTextBlockDecorator_C) == 0x0778); // 1912 bytes (0x000750 - 0x000778)
static_assert(sizeof(UWBP_UI_Announcement_C) == 0x0470); // 1136 bytes (0x0002C0 - 0x000470)
static_assert(sizeof(UWBP_Login_SharedBG_C) == 0x03A0); // 928 bytes (0x0002A8 - 0x0003A0)
static_assert(sizeof(UBP_SysDialog_C) == 0x033C); // 828 bytes (0x0002C0 - 0x00033C)
static_assert(sizeof(UBP_LoginView_C) == 0x05E0); // 1504 bytes (0x0002A8 - 0x0005E0)
static_assert(sizeof(UBP_HotPatchView_C) == 0x0348); // 840 bytes (0x0002A8 - 0x000348)
static_assert(offsetof(UBP_LuaInstanceData_C, UberGraphFrame) == 0x0028);
static_assert(offsetof(ABP_LuaBridge_C, DefaultSceneRoot) == 0x0228);
static_assert(offsetof(ABP_WwiseSoundBg_C, Ak) == 0x0220);
static_assert(offsetof(ABP_WwiseSoundBg_C, DefaultSceneRoot) == 0x0228);
static_assert(offsetof(ABP_WwiseSoundBg_C, AkEvent) == 0x0230);
static_assert(offsetof(ABP_WwiseSoundBg_C, Group) == 0x0238);
static_assert(offsetof(ABP_WwiseSoundBg_C, State) == 0x0240);
static_assert(offsetof(ABP_SystemMessage_Actor_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ABP_SystemMessage_Actor_C, DefaultSceneRoot) == 0x0228);
static_assert(offsetof(ABP_Regist_MainScript_C, UberGraphFrame) == 0x0220);
static_assert(offsetof(ABP_Regist_MainScript_C, DefaultSceneRoot) == 0x0228);
static_assert(offsetof(ABP_Regist_MainScript_C, RegistWidget) == 0x0250);
static_assert(offsetof(ABP_Regist_MainScript_C, MasterLevel) == 0x0258);
static_assert(offsetof(ABP_Regist_MainScript_C, CaptureLevel) == 0x0260);
static_assert(offsetof(ABP_Regist_MainScript_C, SecondaryLevels) == 0x0268);
static_assert(offsetof(ABP_Regist_MainScript_C, Array) == 0x0298);
static_assert(offsetof(ABP_GameMode_Login_C, UberGraphFrame) == 0x0310);
static_assert(offsetof(ABP_GameMode_Login_C, DefaultSceneRoot) == 0x0318);
static_assert(offsetof(ABP_GameMode_Login_C, VersionWidget) == 0x0320);
static_assert(offsetof(ABP_GameMode_Login_C, LoginWidget) == 0x0328);
static_assert(offsetof(ABP_GameMode_Login_C, RegistScript) == 0x0330);
static_assert(offsetof(ABP_GameMode_Login_C, SoftMediaPlayer) == 0x0350);
static_assert(offsetof(ABP_GameMode_Login_C, MediaPlayer) == 0x0378);
static_assert(offsetof(ABP_GameMode_Login_C, RegistScriptClass) == 0x0380);
static_assert(offsetof(ABP_GameMode_Login_C, Dialogs) == 0x03A8);
static_assert(offsetof(ABP_GameMode_Login_C, SharedBGWidget) == 0x03B8);
static_assert(offsetof(ABP_Login_ContextManager_C, DefaultSceneRoot) == 0x0280);
static_assert(offsetof(UBP_Game_ValidateState_C, Message_PlatformNotSupported) == 0x00A8);
static_assert(offsetof(UBP_Game_ValidateState_C, Caption_PlatformNotSupported) == 0x00C0);
static_assert(offsetof(UBP_Main_InitServerState_C, UberGraphFrame) == 0x0060);
static_assert(offsetof(FBPS_AudioLocalizationDefine, unreal_key_5_130383A34D04D002DDFBC9BEA2AEBC17) == 0x0008);
static_assert(offsetof(FBPS_AudioLocalizationDefine, name_4_89945A05424EF3CAF2650B838E81A90B) == 0x0018);
static_assert(offsetof(UWBP_NetworkCongest_C, UberGraphFrame) == 0x02A8);
static_assert(offsetof(UWBP_NetworkCongest_C, WBP_UI_Share_Circle) == 0x02B0);
static_assert(offsetof(UWBP_UI_Share_Circle_C, UberGraphFrame) == 0x0280);
static_assert(offsetof(UWBP_UI_Share_Circle_C, Anim_Loop) == 0x0288);
static_assert(offsetof(UWBP_UI_Share_Circle_C, Image) == 0x0290);
static_assert(offsetof(UWBP_UI_Share_Circle_C, Image0) == 0x0298);
static_assert(offsetof(UWBP_Regist_TypeText_C, UberGraphFrame) == 0x0280);
static_assert(offsetof(UWBP_Regist_TypeText_C, Image_Cursor) == 0x0288);
static_assert(offsetof(UWBP_Regist_TypeText_C, LayoutText) == 0x0290);
static_assert(offsetof(UWBP_Regist_TypeText_C, TypeText) == 0x0298);
static_assert(offsetof(UWBP_Regist_TypeText_C, Font) == 0x02A0);
static_assert(offsetof(UWBP_Regist_TypeText_C, Color) == 0x02F8);
static_assert(offsetof(UWBP_Regist_TypeText_C, Text) == 0x0310);
static_assert(offsetof(UWBP_UI_RegistWidget_C, UberGraphFrame) == 0x02A8);
static_assert(offsetof(UWBP_UI_RegistWidget_C, Anim_NameLayer_Exit) == 0x02B0);
static_assert(offsetof(UWBP_UI_RegistWidget_C, Anim_NameLayer_Entry) == 0x02B8);
static_assert(offsetof(UWBP_UI_RegistWidget_C, Anim_ReturnFadeIn) == 0x02C0);
static_assert(offsetof(UWBP_UI_RegistWidget_C, Anim_FadeOut) == 0x02C8);
static_assert(offsetof(UWBP_UI_RegistWidget_C, Anim_FadeIn) == 0x02D0);
static_assert(offsetof(UWBP_UI_RegistWidget_C, Anim_Lower) == 0x02D8);
static_assert(offsetof(UWBP_UI_RegistWidget_C, Anim_Transition) == 0x02E0);
static_assert(offsetof(UWBP_UI_RegistWidget_C, AvatarHintLayer) == 0x02E8);
static_assert(offsetof(UWBP_UI_RegistWidget_C, AvatarLayer) == 0x02F0);
static_assert(offsetof(UWBP_UI_RegistWidget_C, AvatarTexture) == 0x02F8);
static_assert(offsetof(UWBP_UI_RegistWidget_C, BlackBG) == 0x0300);
static_assert(offsetof(UWBP_UI_RegistWidget_C, Block_VX) == 0x0308);
static_assert(offsetof(UWBP_UI_RegistWidget_C, Blocker) == 0x0310);
static_assert(offsetof(UWBP_UI_RegistWidget_C, Button_Boy) == 0x0318);
static_assert(offsetof(UWBP_UI_RegistWidget_C, Button_Confirm) == 0x0320);
static_assert(offsetof(UWBP_UI_RegistWidget_C, Button_Girl) == 0x0328);
static_assert(offsetof(UWBP_UI_RegistWidget_C, Button_PreSkip) == 0x0330);
static_assert(offsetof(UWBP_UI_RegistWidget_C, Button_Return) == 0x0338);
static_assert(offsetof(UWBP_UI_RegistWidget_C, DialogBG) == 0x0340);
static_assert(offsetof(UWBP_UI_RegistWidget_C, HintMessage) == 0x0348);
static_assert(offsetof(UWBP_UI_RegistWidget_C, Image) == 0x0350);
static_assert(offsetof(UWBP_UI_RegistWidget_C, Image_OverlayBlack) == 0x0358);
static_assert(offsetof(UWBP_UI_RegistWidget_C, Image_VX) == 0x0360);
static_assert(offsetof(UWBP_UI_RegistWidget_C, MaskLayer) == 0x0368);
static_assert(offsetof(UWBP_UI_RegistWidget_C, MovieCustomSubtitle) == 0x0370);
static_assert(offsetof(UWBP_UI_RegistWidget_C, MovieImage) == 0x0378);
static_assert(offsetof(UWBP_UI_RegistWidget_C, MovieLayer) == 0x0380);
static_assert(offsetof(UWBP_UI_RegistWidget_C, NameInput) == 0x0388);
static_assert(offsetof(UWBP_UI_RegistWidget_C, NameLayer) == 0x0390);
static_assert(offsetof(UWBP_UI_RegistWidget_C, NameLayout) == 0x0398);
static_assert(offsetof(UWBP_UI_RegistWidget_C, RandomButton) == 0x03A0);
static_assert(offsetof(UWBP_UI_RegistWidget_C, SkipButton) == 0x03A8);
static_assert(offsetof(UWBP_UI_RegistWidget_C, SubtitleText) == 0x03B0);
static_assert(offsetof(UWBP_UI_RegistWidget_C, TextConfirm) == 0x03B8);
static_assert(offsetof(UWBP_UI_RegistWidget_C, TypeLine1) == 0x03C0);
static_assert(offsetof(UWBP_UI_RegistWidget_C, TypeLine2) == 0x03C8);
static_assert(offsetof(UWBP_UI_RegistWidget_C, TypeLine3) == 0x03D0);
static_assert(offsetof(UWBP_UI_RegistWidget_C, VirtualKeyboardZone_Name) == 0x03D8);
static_assert(offsetof(UWBP_UI_RegistWidget_C, VX_DialogBG) == 0x03E0);
static_assert(offsetof(UWBP_UI_RegistWidget_C, VX_DialogBG0) == 0x03E8);
static_assert(offsetof(UWBP_UI_RegistWidget_C, VX_DialogBG1) == 0x03F0);
static_assert(offsetof(UWBP_UI_RegistWidget_C, VX_Layer) == 0x03F8);
static_assert(offsetof(UWBP_UI_RegistWidget_C, HintOK) == 0x0438);
static_assert(offsetof(UWBP_UI_RegistWidget_C, HintFail) == 0x0460);
static_assert(offsetof(UWBP_UI_RegistWidget_C, HintNorm) == 0x0488);
static_assert(offsetof(UWBP_UI_RegistWidget_C, PrefixExcludes) == 0x04B0);
static_assert(offsetof(UWBP_UI_RegistWidget_C, CharacterRanges) == 0x04C0);
static_assert(offsetof(UWBP_UI_RegistWidget_C, CharacterWeights) == 0x04D0);
static_assert(offsetof(UWBP_UI_RegistWidget_C, MovieMaterialTemplate) == 0x0520);
static_assert(offsetof(UWBP_UI_RegistWidget_C, MovieMaterialInstance) == 0x0528);
static_assert(offsetof(UWBP_UI_RegistWidget_C, MovieTexture) == 0x0530);
static_assert(offsetof(UWBP_UI_RegistWidget_C, MoviePlayer) == 0x0538);
static_assert(offsetof(UWBP_UI_RegistWidget_C, MovieSource) == 0x0540);
static_assert(offsetof(UWBP_UI_RegistWidget_C, MaskFactorGirl) == 0x0548);
static_assert(offsetof(UWBP_UI_RegistWidget_C, MaskFactorBoy) == 0x0558);
static_assert(offsetof(UWBP_UI_RegistWidget_C, SceneMaterialDynamic) == 0x0570);
static_assert(offsetof(UWBP_UI_RegistWidget_C, RandomPatternTable) == 0x0578);
static_assert(offsetof(UWBP_UI_RegistWidget_C, RandomLibraryTable) == 0x0580);
static_assert(offsetof(UWBP_UI_RegistWidget_C, CultureDefault) == 0x0588);
static_assert(offsetof(UWBP_UI_RegistWidget_C, FilteredPattern) == 0x0590);
static_assert(offsetof(UWBP_UI_RegistWidget_C, FilteredText) == 0x05E0);
static_assert(offsetof(UWBP_UI_RegistWidget_C, MultiPlayer) == 0x05F8);
static_assert(offsetof(UWBP_UI_RegistWidget_C, MovieSound) == 0x0600);
static_assert(offsetof(UWBP_UI_RegistWidget_C, SubtitleDataTable) == 0x0628);
static_assert(offsetof(UWBP_UI_RegistWidget_C, AssistObj) == 0x0630);
static_assert(offsetof(UWBP_UI_RegistWidget_C, SoftPatternTable) == 0x0688);
static_assert(offsetof(UWBP_UI_RegistWidget_C, SoftLibraryTable) == 0x06B0);
static_assert(offsetof(UWBP_UI_LocalizationOptItem_C, UberGraphFrame) == 0x0280);
static_assert(offsetof(UWBP_UI_LocalizationOptItem_C, Btn) == 0x0288);
static_assert(offsetof(UWBP_UI_LocalizationOptItem_C, check) == 0x0290);
static_assert(offsetof(UWBP_UI_LocalizationOptItem_C, DefaultFlag) == 0x0298);
static_assert(offsetof(UWBP_UI_LocalizationOptItem_C, Image) == 0x02A0);
static_assert(offsetof(UWBP_UI_LocalizationOptItem_C, NameText) == 0x02A8);
static_assert(offsetof(UWBP_UI_LocalizationOptItem_C, SizeText) == 0x02B0);
static_assert(offsetof(UWBP_UI_LocalizationOptItem_C, TextDownload) == 0x02B8);
static_assert(offsetof(UWBP_UI_localizationOpt_C, UberGraphFrame) == 0x02A8);
static_assert(offsetof(UWBP_UI_localizationOpt_C, GetReardBtn) == 0x02B0);
static_assert(offsetof(UWBP_UI_localizationOpt_C, ScrollBox_ItemParent) == 0x02B8);
static_assert(offsetof(UWBP_UI_localizationOpt_C, Text_Title) == 0x02C0);
static_assert(offsetof(UWBP_UI_localizationOpt_C, Text_Title_NoDownload) == 0x02C8);
static_assert(offsetof(UWBP_UI_localizationOpt_C, TextDefault) == 0x02D0);
static_assert(offsetof(UWBP_UI_localizationOpt_C, Items) == 0x02D8);
static_assert(offsetof(UWBP_UI_localizationOpt_C, DTChunk) == 0x02E8);
static_assert(offsetof(UWBP_UI_localizationOpt_C, Chunk2SizeMap) == 0x02F0);
static_assert(offsetof(UWBP_UI_localizationOpt_C, TmpChunkIds) == 0x0340);
static_assert(offsetof(UWBP_UI_localizationOpt_C, DTLocalizationDefine) == 0x0358);
static_assert(offsetof(UWBP_UI_localizationOpt_C, SelectedItems) == 0x0360);
static_assert(offsetof(UWBP_UI_localizationOpt_C, Chunk2Localization) == 0x0370);
static_assert(offsetof(UWBP_UI_localizationOpt_C, DTAudioLocalizationDefine) == 0x03C0);
static_assert(offsetof(UWBP_UI_localizationOpt_C, AudioId2Names) == 0x03C8);
static_assert(offsetof(UWBP_Login_ServerItem_C, UberGraphFrame) == 0x02A8);
static_assert(offsetof(UWBP_Login_ServerItem_C, ServerPanel_In) == 0x02B0);
static_assert(offsetof(UWBP_Login_ServerItem_C, ServerItem_Select_Loop) == 0x02B8);
static_assert(offsetof(UWBP_Login_ServerItem_C, ServerItem_Click_In) == 0x02C0);
static_assert(offsetof(UWBP_Login_ServerItem_C, ServerItem_Select_Out) == 0x02C8);
static_assert(offsetof(UWBP_Login_ServerItem_C, BG_Hover) == 0x02D0);
static_assert(offsetof(UWBP_Login_ServerItem_C, Image_State) == 0x02D8);
static_assert(offsetof(UWBP_Login_ServerItem_C, NameText) == 0x02E0);
static_assert(offsetof(UWBP_Login_ServerItem_C, Overlay_Recent) == 0x02E8);
static_assert(offsetof(UWBP_Login_ServerItem_C, Overlay_Recomment) == 0x02F0);
static_assert(offsetof(UWBP_Login_ServerItem_C, Overlay_Selection) == 0x02F8);
static_assert(offsetof(UWBP_Login_ServerItem_C, Region_Layout) == 0x0300);
static_assert(offsetof(UWBP_Login_ServerItem_C, RegionAbbr) == 0x0308);
static_assert(offsetof(UWBP_Login_ServerItem_C, RegionBG) == 0x0310);
static_assert(offsetof(UWBP_Login_ServerItem_C, Role_Layout) == 0x0318);
static_assert(offsetof(UWBP_Login_ServerItem_C, RoleText) == 0x0320);
static_assert(offsetof(UWBP_Login_ServerItem_C, Server_Layout) == 0x0328);
static_assert(offsetof(UWBP_Login_ServerItem_C, ServerData) == 0x0330);
static_assert(offsetof(UWBP_Login_ServerItem_C, StateIcons) == 0x0338);
static_assert(offsetof(UWBP_Login_ServerTab_C, UberGraphFrame) == 0x0280);
static_assert(offsetof(UWBP_Login_ServerTab_C, Button_Click) == 0x0288);
static_assert(offsetof(UWBP_Login_ServerTab_C, Image_Arrow_R) == 0x0290);
static_assert(offsetof(UWBP_Login_ServerTab_C, Image_DecLine) == 0x0298);
static_assert(offsetof(UWBP_Login_ServerTab_C, Image_Selected) == 0x02A0);
static_assert(offsetof(UWBP_Login_ServerTab_C, Text_Name) == 0x02A8);
static_assert(offsetof(UWBP_Login_ServerTab_C, WidgetSwitcher_Deco) == 0x02B0);
static_assert(offsetof(UWBP_Login_ServerTab_C, SelectedTextColor) == 0x02D0);
static_assert(offsetof(UWBP_Login_ServerTab_C, UnselectedTextColor) == 0x02F8);
static_assert(offsetof(UWBP_Login_ServerPanel_C, UberGraphFrame) == 0x02A8);
static_assert(offsetof(UWBP_Login_ServerPanel_C, ServerPanel_In) == 0x02B0);
static_assert(offsetof(UWBP_Login_ServerPanel_C, ServerPanel_Out) == 0x02B8);
static_assert(offsetof(UWBP_Login_ServerPanel_C, Image_Busy) == 0x02C0);
static_assert(offsetof(UWBP_Login_ServerPanel_C, Image_Full) == 0x02C8);
static_assert(offsetof(UWBP_Login_ServerPanel_C, Image_Idle) == 0x02D0);
static_assert(offsetof(UWBP_Login_ServerPanel_C, Image_Maintain) == 0x02D8);
static_assert(offsetof(UWBP_Login_ServerPanel_C, ServerContainer) == 0x02E0);
static_assert(offsetof(UWBP_Login_ServerPanel_C, TextTitle) == 0x02E8);
static_assert(offsetof(UWBP_Login_ServerPanel_C, CurrSelectItem) == 0x0300);
static_assert(offsetof(UWBP_Login_ServerPanel_C, NextSelectItem) == 0x0308);
static_assert(offsetof(UWBP_Login_ServerPanel_C, GeneratedEntries) == 0x0318);
static_assert(offsetof(UWBP_UI_Share_Safe_Zone_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UWBP_UI_Share_Safe_Zone_C, EdenSafeZone) == 0x02C8);
static_assert(offsetof(UWBP_UI_Share_Safe_Zone_C, NamedSlot_Safe_Zone) == 0x02D0);
static_assert(offsetof(UWBP_UI_Share_Safe_Zone_C, Spacer_Menu_Bar) == 0x02D8);
static_assert(offsetof(UWBP_UI_Share_Safe_Zone_C, Spacer_Tab_Bar) == 0x02E0);
static_assert(offsetof(UWBP_UI_Setting_Input_Key_C, UberGraphFrame) == 0x0280);
static_assert(offsetof(UWBP_UI_Setting_Input_Key_C, ActionInputIcon_Show) == 0x0288);
static_assert(offsetof(UWBP_UI_Setting_Input_Key_C, Text_Setting_Name) == 0x0290);
static_assert(offsetof(UWBP_UI_Setting_Input_Key_C, ActionTag) == 0x0298);
static_assert(offsetof(UWBP_UI_Setting_Input_Key_C, ShowName) == 0x02A0);
static_assert(offsetof(UWBP_UI_Setting_Input_Preset_C, Anim_Turn_On) == 0x02C0);
static_assert(offsetof(UWBP_UI_Setting_Input_Preset_C, bg) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_Input_Preset_C, Button_Combo_Box) == 0x02D0);
static_assert(offsetof(UWBP_UI_Setting_Input_Preset_C, ButtonIcon) == 0x02D8);
static_assert(offsetof(UWBP_UI_Setting_Input_Preset_C, CanvasPanel_Clip) == 0x02E0);
static_assert(offsetof(UWBP_UI_Setting_Input_Preset_C, CanvasPanel_Size) == 0x02E8);
static_assert(offsetof(UWBP_UI_Setting_Input_Preset_C, DynamicEntryBox_Button) == 0x02F0);
static_assert(offsetof(UWBP_UI_Setting_Input_Preset_C, DynamicEntryBox_Key) == 0x02F8);
static_assert(offsetof(UWBP_UI_Setting_Input_Preset_C, ImageBg) == 0x0300);
static_assert(offsetof(UWBP_UI_Setting_Input_Preset_C, Overlay_List) == 0x0308);
static_assert(offsetof(UWBP_UI_Setting_Input_Preset_C, Text_Combo_Button) == 0x0310);
static_assert(offsetof(UWBP_UI_Setting_Input_Preset_C, Text_Setting_Name) == 0x0318);
static_assert(offsetof(UWBP_UI_Setting_Input_Preset_C, ActionTagList) == 0x0320);
static_assert(offsetof(UWBP_UI_Setting_Input_Preset_C, ShowNameList) == 0x0330);
static_assert(offsetof(UWBP_UI_Setting_CheckBox_C, Button_CheckBox_Setting) == 0x02C0);
static_assert(offsetof(UWBP_UI_Setting_CheckBox_C, Image_Bg) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_CheckBox_C, Image_Check) == 0x02D0);
static_assert(offsetof(UWBP_UI_Setting_CheckBox_C, Text_Setting_Name) == 0x02D8);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_Button_C, Button_Combo_Box) == 0x02C0);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_Button_C, ButtonIcon) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_Button_C, Image_Selected) == 0x02D0);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_Button_C, ImageBg) == 0x02D8);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_Button_C, Text_Button) == 0x02E0);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_Button_C, Text_Button0) == 0x02E8);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_Button_C, WidgetSwitcher_Button) == 0x02F0);
static_assert(offsetof(UWBP_UI_Setting_Switch_C, bg) == 0x02C0);
static_assert(offsetof(UWBP_UI_Setting_Switch_C, Button_Switch) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_Switch_C, Horizontal_Box_Switch1) == 0x02D0);
static_assert(offsetof(UWBP_UI_Setting_Switch_C, Horizontal_Box_Switch2) == 0x02D8);
static_assert(offsetof(UWBP_UI_Setting_Switch_C, Image_Button) == 0x02E0);
static_assert(offsetof(UWBP_UI_Setting_Switch_C, Image_OFF) == 0x02E8);
static_assert(offsetof(UWBP_UI_Setting_Switch_C, Image_ON) == 0x02F0);
static_assert(offsetof(UWBP_UI_Setting_Switch_C, Text_OFF_Switch) == 0x02F8);
static_assert(offsetof(UWBP_UI_Setting_Switch_C, Text_OFF_Switch0) == 0x0300);
static_assert(offsetof(UWBP_UI_Setting_Switch_C, Text_ON_Switch) == 0x0308);
static_assert(offsetof(UWBP_UI_Setting_Switch_C, Text_ON_Switch1) == 0x0310);
static_assert(offsetof(UWBP_UI_Setting_Switch_C, Text_Setting_Name) == 0x0318);
static_assert(offsetof(UWBP_UI_Setting_Slider_C, bg) == 0x02C0);
static_assert(offsetof(UWBP_UI_Setting_Slider_C, Button_Setting_Slider_Minus) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_Slider_C, Button_Setting_Slider_Plus) == 0x02D0);
static_assert(offsetof(UWBP_UI_Setting_Slider_C, Image) == 0x02D8);
static_assert(offsetof(UWBP_UI_Setting_Slider_C, Image0) == 0x02E0);
static_assert(offsetof(UWBP_UI_Setting_Slider_C, Image1) == 0x02E8);
static_assert(offsetof(UWBP_UI_Setting_Slider_C, Image2) == 0x02F0);
static_assert(offsetof(UWBP_UI_Setting_Slider_C, ProgressBar_Slider) == 0x02F8);
static_assert(offsetof(UWBP_UI_Setting_Slider_C, Slider_Setting) == 0x0300);
static_assert(offsetof(UWBP_UI_Setting_Slider_C, Text_Setting_Name) == 0x0308);
static_assert(offsetof(UWBP_UI_Setting_Slider_C, Text_Slider_Value) == 0x0310);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_C, Anim_Turn_On) == 0x02C0);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_C, bg) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_C, Button_Combo_Box) == 0x02D0);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_C, ButtonIcon) == 0x02D8);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_C, CanvasPanel_Clip) == 0x02E0);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_C, CanvasPanel_Size) == 0x02E8);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_C, DynamicEntryBox_Button) == 0x02F0);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_C, ImageBg) == 0x02F8);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_C, Overlay_List) == 0x0300);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_C, Text_Combo_Button) == 0x0308);
static_assert(offsetof(UWBP_UI_Setting_Combo_Box_C, Text_Setting_Name) == 0x0310);
static_assert(offsetof(UWBP_UI_Setting_CheckBox_Bar_C, bg) == 0x02C0);
static_assert(offsetof(UWBP_UI_Setting_CheckBox_Bar_C, DynamicEntryBox_CheckBox) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_CheckBox_Bar_C, Text_Setting_Name) == 0x02D0);
static_assert(offsetof(UWBP_UI_Setting_Button_C, bg) == 0x02C0);
static_assert(offsetof(UWBP_UI_Setting_Button_C, Button) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_Button_C, Horizontal_Box) == 0x02D0);
static_assert(offsetof(UWBP_UI_Setting_Button_C, Image) == 0x02D8);
static_assert(offsetof(UWBP_UI_Setting_Button_C, Image_ON) == 0x02E0);
static_assert(offsetof(UWBP_UI_Setting_Button_C, Text_On) == 0x02E8);
static_assert(offsetof(UWBP_UI_Setting_Button_C, Text_Setting_Name) == 0x02F0);
static_assert(offsetof(UWBP_UI_Setting_Item_C, CanvasPanel) == 0x02C0);
static_assert(offsetof(UWBP_UI_Setting_Item_C, Overlay_Setting) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_Item_C, WBP_UI_Setting_Button) == 0x02D0);
static_assert(offsetof(UWBP_UI_Setting_Item_C, WBP_UI_Setting_CheckBox_Bar) == 0x02D8);
static_assert(offsetof(UWBP_UI_Setting_Item_C, WBP_UI_Setting_Combo_Box) == 0x02E0);
static_assert(offsetof(UWBP_UI_Setting_Item_C, WBP_UI_Setting_Slider) == 0x02E8);
static_assert(offsetof(UWBP_UI_Setting_Item_C, WBP_UI_Setting_Switch) == 0x02F0);
static_assert(offsetof(UWBP_UI_Setting_Item_C, WidgetSwitcher_Setting_Item) == 0x02F8);
static_assert(offsetof(UWBP_UI_Share_Tab_2_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UWBP_UI_Share_Tab_2_C, Anim_Deselect) == 0x02C8);
static_assert(offsetof(UWBP_UI_Share_Tab_2_C, Anim_Select) == 0x02D0);
static_assert(offsetof(UWBP_UI_Share_Tab_2_C, Button_Click) == 0x02D8);
static_assert(offsetof(UWBP_UI_Share_Tab_2_C, Image) == 0x02E0);
static_assert(offsetof(UWBP_UI_Share_Tab_2_C, Image_Arrow) == 0x02E8);
static_assert(offsetof(UWBP_UI_Share_Tab_2_C, Image_Icon) == 0x02F0);
static_assert(offsetof(UWBP_UI_Share_Tab_2_C, Image_Selected) == 0x02F8);
static_assert(offsetof(UWBP_UI_Share_Tab_2_C, Overlay_Flag) == 0x0300);
static_assert(offsetof(UWBP_UI_Share_Tab_2_C, Overlay_Icon) == 0x0308);
static_assert(offsetof(UWBP_UI_Share_Tab_2_C, Text_Flag) == 0x0310);
static_assert(offsetof(UWBP_UI_Share_Tab_2_C, Text_Name) == 0x0318);
static_assert(offsetof(UWBP_UI_Share_Tab_2_C, WBP_UI_Share_Badge) == 0x0320);
static_assert(offsetof(UWBP_UI_Share_Tab_2_C, WidgetSwitcher_Deco) == 0x0328);
static_assert(offsetof(UWBP_UI_Share_White_BG_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UWBP_UI_Share_White_BG_C, Anim_Entry) == 0x02C8);
static_assert(offsetof(UWBP_UI_Share_White_BG_C, Anim_Loop) == 0x02D0);
static_assert(offsetof(UWBP_UI_Share_White_BG_C, Overlay_Tab) == 0x02D8);
static_assert(offsetof(UWBP_UI_Share_White_BG_C, VX_01) == 0x02E0);
static_assert(offsetof(UWBP_UI_Share_Tab_Bar_2_C, Anim_Entry) == 0x02C0);
static_assert(offsetof(UWBP_UI_Share_Tab_Bar_2_C, ActionInputContent_Tab) == 0x02C8);
static_assert(offsetof(UWBP_UI_Share_Tab_Bar_2_C, DynamicEntryBox_Tab) == 0x02D0);
static_assert(offsetof(UWBP_UI_Share_Tab_Bar_2_C, ScrollBox_Tab) == 0x02D8);
static_assert(offsetof(UWBP_UI_Setting_Sound_C, DynamicEntryBox_Sound) == 0x02C0);
static_assert(offsetof(UWBP_UI_Setting_Sound_C, line) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_Sound_C, Text_Title) == 0x02D0);
static_assert(offsetof(UWBP_UI_Setting_Push_C, DynamicEntryBox_Push) == 0x02C0);
static_assert(offsetof(UWBP_UI_Setting_Push_C, line) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_Push_C, Text_Title) == 0x02D0);
static_assert(offsetof(UWBP_UI_Setting_Other_C, ArchiveLayout) == 0x02C0);
static_assert(offsetof(UWBP_UI_Setting_Other_C, bg) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_Other_C, BindPhone_AwardNum) == 0x02D0);
static_assert(offsetof(UWBP_UI_Setting_Other_C, BindPhoneAwardText) == 0x02D8);
static_assert(offsetof(UWBP_UI_Setting_Other_C, BindPhoneLayout) == 0x02E0);
static_assert(offsetof(UWBP_UI_Setting_Other_C, Button_Archive) == 0x02E8);
static_assert(offsetof(UWBP_UI_Setting_Other_C, Button_Bind_Phone) == 0x02F0);
static_assert(offsetof(UWBP_UI_Setting_Other_C, Button_Logout) == 0x02F8);
static_assert(offsetof(UWBP_UI_Setting_Other_C, Button_Redeem_Code) == 0x0300);
static_assert(offsetof(UWBP_UI_Setting_Other_C, Button_Restore) == 0x0308);
static_assert(offsetof(UWBP_UI_Setting_Other_C, DynamicEntryBox_Other) == 0x0310);
static_assert(offsetof(UWBP_UI_Setting_Other_C, Horizontal_Box) == 0x0318);
static_assert(offsetof(UWBP_UI_Setting_Other_C, Image) == 0x0320);
static_assert(offsetof(UWBP_UI_Setting_Other_C, Image_ON) == 0x0328);
static_assert(offsetof(UWBP_UI_Setting_Other_C, line) == 0x0330);
static_assert(offsetof(UWBP_UI_Setting_Other_C, Reward_Icon) == 0x0338);
static_assert(offsetof(UWBP_UI_Setting_Other_C, Text_Bind_Des) == 0x0340);
static_assert(offsetof(UWBP_UI_Setting_Other_C, Text_Cancel) == 0x0348);
static_assert(offsetof(UWBP_UI_Setting_Other_C, Text_Cancel0) == 0x0350);
static_assert(offsetof(UWBP_UI_Setting_Other_C, Text_Cancel1) == 0x0358);
static_assert(offsetof(UWBP_UI_Setting_Other_C, Text_OK) == 0x0360);
static_assert(offsetof(UWBP_UI_Setting_Other_C, Text_Setting_Name) == 0x0368);
static_assert(offsetof(UWBP_UI_Setting_Other_C, Text_Title) == 0x0370);
static_assert(offsetof(UWBP_UI_Setting_Operation_C, DynamicEntryBox_Operation) == 0x02C0);
static_assert(offsetof(UWBP_UI_Setting_Operation_C, line) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_Operation_C, Text_Title) == 0x02D0);
static_assert(offsetof(UWBP_UI_Setting_Operation_C, WBP_UI_Setting_Input_Preset) == 0x02D8);
static_assert(offsetof(UWBP_UI_Setting_Language_C, DynamicEntryBox_Language) == 0x02C0);
static_assert(offsetof(UWBP_UI_Setting_Language_C, line) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_Language_C, Text_Title) == 0x02D0);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, bg) == 0x02C0);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Button_Advanced) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Button_Normal) == 0x02D0);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Button_Quality0) == 0x02D8);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Button_Quality1) == 0x02E0);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Button_Quality2) == 0x02E8);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Button_Quality3) == 0x02F0);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Button_Quality4) == 0x02F8);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Button_Quality5) == 0x0300);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, DynamicEntryBox_Graphics_Advanced) == 0x0308);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, DynamicEntryBox_Graphics_Normal) == 0x0310);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Image_Des5) == 0x0318);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Image_Level0) == 0x0320);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Image_Level00) == 0x0328);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Image_Level1) == 0x0330);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Image_Level11) == 0x0338);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Image_Level2) == 0x0340);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Image_Level22) == 0x0348);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Image_Level3) == 0x0350);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Image_Level33) == 0x0358);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Image_Level4) == 0x0360);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Image_Level44) == 0x0368);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Image_Level5) == 0x0370);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Image_Level55) == 0x0378);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Image_Split) == 0x0380);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, line) == 0x0388);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Line0) == 0x0390);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Line1) == 0x0398);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Line2) == 0x03A0);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Line3) == 0x03A8);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Line4) == 0x03B0);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Line46) == 0x03B8);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Line47) == 0x03C0);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Line48) == 0x03C8);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Line49) == 0x03D0);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Line410) == 0x03D8);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Line411) == 0x03E0);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Line412) == 0x03E8);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Line413) == 0x03F0);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Overlay_Des0) == 0x03F8);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Overlay_Des1) == 0x0400);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Overlay_Des2) == 0x0408);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Overlay_Des3) == 0x0410);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Overlay_Des4) == 0x0418);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Overlay_Des5) == 0x0420);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Scroll_Box_Advanced) == 0x0428);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Scroll_Box_Normal) == 0x0430);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Text_Des0) == 0x0438);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Text_Des1) == 0x0440);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Text_Des2) == 0x0448);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Text_Des3) == 0x0450);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Text_Des4) == 0x0458);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Text_Des5) == 0x0460);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Text_Setting_Advanced) == 0x0468);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Text_Setting_Name) == 0x0470);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Text_Setting_Normal) == 0x0478);
static_assert(offsetof(UWBP_UI_Setting_Graphics_C, Text_Title) == 0x0480);
static_assert(offsetof(UWBP_UI_Setting_Account_C, bg) == 0x02C0);
static_assert(offsetof(UWBP_UI_Setting_Account_C, Button_Account_Cancel) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_Account_C, Button_Logout) == 0x02D0);
static_assert(offsetof(UWBP_UI_Setting_Account_C, DynamicEntryBox_Account) == 0x02D8);
static_assert(offsetof(UWBP_UI_Setting_Account_C, Text_Cancel) == 0x02E0);
static_assert(offsetof(UWBP_UI_Setting_Account_C, Text_OK) == 0x02E8);
static_assert(offsetof(UWBP_UI_Setting_Account_C, Text_Title) == 0x02F0);
static_assert(offsetof(UWBP_UI_Setting_Account_C, WBP_UI_Share_Safe_Zone) == 0x02F8);
static_assert(offsetof(UWBP_UI_Popup_BG_S_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UWBP_UI_Popup_BG_S_C, Anim_Exit) == 0x02C8);
static_assert(offsetof(UWBP_UI_Popup_BG_S_C, Anim_Entry) == 0x02D0);
static_assert(offsetof(UWBP_UI_Popup_BG_S_C, Button_Cancel) == 0x02D8);
static_assert(offsetof(UWBP_UI_Popup_BG_S_C, Button_Close) == 0x02E0);
static_assert(offsetof(UWBP_UI_Popup_BG_S_C, Button_OK) == 0x02E8);
static_assert(offsetof(UWBP_UI_Popup_BG_S_C, NamedSlot_Button) == 0x02F0);
static_assert(offsetof(UWBP_UI_Popup_BG_S_C, NamedSlot_Content) == 0x02F8);
static_assert(offsetof(UWBP_UI_Popup_BG_S_C, RichTextBlock_Desc) == 0x0300);
static_assert(offsetof(UWBP_UI_Popup_BG_S_C, Text_Cancel) == 0x0308);
static_assert(offsetof(UWBP_UI_Popup_BG_S_C, Text_OK) == 0x0310);
static_assert(offsetof(UWBP_UI_Popup_BG_S_C, Text_Title) == 0x0318);
static_assert(offsetof(UWBP_UI_Popup_BG_S_C, TextTitle) == 0x0320);
static_assert(offsetof(UWBP_UI_Popup_BG_S_C, TextDesc) == 0x0368);
static_assert(offsetof(UWBP_UI_Popup_BG_S_C, TextCancel) == 0x0380);
static_assert(offsetof(UWBP_UI_Popup_BG_S_C, TextOK) == 0x0398);
static_assert(offsetof(UWBP_UI_QuitGame_View_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UWBP_UI_QuitGame_View_C, BTN_Close) == 0x02C8);
static_assert(offsetof(UWBP_UI_QuitGame_View_C, Button_Cancel) == 0x02D0);
static_assert(offsetof(UWBP_UI_QuitGame_View_C, Button_Confirm) == 0x02D8);
static_assert(offsetof(UWBP_UI_QuitGame_View_C, Button_Spacer) == 0x02E0);
static_assert(offsetof(UWBP_UI_QuitGame_View_C, Cancel_Layout) == 0x02E8);
static_assert(offsetof(UWBP_UI_QuitGame_View_C, Confirm_Layout) == 0x02F0);
static_assert(offsetof(UWBP_UI_QuitGame_View_C, SizeBox_Exit) == 0x02F8);
static_assert(offsetof(UWBP_UI_QuitGame_View_C, TitleText) == 0x0300);
static_assert(offsetof(UWBP_UI_QuitGame_View_C, WidgetSwitcher_Des) == 0x0308);
static_assert(offsetof(UWBP_UI_QuitGame_View_C, Des_Ios) == 0x0310);
static_assert(offsetof(UWBP_UI_QuitGame_View_C, Des_Other) == 0x0320);
static_assert(offsetof(UWBP_UI_Children_Notice_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UWBP_UI_Children_Notice_C, Button_Close) == 0x02C8);
static_assert(offsetof(UWBP_UI_Children_Notice_C, Text_Title) == 0x02D0);
static_assert(offsetof(UWBP_UI_Children_Notice_C, Text_Title_Sub) == 0x02D8);
static_assert(offsetof(UWBP_UI_Children_Notice_C, TextContent) == 0x02E0);
static_assert(offsetof(UWBP_UI_Children_Notice_C, TextTile) == 0x02E8);
static_assert(offsetof(UWBP_UI_Children_Notice_C, ChildreNoticeText) == 0x0300);
static_assert(offsetof(UWBP_UI_Share_Confirm_Box_C, Anim_Entry) == 0x02C0);
static_assert(offsetof(UWBP_UI_Share_Confirm_Box_C, WBP_UI_Popup_BG_S) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_Main_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UWBP_UI_Setting_Main_C, Anim_Entry) == 0x02C8);
static_assert(offsetof(UWBP_UI_Setting_Main_C, Anim_Show) == 0x02D0);
static_assert(offsetof(UWBP_UI_Setting_Main_C, Base_Version) == 0x02D8);
static_assert(offsetof(UWBP_UI_Setting_Main_C, Button_Cancel) == 0x02E0);
static_assert(offsetof(UWBP_UI_Setting_Main_C, Button_Close) == 0x02E8);
static_assert(offsetof(UWBP_UI_Setting_Main_C, Button_OK) == 0x02F0);
static_assert(offsetof(UWBP_UI_Setting_Main_C, Button_Return) == 0x02F8);
static_assert(offsetof(UWBP_UI_Setting_Main_C, Channel_Des) == 0x0300);
static_assert(offsetof(UWBP_UI_Setting_Main_C, Channel_Value) == 0x0308);
static_assert(offsetof(UWBP_UI_Setting_Main_C, Image) == 0x0310);
static_assert(offsetof(UWBP_UI_Setting_Main_C, NamedSlot_Button) == 0x0318);
static_assert(offsetof(UWBP_UI_Setting_Main_C, NamedSlot_Content) == 0x0320);
static_assert(offsetof(UWBP_UI_Setting_Main_C, Text_Cancel) == 0x0328);
static_assert(offsetof(UWBP_UI_Setting_Main_C, Text_Content) == 0x0330);
static_assert(offsetof(UWBP_UI_Setting_Main_C, Text_Message) == 0x0338);
static_assert(offsetof(UWBP_UI_Setting_Main_C, Text_OK) == 0x0340);
static_assert(offsetof(UWBP_UI_Setting_Main_C, Text_Title) == 0x0348);
static_assert(offsetof(UWBP_UI_Setting_Main_C, Text_Title_Sub) == 0x0350);
static_assert(offsetof(UWBP_UI_Setting_Main_C, Version_Value) == 0x0358);
static_assert(offsetof(UWBP_UI_Setting_Main_C, WarningOverlay) == 0x0360);
static_assert(offsetof(UWBP_UI_Setting_Main_C, WarnOverlay) == 0x0368);
static_assert(offsetof(UWBP_UI_Setting_Main_C, WBP_UI_Setting_Account) == 0x0370);
static_assert(offsetof(UWBP_UI_Setting_Main_C, WBP_UI_Setting_Graphics) == 0x0378);
static_assert(offsetof(UWBP_UI_Setting_Main_C, WBP_UI_Setting_Language) == 0x0380);
static_assert(offsetof(UWBP_UI_Setting_Main_C, WBP_UI_Setting_Operation) == 0x0388);
static_assert(offsetof(UWBP_UI_Setting_Main_C, WBP_UI_Setting_Other) == 0x0390);
static_assert(offsetof(UWBP_UI_Setting_Main_C, WBP_UI_Setting_Push) == 0x0398);
static_assert(offsetof(UWBP_UI_Setting_Main_C, WBP_UI_Setting_Sound) == 0x03A0);
static_assert(offsetof(UWBP_UI_Setting_Main_C, WBP_UI_Share_Tab_Bar) == 0x03A8);
static_assert(offsetof(UWBP_UI_Setting_Main_C, WBP_UI_Share_White_BG) == 0x03B0);
static_assert(offsetof(UBP_ServerList_C, UberGraphFrame) == 0x02A8);
static_assert(offsetof(UBP_ServerList_C, ServerList_In) == 0x02B0);
static_assert(offsetof(UBP_ServerList_C, Button_Close) == 0x02B8);
static_assert(offsetof(UBP_ServerList_C, DynamicEntryBox_Tab) == 0x02C0);
static_assert(offsetof(UBP_ServerList_C, ServerPanel) == 0x02C8);
static_assert(offsetof(UBP_ServerList_C, RoleServers) == 0x02E8);
static_assert(offsetof(UBP_ServerList_C, ServerRegions) == 0x02F8);
static_assert(offsetof(UBP_ServerList_C, Proxy) == 0x0308);
static_assert(offsetof(UBP_ServerList_C, ServerRegionMap) == 0x0310);
static_assert(offsetof(UBP_ServerList_C, RoleServerTab) == 0x0360);
static_assert(offsetof(UBP_Billboard_Maintenance_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UBP_Billboard_Maintenance_C, bg) == 0x02C8);
static_assert(offsetof(UBP_Billboard_Maintenance_C, Billboard_Icon) == 0x02D0);
static_assert(offsetof(UBP_Billboard_Maintenance_C, Button_Cancel) == 0x02D8);
static_assert(offsetof(UBP_Billboard_Maintenance_C, Button_Close) == 0x02E0);
static_assert(offsetof(UBP_Billboard_Maintenance_C, Button_OK) == 0x02E8);
static_assert(offsetof(UBP_Billboard_Maintenance_C, Scroll_Box_Content) == 0x02F0);
static_assert(offsetof(UBP_Billboard_Maintenance_C, Text_Cancel) == 0x02F8);
static_assert(offsetof(UBP_Billboard_Maintenance_C, Text_Content) == 0x0300);
static_assert(offsetof(UBP_Billboard_Maintenance_C, Text_Content0) == 0x0308);
static_assert(offsetof(UBP_Billboard_Maintenance_C, Text_OK) == 0x0310);
static_assert(offsetof(UBP_Billboard_Maintenance_C, Text_Title) == 0x0318);
static_assert(offsetof(UBP_Billboard_Maintenance_C, BillboardContent) == 0x0320);
static_assert(offsetof(UBP_Billboard_Maintenance_C, MaintainTitle) == 0x0330);
static_assert(offsetof(UBP_Billboard_Maintenance_C, MaintainLinkText) == 0x0340);
static_assert(offsetof(UBP_Billboard_Maintenance_C, MaintainLinkAddr) == 0x0350);
static_assert(offsetof(UWBP_UI_Share_Badge_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UWBP_UI_Share_Badge_C, extraText3) == 0x02C8);
static_assert(offsetof(UWBP_UI_Share_Badge_C, extraText4) == 0x02D0);
static_assert(offsetof(UWBP_UI_Share_Badge_C, Image) == 0x02D8);
static_assert(offsetof(UWBP_UI_Share_Badge_C, Image_NumBadgeBg) == 0x02E0);
static_assert(offsetof(UWBP_UI_Share_Badge_C, Overlay_Flag) == 0x02E8);
static_assert(offsetof(UWBP_UI_Share_Badge_C, Text_Debug) == 0x02F0);
static_assert(offsetof(UWBP_UI_Share_Badge_C, WidgetSwitcher_Badge) == 0x02F8);
static_assert(offsetof(UWBP_UI_Share_Badge_C, WidgetSwitcher_New) == 0x0300);
static_assert(offsetof(UWBP_UI_Share_Badge_C, Img_NumBg) == 0x0310);
static_assert(offsetof(UWBP_UI_Announcement_Btn_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UWBP_UI_Announcement_Btn_C, Btn) == 0x02C8);
static_assert(offsetof(UWBP_UI_Announcement_Btn_C, Btn_Bg) == 0x02D0);
static_assert(offsetof(UWBP_UI_Announcement_Btn_C, Btn_Bg0) == 0x02D8);
static_assert(offsetof(UWBP_UI_Announcement_Btn_C, Btn_Name) == 0x02E0);
static_assert(offsetof(UWBP_UI_Announcement_Btn_C, Btn_Name1) == 0x02E8);
static_assert(offsetof(UWBP_UI_Announcement_Btn_C, Image) == 0x02F0);
static_assert(offsetof(UWBP_UI_Announcement_Btn_C, WBP_UI_Share_Badge) == 0x02F8);
static_assert(offsetof(UWBP_UI_Announcement_Btn_C, WidgetSwitcher_Ann) == 0x0300);
static_assert(offsetof(UBP_HyperLinkRichTextBlockDecorator_C, UberGraphFrame) == 0x0750);
static_assert(offsetof(UWBP_UI_Announcement_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UWBP_UI_Announcement_C, Activity_Btn) == 0x02C8);
static_assert(offsetof(UWBP_UI_Announcement_C, Activity_Btn_Bg) == 0x02D0);
static_assert(offsetof(UWBP_UI_Announcement_C, ActivityBtnText) == 0x02D8);
static_assert(offsetof(UWBP_UI_Announcement_C, Announcement_Icon) == 0x02E0);
static_assert(offsetof(UWBP_UI_Announcement_C, bg) == 0x02E8);
static_assert(offsetof(UWBP_UI_Announcement_C, Button_Close) == 0x02F0);
static_assert(offsetof(UWBP_UI_Announcement_C, Game_Btn) == 0x02F8);
static_assert(offsetof(UWBP_UI_Announcement_C, Game_Btn_Bg) == 0x0300);
static_assert(offsetof(UWBP_UI_Announcement_C, Game_Btn_Bg0) == 0x0308);
static_assert(offsetof(UWBP_UI_Announcement_C, Game_Btn_Bg1) == 0x0310);
static_assert(offsetof(UWBP_UI_Announcement_C, GameBtnText) == 0x0318);
static_assert(offsetof(UWBP_UI_Announcement_C, GameBtnText2) == 0x0320);
static_assert(offsetof(UWBP_UI_Announcement_C, GameBtnText3) == 0x0328);
static_assert(offsetof(UWBP_UI_Announcement_C, Image_Null) == 0x0330);
static_assert(offsetof(UWBP_UI_Announcement_C, line) == 0x0338);
static_assert(offsetof(UWBP_UI_Announcement_C, ListView_Tab_List) == 0x0340);
static_assert(offsetof(UWBP_UI_Announcement_C, Scroll_Box_Content) == 0x0348);
static_assert(offsetof(UWBP_UI_Announcement_C, Tab_list_Null) == 0x0350);
static_assert(offsetof(UWBP_UI_Announcement_C, Tab_Null) == 0x0358);
static_assert(offsetof(UWBP_UI_Announcement_C, Tab_Null4) == 0x0360);
static_assert(offsetof(UWBP_UI_Announcement_C, Tab_Null5) == 0x0368);
static_assert(offsetof(UWBP_UI_Announcement_C, Tab_Null6) == 0x0370);
static_assert(offsetof(UWBP_UI_Announcement_C, Tab_Null7) == 0x0378);
static_assert(offsetof(UWBP_UI_Announcement_C, Text_Content) == 0x0380);
static_assert(offsetof(UWBP_UI_Announcement_C, Text_Title) == 0x0388);
static_assert(offsetof(UWBP_UI_Announcement_C, Title_Text) == 0x0390);
static_assert(offsetof(UWBP_UI_Announcement_C, WidgetSwitcher_Activity) == 0x0398);
static_assert(offsetof(UWBP_UI_Announcement_C, WidgetSwitcher_Content) == 0x03A0);
static_assert(offsetof(UWBP_UI_Announcement_C, WidgetSwitcher_Game) == 0x03A8);
static_assert(offsetof(UWBP_UI_Announcement_C, WidgetSwitcher_Tab_List) == 0x03B0);
static_assert(offsetof(UWBP_UI_Announcement_C, AnnouncementDatas) == 0x03B8);
static_assert(offsetof(UWBP_UI_Announcement_C, Texture) == 0x03C8);
static_assert(offsetof(UWBP_UI_Announcement_C, AnnIdUrlMap) == 0x03D0);
static_assert(offsetof(UWBP_UI_Announcement_C, AnnIdTextureMap) == 0x0420);
static_assert(offsetof(UWBP_Login_SharedBG_C, UberGraphFrame) == 0x02A8);
static_assert(offsetof(UWBP_Login_SharedBG_C, BG_Enter) == 0x02B0);
static_assert(offsetof(UWBP_Login_SharedBG_C, Image_Dark) == 0x02B8);
static_assert(offsetof(UWBP_Login_SharedBG_C, Spine_BG) == 0x02C0);
static_assert(offsetof(UWBP_Login_SharedBG_C, Spine_Logo) == 0x02C8);
static_assert(offsetof(UWBP_Login_SharedBG_C, Logo_EnterAnim) == 0x02E8);
static_assert(offsetof(UWBP_Login_SharedBG_C, Logo_LoopAnim) == 0x02F8);
static_assert(offsetof(UWBP_Login_SharedBG_C, BG_EnterAnim) == 0x0308);
static_assert(offsetof(UWBP_Login_SharedBG_C, BG_LoopAnim) == 0x0318);
static_assert(offsetof(UWBP_Login_SharedBG_C, LocalizeString) == 0x0390);
static_assert(offsetof(UBP_SysDialog_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UBP_SysDialog_C, BTN_Close) == 0x02C8);
static_assert(offsetof(UBP_SysDialog_C, Button_Cancel) == 0x02D0);
static_assert(offsetof(UBP_SysDialog_C, Button_Confirm) == 0x02D8);
static_assert(offsetof(UBP_SysDialog_C, Button_Spacer) == 0x02E0);
static_assert(offsetof(UBP_SysDialog_C, Cancel_Layout) == 0x02E8);
static_assert(offsetof(UBP_SysDialog_C, Confirm_Layout) == 0x02F0);
static_assert(offsetof(UBP_SysDialog_C, ContentText) == 0x02F8);
static_assert(offsetof(UBP_SysDialog_C, Text_Cancel) == 0x0300);
static_assert(offsetof(UBP_SysDialog_C, Text_Confirm) == 0x0308);
static_assert(offsetof(UBP_SysDialog_C, TitleText) == 0x0310);
static_assert(offsetof(UBP_SysDialog_C, Bus) == 0x0318);
static_assert(offsetof(UBP_SysDialog_C, Mode) == 0x0328);
static_assert(offsetof(UBP_LoginView_C, UberGraphFrame) == 0x02A8);
static_assert(offsetof(UBP_LoginView_C, Anime_End) == 0x02B0);
static_assert(offsetof(UBP_LoginView_C, Anime_Begin) == 0x02B8);
static_assert(offsetof(UBP_LoginView_C, Anime_Loop) == 0x02C0);
static_assert(offsetof(UBP_LoginView_C, AccountInput) == 0x02C8);
static_assert(offsetof(UBP_LoginView_C, Apple_Icon) == 0x02D0);
static_assert(offsetof(UBP_LoginView_C, AppleLayout) == 0x02D8);
static_assert(offsetof(UBP_LoginView_C, Btn_Bg) == 0x02E0);
static_assert(offsetof(UBP_LoginView_C, Btn_Bg0) == 0x02E8);
static_assert(offsetof(UBP_LoginView_C, Btn_Bg1) == 0x02F0);
static_assert(offsetof(UBP_LoginView_C, Btn_Bg2) == 0x02F8);
static_assert(offsetof(UBP_LoginView_C, Btn_Bg3) == 0x0300);
static_assert(offsetof(UBP_LoginView_C, BtnApple) == 0x0308);
static_assert(offsetof(UBP_LoginView_C, BtnEmail) == 0x0310);
static_assert(offsetof(UBP_LoginView_C, BtnGoogle) == 0x0318);
static_assert(offsetof(UBP_LoginView_C, BtnGuest) == 0x0320);
static_assert(offsetof(UBP_LoginView_C, BtnPhone) == 0x0328);
static_assert(offsetof(UBP_LoginView_C, BtnSuper) == 0x0330);
static_assert(offsetof(UBP_LoginView_C, BtnTaptap) == 0x0338);
static_assert(offsetof(UBP_LoginView_C, Button) == 0x0340);
static_assert(offsetof(UBP_LoginView_C, Button4) == 0x0348);
static_assert(offsetof(UBP_LoginView_C, Button_Account) == 0x0350);
static_assert(offsetof(UBP_LoginView_C, Button_Notice) == 0x0358);
static_assert(offsetof(UBP_LoginView_C, Button_QuitGame) == 0x0360);
static_assert(offsetof(UBP_LoginView_C, Button_Setting) == 0x0368);
static_assert(offsetof(UBP_LoginView_C, Button_Super_Cancel) == 0x0370);
static_assert(offsetof(UBP_LoginView_C, Button_Super_Confirm) == 0x0378);
static_assert(offsetof(UBP_LoginView_C, Button_Support) == 0x0380);
static_assert(offsetof(UBP_LoginView_C, CheckBox_Jump) == 0x0388);
static_assert(offsetof(UBP_LoginView_C, Children_Level) == 0x0390);
static_assert(offsetof(UBP_LoginView_C, Children_Level5) == 0x0398);
static_assert(offsetof(UBP_LoginView_C, Children_Level_Btn) == 0x03A0);
static_assert(offsetof(UBP_LoginView_C, Children_Level_Btn_TW) == 0x03A8);
static_assert(offsetof(UBP_LoginView_C, EmailLayout) == 0x03B0);
static_assert(offsetof(UBP_LoginView_C, Emial_Icon) == 0x03B8);
static_assert(offsetof(UBP_LoginView_C, EnterBtn) == 0x03C0);
static_assert(offsetof(UBP_LoginView_C, Function_Block) == 0x03C8);
static_assert(offsetof(UBP_LoginView_C, Google_Icon) == 0x03D0);
static_assert(offsetof(UBP_LoginView_C, GoogleLayout) == 0x03D8);
static_assert(offsetof(UBP_LoginView_C, Guest_Icon) == 0x03E0);
static_assert(offsetof(UBP_LoginView_C, GuestLayout) == 0x03E8);
static_assert(offsetof(UBP_LoginView_C, HintLayout) == 0x03F0);
static_assert(offsetof(UBP_LoginView_C, Image_ServerStatus) == 0x03F8);
static_assert(offsetof(UBP_LoginView_C, Image_Switch) == 0x0400);
static_assert(offsetof(UBP_LoginView_C, Layout_Info_CN) == 0x0408);
static_assert(offsetof(UBP_LoginView_C, Layout_Info_Global) == 0x0410);
static_assert(offsetof(UBP_LoginView_C, Phone_Icon) == 0x0418);
static_assert(offsetof(UBP_LoginView_C, PhoneLayout) == 0x0420);
static_assert(offsetof(UBP_LoginView_C, Select_Block) == 0x0428);
static_assert(offsetof(UBP_LoginView_C, Select_Block_All) == 0x0430);
static_assert(offsetof(UBP_LoginView_C, ServerBtn) == 0x0438);
static_assert(offsetof(UBP_LoginView_C, SignIn_Block) == 0x0440);
static_assert(offsetof(UBP_LoginView_C, Super_Block) == 0x0448);
static_assert(offsetof(UBP_LoginView_C, SuperLayout) == 0x0450);
static_assert(offsetof(UBP_LoginView_C, TaptapLayout) == 0x0458);
static_assert(offsetof(UBP_LoginView_C, Text_ClientVersion) == 0x0460);
static_assert(offsetof(UBP_LoginView_C, Text_ServerCategory) == 0x0468);
static_assert(offsetof(UBP_LoginView_C, Text_ServerName) == 0x0470);
static_assert(offsetof(UBP_LoginView_C, Text_ServerStatus) == 0x0478);
static_assert(offsetof(UBP_LoginView_C, ViewCanv) == 0x0480);
static_assert(offsetof(UBP_LoginView_C, VirtualKeyboardZone_Super) == 0x0488);
static_assert(offsetof(UBP_LoginView_C, ServerListView) == 0x0490);
static_assert(offsetof(UBP_LoginView_C, Bus) == 0x0498);
static_assert(offsetof(UBP_LoginView_C, ZERO_MARGIN) == 0x04A0);
static_assert(offsetof(UBP_LoginView_C, STRECH_ANCHOR) == 0x04B0);
static_assert(offsetof(UBP_LoginView_C, Server) == 0x04C0);
static_assert(offsetof(UBP_LoginView_C, ProcessQueue) == 0x04E8);
static_assert(offsetof(UBP_LoginView_C, BgmPlayer) == 0x04F8);
static_assert(offsetof(UBP_LoginView_C, ServerProxy) == 0x0518);
static_assert(offsetof(UBP_LoginView_C, ShareConfirmChildrenNoticeView) == 0x0520);
static_assert(offsetof(UBP_LoginView_C, Outer) == 0x0528);
static_assert(offsetof(UBP_LoginView_C, MaintainWidget) == 0x0580);
static_assert(offsetof(UBP_LoginView_C, ServerStateText) == 0x0590);
static_assert(offsetof(UBP_LoginView_C, ServerStateImage) == 0x05A0);
static_assert(offsetof(UBP_LoginView_C, ServerStateColor) == 0x05B0);
static_assert(offsetof(UBP_LoginView_C, SecretInput) == 0x05C0);
static_assert(offsetof(UBP_LoginView_C, Secret) == 0x05D0);
static_assert(offsetof(UBP_HotPatchView_C, UberGraphFrame) == 0x02A8);
static_assert(offsetof(UBP_HotPatchView_C, Anim_Loading) == 0x02B0);
static_assert(offsetof(UBP_HotPatchView_C, Button_Cancel) == 0x02B8);
static_assert(offsetof(UBP_HotPatchView_C, ConnectText) == 0x02C0);
static_assert(offsetof(UBP_HotPatchView_C, ErrorMessagePanell) == 0x02C8);
static_assert(offsetof(UBP_HotPatchView_C, LoadingProgressBar) == 0x02D0);
static_assert(offsetof(UBP_HotPatchView_C, LocalizationOptPanel) == 0x02D8);
static_assert(offsetof(UBP_HotPatchView_C, ProgressFX) == 0x02E0);
static_assert(offsetof(UBP_HotPatchView_C, ProgressLayout) == 0x02E8);
static_assert(offsetof(UBP_HotPatchView_C, Text_Cancel) == 0x02F0);
static_assert(offsetof(UBP_HotPatchView_C, Text_ClientVersion) == 0x02F8);
static_assert(offsetof(UBP_HotPatchView_C, Text_Progress) == 0x0300);
static_assert(offsetof(UBP_HotPatchView_C, UserConfirmDownloadPanell) == 0x0308);
static_assert(offsetof(UBP_HotPatchView_C, Code) == 0x0310);
static_assert(offsetof(UBP_HotPatchView_C, Error_Message) == 0x0318);
static_assert(offsetof(UBP_HotPatchView_C, State) == 0x0328);
static_assert(offsetof(UBP_HotPatchView_C, In_Text) == 0x0330);

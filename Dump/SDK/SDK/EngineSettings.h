
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UConsoleSettings;
class UGameMapsSettings;
class UGameNetworkManagerSettings;
class UGameSessionSettings;
class UGeneralEngineSettings;
class UGeneralProjectSettings;
class UHudSettings;

/// Enum /Script/EngineSettings.ESubLevelStripMode
/// Size: 0x01 (1 bytes)
enum class ESubLevelStripMode : uint8_t
{
	ESubLevelStripMode__ExactClass                                                   = 0,
	ESubLevelStripMode__IsChildOf                                                    = 1
};

/// Enum /Script/EngineSettings.EFourPlayerSplitScreenType
/// Size: 0x01 (1 bytes)
enum class EFourPlayerSplitScreenType : uint8_t
{
	EFourPlayerSplitScreenType__Grid                                                 = 0,
	EFourPlayerSplitScreenType__Vertical                                             = 1,
	EFourPlayerSplitScreenType__Horizontal                                           = 2
};

/// Enum /Script/EngineSettings.EThreePlayerSplitScreenType
/// Size: 0x01 (1 bytes)
enum class EThreePlayerSplitScreenType : uint8_t
{
	EThreePlayerSplitScreenType__FavorTop                                            = 0,
	EThreePlayerSplitScreenType__FavorBottom                                         = 1,
	EThreePlayerSplitScreenType__Vertical                                            = 2,
	EThreePlayerSplitScreenType__Horizontal                                          = 3
};

/// Enum /Script/EngineSettings.ETwoPlayerSplitScreenType
/// Size: 0x01 (1 bytes)
enum class ETwoPlayerSplitScreenType : uint8_t
{
	ETwoPlayerSplitScreenType__Horizontal                                            = 0,
	ETwoPlayerSplitScreenType__Vertical                                              = 1
};

#pragma pack(pop)


static_assert(sizeof(FAutoCompleteCommand) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UConsoleSettings) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(FGameModeName) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UGameMapsSettings) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(UGameNetworkManagerSettings) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UGameSessionSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UGeneralEngineSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGeneralProjectSettings) == 0x0110); // 272 bytes (0x000028 - 0x000110)
static_assert(sizeof(UHudSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(offsetof(FAutoCompleteCommand, Command) == 0x0000);
static_assert(offsetof(FAutoCompleteCommand, desc) == 0x0010);
static_assert(offsetof(UConsoleSettings, ManualAutoCompleteList) == 0x0030);
static_assert(offsetof(UConsoleSettings, AutoCompleteMapPaths) == 0x0040);
static_assert(offsetof(UConsoleSettings, InputColor) == 0x0058);
static_assert(offsetof(UConsoleSettings, HistoryColor) == 0x005C);
static_assert(offsetof(UConsoleSettings, AutoCompleteCommandColor) == 0x0060);
static_assert(offsetof(UConsoleSettings, AutoCompleteCVarColor) == 0x0064);
static_assert(offsetof(UConsoleSettings, AutoCompleteFadedColor) == 0x0068);
static_assert(offsetof(FGameModeName, Name) == 0x0000);
static_assert(offsetof(FGameModeName, GameMode) == 0x0010);
static_assert(offsetof(UGameMapsSettings, LocalMapOptions) == 0x0028);
static_assert(offsetof(UGameMapsSettings, TransitionMap) == 0x0038);
static_assert(offsetof(UGameMapsSettings, TwoPlayerSplitscreenLayout) == 0x0051);
static_assert(offsetof(UGameMapsSettings, ThreePlayerSplitscreenLayout) == 0x0052);
static_assert(offsetof(UGameMapsSettings, FourPlayerSplitscreenLayout) == 0x0053);
static_assert(offsetof(UGameMapsSettings, GameInstanceClass) == 0x0058);
static_assert(offsetof(UGameMapsSettings, GameDefaultMap) == 0x0070);
static_assert(offsetof(UGameMapsSettings, ServerDefaultMap) == 0x0088);
static_assert(offsetof(UGameMapsSettings, GlobalDefaultGameMode) == 0x00A0);
static_assert(offsetof(UGameMapsSettings, GlobalDefaultServerGameMode) == 0x00B8);
static_assert(offsetof(UGameMapsSettings, GameModeMapPrefixes) == 0x00D0);
static_assert(offsetof(UGameMapsSettings, GameModeClassAliases) == 0x00E0);
static_assert(offsetof(UGeneralProjectSettings, CompanyName) == 0x0028);
static_assert(offsetof(UGeneralProjectSettings, CompanyDistinguishedName) == 0x0038);
static_assert(offsetof(UGeneralProjectSettings, CopyrightNotice) == 0x0048);
static_assert(offsetof(UGeneralProjectSettings, Description) == 0x0058);
static_assert(offsetof(UGeneralProjectSettings, Homepage) == 0x0068);
static_assert(offsetof(UGeneralProjectSettings, LicensingTerms) == 0x0078);
static_assert(offsetof(UGeneralProjectSettings, PrivacyPolicy) == 0x0088);
static_assert(offsetof(UGeneralProjectSettings, ProjectID) == 0x0098);
static_assert(offsetof(UGeneralProjectSettings, ProjectName) == 0x00A8);
static_assert(offsetof(UGeneralProjectSettings, ProjectVersion) == 0x00B8);
static_assert(offsetof(UGeneralProjectSettings, SupportContact) == 0x00C8);
static_assert(offsetof(UGeneralProjectSettings, ProjectDisplayedTitle) == 0x00D8);
static_assert(offsetof(UGeneralProjectSettings, ProjectDebugTitleInfo) == 0x00F0);
static_assert(offsetof(UHudSettings, DebugDisplay) == 0x0030);


/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/XDThemis.XDThemisBPLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UXDThemisBPLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/XDThemis.XDThemisBPLibrary.SetGameScene
	// void SetGameScene(FString SceneId);                                                                                      // [0x106c090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDThemis.XDThemisBPLibrary.SetGamePlayer
	// void SetGamePlayer(FString PlayerId);                                                                                    // [0x106c000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDThemis.XDThemisBPLibrary.ReportCustomException
	// void ReportCustomException(FString Name, FString reason, FString Message, bool isQuitApp);                               // [0x106be80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDThemis.XDThemisBPLibrary.LogReport
	// void LogReport(FString Format);                                                                                          // [0x106bdf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDThemis.XDThemisBPLibrary.InitSDKWithAppId
	// void InitSDKWithAppId(FString AppId);                                                                                    // [0x106bd60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDThemis.XDThemisBPLibrary.InitSDK
	// void InitSDK();                                                                                                          // [0x106bd40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDThemis.XDThemisBPLibrary.GetOneidData
	// FString GetOneidData();                                                                                                  // [0x106bcf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDThemis.XDThemisBPLibrary.GetHeartbeat
	// FString GetHeartbeat(int32_t Group, int64_t Seed);                                                                       // [0x106bc00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDThemis.XDThemisBPLibrary.EventTracking
	// void EventTracking(FString Format);                                                                                      // [0x106bb70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDThemis.XDThemisBPLibrary.DebugLog
	// void DebugLog(FString Format);                                                                                           // [0x106bae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDThemis.XDThemisBPLibrary.ConfigDebugMode
	// void ConfigDebugMode(bool bEnable);                                                                                      // [0x106ba60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDThemis.XDThemisBPLibrary.AddCustomField
	// void AddCustomField(FString StrKey, FString StrValue);                                                                   // [0x106b970] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/XDThemis.XDThemisSettings
/// Size: 0x0050 (0x000038 - 0x000088)
class UXDThemisSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   Native_AppID                                                OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   Oversea_AppID                                               OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   Branch                                                      OFFSET(getStruct<T>, {0x58, 16, 0, 0})
};



/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/XDMaterialLib.EtheriaConfigHotPatch
/// Size: 0x0000 (0x000028 - 0x000028)
class UEtheriaConfigHotPatch : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/XDMaterialLib.EtheriaConfigHotPatch.SaveConfigs
	// bool SaveConfigs(TMap<FString, FString>& Config);                                                                        // [0x1222400] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaConfigHotPatch.IsSavedConfigDirty
	// bool IsSavedConfigDirty();                                                                                               // [0x1222010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaConfigHotPatch.GetKWConfigAndSave
	// void GetKWConfigAndSave(bool ApplyConfig);                                                                               // [0x12218c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaConfigHotPatch.GetCurrentConfigs
	// TMap<FString, FString> GetCurrentConfigs();                                                                              // [0x12212f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaConfigHotPatch.ConvertConfigs
	// TMap<FString, FString> ConvertConfigs(FString Json);                                                                     // [0x1221060] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/XDMaterialLib.EtheriaGraphicQualityLibrary
/// Size: 0x0018 (0x000028 - 0x000040)
class UEtheriaGraphicQualityLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.StartTestGraphicQualitySettings
	// void StartTestGraphicQualitySettings();                                                                                  // [0x1224410] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetVsyncEnable
	// bool SetVsyncEnable(bool bIsEnable);                                                                                     // [0x1224370] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetVRSEnable
	// bool SetVRSEnable(bool bIsEnable);                                                                                       // [0x12242d0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetUpsamplingMethod
	// bool SetUpsamplingMethod(int32_t method);                                                                                // [0x1224230] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetShowcaseMode
	// void SetShowcaseMode(bool bIsEnable);                                                                                    // [0x1224110] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetSharpenStrength
	// bool SetSharpenStrength(int32_t Quality);                                                                                // [0x1223ff0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetShadowQuality
	// bool SetShadowQuality(int32_t Quality);                                                                                  // [0x1223ec0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetScreenPercentage
	// bool SetScreenPercentage(int32_t ScreenPercentage);                                                                      // [0x1223d90] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetRuntimeFpsLimit
	// void SetRuntimeFpsLimit(int32_t LimitValue);                                                                             // [0x1223b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetResolution
	// bool SetResolution(int32_t Quality);                                                                                     // [0x1223a10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetQualityLevel
	// void SetQualityLevel(int32_t QualityLevel);                                                                              // [0x1223980] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetPowerSavingMode
	// void SetPowerSavingMode(bool bIsEnable);                                                                                 // [0xc8b9b0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetPostprocessingQuality
	// bool SetPostprocessingQuality(int32_t Quality);                                                                          // [0x1223850] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetPCResolutions
	// bool SetPCResolutions(FIntPoint Resolution);                                                                             // [0x1223730] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetPCMovieMode
	// bool SetPCMovieMode(bool bIsEnable);                                                                                     // [0x1223690] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetModelQuality
	// bool SetModelQuality(int32_t Quality);                                                                                   // [0x1223560] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetMaterialQuality
	// bool SetMaterialQuality(int32_t Quality);                                                                                // [0x1223430] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetFullscreenMode
	// bool SetFullscreenMode(int32_t Mode);                                                                                    // [0x1222a00] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetFrameRate
	// bool SetFrameRate(int32_t FrameRate);                                                                                    // [0x12228e0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetEffectQuality
	// bool SetEffectQuality(int32_t Quality);                                                                                  // [0x1222840] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetDOFEnable
	// bool SetDOFEnable(bool bIsEnable);                                                                                       // [0x12227a0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetAntiAliasingQuality
	// bool SetAntiAliasingQuality(int32_t Quality);                                                                            // [0x1222670] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SetAntiAliasingMethod
	// bool SetAntiAliasingMethod(int32_t method);                                                                              // [0x1222540] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.SaveSettings
	// void SaveSettings();                                                                                                     // [0x1222520] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.QueryDeviceScore
	// void QueryDeviceScore();                                                                                                 // [0x12223e0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportSetVsyncEnable
	// bool IsSupportSetVsyncEnable();                                                                                          // [0x1222390] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportSetVRS
	// bool IsSupportSetVRS();                                                                                                  // [0x1222360] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportSetUpsamplingMethod
	// bool IsSupportSetUpsamplingMethod();                                                                                     // [0x1222330] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportSetSharpenStrength
	// bool IsSupportSetSharpenStrength();                                                                                      // [0x1222300] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportSetShadowQuality
	// bool IsSupportSetShadowQuality();                                                                                        // [0x12222d0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportSetScreenPercentage
	// bool IsSupportSetScreenPercentage();                                                                                     // [0x12222a0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportSetResolution
	// bool IsSupportSetResolution();                                                                                           // [0x1222270] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportSetPostprocessingQuality
	// bool IsSupportSetPostprocessingQuality();                                                                                // [0x1222240] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportSetPCResolution
	// bool IsSupportSetPCResolution();                                                                                         // [0x1222210] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportSetModelQuality
	// bool IsSupportSetModelQuality();                                                                                         // [0x12221e0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportSetMaterialQuality
	// bool IsSupportSetMaterialQuality();                                                                                      // [0x12221b0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportSetFullscreenMode
	// bool IsSupportSetFullscreenMode();                                                                                       // [0x1222180] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportSetFrameRate
	// bool IsSupportSetFrameRate();                                                                                            // [0x1222150] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportSetEffectQuality
	// bool IsSupportSetEffectQuality();                                                                                        // [0x1222120] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportSetDOFEnable
	// bool IsSupportSetDOFEnable();                                                                                            // [0x12220f0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportSetAntiAliasingQuality
	// bool IsSupportSetAntiAliasingQuality();                                                                                  // [0x12220c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportSetAntiAliasingMethod
	// bool IsSupportSetAntiAliasingMethod();                                                                                   // [0x1222090] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsSupportMSAAMethod
	// bool IsSupportMSAAMethod();                                                                                              // [0x1222060] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.IsAsyncShaderWarmupAllowed
	// bool IsAsyncShaderWarmupAllowed();                                                                                       // [0xa8c4d0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetVsyncEnable
	// bool GetVsyncEnable();                                                                                                   // [0x1221f70] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetVRSEnable
	// bool GetVRSEnable();                                                                                                     // [0x1221f40] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetUpsamplingMethod
	// int32_t GetUpsamplingMethod();                                                                                           // [0x1221f10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetSupportFrameRates
	// TArray<int32_t> GetSupportFrameRates();                                                                                  // [0x1221e90] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetSharpenStrength
	// int32_t GetSharpenStrength();                                                                                            // [0x1221e30] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetShadowQuality
	// int32_t GetShadowQuality();                                                                                              // [0x1221dd0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetScreenPercentage
	// int32_t GetScreenPercentage();                                                                                           // [0x1221d70] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetResolution
	// int32_t GetResolution();                                                                                                 // [0x1221c10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetQualityLevelForKWSDK
	// int32_t GetQualityLevelForKWSDK();                                                                                       // [0x1221be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetQualityLevel
	// int32_t GetQualityLevel();                                                                                               // [0x1221bb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetPostprocessingQuality
	// int32_t GetPostprocessingQuality();                                                                                      // [0x1221b80] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetPCResolutions
	// TArray<FIntPoint> GetPCResolutions();                                                                                    // [0x1221ad0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetPCResolution
	// FIntPoint GetPCResolution();                                                                                             // [0x1221a90] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetPCMovieMode
	// bool GetPCMovieMode();                                                                                                   // [0x1221a60] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetModelQuality
	// int32_t GetModelQuality();                                                                                               // [0x12219a0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetMaterialQuality
	// int32_t GetMaterialQuality();                                                                                            // [0x1221940] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetFullscreenMode
	// int32_t GetFullscreenMode();                                                                                             // [0x1221660] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetFrameRate
	// int32_t GetFrameRate();                                                                                                  // [0x1221580] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetEffectQuality
	// int32_t GetEffectQuality();                                                                                              // [0x1221550] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetDOFEnable
	// int32_t GetDOFEnable();                                                                                                  // [0x12213e0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetDefaultQualityLevel
	// int32_t GetDefaultQualityLevel();                                                                                        // [0x1221520] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetDefaultDisplayQualityLevel
	// int32_t GetDefaultDisplayQualityLevel();                                                                                 // [0x1221410] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetAntiAliasingQuality
	// int32_t GetAntiAliasingQuality();                                                                                        // [0x1221290] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.GetAntiAliasingMethod
	// int32_t GetAntiAliasingMethod();                                                                                         // [0x1221230] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.DumpQualitySettings
	// FString DumpQualitySettings();                                                                                           // [0x12211b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualityLibrary.CheckIsEmulator
	// bool CheckIsEmulator(FText& ErrorMsg, FText& Caption);                                                                   // [0x1220d00] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/XDMaterialLib.EtheriaGraphicQualitySettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UEtheriaGraphicQualitySettings : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.SetSharpenStrength
	// bool SetSharpenStrength(float SharpenStrength);                                                                          // [0x1224090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.SetShadowQuality
	// bool SetShadowQuality(int32_t Quality);                                                                                  // [0x1223f60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.SetScreenPercentage
	// bool SetScreenPercentage(int32_t ScreenPercentage);                                                                      // [0x1223e30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.SetResolution
	// bool SetResolution(int32_t Resolution);                                                                                  // [0x1223ab0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.SetPostprocessQuality
	// bool SetPostprocessQuality(int32_t Quality);                                                                             // [0x12237c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.SetModelQuality
	// bool SetModelQuality(int32_t Quality);                                                                                   // [0x1223600] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.SetMaterialQuality
	// bool SetMaterialQuality(int32_t Quality);                                                                                // [0x12234d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.SetFrameRate
	// bool SetFrameRate(float FrameRate);                                                                                      // [0x1222980] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.SetAntiAliasingQuality
	// bool SetAntiAliasingQuality(int32_t Quality);                                                                            // [0x1222710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.SetAntiAliasingMethod
	// bool SetAntiAliasingMethod(int32_t method);                                                                              // [0x12225e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.QueryDeivceScore
	// void QueryDeivceScore();                                                                                                 // [0x12223c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.GetSharpenStrength
	// float GetSharpenStrength();                                                                                              // [0x1221e60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.GetShadowQuality
	// int32_t GetShadowQuality();                                                                                              // [0x1221e00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.GetScreenPercentage
	// int32_t GetScreenPercentage();                                                                                           // [0x1221da0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.GetResolution
	// int32_t GetResolution();                                                                                                 // [0x1221c40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.GetPostprocessQuality
	// int32_t GetPostprocessQuality();                                                                                         // [0x1221b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.GetModelQuality
	// int32_t GetModelQuality();                                                                                               // [0x12219d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.GetMaterialQuality
	// int32_t GetMaterialQuality();                                                                                            // [0x1221970] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.GetFrameRates
	// TArray<int32_t> GetFrameRates();                                                                                         // [0x12215e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.GetFrameRate
	// float GetFrameRate();                                                                                                    // [0x12215b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.GetDefaultGraphicQuality
	// int32_t GetDefaultGraphicQuality(int32_t& SocScore, int32_t& GpuScore);                                                  // [0x1221440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.GetAntiAliasingQuality
	// int32_t GetAntiAliasingQuality();                                                                                        // [0x12212c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicQualitySettings.GetAntiAliasingMethod
	// int32_t GetAntiAliasingMethod();                                                                                         // [0x1221260] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/XDMaterialLib.QualityLevelSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FQualityLevelSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   ResolutionQuality                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ScreenPercentage                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   TargetFPS                                                   OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ShadowQuality                                               OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaterialQuality                                             OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   PostprocessQuality                                          OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   AntiAliasingMethod                                          OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   AntiAliasingQuality                                         OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   ModelQuality                                                OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   EffectQuality                                               OFFSET(get<int32_t>, {0x24, 4, 0, 0})
};

/// Class /Script/XDMaterialLib.EtheriaGraphicSettingConfigs
/// Size: 0x0070 (0x000028 - 0x000098)
class UEtheriaGraphicSettingConfigs : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FQualityLevelSettings>)             MaliQualityLevelSetting                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FQualityLevelSettings>)             AdernoQualityLevelSetting                                   OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FQualityLevelSettings>)             AndroidQualityLevelSetting                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FQualityLevelSettings>)             IOSQualityLevelSetting                                      OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FQualityLevelSettings>)             PCQualityLevelSetting                                       OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<float>)                             ResolutionQualitySetting                                    OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<float>)                             ResolutionQualityScaleSetting                               OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/XDMaterialLib.EtheriaGraphicUserSettings
/// Size: 0x0060 (0x000120 - 0x000180)
class UEtheriaGraphicUserSettings : public UGameUserSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(class UEtheriaGraphicSettingConfigs*)      configs                                                     OFFSET(get<T>, {0x120, 8, 0, 0})
	DMember(int32_t)                                   GameConfigVersion                                           OFFSET(get<int32_t>, {0x128, 4, 0, 0})
	DMember(int32_t)                                   GameQualityLevel                                            OFFSET(get<int32_t>, {0x12C, 4, 0, 0})
	DMember(int32_t)                                   GameResolutionQuality                                       OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	DMember(int32_t)                                   GameResolutionScale                                         OFFSET(get<int32_t>, {0x134, 4, 0, 0})
	DMember(int32_t)                                   GameAntiAliasingMethod                                      OFFSET(get<int32_t>, {0x138, 4, 0, 0})
	DMember(int32_t)                                   GameModelQuality                                            OFFSET(get<int32_t>, {0x13C, 4, 0, 0})
	DMember(int32_t)                                   GameParticleQuality                                         OFFSET(get<int32_t>, {0x140, 4, 0, 0})
	DMember(int32_t)                                   GameMaterialQuality                                         OFFSET(get<int32_t>, {0x144, 4, 0, 0})
	DMember(int32_t)                                   GameAntiAliasingQuality                                     OFFSET(get<int32_t>, {0x148, 4, 0, 0})
	DMember(int32_t)                                   GamePostprocessQuality                                      OFFSET(get<int32_t>, {0x14C, 4, 0, 0})
	DMember(int32_t)                                   GameShadowQuality                                           OFFSET(get<int32_t>, {0x150, 4, 0, 0})
	DMember(int32_t)                                   GameUpsamplingMethod                                        OFFSET(get<int32_t>, {0x154, 4, 0, 0})
	DMember(int32_t)                                   GameSharpenStrength                                         OFFSET(get<int32_t>, {0x158, 4, 0, 0})
	DMember(bool)                                      GameEnableVRS                                               OFFSET(get<bool>, {0x15C, 1, 0, 0})
	DMember(int32_t)                                   GameTargetFPS                                               OFFSET(get<int32_t>, {0x160, 4, 0, 0})
	DMember(int32_t)                                   GameEnableDOF                                               OFFSET(get<int32_t>, {0x164, 4, 0, 0})
	DMember(int32_t)                                   GameEnableOutline                                           OFFSET(get<int32_t>, {0x168, 4, 0, 0})
	DMember(int32_t)                                   GameMovieMode                                               OFFSET(get<int32_t>, {0x16C, 4, 0, 0})
	DMember(float)                                     ContentScaleFactor                                          OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(bool)                                      GameEnableMobileSSR                                         OFFSET(get<bool>, {0x174, 1, 0, 0})
	DMember(int32_t)                                   RuntimeFpsLimit                                             OFFSET(get<int32_t>, {0x178, 4, 0, 0})


	/// Functions
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetShowcaseMode
	// void SetShowcaseMode(bool bIsEnable);                                                                                    // [0x12241a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetRuntimeFpsLimit
	// void SetRuntimeFpsLimit(int32_t LimitValue);                                                                             // [0x1223bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetPowerSavingMode
	// void SetPowerSavingMode(bool bIsEnable);                                                                                 // [0x12238f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetGameUpsamplingMethod
	// void SetGameUpsamplingMethod(int32_t method);                                                                            // [0x12233a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetGameTargetFPS
	// void SetGameTargetFPS(int32_t InFPS);                                                                                    // [0x1223310] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetGameSharpenStrength
	// void SetGameSharpenStrength(int32_t InStrength);                                                                         // [0x1223280] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetGameShadowQuality
	// void SetGameShadowQuality(int32_t InQuality);                                                                            // [0x12231f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetGameResolutionScale
	// void SetGameResolutionScale(int32_t Scale);                                                                              // [0x1223160] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetGameResolutionQuality
	// void SetGameResolutionQuality(int32_t InQuality);                                                                        // [0x12230d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetGameQualityLevel
	// void SetGameQualityLevel(int32_t InGameQualityLevel);                                                                    // [0x1223040] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetGamePostprocessQuality
	// void SetGamePostprocessQuality(int32_t InQuality);                                                                       // [0x1222fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetGameParticleQuality
	// void SetGameParticleQuality(int32_t InQuality);                                                                          // [0x1222f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetGameMovieMode
	// void SetGameMovieMode(int32_t InMovieMode);                                                                              // [0x1222e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetGameModelQuality
	// void SetGameModelQuality(int32_t InQuality);                                                                             // [0x1222e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetGameMaterialQuality
	// void SetGameMaterialQuality(int32_t InQuality);                                                                          // [0x1222d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetGameEnableVRS
	// void SetGameEnableVRS(bool InEnable);                                                                                    // [0x1222ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetGameEnableMobileSSR
	// void SetGameEnableMobileSSR(bool bEnable);                                                                               // [0x1222c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetGameEnableDOF
	// void SetGameEnableDOF(int32_t bEnable);                                                                                  // [0x1222bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetGameAntiAnalisingQuality
	// void SetGameAntiAnalisingQuality(int32_t InQuality);                                                                     // [0x1222b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.SetGameAntiAliasingMethod
	// void SetGameAntiAliasingMethod(int32_t InMethod);                                                                        // [0x1222aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.IsShowcaseMode
	// bool IsShowcaseMode();                                                                                                   // [0x1222040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.IsPowerSavingMode
	// bool IsPowerSavingMode();                                                                                                // [0x1221ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.GetGameUpsamplingMethod
	// int32_t GetGameUpsamplingMethod();                                                                                       // [0x12218a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.GetGameTargetFPS
	// int32_t GetGameTargetFPS();                                                                                              // [0x1221880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.GetGameSharpenStrength
	// int32_t GetGameSharpenStrength();                                                                                        // [0x1221860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.GetGameShadowQuality
	// int32_t GetGameShadowQuality();                                                                                          // [0x1221840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.GetGameResolutionScale
	// int32_t GetGameResolutionScale();                                                                                        // [0x1221820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.GetGameResolutionQuality
	// int32_t GetGameResolutionQuality();                                                                                      // [0x1221800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.GetGameQualityLevel
	// int32_t GetGameQualityLevel();                                                                                           // [0x12217e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.GetGamePostprocessQuality
	// int32_t GetGamePostprocessQuality();                                                                                     // [0x12217c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.GetGameParticleQuality
	// int32_t GetGameParticleQuality();                                                                                        // [0x12217a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.GetGameMovieMode
	// int32_t GetGameMovieMode();                                                                                              // [0x1221780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.GetGameModelQuality
	// int32_t GetGameModelQuality();                                                                                           // [0x1221760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.GetGameMaterialQuality
	// int32_t GetGameMaterialQuality();                                                                                        // [0x1221740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.GetGameEnableVRS
	// bool GetGameEnableVRS();                                                                                                 // [0x1221720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.GetGameEnableMobileSSR
	// int32_t GetGameEnableMobileSSR();                                                                                        // [0x1221700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.GetGameEnableDOF
	// int32_t GetGameEnableDOF();                                                                                              // [0x12216e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.GetGameAntiAliasingQuality
	// int32_t GetGameAntiAliasingQuality();                                                                                    // [0x12216c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/XDMaterialLib.EtheriaGraphicUserSettings.GetGameAntiAliasingMethod
	// int32_t GetGameAntiAliasingMethod();                                                                                     // [0x1221690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/XDMaterialLib.MaterialWarmupActor
/// Size: 0x0000 (0x000220 - 0x000220)
class AMaterialWarmupActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:


	/// Functions
	// Function /Script/XDMaterialLib.MaterialWarmupActor.WarmupParticleMaterial
	// void WarmupParticleMaterial(class UMaterialInterface* Material, int32_t QualityLevel);                                   // [0x1224780] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.MaterialWarmupActor.WarmupMaterial
	// void WarmupMaterial(class UMaterialInterface* Material, FName& VertexFactoryName, FName& VertexTypeName, FName& PixelTypeName, int32_t QualityLevel); // [0x12245b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XDMaterialLib.MaterialWarmupActor.WarmupEnvironmentMaterial
	// void WarmupEnvironmentMaterial(class UMaterialInterface* Material, int32_t QualityLevel);                                // [0x12244f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.MaterialWarmupActor.WarmupCharacterMaterial
	// void WarmupCharacterMaterial(class UMaterialInterface* Material, int32_t QualityLevel);                                  // [0x1224430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.MaterialWarmupActor.GetNumberOfAsynchronousShaderCompilations
	// int32_t GetNumberOfAsynchronousShaderCompilations();                                                                     // [0x1221a00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/XDMaterialLib.MaterialWarmupMgrActor
/// Size: 0x0068 (0x000220 - 0x000288)
class AMaterialWarmupMgrActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	DMember(float)                                     WarmUpProgress                                              OFFSET(get<float>, {0x220, 4, 0, 0})
	DMember(float)                                     AdditionStateOverrideTime                                   OFFSET(get<float>, {0x224, 4, 0, 0})
	DMember(float)                                     SmoothOverrideTimeScale                                     OFFSET(get<float>, {0x228, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  Event_OnWarmUpFinish                                        OFFSET(getStruct<T>, {0x230, 16, 0, 0})
	DMember(bool)                                      IsWarmingUp                                                 OFFSET(get<bool>, {0x240, 1, 0, 0})


	/// Functions
	// Function /Script/XDMaterialLib.MaterialWarmupMgrActor.StartWarmUp
	// void StartWarmUp(FString WarmupType);                                                                                    // [0x198a600] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.MaterialWarmupMgrActor.SetSaveGameValueWithType
	// void SetSaveGameValueWithType(FString WarmupType, bool Value);                                                           // [0x1223c60] Final|Native|Protected|BlueprintCallable 
	// Function /Script/XDMaterialLib.MaterialWarmupMgrActor.NeedWarmup
	// bool NeedWarmup(FString WarmupType);                                                                                     // [0x198a600] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.MaterialWarmupMgrActor.Initialize
	// void Initialize();                                                                                                       // [0x198a600] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.MaterialWarmupMgrActor.GetSaveGameValueWithType
	// bool GetSaveGameValueWithType(FString WarmupType);                                                                       // [0x1221c70] Final|Native|Protected|BlueprintCallable 
	// Function /Script/XDMaterialLib.MaterialWarmupMgrActor.GetOrCreateInstance
	// class AMaterialWarmupMgrActor* GetOrCreateInstance();                                                                    // [0x1221a30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.MaterialWarmupMgrActor.ClearWarmupCache
	// void ClearWarmupCache(FString DirectPath);                                                                               // [0x1220f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/XDMaterialLib.MaterialWarmupMgrActor.ClearSaveGameWithType
	// void ClearSaveGameWithType(FString WarmupType);                                                                          // [0x1220e80] Final|Native|Protected|BlueprintCallable 
	// Function /Script/XDMaterialLib.MaterialWarmupMgrActor.ClearAllSaveGame
	// void ClearAllSaveGame();                                                                                                 // [0x198a600] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/XDMaterialLib.MaterialWarmupMgrActor.CallWarmUpFinish
	// void CallWarmUpFinish(FString WarmupType);                                                                               // [0x1220c60] Final|Native|Protected|BlueprintCallable 
	// Function /Script/XDMaterialLib.MaterialWarmupMgrActor.BPUpdate
	// void BPUpdate(float DeltaSeconds);                                                                                       // [0x198a600] Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/XDMaterialLib.SceneWidgetPPComponent
/// Size: 0x0008 (0x0001F8 - 0x000200)
class USceneWidgetPPComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:


	/// Functions
	// Function /Script/XDMaterialLib.SceneWidgetPPComponent.GetWhiteTint
	// float GetWhiteTint();                                                                                                    // [0x198a600] Event|Public|BlueprintEvent|Const 
	// Function /Script/XDMaterialLib.SceneWidgetPPComponent.GetWhiteTemp
	// float GetWhiteTemp();                                                                                                    // [0x198a600] Event|Public|BlueprintEvent|Const 
	// Function /Script/XDMaterialLib.SceneWidgetPPComponent.GetWhiteBalanceMatrix
	// FMatrix GetWhiteBalanceMatrix();                                                                                         // [0x1221fa0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};


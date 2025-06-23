
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlueprintsAccessToGConfigBPLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.SetVector4
	// void SetVector4(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, FVector4& Vector4Value);      // [0x111b790] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.SetVector2D
	// void SetVector2D(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, FVector2D& Vector2DValue);   // [0x111b620] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.SetVector
	// void SetVector(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, FVector& VectorValue);         // [0x111b910] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.SetText
	// void SetText(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, FText TextValue);                // [0x111b460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.SetString
	// void SetString(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, FString StringValue);          // [0x111b2e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.SetRotator
	// void SetRotator(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, FRotator& RotatorValue);      // [0x111b170] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.SetInt
	// void SetInt(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, int32_t IntValue);                // [0x111b000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.SetFloat
	// void SetFloat(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, float FloatValue);              // [0x111ae90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.SetColor
	// void SetColor(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, FColor& ColorValue);            // [0x111ad20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.SetBool
	// void SetBool(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, bool BoolValue);                 // [0x111abb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.SetArray
	// void SetArray(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, TArray<FString>& ArrayValue);   // [0x111aa00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.GetVector4
	// FVector4 GetVector4(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, bool& bWasFound);         // [0x111a6a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.GetVector2D
	// FVector2D GetVector2D(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, bool& bWasFound);       // [0x111a500] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.GetVector
	// FVector GetVector(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, bool& bWasFound);           // [0x111a850] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.GetText
	// FText GetText(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, bool& bWasFound);               // [0x111a330] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.GetString
	// FString GetString(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, bool& bWasFound);           // [0x111a170] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.GetRotator
	// FRotator GetRotator(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, bool& bWasFound);         // [0x1119fc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.GetInt
	// int32_t GetInt(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, bool& bWasFound);              // [0x1119e30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.GetFloat
	// float GetFloat(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, bool& bWasFound);              // [0x1119ca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.GetColor
	// FColor GetColor(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, bool& bWasFound);             // [0x1119b10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.GetBool
	// bool GetBool(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, bool& bWasFound);                // [0x1119980] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.GetArray
	// TArray<FString> GetArray(EConfigIniFileNames ConfigFile, FString SectionName, FString PropertyName, bool& bWasFound);    // [0x1119770] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlueprintsAccessToGConfig.BlueprintsAccessToGConfigBPLibrary.Flush
	// void Flush(EConfigIniFileNames ConfigFile, bool bRefreshInConfigSystem);                                                 // [0x11196b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Enum /Script/BlueprintsAccessToGConfig.EConfigIniFileNames
/// Size: 0x16
enum class EConfigIniFileNames : uint8_t
{
	EConfigIniFileNames__GEngineIni                                                  = 0,
	EConfigIniFileNames__GGameIni                                                    = 1,
	EConfigIniFileNames__GGameUserSettingsIni                                        = 2,
	EConfigIniFileNames__GEditorIni                                                  = 3,
	EConfigIniFileNames__GEditorKeyBindingsIni                                       = 4,
	EConfigIniFileNames__GEditorLayoutIni                                            = 5,
	EConfigIniFileNames__GEditorSettingsIni                                          = 6,
	EConfigIniFileNames__GEditorPerProjectIni                                        = 7,
	EConfigIniFileNames__GCompatIni                                                  = 8,
	EConfigIniFileNames__GLightmassIni                                               = 9,
	EConfigIniFileNames__GScalabilityIni                                             = 10,
	EConfigIniFileNames__GHardwareIni                                                = 11,
	EConfigIniFileNames__GInputIni                                                   = 12,
	EConfigIniFileNames__GRuntimeOptionsIni                                          = 13,
	EConfigIniFileNames__GInstallBundleIni                                           = 14,
	EConfigIniFileNames__GDeviceProfilesIni                                          = 15
};


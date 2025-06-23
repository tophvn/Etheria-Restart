
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LevelSequence

/// Class /Script/DatasmithContent.DatasmithObjectTemplate
/// Size: 0x0008 (0x000028 - 0x000030)
class UDatasmithObjectTemplate : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/DatasmithContent.DatasmithActorTemplate
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TSet<FName>)                               Layers                                                      OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TSet<FName>)                               Tags                                                        OFFSET(get<T>, {0x80, 80, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithAdditionalData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithAdditionalData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DatasmithContent.DatasmithAreaLightActor
/// Size: 0x0058 (0x000220 - 0x000278)
class ADatasmithAreaLightActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	CMember(EDatasmithAreaLightActorType)              LightType                                                   OFFSET(get<T>, {0x220, 1, 0, 0})
	CMember(EDatasmithAreaLightActorShape)             LightShape                                                  OFFSET(get<T>, {0x221, 1, 0, 0})
	SMember(FVector2D)                                 Dimensions                                                  OFFSET(getStruct<T>, {0x224, 8, 0, 0})
	DMember(float)                                     Intensity                                                   OFFSET(get<float>, {0x22C, 4, 0, 0})
	CMember(ELightUnits)                               IntensityUnits                                              OFFSET(get<T>, {0x230, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x234, 16, 0, 0})
	DMember(float)                                     Temperature                                                 OFFSET(get<float>, {0x244, 4, 0, 0})
	CMember(class UTextureLightProfile*)               IESTexture                                                  OFFSET(get<T>, {0x248, 8, 0, 0})
	DMember(bool)                                      bUseIESBrightness                                           OFFSET(get<bool>, {0x250, 1, 0, 0})
	DMember(float)                                     IESBrightnessScale                                          OFFSET(get<float>, {0x254, 4, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x258, 12, 0, 0})
	DMember(float)                                     SourceRadius                                                OFFSET(get<float>, {0x264, 4, 0, 0})
	DMember(float)                                     SourceLength                                                OFFSET(get<float>, {0x268, 4, 0, 0})
	DMember(float)                                     AttenuationRadius                                           OFFSET(get<float>, {0x26C, 4, 0, 0})
	DMember(float)                                     SpotlightInnerAngle                                         OFFSET(get<float>, {0x270, 4, 0, 0})
	DMember(float)                                     SpotlightOuterAngle                                         OFFSET(get<float>, {0x274, 4, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithAreaLightActorTemplate
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(EDatasmithAreaLightActorType)              LightType                                                   OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(EDatasmithAreaLightActorShape)             LightShape                                                  OFFSET(get<T>, {0x31, 1, 0, 0})
	SMember(FVector2D)                                 Dimensions                                                  OFFSET(getStruct<T>, {0x34, 8, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x3C, 16, 0, 0})
	DMember(float)                                     Intensity                                                   OFFSET(get<float>, {0x4C, 4, 0, 0})
	CMember(ELightUnits)                               IntensityUnits                                              OFFSET(get<T>, {0x50, 1, 0, 0})
	DMember(float)                                     Temperature                                                 OFFSET(get<float>, {0x54, 4, 0, 0})
	CMember(TWeakObjectPtr<class UTextureLightProfile*>) IESTexture                                                OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(bool)                                      bUseIESBrightness                                           OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(float)                                     IESBrightnessScale                                          OFFSET(get<float>, {0x84, 4, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x88, 12, 0, 0})
	DMember(float)                                     SourceRadius                                                OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     SourceLength                                                OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     AttenuationRadius                                           OFFSET(get<float>, {0x9C, 4, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithAssetImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithAssetImportData : public UAssetImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshCADImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DatasmithContent.DatasmithSceneImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithSceneImportData : public UAssetImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DatasmithContent.DatasmithTranslatedSceneImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DatasmithContent.DatasmithCADImportSceneData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DatasmithContent.DatasmithMDLSceneImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DatasmithContent.DatasmithGLTFSceneImportData
/// Size: 0x0048 (0x000028 - 0x000070)
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   Generator                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(float)                                     Version                                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FString)                                   Author                                                      OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   License                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   Source                                                      OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshGLTFImportData
/// Size: 0x0010 (0x000028 - 0x000038)
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   SourceMeshName                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithFBXSceneImportData
/// Size: 0x0020 (0x000028 - 0x000048)
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bGenerateLightmapUVs                                        OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FString)                                   TexturesDir                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(char)                                      IntermediateSerialization                                   OFFSET(get<char>, {0x40, 1, 0, 0})
	DMember(bool)                                      bColorizeMaterials                                          OFFSET(get<bool>, {0x41, 1, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithDeltaGenAssetImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DatasmithContent.DatasmithDeltaGenSceneImportData
/// Size: 0x0048 (0x000048 - 0x000090)
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bMergeNodes                                                 OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bOptimizeDuplicatedNodes                                    OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      bRemoveInvisibleNodes                                       OFFSET(get<bool>, {0x4A, 1, 0, 0})
	DMember(bool)                                      bSimplifyNodeHierarchy                                      OFFSET(get<bool>, {0x4B, 1, 0, 0})
	DMember(bool)                                      bImportVar                                                  OFFSET(get<bool>, {0x4C, 1, 0, 0})
	SMember(FString)                                   VarPath                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bImportPos                                                  OFFSET(get<bool>, {0x60, 1, 0, 0})
	SMember(FString)                                   PosPath                                                     OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bImportTml                                                  OFFSET(get<bool>, {0x78, 1, 0, 0})
	SMember(FString)                                   TmlPath                                                     OFFSET(getStruct<T>, {0x80, 16, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithVREDAssetImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DatasmithContent.DatasmithVREDSceneImportData
/// Size: 0x0060 (0x000048 - 0x0000A8)
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(bool)                                      bMergeNodes                                                 OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bOptimizeDuplicatedNodes                                    OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      bImportMats                                                 OFFSET(get<bool>, {0x4A, 1, 0, 0})
	SMember(FString)                                   MatsPath                                                    OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bImportVar                                                  OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bCleanVar                                                   OFFSET(get<bool>, {0x61, 1, 0, 0})
	SMember(FString)                                   VarPath                                                     OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bImportLightInfo                                            OFFSET(get<bool>, {0x78, 1, 0, 0})
	SMember(FString)                                   LightInfoPath                                               OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bImportClipInfo                                             OFFSET(get<bool>, {0x90, 1, 0, 0})
	SMember(FString)                                   ClipInfoPath                                                OFFSET(getStruct<T>, {0x98, 16, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithIFCSceneImportData
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshIFCImportData
/// Size: 0x0010 (0x000028 - 0x000038)
class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   SourceGlobalId                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithAssetUserData
/// Size: 0x0050 (0x000028 - 0x000078)
class UDatasmithAssetUserData : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FName, FString>)                      MetaData                                                    OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Struct /Script/DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
/// Size: 0x0030 (0x000000 - 0x000030)
class FDatasmithCameraLookatTrackingSettingsTemplate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bEnableLookAtTracking                                       OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bAllowRoll                                                  OFFSET(get<bool>, {0x0, 1, 1, 1})
	CMember(TWeakObjectPtr<class AActor*>)             ActorToTrack                                                OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithCineCameraActorTemplate
/// Size: 0x0030 (0x000030 - 0x000060)
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FDatasmithCameraLookatTrackingSettingsTemplate) LookatTrackingSettings                                 OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
/// Size: 0x0008 (0x000000 - 0x000008)
class FDatasmithCameraFilmbackSettingsTemplate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     SensorWidth                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     SensorHeight                                                OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DatasmithContent.DatasmithCameraLensSettingsTemplate
/// Size: 0x0004 (0x000000 - 0x000004)
class FDatasmithCameraLensSettingsTemplate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     MaxFStop                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/DatasmithContent.DatasmithCameraFocusSettingsTemplate
/// Size: 0x0008 (0x000000 - 0x000008)
class FDatasmithCameraFocusSettingsTemplate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(ECameraFocusMethod)                        FocusMethod                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     ManualFocusDistance                                         OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DatasmithContent.DatasmithPostProcessSettingsTemplate
/// Size: 0x0040 (0x000000 - 0x000040)
class FDatasmithPostProcessSettingsTemplate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bOverride_WhiteTemp                                         OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bOverride_ColorSaturation                                   OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bOverride_VignetteIntensity                                 OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(bool)                                      bOverride_FilmWhitePoint                                    OFFSET(get<bool>, {0x0, 1, 1, 3})
	DMember(bool)                                      bOverride_AutoExposureMethod                                OFFSET(get<bool>, {0x0, 1, 1, 4})
	DMember(bool)                                      bOverride_CameraISO                                         OFFSET(get<bool>, {0x0, 1, 1, 5})
	DMember(bool)                                      bOverride_CameraShutterSpeed                                OFFSET(get<bool>, {0x0, 1, 1, 6})
	DMember(bool)                                      bOverride_DepthOfFieldFstop                                 OFFSET(get<bool>, {0x4, 1, 1, 0})
	DMember(float)                                     WhiteTemp                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     VignetteIntensity                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FLinearColor)                              FilmWhitePoint                                              OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector4)                                  ColorSaturation                                             OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TEnumAsByte<EAutoExposureMethod>)          AutoExposureMethod                                          OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     CameraISO                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     CameraShutterSpeed                                          OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     DepthOfFieldFstop                                           OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithCineCameraComponentTemplate
/// Size: 0x0060 (0x000030 - 0x000090)
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FDatasmithCameraFilmbackSettingsTemplate)  FilmbackSettings                                            OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	SMember(FDatasmithCameraLensSettingsTemplate)      LensSettings                                                OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	SMember(FDatasmithCameraFocusSettingsTemplate)     FocusSettings                                               OFFSET(getStruct<T>, {0x3C, 8, 0, 0})
	DMember(float)                                     CurrentFocalLength                                          OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     CurrentAperture                                             OFFSET(get<float>, {0x48, 4, 0, 0})
	SMember(FDatasmithPostProcessSettingsTemplate)     PostProcessSettings                                         OFFSET(getStruct<T>, {0x50, 64, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithContentBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
	// FString GetDatasmithUserDataValueForKey(class UObject* Object, FName Key);                                               // [0xa1e1d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
	// void GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, FString StringToMatch, TArray<FName>& OutKeys, TArray<FString>& OutValues); // [0xa1e010] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
	// class UDatasmithAssetUserData* GetDatasmithUserData(class UObject* Object);                                              // [0xa1df80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DatasmithContent.DatasmithCustomActionBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UDatasmithCustomActionBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/DatasmithContent.DatasmithDecalComponentTemplate
/// Size: 0x0018 (0x000030 - 0x000048)
class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   SortOrder                                                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FVector)                                   DecalSize                                                   OFFSET(getStruct<T>, {0x34, 12, 0, 0})
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithImportedSequencesActor
/// Size: 0x0010 (0x000220 - 0x000230)
class ADatasmithImportedSequencesActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(TArray<class ULevelSequence*>)             ImportedSequences                                           OFFSET(get<T>, {0x220, 16, 0, 0})


	/// Functions
	// Function /Script/DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
	// void PlayLevelSequence(class ULevelSequence* SequenceToPlay);                                                            // [0xa1e2e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DatasmithContent.DatasmithOptionsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UDatasmithOptionsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/DatasmithContent.DatasmithTessellationOptions
/// Size: 0x0010 (0x000000 - 0x000010)
class FDatasmithTessellationOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     ChordTolerance                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxEdgeLength                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     NormalTolerance                                             OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EDatasmithCADStitchingTechnique)           StitchingTechnique                                          OFFSET(get<T>, {0xC, 1, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithCommonTessellationOptions
/// Size: 0x0010 (0x000028 - 0x000038)
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FDatasmithTessellationOptions)             options                                                     OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/DatasmithContent.DatasmithAssetImportOptions
/// Size: 0x0008 (0x000000 - 0x000008)
class FDatasmithAssetImportOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     PackagePath                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/DatasmithContent.DatasmithStaticMeshImportOptions
/// Size: 0x0004 (0x000000 - 0x000004)
class FDatasmithStaticMeshImportOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	CMember(EDatasmithImportLightmapMin)               MinLightmapResolution                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EDatasmithImportLightmapMax)               MaxLightmapResolution                                       OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(bool)                                      bGenerateLightmapUVs                                        OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bRemoveDegenerates                                          OFFSET(get<bool>, {0x3, 1, 0, 0})
};

/// Struct /Script/DatasmithContent.DatasmithImportBaseOptions
/// Size: 0x0014 (0x000000 - 0x000014)
class FDatasmithImportBaseOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(EDatasmithImportScene)                     SceneHandling                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIncludeGeometry                                            OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bIncludeMaterial                                            OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bIncludeLight                                               OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bIncludeCamera                                              OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bIncludeAnimation                                           OFFSET(get<bool>, {0x5, 1, 0, 0})
	SMember(FDatasmithAssetImportOptions)              AssetOptions                                                OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FDatasmithStaticMeshImportOptions)         StaticMeshOptions                                           OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/DatasmithContent.DatasmithReimportOptions
/// Size: 0x0002 (0x000000 - 0x000002)
class FDatasmithReimportOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bUpdateActors                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bRespawnDeletedActors                                       OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithImportOptions
/// Size: 0x0050 (0x000028 - 0x000078)
class UDatasmithImportOptions : public UDatasmithOptionsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(EDatasmithImportSearchPackagePolicy)       SearchPackagePolicy                                         OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EDatasmithImportAssetConflictPolicy)       MaterialConflictPolicy                                      OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(EDatasmithImportAssetConflictPolicy)       TextureConflictPolicy                                       OFFSET(get<T>, {0x2A, 1, 0, 0})
	CMember(EDatasmithImportActorPolicy)               StaticMeshActorImportPolicy                                 OFFSET(get<T>, {0x2B, 1, 0, 0})
	CMember(EDatasmithImportActorPolicy)               LightImportPolicy                                           OFFSET(get<T>, {0x2C, 1, 0, 0})
	CMember(EDatasmithImportActorPolicy)               CameraImportPolicy                                          OFFSET(get<T>, {0x2D, 1, 0, 0})
	CMember(EDatasmithImportActorPolicy)               OtherActorImportPolicy                                      OFFSET(get<T>, {0x2E, 1, 0, 0})
	CMember(EDatasmithImportMaterialQuality)           MaterialQuality                                             OFFSET(get<T>, {0x2F, 1, 0, 0})
	SMember(FDatasmithImportBaseOptions)               BaseOptions                                                 OFFSET(getStruct<T>, {0x34, 20, 0, 0})
	SMember(FDatasmithReimportOptions)                 ReimportOptions                                             OFFSET(getStruct<T>, {0x48, 2, 0, 0})
	SMember(FString)                                   Filename                                                    OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   FilePath                                                    OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithLandscapeTemplate
/// Size: 0x0010 (0x000030 - 0x000040)
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UMaterialInterface*)                 LandscapeMaterial                                           OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   StaticLightingLOD                                           OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithLightComponentTemplate
/// Size: 0x0038 (0x000030 - 0x000068)
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(bool)                                      CastShadows                                                 OFFSET(get<bool>, {0x34, 1, 1, 0})
	DMember(bool)                                      bUseTemperature                                             OFFSET(get<bool>, {0x34, 1, 1, 1})
	DMember(bool)                                      bUseIESBrightness                                           OFFSET(get<bool>, {0x34, 1, 1, 2})
	DMember(float)                                     Intensity                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Temperature                                                 OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     IESBrightnessScale                                          OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FLinearColor)                              LightColor                                                  OFFSET(getStruct<T>, {0x44, 16, 0, 0})
	CMember(class UMaterialInterface*)                 LightFunctionMaterial                                       OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UTextureLightProfile*)               IESTexture                                                  OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Struct /Script/DatasmithContent.DatasmithStaticParameterSetTemplate
/// Size: 0x0050 (0x000000 - 0x000050)
class FDatasmithStaticParameterSetTemplate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, bool>)                         StaticSwitchParameters                                      OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithMaterialInstanceTemplate
/// Size: 0x0168 (0x000030 - 0x000198)
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(TWeakObjectPtr<class UMaterialInterface*>) ParentMaterial                                              OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TMap<FName, float>)                        ScalarParameterValues                                       OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 VectorParameterValues                                       OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TMap<FName, TWeakObjectPtr<UTexture*>>)    TextureParameterValues                                      OFFSET(get<T>, {0xF8, 80, 0, 0})
	SMember(FDatasmithStaticParameterSetTemplate)      StaticParameters                                            OFFSET(getStruct<T>, {0x148, 80, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithPointLightComponentTemplate
/// Size: 0x0010 (0x000030 - 0x000040)
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ELightUnits)                               IntensityUnits                                              OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     SourceRadius                                                OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     SourceLength                                                OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     AttenuationRadius                                           OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithPostProcessVolumeTemplate
/// Size: 0x0050 (0x000030 - 0x000080)
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FDatasmithPostProcessSettingsTemplate)     Settings                                                    OFFSET(getStruct<T>, {0x30, 64, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x70, 1, 1, 0})
	DMember(bool)                                      bUnbound                                                    OFFSET(get<bool>, {0x70, 1, 1, 1})
};

/// Class /Script/DatasmithContent.DatasmithScene
/// Size: 0x0008 (0x000028 - 0x000030)
class UDatasmithScene : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/DatasmithContent.DatasmithSceneActor
/// Size: 0x0058 (0x000220 - 0x000278)
class ADatasmithSceneActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	CMember(class UDatasmithScene*)                    Scene                                                       OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(TMap<FName, TWeakObjectPtr<AActor*>>)      RelatedActors                                               OFFSET(get<T>, {0x228, 80, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithSceneComponentTemplate
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FTransform)                                RelativeTransform                                           OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	CMember(TEnumAsByte<EComponentMobility>)           Mobility                                                    OFFSET(get<T>, {0x60, 1, 0, 0})
	CMember(TWeakObjectPtr<class USceneComponent*>)    AttachParent                                                OFFSET(get<T>, {0x68, 8, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x90, 1, 0, 0})
	CMember(TSet<FName>)                               Tags                                                        OFFSET(get<T>, {0x98, 80, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithSkyLightComponentTemplate
/// Size: 0x0010 (0x000030 - 0x000040)
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TEnumAsByte<ESkyLightSourceType>)          SourceType                                                  OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(int32_t)                                   CubemapResolution                                           OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	CMember(class UTextureCube*)                       Cubemap                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithSpotLightComponentTemplate
/// Size: 0x0008 (0x000030 - 0x000038)
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     InnerConeAngle                                              OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     OuterConeAngle                                              OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshComponentTemplate
/// Size: 0x0018 (0x000030 - 0x000048)
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UStaticMesh*)                        StaticMesh                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         OverrideMaterials                                           OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/DatasmithContent.DatasmithMeshSectionInfoTemplate
/// Size: 0x0004 (0x000000 - 0x000004)
class FDatasmithMeshSectionInfoTemplate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   MaterialIndex                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/DatasmithContent.DatasmithMeshSectionInfoMapTemplate
/// Size: 0x0050 (0x000000 - 0x000050)
class FDatasmithMeshSectionInfoMapTemplate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<uint32_t, FDatasmithMeshSectionInfoTemplate>) Map                                                 OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/DatasmithContent.DatasmithMeshBuildSettingsTemplate
/// Size: 0x0010 (0x000000 - 0x000010)
class FDatasmithMeshBuildSettingsTemplate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bUseMikkTSpace                                              OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bRecomputeNormals                                           OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bRecomputeTangents                                          OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(bool)                                      bRemoveDegenerates                                          OFFSET(get<bool>, {0x0, 1, 1, 3})
	DMember(bool)                                      bBuildAdjacencyBuffer                                       OFFSET(get<bool>, {0x0, 1, 1, 4})
	DMember(bool)                                      bUseHighPrecisionTangentBasis                               OFFSET(get<bool>, {0x0, 1, 1, 5})
	DMember(bool)                                      bUseFullPrecisionUVs                                        OFFSET(get<bool>, {0x0, 1, 1, 6})
	DMember(bool)                                      bGenerateLightmapUVs                                        OFFSET(get<bool>, {0x0, 1, 1, 7})
	DMember(int32_t)                                   MinLightmapResolution                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   SrcLightmapIndex                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   DstLightmapIndex                                            OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/DatasmithContent.DatasmithStaticMaterialTemplate
/// Size: 0x0010 (0x000000 - 0x000010)
class FDatasmithStaticMaterialTemplate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     MaterialSlotName                                            OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 MaterialInterface                                           OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshTemplate
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FDatasmithMeshSectionInfoMapTemplate)      SectionInfoMap                                              OFFSET(getStruct<T>, {0x30, 80, 0, 0})
	DMember(int32_t)                                   LightMapCoordinateIndex                                     OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   LightMapResolution                                          OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	CMember(TArray<FDatasmithMeshBuildSettingsTemplate>) BuildSettings                                             OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<FDatasmithStaticMaterialTemplate>)  StaticMaterials                                             OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/DatasmithContent.DatasmithRetessellationOptions
/// Size: 0x0004 (0x000010 - 0x000014)
class FDatasmithRetessellationOptions : public FDatasmithTessellationOptions
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(EDatasmithCADRetessellationRule)           RetessellationRule                                          OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Enum /Script/DatasmithContent.EDatasmithAreaLightActorType
/// Size: 0x03
enum class EDatasmithAreaLightActorType : uint8_t
{
	EDatasmithAreaLightActorType__Point                                              = 0,
	EDatasmithAreaLightActorType__Spot                                               = 1,
	EDatasmithAreaLightActorType__Rect                                               = 2
};

/// Enum /Script/DatasmithContent.EDatasmithAreaLightActorShape
/// Size: 0x05
enum class EDatasmithAreaLightActorShape : uint8_t
{
	EDatasmithAreaLightActorShape__Rectangle                                         = 0,
	EDatasmithAreaLightActorShape__Disc                                              = 1,
	EDatasmithAreaLightActorShape__Sphere                                            = 2,
	EDatasmithAreaLightActorShape__Cylinder                                          = 3,
	EDatasmithAreaLightActorShape__None                                              = 4
};

/// Enum /Script/DatasmithContent.EDatasmithCADRetessellationRule
/// Size: 0x02
enum class EDatasmithCADRetessellationRule : uint8_t
{
	EDatasmithCADRetessellationRule__All                                             = 0,
	EDatasmithCADRetessellationRule__SkipDeletedSurfaces                             = 1
};

/// Enum /Script/DatasmithContent.EDatasmithCADStitchingTechnique
/// Size: 0x03
enum class EDatasmithCADStitchingTechnique : uint8_t
{
	EDatasmithCADStitchingTechnique__StitchingNone                                   = 0,
	EDatasmithCADStitchingTechnique__StitchingHeal                                   = 1,
	EDatasmithCADStitchingTechnique__StitchingSew                                    = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportHierarchy
/// Size: 0x03
enum class EDatasmithImportHierarchy : uint8_t
{
	EDatasmithImportHierarchy__UseMultipleActors                                     = 0,
	EDatasmithImportHierarchy__UseSingleActor                                        = 1,
	EDatasmithImportHierarchy__UseOneBlueprint                                       = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportScene
/// Size: 0x03
enum class EDatasmithImportScene : uint8_t
{
	EDatasmithImportScene__NewLevel                                                  = 0,
	EDatasmithImportScene__CurrentLevel                                              = 1,
	EDatasmithImportScene__AssetsOnly                                                = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportLightmapMax
/// Size: 0x07
enum class EDatasmithImportLightmapMax : uint8_t
{
	EDatasmithImportLightmapMax__LIGHTMAP                                            = 0,
	EDatasmithImportLightmapMax__LIGHTMAP2                                           = 1,
	EDatasmithImportLightmapMax__LIGHTMAP3                                           = 2,
	EDatasmithImportLightmapMax__LIGHTMAP4                                           = 3,
	EDatasmithImportLightmapMax__LIGHTMAP5                                           = 4,
	EDatasmithImportLightmapMax__LIGHTMAP6                                           = 5,
	EDatasmithImportLightmapMax__LIGHTMAP7                                           = 6
};

/// Enum /Script/DatasmithContent.EDatasmithImportLightmapMin
/// Size: 0x06
enum class EDatasmithImportLightmapMin : uint8_t
{
	EDatasmithImportLightmapMin__LIGHTMAP                                            = 0,
	EDatasmithImportLightmapMin__LIGHTMAP2                                           = 1,
	EDatasmithImportLightmapMin__LIGHTMAP3                                           = 2,
	EDatasmithImportLightmapMin__LIGHTMAP4                                           = 3,
	EDatasmithImportLightmapMin__LIGHTMAP5                                           = 4,
	EDatasmithImportLightmapMin__LIGHTMAP6                                           = 5
};

/// Enum /Script/DatasmithContent.EDatasmithImportMaterialQuality
/// Size: 0x03
enum class EDatasmithImportMaterialQuality : uint8_t
{
	EDatasmithImportMaterialQuality__UseNoFresnelCurves                              = 0,
	EDatasmithImportMaterialQuality__UseSimplifierFresnelCurves                      = 1,
	EDatasmithImportMaterialQuality__UseRealFresnelCurves                            = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportActorPolicy
/// Size: 0x03
enum class EDatasmithImportActorPolicy : uint8_t
{
	EDatasmithImportActorPolicy__Update                                              = 0,
	EDatasmithImportActorPolicy__Full                                                = 1,
	EDatasmithImportActorPolicy__Ignore                                              = 2
};

/// Enum /Script/DatasmithContent.EDatasmithImportAssetConflictPolicy
/// Size: 0x04
enum class EDatasmithImportAssetConflictPolicy : uint8_t
{
	EDatasmithImportAssetConflictPolicy__Replace                                     = 0,
	EDatasmithImportAssetConflictPolicy__Update                                      = 1,
	EDatasmithImportAssetConflictPolicy__Use                                         = 2,
	EDatasmithImportAssetConflictPolicy__Ignore                                      = 3
};

/// Enum /Script/DatasmithContent.EDatasmithImportSearchPackagePolicy
/// Size: 0x02
enum class EDatasmithImportSearchPackagePolicy : uint8_t
{
	EDatasmithImportSearchPackagePolicy__Current                                     = 0,
	EDatasmithImportSearchPackagePolicy__All                                         = 1
};


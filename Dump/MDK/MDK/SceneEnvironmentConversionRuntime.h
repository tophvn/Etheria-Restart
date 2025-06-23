
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SceneEnvironmentConversionRuntime.EnvModifyNodeBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UEnvModifyNodeBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Class /Script/SceneEnvironmentConversionRuntime.EnvModifyNodeChange_MaterialParameterCollection
/// Size: 0x0150 (0x000038 - 0x000188)
class UEnvModifyNodeChange_MaterialParameterCollection : public UEnvModifyNodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(class UMaterialParameterCollection*)       MaterialParameterCollection                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TMap<FName, float>)                        FloatParam_ToValue                                          OFFSET(get<T>, {0x40, 80, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 LinearColorParam_ToValue                                    OFFSET(get<T>, {0x90, 80, 0, 0})
};

/// Class /Script/SceneEnvironmentConversionRuntime.EnvModifyNodeChangeFog
/// Size: 0x0070 (0x000038 - 0x0000A8)
class UEnvModifyNodeChangeFog : public UEnvModifyNodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FString)                                   FogName                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      UseFogInitFrom                                              OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(float)                                     Init_FogDensity_Fog                                         OFFSET(get<float>, {0x4C, 4, 0, 0})
	SMember(FLinearColor)                              Init_FogInscatteringColor_Fog                               OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FLinearColor)                              Init_DircetionalInscatteringColor_Fog                       OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	DMember(float)                                     FogDensity_Fog                                              OFFSET(get<float>, {0x70, 4, 0, 0})
	SMember(FLinearColor)                              FogInscatteringColor_Fog                                    OFFSET(getStruct<T>, {0x74, 16, 0, 0})
	SMember(FLinearColor)                              DircetionalInscatteringColor_Fog                            OFFSET(getStruct<T>, {0x84, 16, 0, 0})
};

/// Class /Script/SceneEnvironmentConversionRuntime.EnvModifyNodeChangeLight
/// Size: 0x0048 (0x000038 - 0x000080)
class UEnvModifyNodeChangeLight : public UEnvModifyNodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   LightName                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      UseLightInitFrom                                            OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FLinearColor)                              Init_LightColor_Light                                       OFFSET(getStruct<T>, {0x4C, 16, 0, 0})
	SMember(FLinearColor)                              LightColor_Light                                            OFFSET(getStruct<T>, {0x5C, 16, 0, 0})
};

/// Class /Script/SceneEnvironmentConversionRuntime.EnvModifyNodeChangeMeshMaterials
/// Size: 0x0050 (0x000038 - 0x000088)
class UEnvModifyNodeChangeMeshMaterials : public UEnvModifyNodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TMap<FName, class UMaterialInterface*>)    ToChangeMaterialCfg                                         OFFSET(get<T>, {0x38, 80, 0, 0})
};

/// Class /Script/SceneEnvironmentConversionRuntime.SceneConversionActor
/// Size: 0x0038 (0x000220 - 0x000258)
class ASceneConversionActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x220, 4, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x224, 4, 0, 0})
	CMember(TArray<class UClass*>)                     NodeClassList                                               OFFSET(get<T>, {0x228, 16, 0, 0})
	CMember(TArray<class UEnvModifyNodeBase*>)         NodeList                                                    OFFSET(get<T>, {0x238, 16, 0, 0})


	/// Functions
	// Function /Script/SceneEnvironmentConversionRuntime.SceneConversionActor.StopConvert
	// void StopConvert();                                                                                                      // [0x118f480] Final|Native|Public  
	// Function /Script/SceneEnvironmentConversionRuntime.SceneConversionActor.StartConvert
	// void StartConvert(float TimeToPass);                                                                                     // [0x118f400] Final|Native|Public  
	// Function /Script/SceneEnvironmentConversionRuntime.SceneConversionActor.ResumeConvert
	// void ResumeConvert();                                                                                                    // [0x118f3e0] Final|Native|Public  
	// Function /Script/SceneEnvironmentConversionRuntime.SceneConversionActor.ResetConvert
	// void ResetConvert();                                                                                                     // [0x118f3c0] Final|Native|Public  
	// Function /Script/SceneEnvironmentConversionRuntime.SceneConversionActor.PauseConvert
	// void PauseConvert();                                                                                                     // [0x118f3a0] Final|Native|Public  
	// Function /Script/SceneEnvironmentConversionRuntime.SceneConversionActor.GetKeepTime
	// float GetKeepTime();                                                                                                     // [0x118f380] Final|Native|Public  
};


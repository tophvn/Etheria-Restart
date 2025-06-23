
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/NiagaraShader.NiagaraScriptBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraScriptBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/NiagaraShader.SimulationStageMetaData
/// Size: 0x0030 (0x000000 - 0x000030)
class FSimulationStageMetaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     SimulationStageName                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     IterationSource                                             OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bSpawnOnly                                                  OFFSET(get<bool>, {0x10, 1, 1, 0})
	DMember(bool)                                      bWritesParticles                                            OFFSET(get<bool>, {0x10, 1, 1, 1})
	DMember(bool)                                      bPartialParticleUpdate                                      OFFSET(get<bool>, {0x10, 1, 1, 2})
	CMember(TArray<FName>)                             OutputDestinations                                          OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   MinStage                                                    OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MaxStage                                                    OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGeneratedFunction
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraDataInterfaceGeneratedFunction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGPUParamInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraDataInterfaceGPUParamInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   DataInterfaceHLSLSymbol                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   DIClassName                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FNiagaraDataInterfaceGeneratedFunction>) GeneratedFunctions                                     OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/NiagaraShader.NiagaraCompileEvent
/// Size: 0x0048 (0x000000 - 0x000048)
class FNiagaraCompileEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FNiagaraCompileEventSeverity)              Severity                                                    OFFSET(getStruct<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   Message                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FGuid)                                     NodeGuid                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FGuid)                                     PinGuid                                                     OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TArray<FGuid>)                             StackGuids                                                  OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSeverity
/// Size: 0x03
enum class FNiagaraCompileEventSeverity : uint8_t
{
	FNiagaraCompileEventSeverity__Log                                                = 0,
	FNiagaraCompileEventSeverity__Warning                                            = 1,
	FNiagaraCompileEventSeverity__Error                                              = 2
};


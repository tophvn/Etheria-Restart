
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UNiagaraScriptBase;

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSeverity
/// Size: 0x01 (1 bytes)
enum class FNiagaraCompileEventSeverity : uint8_t
{
	FNiagaraCompileEventSeverity__Log                                                = 0,
	FNiagaraCompileEventSeverity__Warning                                            = 1,
	FNiagaraCompileEventSeverity__Error                                              = 2
};

#pragma pack(pop)


static_assert(sizeof(UNiagaraScriptBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSimulationStageMetaData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraDataInterfaceGeneratedFunction) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraDataInterfaceGPUParamInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraCompileEvent) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(offsetof(FSimulationStageMetaData, SimulationStageName) == 0x0000);
static_assert(offsetof(FSimulationStageMetaData, IterationSource) == 0x0008);
static_assert(offsetof(FSimulationStageMetaData, OutputDestinations) == 0x0018);
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, DataInterfaceHLSLSymbol) == 0x0000);
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, DIClassName) == 0x0010);
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, GeneratedFunctions) == 0x0020);
static_assert(offsetof(FNiagaraCompileEvent, Severity) == 0x0000);
static_assert(offsetof(FNiagaraCompileEvent, Message) == 0x0008);
static_assert(offsetof(FNiagaraCompileEvent, NodeGuid) == 0x0018);
static_assert(offsetof(FNiagaraCompileEvent, PinGuid) == 0x0028);
static_assert(offsetof(FNiagaraCompileEvent, StackGuids) == 0x0038);


/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class ASceneConversionActor;
class UEnvModifyNodeBase;
class UEnvModifyNodeChangeFog;
class UEnvModifyNodeChangeLight;
class UEnvModifyNodeChangeMeshMaterials;
class UEnvModifyNodeChange_MaterialParameterCollection;

#pragma pack(pop)


static_assert(sizeof(UEnvModifyNodeBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UEnvModifyNodeChange_MaterialParameterCollection) == 0x0188); // 392 bytes (0x000038 - 0x000188)
static_assert(sizeof(UEnvModifyNodeChangeFog) == 0x00A8); // 168 bytes (0x000038 - 0x0000A8)
static_assert(sizeof(UEnvModifyNodeChangeLight) == 0x0080); // 128 bytes (0x000038 - 0x000080)
static_assert(sizeof(UEnvModifyNodeChangeMeshMaterials) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(ASceneConversionActor) == 0x0258); // 600 bytes (0x000220 - 0x000258)
static_assert(offsetof(UEnvModifyNodeChange_MaterialParameterCollection, MaterialParameterCollection) == 0x0038);
static_assert(offsetof(UEnvModifyNodeChange_MaterialParameterCollection, FloatParam_ToValue) == 0x0040);
static_assert(offsetof(UEnvModifyNodeChange_MaterialParameterCollection, LinearColorParam_ToValue) == 0x0090);
static_assert(offsetof(UEnvModifyNodeChangeFog, FogName) == 0x0038);
static_assert(offsetof(UEnvModifyNodeChangeFog, Init_FogInscatteringColor_Fog) == 0x0050);
static_assert(offsetof(UEnvModifyNodeChangeFog, Init_DircetionalInscatteringColor_Fog) == 0x0060);
static_assert(offsetof(UEnvModifyNodeChangeFog, FogInscatteringColor_Fog) == 0x0074);
static_assert(offsetof(UEnvModifyNodeChangeFog, DircetionalInscatteringColor_Fog) == 0x0084);
static_assert(offsetof(UEnvModifyNodeChangeLight, LightName) == 0x0038);
static_assert(offsetof(UEnvModifyNodeChangeLight, Init_LightColor_Light) == 0x004C);
static_assert(offsetof(UEnvModifyNodeChangeLight, LightColor_Light) == 0x005C);
static_assert(offsetof(UEnvModifyNodeChangeMeshMaterials, ToChangeMaterialCfg) == 0x0038);
static_assert(offsetof(ASceneConversionActor, NodeClassList) == 0x0228);
static_assert(offsetof(ASceneConversionActor, NodeList) == 0x0238);


/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UBuildPatchManifest;

#pragma pack(pop)


static_assert(sizeof(FSHAHashData) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FChunkPartData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FFileManifestData) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FChunkInfoData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FCustomFieldData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UBuildPatchManifest) == 0x0120); // 288 bytes (0x000028 - 0x000120)
static_assert(offsetof(FChunkPartData, Guid) == 0x0000);
static_assert(offsetof(FFileManifestData, Filename) == 0x0000);
static_assert(offsetof(FFileManifestData, FileHash) == 0x0010);
static_assert(offsetof(FFileManifestData, FileChunkParts) == 0x0028);
static_assert(offsetof(FFileManifestData, InstallTags) == 0x0038);
static_assert(offsetof(FFileManifestData, SymlinkTarget) == 0x0050);
static_assert(offsetof(FChunkInfoData, Guid) == 0x0000);
static_assert(offsetof(FChunkInfoData, ShaHash) == 0x0018);
static_assert(offsetof(FCustomFieldData, Key) == 0x0000);
static_assert(offsetof(FCustomFieldData, Value) == 0x0010);
static_assert(offsetof(UBuildPatchManifest, AppName) == 0x0030);
static_assert(offsetof(UBuildPatchManifest, BuildVersion) == 0x0040);
static_assert(offsetof(UBuildPatchManifest, LaunchExe) == 0x0050);
static_assert(offsetof(UBuildPatchManifest, LaunchCommand) == 0x0060);
static_assert(offsetof(UBuildPatchManifest, PrereqName) == 0x00C0);
static_assert(offsetof(UBuildPatchManifest, PrereqPath) == 0x00D0);
static_assert(offsetof(UBuildPatchManifest, PrereqArgs) == 0x00E0);
static_assert(offsetof(UBuildPatchManifest, FileManifestList) == 0x00F0);
static_assert(offsetof(UBuildPatchManifest, ChunkList) == 0x0100);
static_assert(offsetof(UBuildPatchManifest, CustomFields) == 0x0110);

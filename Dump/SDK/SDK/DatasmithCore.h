
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UDatasmithMesh;

/// Enum /Script/DatasmithCore.EDatasmithPropertyCategory
/// Size: 0x01 (1 bytes)
enum class EDatasmithPropertyCategory : uint8_t
{
	EDatasmithPropertyCategory__Undefined                                            = 0,
	EDatasmithPropertyCategory__Generic                                              = 1,
	EDatasmithPropertyCategory__RelativeLocation                                     = 2,
	EDatasmithPropertyCategory__RelativeRotation                                     = 4,
	EDatasmithPropertyCategory__RelativeScale3D                                      = 8,
	EDatasmithPropertyCategory__Visibility                                           = 16,
	EDatasmithPropertyCategory__Material                                             = 32,
	EDatasmithPropertyCategory__Color                                                = 64,
	EDatasmithPropertyCategory__Option                                               = 128
};

/// Enum /Script/DatasmithCore.EDatasmithCompletionMode
/// Size: 0x01 (1 bytes)
enum class EDatasmithCompletionMode : uint8_t
{
	EDatasmithCompletionMode__KeepState                                              = 0,
	EDatasmithCompletionMode__RestoreState                                           = 1,
	EDatasmithCompletionMode__ProjectDefault                                         = 2
};

/// Enum /Script/DatasmithCore.EDatasmithActorAttachmentRule
/// Size: 0x01 (1 bytes)
enum class EDatasmithActorAttachmentRule : uint8_t
{
	EDatasmithActorAttachmentRule__KeepRelativeTransform                             = 0,
	EDatasmithActorAttachmentRule__KeepWorldTransform                                = 1
};

/// Enum /Script/DatasmithCore.EDatasmithActorRemovalRule
/// Size: 0x01 (1 bytes)
enum class EDatasmithActorRemovalRule : uint8_t
{
	EDatasmithActorRemovalRule__RemoveChildren                                       = 0,
	EDatasmithActorRemovalRule__KeepChildrenAndKeepRelativeTransform                 = 1
};

/// Enum /Script/DatasmithCore.EDatasmithKeyValuePropertyType
/// Size: 0x01 (1 bytes)
enum class EDatasmithKeyValuePropertyType : uint8_t
{
	EDatasmithKeyValuePropertyType__String                                           = 0,
	EDatasmithKeyValuePropertyType__Color                                            = 1,
	EDatasmithKeyValuePropertyType__Float                                            = 2,
	EDatasmithKeyValuePropertyType__Bool                                             = 3,
	EDatasmithKeyValuePropertyType__Texture                                          = 4,
	EDatasmithKeyValuePropertyType__Vector                                           = 5,
	EDatasmithKeyValuePropertyType__Integer                                          = 6
};

/// Enum /Script/DatasmithCore.EDatasmithColorSpace
/// Size: 0x01 (1 bytes)
enum class EDatasmithColorSpace : uint8_t
{
	EDatasmithColorSpace__Default                                                    = 0,
	EDatasmithColorSpace__sRGB                                                       = 1,
	EDatasmithColorSpace__Linear                                                     = 2
};

/// Enum /Script/DatasmithCore.EDatasmithTextureFormat
/// Size: 0x01 (1 bytes)
enum class EDatasmithTextureFormat : uint8_t
{
	EDatasmithTextureFormat__PNG                                                     = 0,
	EDatasmithTextureFormat__JPEG                                                    = 1
};

/// Enum /Script/DatasmithCore.EDatasmithTextureAddress
/// Size: 0x01 (1 bytes)
enum class EDatasmithTextureAddress : uint8_t
{
	EDatasmithTextureAddress__Wrap                                                   = 0,
	EDatasmithTextureAddress__Clamp                                                  = 1,
	EDatasmithTextureAddress__Mirror                                                 = 2
};

/// Enum /Script/DatasmithCore.EDatasmithTextureFilter
/// Size: 0x01 (1 bytes)
enum class EDatasmithTextureFilter : uint8_t
{
	EDatasmithTextureFilter__Nearest                                                 = 0,
	EDatasmithTextureFilter__Bilinear                                                = 1,
	EDatasmithTextureFilter__Trilinear                                               = 2,
	EDatasmithTextureFilter__Default                                                 = 3
};

/// Enum /Script/DatasmithCore.EDatasmithTextureMode
/// Size: 0x01 (1 bytes)
enum class EDatasmithTextureMode : uint8_t
{
	EDatasmithTextureMode__Diffuse                                                   = 0,
	EDatasmithTextureMode__Specular                                                  = 1,
	EDatasmithTextureMode__Normal                                                    = 2,
	EDatasmithTextureMode__NormalGreenInv                                            = 3,
	EDatasmithTextureMode__Displace                                                  = 4,
	EDatasmithTextureMode__Other                                                     = 5,
	EDatasmithTextureMode__Bump                                                      = 6,
	EDatasmithTextureMode__Ies                                                       = 7
};

/// Enum /Script/DatasmithCore.EDatasmithLightShape
/// Size: 0x01 (1 bytes)
enum class EDatasmithLightShape : uint8_t
{
	EDatasmithLightShape__Rectangle                                                  = 0,
	EDatasmithLightShape__Disc                                                       = 1,
	EDatasmithLightShape__Sphere                                                     = 2,
	EDatasmithLightShape__Cylinder                                                   = 3,
	EDatasmithLightShape__None                                                       = 4
};

#pragma pack(pop)


static_assert(sizeof(FDatasmithMeshSourceModel) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UDatasmithMesh) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(offsetof(UDatasmithMesh, MeshName) == 0x0028);
static_assert(offsetof(UDatasmithMesh, SourceModels) == 0x0040);

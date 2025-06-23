
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

class ALevelVariantSetsActor;
class ASwitchActor;
class ULevelVariantSets;
class ULevelVariantSetsFunctionDirector;
class UPropertyValue;
class UPropertyValueColor;
class UPropertyValueMaterial;
class UPropertyValueOption;
class UPropertyValueSoftObject;
class UPropertyValueTransform;
class UPropertyValueVisibility;
class UVariant;
class UVariantObjectBinding;
class UVariantSet;

/// Enum /Script/VariantManagerContent.EPropertyValueCategory
/// Size: 0x01 (1 bytes)
enum class EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Undefined                                                = 0,
	EPropertyValueCategory__Generic                                                  = 1,
	EPropertyValueCategory__RelativeLocation                                         = 2,
	EPropertyValueCategory__RelativeRotation                                         = 4,
	EPropertyValueCategory__RelativeScale3D                                          = 8,
	EPropertyValueCategory__Visibility                                               = 16,
	EPropertyValueCategory__Material                                                 = 32,
	EPropertyValueCategory__Color                                                    = 64,
	EPropertyValueCategory__Option                                                   = 128
};

#pragma pack(pop)


static_assert(sizeof(ULevelVariantSets) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(ALevelVariantSetsActor) == 0x0238); // 568 bytes (0x000220 - 0x000238)
static_assert(sizeof(ULevelVariantSetsFunctionDirector) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FCapturedPropSegment) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UPropertyValue) == 0x01B8); // 440 bytes (0x000028 - 0x0001B8)
static_assert(sizeof(UPropertyValueTransform) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueVisibility) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueColor) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueMaterial) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueOption) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueSoftObject) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(ASwitchActor) == 0x0248); // 584 bytes (0x000220 - 0x000248)
static_assert(sizeof(FVariantDependency) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(UVariant) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FFunctionCaller) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UVariantObjectBinding) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UVariantSet) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(offsetof(ULevelVariantSets, DirectorClass) == 0x0028);
static_assert(offsetof(ULevelVariantSets, VariantSets) == 0x0030);
static_assert(offsetof(ALevelVariantSetsActor, LevelVariantSets) == 0x0220);
static_assert(offsetof(FCapturedPropSegment, PropertyName) == 0x0000);
static_assert(offsetof(FCapturedPropSegment, ComponentName) == 0x0018);
static_assert(offsetof(UPropertyValue, PropertyIndices) == 0x0098);
static_assert(offsetof(UPropertyValue, CapturedPropSegments) == 0x00A8);
static_assert(offsetof(UPropertyValue, FullDisplayString) == 0x00B8);
static_assert(offsetof(UPropertyValue, PropertySetterName) == 0x00C8);
static_assert(offsetof(UPropertyValue, PropertySetterParameterDefaults) == 0x00D0);
static_assert(offsetof(UPropertyValue, LeafPropertyClass) == 0x0128);
static_assert(offsetof(UPropertyValue, ValueBytes) == 0x0138);
static_assert(offsetof(UPropertyValue, PropCategory) == 0x0148);
static_assert(offsetof(ASwitchActor, SceneComponent) == 0x0238);
static_assert(offsetof(FVariantDependency, VariantSet) == 0x0000);
static_assert(offsetof(FVariantDependency, Variant) == 0x0028);
static_assert(offsetof(UVariant, Dependencies) == 0x0028);
static_assert(offsetof(UVariant, DisplayText) == 0x0038);
static_assert(offsetof(UVariant, ObjectBindings) == 0x0068);
static_assert(offsetof(UVariant, Thumbnail) == 0x0078);
static_assert(offsetof(FFunctionCaller, FunctionName) == 0x0000);
static_assert(offsetof(UVariantObjectBinding, CachedActorLabel) == 0x0028);
static_assert(offsetof(UVariantObjectBinding, ObjectPtr) == 0x0038);
static_assert(offsetof(UVariantObjectBinding, LazyObjectPtr) == 0x0050);
static_assert(offsetof(UVariantObjectBinding, CapturedProperties) == 0x0070);
static_assert(offsetof(UVariantObjectBinding, FunctionCallers) == 0x0080);
static_assert(offsetof(UVariantSet, DisplayText) == 0x0028);
static_assert(offsetof(UVariantSet, Variants) == 0x0060);
static_assert(offsetof(UVariantSet, Thumbnail) == 0x0070);

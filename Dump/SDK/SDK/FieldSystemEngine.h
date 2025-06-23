
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "Chaos.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class AFieldSystemActor;
class UBoxFalloff;
class UCullingField;
class UFieldNodeBase;
class UFieldNodeFloat;
class UFieldNodeInt;
class UFieldNodeVector;
class UFieldSystem;
class UFieldSystemComponent;
class UFieldSystemMetaData;
class UFieldSystemMetaDataIteration;
class UFieldSystemMetaDataProcessingResolution;
class UNoiseField;
class UOperatorField;
class UPlaneFalloff;
class URadialFalloff;
class URadialIntMask;
class URadialVector;
class URandomVector;
class UReturnResultsTerminal;
class UToFloatField;
class UToIntegerField;
class UUniformInteger;
class UUniformScalar;
class UUniformVector;

#pragma pack(pop)


static_assert(sizeof(AFieldSystemActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UFieldSystem) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UFieldSystemComponent) == 0x04A0); // 1184 bytes (0x000468 - 0x0004A0)
static_assert(sizeof(UFieldSystemMetaData) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UFieldSystemMetaDataIteration) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UFieldSystemMetaDataProcessingResolution) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UFieldNodeBase) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UFieldNodeInt) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UFieldNodeFloat) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UFieldNodeVector) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UUniformInteger) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(URadialIntMask) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(UUniformScalar) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(URadialFalloff) == 0x00D8); // 216 bytes (0x0000B0 - 0x0000D8)
static_assert(sizeof(UPlaneFalloff) == 0x00E0); // 224 bytes (0x0000B0 - 0x0000E0)
static_assert(sizeof(UBoxFalloff) == 0x0100); // 256 bytes (0x0000B0 - 0x000100)
static_assert(sizeof(UNoiseField) == 0x00F0); // 240 bytes (0x0000B0 - 0x0000F0)
static_assert(sizeof(UUniformVector) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(URadialVector) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(URandomVector) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UOperatorField) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(UToIntegerField) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UToFloatField) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UCullingField) == 0x00C8); // 200 bytes (0x0000B0 - 0x0000C8)
static_assert(sizeof(UReturnResultsTerminal) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(offsetof(AFieldSystemActor, FieldSystemComponent) == 0x0220);
static_assert(offsetof(UFieldSystemComponent, FieldSystem) == 0x0468);
static_assert(offsetof(UFieldSystemMetaDataProcessingResolution, ResolutionType) == 0x00B0);
static_assert(offsetof(URadialIntMask, Position) == 0x00B4);
static_assert(offsetof(URadialIntMask, SetMaskCondition) == 0x00C8);
static_assert(offsetof(URadialFalloff, Position) == 0x00C4);
static_assert(offsetof(URadialFalloff, Falloff) == 0x00D0);
static_assert(offsetof(UPlaneFalloff, Position) == 0x00C4);
static_assert(offsetof(UPlaneFalloff, Normal) == 0x00D0);
static_assert(offsetof(UPlaneFalloff, Falloff) == 0x00DC);
static_assert(offsetof(UBoxFalloff, Transform) == 0x00C0);
static_assert(offsetof(UBoxFalloff, Falloff) == 0x00F0);
static_assert(offsetof(UNoiseField, Transform) == 0x00C0);
static_assert(offsetof(UUniformVector, Direction) == 0x00B4);
static_assert(offsetof(URadialVector, Position) == 0x00B4);
static_assert(offsetof(UOperatorField, RightField) == 0x00B8);
static_assert(offsetof(UOperatorField, LeftField) == 0x00C0);
static_assert(offsetof(UOperatorField, Operation) == 0x00C8);
static_assert(offsetof(UToIntegerField, FloatField) == 0x00B0);
static_assert(offsetof(UToFloatField, IntField) == 0x00B0);
static_assert(offsetof(UCullingField, Culling) == 0x00B0);
static_assert(offsetof(UCullingField, Field) == 0x00B8);
static_assert(offsetof(UCullingField, Operation) == 0x00C0);

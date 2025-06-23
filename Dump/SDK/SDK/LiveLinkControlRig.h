
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "ControlRig.h"
#include "CoreUObject.h"
#include "LiveLinkInterface.h"
#include "RigVM.h"

#pragma pack(push, 0x1)


#pragma pack(pop)


static_assert(sizeof(FRigUnit_LiveLinkBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_LiveLinkEvaluteFrameTransform) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_LiveLinkGetParameterValueByName) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_LiveLinkGetTransformByName) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_LiveLinkEvaluteFrameAnimation) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameTransform, SubjectName) == 0x0008);
static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameTransform, DebugColor) == 0x0014);
static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameTransform, DebugDrawOffset) == 0x0030);
static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameTransform, Transform) == 0x0060);
static_assert(offsetof(FRigUnit_LiveLinkGetParameterValueByName, SubjectFrame) == 0x0008);
static_assert(offsetof(FRigUnit_LiveLinkGetParameterValueByName, ParameterName) == 0x0020);
static_assert(offsetof(FRigUnit_LiveLinkGetTransformByName, SubjectFrame) == 0x0008);
static_assert(offsetof(FRigUnit_LiveLinkGetTransformByName, TransformName) == 0x0020);
static_assert(offsetof(FRigUnit_LiveLinkGetTransformByName, Space) == 0x0028);
static_assert(offsetof(FRigUnit_LiveLinkGetTransformByName, Transform) == 0x0030);
static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameAnimation, SubjectName) == 0x0008);
static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameAnimation, DebugColor) == 0x0014);
static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameAnimation, DebugDrawOffset) == 0x0030);
static_assert(offsetof(FRigUnit_LiveLinkEvaluteFrameAnimation, SubjectFrame) == 0x0060);


/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: LiveLinkInterface
/// dependency: RigVM

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_LiveLinkBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameTransform
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_LiveLinkEvaluteFrameTransform : public FRigUnit_LiveLinkBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     SubjectName                                                 OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	SMember(FTransform)                                DebugDrawOffset                                             OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x60, 48, 0, 0})
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkGetParameterValueByName
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_LiveLinkGetParameterValueByName : public FRigUnit_LiveLinkBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSubjectFrameHandle)                       SubjectFrame                                                OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkGetTransformByName
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigUnit_LiveLinkGetTransformByName : public FRigUnit_LiveLinkBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSubjectFrameHandle)                       SubjectFrame                                                OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FName)                                     TransformName                                               OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameAnimation
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_LiveLinkEvaluteFrameAnimation : public FRigUnit_LiveLinkBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     SubjectName                                                 OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	SMember(FTransform)                                DebugDrawOffset                                             OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FSubjectFrameHandle)                       SubjectFrame                                                OFFSET(getStruct<T>, {0x60, 24, 0, 0})
};


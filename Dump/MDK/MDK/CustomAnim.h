
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/CustomAnim.AnimNode_CustomLookAt
/// Size: 0x0060 (0x0000C8 - 0x000128)
class FAnimNode_CustomLookAt : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FBoneReference)                            BoneToModify                                                OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FName)                                     FacialDirBoneName                                           OFFSET(getStruct<T>, {0xD8, 8, 0, 0})
	SMember(FBoneReference)                            FacialDirBone                                               OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FVector)                                   DesireLookAtDirection                                       OFFSET(getStruct<T>, {0xF0, 12, 0, 0})
	SMember(FVector)                                   RotLimit                                                    OFFSET(getStruct<T>, {0xFC, 12, 0, 0})
	DMember(float)                                     LookAtSpeed                                                 OFFSET(get<float>, {0x108, 4, 0, 0})
};

/// Struct /Script/CustomAnim.AnimNode_LayerLookAt
/// Size: 0x0088 (0x0000C8 - 0x000150)
class FAnimNode_LayerLookAt : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FBoneReference)                            HeadBoneToModify                                            OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FBoneReference)                            SpineBoneToModify                                           OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FName)                                     FacialDirBoneName                                           OFFSET(getStruct<T>, {0xE8, 8, 0, 0})
	SMember(FBoneReference)                            FacialDirBone                                               OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FVector)                                   DesireLookAtDirection                                       OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FVector)                                   HeadLimit                                                   OFFSET(getStruct<T>, {0x10C, 12, 0, 0})
	SMember(FVector)                                   SpineLimit                                                  OFFSET(getStruct<T>, {0x118, 12, 0, 0})
	DMember(float)                                     LookAtSpeed                                                 OFFSET(get<float>, {0x124, 4, 0, 0})
};


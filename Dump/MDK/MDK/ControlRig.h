
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: LevelSequence
/// dependency: MovieScene
/// dependency: MovieSceneTracks
/// dependency: PropertyPath
/// dependency: RigVM

/// Struct /Script/ControlRig.RigElement
/// Size: 0x0018 (0x000000 - 0x000018)
class FRigElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigBone
/// Size: 0x00C8 (0x000018 - 0x0000E0)
class FRigBone : public FRigElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FName)                                     ParentName                                                  OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FTransform)                                GlobalTransform                                             OFFSET(getStruct<T>, {0x60, 48, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	CMember(TArray<int32_t>)                           Dependents                                                  OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(ERigBoneType)                              Type                                                        OFFSET(get<T>, {0xD0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigBoneHierarchy
/// Size: 0x0098 (0x000000 - 0x000098)
class FRigBoneHierarchy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FRigBone>)                          Bones                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TMap<FName, int32_t>)                      NameToIndexMapping                                          OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TArray<FName>)                             Selection                                                   OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigSpace
/// Size: 0x0078 (0x000018 - 0x000090)
class FRigSpace : public FRigElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(ERigSpaceType)                             SpaceType                                                   OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FName)                                     ParentName                                                  OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(getStruct<T>, {0x60, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigSpaceHierarchy
/// Size: 0x0090 (0x000000 - 0x000090)
class FRigSpaceHierarchy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FRigSpace>)                         Spaces                                                      OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TMap<FName, int32_t>)                      NameToIndexMapping                                          OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TArray<FName>)                             Selection                                                   OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigControlValueStorage
/// Size: 0x0044 (0x000000 - 0x000044)
class FRigControlValueStorage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 68;

public:
	DMember(float)                                     Float00                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Float01                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Float02                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Float03                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Float10                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Float11                                                     OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Float12                                                     OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Float13                                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Float20                                                     OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Float21                                                     OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Float22                                                     OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Float23                                                     OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Float30                                                     OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Float31                                                     OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Float32                                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Float33                                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigControlValue
/// Size: 0x0080 (0x000000 - 0x000080)
class FRigControlValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FRigControlValueStorage)                   FloatStorage                                                OFFSET(getStruct<T>, {0x0, 68, 0, 0})
	SMember(FTransform)                                Storage                                                     OFFSET(getStruct<T>, {0x50, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigControl
/// Size: 0x02D8 (0x000018 - 0x0002F0)
class FRigControl : public FRigElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(ERigControlType)                           ControlType                                                 OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FName)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	SMember(FName)                                     ParentName                                                  OFFSET(getStruct<T>, {0x24, 8, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	SMember(FName)                                     SpaceName                                                   OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   SpaceIndex                                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FTransform)                                OffsetTransform                                             OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	SMember(FRigControlValue)                          InitialValue                                                OFFSET(getStruct<T>, {0x70, 128, 0, 0})
	SMember(FRigControlValue)                          Value                                                       OFFSET(getStruct<T>, {0xF0, 128, 0, 0})
	CMember(ERigControlAxis)                           PrimaryAxis                                                 OFFSET(get<T>, {0x170, 1, 0, 0})
	DMember(bool)                                      bIsCurve                                                    OFFSET(get<bool>, {0x171, 1, 0, 0})
	DMember(bool)                                      bAnimatable                                                 OFFSET(get<bool>, {0x172, 1, 0, 0})
	DMember(bool)                                      bLimitTranslation                                           OFFSET(get<bool>, {0x173, 1, 0, 0})
	DMember(bool)                                      bLimitRotation                                              OFFSET(get<bool>, {0x174, 1, 0, 0})
	DMember(bool)                                      bLimitScale                                                 OFFSET(get<bool>, {0x175, 1, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 OFFSET(get<bool>, {0x176, 1, 0, 0})
	SMember(FRigControlValue)                          MinimumValue                                                OFFSET(getStruct<T>, {0x180, 128, 0, 0})
	SMember(FRigControlValue)                          MaximumValue                                                OFFSET(getStruct<T>, {0x200, 128, 0, 0})
	DMember(bool)                                      bGizmoEnabled                                               OFFSET(get<bool>, {0x280, 1, 0, 0})
	DMember(bool)                                      bGizmoVisible                                               OFFSET(get<bool>, {0x281, 1, 0, 0})
	SMember(FName)                                     GizmoName                                                   OFFSET(getStruct<T>, {0x284, 8, 0, 0})
	SMember(FTransform)                                GizmoTransform                                              OFFSET(getStruct<T>, {0x290, 48, 0, 0})
	SMember(FLinearColor)                              GizmoColor                                                  OFFSET(getStruct<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<int32_t>)                           Dependents                                                  OFFSET(get<T>, {0x2D0, 16, 0, 0})
	DMember(bool)                                      bIsTransientControl                                         OFFSET(get<bool>, {0x2E0, 1, 0, 0})
	CMember(class UEnum*)                              ControlEnum                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigControlHierarchy
/// Size: 0x0108 (0x000000 - 0x000108)
class FRigControlHierarchy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TArray<FRigControl>)                       Controls                                                    OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TMap<FName, int32_t>)                      NameToIndexMapping                                          OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TArray<FName>)                             Selection                                                   OFFSET(get<T>, {0xF8, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigCurve
/// Size: 0x0008 (0x000018 - 0x000020)
class FRigCurve : public FRigElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigCurveContainer
/// Size: 0x0098 (0x000000 - 0x000098)
class FRigCurveContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FRigCurve>)                         Curves                                                      OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TMap<FName, int32_t>)                      NameToIndexMapping                                          OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TArray<FName>)                             Selection                                                   OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigHierarchyContainer
/// Size: 0x0368 (0x000000 - 0x000368)
class FRigHierarchyContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	SMember(FRigBoneHierarchy)                         BoneHierarchy                                               OFFSET(getStruct<T>, {0x0, 152, 0, 0})
	SMember(FRigSpaceHierarchy)                        SpaceHierarchy                                              OFFSET(getStruct<T>, {0x98, 144, 0, 0})
	SMember(FRigControlHierarchy)                      ControlHierarchy                                            OFFSET(getStruct<T>, {0x128, 264, 0, 0})
	SMember(FRigCurveContainer)                        CurveContainer                                              OFFSET(getStruct<T>, {0x230, 152, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x2C8, 4, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigDrawInstruction
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FControlRigDrawInstruction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TEnumAsByte<EControlRigDrawSettings>)      PrimitiveType                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(TArray<FVector>)                           Positions                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x40, 48, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigDrawContainer
/// Size: 0x0018 (0x000000 - 0x000018)
class FControlRigDrawContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FControlRigDrawInstruction>)        Instructions                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigElementKey
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigElementKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(ERigElementType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigInfluenceEntry
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigInfluenceEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKey)                            Source                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	CMember(TArray<FRigElementKey>)                    AffectedList                                                OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigInfluenceMap
/// Size: 0x0068 (0x000000 - 0x000068)
class FRigInfluenceMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FName)                                     EventName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TArray<FRigInfluenceEntry>)                Entries                                                     OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TMap<FRigElementKey, int32_t>)             KeyToIndex                                                  OFFSET(get<T>, {0x18, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigInfluenceMapPerEvent
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigInfluenceMapPerEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FRigInfluenceMap>)                  Maps                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FName, int32_t>)                      EventToIndex                                                OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Class /Script/ControlRig.ControlRig
/// Size: 0x0628 (0x000028 - 0x000650)
class UControlRig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	CMember(ERigExecutionType)                         ExecutionType                                               OFFSET(get<T>, {0x45, 1, 0, 0})
	CMember(class URigVM*)                             VM                                                          OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FRigHierarchyContainer)                    Hierarchy                                                   OFFSET(getStruct<T>, {0x50, 872, 0, 0})
	CMember(TWeakObjectPtr<class UControlRigGizmoLibrary*>) GizmoLibrary                                           OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(TMap<FName, FCachedPropertyPath>)          InputProperties                                             OFFSET(get<T>, {0x3F0, 80, 0, 0})
	CMember(TMap<FName, FCachedPropertyPath>)          OutputProperties                                            OFFSET(get<T>, {0x440, 80, 0, 0})
	SMember(FControlRigDrawContainer)                  DrawContainer                                               OFFSET(getStruct<T>, {0x490, 24, 0, 0})
	CMember(class UAnimationDataSourceRegistry*)       DataSourceRegistry                                          OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(TArray<FName>)                             EventQueue                                                  OFFSET(get<T>, {0x4C8, 16, 0, 0})
	SMember(FRigInfluenceMapPerEvent)                  Influences                                                  OFFSET(getStruct<T>, {0x550, 96, 0, 0})
	CMember(class UControlRig*)                        InteractionRig                                              OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(class UClass*)                             InteractionRigClass                                         OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(TArray<class UAssetUserData*>)             AssetUserData                                               OFFSET(get<T>, {0x5C0, 16, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRig.SetInteractionRigClass
	// void SetInteractionRigClass(class UClass* InInteractionRigClass);                                                        // [0xb4c5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SetInteractionRig
	// void SetInteractionRig(class UControlRig* InInteractionRig);                                                             // [0xb4c540] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.GetInteractionRigClass
	// class UClass* GetInteractionRigClass();                                                                                  // [0xb4b190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetInteractionRig
	// class UControlRig* GetInteractionRig();                                                                                  // [0xb4b170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.AdditiveControlRig
/// Size: 0x0010 (0x000650 - 0x000660)
class UAdditiveControlRig : public UControlRig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:
};

/// Class /Script/ControlRig.ControlRigAnimInstance
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UControlRigAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/ControlRig.ControlRigBlueprintGeneratedClass
/// Size: 0x0000 (0x000328 - 0x000328)
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
};

/// Struct /Script/ControlRig.ControlRigComponentMappedElement
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FControlRigComponentMappedElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FComponentReference)                       ComponentReference                                          OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	DMember(int32_t)                                   TransformIndex                                              OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FName)                                     TransformName                                               OFFSET(getStruct<T>, {0x2C, 8, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0x34, 1, 0, 0})
	SMember(FName)                                     ElementName                                                 OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	CMember(EControlRigComponentMapDirection)          Direction                                                   OFFSET(get<T>, {0x40, 1, 0, 0})
	SMember(FTransform)                                Offset                                                      OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(EControlRigComponentSpace)                 Space                                                       OFFSET(get<T>, {0x84, 1, 0, 0})
	CMember(class USceneComponent*)                    SceneComponent                                              OFFSET(get<T>, {0x88, 8, 0, 0})
	DMember(int32_t)                                   ElementIndex                                                OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(int32_t)                                   SubIndex                                                    OFFSET(get<int32_t>, {0x94, 4, 0, 0})
};

/// Class /Script/ControlRig.ControlRigComponent
/// Size: 0x00F8 (0x000468 - 0x000560)
class UControlRigComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	CMember(class UClass*)                             ControlRigClass                                             OFFSET(get<T>, {0x468, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostInitializeDelegate                                    OFFSET(getStruct<T>, {0x470, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreSetupDelegate                                          OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostSetupDelegate                                         OFFSET(getStruct<T>, {0x490, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreUpdateDelegate                                         OFFSET(getStruct<T>, {0x4A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostUpdateDelegate                                        OFFSET(getStruct<T>, {0x4B0, 16, 0, 0})
	CMember(TArray<FControlRigComponentMappedElement>) MappedElements                                              OFFSET(get<T>, {0x4C0, 16, 0, 0})
	DMember(bool)                                      bResetTransformBeforeTick                                   OFFSET(get<bool>, {0x4D0, 1, 0, 0})
	DMember(bool)                                      bResetInitialsBeforeSetup                                   OFFSET(get<bool>, {0x4D1, 1, 0, 0})
	DMember(bool)                                      bUpdateRigOnTick                                            OFFSET(get<bool>, {0x4D2, 1, 0, 0})
	DMember(bool)                                      bUpdateInEditor                                             OFFSET(get<bool>, {0x4D3, 1, 0, 0})
	DMember(bool)                                      bDrawBones                                                  OFFSET(get<bool>, {0x4D4, 1, 0, 0})
	CMember(class UControlRig*)                        ControlRig                                                  OFFSET(get<T>, {0x4D8, 8, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRigComponent.Update
	// void Update(float DeltaTime);                                                                                            // [0xb4c750] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetMappedElements
	// void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                     // [0xb4c660] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetInitialSpaceTransform
	// void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space);            // [0xb4c3b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetInitialBoneTransform
	// void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren); // [0xb4c200] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlVector2D
	// void SetControlVector2D(FName ControlName, FVector2D Value);                                                             // [0xb4c130] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlTransform
	// void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space);                          // [0xb4bfa0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlScale
	// void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space);                                 // [0xb4be80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlRotator
	// void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space);                              // [0xb4bd60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlPosition
	// void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space);                              // [0xb4bc40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlOffset
	// void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space);                   // [0xb4bab0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlInt
	// void SetControlInt(FName ControlName, int32_t Value);                                                                    // [0xb4b9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlFloat
	// void SetControlFloat(FName ControlName, float Value);                                                                    // [0xb4b910] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlBool
	// void SetControlBool(FName ControlName, bool Value);                                                                      // [0xb4b840] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetBoneTransform
	// void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren); // [0xb4b640] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
	// void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);                                      // [0xb4b5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.OnPreUpdate
	// void OnPreUpdate(class UControlRigComponent* Component);                                                                 // [0xb4b520] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPreSetup
	// void OnPreSetup(class UControlRigComponent* Component);                                                                  // [0xb4b490] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostUpdate
	// void OnPostUpdate(class UControlRigComponent* Component);                                                                // [0xb4b400] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostSetup
	// void OnPostSetup(class UControlRigComponent* Component);                                                                 // [0xb4b370] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostInitialize
	// void OnPostInitialize(class UControlRigComponent* Component);                                                            // [0xb4b2e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.Initialize
	// void Initialize();                                                                                                       // [0xb4b2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.GetSpaceTransform
	// FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                          // [0xb4b1b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetInitialSpaceTransform
	// FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                   // [0xb4b060] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetInitialBoneTransform
	// FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                     // [0xb4af50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetElementNames
	// TArray<FName> GetElementNames(ERigElementType ElementType);                                                              // [0xb4ae70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlVector2D
	// FVector2D GetControlVector2D(FName ControlName);                                                                         // [0xb4ade0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlTransform
	// FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace Space);                                      // [0xb4acd0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlScale
	// FVector GetControlScale(FName ControlName, EControlRigComponentSpace Space);                                             // [0xb4abf0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlRotator
	// FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace Space);                                          // [0xb4ab10] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlRig
	// class UControlRig* GetControlRig();                                                                                      // [0xb4aae0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlPosition
	// FVector GetControlPosition(FName ControlName, EControlRigComponentSpace Space);                                          // [0xb4aa00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlOffset
	// FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace Space);                                         // [0xb4a8f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.GetControlInt
	// int32_t GetControlInt(FName ControlName);                                                                                // [0xb4a850] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlFloat
	// float GetControlFloat(FName ControlName);                                                                                // [0xb4a7b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlBool
	// bool GetControlBool(FName ControlName);                                                                                  // [0xb4a710] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetBoneTransform
	// FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                            // [0xb4a600] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetAbsoluteTime
	// float GetAbsoluteTime();                                                                                                 // [0xb4a5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigComponent.DoesElementExist
	// bool DoesElementExist(FName Name, ERigElementType ElementType);                                                          // [0xb4a500] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.ClearMappedElements
	// void ClearMappedElements();                                                                                              // [0xb4a4e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedSkeletalMesh
	// void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves); // [0xb4a330] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedElements
	// void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                     // [0xb4a240] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedComponents
	// void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);                                        // [0xb4a150] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
	// void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);                                 // [0xb4a0c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigControlActor
/// Size: 0x0090 (0x000220 - 0x0002B0)
class AControlRigControlActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(class AActor*)                             ActorToTrack                                                OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UClass*)                             ControlRigClass                                             OFFSET(get<T>, {0x228, 8, 0, 0})
	DMember(bool)                                      bRefreshOnTick                                              OFFSET(get<bool>, {0x230, 1, 0, 0})
	DMember(bool)                                      bIsSelectable                                               OFFSET(get<bool>, {0x231, 1, 0, 0})
	CMember(class UMaterialInterface*)                 MaterialOverride                                            OFFSET(get<T>, {0x238, 8, 0, 0})
	SMember(FString)                                   ColorParameter                                              OFFSET(getStruct<T>, {0x240, 16, 0, 0})
	DMember(bool)                                      bCastShadows                                                OFFSET(get<bool>, {0x250, 1, 0, 0})
	CMember(class USceneComponent*)                    ActorRootComponent                                          OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(class UControlRig*)                        ControlRig                                                  OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(TArray<FName>)                             ControlNames                                                OFFSET(get<T>, {0x268, 16, 0, 0})
	CMember(TArray<FTransform>)                        GizmoTransforms                                             OFFSET(get<T>, {0x278, 16, 0, 0})
	CMember(TArray<class UStaticMeshComponent*>)       Components                                                  OFFSET(get<T>, {0x288, 16, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   Materials                                                   OFFSET(get<T>, {0x298, 16, 0, 0})
	SMember(FName)                                     ColorParameterName                                          OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRigControlActor.Refresh
	// void Refresh();                                                                                                          // [0xb52520] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigControlActor.Clear
	// void Clear();                                                                                                            // [0xb52410] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigGizmoActor
/// Size: 0x0028 (0x000220 - 0x000248)
class AControlRigGizmoActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	CMember(class USceneComponent*)                    ActorRootComponent                                          OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               StaticMeshComponent                                         OFFSET(get<T>, {0x228, 8, 0, 0})
	DMember(uint32_t)                                  ControlRigIndex                                             OFFSET(get<uint32_t>, {0x230, 4, 0, 0})
	SMember(FName)                                     ControlName                                                 OFFSET(getStruct<T>, {0x234, 8, 0, 0})
	SMember(FName)                                     ColorParameterName                                          OFFSET(getStruct<T>, {0x23C, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x244, 1, 1, 0})
	DMember(bool)                                      bSelected                                                   OFFSET(get<bool>, {0x244, 1, 1, 1})
	DMember(bool)                                      bSelectable                                                 OFFSET(get<bool>, {0x244, 1, 1, 2})
	DMember(bool)                                      bHovered                                                    OFFSET(get<bool>, {0x244, 1, 1, 3})


	/// Functions
	// Function /Script/ControlRig.ControlRigGizmoActor.SetSelected
	// void SetSelected(bool bInSelected);                                                                                      // [0xb527d0] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigGizmoActor.SetSelectable
	// void SetSelectable(bool bInSelectable);                                                                                  // [0xb52740] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigGizmoActor.SetHovered
	// void SetHovered(bool bInHovered);                                                                                        // [0xb526b0] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigGizmoActor.SetGlobalTransform
	// void SetGlobalTransform(FTransform& InTransform);                                                                        // [0xb525d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigGizmoActor.SetEnabled
	// void SetEnabled(bool bInEnabled);                                                                                        // [0xb52540] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigGizmoActor.OnTransformChanged
	// void OnTransformChanged(FTransform& NewTransform);                                                                       // [0x198a600] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigGizmoActor.OnSelectionChanged
	// void OnSelectionChanged(bool bIsSelected);                                                                               // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigGizmoActor.OnManipulatingChanged
	// void OnManipulatingChanged(bool bIsManipulating);                                                                        // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigGizmoActor.OnHoveredChanged
	// void OnHoveredChanged(bool bIsSelected);                                                                                 // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigGizmoActor.OnEnabledChanged
	// void OnEnabledChanged(bool bIsEnabled);                                                                                  // [0x198a600] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigGizmoActor.IsSelectedInEditor
	// bool IsSelectedInEditor();                                                                                               // [0xb524f0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigGizmoActor.IsHovered
	// bool IsHovered();                                                                                                        // [0xb524c0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigGizmoActor.IsEnabled
	// bool IsEnabled();                                                                                                        // [0xb52490] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigGizmoActor.GetGlobalTransform
	// FTransform GetGlobalTransform();                                                                                         // [0xb52430] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/ControlRig.ControlRigGizmoDefinition
/// Size: 0x0060 (0x000000 - 0x000060)
class FControlRigGizmoDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     GizmoName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<class UStaticMesh*>)        StaticMesh                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Class /Script/ControlRig.ControlRigGizmoLibrary
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UControlRigGizmoLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FControlRigGizmoDefinition)                DefaultGizmo                                                OFFSET(getStruct<T>, {0x30, 96, 0, 0})
	CMember(TWeakObjectPtr<class UMaterial*>)          DefaultMaterial                                             OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FName)                                     MaterialColorParameter                                      OFFSET(getStruct<T>, {0xB8, 8, 0, 0})
	CMember(TArray<FControlRigGizmoDefinition>)        Gizmos                                                      OFFSET(get<T>, {0xC0, 16, 0, 0})
};

/// Class /Script/ControlRig.ControlRigLayerInstance
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UControlRigLayerInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/ControlRig.ControlRigValidationPass
/// Size: 0x0000 (0x000028 - 0x000028)
class UControlRigValidationPass : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/ControlRig.CachedRigElement
/// Size: 0x0014 (0x000000 - 0x000014)
class FCachedRigElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FRigElementKey)                            Key                                                         OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(uint16_t)                                  Index                                                       OFFSET(get<uint16_t>, {0xC, 2, 0, 0})
	DMember(int32_t)                                   ContainerVersion                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigPoseElement
/// Size: 0x0090 (0x000000 - 0x000090)
class FRigPoseElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FCachedRigElement)                         Index                                                       OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	SMember(FTransform)                                GlobalTransform                                             OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	DMember(float)                                     CurveValue                                                  OFFSET(get<float>, {0x80, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigPose
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigPose : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigPoseElement>)                   Elements                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/ControlRig.ControlRigNumericalValidationPass
/// Size: 0x0038 (0x000028 - 0x000060)
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bCheckControls                                              OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bCheckBones                                                 OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bCheckCurves                                                OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(float)                                     TranslationPrecision                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     RotationPrecision                                           OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     ScalePrecision                                              OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     CurvePrecision                                              OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FName)                                     EventNameA                                                  OFFSET(getStruct<T>, {0x3C, 8, 0, 0})
	SMember(FName)                                     EventNameB                                                  OFFSET(getStruct<T>, {0x44, 8, 0, 0})
	SMember(FRigPose)                                  Pose                                                        OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/ControlRig.ControlRigObjectHolder
/// Size: 0x0010 (0x000028 - 0x000038)
class UControlRigObjectHolder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UObject*>)                    Objects                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ControlRig.ControlRigSequence
/// Size: 0x0058 (0x0001C8 - 0x000220)
class UControlRigSequence : public ULevelSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(TWeakObjectPtr<class UAnimSequence*>)      LastExportedToAnimationSequence                             OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(TWeakObjectPtr<class USkeletalMesh*>)      LastExportedUsingSkeletalMesh                               OFFSET(get<T>, {0x1F0, 8, 0, 0})
	DMember(float)                                     LastExportedFrameRate                                       OFFSET(get<float>, {0x218, 4, 0, 0})
};

/// Class /Script/ControlRig.ControlRigSequencerAnimInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
};

/// Class /Script/ControlRig.ControlRigSettings
/// Size: 0x0000 (0x000038 - 0x000038)
class UControlRigSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/ControlRig.ControlRigValidator
/// Size: 0x0040 (0x000028 - 0x000068)
class UControlRigValidator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<class UControlRigValidationPass*>)  Passes                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ControlRig.FKControlRig
/// Size: 0x0018 (0x000650 - 0x000668)
class UFKControlRig : public UControlRig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1640;

public:
	CMember(TArray<bool>)                              IsControlActive                                             OFFSET(get<T>, {0x650, 16, 0, 0})
	CMember(EControlRigFKRigExecuteMode)               ApplyMode                                                   OFFSET(get<T>, {0x660, 1, 0, 0})
};

/// Struct /Script/ControlRig.ChannelMapInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FChannelMapInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   ControlIndex                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TotalChannelIndex                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ChannelIndex                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ParentControlIndex                                          OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FName)                                     ChannelTypeName                                             OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/ControlRig.EnumParameterNameAndCurve
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FEnumParameterNameAndCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FMovieSceneByteChannel)                    ParameterCurve                                              OFFSET(getStruct<T>, {0x8, 152, 0, 0})
};

/// Struct /Script/ControlRig.IntegerParameterNameAndCurve
/// Size: 0x0098 (0x000000 - 0x000098)
class FIntegerParameterNameAndCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FMovieSceneIntegerChannel)                 ParameterCurve                                              OFFSET(getStruct<T>, {0x8, 144, 0, 0})
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterSection
/// Size: 0x0200 (0x000148 - 0x000348)
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(class UControlRig*)                        ControlRig                                                  OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(TArray<bool>)                              ControlsMask                                                OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FMovieSceneTransformMask)                  TransformMask                                               OFFSET(getStruct<T>, {0x160, 4, 0, 0})
	DMember(bool)                                      bAdditive                                                   OFFSET(get<bool>, {0x164, 1, 0, 0})
	DMember(bool)                                      bApplyBoneFilter                                            OFFSET(get<bool>, {0x165, 1, 0, 0})
	SMember(FInputBlendPose)                           BoneFilter                                                  OFFSET(getStruct<T>, {0x168, 104, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Weight                                                      OFFSET(getStruct<T>, {0x1D0, 160, 0, 0})
	CMember(TMap<FName, FChannelMapInfo>)              ControlChannelMap                                           OFFSET(get<T>, {0x270, 80, 0, 0})
	CMember(TArray<FEnumParameterNameAndCurve>)        EnumParameterNamesAndCurves                                 OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<FIntegerParameterNameAndCurve>)     IntegerParameterNamesAndCurves                              OFFSET(get<T>, {0x2D0, 16, 0, 0})
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterTrack
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UControlRig*)                        ControlRig                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class UMovieSceneSection*)                 SectionToKey                                                OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FName)                                     TrackName                                                   OFFSET(getStruct<T>, {0xA8, 8, 0, 0})
};

/// Struct /Script/ControlRig.ConstraintNodeData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FConstraintNodeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FTransform)                                RelativeParent                                              OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FConstraintOffset)                         ConstraintOffset                                            OFFSET(getStruct<T>, {0x30, 96, 0, 0})
	SMember(FName)                                     LinkedNode                                                  OFFSET(getStruct<T>, {0x90, 8, 0, 0})
	CMember(TArray<FTransformConstraint>)              Constraints                                                 OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/ControlRig.AnimationHierarchy
/// Size: 0x0010 (0x000078 - 0x000088)
class FAnimationHierarchy : public FNodeHierarchyWithUserData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FConstraintNodeData>)               UserData                                                    OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigIOSettings
/// Size: 0x0002 (0x000000 - 0x000002)
class FControlRigIOSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bUpdatePose                                                 OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bUpdateCurves                                               OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/ControlRig.AnimNode_ControlRigBase
/// Size: 0x0118 (0x000058 - 0x000170)
class FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(TMap<FName, uint16_t>)                     ControlRigBoneMapping                                       OFFSET(get<T>, {0x68, 80, 0, 0})
	CMember(TMap<FName, uint16_t>)                     ControlRigCurveMapping                                      OFFSET(get<T>, {0xB8, 80, 0, 0})
	CMember(TMap<FName, uint16_t>)                     InputToCurveMappingUIDs                                     OFFSET(get<T>, {0x108, 80, 0, 0})
	CMember(TWeakObjectPtr<class UNodeMappingContainer*>) NodeMappingContainer                                     OFFSET(get<T>, {0x158, 8, 0, 0})
	SMember(FControlRigIOSettings)                     InputSettings                                               OFFSET(getStruct<T>, {0x160, 2, 0, 0})
	SMember(FControlRigIOSettings)                     OutputSettings                                              OFFSET(getStruct<T>, {0x162, 2, 0, 0})
	DMember(bool)                                      bExecute                                                    OFFSET(get<bool>, {0x164, 1, 0, 0})
};

/// Struct /Script/ControlRig.AnimNode_ControlRig
/// Size: 0x01F8 (0x000170 - 0x000368)
class FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(class UClass*)                             ControlRigClass                                             OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(class UControlRig*)                        ControlRig                                                  OFFSET(get<T>, {0x178, 8, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x180, 4, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x184, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x185, 1, 1, 0})
	DMember(bool)                                      bSetRefPoseFromSkeleton                                     OFFSET(get<bool>, {0x185, 1, 1, 1})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x188, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x190, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0x1D8, 8, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0x1E0, 48, 0, 0})
	CMember(TMap<FName, FName>)                        InputMapping                                                OFFSET(get<T>, {0x210, 80, 0, 0})
	CMember(TMap<FName, FName>)                        OutputMapping                                               OFFSET(get<T>, {0x260, 80, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x360, 4, 0, 0})
};

/// Struct /Script/ControlRig.AnimNode_ControlRig_ExternalSource
/// Size: 0x0008 (0x000170 - 0x000178)
class FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(TWeakObjectPtr<class UControlRig*>)        ControlRig                                                  OFFSET(get<T>, {0x170, 8, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigAnimInstanceProxy
/// Size: 0x00A0 (0x000760 - 0x000800)
class FControlRigAnimInstanceProxy : public FAnimInstanceProxy
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2048;

public:
};

/// Struct /Script/ControlRig.ControlRigComponentMappedCurve
/// Size: 0x0010 (0x000000 - 0x000010)
class FControlRigComponentMappedCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Source                                                      OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Target                                                      OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigComponentMappedBone
/// Size: 0x0010 (0x000000 - 0x000010)
class FControlRigComponentMappedBone : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Source                                                      OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Target                                                      OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigComponentMappedComponent
/// Size: 0x0018 (0x000000 - 0x000018)
class FControlRigComponentMappedComponent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class USceneComponent*)                    Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ElementName                                                 OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(EControlRigComponentMapDirection)          Direction                                                   OFFSET(get<T>, {0x11, 1, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigExecuteContext
/// Size: 0x0008 (0x000058 - 0x000060)
class FControlRigExecuteContext : public FRigVMExecuteContext
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/ControlRig.ControlRigDrawInterface
/// Size: 0x0000 (0x000018 - 0x000018)
class FControlRigDrawInterface : public FControlRigDrawContainer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.GizmoActorCreationParam
/// Size: 0x0120 (0x000000 - 0x000120)
class FGizmoActorCreationParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Struct /Script/ControlRig.ControlRigLayerInstanceProxy
/// Size: 0x00A0 (0x000760 - 0x000800)
class FControlRigLayerInstanceProxy : public FAnimInstanceProxy
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2048;

public:
};

/// Struct /Script/ControlRig.AnimNode_ControlRigInputPose
/// Size: 0x0020 (0x000010 - 0x000030)
class FAnimNode_ControlRigInputPose : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FPoseLink)                                 InputPose                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.CRFourPointBezier
/// Size: 0x0030 (0x000000 - 0x000030)
class FCRFourPointBezier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   C                                                           OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector)                                   D                                                           OFFSET(getStruct<T>, {0x24, 12, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReference
/// Size: 0x0008 (0x000000 - 0x000008)
class FControlRigSequenceObjectReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UClass*)                             ControlRigClass                                             OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferences
/// Size: 0x0010 (0x000000 - 0x000010)
class FControlRigSequenceObjectReferences : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FControlRigSequenceObjectReference>) Array                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferenceMap
/// Size: 0x0020 (0x000000 - 0x000020)
class FControlRigSequenceObjectReferenceMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FGuid>)                             BindingIds                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FControlRigSequenceObjectReferences>) References                                                OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigSequencerAnimInstanceProxy
/// Size: 0x02B0 (0x000A00 - 0x000CB0)
class FControlRigSequencerAnimInstanceProxy : public FAnimSequencerInstanceProxy
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3248;

public:
};

/// Struct /Script/ControlRig.ControlRigSettingsPerPinBool
/// Size: 0x0050 (0x000000 - 0x000050)
class FControlRigSettingsPerPinBool : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, bool>)                       Values                                                      OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigValidationContext
/// Size: 0x0028 (0x000000 - 0x000028)
class FControlRigValidationContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/ControlRig.CRSimContainer
/// Size: 0x0018 (0x000000 - 0x000018)
class FCRSimContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     TimeStep                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     AccumulatedTime                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     TimeLeftForStep                                             OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.CRSimLinearSpring
/// Size: 0x0010 (0x000000 - 0x000010)
class FCRSimLinearSpring : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   SubjectA                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SubjectB                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     Coefficient                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Equilibrium                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.CRSimPoint
/// Size: 0x0028 (0x000000 - 0x000028)
class FCRSimPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Size                                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LinearDamping                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     InheritMotion                                               OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FVector)                                   LinearVelocity                                              OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
};

/// Struct /Script/ControlRig.CRSimPointConstraint
/// Size: 0x0024 (0x000000 - 0x000024)
class FCRSimPointConstraint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(ECRSimConstraintType)                      Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   SubjectA                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   SubjectB                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FVector)                                   DataA                                                       OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   DataB                                                       OFFSET(getStruct<T>, {0x18, 12, 0, 0})
};

/// Struct /Script/ControlRig.CRSimPointForce
/// Size: 0x0018 (0x000000 - 0x000018)
class FCRSimPointForce : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ECRSimPointForceType)                      ForceType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	DMember(float)                                     Coefficient                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bNormalize                                                  OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/ControlRig.CRSimSoftCollision
/// Size: 0x0050 (0x000000 - 0x000050)
class FCRSimSoftCollision : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(ECRSimSoftCollisionType)                   ShapeType                                                   OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     MinimumDistance                                             OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaximumDistance                                             OFFSET(get<float>, {0x38, 4, 0, 0})
	CMember(EControlRigAnimEasingType)                 FalloffType                                                 OFFSET(get<T>, {0x3C, 1, 0, 0})
	DMember(float)                                     Coefficient                                                 OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bInverted                                                   OFFSET(get<bool>, {0x44, 1, 0, 0})
};

/// Struct /Script/ControlRig.CRSimPointContainer
/// Size: 0x0060 (0x000018 - 0x000078)
class FCRSimPointContainer : public FCRSimContainer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FCRSimPoint>)                       Points                                                      OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FCRSimLinearSpring>)                Springs                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FCRSimPointForce>)                  Forces                                                      OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FCRSimSoftCollision>)               CollisionVolumes                                            OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FCRSimPointConstraint>)             Constraints                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FCRSimPoint>)                       PreviousStep                                                OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/ControlRig.MovieSceneControlRigInstanceData
/// Size: 0x0128 (0x000008 - 0x000130)
class FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(bool)                                      bAdditive                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bApplyBoneFilter                                            OFFSET(get<bool>, {0x9, 1, 0, 0})
	SMember(FInputBlendPose)                           BoneFilter                                                  OFFSET(getStruct<T>, {0x10, 104, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Weight                                                      OFFSET(getStruct<T>, {0x78, 160, 0, 0})
	SMember(FMovieSceneEvaluationOperand)              Operand                                                     OFFSET(getStruct<T>, {0x118, 20, 0, 0})
};

/// Struct /Script/ControlRig.MovieSceneControlRigParameterTemplate
/// Size: 0x0020 (0x000080 - 0x0000A0)
class FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TArray<FEnumParameterNameAndCurve>)        Enums                                                       OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FIntegerParameterNameAndCurve>)     Integers                                                    OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigHierarchyRef
/// Size: 0x0001 (0x000000 - 0x000001)
class FRigHierarchyRef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ControlRig.RigMirrorSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigMirrorSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TEnumAsByte<EAxis>)                        MirrorAxis                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        AxisToFlip                                                  OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FString)                                   OldName                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   NewName                                                     OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigHierarchyCopyPasteContent
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigHierarchyCopyPasteContent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<ERigElementType>)                   Types                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           Contents                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FTransform>)                        LocalTransforms                                             OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FTransform>)                        GlobalTransforms                                            OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigEventContext
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigEventContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/ControlRig.RigElementKeyCollection
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigElementKeyCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigControlModifiedContext
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigControlModifiedContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigInfluenceEntryModifier
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigInfluenceEntryModifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigElementKey>)                    AffectedList                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit : public FRigVMStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnitMutable
/// Size: 0x0060 (0x000008 - 0x000068)
class FRigUnitMutable : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(getStruct<T>, {0x8, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SimBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_SimBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorRange
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigUnit_AccumulateVectorRange : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Minimum                                                     OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   Maximum                                                     OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FVector)                                   AccumulatedMinimum                                          OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	SMember(FVector)                                   AccumulatedMaximum                                          OFFSET(getStruct<T>, {0x38, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatRange
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_AccumulateFloatRange : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AccumulatedMinimum                                          OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AccumulatedMaximum                                          OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AccumulateTransformLerp
/// Size: 0x00D8 (0x000008 - 0x0000E0)
class FRigUnit_AccumulateTransformLerp : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FTransform)                                TargetValue                                                 OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FTransform)                                InitialValue                                                OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	DMember(float)                                     Blend                                                       OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x74, 1, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	SMember(FTransform)                                AccumulatedValue                                            OFFSET(getStruct<T>, {0xB0, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AccumulateQuatLerp
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigUnit_AccumulateQuatLerp : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FQuat)                                     TargetValue                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     InitialValue                                                OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(float)                                     Blend                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x34, 1, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FQuat)                                     AccumulatedValue                                            OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorLerp
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_AccumulateVectorLerp : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   TargetValue                                                 OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   InitialValue                                                OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(float)                                     Blend                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x24, 1, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	SMember(FVector)                                   AccumulatedValue                                            OFFSET(getStruct<T>, {0x34, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatLerp
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_AccumulateFloatLerp : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     TargetValue                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     InitialValue                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Blend                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     AccumulatedValue                                            OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AccumulateTransformMul
/// Size: 0x00D8 (0x000008 - 0x0000E0)
class FRigUnit_AccumulateTransformMul : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FTransform)                                Multiplier                                                  OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FTransform)                                InitialValue                                                OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	DMember(bool)                                      bFlipOrder                                                  OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x71, 1, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	SMember(FTransform)                                AccumulatedValue                                            OFFSET(getStruct<T>, {0xB0, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AccumulateQuatMul
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigUnit_AccumulateQuatMul : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FQuat)                                     Multiplier                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     InitialValue                                                OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bFlipOrder                                                  OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x31, 1, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FQuat)                                     AccumulatedValue                                            OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorMul
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_AccumulateVectorMul : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Multiplier                                                  OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   InitialValue                                                OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	SMember(FVector)                                   AccumulatedValue                                            OFFSET(getStruct<T>, {0x30, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatMul
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_AccumulateFloatMul : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Multiplier                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     InitialValue                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AccumulatedValue                                            OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorAdd
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_AccumulateVectorAdd : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Increment                                                   OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   InitialValue                                                OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	SMember(FVector)                                   AccumulatedValue                                            OFFSET(getStruct<T>, {0x30, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatAdd
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_AccumulateFloatAdd : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Increment                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     InitialValue                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bIntegrateDeltaTime                                         OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AccumulatedValue                                            OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AddBoneTransform
/// Size: 0x0058 (0x000068 - 0x0000C0)
class FRigUnit_AddBoneTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     Bone                                                        OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(bool)                                      bPostMultiply                                               OFFSET(get<bool>, {0xA4, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xA5, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0xA8, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBaseMutable
/// Size: 0x0000 (0x000068 - 0x000068)
class FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/ControlRig.RigUnit_AimItem_Target
/// Size: 0x002C (0x000000 - 0x00002C)
class FRigUnit_AimItem_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Axis                                                        OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	CMember(EControlRigVectorKind)                     Kind                                                        OFFSET(get<T>, {0x1C, 1, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimBone_DebugSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigUnit_AimBone_DebugSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimItem
/// Size: 0x00E8 (0x000068 - 0x000150)
class FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	SMember(FRigUnit_AimItem_Target)                   Primary                                                     OFFSET(getStruct<T>, {0x74, 44, 0, 0})
	SMember(FRigUnit_AimItem_Target)                   Secondary                                                   OFFSET(getStruct<T>, {0xA0, 44, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xCC, 4, 0, 0})
	SMember(FRigUnit_AimBone_DebugSettings)            DebugSettings                                               OFFSET(getStruct<T>, {0xD0, 64, 0, 0})
	SMember(FCachedRigElement)                         CachedItem                                                  OFFSET(getStruct<T>, {0x110, 20, 0, 0})
	SMember(FCachedRigElement)                         PrimaryCachedSpace                                          OFFSET(getStruct<T>, {0x124, 20, 0, 0})
	SMember(FCachedRigElement)                         SecondaryCachedSpace                                        OFFSET(getStruct<T>, {0x138, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimBone_Target
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigUnit_AimBone_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Axis                                                        OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	CMember(EControlRigVectorKind)                     Kind                                                        OFFSET(get<T>, {0x1C, 1, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimBone
/// Size: 0x00E8 (0x000068 - 0x000150)
class FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FName)                                     Bone                                                        OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FRigUnit_AimBone_Target)                   Primary                                                     OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FRigUnit_AimBone_Target)                   Secondary                                                   OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xC4, 1, 0, 0})
	SMember(FRigUnit_AimBone_DebugSettings)            DebugSettings                                               OFFSET(getStruct<T>, {0xD0, 64, 0, 0})
	SMember(FCachedRigElement)                         CachedBoneIndex                                             OFFSET(getStruct<T>, {0x110, 20, 0, 0})
	SMember(FCachedRigElement)                         PrimaryCachedSpace                                          OFFSET(getStruct<T>, {0x124, 20, 0, 0})
	SMember(FCachedRigElement)                         SecondaryCachedSpace                                        OFFSET(getStruct<T>, {0x138, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_HighlevelBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_AimBoneMath
/// Size: 0x0138 (0x000008 - 0x000140)
class FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FTransform)                                InputTransform                                              OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FRigUnit_AimItem_Target)                   Primary                                                     OFFSET(getStruct<T>, {0x40, 44, 0, 0})
	SMember(FRigUnit_AimItem_Target)                   Secondary                                                   OFFSET(getStruct<T>, {0x6C, 44, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x98, 4, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
	SMember(FRigUnit_AimBone_DebugSettings)            DebugSettings                                               OFFSET(getStruct<T>, {0xD0, 64, 0, 0})
	SMember(FCachedRigElement)                         PrimaryCachedSpace                                          OFFSET(getStruct<T>, {0x110, 20, 0, 0})
	SMember(FCachedRigElement)                         SecondaryCachedSpace                                        OFFSET(getStruct<T>, {0x124, 20, 0, 0})
};

/// Struct /Script/ControlRig.AimTarget
/// Size: 0x0050 (0x000000 - 0x000050)
class FAimTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FVector)                                   AlignVector                                                 OFFSET(getStruct<T>, {0x40, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_AimConstraint_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FConstraintData>)                   ConstraintData                                              OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint
/// Size: 0x0058 (0x000068 - 0x0000C0)
class FRigUnit_AimConstraint : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     Joint                                                       OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	CMember(EAimMode)                                  AimMode                                                     OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(EAimMode)                                  UpMode                                                      OFFSET(get<T>, {0x71, 1, 0, 0})
	SMember(FVector)                                   AimVector                                                   OFFSET(getStruct<T>, {0x74, 12, 0, 0})
	SMember(FVector)                                   UpVector                                                    OFFSET(getStruct<T>, {0x80, 12, 0, 0})
	CMember(TArray<FAimTarget>)                        AimTargets                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FAimTarget>)                        UpTargets                                                   OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FRigUnit_AimConstraint_WorkData)           WorkData                                                    OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AlphaInterpVector
/// Size: 0x0080 (0x000008 - 0x000088)
class FRigUnit_AlphaInterpVector : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Bias                                                        OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bMapRange                                                   OFFSET(get<bool>, {0x1C, 1, 0, 0})
	SMember(FInputRange)                               InRange                                                     OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FInputRange)                               OutRange                                                    OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bClampResult                                                OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     ClampMin                                                    OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     ClampMax                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bInterpResult                                               OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(float)                                     InterpSpeedIncreasing                                       OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     InterpSpeedDecreasing                                       OFFSET(get<float>, {0x44, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x48, 12, 0, 0})
	SMember(FInputScaleBiasClamp)                      ScaleBiasClamp                                              OFFSET(getStruct<T>, {0x54, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AlphaInterp
/// Size: 0x0070 (0x000008 - 0x000078)
class FRigUnit_AlphaInterp : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Bias                                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bMapRange                                                   OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FInputRange)                               InRange                                                     OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FInputRange)                               OutRange                                                    OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      bClampResult                                                OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     ClampMin                                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     ClampMax                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(bool)                                      bInterpResult                                               OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(float)                                     InterpSpeedIncreasing                                       OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     InterpSpeedDecreasing                                       OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      ScaleBiasClamp                                              OFFSET(getStruct<T>, {0x44, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AnimBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_AnimBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_AnimEasing
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_AnimEasing : public FRigUnit_AnimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EControlRigAnimEasingType)                 Type                                                        OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(float)                                     SourceMinimum                                               OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SourceMaximum                                               OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     TargetMinimum                                               OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     TargetMaximum                                               OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AnimEasingType
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_AnimEasingType : public FRigUnit_AnimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EControlRigAnimEasingType)                 Type                                                        OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AnimEvalRichCurve
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigUnit_AnimEvalRichCurve : public FRigUnit_AnimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        Curve                                                       OFFSET(getStruct<T>, {0x10, 136, 0, 0})
	DMember(float)                                     SourceMinimum                                               OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     SourceMaximum                                               OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     TargetMinimum                                               OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     TargetMaximum                                               OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0xA8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AnimRichCurve
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_AnimRichCurve : public FRigUnit_AnimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRuntimeFloatCurve)                        Curve                                                       OFFSET(getStruct<T>, {0x8, 136, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ApplyFK
/// Size: 0x0088 (0x000068 - 0x0000F0)
class FRigUnit_ApplyFK : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FName)                                     Joint                                                       OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	SMember(FTransformFilter)                          Filter                                                      OFFSET(getStruct<T>, {0xA0, 9, 0, 0})
	CMember(EApplyTransformMode)                       ApplyTransformMode                                          OFFSET(get<T>, {0xA9, 1, 0, 0})
	CMember(ETransformSpaceMode)                       ApplyTransformSpace                                         OFFSET(get<T>, {0xAA, 1, 0, 0})
	SMember(FTransform)                                BaseTransform                                               OFFSET(getStruct<T>, {0xB0, 48, 0, 0})
	SMember(FName)                                     BaseJoint                                                   OFFSET(getStruct<T>, {0xE0, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BeginExecution
/// Size: 0x0060 (0x000008 - 0x000068)
class FRigUnit_BeginExecution : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(getStruct<T>, {0x8, 96, 0, 0})
};

/// Struct /Script/ControlRig.BlendTarget
/// Size: 0x0040 (0x000000 - 0x000040)
class FBlendTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BlendTransform
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_BlendTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                Source                                                      OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	CMember(TArray<FBlendTarget>)                      Targets                                                     OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x50, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Harmonics_TargetItem
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_Harmonics_TargetItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_WorkData
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigUnit_BoneHarmonics_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   WaveTime                                                    OFFSET(getStruct<T>, {0x10, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemHarmonics
/// Size: 0x0080 (0x000068 - 0x0000E8)
class FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TArray<FRigUnit_Harmonics_TargetItem>)     Targets                                                     OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FVector)                                   WaveSpeed                                                   OFFSET(getStruct<T>, {0x78, 12, 0, 0})
	SMember(FVector)                                   WaveFrequency                                               OFFSET(getStruct<T>, {0x84, 12, 0, 0})
	SMember(FVector)                                   WaveAmplitude                                               OFFSET(getStruct<T>, {0x90, 12, 0, 0})
	SMember(FVector)                                   WaveOffset                                                  OFFSET(getStruct<T>, {0x9C, 12, 0, 0})
	SMember(FVector)                                   WaveNoise                                                   OFFSET(getStruct<T>, {0xA8, 12, 0, 0})
	CMember(EControlRigAnimEasingType)                 WaveEase                                                    OFFSET(get<T>, {0xB4, 1, 0, 0})
	DMember(float)                                     WaveMinimum                                                 OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     WaveMaximum                                                 OFFSET(get<float>, {0xBC, 4, 0, 0})
	CMember(EControlRigRotationOrder)                  RotationOrder                                               OFFSET(get<T>, {0xC0, 1, 0, 0})
	SMember(FRigUnit_BoneHarmonics_WorkData)           WorkData                                                    OFFSET(getStruct<T>, {0xC8, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_BoneTarget
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigUnit_BoneHarmonics_BoneTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Bone                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics
/// Size: 0x0080 (0x000068 - 0x0000E8)
class FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TArray<FRigUnit_BoneHarmonics_BoneTarget>) Bones                                                       OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FVector)                                   WaveSpeed                                                   OFFSET(getStruct<T>, {0x78, 12, 0, 0})
	SMember(FVector)                                   WaveFrequency                                               OFFSET(getStruct<T>, {0x84, 12, 0, 0})
	SMember(FVector)                                   WaveAmplitude                                               OFFSET(getStruct<T>, {0x90, 12, 0, 0})
	SMember(FVector)                                   WaveOffset                                                  OFFSET(getStruct<T>, {0x9C, 12, 0, 0})
	SMember(FVector)                                   WaveNoise                                                   OFFSET(getStruct<T>, {0xA8, 12, 0, 0})
	CMember(EControlRigAnimEasingType)                 WaveEase                                                    OFFSET(get<T>, {0xB4, 1, 0, 0})
	DMember(float)                                     WaveMinimum                                                 OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     WaveMaximum                                                 OFFSET(get<float>, {0xBC, 4, 0, 0})
	CMember(EControlRigRotationOrder)                  RotationOrder                                               OFFSET(get<T>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xC1, 1, 0, 0})
	SMember(FRigUnit_BoneHarmonics_WorkData)           WorkData                                                    OFFSET(getStruct<T>, {0xC8, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ControlName
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_ControlName : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpaceName
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_SpaceName : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BoneName
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_BoneName : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Bone                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Item
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_Item : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimitPerItem
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_CCDIK_RotationLimitPerItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(float)                                     Limit                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_WorkData
/// Size: 0x0058 (0x000000 - 0x000058)
class FRigUnit_CCDIK_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FCCDIKChainLink>)                   Chain                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<int32_t>)                           RotationLimitIndex                                          OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             RotationLimitsPerItem                                       OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedEffector                                              OFFSET(getStruct<T>, {0x40, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIKPerItem
/// Size: 0x00D8 (0x000068 - 0x000140)
class FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(bool)                                      bStartFromTail                                              OFFSET(get<bool>, {0xBC, 1, 0, 0})
	DMember(float)                                     BaseRotationLimit                                           OFFSET(get<float>, {0xC0, 4, 0, 0})
	CMember(TArray<FRigUnit_CCDIK_RotationLimitPerItem>) RotationLimits                                            OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xD8, 1, 0, 0})
	SMember(FRigUnit_CCDIK_WorkData)                   WorkData                                                    OFFSET(getStruct<T>, {0xE0, 88, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimit
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigUnit_CCDIK_RotationLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Bone                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Limit                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIK
/// Size: 0x00D8 (0x000068 - 0x000140)
class FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     EffectorBone                                                OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(bool)                                      bStartFromTail                                              OFFSET(get<bool>, {0xBC, 1, 0, 0})
	DMember(float)                                     BaseRotationLimit                                           OFFSET(get<float>, {0xC0, 4, 0, 0})
	CMember(TArray<FRigUnit_CCDIK_RotationLimit>)      RotationLimits                                              OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xD8, 1, 0, 0})
	SMember(FRigUnit_CCDIK_WorkData)                   WorkData                                                    OFFSET(getStruct<T>, {0xE0, 88, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Reach
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigUnit_ChainHarmonics_Reach : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVector)                                   ReachTarget                                                 OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FVector)                                   ReachAxis                                                   OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	DMember(float)                                     ReachMinimum                                                OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     ReachMaximum                                                OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(EControlRigAnimEasingType)                 ReachEase                                                   OFFSET(get<T>, {0x24, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Wave
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigUnit_ChainHarmonics_Wave : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVector)                                   WaveFrequency                                               OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FVector)                                   WaveAmplitude                                               OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FVector)                                   WaveOffset                                                  OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
	SMember(FVector)                                   WaveNoise                                                   OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	DMember(float)                                     WaveMinimum                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     WaveMaximum                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	CMember(EControlRigAnimEasingType)                 WaveEase                                                    OFFSET(get<T>, {0x3C, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Pendulum
/// Size: 0x003C (0x000000 - 0x00003C)
class FRigUnit_ChainHarmonics_Pendulum : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     PendulumStiffness                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FVector)                                   PendulumGravity                                             OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     PendulumBlend                                               OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     PendulumDrag                                                OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     PendulumMinimum                                             OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     PendulumMaximum                                             OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(EControlRigAnimEasingType)                 PendulumEase                                                OFFSET(get<T>, {0x24, 1, 0, 0})
	SMember(FVector)                                   UnwindAxis                                                  OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	DMember(float)                                     UnwindMinimum                                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     UnwindMaximum                                               OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_WorkData
/// Size: 0x0090 (0x000000 - 0x000090)
class FRigUnit_ChainHarmonics_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FVector)                                   Time                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	CMember(TArray<FCachedRigElement>)                 Items                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<float>)                             Ratio                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FVector>)                           LocalTip                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FVector>)                           PendulumTip                                                 OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FVector>)                           PendulumPosition                                            OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FVector>)                           PendulumVelocity                                            OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FVector>)                           HierarchyLine                                               OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FVector>)                           VelocityLines                                               OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonicsPerItem
/// Size: 0x0208 (0x000068 - 0x000270)
class FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FRigElementKey)                            ChainRoot                                                   OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	SMember(FVector)                                   Speed                                                       OFFSET(getStruct<T>, {0x74, 12, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Reach)             Reach                                                       OFFSET(getStruct<T>, {0x80, 40, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Wave)              Wave                                                        OFFSET(getStruct<T>, {0xA8, 64, 0, 0})
	SMember(FRuntimeFloatCurve)                        WaveCurve                                                   OFFSET(getStruct<T>, {0xE8, 136, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Pendulum)          Pendulum                                                    OFFSET(getStruct<T>, {0x170, 60, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0x1AC, 1, 0, 0})
	SMember(FTransform)                                DrawWorldOffset                                             OFFSET(getStruct<T>, {0x1B0, 48, 0, 0})
	SMember(FRigUnit_ChainHarmonics_WorkData)          WorkData                                                    OFFSET(getStruct<T>, {0x1E0, 144, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics
/// Size: 0x0208 (0x000068 - 0x000270)
class FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FName)                                     ChainRoot                                                   OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FVector)                                   Speed                                                       OFFSET(getStruct<T>, {0x70, 12, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Reach)             Reach                                                       OFFSET(getStruct<T>, {0x7C, 40, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Wave)              Wave                                                        OFFSET(getStruct<T>, {0xA4, 64, 0, 0})
	SMember(FRuntimeFloatCurve)                        WaveCurve                                                   OFFSET(getStruct<T>, {0xE8, 136, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Pendulum)          Pendulum                                                    OFFSET(getStruct<T>, {0x170, 60, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0x1AC, 1, 0, 0})
	SMember(FTransform)                                DrawWorldOffset                                             OFFSET(getStruct<T>, {0x1B0, 48, 0, 0})
	SMember(FRigUnit_ChainHarmonics_WorkData)          WorkData                                                    OFFSET(getStruct<T>, {0x1E0, 144, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionBaseMutable
/// Size: 0x0000 (0x000068 - 0x000068)
class FRigUnit_CollectionBaseMutable : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/ControlRig.RigUnit_CollectionLoop
/// Size: 0x0090 (0x000068 - 0x0000F8)
class FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x78, 12, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(bool)                                      Continue                                                    OFFSET(get<bool>, {0x90, 1, 0, 0})
	SMember(FControlRigExecuteContext)                 Completed                                                   OFFSET(getStruct<T>, {0x98, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_CollectionBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_CollectionItemAtIndex
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionCount
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_CollectionCount : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionReverse
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  Reversed                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionDifference
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_CollectionDifference : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKeyCollection)                  A                                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  B                                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionIntersection
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKeyCollection)                  A                                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  B                                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionUnion
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKeyCollection)                  A                                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  B                                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionItems
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionItems : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionReplaceItems
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     Old                                                         OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FName)                                     New                                                         OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      RemoveInvalidItems                                          OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedCollection                                            OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   CachedHierarchyHash                                         OFFSET(get<int32_t>, {0x50, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionChildren
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigElementKey)                            Parent                                                      OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bIncludeParent                                              OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bRecursive                                                  OFFSET(get<bool>, {0x15, 1, 0, 0})
	CMember(ERigElementType)                           TypeToSearch                                                OFFSET(get<T>, {0x16, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedCollection                                            OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   CachedHierarchyHash                                         OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionNameSearch
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     PartialName                                                 OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(ERigElementType)                           TypeToSearch                                                OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedCollection                                            OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   CachedHierarchyHash                                         OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionChain
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_CollectionChain : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRigElementKey)                            FirstItem                                                   OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRigElementKey)                            LastItem                                                    OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(bool)                                      Reverse                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedCollection                                            OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(int32_t)                                   CachedHierarchyHash                                         OFFSET(get<int32_t>, {0x48, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Control
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRigUnit_Control : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FEulerTransform)                           Transform                                                   OFFSET(getStruct<T>, {0x8, 36, 0, 0})
	SMember(FTransform)                                Base                                                        OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FTransform)                                InitTransform                                               OFFSET(getStruct<T>, {0x60, 48, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	SMember(FTransformFilter)                          Filter                                                      OFFSET(getStruct<T>, {0xC0, 9, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Control_StaticMesh
/// Size: 0x0030 (0x0000D0 - 0x000100)
class FRigUnit_Control_StaticMesh : public FRigUnit_Control
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FTransform)                                MeshTransform                                               OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToSwingAndTwist
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_ToSwingAndTwist : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Input                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FQuat)                                     Swing                                                       OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FQuat)                                     Twist                                                       OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternionToVector
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_ConvertQuaternionToVector : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Input                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotationToVector
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ConvertRotationToVector : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRotator)                                  Input                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x14, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToQuaternion
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Input                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToRotation
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ConvertVectorToRotation : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Input                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRotator)                                  Result                                                      OFFSET(getStruct<T>, {0x14, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternion
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_ConvertQuaternion : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Input                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FRotator)                                  Result                                                      OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotation
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_ConvertRotation : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRotator)                                  Input                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorRotation
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_ConvertEulerTransform
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigUnit_ConvertEulerTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FEulerTransform)                           Input                                                       OFFSET(getStruct<T>, {0x8, 36, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertTransform
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_ConvertTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                Input                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FEulerTransform)                           Result                                                      OFFSET(getStruct<T>, {0x40, 36, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugBaseMutable
/// Size: 0x0000 (0x000068 - 0x000068)
class FRigUnit_DebugBaseMutable : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/ControlRig.RigUnit_DebugBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_DebugBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_DebugBezierItemSpace
/// Size: 0x00A8 (0x000068 - 0x000110)
class FRigUnit_DebugBezierItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FCRFourPointBezier)                        Bezier                                                      OFFSET(getStruct<T>, {0x68, 48, 0, 0})
	DMember(float)                                     MinimumU                                                    OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     MaximumU                                                    OFFSET(get<float>, {0x9C, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(getStruct<T>, {0xB8, 12, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x100, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugBezier
/// Size: 0x0098 (0x000068 - 0x000100)
class FRigUnit_DebugBezier : public FRigUnit_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FCRFourPointBezier)                        Bezier                                                      OFFSET(getStruct<T>, {0x68, 48, 0, 0})
	DMember(float)                                     MinimumU                                                    OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     MaximumU                                                    OFFSET(get<float>, {0x9C, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0xB8, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0xC0, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xF0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugHierarchy
/// Size: 0x0058 (0x000068 - 0x0000C0)
class FRigUnit_DebugHierarchy : public FRigUnit_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x68, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x6C, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x7C, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugLineItemSpace
/// Size: 0x0078 (0x000068 - 0x0000E0)
class FRigUnit_DebugLineItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x74, 12, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x90, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(getStruct<T>, {0x94, 12, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xD0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugLine
/// Size: 0x0078 (0x000068 - 0x0000E0)
class FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x74, 12, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x90, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x94, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xD0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStripItemSpace
/// Size: 0x0078 (0x000068 - 0x0000E0)
class FRigUnit_DebugLineStripItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FVector>)                           Points                                                      OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x88, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(getStruct<T>, {0x8C, 12, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xD0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStrip
/// Size: 0x0078 (0x000068 - 0x0000E0)
class FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FVector>)                           Points                                                      OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x88, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x8C, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xD0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugPointMutable
/// Size: 0x0078 (0x000068 - 0x0000E0)
class FRigUnit_DebugPointMutable : public FRigUnit_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	CMember(ERigUnitDebugPointMode)                    Mode                                                        OFFSET(get<T>, {0x74, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x8C, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x90, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xD0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugPoint
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_DebugPoint : public FRigUnit_DebugBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	CMember(ERigUnitDebugPointMode)                    Mode                                                        OFFSET(get<T>, {0x14, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugArcItemSpace
/// Size: 0x00A8 (0x000068 - 0x000110)
class FRigUnit_DebugArcItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     MinimumDegrees                                              OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     MaximumDegrees                                              OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(getStruct<T>, {0xC4, 12, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x100, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugArc
/// Size: 0x00A8 (0x000068 - 0x000110)
class FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     MinimumDegrees                                              OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     MaximumDegrees                                              OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0xC4, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x100, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangleItemSpace
/// Size: 0x00A8 (0x000068 - 0x000110)
class FRigUnit_DebugRectangleItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0xB4, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(getStruct<T>, {0xB8, 12, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x100, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangle
/// Size: 0x0098 (0x000068 - 0x000100)
class FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0xB4, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0xB8, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0xC0, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xF0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_DebugTransformArrayMutable_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FTransform>)                        DrawTransforms                                              OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable
/// Size: 0x0088 (0x000068 - 0x0000F0)
class FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        OFFSET(get<T>, {0x78, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x7C, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x90, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x94, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xD0, 1, 0, 0})
	SMember(FRigUnit_DebugTransformArrayMutable_WorkData) WorkData                                                 OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutableItemSpace
/// Size: 0x00A8 (0x000068 - 0x000110)
class FRigUnit_DebugTransformMutableItemSpace : public FRigUnit_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        OFFSET(get<T>, {0xA0, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0xA4, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(getStruct<T>, {0xBC, 12, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x100, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutable
/// Size: 0x00A8 (0x000068 - 0x000110)
class FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        OFFSET(get<T>, {0xA0, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0xA4, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0xBC, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x100, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigUnit_DebugTransform : public FRigUnit_DebugBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	CMember(ERigUnitDebugTransformMode)                Mode                                                        OFFSET(get<T>, {0x40, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x44, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x5C, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousTransform
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRigUnit_DeltaFromPreviousTransform : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FTransform)                                Delta                                                       OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	SMember(FTransform)                                PreviousValue                                               OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	SMember(FTransform)                                Cache                                                       OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousQuat
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_DeltaFromPreviousQuat : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     Delta                                                       OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FQuat)                                     PreviousValue                                               OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FQuat)                                     Cache                                                       OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousVector
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_DeltaFromPreviousVector : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Delta                                                       OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   PreviousValue                                               OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FVector)                                   Cache                                                       OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousFloat
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Delta                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PreviousValue                                               OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Cache                                                       OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_Rotation
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigUnit_DistributeRotation_Rotation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_WorkData
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigUnit_DistributeRotation_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           ItemRotationA                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<int32_t>)                           ItemRotationB                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             ItemRotationT                                               OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FTransform>)                        ItemLocalTransforms                                         OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotationForCollection
/// Size: 0x0078 (0x000068 - 0x0000E0)
class FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	CMember(TArray<FRigUnit_DistributeRotation_Rotation>) Rotations                                                OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(EControlRigAnimEasingType)                 RotationEaseType                                            OFFSET(get<T>, {0x88, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x8C, 4, 0, 0})
	SMember(FRigUnit_DistributeRotation_WorkData)      WorkData                                                    OFFSET(getStruct<T>, {0x90, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation
/// Size: 0x0080 (0x000068 - 0x0000E8)
class FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     EndBone                                                     OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	CMember(TArray<FRigUnit_DistributeRotation_Rotation>) Rotations                                                OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(EControlRigAnimEasingType)                 RotationEaseType                                            OFFSET(get<T>, {0x88, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x90, 1, 0, 0})
	SMember(FRigUnit_DistributeRotation_WorkData)      WorkData                                                    OFFSET(getStruct<T>, {0x98, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetTransform
/// Size: 0x0038 (0x000068 - 0x0000A0)
class FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     InstructionName                                             OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x70, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetThickness
/// Size: 0x0010 (0x000068 - 0x000078)
class FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     InstructionName                                             OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetColor
/// Size: 0x0018 (0x000068 - 0x000080)
class FRigUnit_DrawContainerSetColor : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     InstructionName                                             OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerGetInstruction
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_DrawContainerGetInstruction : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     InstructionName                                             OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FABRIK_WorkData
/// Size: 0x0038 (0x000000 - 0x000038)
class FRigUnit_FABRIK_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FFABRIKChainLink>)                  Chain                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedEffector                                              OFFSET(getStruct<T>, {0x20, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FABRIKPerItem
/// Size: 0x0098 (0x000068 - 0x000100)
class FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	SMember(FRigUnit_FABRIK_WorkData)                  WorkData                                                    OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FABRIK
/// Size: 0x0098 (0x000068 - 0x000100)
class FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     EffectorBone                                                OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	SMember(FRigUnit_FABRIK_WorkData)                  WorkData                                                    OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_Rotation
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigUnit_FitChainToCurve_Rotation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_DebugSettings
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigUnit_FitChainToCurve_DebugSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FLinearColor)                              CurveColor                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FLinearColor)                              SegmentsColor                                               OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_WorkData
/// Size: 0x0098 (0x000000 - 0x000098)
class FRigUnit_FitChainToCurve_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(float)                                     ChainLength                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<FVector>)                           ItemPositions                                               OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<float>)                             ItemSegments                                                OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FVector>)                           CurvePositions                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<float>)                             CurveSegments                                               OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<int32_t>)                           ItemRotationA                                               OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<int32_t>)                           ItemRotationB                                               OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<float>)                             ItemRotationT                                               OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FTransform>)                        ItemLocalTransforms                                         OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurvePerItem
/// Size: 0x0198 (0x000068 - 0x000200)
class FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FCRFourPointBezier)                        Bezier                                                      OFFSET(getStruct<T>, {0x78, 48, 0, 0})
	CMember(EControlRigCurveAlignment)                 Alignment                                                   OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   SamplingPrecision                                           OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(getStruct<T>, {0xB8, 12, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(getStruct<T>, {0xC4, 12, 0, 0})
	SMember(FVector)                                   PoleVectorPosition                                          OFFSET(getStruct<T>, {0xD0, 12, 0, 0})
	CMember(TArray<FRigUnit_FitChainToCurve_Rotation>) Rotations                                                   OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(EControlRigAnimEasingType)                 RotationEaseType                                            OFFSET(get<T>, {0xF0, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xF8, 1, 0, 0})
	SMember(FRigUnit_FitChainToCurve_DebugSettings)    DebugSettings                                               OFFSET(getStruct<T>, {0x100, 96, 0, 0})
	SMember(FRigUnit_FitChainToCurve_WorkData)         WorkData                                                    OFFSET(getStruct<T>, {0x160, 152, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve
/// Size: 0x0198 (0x000068 - 0x000200)
class FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     EndBone                                                     OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	SMember(FCRFourPointBezier)                        Bezier                                                      OFFSET(getStruct<T>, {0x78, 48, 0, 0})
	CMember(EControlRigCurveAlignment)                 Alignment                                                   OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   SamplingPrecision                                           OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(getStruct<T>, {0xB8, 12, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(getStruct<T>, {0xC4, 12, 0, 0})
	SMember(FVector)                                   PoleVectorPosition                                          OFFSET(getStruct<T>, {0xD0, 12, 0, 0})
	CMember(TArray<FRigUnit_FitChainToCurve_Rotation>) Rotations                                                   OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(EControlRigAnimEasingType)                 RotationEaseType                                            OFFSET(get<T>, {0xF0, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xF8, 1, 0, 0})
	SMember(FRigUnit_FitChainToCurve_DebugSettings)    DebugSettings                                               OFFSET(getStruct<T>, {0x100, 96, 0, 0})
	SMember(FRigUnit_FitChainToCurve_WorkData)         WorkData                                                    OFFSET(getStruct<T>, {0x160, 152, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MapRange_Float
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_MapRange_Float : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinIn                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxIn                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MinOut                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxOut                                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Clamp_Float
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_Clamp_Float : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Min                                                         OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Max                                                         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BinaryFloatOp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_BinaryFloatOp : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Argument0                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Argument1                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Divide_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_Subtract_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_Add_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_Multiply_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_ForLoopCount
/// Size: 0x0070 (0x000068 - 0x0000D8)
class FRigUnit_ForLoopCount : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      Continue                                                    OFFSET(get<bool>, {0x74, 1, 0, 0})
	SMember(FControlRigExecuteContext)                 Completed                                                   OFFSET(getStruct<T>, {0x78, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetBoneTransform
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_GetBoneTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Bone                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0x50, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlInitialTransform
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_GetControlInitialTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x50, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlTransform
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRigUnit_GetControlTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FTransform)                                Minimum                                                     OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	SMember(FTransform)                                Maximum                                                     OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0xB0, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlRotator
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_GetControlRotator : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FRotator)                                  Rotator                                                     OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FRotator)                                  Minimum                                                     OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FRotator)                                  Maximum                                                     OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x38, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_GetControlVector : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   Minimum                                                     OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FVector)                                   Maximum                                                     OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x38, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector2D
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_GetControlVector2D : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FVector2D)                                 Vector                                                      OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FVector2D)                                 Minimum                                                     OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FVector2D)                                 Maximum                                                     OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x28, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlInteger
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_GetControlInteger : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   IntegerValue                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   Minimum                                                     OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   Maximum                                                     OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x1C, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlFloat
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_GetControlFloat : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x1C, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlBool
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_GetControlBool : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      BoolValue                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x14, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetCurveValue
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_GetCurveValue : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Curve                                                       OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedCurveIndex                                            OFFSET(getStruct<T>, {0x14, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetDeltaTime
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_GetDeltaTime : public FRigUnit_AnimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetInitialBoneTransform
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_GetInitialBoneTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Bone                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0x50, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetJointTransform
/// Size: 0x0088 (0x000068 - 0x0000F0)
class FRigUnit_GetJointTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FName)                                     Joint                                                       OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	CMember(ETransformGetterType)                      Type                                                        OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(ETransformSpaceMode)                       TransformSpace                                              OFFSET(get<T>, {0x71, 1, 0, 0})
	SMember(FTransform)                                BaseTransform                                               OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	SMember(FName)                                     BaseJoint                                                   OFFSET(getStruct<T>, {0xB0, 8, 0, 0})
	SMember(FTransform)                                Output                                                      OFFSET(getStruct<T>, {0xC0, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeBoneTransform
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_GetRelativeBoneTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     Bone                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0x50, 20, 0, 0})
	SMember(FCachedRigElement)                         CachedSpace                                                 OFFSET(getStruct<T>, {0x64, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransformForItem
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_GetRelativeTransformForItem : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bChildInitial                                               OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	DMember(bool)                                      bParentInitial                                              OFFSET(get<bool>, {0x24, 1, 0, 0})
	SMember(FTransform)                                RelativeTransform                                           OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(getStruct<T>, {0x60, 20, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(getStruct<T>, {0x74, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetSpaceTransform
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_GetSpaceTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(EBoneGetterSetterMode)                     SpaceType                                                   OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedSpaceIndex                                            OFFSET(getStruct<T>, {0x50, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetTransform
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_GetTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0x14, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x15, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x50, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetWorldTime
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_GetWorldTime : public FRigUnit_AnimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Year                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Month                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Day                                                         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     WeekDay                                                     OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Hours                                                       OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Minutes                                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Seconds                                                     OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     OverallSeconds                                              OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_HierarchyBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetSiblings
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bIncludeItem                                                OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Siblings                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedItem                                                  OFFSET(getStruct<T>, {0x28, 20, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedSiblings                                              OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetChildren
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRigElementKey)                            Parent                                                      OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bIncludeParent                                              OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bRecursive                                                  OFFSET(get<bool>, {0x15, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Children                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(getStruct<T>, {0x28, 20, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedChildren                                              OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParents
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bIncludeChild                                               OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bReverse                                                    OFFSET(get<bool>, {0x15, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Parents                                                     OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(getStruct<T>, {0x28, 20, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedParents                                               OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParent
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(getStruct<T>, {0x20, 20, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(getStruct<T>, {0x34, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_InverseExecution
/// Size: 0x0060 (0x000008 - 0x000068)
class FRigUnit_InverseExecution : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(getStruct<T>, {0x8, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_IsInteracting
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_IsInteracting : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bIsInteracting                                              OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_ItemBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_ItemReplace
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_ItemReplace : public FRigUnit_ItemBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FName)                                     Old                                                         OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	SMember(FName)                                     New                                                         OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	SMember(FRigElementKey)                            Result                                                      OFFSET(getStruct<T>, {0x24, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemExists
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_ItemExists : public FRigUnit_ItemBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      Exists                                                      OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x18, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemBaseMutable
/// Size: 0x0000 (0x000068 - 0x000068)
class FRigUnit_ItemBaseMutable : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/ControlRig.RigUnit_KalmanTransform
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigUnit_KalmanTransform : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	CMember(TArray<FTransform>)                        Buffer                                                      OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             OFFSET(get<int32_t>, {0x90, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_KalmanVector
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_KalmanVector : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	CMember(TArray<FVector>)                           Buffer                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_KalmanFloat
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_KalmanFloat : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(TArray<float>)                             Buffer                                                      OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_MathBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathBoolBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_MathBoolBase : public FRigUnit_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNotEquals
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_MathBoolNotEquals : public FRigUnit_MathBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      A                                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      B                                                           OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0xA, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathBoolEquals
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_MathBoolEquals : public FRigUnit_MathBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      A                                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      B                                                           OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0xA, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathBoolBinaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_MathBoolBinaryOp : public FRigUnit_MathBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      A                                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      B                                                           OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0xA, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathBoolOr
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathBoolOr : public FRigUnit_MathBoolBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNand
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathBoolNand : public FRigUnit_MathBoolBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathBoolAnd
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathBoolAnd : public FRigUnit_MathBoolBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathBoolUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_MathBoolUnaryOp : public FRigUnit_MathBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNot
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathBoolNot : public FRigUnit_MathBoolUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstant
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_MathBoolConstant : public FRigUnit_MathBoolBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstFalse
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathBoolConstFalse : public FRigUnit_MathBoolConstant
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstTrue
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathBoolConstTrue : public FRigUnit_MathBoolConstant
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathColorBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_MathColorBase : public FRigUnit_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathColorLerp
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_MathColorLerp : public FRigUnit_MathColorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FLinearColor)                              A                                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FLinearColor)                              B                                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(float)                                     T                                                           OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FLinearColor)                              Result                                                      OFFSET(getStruct<T>, {0x2C, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathColorBinaryOp
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_MathColorBinaryOp : public FRigUnit_MathColorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FLinearColor)                              A                                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FLinearColor)                              B                                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FLinearColor)                              Result                                                      OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathColorMul
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigUnit_MathColorMul : public FRigUnit_MathColorBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathColorSub
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigUnit_MathColorSub : public FRigUnit_MathColorBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathColorAdd
/// Size: 0x0000 (0x000038 - 0x000038)
class FRigUnit_MathColorAdd : public FRigUnit_MathColorBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathColorFromFloat
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_MathColorFromFloat : public FRigUnit_MathColorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FLinearColor)                              Result                                                      OFFSET(getStruct<T>, {0xC, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_MathFloatBase : public FRigUnit_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLawOfCosine
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_MathFloatLawOfCosine : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     C                                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AlphaAngle                                                  OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     BetaAngle                                                   OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     GammaAngle                                                  OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_MathFloatUnaryOp : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAtan
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathFloatAtan : public FRigUnit_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAcos
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathFloatAcos : public FRigUnit_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAsin
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathFloatAsin : public FRigUnit_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatTan
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathFloatTan : public FRigUnit_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatCos
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathFloatCos : public FRigUnit_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSin
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathFloatSin : public FRigUnit_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRad
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathFloatRad : public FRigUnit_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatDeg
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathFloatDeg : public FRigUnit_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSelectBool
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathFloatSelectBool : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      Condition                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     IfTrue                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     IfFalse                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatIsNearlyEqual
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathFloatIsNearlyEqual : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Tolerance                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatIsNearlyZero
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathFloatIsNearlyZero : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Tolerance                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLessEqual
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathFloatLessEqual : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatGreaterEqual
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathFloatGreaterEqual : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLess
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathFloatLess : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatGreater
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathFloatGreater : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatNotEquals
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathFloatNotEquals : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatEquals
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathFloatEquals : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRemap
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_MathFloatRemap : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SourceMinimum                                               OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     SourceMaximum                                               OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     TargetMinimum                                               OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     TargetMaximum                                               OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bClamp                                                      OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLerp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathFloatLerp : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     T                                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatClamp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathFloatClamp : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSign
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathFloatSign : public FRigUnit_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatToInt
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_MathFloatToInt : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Result                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRound
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathFloatRound : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Int                                                         OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatCeil
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathFloatCeil : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Int                                                         OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatFloor
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathFloatFloor : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Int                                                         OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAbs
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathFloatAbs : public FRigUnit_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatNegate
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathFloatNegate : public FRigUnit_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSqrt
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathFloatSqrt : public FRigUnit_MathFloatUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatBinaryOp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathFloatBinaryOp : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     A                                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     B                                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatPow
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_MathFloatPow : public FRigUnit_MathFloatBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMax
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_MathFloatMax : public FRigUnit_MathFloatBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMin
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_MathFloatMin : public FRigUnit_MathFloatBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMod
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_MathFloatMod : public FRigUnit_MathFloatBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatDiv
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_MathFloatDiv : public FRigUnit_MathFloatBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMul
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_MathFloatMul : public FRigUnit_MathFloatBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSub
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_MathFloatSub : public FRigUnit_MathFloatBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAdd
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_MathFloatAdd : public FRigUnit_MathFloatBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstant
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_MathFloatConstant : public FRigUnit_MathFloatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstTwoPi
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathFloatConstTwoPi : public FRigUnit_MathFloatConstant
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstHalfPi
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathFloatConstHalfPi : public FRigUnit_MathFloatConstant
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstPi
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathFloatConstPi : public FRigUnit_MathFloatConstant
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathIntBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_MathIntBase : public FRigUnit_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathIntLessEqual
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathIntLessEqual : public FRigUnit_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathIntGreaterEqual
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathIntGreaterEqual : public FRigUnit_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathIntLess
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathIntLess : public FRigUnit_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathIntGreater
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathIntGreater : public FRigUnit_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathIntNotEquals
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathIntNotEquals : public FRigUnit_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathIntEquals
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathIntEquals : public FRigUnit_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathIntClamp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathIntClamp : public FRigUnit_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Minimum                                                     OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Maximum                                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   Result                                                      OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathIntUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_MathIntUnaryOp : public FRigUnit_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Result                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathIntSign
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathIntSign : public FRigUnit_MathIntUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathIntToFloat
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_MathIntToFloat : public FRigUnit_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathIntAbs
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathIntAbs : public FRigUnit_MathIntUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathIntNegate
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_MathIntNegate : public FRigUnit_MathIntUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathIntBinaryOp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathIntBinaryOp : public FRigUnit_MathIntBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   A                                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   B                                                           OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Result                                                      OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathIntPow
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_MathIntPow : public FRigUnit_MathIntBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathIntMax
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_MathIntMax : public FRigUnit_MathIntBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathIntMin
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_MathIntMin : public FRigUnit_MathIntBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathIntMod
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_MathIntMod : public FRigUnit_MathIntBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathIntDiv
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_MathIntDiv : public FRigUnit_MathIntBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathIntMul
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_MathIntMul : public FRigUnit_MathIntBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathIntSub
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_MathIntSub : public FRigUnit_MathIntBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathIntAdd
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_MathIntAdd : public FRigUnit_MathIntBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionRotationOrder
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EControlRigRotationOrder)                  RotationOrder                                               OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_MathQuaternionBase : public FRigUnit_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSwingTwist
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_MathQuaternionSwingTwist : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Input                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FQuat)                                     Swing                                                       OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FQuat)                                     Twist                                                       OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionGetAxis
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_MathQuaternionGetAxis : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Quaternion                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        Axis                                                        OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x24, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionRotateVector
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_MathQuaternionRotateVector : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Quaternion                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionUnaryOp
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_MathQuaternionUnaryOp : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionUnit
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_MathQuaternionUnit : public FRigUnit_MathQuaternionUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionDot
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_MathQuaternionDot : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     A                                                           OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     B                                                           OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSelectBool
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_MathQuaternionSelectBool : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      Condition                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FQuat)                                     IfTrue                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     IfFalse                                                     OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionNotEquals
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_MathQuaternionNotEquals : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     A                                                           OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     B                                                           OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionEquals
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_MathQuaternionEquals : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     A                                                           OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     B                                                           OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSlerp
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_MathQuaternionSlerp : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     A                                                           OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     B                                                           OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(float)                                     T                                                           OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionInverse
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_MathQuaternionInverse : public FRigUnit_MathQuaternionUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionBinaryOp
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_MathQuaternionBinaryOp : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     A                                                           OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     B                                                           OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionMul
/// Size: 0x0000 (0x000040 - 0x000040)
class FRigUnit_MathQuaternionMul : public FRigUnit_MathQuaternionBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToRotator
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_MathQuaternionToRotator : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FRotator)                                  Result                                                      OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToEuler
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_MathQuaternionToEuler : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(EControlRigRotationOrder)                  RotationOrder                                               OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x24, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionScale
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_MathQuaternionScale : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToAxisAndAngle
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_MathQuaternionToAxisAndAngle : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector)                                   Axis                                                        OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromTwoVectors
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_MathQuaternionFromTwoVectors : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromRotator
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_MathQuaternionFromRotator : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRotator)                                  Rotator                                                     OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromEuler
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_MathQuaternionFromEuler : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Euler                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	CMember(EControlRigRotationOrder)                  RotationOrder                                               OFFSET(get<T>, {0x14, 1, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_MathQuaternionFromAxisAndAngle : public FRigUnit_MathQuaternionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Axis                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_MathRBFInterpolateBase : public FRigUnit_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
/// Size: 0x0090 (0x000000 - 0x000090)
class FRigUnit_MathRBFInterpolateVectorWorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorBase
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigUnit_MathRBFInterpolateVectorBase : public FRigUnit_MathRBFInterpolateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FVector)                                   Input                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	CMember(ERBFVectorDistanceType)                    DistanceFunction                                            OFFSET(get<T>, {0x14, 1, 0, 0})
	CMember(ERBFKernelType)                            SmoothingFunction                                           OFFSET(get<T>, {0x15, 1, 0, 0})
	DMember(float)                                     SmoothingRadius                                             OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bNormalizeOutput                                            OFFSET(get<bool>, {0x1C, 1, 0, 0})
	SMember(FRigUnit_MathRBFInterpolateVectorWorkData) WorkData                                                    OFFSET(getStruct<T>, {0x20, 144, 0, 0})
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorXform_Target
/// Size: 0x0040 (0x000000 - 0x000040)
class FMathRBFInterpolateVectorXform_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorXform
/// Size: 0x0040 (0x0000B0 - 0x0000F0)
class FRigUnit_MathRBFInterpolateVectorXform : public FRigUnit_MathRBFInterpolateVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<FMathRBFInterpolateVectorXform_Target>) Targets                                                 OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FTransform)                                Output                                                      OFFSET(getStruct<T>, {0xC0, 48, 0, 0})
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorQuat_Target
/// Size: 0x0020 (0x000000 - 0x000020)
class FMathRBFInterpolateVectorQuat_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorQuat
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class FRigUnit_MathRBFInterpolateVectorQuat : public FRigUnit_MathRBFInterpolateVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FMathRBFInterpolateVectorQuat_Target>) Targets                                                  OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FQuat)                                     Output                                                      OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorColor_Target
/// Size: 0x001C (0x000000 - 0x00001C)
class FMathRBFInterpolateVectorColor_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FLinearColor)                              Value                                                       OFFSET(getStruct<T>, {0xC, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorColor
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class FRigUnit_MathRBFInterpolateVectorColor : public FRigUnit_MathRBFInterpolateVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FMathRBFInterpolateVectorColor_Target>) Targets                                                 OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FLinearColor)                              Output                                                      OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorVector_Target
/// Size: 0x0018 (0x000000 - 0x000018)
class FMathRBFInterpolateVectorVector_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0xC, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorVector
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class FRigUnit_MathRBFInterpolateVectorVector : public FRigUnit_MathRBFInterpolateVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FMathRBFInterpolateVectorVector_Target>) Targets                                                OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FVector)                                   Output                                                      OFFSET(getStruct<T>, {0xC0, 12, 0, 0})
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorFloat_Target
/// Size: 0x0010 (0x000000 - 0x000010)
class FMathRBFInterpolateVectorFloat_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorFloat
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class FRigUnit_MathRBFInterpolateVectorFloat : public FRigUnit_MathRBFInterpolateVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FMathRBFInterpolateVectorFloat_Target>) Targets                                                 OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(float)                                     Output                                                      OFFSET(get<float>, {0xC0, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatWorkData
/// Size: 0x0090 (0x000000 - 0x000090)
class FRigUnit_MathRBFInterpolateQuatWorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatBase
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRigUnit_MathRBFInterpolateQuatBase : public FRigUnit_MathRBFInterpolateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FQuat)                                     Input                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(ERBFQuatDistanceType)                      DistanceFunction                                            OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(ERBFKernelType)                            SmoothingFunction                                           OFFSET(get<T>, {0x21, 1, 0, 0})
	DMember(float)                                     SmoothingAngle                                              OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      bNormalizeOutput                                            OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	SMember(FRigUnit_MathRBFInterpolateQuatWorkData)   WorkData                                                    OFFSET(getStruct<T>, {0x40, 144, 0, 0})
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatXform_Target
/// Size: 0x0040 (0x000000 - 0x000040)
class FMathRBFInterpolateQuatXform_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Target                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatXform
/// Size: 0x0040 (0x0000D0 - 0x000110)
class FRigUnit_MathRBFInterpolateQuatXform : public FRigUnit_MathRBFInterpolateQuatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TArray<FMathRBFInterpolateQuatXform_Target>) Targets                                                   OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FTransform)                                Output                                                      OFFSET(getStruct<T>, {0xE0, 48, 0, 0})
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatQuat_Target
/// Size: 0x0020 (0x000000 - 0x000020)
class FMathRBFInterpolateQuatQuat_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FQuat)                                     Target                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatQuat
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
class FRigUnit_MathRBFInterpolateQuatQuat : public FRigUnit_MathRBFInterpolateQuatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<FMathRBFInterpolateQuatQuat_Target>) Targets                                                    OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FQuat)                                     Output                                                      OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatColor_Target
/// Size: 0x0020 (0x000000 - 0x000020)
class FMathRBFInterpolateQuatColor_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FQuat)                                     Target                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatColor
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
class FRigUnit_MathRBFInterpolateQuatColor : public FRigUnit_MathRBFInterpolateQuatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<FMathRBFInterpolateQuatColor_Target>) Targets                                                   OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FLinearColor)                              Output                                                      OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatVector_Target
/// Size: 0x0020 (0x000000 - 0x000020)
class FMathRBFInterpolateQuatVector_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FQuat)                                     Target                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatVector
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
class FRigUnit_MathRBFInterpolateQuatVector : public FRigUnit_MathRBFInterpolateQuatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<FMathRBFInterpolateQuatVector_Target>) Targets                                                  OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FVector)                                   Output                                                      OFFSET(getStruct<T>, {0xE0, 12, 0, 0})
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatFloat_Target
/// Size: 0x0020 (0x000000 - 0x000020)
class FMathRBFInterpolateQuatFloat_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FQuat)                                     Target                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatFloat
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
class FRigUnit_MathRBFInterpolateQuatFloat : public FRigUnit_MathRBFInterpolateQuatBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<FMathRBFInterpolateQuatFloat_Target>) Targets                                                   OFFSET(get<T>, {0xD0, 16, 0, 0})
	DMember(float)                                     Output                                                      OFFSET(get<float>, {0xE0, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathTransformBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_MathTransformBase : public FRigUnit_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathTransformClampSpatially
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRigUnit_MathTransformClampSpatially : public FRigUnit_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        Axis                                                        OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(TEnumAsByte<EControlRigClampSpatialMode>)  Type                                                        OFFSET(get<T>, {0x41, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x48, 4, 0, 0})
	SMember(FTransform)                                Space                                                       OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0x80, 1, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  OFFSET(getStruct<T>, {0x84, 16, 0, 0})
	DMember(float)                                     DebugThickness                                              OFFSET(get<float>, {0x94, 4, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathTransformFromSRT
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_MathTransformFromSRT : public FRigUnit_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Rotation                                                    OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	CMember(EControlRigRotationOrder)                  RotationOrder                                               OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FEulerTransform)                           EulerTransform                                              OFFSET(getStruct<T>, {0x60, 36, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathTransformTransformVector
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigUnit_MathTransformTransformVector : public FRigUnit_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathTransformRotateVector
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigUnit_MathTransformRotateVector : public FRigUnit_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathTransformSelectBool
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigUnit_MathTransformSelectBool : public FRigUnit_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      Condition                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FTransform)                                IfTrue                                                      OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FTransform)                                IfFalse                                                     OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x70, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathTransformLerp
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigUnit_MathTransformLerp : public FRigUnit_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FTransform)                                A                                                           OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FTransform)                                B                                                           OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	DMember(float)                                     T                                                           OFFSET(get<float>, {0x70, 4, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x80, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathTransformUnaryOp
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_MathTransformUnaryOp : public FRigUnit_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x40, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathTransformInverse
/// Size: 0x0000 (0x000070 - 0x000070)
class FRigUnit_MathTransformInverse : public FRigUnit_MathTransformUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMakeAbsolute
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigUnit_MathTransformMakeAbsolute : public FRigUnit_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FTransform)                                Local                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FTransform)                                Parent                                                      OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	SMember(FTransform)                                Global                                                      OFFSET(getStruct<T>, {0x70, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMakeRelative
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigUnit_MathTransformMakeRelative : public FRigUnit_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FTransform)                                Global                                                      OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FTransform)                                Parent                                                      OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	SMember(FTransform)                                Local                                                       OFFSET(getStruct<T>, {0x70, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathTransformBinaryOp
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigUnit_MathTransformBinaryOp : public FRigUnit_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FTransform)                                A                                                           OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FTransform)                                B                                                           OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x70, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMul
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class FRigUnit_MathTransformMul : public FRigUnit_MathTransformBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathTransformToEulerTransform
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_MathTransformToEulerTransform : public FRigUnit_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FEulerTransform)                           Result                                                      OFFSET(getStruct<T>, {0x40, 36, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathTransformFromEulerTransform
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigUnit_MathTransformFromEulerTransform : public FRigUnit_MathTransformBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FEulerTransform)                           EulerTransform                                              OFFSET(getStruct<T>, {0x8, 36, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_MathVectorBase : public FRigUnit_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathIntersectPlane
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigUnit_MathIntersectPlane : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVector)                                   Start                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   PlanePoint                                                  OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FVector)                                   PlaneNormal                                                 OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x38, 12, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClampSpatially
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_MathVectorClampSpatially : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        Axis                                                        OFFSET(get<T>, {0x14, 1, 0, 0})
	CMember(TEnumAsByte<EControlRigClampSpatialMode>)  Type                                                        OFFSET(get<T>, {0x15, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FTransform)                                Space                                                       OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0x50, 1, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  OFFSET(getStruct<T>, {0x54, 16, 0, 0})
	DMember(float)                                     DebugThickness                                              OFFSET(get<float>, {0x64, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x68, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMakeBezierFourPoint
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_MathVectorMakeBezierFourPoint : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FCRFourPointBezier)                        Bezier                                                      OFFSET(getStruct<T>, {0x8, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBezierFourPoint
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigUnit_MathVectorBezierFourPoint : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FCRFourPointBezier)                        Bezier                                                      OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	DMember(float)                                     T                                                           OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
	SMember(FVector)                                   Tangent                                                     OFFSET(getStruct<T>, {0x48, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorOrthogonal
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_MathVectorOrthogonal : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorParallel
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_MathVectorParallel : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAngle
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_MathVectorAngle : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMirror
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_MathVectorMirror : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClampLength
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_MathVectorClampLength : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     MinimumLength                                               OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaximumLength                                               OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSetLength
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_MathVectorSetLength : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x18, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorUnaryOp
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_MathVectorUnaryOp : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x14, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorUnit
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigUnit_MathVectorUnit : public FRigUnit_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDot
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_MathVectorDot : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBinaryOp
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_MathVectorBinaryOp : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorCross
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_MathVectorCross : public FRigUnit_MathVectorBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDistance
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_MathVectorDistance : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLength
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathVectorLength : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLengthSquared
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathVectorLengthSquared : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRad
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigUnit_MathVectorRad : public FRigUnit_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDeg
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigUnit_MathVectorDeg : public FRigUnit_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSelectBool
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_MathVectorSelectBool : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      Condition                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FVector)                                   IfTrue                                                      OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   IfFalse                                                     OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x24, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorIsNearlyEqual
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_MathVectorIsNearlyEqual : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(float)                                     Tolerance                                                   OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x24, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorIsNearlyZero
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_MathVectorIsNearlyZero : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     Tolerance                                                   OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorNotEquals
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_MathVectorNotEquals : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorEquals
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_MathVectorEquals : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRemap
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigUnit_MathVectorRemap : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   SourceMinimum                                               OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   SourceMaximum                                               OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FVector)                                   TargetMinimum                                               OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	SMember(FVector)                                   TargetMaximum                                               OFFSET(getStruct<T>, {0x38, 12, 0, 0})
	DMember(bool)                                      bClamp                                                      OFFSET(get<bool>, {0x44, 1, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x48, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLerp
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_MathVectorLerp : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   A                                                           OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   B                                                           OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(float)                                     T                                                           OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x24, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClamp
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_MathVectorClamp : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Minimum                                                     OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   Maximum                                                     OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSign
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigUnit_MathVectorSign : public FRigUnit_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRound
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigUnit_MathVectorRound : public FRigUnit_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathVectorCeil
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigUnit_MathVectorCeil : public FRigUnit_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathVectorFloor
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigUnit_MathVectorFloor : public FRigUnit_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAbs
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigUnit_MathVectorAbs : public FRigUnit_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathVectorNegate
/// Size: 0x0000 (0x000020 - 0x000020)
class FRigUnit_MathVectorNegate : public FRigUnit_MathVectorUnaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMax
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_MathVectorMax : public FRigUnit_MathVectorBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMin
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_MathVectorMin : public FRigUnit_MathVectorBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMod
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_MathVectorMod : public FRigUnit_MathVectorBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDiv
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_MathVectorDiv : public FRigUnit_MathVectorBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathVectorScale
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_MathVectorScale : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     Factor                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x18, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMul
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_MathVectorMul : public FRigUnit_MathVectorBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSub
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_MathVectorSub : public FRigUnit_MathVectorBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAdd
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_MathVectorAdd : public FRigUnit_MathVectorBinaryOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_MathVectorFromFloat
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_MathVectorFromFloat : public FRigUnit_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0xC, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_PerBone
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigUnit_ModifyBoneTransforms_PerBone : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     Bone                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_ModifyTransforms_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_WorkData
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms
/// Size: 0x0030 (0x000068 - 0x000098)
class FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FRigUnit_ModifyBoneTransforms_PerBone>) BoneToModify                                            OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     WeightMinimum                                               OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     WeightMaximum                                               OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(EControlRigModifyBoneMode)                 Mode                                                        OFFSET(get<T>, {0x84, 1, 0, 0})
	SMember(FRigUnit_ModifyBoneTransforms_WorkData)    WorkData                                                    OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_PerItem
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigUnit_ModifyTransforms_PerItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms
/// Size: 0x0030 (0x000068 - 0x000098)
class FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FRigUnit_ModifyTransforms_PerItem>) ItemToModify                                                OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     WeightMinimum                                               OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     WeightMaximum                                               OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(EControlRigModifyBoneMode)                 Mode                                                        OFFSET(get<T>, {0x84, 1, 0, 0})
	SMember(FRigUnit_ModifyTransforms_WorkData)        WorkData                                                    OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_EndEffector
/// Size: 0x0014 (0x000000 - 0x000014)
class FRigUnit_MultiFABRIK_EndEffector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     Bone                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_WorkData
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigUnit_MultiFABRIK_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK
/// Size: 0x0088 (0x000068 - 0x0000F0)
class FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FName)                                     RootBone                                                    OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	CMember(TArray<FRigUnit_MultiFABRIK_EndEffector>)  Effectors                                                   OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x84, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	SMember(FRigUnit_MultiFABRIK_WorkData)             WorkData                                                    OFFSET(getStruct<T>, {0x90, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_NameBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_NameBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_Contains
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_Contains : public FRigUnit_NameBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Search                                                      OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_StartsWith
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_StartsWith : public FRigUnit_NameBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Start                                                       OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_EndsWith
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_EndsWith : public FRigUnit_NameBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Ending                                                      OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_NameReplace
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_NameReplace : public FRigUnit_NameBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Old                                                         OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     New                                                         OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FName)                                     Result                                                      OFFSET(getStruct<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_NameTruncate
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_NameTruncate : public FRigUnit_NameBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      FromEnd                                                     OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FName)                                     Remainder                                                   OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FName)                                     Chopped                                                     OFFSET(getStruct<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_NameConcat
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_NameConcat : public FRigUnit_NameBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     A                                                           OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     B                                                           OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     Result                                                      OFFSET(getStruct<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_NoiseVector
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_NoiseVector : public FRigUnit_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Speed                                                       OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   Frequency                                                   OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x34, 12, 0, 0})
	SMember(FVector)                                   Time                                                        OFFSET(getStruct<T>, {0x40, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_NoiseFloat
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_NoiseFloat : public FRigUnit_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_OffsetTransformForItem
/// Size: 0x0068 (0x000068 - 0x0000D0)
class FRigUnit_OffsetTransformForItem : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	SMember(FTransform)                                OffsetTransform                                             OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xB4, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0xB8, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ParentSwitchConstraint
/// Size: 0x00F8 (0x000068 - 0x000160)
class FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FRigElementKey)                            Subject                                                     OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	SMember(FRigElementKeyCollection)                  Parents                                                     OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FTransform)                                InitialGlobalTransform                                      OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xC0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
	DMember(bool)                                      Switched                                                    OFFSET(get<bool>, {0x100, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedSubject                                               OFFSET(getStruct<T>, {0x104, 20, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(getStruct<T>, {0x118, 20, 0, 0})
	SMember(FTransform)                                RelativeOffset                                              OFFSET(getStruct<T>, {0x130, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SimBaseMutable
/// Size: 0x0000 (0x000068 - 0x000068)
class FRigUnit_SimBaseMutable : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_BoneTarget
/// Size: 0x0014 (0x000000 - 0x000014)
class FRigUnit_PointSimulation_BoneTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     Bone                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   TranslationPoint                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   PrimaryAimPoint                                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   SecondaryAimPoint                                           OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_DebugSettings
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigUnit_PointSimulation_DebugSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     CollisionScale                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bDrawPointsAsSpheres                                        OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x20, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_WorkData
/// Size: 0x0088 (0x000000 - 0x000088)
class FRigUnit_PointSimulation_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FCRSimPointContainer)                      Simulation                                                  OFFSET(getStruct<T>, {0x0, 120, 0, 0})
	CMember(TArray<FCachedRigElement>)                 BoneIndices                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation
/// Size: 0x0198 (0x000068 - 0x000200)
class FRigUnit_PointSimulation : public FRigUnit_SimBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(TArray<FCRSimPoint>)                       Points                                                      OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FCRSimLinearSpring>)                Links                                                       OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FCRSimPointForce>)                  Forces                                                      OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<FCRSimSoftCollision>)               CollisionVolumes                                            OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(float)                                     SimulatedStepsPerSecond                                     OFFSET(get<float>, {0xA8, 4, 0, 0})
	CMember(ECRSimPointIntegrateType)                  IntegratorType                                              OFFSET(get<T>, {0xAC, 1, 0, 0})
	DMember(float)                                     VerletBlend                                                 OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(TArray<FRigUnit_PointSimulation_BoneTarget>) BoneTargets                                               OFFSET(get<T>, {0xB8, 16, 0, 0})
	DMember(bool)                                      bLimitLocalPosition                                         OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xC9, 1, 0, 0})
	SMember(FVector)                                   PrimaryAimAxis                                              OFFSET(getStruct<T>, {0xCC, 12, 0, 0})
	SMember(FVector)                                   SecondaryAimAxis                                            OFFSET(getStruct<T>, {0xD8, 12, 0, 0})
	SMember(FRigUnit_PointSimulation_DebugSettings)    DebugSettings                                               OFFSET(getStruct<T>, {0xF0, 80, 0, 0})
	SMember(FCRFourPointBezier)                        Bezier                                                      OFFSET(getStruct<T>, {0x140, 48, 0, 0})
	SMember(FRigUnit_PointSimulation_WorkData)         WorkData                                                    OFFSET(getStruct<T>, {0x170, 136, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PrepareForExecution
/// Size: 0x0060 (0x000008 - 0x000068)
class FRigUnit_PrepareForExecution : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(getStruct<T>, {0x8, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_EndProfilingTimer
/// Size: 0x0020 (0x000068 - 0x000088)
class FRigUnit_EndProfilingTimer : public FRigUnit_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(int32_t)                                   NumberOfMeasurements                                        OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	SMember(FString)                                   Prefix                                                      OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	DMember(float)                                     AccumulatedTime                                             OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   MeasurementsLeft                                            OFFSET(get<int32_t>, {0x84, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_StartProfilingTimer
/// Size: 0x0000 (0x000068 - 0x000068)
class FRigUnit_StartProfilingTimer : public FRigUnit_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/ControlRig.RigUnit_ProjectTransformToNewParent
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigUnit_ProjectTransformToNewParent : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bChildInitial                                               OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FRigElementKey)                            OldParent                                                   OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	DMember(bool)                                      bOldParentInitial                                           OFFSET(get<bool>, {0x24, 1, 0, 0})
	SMember(FRigElementKey)                            NewParent                                                   OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	DMember(bool)                                      bNewParentInitial                                           OFFSET(get<bool>, {0x34, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(getStruct<T>, {0x70, 20, 0, 0})
	SMember(FCachedRigElement)                         CachedOldParent                                             OFFSET(getStruct<T>, {0x84, 20, 0, 0})
	SMember(FCachedRigElement)                         CachedNewParent                                             OFFSET(getStruct<T>, {0x98, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PropagateTransform
/// Size: 0x0028 (0x000068 - 0x000090)
class FRigUnit_PropagateTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	DMember(bool)                                      bRecomputeGlobal                                            OFFSET(get<bool>, {0x74, 1, 0, 0})
	DMember(bool)                                      bApplyToChildren                                            OFFSET(get<bool>, {0x75, 1, 0, 0})
	DMember(bool)                                      bRecursive                                                  OFFSET(get<bool>, {0x76, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x78, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAngle
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_QuaternionToAngle : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Axis                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FQuat)                                     Argument                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_QuaternionFromAxisAndAngle
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Axis                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAxisAndAngle
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Argument                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector)                                   Axis                                                        OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_UnaryQuaternionOp
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_UnaryQuaternionOp : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Argument                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_InverseQuaterion
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_BinaryQuaternionOp
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_BinaryQuaternionOp : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Argument0                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     Argument1                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MultiplyQuaternion
/// Size: 0x0000 (0x000040 - 0x000040)
class FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/ControlRig.RigUnit_RandomVector
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_RandomVector : public FRigUnit_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector)                                   LastResult                                                  OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	DMember(int32_t)                                   LastSeed                                                    OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(float)                                     TimeLeft                                                    OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_RandomFloat
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_RandomFloat : public FRigUnit_MathBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     LastResult                                                  OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   LastSeed                                                    OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(float)                                     TimeLeft                                                    OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SendEvent
/// Size: 0x0018 (0x000068 - 0x000080)
class FRigUnit_SendEvent : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(ERigEvent)                                 Event                                                       OFFSET(get<T>, {0x68, 1, 0, 0})
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x6C, 12, 0, 0})
	DMember(float)                                     OffsetInSeconds                                             OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(bool)                                      bEnable                                                     OFFSET(get<bool>, {0x7C, 1, 0, 0})
	DMember(bool)                                      bOnlyDuringInteraction                                      OFFSET(get<bool>, {0x7D, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SequenceExecution
/// Size: 0x01E0 (0x000008 - 0x0001E8)
class FRigUnit_SequenceExecution : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(getStruct<T>, {0x8, 96, 0, 0})
	SMember(FControlRigExecuteContext)                 A                                                           OFFSET(getStruct<T>, {0x68, 96, 0, 0})
	SMember(FControlRigExecuteContext)                 B                                                           OFFSET(getStruct<T>, {0xC8, 96, 0, 0})
	SMember(FControlRigExecuteContext)                 C                                                           OFFSET(getStruct<T>, {0x128, 96, 0, 0})
	SMember(FControlRigExecuteContext)                 D                                                           OFFSET(getStruct<T>, {0x188, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoneInitialTransform
/// Size: 0x0088 (0x000068 - 0x0000F0)
class FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FName)                                     Bone                                                        OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xD1, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0xD4, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoneRotation
/// Size: 0x0038 (0x000068 - 0x0000A0)
class FRigUnit_SetBoneRotation : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     Bone                                                        OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0x80, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x88, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0x8C, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTransform
/// Size: 0x0088 (0x000068 - 0x0000F0)
class FRigUnit_SetBoneTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FName)                                     Bone                                                        OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0xD0, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xD8, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0xDC, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTranslation
/// Size: 0x0038 (0x000068 - 0x0000A0)
class FRigUnit_SetBoneTranslation : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     Bone                                                        OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FVector)                                   Translation                                                 OFFSET(getStruct<T>, {0x70, 12, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0x7C, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x84, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0x88, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlColor
/// Size: 0x0030 (0x000068 - 0x000098)
class FRigUnit_SetControlColor : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x80, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlOffset
/// Size: 0x0058 (0x000068 - 0x0000C0)
class FRigUnit_SetControlOffset : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FTransform)                                Offset                                                      OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0xA0, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0xA4, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlTransform
/// Size: 0x0068 (0x000068 - 0x0000D0)
class FRigUnit_SetControlTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x70, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0xB0, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0xB4, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator_Entry
/// Size: 0x0018 (0x000000 - 0x000018)
class FRigUnit_SetMultiControlRotator_Entry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FRotator)                                  Rotator                                                     OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator
/// Size: 0x0028 (0x000068 - 0x000090)
class FRigUnit_SetMultiControlRotator : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FRigUnit_SetMultiControlRotator_Entry>) Entries                                                 OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x78, 4, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlRotator
/// Size: 0x0030 (0x000068 - 0x000098)
class FRigUnit_SetControlRotator : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x70, 4, 0, 0})
	SMember(FRotator)                                  Rotator                                                     OFFSET(getStruct<T>, {0x74, 12, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0x80, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x84, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector
/// Size: 0x0030 (0x000068 - 0x000098)
class FRigUnit_SetControlVector : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x70, 4, 0, 0})
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x74, 12, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0x80, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x84, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D_Entry
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_SetMultiControlVector2D_Entry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector2D)                                 Vector                                                      OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D
/// Size: 0x0028 (0x000068 - 0x000090)
class FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FRigUnit_SetMultiControlVector2D_Entry>) Entries                                                OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x78, 4, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector2D
/// Size: 0x0028 (0x000068 - 0x000090)
class FRigUnit_SetControlVector2D : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x70, 4, 0, 0})
	SMember(FVector2D)                                 Vector                                                      OFFSET(getStruct<T>, {0x74, 8, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x7C, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger_Entry
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigUnit_SetMultiControlInteger_Entry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   IntegerValue                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger
/// Size: 0x0028 (0x000068 - 0x000090)
class FRigUnit_SetMultiControlInteger : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FRigUnit_SetMultiControlInteger_Entry>) Entries                                                 OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x78, 4, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlInteger
/// Size: 0x0028 (0x000068 - 0x000090)
class FRigUnit_SetControlInteger : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(int32_t)                                   Weight                                                      OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   IntegerValue                                                OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x78, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat_Entry
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigUnit_SetMultiControlFloat_Entry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat
/// Size: 0x0028 (0x000068 - 0x000090)
class FRigUnit_SetMultiControlFloat : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FRigUnit_SetMultiControlFloat_Entry>) Entries                                                   OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x78, 4, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlFloat
/// Size: 0x0028 (0x000068 - 0x000090)
class FRigUnit_SetControlFloat : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x74, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x78, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool_Entry
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigUnit_SetMultiControlBool_Entry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      BoolValue                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool
/// Size: 0x0020 (0x000068 - 0x000088)
class FRigUnit_SetMultiControlBool : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FRigUnit_SetMultiControlBool_Entry>) Entries                                                    OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlBool
/// Size: 0x0020 (0x000068 - 0x000088)
class FRigUnit_SetControlBool : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(bool)                                      BoolValue                                                   OFFSET(get<bool>, {0x70, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x74, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlVisibility
/// Size: 0x0038 (0x000068 - 0x0000A0)
class FRigUnit_SetControlVisibility : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	SMember(FString)                                   Pattern                                                     OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x88, 1, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetCurveValue
/// Size: 0x0020 (0x000068 - 0x000088)
class FRigUnit_SetCurveValue : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     Curve                                                       OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x70, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedCurveIndex                                            OFFSET(getStruct<T>, {0x74, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeBoneTransform
/// Size: 0x0078 (0x000068 - 0x0000E0)
class FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FName)                                     Bone                                                        OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xB4, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0xB8, 20, 0, 0})
	SMember(FCachedRigElement)                         CachedSpaceIndex                                            OFFSET(getStruct<T>, {0xCC, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeTransformForItem
/// Size: 0x0088 (0x000068 - 0x0000F0)
class FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(getStruct<T>, {0x74, 12, 0, 0})
	DMember(bool)                                      bParentInitial                                              OFFSET(get<bool>, {0x80, 1, 0, 0})
	SMember(FTransform)                                RelativeTransform                                           OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xC4, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(getStruct<T>, {0xC8, 20, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(getStruct<T>, {0xDC, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceInitialTransform
/// Size: 0x0088 (0x000068 - 0x0000F0)
class FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FName)                                     SpaceName                                                   OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0xD0, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedSpaceIndex                                            OFFSET(getStruct<T>, {0xD4, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceTransform
/// Size: 0x0068 (0x000068 - 0x0000D0)
class FRigUnit_SetSpaceTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x70, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	CMember(EBoneGetterSetterMode)                     SpaceType                                                   OFFSET(get<T>, {0xB0, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedSpaceIndex                                            OFFSET(getStruct<T>, {0xB4, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetScale
/// Size: 0x0038 (0x000068 - 0x0000A0)
class FRigUnit_SetScale : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0x74, 1, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x78, 12, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x88, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x8C, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRotation
/// Size: 0x0048 (0x000068 - 0x0000B0)
class FRigUnit_SetRotation : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0x74, 1, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x94, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x98, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetTranslation
/// Size: 0x0038 (0x000068 - 0x0000A0)
class FRigUnit_SetTranslation : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0x74, 1, 0, 0})
	SMember(FVector)                                   Translation                                                 OFFSET(getStruct<T>, {0x78, 12, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x88, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x8C, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetTransform
/// Size: 0x0068 (0x000068 - 0x0000D0)
class FRigUnit_SetTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	CMember(EBoneGetterSetterMode)                     Space                                                       OFFSET(get<T>, {0x74, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x75, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xB4, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0xB8, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SlideChain_WorkData
/// Size: 0x0048 (0x000000 - 0x000048)
class FRigUnit_SlideChain_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     ChainLength                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<float>)                             ItemSegments                                                OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FTransform>)                        BlendedTransforms                                           OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SlideChainPerItem
/// Size: 0x0060 (0x000068 - 0x0000C8)
class FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	DMember(float)                                     SlideAmount                                                 OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x7C, 1, 0, 0})
	SMember(FRigUnit_SlideChain_WorkData)              WorkData                                                    OFFSET(getStruct<T>, {0x80, 72, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SlideChain
/// Size: 0x0060 (0x000068 - 0x0000C8)
class FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     EndBone                                                     OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	DMember(float)                                     SlideAmount                                                 OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x7C, 1, 0, 0})
	SMember(FRigUnit_SlideChain_WorkData)              WorkData                                                    OFFSET(getStruct<T>, {0x80, 72, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_DebugSettings
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigUnit_SpringIK_DebugSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x20, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_WorkData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FRigUnit_SpringIK_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FCachedRigElement>)                 BoneIndices                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedPoleVector                                            OFFSET(getStruct<T>, {0x10, 20, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FCRSimPointContainer)                      Simulation                                                  OFFSET(getStruct<T>, {0x38, 120, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringIK
/// Size: 0x0168 (0x000068 - 0x0001D0)
class FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     EndBone                                                     OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	DMember(float)                                     HierarchyStrength                                           OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     EffectorStrength                                            OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     EffectorRatio                                               OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     RootStrength                                                OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     RootRatio                                                   OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     Damping                                                     OFFSET(get<float>, {0x8C, 4, 0, 0})
	SMember(FVector)                                   PoleVector                                                  OFFSET(getStruct<T>, {0x90, 12, 0, 0})
	DMember(bool)                                      bFlipPolePlane                                              OFFSET(get<bool>, {0x9C, 1, 0, 0})
	CMember(EControlRigVectorKind)                     PoleVectorKind                                              OFFSET(get<T>, {0x9D, 1, 0, 0})
	SMember(FName)                                     PoleVectorSpace                                             OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(getStruct<T>, {0xA8, 12, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(getStruct<T>, {0xB4, 12, 0, 0})
	DMember(bool)                                      bLiveSimulation                                             OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(int32_t)                                   Iterations                                                  OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(bool)                                      bLimitLocalPosition                                         OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xC9, 1, 0, 0})
	SMember(FRigUnit_SpringIK_DebugSettings)           DebugSettings                                               OFFSET(getStruct<T>, {0xD0, 80, 0, 0})
	SMember(FRigUnit_SpringIK_WorkData)                WorkData                                                    OFFSET(getStruct<T>, {0x120, 176, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SecondsToFrames
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_SecondsToFrames : public FRigUnit_AnimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Seconds                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Frames                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FramesToSeconds
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_FramesToSeconds : public FRigUnit_AnimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Frames                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Seconds                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Timeline
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_Timeline : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AccumulatedValue                                            OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigUnit_TimeOffsetTransform : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	DMember(float)                                     SecondsAgo                                                  OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(float)                                     TimeRange                                                   OFFSET(get<float>, {0x48, 4, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	CMember(TArray<FTransform>)                        Buffer                                                      OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<float>)                             DeltaTimes                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   UpperBound                                                  OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetVector
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigUnit_TimeOffsetVector : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     SecondsAgo                                                  OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(float)                                     TimeRange                                                   OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	CMember(TArray<FVector>)                           Buffer                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<float>)                             DeltaTimes                                                  OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   UpperBound                                                  OFFSET(get<int32_t>, {0x54, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetFloat
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigUnit_TimeOffsetFloat : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SecondsAgo                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   BufferSize                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     TimeRange                                                   OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(TArray<float>)                             Buffer                                                      OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             DeltaTimes                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   LastInsertIndex                                             OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   UpperBound                                                  OFFSET(get<int32_t>, {0x44, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BinaryTransformOp
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigUnit_BinaryTransformOp : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FTransform)                                Argument0                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FTransform)                                Argument1                                                   OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x70, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransform
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/ControlRig.RigUnit_MultiplyTransform
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/ControlRig.ConstraintTarget
/// Size: 0x0040 (0x000000 - 0x000040)
class FConstraintTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x34, 1, 0, 0})
	SMember(FTransformFilter)                          Filter                                                      OFFSET(getStruct<T>, {0x35, 9, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint_WorkData
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigUnit_TransformConstraint_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FConstraintData>)                   ConstraintData                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<int32_t, int32_t>)                    ConstraintDataToTargets                                     OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraintPerItem
/// Size: 0x00D8 (0x000068 - 0x000140)
class FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	CMember(ETransformSpaceMode)                       BaseTransformSpace                                          OFFSET(get<T>, {0x74, 1, 0, 0})
	SMember(FTransform)                                BaseTransform                                               OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	SMember(FRigElementKey)                            BaseItem                                                    OFFSET(getStruct<T>, {0xB0, 12, 0, 0})
	CMember(TArray<FConstraintTarget>)                 Targets                                                     OFFSET(get<T>, {0xC0, 16, 0, 0})
	DMember(bool)                                      bUseInitialTransforms                                       OFFSET(get<bool>, {0xD0, 1, 0, 0})
	SMember(FRigUnit_TransformConstraint_WorkData)     WorkData                                                    OFFSET(getStruct<T>, {0xD8, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint
/// Size: 0x00C8 (0x000068 - 0x000130)
class FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FName)                                     Bone                                                        OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	CMember(ETransformSpaceMode)                       BaseTransformSpace                                          OFFSET(get<T>, {0x70, 1, 0, 0})
	SMember(FTransform)                                BaseTransform                                               OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	SMember(FName)                                     BaseBone                                                    OFFSET(getStruct<T>, {0xB0, 8, 0, 0})
	CMember(TArray<FConstraintTarget>)                 Targets                                                     OFFSET(get<T>, {0xB8, 16, 0, 0})
	DMember(bool)                                      bUseInitialTransforms                                       OFFSET(get<bool>, {0xC8, 1, 0, 0})
	SMember(FRigUnit_TransformConstraint_WorkData)     WorkData                                                    OFFSET(getStruct<T>, {0xD0, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwistBones_WorkData
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigUnit_TwistBones_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<float>)                             ItemRatios                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FTransform>)                        ItemTransforms                                              OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwistBonesPerItem
/// Size: 0x0068 (0x000068 - 0x0000D0)
class FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   OFFSET(getStruct<T>, {0x78, 12, 0, 0})
	SMember(FVector)                                   PoleAxis                                                    OFFSET(getStruct<T>, {0x84, 12, 0, 0})
	CMember(EControlRigAnimEasingType)                 TwistEaseType                                               OFFSET(get<T>, {0x90, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x98, 1, 0, 0})
	SMember(FRigUnit_TwistBones_WorkData)              WorkData                                                    OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwistBones
/// Size: 0x0068 (0x000068 - 0x0000D0)
class FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     EndBone                                                     OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   OFFSET(getStruct<T>, {0x78, 12, 0, 0})
	SMember(FVector)                                   PoleAxis                                                    OFFSET(getStruct<T>, {0x84, 12, 0, 0})
	CMember(EControlRigAnimEasingType)                 TwistEaseType                                               OFFSET(get<T>, {0x90, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x98, 1, 0, 0})
	SMember(FRigUnit_TwistBones_WorkData)              WorkData                                                    OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKFK
/// Size: 0x01B8 (0x000068 - 0x000220)
class FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FName)                                     StartJoint                                                  OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     EndJoint                                                    OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	SMember(FVector)                                   PoleTarget                                                  OFFSET(getStruct<T>, {0x78, 12, 0, 0})
	DMember(float)                                     Spin                                                        OFFSET(get<float>, {0x84, 4, 0, 0})
	SMember(FTransform)                                EndEffector                                                 OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	DMember(float)                                     IKBlend                                                     OFFSET(get<float>, {0xC0, 4, 0, 0})
	SMember(FTransform)                                StartJointFKTransform                                       OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
	SMember(FTransform)                                MidJointFKTransform                                         OFFSET(getStruct<T>, {0x100, 48, 0, 0})
	SMember(FTransform)                                EndJointFKTransform                                         OFFSET(getStruct<T>, {0x130, 48, 0, 0})
	DMember(float)                                     PreviousFKIKBlend                                           OFFSET(get<float>, {0x160, 4, 0, 0})
	SMember(FTransform)                                StartJointIKTransform                                       OFFSET(getStruct<T>, {0x170, 48, 0, 0})
	SMember(FTransform)                                MidJointIKTransform                                         OFFSET(getStruct<T>, {0x1A0, 48, 0, 0})
	SMember(FTransform)                                EndJointIKTransform                                         OFFSET(getStruct<T>, {0x1D0, 48, 0, 0})
	DMember(int32_t)                                   StartJointIndex                                             OFFSET(get<int32_t>, {0x200, 4, 0, 0})
	DMember(int32_t)                                   MidJointIndex                                               OFFSET(get<int32_t>, {0x204, 4, 0, 0})
	DMember(int32_t)                                   EndJointIndex                                               OFFSET(get<int32_t>, {0x208, 4, 0, 0})
	DMember(float)                                     UpperLimbLength                                             OFFSET(get<float>, {0x20C, 4, 0, 0})
	DMember(float)                                     LowerLimbLength                                             OFFSET(get<float>, {0x210, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleTransforms
/// Size: 0x00D8 (0x000008 - 0x0000E0)
class FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FTransform)                                Root                                                        OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FVector)                                   PoleVector                                                  OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FTransform)                                Effector                                                    OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(getStruct<T>, {0x80, 12, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(getStruct<T>, {0x8C, 12, 0, 0})
	DMember(float)                                     SecondaryAxisWeight                                         OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(bool)                                      bEnableStretch                                              OFFSET(get<bool>, {0x9C, 1, 0, 0})
	DMember(float)                                     StretchStartRatio                                           OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     StretchMaximumRatio                                         OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     BoneALength                                                 OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     BoneBLength                                                 OFFSET(get<float>, {0xAC, 4, 0, 0})
	SMember(FTransform)                                Elbow                                                       OFFSET(getStruct<T>, {0xB0, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleVectors
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Root                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   PoleVector                                                  OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   Effector                                                    OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(bool)                                      bEnableStretch                                              OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(float)                                     StretchStartRatio                                           OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     StretchMaximumRatio                                         OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     BoneALength                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     BoneBLength                                                 OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FVector)                                   Elbow                                                       OFFSET(getStruct<T>, {0x40, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigUnit_TwoBoneIKSimple_DebugSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimplePerItem
/// Size: 0x0148 (0x000068 - 0x0001B0)
class FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FRigElementKey)                            ItemA                                                       OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	SMember(FRigElementKey)                            ItemB                                                       OFFSET(getStruct<T>, {0x74, 12, 0, 0})
	SMember(FRigElementKey)                            EffectorItem                                                OFFSET(getStruct<T>, {0x80, 12, 0, 0})
	SMember(FTransform)                                Effector                                                    OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(getStruct<T>, {0xC0, 12, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(getStruct<T>, {0xCC, 12, 0, 0})
	DMember(float)                                     SecondaryAxisWeight                                         OFFSET(get<float>, {0xD8, 4, 0, 0})
	SMember(FVector)                                   PoleVector                                                  OFFSET(getStruct<T>, {0xDC, 12, 0, 0})
	CMember(EControlRigVectorKind)                     PoleVectorKind                                              OFFSET(get<T>, {0xE8, 1, 0, 0})
	SMember(FRigElementKey)                            PoleVectorSpace                                             OFFSET(getStruct<T>, {0xEC, 12, 0, 0})
	DMember(bool)                                      bEnableStretch                                              OFFSET(get<bool>, {0xF8, 1, 0, 0})
	DMember(float)                                     StretchStartRatio                                           OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     StretchMaximumRatio                                         OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     ItemALength                                                 OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     ItemBLength                                                 OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x110, 1, 0, 0})
	SMember(FRigUnit_TwoBoneIKSimple_DebugSettings)    DebugSettings                                               OFFSET(getStruct<T>, {0x120, 64, 0, 0})
	SMember(FCachedRigElement)                         CachedItemAIndex                                            OFFSET(getStruct<T>, {0x160, 20, 0, 0})
	SMember(FCachedRigElement)                         CachedItemBIndex                                            OFFSET(getStruct<T>, {0x174, 20, 0, 0})
	SMember(FCachedRigElement)                         CachedEffectorItemIndex                                     OFFSET(getStruct<T>, {0x188, 20, 0, 0})
	SMember(FCachedRigElement)                         CachedPoleVectorSpaceIndex                                  OFFSET(getStruct<T>, {0x19C, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple
/// Size: 0x0128 (0x000068 - 0x000190)
class FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FName)                                     BoneA                                                       OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     BoneB                                                       OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	SMember(FName)                                     EffectorBone                                                OFFSET(getStruct<T>, {0x78, 8, 0, 0})
	SMember(FTransform)                                Effector                                                    OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(getStruct<T>, {0xB0, 12, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(getStruct<T>, {0xBC, 12, 0, 0})
	DMember(float)                                     SecondaryAxisWeight                                         OFFSET(get<float>, {0xC8, 4, 0, 0})
	SMember(FVector)                                   PoleVector                                                  OFFSET(getStruct<T>, {0xCC, 12, 0, 0})
	CMember(EControlRigVectorKind)                     PoleVectorKind                                              OFFSET(get<T>, {0xD8, 1, 0, 0})
	SMember(FName)                                     PoleVectorSpace                                             OFFSET(getStruct<T>, {0xDC, 8, 0, 0})
	DMember(bool)                                      bEnableStretch                                              OFFSET(get<bool>, {0xE4, 1, 0, 0})
	DMember(float)                                     StretchStartRatio                                           OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     StretchMaximumRatio                                         OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     BoneALength                                                 OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     BoneBLength                                                 OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0xFC, 1, 0, 0})
	SMember(FRigUnit_TwoBoneIKSimple_DebugSettings)    DebugSettings                                               OFFSET(getStruct<T>, {0x100, 64, 0, 0})
	SMember(FCachedRigElement)                         CachedBoneAIndex                                            OFFSET(getStruct<T>, {0x140, 20, 0, 0})
	SMember(FCachedRigElement)                         CachedBoneBIndex                                            OFFSET(getStruct<T>, {0x154, 20, 0, 0})
	SMember(FCachedRigElement)                         CachedEffectorBoneIndex                                     OFFSET(getStruct<T>, {0x168, 20, 0, 0})
	SMember(FCachedRigElement)                         CachedPoleVectorSpaceIndex                                  OFFSET(getStruct<T>, {0x17C, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Distance_VectorVector
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_Distance_VectorVector : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   Argument0                                                   OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Argument1                                                   OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BinaryVectorOp
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_BinaryVectorOp : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Argument0                                                   OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Argument1                                                   OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Divide_VectorVector
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_Subtract_VectorVector
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_Add_VectorVector
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_Multiply_VectorVector
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_VerletIntegrateVector
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_VerletIntegrateVector : public FRigUnit_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Damp                                                        OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Blend                                                       OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	SMember(FVector)                                   Acceleration                                                OFFSET(getStruct<T>, {0x38, 12, 0, 0})
	SMember(FCRSimPoint)                               Point                                                       OFFSET(getStruct<T>, {0x44, 40, 0, 0})
	DMember(bool)                                      bInitialized                                                OFFSET(get<bool>, {0x6C, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransformItemSpace
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x48, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransform
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x48, 4, 0, 0})
	SMember(FName)                                     BoneSpace                                                   OFFSET(getStruct<T>, {0x4C, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuatItemSpace
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_VisualDebugQuatItemSpace : public FRigUnit_DebugBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuat
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FName)                                     BoneSpace                                                   OFFSET(getStruct<T>, {0x2C, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVectorItemSpace
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x14, 1, 0, 0})
	CMember(ERigUnitVisualDebugPointMode)              Mode                                                        OFFSET(get<T>, {0x15, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(getStruct<T>, {0x30, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVector
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_VisualDebugVector : public FRigUnit_DebugBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x14, 1, 0, 0})
	CMember(ERigUnitVisualDebugPointMode)              Mode                                                        OFFSET(get<T>, {0x15, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FName)                                     BoneSpace                                                   OFFSET(getStruct<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceWorld
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigUnit_SphereTraceWorld : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVector)                                   Start                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   End                                                         OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            Channel                                                     OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      bHit                                                        OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FVector)                                   HitLocation                                                 OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	SMember(FVector)                                   HitNormal                                                   OFFSET(getStruct<T>, {0x38, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Rotation
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_ToRigSpace_Rotation : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     Global                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Rotation
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_ToWorldSpace_Rotation : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     World                                                       OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Location
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ToRigSpace_Location : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Global                                                      OFFSET(getStruct<T>, {0x14, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Location
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ToWorldSpace_Location : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   World                                                       OFFSET(getStruct<T>, {0x14, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Transform
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_ToRigSpace_Transform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FTransform)                                Global                                                      OFFSET(getStruct<T>, {0x40, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Transform
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_ToWorldSpace_Transform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FTransform)                                World                                                       OFFSET(getStruct<T>, {0x40, 48, 0, 0})
};

/// Struct /Script/ControlRig.StructReference
/// Size: 0x0008 (0x000000 - 0x000008)
class FStructReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Enum /Script/ControlRig.EControlRigComponentMapDirection
/// Size: 0x02
enum class EControlRigComponentMapDirection : uint8_t
{
	EControlRigComponentMapDirection__Input                                          = 0,
	EControlRigComponentMapDirection__Output                                         = 1
};

/// Enum /Script/ControlRig.EControlRigComponentSpace
/// Size: 0x06
enum class EControlRigComponentSpace : uint8_t
{
	EControlRigComponentSpace__WorldSpace                                            = 0,
	EControlRigComponentSpace__ActorSpace                                            = 1,
	EControlRigComponentSpace__ComponentSpace                                        = 2,
	EControlRigComponentSpace__RigSpace                                              = 3,
	EControlRigComponentSpace__LocalSpace                                            = 4,
	EControlRigComponentSpace__Max                                                   = 5
};

/// Enum /Script/ControlRig.ERigExecutionType
/// Size: 0x03
enum class ERigExecutionType : uint8_t
{
	ERigExecutionType__Runtime                                                       = 0,
	ERigExecutionType__Editing                                                       = 1,
	ERigExecutionType__Max                                                           = 2
};

/// Enum /Script/ControlRig.EBoneGetterSetterMode
/// Size: 0x03
enum class EBoneGetterSetterMode : uint8_t
{
	EBoneGetterSetterMode__LocalSpace                                                = 0,
	EBoneGetterSetterMode__GlobalSpace                                               = 1,
	EBoneGetterSetterMode__Max                                                       = 2
};

/// Enum /Script/ControlRig.ETransformGetterType
/// Size: 0x03
enum class ETransformGetterType : uint8_t
{
	ETransformGetterType__Initial                                                    = 0,
	ETransformGetterType__Current                                                    = 1,
	ETransformGetterType__Max                                                        = 2
};

/// Enum /Script/ControlRig.EControlRigClampSpatialMode
/// Size: 0x03
enum class EControlRigClampSpatialMode : uint8_t
{
	EControlRigClampSpatialMode__Plane                                               = 0,
	EControlRigClampSpatialMode__Cylinder                                            = 1,
	EControlRigClampSpatialMode__Sphere                                              = 2
};

/// Enum /Script/ControlRig.ETransformSpaceMode
/// Size: 0x05
enum class ETransformSpaceMode : uint8_t
{
	ETransformSpaceMode__LocalSpace                                                  = 0,
	ETransformSpaceMode__GlobalSpace                                                 = 1,
	ETransformSpaceMode__BaseSpace                                                   = 2,
	ETransformSpaceMode__BaseJoint                                                   = 3,
	ETransformSpaceMode__Max                                                         = 4
};

/// Enum /Script/ControlRig.EControlRigDrawSettings
/// Size: 0x04
enum class EControlRigDrawSettings : uint8_t
{
	EControlRigDrawSettings__Points                                                  = 0,
	EControlRigDrawSettings__Lines                                                   = 1,
	EControlRigDrawSettings__LineStrip                                               = 2,
	EControlRigDrawSettings__DynamicMesh                                             = 3
};

/// Enum /Script/ControlRig.EControlRigDrawHierarchyMode
/// Size: 0x02
enum class EControlRigDrawHierarchyMode : uint8_t
{
	EControlRigDrawHierarchyMode__Axes                                               = 0,
	EControlRigDrawHierarchyMode__Max                                                = 1
};

/// Enum /Script/ControlRig.EControlRigAnimEasingType
/// Size: 0x31
enum class EControlRigAnimEasingType : uint8_t
{
	EControlRigAnimEasingType__Linear                                                = 0,
	EControlRigAnimEasingType__QuadraticEaseIn                                       = 1,
	EControlRigAnimEasingType__QuadraticEaseOut                                      = 2,
	EControlRigAnimEasingType__QuadraticEaseInOut                                    = 3,
	EControlRigAnimEasingType__CubicEaseIn                                           = 4,
	EControlRigAnimEasingType__CubicEaseOut                                          = 5,
	EControlRigAnimEasingType__CubicEaseInOut                                        = 6,
	EControlRigAnimEasingType__QuarticEaseIn                                         = 7,
	EControlRigAnimEasingType__QuarticEaseOut                                        = 8,
	EControlRigAnimEasingType__QuarticEaseInOut                                      = 9,
	EControlRigAnimEasingType__QuinticEaseIn                                         = 10,
	EControlRigAnimEasingType__QuinticEaseOut                                        = 11,
	EControlRigAnimEasingType__QuinticEaseInOut                                      = 12,
	EControlRigAnimEasingType__SineEaseIn                                            = 13,
	EControlRigAnimEasingType__SineEaseOut                                           = 14,
	EControlRigAnimEasingType__SineEaseInOut                                         = 15,
	EControlRigAnimEasingType__CircularEaseIn                                        = 16,
	EControlRigAnimEasingType__CircularEaseOut                                       = 17,
	EControlRigAnimEasingType__CircularEaseInOut                                     = 18,
	EControlRigAnimEasingType__ExponentialEaseIn                                     = 19,
	EControlRigAnimEasingType__ExponentialEaseOut                                    = 20,
	EControlRigAnimEasingType__ExponentialEaseInOut                                  = 21,
	EControlRigAnimEasingType__ElasticEaseIn                                         = 22,
	EControlRigAnimEasingType__ElasticEaseOut                                        = 23,
	EControlRigAnimEasingType__ElasticEaseInOut                                      = 24,
	EControlRigAnimEasingType__BackEaseIn                                            = 25,
	EControlRigAnimEasingType__BackEaseOut                                           = 26,
	EControlRigAnimEasingType__BackEaseInOut                                         = 27,
	EControlRigAnimEasingType__BounceEaseIn                                          = 28,
	EControlRigAnimEasingType__BounceEaseOut                                         = 29,
	EControlRigAnimEasingType__BounceEaseInOut                                       = 30
};

/// Enum /Script/ControlRig.EControlRigRotationOrder
/// Size: 0x06
enum class EControlRigRotationOrder : uint8_t
{
	EControlRigRotationOrder__XYZ                                                    = 0,
	EControlRigRotationOrder__XZY                                                    = 1,
	EControlRigRotationOrder__YXZ                                                    = 2,
	EControlRigRotationOrder__YZX                                                    = 3,
	EControlRigRotationOrder__ZXY                                                    = 4,
	EControlRigRotationOrder__ZYX                                                    = 5
};

/// Enum /Script/ControlRig.ECRSimPointIntegrateType
/// Size: 0x02
enum class ECRSimPointIntegrateType : uint8_t
{
	ECRSimPointIntegrateType__Verlet                                                 = 0,
	ECRSimPointIntegrateType__SemiExplicitEuler                                      = 1
};

/// Enum /Script/ControlRig.ECRSimConstraintType
/// Size: 0x04
enum class ECRSimConstraintType : uint8_t
{
	ECRSimConstraintType__Distance                                                   = 0,
	ECRSimConstraintType__DistanceFromA                                              = 1,
	ECRSimConstraintType__DistanceFromB                                              = 2,
	ECRSimConstraintType__Plane                                                      = 3
};

/// Enum /Script/ControlRig.ECRSimPointForceType
/// Size: 0x01
enum class ECRSimPointForceType : uint8_t
{
	ECRSimPointForceType__Direction                                                  = 0
};

/// Enum /Script/ControlRig.ECRSimSoftCollisionType
/// Size: 0x03
enum class ECRSimSoftCollisionType : uint8_t
{
	ECRSimSoftCollisionType__Plane                                                   = 0,
	ECRSimSoftCollisionType__Sphere                                                  = 1,
	ECRSimSoftCollisionType__Cone                                                    = 2
};

/// Enum /Script/ControlRig.EControlRigFKRigExecuteMode
/// Size: 0x03
enum class EControlRigFKRigExecuteMode : uint8_t
{
	EControlRigFKRigExecuteMode__Replace                                             = 0,
	EControlRigFKRigExecuteMode__Additive                                            = 1,
	EControlRigFKRigExecuteMode__Max                                                 = 2
};

/// Enum /Script/ControlRig.ERigBoneType
/// Size: 0x02
enum class ERigBoneType : uint8_t
{
	ERigBoneType__Imported                                                           = 0,
	ERigBoneType__User                                                               = 1
};

/// Enum /Script/ControlRig.ERigControlAxis
/// Size: 0x03
enum class ERigControlAxis : uint8_t
{
	ERigControlAxis__X                                                               = 0,
	ERigControlAxis__Y                                                               = 1,
	ERigControlAxis__Z                                                               = 2
};

/// Enum /Script/ControlRig.ERigControlValueType
/// Size: 0x04
enum class ERigControlValueType : uint8_t
{
	ERigControlValueType__Initial                                                    = 0,
	ERigControlValueType__Current                                                    = 1,
	ERigControlValueType__Minimum                                                    = 2,
	ERigControlValueType__Maximum                                                    = 3
};

/// Enum /Script/ControlRig.ERigControlType
/// Size: 0x10
enum class ERigControlType : uint8_t
{
	ERigControlType__Bool                                                            = 0,
	ERigControlType__Float                                                           = 1,
	ERigControlType__Integer                                                         = 2,
	ERigControlType__Vector2D                                                        = 3,
	ERigControlType__Position                                                        = 4,
	ERigControlType__Scale                                                           = 5,
	ERigControlType__Rotator                                                         = 6,
	ERigControlType__Transform                                                       = 7,
	ERigControlType__TransformNoScale                                                = 8,
	ERigControlType__EulerTransform                                                  = 9
};

/// Enum /Script/ControlRig.ERigHierarchyImportMode
/// Size: 0x05
enum class ERigHierarchyImportMode : uint8_t
{
	ERigHierarchyImportMode__Append                                                  = 0,
	ERigHierarchyImportMode__Replace                                                 = 1,
	ERigHierarchyImportMode__ReplaceLocalTransform                                   = 2,
	ERigHierarchyImportMode__ReplaceGlobalTransform                                  = 3,
	ERigHierarchyImportMode__Max                                                     = 4
};

/// Enum /Script/ControlRig.EControlRigSetKey
/// Size: 0x03
enum class EControlRigSetKey : uint8_t
{
	EControlRigSetKey__DoNotCare                                                     = 0,
	EControlRigSetKey__Always                                                        = 1,
	EControlRigSetKey__Never                                                         = 2
};

/// Enum /Script/ControlRig.ERigEvent
/// Size: 0x03
enum class ERigEvent : uint8_t
{
	ERigEvent__None                                                                  = 0,
	ERigEvent__RequestAutoKey                                                        = 1,
	ERigEvent__Max                                                                   = 2
};

/// Enum /Script/ControlRig.ERigElementType
/// Size: 0x06
enum class ERigElementType : uint8_t
{
	ERigElementType__None                                                            = 0,
	ERigElementType__Bone                                                            = 1,
	ERigElementType__Space                                                           = 2,
	ERigElementType__Control                                                         = 4,
	ERigElementType__Curve                                                           = 8,
	ERigElementType__All                                                             = 15
};

/// Enum /Script/ControlRig.ERigSpaceType
/// Size: 0x04
enum class ERigSpaceType : uint8_t
{
	ERigSpaceType__Global                                                            = 0,
	ERigSpaceType__Bone                                                              = 1,
	ERigSpaceType__Control                                                           = 2,
	ERigSpaceType__Space                                                             = 3
};

/// Enum /Script/ControlRig.EAimMode
/// Size: 0x02
enum class EAimMode : uint8_t
{
	EAimMode__AimAtTarget                                                            = 0,
	EAimMode__OrientToTarget                                                         = 1
};

/// Enum /Script/ControlRig.EApplyTransformMode
/// Size: 0x03
enum class EApplyTransformMode : uint8_t
{
	EApplyTransformMode__Override                                                    = 0,
	EApplyTransformMode__Additive                                                    = 1,
	EApplyTransformMode__Max                                                         = 2
};

/// Enum /Script/ControlRig.ERigUnitDebugPointMode
/// Size: 0x03
enum class ERigUnitDebugPointMode : uint8_t
{
	ERigUnitDebugPointMode__Point                                                    = 0,
	ERigUnitDebugPointMode__Vector                                                   = 1,
	ERigUnitDebugPointMode__Max                                                      = 2
};

/// Enum /Script/ControlRig.ERigUnitDebugTransformMode
/// Size: 0x04
enum class ERigUnitDebugTransformMode : uint8_t
{
	ERigUnitDebugTransformMode__Point                                                = 0,
	ERigUnitDebugTransformMode__Axes                                                 = 1,
	ERigUnitDebugTransformMode__Box                                                  = 2,
	ERigUnitDebugTransformMode__Max                                                  = 3
};

/// Enum /Script/ControlRig.EControlRigCurveAlignment
/// Size: 0x02
enum class EControlRigCurveAlignment : uint8_t
{
	EControlRigCurveAlignment__Front                                                 = 0,
	EControlRigCurveAlignment__Stretched                                             = 1
};

/// Enum /Script/ControlRig.EControlRigVectorKind
/// Size: 0x02
enum class EControlRigVectorKind : uint8_t
{
	EControlRigVectorKind__Direction                                                 = 0,
	EControlRigVectorKind__Location                                                  = 1
};

/// Enum /Script/ControlRig.ERBFVectorDistanceType
/// Size: 0x03
enum class ERBFVectorDistanceType : uint8_t
{
	ERBFVectorDistanceType__Euclidean                                                = 0,
	ERBFVectorDistanceType__Manhattan                                                = 1,
	ERBFVectorDistanceType__ArcLength                                                = 2
};

/// Enum /Script/ControlRig.ERBFQuatDistanceType
/// Size: 0x04
enum class ERBFQuatDistanceType : uint8_t
{
	ERBFQuatDistanceType__Euclidean                                                  = 0,
	ERBFQuatDistanceType__ArcLength                                                  = 1,
	ERBFQuatDistanceType__SwingAngle                                                 = 2,
	ERBFQuatDistanceType__TwistAngle                                                 = 3
};

/// Enum /Script/ControlRig.ERBFKernelType
/// Size: 0x05
enum class ERBFKernelType : uint8_t
{
	ERBFKernelType__Gaussian                                                         = 0,
	ERBFKernelType__Exponential                                                      = 1,
	ERBFKernelType__Linear                                                           = 2,
	ERBFKernelType__Cubic                                                            = 3,
	ERBFKernelType__Quintic                                                          = 4
};

/// Enum /Script/ControlRig.EControlRigModifyBoneMode
/// Size: 0x05
enum class EControlRigModifyBoneMode : uint8_t
{
	EControlRigModifyBoneMode__OverrideLocal                                         = 0,
	EControlRigModifyBoneMode__OverrideGlobal                                        = 1,
	EControlRigModifyBoneMode__AdditiveLocal                                         = 2,
	EControlRigModifyBoneMode__AdditiveGlobal                                        = 3,
	EControlRigModifyBoneMode__Max                                                   = 4
};

/// Enum /Script/ControlRig.ERigUnitVisualDebugPointMode
/// Size: 0x03
enum class ERigUnitVisualDebugPointMode : uint8_t
{
	ERigUnitVisualDebugPointMode__Point                                              = 0,
	ERigUnitVisualDebugPointMode__Vector                                             = 1,
	ERigUnitVisualDebugPointMode__Max                                                = 2
};

/// Enum /Script/ControlRig.EControlRigState
/// Size: 0x03
enum class EControlRigState : uint8_t
{
	EControlRigState__Init                                                           = 0,
	EControlRigState__Update                                                         = 1,
	EControlRigState__Invalid                                                        = 2
};


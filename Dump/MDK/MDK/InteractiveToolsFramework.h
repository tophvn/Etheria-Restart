
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/InteractiveToolsFramework.InputBehavior
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputBehavior : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InteractiveToolsFramework.AnyButtonInputBehavior
/// Size: 0x0050 (0x000030 - 0x000080)
class UAnyButtonInputBehavior : public UInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmoBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveGizmoBuilder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.AxisAngleGizmoBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmo
/// Size: 0x0010 (0x000028 - 0x000038)
class UInteractiveGizmo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UInputBehaviorSet*)                  InputBehaviors                                              OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.AxisAngleGizmo
/// Size: 0x00B8 (0x000038 - 0x0000F0)
class UAxisAngleGizmo : public UInteractiveGizmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   AngleSource                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   HitTarget                                                   OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   StateTarget                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(bool)                                      bInInteraction                                              OFFSET(get<bool>, {0x88, 1, 0, 0})
	SMember(FVector)                                   RotationOrigin                                              OFFSET(getStruct<T>, {0x8C, 12, 0, 0})
	SMember(FVector)                                   RotationAxis                                                OFFSET(getStruct<T>, {0x98, 12, 0, 0})
	SMember(FVector)                                   RotationPlaneX                                              OFFSET(getStruct<T>, {0xA4, 12, 0, 0})
	SMember(FVector)                                   RotationPlaneY                                              OFFSET(getStruct<T>, {0xB0, 12, 0, 0})
	SMember(FVector)                                   InteractionStartPoint                                       OFFSET(getStruct<T>, {0xBC, 12, 0, 0})
	SMember(FVector)                                   InteractionCurPoint                                         OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	DMember(float)                                     InteractionStartAngle                                       OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     InteractionCurAngle                                         OFFSET(get<float>, {0xD8, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.AxisPositionGizmoBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.AxisPositionGizmo
/// Size: 0x00A0 (0x000038 - 0x0000D8)
class UAxisPositionGizmo : public UInteractiveGizmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   ParameterSource                                             OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   HitTarget                                                   OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   StateTarget                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(bool)                                      bEnableSignedAxis                                           OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      bInInteraction                                              OFFSET(get<bool>, {0x89, 1, 0, 0})
	SMember(FVector)                                   InteractionOrigin                                           OFFSET(getStruct<T>, {0x8C, 12, 0, 0})
	SMember(FVector)                                   InteractionAxis                                             OFFSET(getStruct<T>, {0x98, 12, 0, 0})
	SMember(FVector)                                   InteractionStartPoint                                       OFFSET(getStruct<T>, {0xA4, 12, 0, 0})
	SMember(FVector)                                   InteractionCurPoint                                         OFFSET(getStruct<T>, {0xB0, 12, 0, 0})
	DMember(float)                                     InteractionStartParameter                                   OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     InteractionCurParameter                                     OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     ParameterSign                                               OFFSET(get<float>, {0xC4, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoConstantAxisSource
/// Size: 0x0020 (0x000028 - 0x000048)
class UGizmoConstantAxisSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVector)                                   Origin                                                      OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoConstantFrameAxisSource
/// Size: 0x0038 (0x000028 - 0x000060)
class UGizmoConstantFrameAxisSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   Origin                                                      OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
	SMember(FVector)                                   TangentX                                                    OFFSET(getStruct<T>, {0x48, 12, 0, 0})
	SMember(FVector)                                   TangentY                                                    OFFSET(getStruct<T>, {0x54, 12, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoWorldAxisSource
/// Size: 0x0018 (0x000028 - 0x000040)
class UGizmoWorldAxisSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Origin                                                      OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	DMember(int32_t)                                   AxisIndex                                                   OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentAxisSource
/// Size: 0x0018 (0x000028 - 0x000040)
class UGizmoComponentAxisSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class USceneComponent*)                    Component                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   AxisIndex                                                   OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      bLocalAxes                                                  OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolPropertySet
/// Size: 0x0038 (0x000028 - 0x000060)
class UInteractiveToolPropertySet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UInteractiveToolPropertySet*)        CachedProperties                                            OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bIsPropertySetEnabled                                       OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.BrushBaseProperties
/// Size: 0x0018 (0x000060 - 0x000078)
class UBrushBaseProperties : public UInteractiveToolPropertySet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     BrushSize                                                   OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(bool)                                      bSpecifyRadius                                              OFFSET(get<bool>, {0x64, 1, 0, 0})
	DMember(float)                                     BrushRadius                                                 OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     BrushStrength                                               OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     BrushFalloffAmount                                          OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      bShowStrength                                               OFFSET(get<bool>, {0x74, 1, 0, 0})
	DMember(bool)                                      bShowFalloff                                                OFFSET(get<bool>, {0x75, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.InteractiveTool
/// Size: 0x0058 (0x000028 - 0x000080)
class UInteractiveTool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UInputBehaviorSet*)                  InputBehaviors                                              OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<class UObject*>)                    ToolPropertyObjects                                         OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.SingleSelectionTool
/// Size: 0x0008 (0x000080 - 0x000088)
class USingleSelectionTool : public UInteractiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Script/InteractiveToolsFramework.MeshSurfacePointTool
/// Size: 0x0038 (0x000088 - 0x0000C0)
class UMeshSurfacePointTool : public USingleSelectionTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Struct /Script/InteractiveToolsFramework.BrushStampData
/// Size: 0x00AC (0x000000 - 0x0000AC)
class FBrushStampData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 172;

public:
};

/// Class /Script/InteractiveToolsFramework.BaseBrushTool
/// Size: 0x0100 (0x0000C0 - 0x0001C0)
class UBaseBrushTool : public UMeshSurfacePointTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(class UBrushBaseProperties*)               BrushProperties                                             OFFSET(get<T>, {0xC0, 8, 0, 0})
	DMember(bool)                                      bInBrushStroke                                              OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(float)                                     WorldToLocalScale                                           OFFSET(get<float>, {0xCC, 4, 0, 0})
	SMember(FBrushStampData)                           LastBrushStamp                                              OFFSET(getStruct<T>, {0xD0, 172, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             PropertyClass                                               OFFSET(get<T>, {0x190, 40, 0, 0})
	CMember(class UBrushStampIndicator*)               BrushStampIndicator                                         OFFSET(get<T>, {0x1B8, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.BrushStampIndicatorBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.BrushStampIndicator
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UBrushStampIndicator : public UInteractiveGizmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     BrushRadius                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     BrushFalloff                                                OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FVector)                                   BrushPosition                                               OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FVector)                                   BrushNormal                                                 OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	DMember(bool)                                      bDrawIndicatorLines                                         OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bDrawRadiusCircle                                           OFFSET(get<bool>, {0x59, 1, 0, 0})
	DMember(int32_t)                                   SampleStepCount                                             OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	SMember(FLinearColor)                              LineColor                                                   OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	DMember(float)                                     LineThickness                                               OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      bDepthTested                                                OFFSET(get<bool>, {0x74, 1, 0, 0})
	DMember(bool)                                      bDrawSecondaryLines                                         OFFSET(get<bool>, {0x75, 1, 0, 0})
	DMember(float)                                     SecondaryLineThickness                                      OFFSET(get<float>, {0x78, 4, 0, 0})
	SMember(FLinearColor)                              SecondaryLineColor                                          OFFSET(getStruct<T>, {0x7C, 16, 0, 0})
	CMember(class UPrimitiveComponent*)                AttachedComponent                                           OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.ClickDragInputBehavior
/// Size: 0x00C0 (0x000080 - 0x000140)
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(bool)                                      bUpdateModifiersDuringDrag                                  OFFSET(get<bool>, {0x120, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.LocalClickDragInputBehavior
/// Size: 0x0140 (0x000140 - 0x000280)
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UInteractiveToolBuilder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.ClickDragToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UClickDragToolBuilder : public UInteractiveToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.ClickDragTool
/// Size: 0x0008 (0x000080 - 0x000088)
class UClickDragTool : public UInteractiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Script/InteractiveToolsFramework.InternalToolFrameworkActor
/// Size: 0x0000 (0x000220 - 0x000220)
class AInternalToolFrameworkActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoActor
/// Size: 0x0000 (0x000220 - 0x000220)
class AGizmoActor : public AInternalToolFrameworkActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseComponent
/// Size: 0x0028 (0x000468 - 0x000490)
class UGizmoBaseComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x468, 16, 0, 0})
	DMember(float)                                     HoverSizeMultiplier                                         OFFSET(get<float>, {0x478, 4, 0, 0})
	DMember(float)                                     PixelHitDistanceThreshold                                   OFFSET(get<float>, {0x47C, 4, 0, 0})


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
	// void UpdateWorldLocalState(bool bWorldIn);                                                                               // [0x35e9de0] Final|Native|Public  
	// Function /Script/InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
	// void UpdateHoverState(bool bHoveringIn);                                                                                 // [0x35e9d50] Final|Native|Public  
};

/// Class /Script/InteractiveToolsFramework.GizmoArrowComponent
/// Size: 0x0028 (0x000488 - 0x0004B0)
class UGizmoArrowComponent : public UGizmoBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x488, 12, 0, 0})
	DMember(float)                                     Gap                                                         OFFSET(get<float>, {0x494, 4, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x498, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x49C, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoBoxComponent
/// Size: 0x0048 (0x000488 - 0x0004D0)
class UGizmoBoxComponent : public UGizmoBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	SMember(FVector)                                   Origin                                                      OFFSET(getStruct<T>, {0x488, 12, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x4A0, 16, 0, 0})
	SMember(FVector)                                   Dimensions                                                  OFFSET(getStruct<T>, {0x4B0, 12, 0, 0})
	DMember(float)                                     LineThickness                                               OFFSET(get<float>, {0x4BC, 4, 0, 0})
	DMember(bool)                                      bRemoveHiddenLines                                          OFFSET(get<bool>, {0x4C0, 1, 0, 0})
	DMember(bool)                                      bEnableAxisFlip                                             OFFSET(get<bool>, {0x4C1, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoCircleComponent
/// Size: 0x0028 (0x000488 - 0x0004B0)
class UGizmoCircleComponent : public UGizmoBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x488, 12, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x494, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x498, 4, 0, 0})
	DMember(int32_t)                                   NumSides                                                    OFFSET(get<int32_t>, {0x49C, 4, 0, 0})
	DMember(bool)                                      bViewAligned                                                OFFSET(get<bool>, {0x4A0, 1, 0, 0})
	DMember(bool)                                      bOnlyAllowFrontFacingHits                                   OFFSET(get<bool>, {0x4A1, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoTransformSource : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoTransformSource.SetTransform
	// void SetTransform(FTransform& NewTransform);                                                                             // [0x35e9be0] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/InteractiveToolsFramework.GizmoTransformSource.GetTransform
	// FTransform GetTransform();                                                                                               // [0x35e9a20] Native|Public|HasDefaults|Const 
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoAxisSource : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
	// bool HasTangentVectors();                                                                                                // [0x35e9a90] Native|Public|Const  
	// Function /Script/InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
	// void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut);                                                      // [0x35e9930] Native|Public|HasOutParms|HasDefaults|Const 
	// Function /Script/InteractiveToolsFramework.GizmoAxisSource.GetOrigin
	// FVector GetOrigin();                                                                                                     // [0x35e9880] Native|Public|HasDefaults|Const 
	// Function /Script/InteractiveToolsFramework.GizmoAxisSource.GetDirection
	// FVector GetDirection();                                                                                                  // [0x35e9840] Native|Public|HasDefaults|Const 
};

/// Class /Script/InteractiveToolsFramework.GizmoClickTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoClickTarget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
	// void UpdateHoverState(bool bHovering);                                                                                   // [0x35e9cc0] Native|Public|Const  
};

/// Class /Script/InteractiveToolsFramework.GizmoStateTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoStateTarget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoStateTarget.EndUpdate
	// void EndUpdate();                                                                                                        // [0x35e97e0] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
	// void BeginUpdate();                                                                                                      // [0x35e9800] Native|Public        
};

/// Class /Script/InteractiveToolsFramework.GizmoFloatParameterSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoFloatParameterSource : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
	// void SetParameter(float NewValue);                                                                                       // [0x35e9ac0] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
	// float GetParameter();                                                                                                    // [0x35e98c0] Native|Public|Const  
	// Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
	// void EndModify();                                                                                                        // [0x35e9820] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
	// void BeginModify();                                                                                                      // [0x35e97e0] Native|Public        
};

/// Class /Script/InteractiveToolsFramework.GizmoVec2ParameterSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UGizmoVec2ParameterSource : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
	// void SetParameter(FVector2D& NewValue);                                                                                  // [0x35e9b50] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
	// FVector2D GetParameter();                                                                                                // [0x35e98f0] Native|Public|HasDefaults|Const 
	// Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
	// void EndModify();                                                                                                        // [0x35e9820] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
	// void BeginModify();                                                                                                      // [0x35e97e0] Native|Public        
};

/// Class /Script/InteractiveToolsFramework.GizmoLineHandleComponent
/// Size: 0x0028 (0x000488 - 0x0004B0)
class UGizmoLineHandleComponent : public UGizmoBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x488, 12, 0, 0})
	DMember(float)                                     HandleSize                                                  OFFSET(get<float>, {0x494, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x498, 4, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x49C, 12, 0, 0})
	DMember(float)                                     Length                                                      OFFSET(get<float>, {0x4A8, 4, 0, 0})
	DMember(bool)                                      bImageScale                                                 OFFSET(get<bool>, {0x4AC, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoRectangleComponent
/// Size: 0x0038 (0x000488 - 0x0004C0)
class UGizmoRectangleComponent : public UGizmoBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1216;

public:
	SMember(FVector)                                   DirectionX                                                  OFFSET(getStruct<T>, {0x488, 12, 0, 0})
	SMember(FVector)                                   DirectionY                                                  OFFSET(getStruct<T>, {0x494, 12, 0, 0})
	DMember(float)                                     OffsetX                                                     OFFSET(get<float>, {0x4A0, 4, 0, 0})
	DMember(float)                                     OffsetY                                                     OFFSET(get<float>, {0x4A4, 4, 0, 0})
	DMember(float)                                     LengthX                                                     OFFSET(get<float>, {0x4A8, 4, 0, 0})
	DMember(float)                                     LengthY                                                     OFFSET(get<float>, {0x4AC, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x4B0, 4, 0, 0})
	DMember(char)                                      SegmentFlags                                                OFFSET(get<char>, {0x4B4, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoLambdaHitTarget
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UGizmoLambdaHitTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentHitTarget
/// Size: 0x0058 (0x000028 - 0x000080)
class UGizmoComponentHitTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UPrimitiveComponent*)                Component                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/InteractiveToolsFramework.BehaviorInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FBehaviorInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UInputBehavior*)                     Behavior                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.InputBehaviorSet
/// Size: 0x0010 (0x000028 - 0x000038)
class UInputBehaviorSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FBehaviorInfo>)                     Behaviors                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.InputBehaviorSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputBehaviorSource : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.InputRouter
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UInputRouter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bAutoInvalidateOnHover                                      OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bAutoInvalidateOnCapture                                    OFFSET(get<bool>, {0x29, 1, 0, 0})
	CMember(class UInputBehaviorSet*)                  ActiveInputBehaviors                                        OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.InteractionMechanic
/// Size: 0x0008 (0x000028 - 0x000030)
class UInteractionMechanic : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/InteractiveToolsFramework.ActiveGizmo
/// Size: 0x0030 (0x000000 - 0x000030)
class FActiveGizmo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmoManager
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UInteractiveGizmoManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<FActiveGizmo>)                      ActiveGizmos                                                OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TMap<FString, class UInteractiveGizmoBuilder*>) GizmoBuilders                                          OFFSET(get<T>, {0x58, 80, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.ToolContextTransactionProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UToolContextTransactionProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolManager
/// Size: 0x0110 (0x000028 - 0x000138)
class UInteractiveToolManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(class UInteractiveTool*)                   ActiveLeftTool                                              OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UInteractiveTool*)                   ActiveRightTool                                             OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TMap<FString, class UInteractiveToolBuilder*>) ToolBuilders                                            OFFSET(get<T>, {0x90, 80, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.ToolFrameworkComponent
/// Size: 0x0000 (0x000028 - 0x000028)
class UToolFrameworkComponent : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolsContext
/// Size: 0x0070 (0x000028 - 0x000098)
class UInteractiveToolsContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UInputRouter*)                       InputRouter                                                 OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UInteractiveToolManager*)            ToolManager                                                 OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UInteractiveGizmoManager*)           GizmoManager                                                OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             ToolManagerClass                                            OFFSET(get<T>, {0x70, 40, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmoActor
/// Size: 0x0018 (0x000220 - 0x000238)
class AIntervalGizmoActor : public AGizmoActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	CMember(class UGizmoLineHandleComponent*)          UpIntervalComponent                                         OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UGizmoLineHandleComponent*)          DownIntervalComponent                                       OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class UGizmoLineHandleComponent*)          ForwardIntervalComponent                                    OFFSET(get<T>, {0x230, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmoBuilder
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmo
/// Size: 0x00F8 (0x000038 - 0x000130)
class UIntervalGizmo : public UInteractiveGizmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(class UGizmoTransformChangeStateTarget*)   StateTarget                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UTransformProxy*)                    TransformProxy                                              OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TArray<class UPrimitiveComponent*>)        ActiveComponents                                            OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<class UInteractiveGizmo*>)          ActiveGizmos                                                OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(class UGizmoComponentAxisSource*)          AxisYSource                                                 OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class UGizmoComponentAxisSource*)          AxisZSource                                                 OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseFloatParameterSource
/// Size: 0x0020 (0x000028 - 0x000048)
class UGizmoBaseFloatParameterSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisIntervalParameterSource
/// Size: 0x0018 (0x000048 - 0x000060)
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TScriptInterface<Class>)                   FloatParameterSource                                        OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(float)                                     MinParameter                                                OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     MaxParameter                                                OFFSET(get<float>, {0x5C, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.KeyAsModifierInputBehavior
/// Size: 0x00E0 (0x000030 - 0x000110)
class UKeyAsModifierInputBehavior : public UInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/InteractiveToolsFramework.MeshSurfacePointToolBuilder
/// Size: 0x0008 (0x000028 - 0x000030)
class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InteractiveToolsFramework.MouseHoverBehavior
/// Size: 0x0068 (0x000030 - 0x000098)
class UMouseHoverBehavior : public UInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/InteractiveToolsFramework.MultiClickSequenceInputBehavior
/// Size: 0x00B0 (0x000080 - 0x000130)
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Script/InteractiveToolsFramework.MultiSelectionTool
/// Size: 0x0010 (0x000080 - 0x000090)
class UMultiSelectionTool : public UInteractiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Struct /Script/InteractiveToolsFramework.GizmoFloatParameterChange
/// Size: 0x0008 (0x000000 - 0x000008)
class FGizmoFloatParameterChange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     InitialValue                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     CurrentValue                                                OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoLocalFloatParameterSource
/// Size: 0x0010 (0x000048 - 0x000058)
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x48, 4, 0, 0})
	SMember(FGizmoFloatParameterChange)                LastChange                                                  OFFSET(getStruct<T>, {0x4C, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseVec2ParameterSource
/// Size: 0x0020 (0x000028 - 0x000048)
class UGizmoBaseVec2ParameterSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/InteractiveToolsFramework.GizmoVec2ParameterChange
/// Size: 0x0010 (0x000000 - 0x000010)
class FGizmoVec2ParameterChange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FVector2D)                                 InitialValue                                                OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector2D)                                 CurrentValue                                                OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoLocalVec2ParameterSource
/// Size: 0x0018 (0x000048 - 0x000060)
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector2D)                                 Value                                                       OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	SMember(FGizmoVec2ParameterChange)                 LastChange                                                  OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisTranslationParameterSource
/// Size: 0x00C8 (0x000048 - 0x000110)
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   TransformSource                                             OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(float)                                     Parameter                                                   OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FGizmoFloatParameterChange)                LastChange                                                  OFFSET(getStruct<T>, {0xB4, 8, 0, 0})
	SMember(FVector)                                   CurTranslationAxis                                          OFFSET(getStruct<T>, {0xBC, 12, 0, 0})
	SMember(FVector)                                   CurTranslationOrigin                                        OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0xE0, 48, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
/// Size: 0x00E8 (0x000048 - 0x000130)
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   TransformSource                                             OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FVector2D)                                 Parameter                                                   OFFSET(getStruct<T>, {0xB0, 8, 0, 0})
	SMember(FGizmoVec2ParameterChange)                 LastChange                                                  OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FVector)                                   CurTranslationOrigin                                        OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FVector)                                   CurTranslationNormal                                        OFFSET(getStruct<T>, {0xD4, 12, 0, 0})
	SMember(FVector)                                   CurTranslationAxisX                                         OFFSET(getStruct<T>, {0xE0, 12, 0, 0})
	SMember(FVector)                                   CurTranslationAxisY                                         OFFSET(getStruct<T>, {0xEC, 12, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0x100, 48, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisRotationParameterSource
/// Size: 0x00C8 (0x000048 - 0x000110)
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   TransformSource                                             OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FGizmoFloatParameterChange)                LastChange                                                  OFFSET(getStruct<T>, {0xB4, 8, 0, 0})
	SMember(FVector)                                   CurRotationAxis                                             OFFSET(getStruct<T>, {0xBC, 12, 0, 0})
	SMember(FVector)                                   CurRotationOrigin                                           OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0xE0, 48, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoUniformScaleParameterSource
/// Size: 0x00A8 (0x000048 - 0x0000F0)
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   TransformSource                                             OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(float)                                     ScaleMultiplier                                             OFFSET(get<float>, {0x68, 4, 0, 0})
	SMember(FVector2D)                                 Parameter                                                   OFFSET(getStruct<T>, {0x6C, 8, 0, 0})
	SMember(FGizmoVec2ParameterChange)                 LastChange                                                  OFFSET(getStruct<T>, {0x74, 16, 0, 0})
	SMember(FVector)                                   CurScaleOrigin                                              OFFSET(getStruct<T>, {0x84, 12, 0, 0})
	SMember(FVector)                                   CurScaleNormal                                              OFFSET(getStruct<T>, {0x90, 12, 0, 0})
	SMember(FVector)                                   CurScaleAxisX                                               OFFSET(getStruct<T>, {0x9C, 12, 0, 0})
	SMember(FVector)                                   CurScaleAxisY                                               OFFSET(getStruct<T>, {0xA8, 12, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0xC0, 48, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisScaleParameterSource
/// Size: 0x0078 (0x000048 - 0x0000C0)
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   TransformSource                                             OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(float)                                     ScaleMultiplier                                             OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     Parameter                                                   OFFSET(get<float>, {0x6C, 4, 0, 0})
	SMember(FGizmoFloatParameterChange)                LastChange                                                  OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	SMember(FVector)                                   CurScaleAxis                                                OFFSET(getStruct<T>, {0x78, 12, 0, 0})
	SMember(FVector)                                   CurScaleOrigin                                              OFFSET(getStruct<T>, {0x84, 12, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0x90, 48, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoPlaneScaleParameterSource
/// Size: 0x00E8 (0x000048 - 0x000130)
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   TransformSource                                             OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(float)                                     ScaleMultiplier                                             OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FVector2D)                                 Parameter                                                   OFFSET(getStruct<T>, {0xB4, 8, 0, 0})
	SMember(FGizmoVec2ParameterChange)                 LastChange                                                  OFFSET(getStruct<T>, {0xBC, 16, 0, 0})
	SMember(FVector)                                   CurScaleOrigin                                              OFFSET(getStruct<T>, {0xCC, 12, 0, 0})
	SMember(FVector)                                   CurScaleNormal                                              OFFSET(getStruct<T>, {0xD8, 12, 0, 0})
	SMember(FVector)                                   CurScaleAxisX                                               OFFSET(getStruct<T>, {0xE4, 12, 0, 0})
	SMember(FVector)                                   CurScaleAxisY                                               OFFSET(getStruct<T>, {0xF0, 12, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0x100, 48, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.PlanePositionGizmoBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.PlanePositionGizmo
/// Size: 0x00C8 (0x000038 - 0x000100)
class UPlanePositionGizmo : public UInteractiveGizmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TScriptInterface<Class>)                   AxisSource                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   ParameterSource                                             OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   HitTarget                                                   OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   StateTarget                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(bool)                                      bEnableSignedAxis                                           OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      bFlipX                                                      OFFSET(get<bool>, {0x89, 1, 0, 0})
	DMember(bool)                                      bFlipY                                                      OFFSET(get<bool>, {0x8A, 1, 0, 0})
	DMember(bool)                                      bInInteraction                                              OFFSET(get<bool>, {0x8B, 1, 0, 0})
	SMember(FVector)                                   InteractionOrigin                                           OFFSET(getStruct<T>, {0x8C, 12, 0, 0})
	SMember(FVector)                                   InteractionNormal                                           OFFSET(getStruct<T>, {0x98, 12, 0, 0})
	SMember(FVector)                                   InteractionAxisX                                            OFFSET(getStruct<T>, {0xA4, 12, 0, 0})
	SMember(FVector)                                   InteractionAxisY                                            OFFSET(getStruct<T>, {0xB0, 12, 0, 0})
	SMember(FVector)                                   InteractionStartPoint                                       OFFSET(getStruct<T>, {0xBC, 12, 0, 0})
	SMember(FVector)                                   InteractionCurPoint                                         OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FVector2D)                                 InteractionStartParameter                                   OFFSET(getStruct<T>, {0xD4, 8, 0, 0})
	SMember(FVector2D)                                 InteractionCurParameter                                     OFFSET(getStruct<T>, {0xDC, 8, 0, 0})
	SMember(FVector2D)                                 ParameterSigns                                              OFFSET(getStruct<T>, {0xE4, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.SelectionSet
/// Size: 0x0018 (0x000028 - 0x000040)
class USelectionSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/InteractiveToolsFramework.MeshSelectionSet
/// Size: 0x0040 (0x000040 - 0x000080)
class UMeshSelectionSet : public USelectionSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<int32_t>)                           Vertices                                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<int32_t>)                           Edges                                                       OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<int32_t>)                           Faces                                                       OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<int32_t>)                           Groups                                                      OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.SingleClickInputBehavior
/// Size: 0x00B0 (0x000080 - 0x000130)
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(bool)                                      HitTestOnRelease                                            OFFSET(get<bool>, {0xC0, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.SingleClickToolBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class USingleClickToolBuilder : public UInteractiveToolBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InteractiveToolsFramework.SingleClickTool
/// Size: 0x0008 (0x000080 - 0x000088)
class USingleClickTool : public UInteractiveTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoNilStateTarget
/// Size: 0x0008 (0x000028 - 0x000030)
class UGizmoNilStateTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoLambdaStateTarget
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UGizmoLambdaStateTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoObjectModifyStateTarget
/// Size: 0x0030 (0x000028 - 0x000058)
class UGizmoObjectModifyStateTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformChangeStateTarget
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UGizmoTransformChangeStateTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TScriptInterface<Class>)                   TransactionManager                                          OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.TransformGizmoActor
/// Size: 0x0080 (0x000220 - 0x0002A0)
class ATransformGizmoActor : public AGizmoActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class UPrimitiveComponent*)                TranslateX                                                  OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                TranslateY                                                  OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                TranslateZ                                                  OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                TranslateYZ                                                 OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                TranslateXZ                                                 OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                TranslateXY                                                 OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                RotateX                                                     OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                RotateY                                                     OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                RotateZ                                                     OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                UniformScale                                                OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                AxisScaleX                                                  OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                AxisScaleY                                                  OFFSET(get<T>, {0x278, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                AxisScaleZ                                                  OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                PlaneScaleYZ                                                OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                PlaneScaleXZ                                                OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                PlaneScaleXY                                                OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.TransformGizmoBuilder
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/InteractiveToolsFramework.TransformGizmo
/// Size: 0x0168 (0x000038 - 0x0001A0)
class UTransformGizmo : public UInteractiveGizmo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(class UTransformProxy*)                    ActiveTarget                                                OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bSnapToWorldGrid                                            OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bGridSizeIsExplicit                                         OFFSET(get<bool>, {0x49, 1, 0, 0})
	SMember(FVector)                                   ExplicitGridSize                                            OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	DMember(bool)                                      bRotationGridSizeIsExplicit                                 OFFSET(get<bool>, {0x58, 1, 0, 0})
	SMember(FRotator)                                  ExplicitRotationGridSize                                    OFFSET(getStruct<T>, {0x5C, 12, 0, 0})
	DMember(bool)                                      bSnapToWorldRotGrid                                         OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bUseContextCoordinateSystem                                 OFFSET(get<bool>, {0x69, 1, 0, 0})
	CMember(EToolContextCoordinateSystem)              CurrentCoordinateSystem                                     OFFSET(get<T>, {0x6C, 4, 0, 0})
	CMember(TArray<class UPrimitiveComponent*>)        ActiveComponents                                            OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<class UPrimitiveComponent*>)        NonuniformScaleComponents                                   OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TArray<class UInteractiveGizmo*>)          ActiveGizmos                                                OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(class UGizmoConstantFrameAxisSource*)      CameraAxisSource                                            OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class UGizmoComponentAxisSource*)          AxisXSource                                                 OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(class UGizmoComponentAxisSource*)          AxisYSource                                                 OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class UGizmoComponentAxisSource*)          AxisZSource                                                 OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class UGizmoComponentAxisSource*)          UnitAxisXSource                                             OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(class UGizmoComponentAxisSource*)          UnitAxisYSource                                             OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(class UGizmoComponentAxisSource*)          UnitAxisZSource                                             OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(class UGizmoTransformChangeStateTarget*)   StateTarget                                                 OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(class UGizmoScaledTransformSource*)        ScaledTransformSource                                       OFFSET(get<T>, {0x180, 8, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.TransformProxy
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UTransformProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(bool)                                      bRotatePerObject                                            OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bSetPivotMode                                               OFFSET(get<bool>, {0x71, 1, 0, 0})
	SMember(FTransform)                                SharedTransform                                             OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	SMember(FTransform)                                InitialSharedTransform                                      OFFSET(getStruct<T>, {0xC0, 48, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseTransformSource
/// Size: 0x0020 (0x000028 - 0x000048)
class UGizmoBaseTransformSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentWorldTransformSource
/// Size: 0x0010 (0x000048 - 0x000058)
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class USceneComponent*)                    Component                                                   OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(bool)                                      bModifyComponentOnTransform                                 OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoScaledTransformSource
/// Size: 0x0098 (0x000048 - 0x0000E0)
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TScriptInterface<Class>)                   ChildTransformSource                                        OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformProxyTransformSource
/// Size: 0x0008 (0x000048 - 0x000050)
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UTransformProxy*)                    Proxy                                                       OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/InteractiveToolsFramework.InputRayHit
/// Size: 0x0028 (0x000000 - 0x000028)
class FInputRayHit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/InteractiveToolsFramework.EInputCaptureState
/// Size: 0x04
enum class EInputCaptureState : uint8_t
{
	EInputCaptureState__Begin                                                        = 1,
	EInputCaptureState__Continue                                                     = 2,
	EInputCaptureState__End                                                          = 3,
	EInputCaptureState__Ignore                                                       = 4
};

/// Enum /Script/InteractiveToolsFramework.EInputCaptureRequestType
/// Size: 0x02
enum class EInputCaptureRequestType : uint8_t
{
	EInputCaptureRequestType__Begin                                                  = 1,
	EInputCaptureRequestType__Ignore                                                 = 2
};

/// Enum /Script/InteractiveToolsFramework.EInputCaptureSide
/// Size: 0x05
enum class EInputCaptureSide : uint8_t
{
	EInputCaptureSide__None                                                          = 0,
	EInputCaptureSide__Left                                                          = 1,
	EInputCaptureSide__Right                                                         = 2,
	EInputCaptureSide__Both                                                          = 3,
	EInputCaptureSide__Any                                                           = 99
};

/// Enum /Script/InteractiveToolsFramework.EInputDevices
/// Size: 0x08
enum class EInputDevices : uint16_t
{
	EInputDevices__None                                                              = 0,
	EInputDevices__Keyboard                                                          = 1,
	EInputDevices__Mouse                                                             = 2,
	EInputDevices__Gamepad                                                           = 4,
	EInputDevices__OculusTouch                                                       = 8,
	EInputDevices__HTCViveWands                                                      = 16,
	EInputDevices__AnySpatialDevice                                                  = 24,
	EInputDevices__TabletFingers                                                     = 1024
};

/// Enum /Script/InteractiveToolsFramework.ETransformGizmoSubElements
/// Size: 0x25
enum class ETransformGizmoSubElements : uint32_t
{
	ETransformGizmoSubElements__None                                                 = 0,
	ETransformGizmoSubElements__TranslateAxisX                                       = 2,
	ETransformGizmoSubElements__TranslateAxisY                                       = 4,
	ETransformGizmoSubElements__TranslateAxisZ                                       = 8,
	ETransformGizmoSubElements__TranslateAllAxes                                     = 14,
	ETransformGizmoSubElements__TranslatePlaneXY                                     = 16,
	ETransformGizmoSubElements__TranslatePlaneXZ                                     = 32,
	ETransformGizmoSubElements__TranslatePlaneYZ                                     = 64,
	ETransformGizmoSubElements__TranslateAllPlanes                                   = 112,
	ETransformGizmoSubElements__RotateAxisX                                          = 128,
	ETransformGizmoSubElements__RotateAxisY                                          = 256,
	ETransformGizmoSubElements__RotateAxisZ                                          = 512,
	ETransformGizmoSubElements__RotateAllAxes                                        = 896,
	ETransformGizmoSubElements__ScaleAxisX                                           = 1024,
	ETransformGizmoSubElements__ScaleAxisY                                           = 2048,
	ETransformGizmoSubElements__ScaleAxisZ                                           = 4096,
	ETransformGizmoSubElements__ScaleAllAxes                                         = 7168,
	ETransformGizmoSubElements__ScalePlaneYZ                                         = 8192,
	ETransformGizmoSubElements__ScalePlaneXZ                                         = 16384,
	ETransformGizmoSubElements__ScalePlaneXY                                         = 32768,
	ETransformGizmoSubElements__ScaleAllPlanes                                       = 57344,
	ETransformGizmoSubElements__ScaleUniform                                         = 65536,
	ETransformGizmoSubElements__StandardTranslateRotate                              = 1022,
	ETransformGizmoSubElements__TranslateRotateUniformScale                          = 66558,
	ETransformGizmoSubElements__FullTranslateRotateScale                             = 131070
};

/// Enum /Script/InteractiveToolsFramework.EToolChangeTrackingMode
/// Size: 0x03
enum class EToolChangeTrackingMode : uint8_t
{
	EToolChangeTrackingMode__NoChangeTracking                                        = 1,
	EToolChangeTrackingMode__UndoToExit                                              = 2,
	EToolChangeTrackingMode__FullUndoRedo                                            = 3
};

/// Enum /Script/InteractiveToolsFramework.EToolSide
/// Size: 0x03
enum class EToolSide : uint8_t
{
	EToolSide__Left                                                                  = 1,
	EToolSide__Mouse                                                                 = 1,
	EToolSide__Right                                                                 = 2
};

/// Enum /Script/InteractiveToolsFramework.EViewInteractionState
/// Size: 0x03
enum class EViewInteractionState : uint8_t
{
	EViewInteractionState__None                                                      = 0,
	EViewInteractionState__Hovered                                                   = 1,
	EViewInteractionState__Focused                                                   = 2
};

/// Enum /Script/InteractiveToolsFramework.ESelectedObjectsModificationType
/// Size: 0x04
enum class ESelectedObjectsModificationType : uint8_t
{
	ESelectedObjectsModificationType__Replace                                        = 0,
	ESelectedObjectsModificationType__Add                                            = 1,
	ESelectedObjectsModificationType__Remove                                         = 2,
	ESelectedObjectsModificationType__Clear                                          = 3
};

/// Enum /Script/InteractiveToolsFramework.EToolMessageLevel
/// Size: 0x05
enum class EToolMessageLevel : uint8_t
{
	EToolMessageLevel__Internal                                                      = 0,
	EToolMessageLevel__UserMessage                                                   = 1,
	EToolMessageLevel__UserNotification                                              = 2,
	EToolMessageLevel__UserWarning                                                   = 3,
	EToolMessageLevel__UserError                                                     = 4
};

/// Enum /Script/InteractiveToolsFramework.EToolContextCoordinateSystem
/// Size: 0x02
enum class EToolContextCoordinateSystem : uint32_t
{
	EToolContextCoordinateSystem__World                                              = 0,
	EToolContextCoordinateSystem__Local                                              = 1
};

/// Enum /Script/InteractiveToolsFramework.EStandardToolContextMaterials
/// Size: 0x01
enum class EStandardToolContextMaterials : uint8_t
{
	EStandardToolContextMaterials__VertexColorMaterial                               = 1
};

/// Enum /Script/InteractiveToolsFramework.ESceneSnapQueryTargetType
/// Size: 0x05
enum class ESceneSnapQueryTargetType : uint8_t
{
	ESceneSnapQueryTargetType__None                                                  = 0,
	ESceneSnapQueryTargetType__MeshVertex                                            = 1,
	ESceneSnapQueryTargetType__MeshEdge                                              = 2,
	ESceneSnapQueryTargetType__Grid                                                  = 4,
	ESceneSnapQueryTargetType__All                                                   = 7
};

/// Enum /Script/InteractiveToolsFramework.ESceneSnapQueryType
/// Size: 0x02
enum class ESceneSnapQueryType : uint8_t
{
	ESceneSnapQueryType__Position                                                    = 1,
	ESceneSnapQueryType__Rotation                                                    = 2
};


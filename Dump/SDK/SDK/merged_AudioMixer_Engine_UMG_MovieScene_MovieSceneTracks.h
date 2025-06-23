
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "AssetRegistry.h"
#include "AudioExtensions.h"
#include "AudioPlatformConfiguration.h"
#include "Chaos.h"
#include "ClothingSystemRuntimeInterface.h"
#include "CoreUObject.h"
#include "DeveloperSettings.h"
#include "InputCore.h"
#include "PacketHandler.h"
#include "PhysicsCore.h"
#include "PropertyAccess.h"
#include "PropertyPath.h"
#include "Slate.h"
#include "SlateCore.h"
#include "StaticMeshDescription.h"

#pragma pack(push, 0x1)

class AActor;
class AAmbientSound;
class AAtmosphericFog;
class AAudioVolume;
class ABandwidthTestActor;
class ABlockingVolume;
class ABoxReflectionCapture;
class ABrush;
class ABrushShape;
class ACameraActor;
class ACameraBlockingVolume;
class ACameraShakeSourceActor;
class ACharacter;
class AController;
class ACullDistanceVolume;
class ADebugCameraController;
class ADebugCameraHUD;
class ADecalActor;
class ADefaultPawn;
class ADefaultPhysicsVolume;
class ADirectionalLight;
class ADocumentationActor;
class AEmitter;
class AEmitterCameraLensEffectBase;
class AExponentialHeightFog;
class AGameMode;
class AGameModeBase;
class AGameNetworkManager;
class AGameSession;
class AGameState;
class AGameStateBase;
class AGeneratedMeshAreaLight;
class AHUD;
class AInfo;
class AKillZVolume;
class ALODActor;
class ALevelBounds;
class ALevelScriptActor;
class ALevelStreamingVolume;
class ALight;
class ALightmassCharacterIndirectDetailVolume;
class ALightmassImportanceVolume;
class ALightmassPortal;
class AMaterialInstanceActor;
class AMatineeActor;
class AMatineeActorCameraAnim;
class AMeshMergeCullingVolume;
class ANavigationObjectBase;
class ANote;
class APainCausingVolume;
class AParticleEventManager;
class APawn;
class APhysicsConstraintActor;
class APhysicsThruster;
class APhysicsVolume;
class APlanarReflection;
class APlaneReflectionCapture;
class APlayerCameraManager;
class APlayerController;
class APlayerStart;
class APlayerStartPIE;
class APlayerState;
class APointLight;
class APostProcessVolume;
class APrecomputedVisibilityOverrideVolume;
class APrecomputedVisibilityVolume;
class ARadialForceActor;
class ARectLight;
class AReflectionCapture;
class ARigidBodyBase;
class ARuntimeVirtualTextureVolume;
class ASceneCapture;
class ASceneCapture2D;
class ASceneCaptureCube;
class AServerStatReplicator;
class ASkeletalMeshActor;
class ASkyAtmosphere;
class ASkyLight;
class ASpectatorPawn;
class ASphereReflectionCapture;
class ASplineMeshActor;
class ASpotLight;
class AStaticMeshActor;
class ATargetPoint;
class ATextRenderActor;
class ATriggerBase;
class ATriggerBox;
class ATriggerCapsule;
class ATriggerSphere;
class ATriggerVolume;
class AVectorFieldVolume;
class AVolume;
class AVolumetricCloud;
class AVolumetricLightmapDensityVolume;
class AWindDirectionalSource;
class AWorldSettings;
class UAISystemBase;
class UActorChannel;
class UActorComponent;
class UActorComponentInstanceDataTransientOuter;
class UAimOffsetBlendSpace;
class UAimOffsetBlendSpace1D;
class UAnimBlueprint;
class UAnimBlueprintGeneratedClass;
class UAnimBoneCompressionCodec;
class UAnimBoneCompressionSettings;
class UAnimClassData;
class UAnimClassInterface;
class UAnimComposite;
class UAnimCompositeBase;
class UAnimCompress;
class UAnimCompress_BitwiseCompressOnly;
class UAnimCompress_LeastDestructive;
class UAnimCompress_PerTrackCompression;
class UAnimCompress_RemoveEverySecondKey;
class UAnimCompress_RemoveLinearKeys;
class UAnimCompress_RemoveTrivialKeys;
class UAnimCurveCompressionCodec;
class UAnimCurveCompressionCodec_CompressedRichCurve;
class UAnimCurveCompressionCodec_UniformIndexable;
class UAnimCurveCompressionCodec_UniformlySampled;
class UAnimCurveCompressionSettings;
class UAnimInstance;
class UAnimLayerInterface;
class UAnimMetaData;
class UAnimMontage;
class UAnimNotify;
class UAnimNotifyState;
class UAnimNotifyState_DisableRootMotion;
class UAnimNotifyState_TimedParticleEffect;
class UAnimNotifyState_Trail;
class UAnimNotify_PauseClothingSimulation;
class UAnimNotify_PlayParticleEffect;
class UAnimNotify_PlaySound;
class UAnimNotify_ResetClothingSimulation;
class UAnimNotify_ResetDynamics;
class UAnimNotify_ResumeClothingSimulation;
class UAnimSequence;
class UAnimSequenceBase;
class UAnimSet;
class UAnimSingleNodeInstance;
class UAnimStateMachineTypes;
class UAnimStreamable;
class UAnimationAsset;
class UAnimationSettings;
class UApplicationLifecycleComponent;
class UArrowComponent;
class UAssetExportTask;
class UAssetImportData;
class UAssetManager;
class UAssetManagerSettings;
class UAssetMappingTable;
class UAssetUserData;
class UAsyncActionChangePrimaryAssetBundles;
class UAsyncActionHandleSaveGame;
class UAsyncActionLoadPrimaryAsset;
class UAsyncActionLoadPrimaryAssetBase;
class UAsyncActionLoadPrimaryAssetClass;
class UAsyncActionLoadPrimaryAssetClassList;
class UAsyncActionLoadPrimaryAssetList;
class UAsyncTaskDownloadImage;
class UAtmosphericFogComponent;
class UAudioBus;
class UAudioComponent;
class UAudioGenerator;
class UAudioMixerBlueprintLibrary;
class UAudioSettings;
class UAutoDestroySubsystem;
class UAutomationTestSettings;
class UAvoidanceManager;
class UBackgroundBlur;
class UBackgroundBlurSlot;
class UBillboardComponent;
class UBlendProfile;
class UBlendSpace;
class UBlendSpace1D;
class UBlendSpaceBase;
class UBlendableInterface;
class UBlueprint;
class UBlueprintAsyncActionBase;
class UBlueprintCore;
class UBlueprintExtension;
class UBlueprintFunctionLibrary;
class UBlueprintGeneratedClass;
class UBlueprintMapLibrary;
class UBlueprintPathsLibrary;
class UBlueprintPlatformLibrary;
class UBlueprintSetLibrary;
class UBodySetup;
class UBoneMaskFilter;
class UBoneReferenceSkeletonProvider;
class UBookMark;
class UBookMark2D;
class UBookmarkBase;
class UBoolBinding;
class UBorder;
class UBorderSlot;
class UBoundsCopyComponent;
class UBoxComponent;
class UBoxReflectionCaptureComponent;
class UBreakpoint;
class UBrushBinding;
class UBrushBuilder;
class UBrushComponent;
class UButton;
class UButtonSlot;
class UButtonStyleAsset;
class UCameraAnim;
class UCameraAnimInst;
class UCameraComponent;
class UCameraModifier;
class UCameraModifier_CameraShake;
class UCameraShakeBase;
class UCameraShakeSourceComponent;
class UCanvas;
class UCanvasPanel;
class UCanvasPanelSlot;
class UCanvasRenderTarget2D;
class UCapsuleComponent;
class UChannel;
class UCharacterMovementComponent;
class UCheatManager;
class UCheckBox;
class UCheckBoxStyleAsset;
class UCheckedStateBinding;
class UChildActorComponent;
class UChildConnection;
class UCircularThrobber;
class UCloudStorageBase;
class UCollisionProfile;
class UColorBinding;
class UComboBox;
class UComboBoxString;
class UCommandlet;
class UComponentDelegateBinding;
class UCompositeCurveTable;
class UCompositeDataTable;
class UConsole;
class UContentWidget;
class UControlChannel;
class UCurveBase;
class UCurveEdPresetCurve;
class UCurveFloat;
class UCurveLinearColor;
class UCurveLinearColorAtlas;
class UCurveSourceInterface;
class UCurveTable;
class UCurveVector;
class UDPICustomScalingRule;
class UDamageType;
class UDataAsset;
class UDataTable;
class UDataTableFunctionLibrary;
class UDebugCameraControllerSettings;
class UDebugDrawService;
class UDecalComponent;
class UDemoNetConnection;
class UDemoNetDriver;
class UDemoPendingNetGame;
class UDestructibleInterface;
class UDeviceProfile;
class UDeviceProfileFragment;
class UDeviceProfileManager;
class UDialogueSoundWaveProxy;
class UDialogueVoice;
class UDialogueWave;
class UDirectionalLightComponent;
class UDistribution;
class UDistributionFloat;
class UDistributionFloatConstant;
class UDistributionFloatConstantCurve;
class UDistributionFloatParameterBase;
class UDistributionFloatParticleParameter;
class UDistributionFloatUniform;
class UDistributionFloatUniformCurve;
class UDistributionVector;
class UDistributionVectorConstant;
class UDistributionVectorConstantCurve;
class UDistributionVectorParameterBase;
class UDistributionVectorParticleParameter;
class UDistributionVectorUniform;
class UDistributionVectorUniformCurve;
class UDragDropOperation;
class UDrawFrustumComponent;
class UDrawSphereComponent;
class UDynamicBlueprintBinding;
class UDynamicEntryBox;
class UDynamicEntryBoxBase;
class UDynamicSubsystem;
class UEdGraph;
class UEdGraphNode;
class UEdGraphNode_Documentation;
class UEdGraphPin_Deprecated;
class UEdGraphSchema;
class UEditableText;
class UEditableTextBox;
class UEndpointSubmix;
class UEngine;
class UEngineBaseTypes;
class UEngineCustomTimeStep;
class UEngineHandlerComponentFactory;
class UEngineMessage;
class UEngineSubsystem;
class UEngineTypes;
class UExpandableArea;
class UExponentialHeightFogComponent;
class UExporter;
class UFXSystemAsset;
class UFXSystemComponent;
class UFloatBinding;
class UFloatChannelEvaluatorSystem;
class UFloatingPawnMovement;
class UFont;
class UFontFace;
class UFontImportOptions;
class UForceFeedbackAttenuation;
class UForceFeedbackComponent;
class UForceFeedbackEffect;
class UGameEngine;
class UGameInstance;
class UGameInstanceSubsystem;
class UGameUserSettings;
class UGameViewportClient;
class UGameplayStatics;
class UGarbageCollectionSettings;
class UGraphNodeContextMenuContext;
class UGridPanel;
class UGridSlot;
class UHLODEngineSubsystem;
class UHLODProxy;
class UHLODProxyDesc;
class UHapticFeedbackEffect_Base;
class UHapticFeedbackEffect_Buffer;
class UHapticFeedbackEffect_Curve;
class UHapticFeedbackEffect_SoundWave;
class UHealthSnapshotBlueprintLibrary;
class UHierarchicalInstancedStaticMeshComponent;
class UHierarchicalLODSetup;
class UHorizontalBox;
class UHorizontalBoxSlot;
class UImage;
class UImportanceSamplingLibrary;
class UImportantToggleSettingInterface;
class UInGameAdManager;
class UInheritableComponentHandler;
class UInputActionDelegateBinding;
class UInputAxisDelegateBinding;
class UInputAxisKeyDelegateBinding;
class UInputComponent;
class UInputDelegateBinding;
class UInputKeyDelegateBinding;
class UInputKeySelector;
class UInputSettings;
class UInputTouchDelegateBinding;
class UInputVectorAxisDelegateBinding;
class UInstancedStaticMeshComponent;
class UInt32Binding;
class UIntSerialization;
class UInterface_AssetUserData;
class UInterface_CollisionDataProvider;
class UInterface_PostProcessVolume;
class UInterface_PreviewMeshProvider;
class UInterpCurveEdSetup;
class UInterpData;
class UInterpFilter;
class UInterpFilter_Classes;
class UInterpFilter_Custom;
class UInterpGroup;
class UInterpGroupCamera;
class UInterpGroupDirector;
class UInterpGroupInst;
class UInterpGroupInstCamera;
class UInterpGroupInstDirector;
class UInterpToMovementComponent;
class UInterpTrack;
class UInterpTrackAnimControl;
class UInterpTrackAudioMaster;
class UInterpTrackBoolProp;
class UInterpTrackColorProp;
class UInterpTrackColorScale;
class UInterpTrackDirector;
class UInterpTrackEvent;
class UInterpTrackFade;
class UInterpTrackFloatAnimBPParam;
class UInterpTrackFloatBase;
class UInterpTrackFloatMaterialParam;
class UInterpTrackFloatParticleParam;
class UInterpTrackFloatProp;
class UInterpTrackInst;
class UInterpTrackInstAnimControl;
class UInterpTrackInstAudioMaster;
class UInterpTrackInstBoolProp;
class UInterpTrackInstColorProp;
class UInterpTrackInstColorScale;
class UInterpTrackInstDirector;
class UInterpTrackInstEvent;
class UInterpTrackInstFade;
class UInterpTrackInstFloatAnimBPParam;
class UInterpTrackInstFloatMaterialParam;
class UInterpTrackInstFloatParticleParam;
class UInterpTrackInstFloatProp;
class UInterpTrackInstLinearColorProp;
class UInterpTrackInstMove;
class UInterpTrackInstParticleReplay;
class UInterpTrackInstProperty;
class UInterpTrackInstSlomo;
class UInterpTrackInstSound;
class UInterpTrackInstToggle;
class UInterpTrackInstVectorMaterialParam;
class UInterpTrackInstVectorProp;
class UInterpTrackInstVisibility;
class UInterpTrackLinearColorBase;
class UInterpTrackLinearColorProp;
class UInterpTrackMove;
class UInterpTrackMoveAxis;
class UInterpTrackParticleReplay;
class UInterpTrackSlomo;
class UInterpTrackSound;
class UInterpTrackToggle;
class UInterpTrackVectorBase;
class UInterpTrackVectorMaterialParam;
class UInterpTrackVectorProp;
class UInterpTrackVisibility;
class UInvalidationBox;
class UKismetArrayLibrary;
class UKismetGuidLibrary;
class UKismetInputLibrary;
class UKismetInternationalizationLibrary;
class UKismetMaterialLibrary;
class UKismetMathLibrary;
class UKismetNodeHelperLibrary;
class UKismetRenderingLibrary;
class UKismetStringLibrary;
class UKismetStringTableLibrary;
class UKismetSystemLibrary;
class UKismetTextLibrary;
class ULODSyncComponent;
class ULODSyncInterface;
class ULayer;
class ULevel;
class ULevelActorContainer;
class ULevelPartitionInterface;
class ULevelScriptBlueprint;
class ULevelStreaming;
class ULevelStreamingAlwaysLoaded;
class ULevelStreamingDynamic;
class ULevelStreamingPersistent;
class ULightComponent;
class ULightComponentBase;
class ULightMapTexture2D;
class ULightMapVirtualTexture;
class ULightMapVirtualTexture2D;
class ULightmappedSurfaceCollection;
class ULightmassPortalComponent;
class ULightmassPrimitiveSettingsObject;
class ULineBatchComponent;
class UListView;
class UListViewBase;
class UListViewDesignerPreviewItem;
class ULocalLightComponent;
class ULocalMessage;
class ULocalPlayer;
class ULocalPlayerSubsystem;
class UMapBuildDataRegistry;
class UMaterial;
class UMaterialBillboardComponent;
class UMaterialExpression;
class UMaterialExpressionAbs;
class UMaterialExpressionActorPositionWS;
class UMaterialExpressionAdd;
class UMaterialExpressionAdvancedFeatureSwitch;
class UMaterialExpressionAntialiasedTextureMask;
class UMaterialExpressionAppendVector;
class UMaterialExpressionArccosine;
class UMaterialExpressionArccosineFast;
class UMaterialExpressionArcsine;
class UMaterialExpressionArcsineFast;
class UMaterialExpressionArctangent;
class UMaterialExpressionArctangent2;
class UMaterialExpressionArctangent2Fast;
class UMaterialExpressionArctangentFast;
class UMaterialExpressionAtmosphericFogColor;
class UMaterialExpressionAtmosphericLightColor;
class UMaterialExpressionAtmosphericLightVector;
class UMaterialExpressionBentNormalCustomOutput;
class UMaterialExpressionBlackBody;
class UMaterialExpressionBlendMaterialAttributes;
class UMaterialExpressionBreakMaterialAttributes;
class UMaterialExpressionBumpOffset;
class UMaterialExpressionCameraPositionWS;
class UMaterialExpressionCameraVectorWS;
class UMaterialExpressionCeil;
class UMaterialExpressionChannelMaskParameter;
class UMaterialExpressionClamp;
class UMaterialExpressionClearCoatNormalCustomOutput;
class UMaterialExpressionCloudSampleAttribute;
class UMaterialExpressionCollectionParameter;
class UMaterialExpressionComment;
class UMaterialExpressionComponentMask;
class UMaterialExpressionConstant;
class UMaterialExpressionConstant2Vector;
class UMaterialExpressionConstant3Vector;
class UMaterialExpressionConstant4Vector;
class UMaterialExpressionConstantBiasScale;
class UMaterialExpressionCosine;
class UMaterialExpressionCrossProduct;
class UMaterialExpressionCurveAtlasRowParameter;
class UMaterialExpressionCustom;
class UMaterialExpressionCustomOutput;
class UMaterialExpressionDDX;
class UMaterialExpressionDDY;
class UMaterialExpressionDecalDerivative;
class UMaterialExpressionDecalLifetimeOpacity;
class UMaterialExpressionDecalMipmapLevel;
class UMaterialExpressionDeltaTime;
class UMaterialExpressionDepthFade;
class UMaterialExpressionDepthOfFieldFunction;
class UMaterialExpressionDeriveNormalZ;
class UMaterialExpressionDesaturation;
class UMaterialExpressionDistance;
class UMaterialExpressionDistanceCullFade;
class UMaterialExpressionDistanceFieldGradient;
class UMaterialExpressionDistanceToNearestSurface;
class UMaterialExpressionDivide;
class UMaterialExpressionDotProduct;
class UMaterialExpressionDynamicParameter;
class UMaterialExpressionEdenCustomMaterialOutput;
class UMaterialExpressionEyeAdaptation;
class UMaterialExpressionFeatureLevelSwitch;
class UMaterialExpressionFloor;
class UMaterialExpressionFmod;
class UMaterialExpressionFontSample;
class UMaterialExpressionFontSampleParameter;
class UMaterialExpressionFrac;
class UMaterialExpressionFresnel;
class UMaterialExpressionFunctionInput;
class UMaterialExpressionFunctionOutput;
class UMaterialExpressionGIReplace;
class UMaterialExpressionGetMaterialAttributes;
class UMaterialExpressionHairAttributes;
class UMaterialExpressionHairColor;
class UMaterialExpressionIf;
class UMaterialExpressionInverseLinearInterpolate;
class UMaterialExpressionLightVector;
class UMaterialExpressionLightmapUVs;
class UMaterialExpressionLightmassReplace;
class UMaterialExpressionLinearInterpolate;
class UMaterialExpressionLogarithm10;
class UMaterialExpressionLogarithm2;
class UMaterialExpressionMakeMaterialAttributes;
class UMaterialExpressionMapARPassthroughCameraUV;
class UMaterialExpressionMaterialAttributeLayers;
class UMaterialExpressionMaterialFunctionCall;
class UMaterialExpressionMaterialLayerOutput;
class UMaterialExpressionMaterialProxyReplace;
class UMaterialExpressionMax;
class UMaterialExpressionMin;
class UMaterialExpressionMultiply;
class UMaterialExpressionNoise;
class UMaterialExpressionNormalize;
class UMaterialExpressionObjectBounds;
class UMaterialExpressionObjectOrientation;
class UMaterialExpressionObjectPositionWS;
class UMaterialExpressionObjectRadius;
class UMaterialExpressionOneMinus;
class UMaterialExpressionPanner;
class UMaterialExpressionParameter;
class UMaterialExpressionParticleColor;
class UMaterialExpressionParticleDirection;
class UMaterialExpressionParticleMacroUV;
class UMaterialExpressionParticleMotionBlurFade;
class UMaterialExpressionParticlePositionWS;
class UMaterialExpressionParticleRadius;
class UMaterialExpressionParticleRandom;
class UMaterialExpressionParticleRelativeTime;
class UMaterialExpressionParticleSize;
class UMaterialExpressionParticleSpeed;
class UMaterialExpressionParticleSubUV;
class UMaterialExpressionParticleSubUVProperties;
class UMaterialExpressionPerInstanceCustomData;
class UMaterialExpressionPerInstanceFadeAmount;
class UMaterialExpressionPerInstanceRandom;
class UMaterialExpressionPixelDepth;
class UMaterialExpressionPixelNormalWS;
class UMaterialExpressionPower;
class UMaterialExpressionPreSkinnedLocalBounds;
class UMaterialExpressionPreSkinnedNormal;
class UMaterialExpressionPreSkinnedPosition;
class UMaterialExpressionPreSkinnedTangent;
class UMaterialExpressionPrecomputedAOMask;
class UMaterialExpressionPreviousFrameSwitch;
class UMaterialExpressionQualitySwitch;
class UMaterialExpressionRayTracingQualitySwitch;
class UMaterialExpressionReflectionCapturePassSwitch;
class UMaterialExpressionReflectionVectorWS;
class UMaterialExpressionReroute;
class UMaterialExpressionRotateAboutAxis;
class UMaterialExpressionRotator;
class UMaterialExpressionRound;
class UMaterialExpressionRuntimeVirtualTextureOutput;
class UMaterialExpressionRuntimeVirtualTextureReplace;
class UMaterialExpressionRuntimeVirtualTextureSample;
class UMaterialExpressionRuntimeVirtualTextureSampleParameter;
class UMaterialExpressionSaturate;
class UMaterialExpressionScalarParameter;
class UMaterialExpressionSceneColor;
class UMaterialExpressionSceneDepth;
class UMaterialExpressionSceneDepthWithoutWater;
class UMaterialExpressionSceneTexelSize;
class UMaterialExpressionSceneTexture;
class UMaterialExpressionScreenPosition;
class UMaterialExpressionSetMaterialAttributes;
class UMaterialExpressionShaderStageSwitch;
class UMaterialExpressionShadingModel;
class UMaterialExpressionShadingPathSwitch;
class UMaterialExpressionShadowReplace;
class UMaterialExpressionSign;
class UMaterialExpressionSine;
class UMaterialExpressionSingleLayerWaterMaterialOutput;
class UMaterialExpressionSkinningVertexOffsets;
class UMaterialExpressionSkyAtmosphereAerialPerspective;
class UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance;
class UMaterialExpressionSkyAtmosphereLightDirection;
class UMaterialExpressionSkyAtmosphereLightDiskLuminance;
class UMaterialExpressionSkyAtmosphereLightIlluminance;
class UMaterialExpressionSkyAtmosphereViewLuminance;
class UMaterialExpressionSmoothStep;
class UMaterialExpressionSobol;
class UMaterialExpressionSpeedTree;
class UMaterialExpressionSphereMask;
class UMaterialExpressionSphericalParticleOpacity;
class UMaterialExpressionSquareRoot;
class UMaterialExpressionStaticBool;
class UMaterialExpressionStaticBoolParameter;
class UMaterialExpressionStaticComponentMaskParameter;
class UMaterialExpressionStaticSwitch;
class UMaterialExpressionStaticSwitchParameter;
class UMaterialExpressionStep;
class UMaterialExpressionSubtract;
class UMaterialExpressionTangent;
class UMaterialExpressionTangentOutput;
class UMaterialExpressionTemporalSobol;
class UMaterialExpressionTextureBase;
class UMaterialExpressionTextureCoordinate;
class UMaterialExpressionTextureObject;
class UMaterialExpressionTextureObjectParameter;
class UMaterialExpressionTextureProperty;
class UMaterialExpressionTextureSample;
class UMaterialExpressionTextureSampleParameter;
class UMaterialExpressionTextureSampleParameter2D;
class UMaterialExpressionTextureSampleParameter2DArray;
class UMaterialExpressionTextureSampleParameterCube;
class UMaterialExpressionTextureSampleParameterSubUV;
class UMaterialExpressionTextureSampleParameterVolume;
class UMaterialExpressionThinTranslucentMaterialOutput;
class UMaterialExpressionTime;
class UMaterialExpressionTransform;
class UMaterialExpressionTransformPosition;
class UMaterialExpressionTruncate;
class UMaterialExpressionTwoSidedSign;
class UMaterialExpressionVectorNoise;
class UMaterialExpressionVectorParameter;
class UMaterialExpressionVertexColor;
class UMaterialExpressionVertexInterpolator;
class UMaterialExpressionVertexNormalWS;
class UMaterialExpressionVertexTangentWS;
class UMaterialExpressionViewProperty;
class UMaterialExpressionViewSize;
class UMaterialExpressionVirtualTextureFeatureSwitch;
class UMaterialExpressionVolumetricAdvancedMaterialInput;
class UMaterialExpressionVolumetricAdvancedMaterialOutput;
class UMaterialExpressionWorldPosition;
class UMaterialFunction;
class UMaterialFunctionInstance;
class UMaterialFunctionInterface;
class UMaterialFunctionMaterialLayer;
class UMaterialFunctionMaterialLayerBlend;
class UMaterialFunctionMaterialLayerBlendInstance;
class UMaterialFunctionMaterialLayerInstance;
class UMaterialInstance;
class UMaterialInstanceConstant;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;
class UMatineeAnimInterface;
class UMatineeCameraShake;
class UMatineeInterface;
class UMenuAnchor;
class UMeshComponent;
class UMeshSimplificationSettings;
class UMeshVertexPainterKismetLibrary;
class UMicroTransactionBase;
class UModel;
class UModelComponent;
class UMorphTarget;
class UMouseCursorBinding;
class UMovementComponent;
class UMovieScene;
class UMovieScene2DTransformPropertySystem;
class UMovieScene2DTransformSection;
class UMovieScene2DTransformTrack;
class UMovieScene3DAttachSection;
class UMovieScene3DAttachTrack;
class UMovieScene3DConstraintSection;
class UMovieScene3DConstraintTrack;
class UMovieScene3DPathSection;
class UMovieScene3DPathTrack;
class UMovieScene3DTransformPropertySystem;
class UMovieScene3DTransformSection;
class UMovieScene3DTransformTrack;
class UMovieSceneActorReferenceSection;
class UMovieSceneActorReferenceTrack;
class UMovieSceneAudioSection;
class UMovieSceneAudioTrack;
class UMovieSceneBaseValueEvaluatorSystem;
class UMovieSceneBindingOverrides;
class UMovieSceneBindingOwnerInterface;
class UMovieSceneBlenderSystem;
class UMovieSceneBoolSection;
class UMovieSceneBoolTrack;
class UMovieSceneBoundSceneComponentInstantiator;
class UMovieSceneBuiltInEasingFunction;
class UMovieSceneByteSection;
class UMovieSceneByteTrack;
class UMovieSceneCachePreAnimatedStateSystem;
class UMovieSceneCameraAnimSection;
class UMovieSceneCameraAnimTrack;
class UMovieSceneCameraCutSection;
class UMovieSceneCameraCutTrack;
class UMovieSceneCameraCutTrackInstance;
class UMovieSceneCameraShakeSection;
class UMovieSceneCameraShakeSourceShakeSection;
class UMovieSceneCameraShakeSourceShakeTrack;
class UMovieSceneCameraShakeSourceTriggerSection;
class UMovieSceneCameraShakeSourceTriggerTrack;
class UMovieSceneCameraShakeTrack;
class UMovieSceneCinematicShotSection;
class UMovieSceneCinematicShotTrack;
class UMovieSceneColorSection;
class UMovieSceneColorTrack;
class UMovieSceneCompiledData;
class UMovieSceneCompiledDataManager;
class UMovieSceneComponentAttachmentInvalidatorSystem;
class UMovieSceneComponentAttachmentSystem;
class UMovieSceneComponentMaterialTrack;
class UMovieSceneComponentMobilitySystem;
class UMovieSceneComponentTransformSystem;
class UMovieSceneCustomClockSource;
class UMovieSceneEasingExternalCurve;
class UMovieSceneEasingFunction;
class UMovieSceneEntityInstantiatorSystem;
class UMovieSceneEntityProvider;
class UMovieSceneEntitySystem;
class UMovieSceneEntitySystemLinker;
class UMovieSceneEnumSection;
class UMovieSceneEnumTrack;
class UMovieSceneEulerTransformPropertySystem;
class UMovieSceneEulerTransformTrack;
class UMovieSceneEvalTimeSystem;
class UMovieSceneEventRepeaterSection;
class UMovieSceneEventSection;
class UMovieSceneEventSectionBase;
class UMovieSceneEventSystem;
class UMovieSceneEventTrack;
class UMovieSceneEventTriggerSection;
class UMovieSceneFadeSection;
class UMovieSceneFadeTrack;
class UMovieSceneFloatDecomposer;
class UMovieSceneFloatPropertySystem;
class UMovieSceneFloatSection;
class UMovieSceneFloatTrack;
class UMovieSceneFolder;
class UMovieSceneGenericBoundObjectInstantiator;
class UMovieSceneHierarchicalBiasSystem;
class UMovieSceneHierarchicalEasingInstantiatorSystem;
class UMovieSceneIntegerSection;
class UMovieSceneIntegerTrack;
class UMovieSceneInterrogatedPropertyInstantiatorSystem;
class UMovieSceneKeyProxy;
class UMovieSceneLevelVisibilitySection;
class UMovieSceneLevelVisibilitySystem;
class UMovieSceneLevelVisibilityTrack;
class UMovieSceneMarginSection;
class UMovieSceneMarginTrack;
class UMovieSceneMasterInstantiatorSystem;
class UMovieSceneMaterialParameterCollectionTrack;
class UMovieSceneMaterialTrack;
class UMovieSceneNameableTrack;
class UMovieSceneNodeGroup;
class UMovieSceneNodeGroupCollection;
class UMovieSceneObjectPropertySection;
class UMovieSceneObjectPropertyTrack;
class UMovieSceneParameterSection;
class UMovieSceneParticleParameterTrack;
class UMovieSceneParticleSection;
class UMovieSceneParticleTrack;
class UMovieScenePiecewiseFloatBlenderSystem;
class UMovieScenePlaybackClient;
class UMovieScenePostEvalEventSystem;
class UMovieScenePostSpawnEventSystem;
class UMovieScenePreAnimatedComponentTransformSystem;
class UMovieScenePreAnimatedStateSystemInterface;
class UMovieScenePreSpawnEventSystem;
class UMovieScenePrimitiveMaterialSection;
class UMovieScenePrimitiveMaterialTrack;
class UMovieScenePropertyInstantiatorSystem;
class UMovieScenePropertySystem;
class UMovieScenePropertyTrack;
class UMovieSceneQuaternionInterpolationRotationSystem;
class UMovieSceneRestorePreAnimatedStateSystem;
class UMovieSceneSceneComponentImpersonator;
class UMovieSceneSection;
class UMovieSceneSequence;
class UMovieSceneSequencePlayer;
class UMovieSceneSequenceTickManager;
class UMovieSceneSignedObject;
class UMovieSceneSkeletalAnimationSection;
class UMovieSceneSkeletalAnimationTrack;
class UMovieSceneSlomoSection;
class UMovieSceneSlomoTrack;
class UMovieSceneSpawnSection;
class UMovieSceneSpawnTrack;
class UMovieSceneSpawnablesSystem;
class UMovieSceneStringSection;
class UMovieSceneStringTrack;
class UMovieSceneSubSection;
class UMovieSceneSubTrack;
class UMovieSceneTrack;
class UMovieSceneTrackInstance;
class UMovieSceneTrackInstanceInstantiator;
class UMovieSceneTrackInstanceSystem;
class UMovieSceneTrackTemplateProducer;
class UMovieSceneTransformOrigin;
class UMovieSceneTransformOriginSystem;
class UMovieSceneTransformTrack;
class UMovieSceneVectorSection;
class UMovieSceneVectorTrack;
class UMovieSceneVisibilityTrack;
class UMovieSceneWidgetMaterialTrack;
class UMultiLineEditableText;
class UMultiLineEditableTextBox;
class UNamedSlot;
class UNamedSlotInterface;
class UNativeWidgetHost;
class UNavAgentInterface;
class UNavAreaBase;
class UNavCollisionBase;
class UNavEdgeProviderInterface;
class UNavLinkDefinition;
class UNavMovementComponent;
class UNavPathObserverInterface;
class UNavRelevantInterface;
class UNavigationDataChunk;
class UNavigationDataInterface;
class UNavigationSystemBase;
class UNavigationSystemConfig;
class UNetConnection;
class UNetDriver;
class UNetPushModelHelpers;
class UNetworkPredictionInterface;
class UNetworkSettings;
class UNodeAndChannelMappings;
class UNodeMappingContainer;
class UNodeMappingProviderInterface;
class UNullNavSysConfig;
class UObjectLibrary;
class UObjectReferencer;
class UObjectTraceWorldSubsystem;
class UOnlineBlueprintCallProxyBase;
class UOnlineEngineInterface;
class UOnlineSession;
class UOverlay;
class UOverlaySlot;
class UPackageMapClient;
class UPanelSlot;
class UPanelWidget;
class UParticleEmitter;
class UParticleLODLevel;
class UParticleModule;
class UParticleModuleAcceleration;
class UParticleModuleAccelerationBase;
class UParticleModuleAccelerationConstant;
class UParticleModuleAccelerationDrag;
class UParticleModuleAccelerationDragScaleOverLife;
class UParticleModuleAccelerationOverLifetime;
class UParticleModuleAttractorBase;
class UParticleModuleAttractorLine;
class UParticleModuleAttractorParticle;
class UParticleModuleAttractorPoint;
class UParticleModuleAttractorPointGravity;
class UParticleModuleBeamBase;
class UParticleModuleBeamModifier;
class UParticleModuleBeamNoise;
class UParticleModuleBeamSource;
class UParticleModuleBeamTarget;
class UParticleModuleCameraBase;
class UParticleModuleCameraOffset;
class UParticleModuleCollision;
class UParticleModuleCollisionBase;
class UParticleModuleCollisionGPU;
class UParticleModuleColor;
class UParticleModuleColorBase;
class UParticleModuleColorOverLife;
class UParticleModuleColorScaleOverLife;
class UParticleModuleColor_Seeded;
class UParticleModuleEventBase;
class UParticleModuleEventGenerator;
class UParticleModuleEventReceiverBase;
class UParticleModuleEventReceiverKillParticles;
class UParticleModuleEventReceiverSpawn;
class UParticleModuleEventSendToGame;
class UParticleModuleKillBase;
class UParticleModuleKillBox;
class UParticleModuleKillHeight;
class UParticleModuleLifetime;
class UParticleModuleLifetimeBase;
class UParticleModuleLifetime_Seeded;
class UParticleModuleLight;
class UParticleModuleLightBase;
class UParticleModuleLight_Seeded;
class UParticleModuleLocation;
class UParticleModuleLocationBase;
class UParticleModuleLocationBoneSocket;
class UParticleModuleLocationDirect;
class UParticleModuleLocationEmitter;
class UParticleModuleLocationEmitterDirect;
class UParticleModuleLocationPrimitiveBase;
class UParticleModuleLocationPrimitiveCylinder;
class UParticleModuleLocationPrimitiveCylinder_Seeded;
class UParticleModuleLocationPrimitiveSphere;
class UParticleModuleLocationPrimitiveSphere_Seeded;
class UParticleModuleLocationPrimitiveTriangle;
class UParticleModuleLocationSkelVertSurface;
class UParticleModuleLocationWorldOffset;
class UParticleModuleLocationWorldOffset_Seeded;
class UParticleModuleLocation_Seeded;
class UParticleModuleMaterialBase;
class UParticleModuleMeshMaterial;
class UParticleModuleMeshRotation;
class UParticleModuleMeshRotationRate;
class UParticleModuleMeshRotationRateMultiplyLife;
class UParticleModuleMeshRotationRateOverLife;
class UParticleModuleMeshRotationRate_Seeded;
class UParticleModuleMeshRotation_Seeded;
class UParticleModuleOrbit;
class UParticleModuleOrbitBase;
class UParticleModuleOrientationAxisLock;
class UParticleModuleOrientationBase;
class UParticleModuleParameterBase;
class UParticleModuleParameterDynamic;
class UParticleModuleParameterDynamic_Seeded;
class UParticleModulePivotOffset;
class UParticleModuleRequired;
class UParticleModuleRotation;
class UParticleModuleRotationBase;
class UParticleModuleRotationOverLifetime;
class UParticleModuleRotationRate;
class UParticleModuleRotationRateBase;
class UParticleModuleRotationRateMultiplyLife;
class UParticleModuleRotationRate_Seeded;
class UParticleModuleRotation_Seeded;
class UParticleModuleSize;
class UParticleModuleSizeBase;
class UParticleModuleSizeMultiplyLife;
class UParticleModuleSizeScale;
class UParticleModuleSizeScaleBySpeed;
class UParticleModuleSize_Seeded;
class UParticleModuleSourceMovement;
class UParticleModuleSpawn;
class UParticleModuleSpawnBase;
class UParticleModuleSpawnPerUnit;
class UParticleModuleSubUV;
class UParticleModuleSubUVBase;
class UParticleModuleSubUVMovie;
class UParticleModuleTrailBase;
class UParticleModuleTrailSource;
class UParticleModuleTypeDataAnimTrail;
class UParticleModuleTypeDataBase;
class UParticleModuleTypeDataBeam2;
class UParticleModuleTypeDataGpu;
class UParticleModuleTypeDataMesh;
class UParticleModuleTypeDataRibbon;
class UParticleModuleVectorFieldBase;
class UParticleModuleVectorFieldGlobal;
class UParticleModuleVectorFieldLocal;
class UParticleModuleVectorFieldRotation;
class UParticleModuleVectorFieldRotationRate;
class UParticleModuleVectorFieldScale;
class UParticleModuleVectorFieldScaleOverLife;
class UParticleModuleVelocity;
class UParticleModuleVelocityBase;
class UParticleModuleVelocityCone;
class UParticleModuleVelocityInheritParent;
class UParticleModuleVelocityOverLifetime;
class UParticleModuleVelocity_Seeded;
class UParticleSpriteEmitter;
class UParticleSystem;
class UParticleSystemComponent;
class UParticleSystemReplay;
class UPathFollowingAgentInterface;
class UPawnMovementComponent;
class UPawnNoiseEmitterComponent;
class UPendingNetGame;
class UPhysicalAnimationComponent;
class UPhysicalMaterialMask;
class UPhysicsAsset;
class UPhysicsCollisionHandler;
class UPhysicsConstraintComponent;
class UPhysicsConstraintTemplate;
class UPhysicsHandleComponent;
class UPhysicsSettings;
class UPhysicsSpringComponent;
class UPhysicsThrusterComponent;
class UPlanarReflectionComponent;
class UPlaneReflectionCaptureComponent;
class UPlatformEventsComponent;
class UPlatformGameInstance;
class UPlatformInterfaceBase;
class UPlatformInterfaceWebResponse;
class UPlayer;
class UPlayerInput;
class UPluginCommandlet;
class UPointLightComponent;
class UPolys;
class UPoseAsset;
class UPoseWatch;
class UPoseableMeshComponent;
class UPostProcessComponent;
class UPreviewCollectionInterface;
class UPreviewMeshCollection;
class UPrimaryAssetLabel;
class UPrimaryDataAsset;
class UPrimitiveComponent;
class UProgressBar;
class UProjectileMovementComponent;
class UPropertyBinding;
class UProxyLODMeshSimplificationSettings;
class UQuartzClockHandle;
class UQuartzSubsystem;
class URVOAvoidanceInterface;
class URadialForceComponent;
class URectLightComponent;
class UReflectionCaptureComponent;
class URendererOverrideSettings;
class URendererSettings;
class UReplayNetConnection;
class UReplaySubsystem;
class UReplicationConnectionDriver;
class UReplicationDriver;
class UReporterBase;
class UReporterGraph;
class URetainerBox;
class UReverbEffect;
class URichTextBlock;
class URichTextBlockDecorator;
class URichTextBlockImageDecorator;
class URig;
class URotatingMovementComponent;
class URuntimeOptionsBase;
class URuntimeVirtualTexture;
class URuntimeVirtualTextureComponent;
class URuntimeVirtualTextureStreamingProxy;
class USCS_Node;
class USafeZone;
class USafeZoneSlot;
class USaveGame;
class UScaleBox;
class UScaleBoxSlot;
class UScene;
class USceneCaptureComponent;
class USceneCaptureComponent2D;
class USceneCaptureComponentCube;
class USceneComponent;
class UScriptViewportClient;
class UScrollBar;
class UScrollBox;
class UScrollBoxSlot;
class USelection;
class UShadowMapTexture2D;
class UShapeComponent;
class USimpleConstructionScript;
class USimulatedClientNetConnection;
class USizeBox;
class USizeBoxSlot;
class USkeletalBodySetup;
class USkeletalMesh;
class USkeletalMeshComponent;
class USkeletalMeshEditorData;
class USkeletalMeshLODSettings;
class USkeletalMeshSimplificationSettings;
class USkeletalMeshSocket;
class USkeleton;
class USkinnedMeshComponent;
class USkyAtmosphereComponent;
class USkyLightComponent;
class USlateAccessibleWidgetData;
class USlateBlueprintLibrary;
class USlateBrushAsset;
class USlateTextureAtlasInterface;
class USlateVectorArtData;
class USlider;
class USmokeTestCommandlet;
class USoundAttenuation;
class USoundBase;
class USoundClass;
class USoundConcurrency;
class USoundCue;
class USoundEffectPreset;
class USoundEffectSourcePreset;
class USoundEffectSourcePresetChain;
class USoundEffectSubmixPreset;
class USoundGroups;
class USoundMix;
class USoundNode;
class USoundNodeAssetReferencer;
class USoundNodeAttenuation;
class USoundNodeBranch;
class USoundNodeConcatenator;
class USoundNodeDelay;
class USoundNodeDialoguePlayer;
class USoundNodeDistanceCrossFade;
class USoundNodeDoppler;
class USoundNodeEnveloper;
class USoundNodeGroupControl;
class USoundNodeLooping;
class USoundNodeMature;
class USoundNodeMixer;
class USoundNodeModulator;
class USoundNodeModulatorContinuous;
class USoundNodeOscillator;
class USoundNodeParamCrossFade;
class USoundNodeQualityLevel;
class USoundNodeRandom;
class USoundNodeSoundClass;
class USoundNodeSwitch;
class USoundNodeWaveParam;
class USoundNodeWavePlayer;
class USoundSourceBus;
class USoundSubmix;
class USoundSubmixBase;
class USoundSubmixWithParentBase;
class USoundWave;
class USoundWaveProcedural;
class USoundfieldEndpointSubmix;
class USoundfieldSubmix;
class USpacer;
class USpectatorPawnMovement;
class USphereComponent;
class USphereReflectionCaptureComponent;
class USpinBox;
class USplineComponent;
class USplineMeshComponent;
class USplineMetadata;
class USpotLightComponent;
class USpringArmComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UStaticMeshSocket;
class UStereoLayerComponent;
class UStereoLayerFunctionLibrary;
class UStereoLayerShape;
class UStereoLayerShapeCubemap;
class UStereoLayerShapeCylinder;
class UStereoLayerShapeEquirect;
class UStereoLayerShapeQuad;
class UStreamableRenderAsset;
class UStreamingSettings;
class UStringTable;
class USubUVAnimation;
class USubmixEffectDynamicsProcessorPreset;
class USubmixEffectReverbPreset;
class USubmixEffectSubmixEQPreset;
class USubsurfaceProfile;
class USubsystem;
class USubsystemBlueprintLibrary;
class USynthComponent;
class USynthSound;
class USystemTimeTimecodeProvider;
class UTestMovieSceneSection;
class UTestMovieSceneSequence;
class UTestMovieSceneSubSection;
class UTestMovieSceneSubTrack;
class UTestMovieSceneTrack;
class UTextBinding;
class UTextBlock;
class UTextLayoutWidget;
class UTextPropertyTestObject;
class UTextRenderComponent;
class UTexture;
class UTexture2D;
class UTexture2DArray;
class UTexture2DDynamic;
class UTextureCube;
class UTextureLODSettings;
class UTextureLightProfile;
class UTextureMipDataProviderFactory;
class UTextureRenderTarget;
class UTextureRenderTarget2D;
class UTextureRenderTarget2DArray;
class UTextureRenderTargetCube;
class UTextureRenderTargetVolume;
class UThrobber;
class UThumbnailInfo;
class UTileView;
class UTimecodeProvider;
class UTimelineComponent;
class UTimelineTemplate;
class UTireType;
class UTouchInterface;
class UTreeView;
class UTwitterIntegrationBase;
class UUMGSequencePlayer;
class UUMGSequenceTickManager;
class UUniformGridPanel;
class UUniformGridSlot;
class UUserDefinedEnum;
class UUserDefinedStruct;
class UUserInterfaceSettings;
class UUserListEntry;
class UUserListEntryLibrary;
class UUserObjectListEntry;
class UUserObjectListEntryLibrary;
class UUserWidget;
class UVOIPStatics;
class UVOIPTalker;
class UVectorField;
class UVectorFieldAnimated;
class UVectorFieldComponent;
class UVectorFieldStatic;
class UVerticalBox;
class UVerticalBoxSlot;
class UViewModeUtils;
class UViewport;
class UViewportStatsSubsystem;
class UVirtualTexture;
class UVirtualTexture2D;
class UVirtualTextureBuilder;
class UVirtualTexturePoolConfig;
class UVisibilityBinding;
class UVisual;
class UVisualLoggerAutomationTests;
class UVisualLoggerDebugSnapshotInterface;
class UVisualLoggerKismetLibrary;
class UVoiceChannel;
class UVolumeTexture;
class UVolumetricCloudComponent;
class UWeightAndEasingEvaluatorSystem;
class UWidget;
class UWidgetAnimation;
class UWidgetAnimationDelegateBinding;
class UWidgetAnimationPlayCallbackProxy;
class UWidgetBinding;
class UWidgetBlueprintGeneratedClass;
class UWidgetBlueprintLibrary;
class UWidgetComponent;
class UWidgetInteractionComponent;
class UWidgetLayoutLibrary;
class UWidgetNavigation;
class UWidgetSwitcher;
class UWidgetSwitcherSlot;
class UWidgetTree;
class UWindDirectionalSourceComponent;
class UWindowTitleBarArea;
class UWindowTitleBarAreaSlot;
class UWorld;
class UWorldComposition;
class UWorldSubsystem;
class UWrapBox;
class UWrapBoxSlot;

/// Enum /Script/AudioMixer.EMusicalNoteName
/// Size: 0x01 (1 bytes)
enum class EMusicalNoteName : uint8_t
{
	EMusicalNoteName__C                                                              = 0,
	EMusicalNoteName__Db                                                             = 1,
	EMusicalNoteName__D                                                              = 2,
	EMusicalNoteName__Eb                                                             = 3,
	EMusicalNoteName__E                                                              = 4,
	EMusicalNoteName__F                                                              = 5,
	EMusicalNoteName__Gb                                                             = 6,
	EMusicalNoteName__G                                                              = 7,
	EMusicalNoteName__Ab                                                             = 8,
	EMusicalNoteName__A                                                              = 9,
	EMusicalNoteName__Bb                                                             = 10,
	EMusicalNoteName__B                                                              = 11
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsChannelLinkMode
/// Size: 0x01 (1 bytes)
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	ESubmixEffectDynamicsChannelLinkMode__Disabled                                   = 0,
	ESubmixEffectDynamicsChannelLinkMode__Average                                    = 1,
	ESubmixEffectDynamicsChannelLinkMode__Peak                                       = 2,
	ESubmixEffectDynamicsChannelLinkMode__Count                                      = 3
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsPeakMode
/// Size: 0x01 (1 bytes)
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	ESubmixEffectDynamicsPeakMode__MeanSquared                                       = 0,
	ESubmixEffectDynamicsPeakMode__RootMeanSquared                                   = 1,
	ESubmixEffectDynamicsPeakMode__Peak                                              = 2,
	ESubmixEffectDynamicsPeakMode__Count                                             = 3
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsProcessorType
/// Size: 0x01 (1 bytes)
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType__Compressor                                   = 0,
	ESubmixEffectDynamicsProcessorType__Limiter                                      = 1,
	ESubmixEffectDynamicsProcessorType__Expander                                     = 2,
	ESubmixEffectDynamicsProcessorType__Gate                                         = 3,
	ESubmixEffectDynamicsProcessorType__Count                                        = 4
};

/// Enum /Script/Engine.ETextGender
/// Size: 0x01 (1 bytes)
enum class ETextGender : uint8_t
{
	ETextGender__Masculine                                                           = 0,
	ETextGender__Feminine                                                            = 1,
	ETextGender__Neuter                                                              = 2
};

/// Enum /Script/Engine.EFormatArgumentType
/// Size: 0x01 (1 bytes)
enum class EFormatArgumentType : uint8_t
{
	EFormatArgumentType__Int                                                         = 0,
	EFormatArgumentType__UInt                                                        = 1,
	EFormatArgumentType__Float                                                       = 2,
	EFormatArgumentType__Double                                                      = 3,
	EFormatArgumentType__Text                                                        = 4,
	EFormatArgumentType__Gender                                                      = 5
};

/// Enum /Script/Engine.EEndPlayReason
/// Size: 0x01 (1 bytes)
enum class EEndPlayReason : uint8_t
{
	EEndPlayReason__Destroyed                                                        = 0,
	EEndPlayReason__LevelTransition                                                  = 1,
	EEndPlayReason__EndPlayInEditor                                                  = 2,
	EEndPlayReason__RemovedFromWorld                                                 = 3,
	EEndPlayReason__Quit                                                             = 4
};

/// Enum /Script/Engine.ETickingGroup
/// Size: 0x01 (1 bytes)
enum class ETickingGroup : uint8_t
{
	TG_PrePhysics                                                                    = 0,
	TG_StartPhysics                                                                  = 1,
	TG_DuringPhysics                                                                 = 2,
	TG_EndPhysics                                                                    = 3,
	TG_PostPhysics                                                                   = 4,
	TG_PostUpdateWork                                                                = 5,
	TG_LastDemotable                                                                 = 6,
	TG_NewlySpawned                                                                  = 7
};

/// Enum /Script/Engine.EComponentCreationMethod
/// Size: 0x01 (1 bytes)
enum class EComponentCreationMethod : uint8_t
{
	EComponentCreationMethod__Native                                                 = 0,
	EComponentCreationMethod__SimpleConstructionScript                               = 1,
	EComponentCreationMethod__UserConstructionScript                                 = 2,
	EComponentCreationMethod__Instance                                               = 3
};

/// Enum /Script/Engine.ETemperatureSeverityType
/// Size: 0x01 (1 bytes)
enum class ETemperatureSeverityType : uint8_t
{
	ETemperatureSeverityType__Unknown                                                = 0,
	ETemperatureSeverityType__Good                                                   = 1,
	ETemperatureSeverityType__Bad                                                    = 2,
	ETemperatureSeverityType__Serious                                                = 3,
	ETemperatureSeverityType__Critical                                               = 4,
	ETemperatureSeverityType__NumSeverities                                          = 5
};

/// Enum /Script/Engine.EQuartzCommandQuantization
/// Size: 0x01 (1 bytes)
enum class EQuartzCommandQuantization : uint8_t
{
	EQuartzCommandQuantization__Bar                                                  = 0,
	EQuartzCommandQuantization__Beat                                                 = 1,
	EQuartzCommandQuantization__ThirtySecondNote                                     = 2,
	EQuartzCommandQuantization__SixteenthNote                                        = 3,
	EQuartzCommandQuantization__EighthNote                                           = 4,
	EQuartzCommandQuantization__QuarterNote                                          = 5,
	EQuartzCommandQuantization__HalfNote                                             = 6,
	EQuartzCommandQuantization__WholeNote                                            = 7,
	EQuartzCommandQuantization__DottedSixteenthNote                                  = 8,
	EQuartzCommandQuantization__DottedEighthNote                                     = 9,
	EQuartzCommandQuantization__DottedQuarterNote                                    = 10,
	EQuartzCommandQuantization__DottedHalfNote                                       = 11,
	EQuartzCommandQuantization__DottedWholeNote                                      = 12,
	EQuartzCommandQuantization__SixteenthNoteTriplet                                 = 13,
	EQuartzCommandQuantization__EighthNoteTriplet                                    = 14,
	EQuartzCommandQuantization__QuarterNoteTriplet                                   = 15,
	EQuartzCommandQuantization__HalfNoteTriplet                                      = 16,
	EQuartzCommandQuantization__Tick                                                 = 17,
	EQuartzCommandQuantization__Count                                                = 18
};

/// Enum /Script/Engine.EQuartzCommandDelegateSubType
/// Size: 0x01 (1 bytes)
enum class EQuartzCommandDelegateSubType : uint8_t
{
	EQuartzCommandDelegateSubType__CommandOnFailedToQueue                            = 0,
	EQuartzCommandDelegateSubType__CommandOnQueued                                   = 1,
	EQuartzCommandDelegateSubType__CommandOnCanceled                                 = 2,
	EQuartzCommandDelegateSubType__CommandOnAboutToStart                             = 3,
	EQuartzCommandDelegateSubType__CommandOnStarted                                  = 4,
	EQuartzCommandDelegateSubType__Count                                             = 5
};

/// Enum /Script/Engine.EAudioComponentPlayState
/// Size: 0x01 (1 bytes)
enum class EAudioComponentPlayState : uint8_t
{
	EAudioComponentPlayState__Playing                                                = 0,
	EAudioComponentPlayState__Stopped                                                = 1,
	EAudioComponentPlayState__Paused                                                 = 2,
	EAudioComponentPlayState__FadingIn                                               = 3,
	EAudioComponentPlayState__FadingOut                                              = 4,
	EAudioComponentPlayState__Count                                                  = 5
};

/// Enum /Script/Engine.EPlaneConstraintAxisSetting
/// Size: 0x01 (1 bytes)
enum class EPlaneConstraintAxisSetting : uint8_t
{
	EPlaneConstraintAxisSetting__Custom                                              = 0,
	EPlaneConstraintAxisSetting__X                                                   = 1,
	EPlaneConstraintAxisSetting__Y                                                   = 2,
	EPlaneConstraintAxisSetting__Z                                                   = 3,
	EPlaneConstraintAxisSetting__UseGlobalPhysicsSetting                             = 4
};

/// Enum /Script/Engine.EInterpToBehaviourType
/// Size: 0x01 (1 bytes)
enum class EInterpToBehaviourType : uint8_t
{
	EInterpToBehaviourType__OneShot                                                  = 0,
	EInterpToBehaviourType__OneShot_Reverse                                          = 1,
	EInterpToBehaviourType__Loop_Reset                                               = 2,
	EInterpToBehaviourType__PingPong                                                 = 3
};

/// Enum /Script/Engine.ETeleportType
/// Size: 0x01 (1 bytes)
enum class ETeleportType : uint8_t
{
	ETeleportType__None                                                              = 0,
	ETeleportType__TeleportPhysics                                                   = 1,
	ETeleportType__ResetPhysics                                                      = 2
};

/// Enum /Script/Engine.EPlatformInterfaceDataType
/// Size: 0x01 (1 bytes)
enum class EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                                                                        = 0,
	PIDT_Int                                                                         = 1,
	PIDT_Float                                                                       = 2,
	PIDT_String                                                                      = 3,
	PIDT_Object                                                                      = 4,
	PIDT_Custom                                                                      = 5
};

/// Enum /Script/Engine.EMovementMode
/// Size: 0x01 (1 bytes)
enum class EMovementMode : uint8_t
{
	MOVE_None                                                                        = 0,
	MOVE_Walking                                                                     = 1,
	MOVE_NavWalking                                                                  = 2,
	MOVE_Falling                                                                     = 3,
	MOVE_Swimming                                                                    = 4,
	MOVE_Flying                                                                      = 5,
	MOVE_Custom                                                                      = 6
};

/// Enum /Script/Engine.ENetworkFailure
/// Size: 0x01 (1 bytes)
enum class ENetworkFailure : uint8_t
{
	ENetworkFailure__NetDriverAlreadyExists                                          = 0,
	ENetworkFailure__NetDriverCreateFailure                                          = 1,
	ENetworkFailure__NetDriverListenFailure                                          = 2,
	ENetworkFailure__ConnectionLost                                                  = 3,
	ENetworkFailure__ConnectionTimeout                                               = 4,
	ENetworkFailure__FailureReceived                                                 = 5,
	ENetworkFailure__OutdatedClient                                                  = 6,
	ENetworkFailure__OutdatedServer                                                  = 7,
	ENetworkFailure__PendingConnectionFailure                                        = 8,
	ENetworkFailure__NetGuidMismatch                                                 = 9,
	ENetworkFailure__NetChecksumMismatch                                             = 10
};

/// Enum /Script/Engine.ETravelFailure
/// Size: 0x01 (1 bytes)
enum class ETravelFailure : uint8_t
{
	ETravelFailure__NoLevel                                                          = 0,
	ETravelFailure__LoadMapFailure                                                   = 1,
	ETravelFailure__InvalidURL                                                       = 2,
	ETravelFailure__PackageMissing                                                   = 3,
	ETravelFailure__PackageVersion                                                   = 4,
	ETravelFailure__NoDownload                                                       = 5,
	ETravelFailure__TravelFailure                                                    = 6,
	ETravelFailure__CheatCommands                                                    = 7,
	ETravelFailure__PendingNetGameCreateFailure                                      = 8,
	ETravelFailure__CloudSaveFailure                                                 = 9,
	ETravelFailure__ServerTravelFailure                                              = 10,
	ETravelFailure__ClientTravelFailure                                              = 11
};

/// Enum /Script/Engine.EScreenOrientation
/// Size: 0x01 (1 bytes)
enum class EScreenOrientation : uint8_t
{
	EScreenOrientation__Unknown                                                      = 0,
	EScreenOrientation__Portrait                                                     = 1,
	EScreenOrientation__PortraitUpsideDown                                           = 2,
	EScreenOrientation__LandscapeLeft                                                = 3,
	EScreenOrientation__LandscapeRight                                               = 4,
	EScreenOrientation__FaceUp                                                       = 5,
	EScreenOrientation__FaceDown                                                     = 6
};

/// Enum /Script/Engine.EApplicationState
/// Size: 0x01 (1 bytes)
enum class EApplicationState : uint8_t
{
	EApplicationState__Unknown                                                       = 0,
	EApplicationState__Inactive                                                      = 1,
	EApplicationState__Background                                                    = 2,
	EApplicationState__Active                                                        = 3
};

/// Enum /Script/Engine.EObjectTypeQuery
/// Size: 0x01 (1 bytes)
enum class EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1                                                                 = 0,
	ObjectTypeQuery2                                                                 = 1,
	ObjectTypeQuery3                                                                 = 2,
	ObjectTypeQuery4                                                                 = 3,
	ObjectTypeQuery5                                                                 = 4,
	ObjectTypeQuery6                                                                 = 5,
	ObjectTypeQuery7                                                                 = 6,
	ObjectTypeQuery8                                                                 = 7,
	ObjectTypeQuery9                                                                 = 8,
	ObjectTypeQuery10                                                                = 9,
	ObjectTypeQuery11                                                                = 10,
	ObjectTypeQuery12                                                                = 11,
	ObjectTypeQuery13                                                                = 12,
	ObjectTypeQuery14                                                                = 13,
	ObjectTypeQuery15                                                                = 14,
	ObjectTypeQuery16                                                                = 15,
	ObjectTypeQuery17                                                                = 16,
	ObjectTypeQuery18                                                                = 17,
	ObjectTypeQuery19                                                                = 18,
	ObjectTypeQuery20                                                                = 19,
	ObjectTypeQuery21                                                                = 20,
	ObjectTypeQuery22                                                                = 21,
	ObjectTypeQuery23                                                                = 22,
	ObjectTypeQuery24                                                                = 23,
	ObjectTypeQuery25                                                                = 24,
	ObjectTypeQuery26                                                                = 25,
	ObjectTypeQuery27                                                                = 26,
	ObjectTypeQuery28                                                                = 27,
	ObjectTypeQuery29                                                                = 28,
	ObjectTypeQuery30                                                                = 29,
	ObjectTypeQuery31                                                                = 30,
	ObjectTypeQuery32                                                                = 31
};

/// Enum /Script/Engine.EDrawDebugTrace
/// Size: 0x01 (1 bytes)
enum class EDrawDebugTrace : uint8_t
{
	EDrawDebugTrace__None                                                            = 0,
	EDrawDebugTrace__ForOneFrame                                                     = 1,
	EDrawDebugTrace__ForDuration                                                     = 2,
	EDrawDebugTrace__Persistent                                                      = 3
};

/// Enum /Script/Engine.ETraceTypeQuery
/// Size: 0x01 (1 bytes)
enum class ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1                                                                  = 0,
	TraceTypeQuery2                                                                  = 1,
	TraceTypeQuery3                                                                  = 2,
	TraceTypeQuery4                                                                  = 3,
	TraceTypeQuery5                                                                  = 4,
	TraceTypeQuery6                                                                  = 5,
	TraceTypeQuery7                                                                  = 6,
	TraceTypeQuery8                                                                  = 7,
	TraceTypeQuery9                                                                  = 8,
	TraceTypeQuery10                                                                 = 9,
	TraceTypeQuery11                                                                 = 10,
	TraceTypeQuery12                                                                 = 11,
	TraceTypeQuery13                                                                 = 12,
	TraceTypeQuery14                                                                 = 13,
	TraceTypeQuery15                                                                 = 14,
	TraceTypeQuery16                                                                 = 15,
	TraceTypeQuery17                                                                 = 16,
	TraceTypeQuery18                                                                 = 17,
	TraceTypeQuery19                                                                 = 18,
	TraceTypeQuery20                                                                 = 19,
	TraceTypeQuery21                                                                 = 20,
	TraceTypeQuery22                                                                 = 21,
	TraceTypeQuery23                                                                 = 22,
	TraceTypeQuery24                                                                 = 23,
	TraceTypeQuery25                                                                 = 24,
	TraceTypeQuery26                                                                 = 25,
	TraceTypeQuery27                                                                 = 26,
	TraceTypeQuery28                                                                 = 27,
	TraceTypeQuery29                                                                 = 28,
	TraceTypeQuery30                                                                 = 29,
	TraceTypeQuery31                                                                 = 30,
	TraceTypeQuery32                                                                 = 31
};

/// Enum /Script/Engine.EMoveComponentAction
/// Size: 0x01 (1 bytes)
enum class EMoveComponentAction : uint8_t
{
	EMoveComponentAction__Move                                                       = 0,
	EMoveComponentAction__Stop                                                       = 1,
	EMoveComponentAction__Return                                                     = 2
};

/// Enum /Script/Engine.EQuitPreference
/// Size: 0x01 (1 bytes)
enum class EQuitPreference : uint8_t
{
	EQuitPreference__Quit                                                            = 0,
	EQuitPreference__Background                                                      = 1
};

/// Enum /Script/Engine.EInputEvent
/// Size: 0x01 (1 bytes)
enum class EInputEvent : uint8_t
{
	IE_Pressed                                                                       = 0,
	IE_Released                                                                      = 1,
	IE_Repeat                                                                        = 2,
	IE_DoubleClick                                                                   = 3,
	IE_Axis                                                                          = 4
};

/// Enum /Script/Engine.ERelativeTransformSpace
/// Size: 0x01 (1 bytes)
enum class ERelativeTransformSpace : uint8_t
{
	RTS_World                                                                        = 0,
	RTS_Actor                                                                        = 1,
	RTS_Component                                                                    = 2,
	RTS_ParentBoneSpace                                                              = 3
};

/// Enum /Script/Engine.EAttachLocation
/// Size: 0x01 (1 bytes)
enum class EAttachLocation : uint8_t
{
	EAttachLocation__KeepRelativeOffset                                              = 0,
	EAttachLocation__KeepWorldPosition                                               = 1,
	EAttachLocation__SnapToTarget                                                    = 2,
	EAttachLocation__SnapToTargetIncludingScale                                      = 3
};

/// Enum /Script/Engine.EAttachmentRule
/// Size: 0x01 (1 bytes)
enum class EAttachmentRule : uint8_t
{
	EAttachmentRule__KeepRelative                                                    = 0,
	EAttachmentRule__KeepWorld                                                       = 1,
	EAttachmentRule__SnapToTarget                                                    = 2
};

/// Enum /Script/Engine.EDetachmentRule
/// Size: 0x01 (1 bytes)
enum class EDetachmentRule : uint8_t
{
	EDetachmentRule__KeepRelative                                                    = 0,
	EDetachmentRule__KeepWorld                                                       = 1
};

/// Enum /Script/Engine.EComponentMobility
/// Size: 0x01 (1 bytes)
enum class EComponentMobility : uint8_t
{
	EComponentMobility__Static                                                       = 0,
	EComponentMobility__Stationary                                                   = 1,
	EComponentMobility__Movable                                                      = 2
};

/// Enum /Script/Engine.EDetailMode
/// Size: 0x01 (1 bytes)
enum class EDetailMode : uint8_t
{
	DM_Low                                                                           = 0,
	DM_Medium                                                                        = 1,
	DM_High                                                                          = 2
};

/// Enum /Script/Engine.ENetRole
/// Size: 0x01 (1 bytes)
enum class ENetRole : uint8_t
{
	ROLE_None                                                                        = 0,
	ROLE_SimulatedProxy                                                              = 1,
	ROLE_AutonomousProxy                                                             = 2,
	ROLE_Authority                                                                   = 3
};

/// Enum /Script/Engine.ENetDormancy
/// Size: 0x01 (1 bytes)
enum class ENetDormancy : uint8_t
{
	DORM_Never                                                                       = 0,
	DORM_Awake                                                                       = 1,
	DORM_DormantAll                                                                  = 2,
	DORM_DormantPartial                                                              = 3,
	DORM_Initial                                                                     = 4
};

/// Enum /Script/Engine.EAutoReceiveInput
/// Size: 0x01 (1 bytes)
enum class EAutoReceiveInput : uint8_t
{
	EAutoReceiveInput__Disabled                                                      = 0,
	EAutoReceiveInput__Player0                                                       = 1,
	EAutoReceiveInput__Player1                                                       = 2,
	EAutoReceiveInput__Player2                                                       = 3,
	EAutoReceiveInput__Player3                                                       = 4,
	EAutoReceiveInput__Player4                                                       = 5,
	EAutoReceiveInput__Player5                                                       = 6,
	EAutoReceiveInput__Player6                                                       = 7,
	EAutoReceiveInput__Player7                                                       = 8
};

/// Enum /Script/Engine.ESpawnActorCollisionHandlingMethod
/// Size: 0x01 (1 bytes)
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	ESpawnActorCollisionHandlingMethod__Undefined                                    = 0,
	ESpawnActorCollisionHandlingMethod__AlwaysSpawn                                  = 1,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButAlwaysSpawn               = 2,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButDontSpawnIfColliding      = 3,
	ESpawnActorCollisionHandlingMethod__DontSpawnIfColliding                         = 4
};

/// Enum /Script/Engine.ERotatorQuantization
/// Size: 0x01 (1 bytes)
enum class ERotatorQuantization : uint8_t
{
	ERotatorQuantization__ByteComponents                                             = 0,
	ERotatorQuantization__ShortComponents                                            = 1
};

/// Enum /Script/Engine.EVectorQuantization
/// Size: 0x01 (1 bytes)
enum class EVectorQuantization : uint8_t
{
	EVectorQuantization__RoundWholeNumber                                            = 0,
	EVectorQuantization__RoundOneDecimal                                             = 1,
	EVectorQuantization__RoundTwoDecimals                                            = 2
};

/// Enum /Script/Engine.EActorUpdateOverlapsMethod
/// Size: 0x01 (1 bytes)
enum class EActorUpdateOverlapsMethod : uint8_t
{
	EActorUpdateOverlapsMethod__UseConfigDefault                                     = 0,
	EActorUpdateOverlapsMethod__AlwaysUpdate                                         = 1,
	EActorUpdateOverlapsMethod__OnlyUpdateMovable                                    = 2,
	EActorUpdateOverlapsMethod__NeverUpdate                                          = 3
};

/// Enum /Script/Engine.EMouseLockMode
/// Size: 0x01 (1 bytes)
enum class EMouseLockMode : uint8_t
{
	EMouseLockMode__DoNotLock                                                        = 0,
	EMouseLockMode__LockOnCapture                                                    = 1,
	EMouseLockMode__LockAlways                                                       = 2,
	EMouseLockMode__LockInFullscreen                                                 = 3
};

/// Enum /Script/Engine.EWindowTitleBarMode
/// Size: 0x01 (1 bytes)
enum class EWindowTitleBarMode : uint8_t
{
	EWindowTitleBarMode__Overlay                                                     = 0,
	EWindowTitleBarMode__VerticalBox                                                 = 1
};

/// Enum /Script/Engine.EAlphaBlendOption
/// Size: 0x01 (1 bytes)
enum class EAlphaBlendOption : uint8_t
{
	EAlphaBlendOption__Linear                                                        = 0,
	EAlphaBlendOption__Cubic                                                         = 1,
	EAlphaBlendOption__HermiteCubic                                                  = 2,
	EAlphaBlendOption__Sinusoidal                                                    = 3,
	EAlphaBlendOption__QuadraticInOut                                                = 4,
	EAlphaBlendOption__CubicInOut                                                    = 5,
	EAlphaBlendOption__QuarticInOut                                                  = 6,
	EAlphaBlendOption__QuinticInOut                                                  = 7,
	EAlphaBlendOption__CircularIn                                                    = 8,
	EAlphaBlendOption__CircularOut                                                   = 9,
	EAlphaBlendOption__CircularInOut                                                 = 10,
	EAlphaBlendOption__ExpIn                                                         = 11,
	EAlphaBlendOption__ExpOut                                                        = 12,
	EAlphaBlendOption__ExpInOut                                                      = 13,
	EAlphaBlendOption__Custom                                                        = 14
};

/// Enum /Script/Engine.EAnimSyncGroupScope
/// Size: 0x01 (1 bytes)
enum class EAnimSyncGroupScope : uint8_t
{
	EAnimSyncGroupScope__Local                                                       = 0,
	EAnimSyncGroupScope__Component                                                   = 1
};

/// Enum /Script/Engine.EAnimGroupRole
/// Size: 0x01 (1 bytes)
enum class EAnimGroupRole : uint8_t
{
	EAnimGroupRole__CanBeLeader                                                      = 0,
	EAnimGroupRole__AlwaysFollower                                                   = 1,
	EAnimGroupRole__AlwaysLeader                                                     = 2,
	EAnimGroupRole__TransitionLeader                                                 = 3,
	EAnimGroupRole__TransitionFollower                                               = 4
};

/// Enum /Script/Engine.EPreviewAnimationBlueprintApplicationMethod
/// Size: 0x01 (1 bytes)
enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t
{
	EPreviewAnimationBlueprintApplicationMethod__LinkedLayers                        = 0,
	EPreviewAnimationBlueprintApplicationMethod__LinkedAnimGraph                     = 1
};

/// Enum /Script/Engine.AnimationKeyFormat
/// Size: 0x01 (1 bytes)
enum class AnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp                                                              = 0,
	AKF_VariableKeyLerp                                                              = 1,
	AKF_PerTrackCompression                                                          = 2
};

/// Enum /Script/Engine.ERawCurveTrackTypes
/// Size: 0x01 (1 bytes)
enum class ERawCurveTrackTypes : uint8_t
{
	ERawCurveTrackTypes__RCT_Float                                                   = 0,
	ERawCurveTrackTypes__RCT_Vector                                                  = 1,
	ERawCurveTrackTypes__RCT_Transform                                               = 2
};

/// Enum /Script/Engine.EAnimAssetCurveFlags
/// Size: 0x01 (1 bytes)
enum class EAnimAssetCurveFlags : uint8_t
{
	AACF_NONE                                                                        = 0,
	AACF_DriveMorphTarget_DEPRECATED                                                 = 1,
	AACF_DriveAttribute_DEPRECATED                                                   = 2,
	AACF_Editable                                                                    = 4,
	AACF_DriveMaterial_DEPRECATED                                                    = 8,
	AACF_Metadata                                                                    = 16,
	AACF_DriveTrack                                                                  = 32,
	AACF_Disabled                                                                    = 64
};

/// Enum /Script/Engine.AnimationCompressionFormat
/// Size: 0x01 (1 bytes)
enum class AnimationCompressionFormat : uint8_t
{
	ACF_None                                                                         = 0,
	ACF_Float96NoW                                                                   = 1,
	ACF_Fixed48NoW                                                                   = 2,
	ACF_IntervalFixed32NoW                                                           = 3,
	ACF_Fixed32NoW                                                                   = 4,
	ACF_Float32NoW                                                                   = 5,
	ACF_Identity                                                                     = 6
};

/// Enum /Script/Engine.EAdditiveBasePoseType
/// Size: 0x01 (1 bytes)
enum class EAdditiveBasePoseType : uint8_t
{
	ABPT_None                                                                        = 0,
	ABPT_RefPose                                                                     = 1,
	ABPT_AnimScaled                                                                  = 2,
	ABPT_AnimFrame                                                                   = 3
};

/// Enum /Script/Engine.ERootMotionMode
/// Size: 0x01 (1 bytes)
enum class ERootMotionMode : uint8_t
{
	ERootMotionMode__NoRootMotionExtraction                                          = 0,
	ERootMotionMode__IgnoreRootMotion                                                = 1,
	ERootMotionMode__RootMotionFromEverything                                        = 2,
	ERootMotionMode__RootMotionFromMontagesOnly                                      = 3
};

/// Enum /Script/Engine.ERootMotionRootLock
/// Size: 0x01 (1 bytes)
enum class ERootMotionRootLock : uint8_t
{
	ERootMotionRootLock__RefPose                                                     = 0,
	ERootMotionRootLock__AnimFirstFrame                                              = 1,
	ERootMotionRootLock__Zero                                                        = 2
};

/// Enum /Script/Engine.EMontagePlayReturnType
/// Size: 0x01 (1 bytes)
enum class EMontagePlayReturnType : uint8_t
{
	EMontagePlayReturnType__MontageLength                                            = 0,
	EMontagePlayReturnType__Duration                                                 = 1
};

/// Enum /Script/Engine.EDrawDebugItemType
/// Size: 0x01 (1 bytes)
enum class EDrawDebugItemType : uint8_t
{
	EDrawDebugItemType__DirectionalArrow                                             = 0,
	EDrawDebugItemType__Sphere                                                       = 1,
	EDrawDebugItemType__Line                                                         = 2,
	EDrawDebugItemType__OnScreenMessage                                              = 3,
	EDrawDebugItemType__CoordinateSystem                                             = 4
};

/// Enum /Script/Engine.EAnimLinkMethod
/// Size: 0x01 (1 bytes)
enum class EAnimLinkMethod : uint8_t
{
	EAnimLinkMethod__Absolute                                                        = 0,
	EAnimLinkMethod__Relative                                                        = 1,
	EAnimLinkMethod__Proportional                                                    = 2
};

/// Enum /Script/Engine.EMontageSubStepResult
/// Size: 0x01 (1 bytes)
enum class EMontageSubStepResult : uint8_t
{
	EMontageSubStepResult__Moved                                                     = 0,
	EMontageSubStepResult__NotMoved                                                  = 1,
	EMontageSubStepResult__InvalidSection                                            = 2,
	EMontageSubStepResult__InvalidMontage                                            = 3
};

/// Enum /Script/Engine.EAnimNotifyEventType
/// Size: 0x01 (1 bytes)
enum class EAnimNotifyEventType : uint8_t
{
	EAnimNotifyEventType__Begin                                                      = 0,
	EAnimNotifyEventType__End                                                        = 1
};

/// Enum /Script/Engine.EInertializationSpace
/// Size: 0x01 (1 bytes)
enum class EInertializationSpace : uint8_t
{
	EInertializationSpace__Default                                                   = 0,
	EInertializationSpace__WorldSpace                                                = 1,
	EInertializationSpace__WorldRotation                                             = 2
};

/// Enum /Script/Engine.EInertializationBoneState
/// Size: 0x01 (1 bytes)
enum class EInertializationBoneState : uint8_t
{
	EInertializationBoneState__Invalid                                               = 0,
	EInertializationBoneState__Valid                                                 = 1,
	EInertializationBoneState__Excluded                                              = 2
};

/// Enum /Script/Engine.EInertializationState
/// Size: 0x01 (1 bytes)
enum class EInertializationState : uint8_t
{
	EInertializationState__Inactive                                                  = 0,
	EInertializationState__Pending                                                   = 1,
	EInertializationState__Active                                                    = 2
};

/// Enum /Script/Engine.EEvaluatorMode
/// Size: 0x01 (1 bytes)
enum class EEvaluatorMode : uint8_t
{
	EEvaluatorMode__EM_Standard                                                      = 0,
	EEvaluatorMode__EM_Freeze                                                        = 1,
	EEvaluatorMode__EM_DelayedFreeze                                                 = 2
};

/// Enum /Script/Engine.EEvaluatorDataSource
/// Size: 0x01 (1 bytes)
enum class EEvaluatorDataSource : uint8_t
{
	EEvaluatorDataSource__EDS_SourcePose                                             = 0,
	EEvaluatorDataSource__EDS_DestinationPose                                        = 1
};

/// Enum /Script/Engine.EPostCopyOperation
/// Size: 0x01 (1 bytes)
enum class EPostCopyOperation : uint8_t
{
	EPostCopyOperation__None                                                         = 0,
	EPostCopyOperation__LogicalNegateBool                                            = 1
};

/// Enum /Script/Engine.EPinHidingMode
/// Size: 0x01 (1 bytes)
enum class EPinHidingMode : uint8_t
{
	EPinHidingMode__NeverAsPin                                                       = 0,
	EPinHidingMode__PinHiddenByDefault                                               = 1,
	EPinHidingMode__PinShownByDefault                                                = 2,
	EPinHidingMode__AlwaysAsPin                                                      = 3
};

/// Enum /Script/Engine.AnimPhysCollisionType
/// Size: 0x01 (1 bytes)
enum class AnimPhysCollisionType : uint8_t
{
	AnimPhysCollisionType__CoM                                                       = 0,
	AnimPhysCollisionType__CustomSphere                                              = 1,
	AnimPhysCollisionType__InnerSphere                                               = 2,
	AnimPhysCollisionType__OuterSphere                                               = 3
};

/// Enum /Script/Engine.AnimPhysTwistAxis
/// Size: 0x01 (1 bytes)
enum class AnimPhysTwistAxis : uint8_t
{
	AnimPhysTwistAxis__AxisX                                                         = 0,
	AnimPhysTwistAxis__AxisY                                                         = 1,
	AnimPhysTwistAxis__AxisZ                                                         = 2
};

/// Enum /Script/Engine.ETypeAdvanceAnim
/// Size: 0x01 (1 bytes)
enum class ETypeAdvanceAnim : uint8_t
{
	ETAA_Default                                                                     = 0,
	ETAA_Finished                                                                    = 1,
	ETAA_Looped                                                                      = 2
};

/// Enum /Script/Engine.ETransitionLogicType
/// Size: 0x01 (1 bytes)
enum class ETransitionLogicType : uint8_t
{
	ETransitionLogicType__TLT_StandardBlend                                          = 0,
	ETransitionLogicType__TLT_Inertialization                                        = 1,
	ETransitionLogicType__TLT_Custom                                                 = 2
};

/// Enum /Script/Engine.ETransitionBlendMode
/// Size: 0x01 (1 bytes)
enum class ETransitionBlendMode : uint8_t
{
	ETransitionBlendMode__TBM_Linear                                                 = 0,
	ETransitionBlendMode__TBM_Cubic                                                  = 1
};

/// Enum /Script/Engine.EComponentType
/// Size: 0x01 (1 bytes)
enum class EComponentType : uint8_t
{
	EComponentType__None                                                             = 0,
	EComponentType__TranslationX                                                     = 1,
	EComponentType__TranslationY                                                     = 2,
	EComponentType__TranslationZ                                                     = 3,
	EComponentType__RotationX                                                        = 4,
	EComponentType__RotationY                                                        = 5,
	EComponentType__RotationZ                                                        = 6,
	EComponentType__Scale                                                            = 7,
	EComponentType__ScaleX                                                           = 8,
	EComponentType__ScaleY                                                           = 9,
	EComponentType__ScaleZ                                                           = 10
};

/// Enum /Script/Engine.EAxisOption
/// Size: 0x01 (1 bytes)
enum class EAxisOption : uint8_t
{
	EAxisOption__X                                                                   = 0,
	EAxisOption__Y                                                                   = 1,
	EAxisOption__Z                                                                   = 2,
	EAxisOption__X_Neg                                                               = 3,
	EAxisOption__Y_Neg                                                               = 4,
	EAxisOption__Z_Neg                                                               = 5,
	EAxisOption__Custom                                                              = 6
};

/// Enum /Script/Engine.EAnimInterpolationType
/// Size: 0x01 (1 bytes)
enum class EAnimInterpolationType : uint8_t
{
	EAnimInterpolationType__Linear                                                   = 0,
	EAnimInterpolationType__Step                                                     = 1
};

/// Enum /Script/Engine.ECurveBlendOption
/// Size: 0x01 (1 bytes)
enum class ECurveBlendOption : uint8_t
{
	ECurveBlendOption__Override                                                      = 0,
	ECurveBlendOption__DoNotOverride                                                 = 1,
	ECurveBlendOption__NormalizeByWeight                                             = 2,
	ECurveBlendOption__BlendByWeight                                                 = 3,
	ECurveBlendOption__UseBasePose                                                   = 4,
	ECurveBlendOption__UseMaxValue                                                   = 5,
	ECurveBlendOption__UseMinValue                                                   = 6
};

/// Enum /Script/Engine.EAdditiveAnimationType
/// Size: 0x01 (1 bytes)
enum class EAdditiveAnimationType : uint8_t
{
	AAT_None                                                                         = 0,
	AAT_LocalSpaceBase                                                               = 1,
	AAT_RotationOffsetMeshSpace                                                      = 2
};

/// Enum /Script/Engine.ENotifyFilterType
/// Size: 0x01 (1 bytes)
enum class ENotifyFilterType : uint8_t
{
	ENotifyFilterType__NoFiltering                                                   = 0,
	ENotifyFilterType__LOD                                                           = 1
};

/// Enum /Script/Engine.EMontageNotifyTickType
/// Size: 0x01 (1 bytes)
enum class EMontageNotifyTickType : uint8_t
{
	EMontageNotifyTickType__Queued                                                   = 0,
	EMontageNotifyTickType__BranchingPoint                                           = 1
};

/// Enum /Script/Engine.EBoneRotationSource
/// Size: 0x01 (1 bytes)
enum class EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation                                                   = 0,
	BRS_KeepLocalSpaceRotation                                                       = 1,
	BRS_CopyFromTarget                                                               = 2
};

/// Enum /Script/Engine.EBoneControlSpace
/// Size: 0x01 (1 bytes)
enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                                                                   = 0,
	BCS_ComponentSpace                                                               = 1,
	BCS_ParentBoneSpace                                                              = 2,
	BCS_BoneSpace                                                                    = 3
};

/// Enum /Script/Engine.EBoneAxis
/// Size: 0x01 (1 bytes)
enum class EBoneAxis : uint8_t
{
	BA_X                                                                             = 0,
	BA_Y                                                                             = 1,
	BA_Z                                                                             = 2
};

/// Enum /Script/Engine.EPrimaryAssetCookRule
/// Size: 0x01 (1 bytes)
enum class EPrimaryAssetCookRule : uint8_t
{
	EPrimaryAssetCookRule__Unknown                                                   = 0,
	EPrimaryAssetCookRule__NeverCook                                                 = 1,
	EPrimaryAssetCookRule__DevelopmentCook                                           = 2,
	EPrimaryAssetCookRule__DevelopmentAlwaysCook                                     = 3,
	EPrimaryAssetCookRule__AlwaysCook                                                = 4
};

/// Enum /Script/Engine.ENaturalSoundFalloffMode
/// Size: 0x01 (1 bytes)
enum class ENaturalSoundFalloffMode : uint8_t
{
	ENaturalSoundFalloffMode__Continues                                              = 0,
	ENaturalSoundFalloffMode__Silent                                                 = 1,
	ENaturalSoundFalloffMode__Hold                                                   = 2
};

/// Enum /Script/Engine.EAttenuationShape
/// Size: 0x01 (1 bytes)
enum class EAttenuationShape : uint8_t
{
	EAttenuationShape__Sphere                                                        = 0,
	EAttenuationShape__Capsule                                                       = 1,
	EAttenuationShape__Box                                                           = 2,
	EAttenuationShape__Cone                                                          = 3
};

/// Enum /Script/Engine.EAttenuationDistanceModel
/// Size: 0x01 (1 bytes)
enum class EAttenuationDistanceModel : uint8_t
{
	EAttenuationDistanceModel__Linear                                                = 0,
	EAttenuationDistanceModel__Logarithmic                                           = 1,
	EAttenuationDistanceModel__Inverse                                               = 2,
	EAttenuationDistanceModel__LogReverse                                            = 3,
	EAttenuationDistanceModel__NaturalSound                                          = 4,
	EAttenuationDistanceModel__Custom                                                = 5
};

/// Enum /Script/Engine.EAudioBusChannels
/// Size: 0x01 (1 bytes)
enum class EAudioBusChannels : uint8_t
{
	EAudioBusChannels__Mono                                                          = 0,
	EAudioBusChannels__Stereo                                                        = 1
};

/// Enum /Script/Engine.EAudioFaderCurve
/// Size: 0x01 (1 bytes)
enum class EAudioFaderCurve : uint8_t
{
	EAudioFaderCurve__Linear                                                         = 0,
	EAudioFaderCurve__Logarithmic                                                    = 1,
	EAudioFaderCurve__SCurve                                                         = 2,
	EAudioFaderCurve__Sin                                                            = 3,
	EAudioFaderCurve__Count                                                          = 4
};

/// Enum /Script/Engine.EAudioOutputTarget
/// Size: 0x01 (1 bytes)
enum class EAudioOutputTarget : uint8_t
{
	EAudioOutputTarget__Speaker                                                      = 0,
	EAudioOutputTarget__Controller                                                   = 1,
	EAudioOutputTarget__ControllerFallbackToSpeaker                                  = 2
};

/// Enum /Script/Engine.EMonoChannelUpmixMethod
/// Size: 0x01 (1 bytes)
enum class EMonoChannelUpmixMethod : uint8_t
{
	EMonoChannelUpmixMethod__Linear                                                  = 0,
	EMonoChannelUpmixMethod__EqualPower                                              = 1,
	EMonoChannelUpmixMethod__FullVolume                                              = 2
};

/// Enum /Script/Engine.EPanningMethod
/// Size: 0x01 (1 bytes)
enum class EPanningMethod : uint8_t
{
	EPanningMethod__Linear                                                           = 0,
	EPanningMethod__EqualPower                                                       = 1
};

/// Enum /Script/Engine.EVoiceSampleRate
/// Size: 0x04 (4 bytes)
enum class EVoiceSampleRate : uint32_t
{
	EVoiceSampleRate__Low16000Hz                                                     = 16000,
	EVoiceSampleRate__Normal24000Hz                                                  = 24000
};

/// Enum /Script/Engine.EAudioVolumeLocationState
/// Size: 0x01 (1 bytes)
enum class EAudioVolumeLocationState : uint8_t
{
	EAudioVolumeLocationState__InsideTheVolume                                       = 0,
	EAudioVolumeLocationState__OutsideTheVolume                                      = 1
};

/// Enum /Script/Engine.EBlendableLocation
/// Size: 0x01 (1 bytes)
enum class EBlendableLocation : uint8_t
{
	BL_AfterTonemapping                                                              = 0,
	BL_BeforeTonemapping                                                             = 1,
	BL_BeforeTranslucency                                                            = 2,
	BL_Distortion                                                                    = 3,
	BL_AfterUpscale                                                                  = 4,
	BL_BloomCombine                                                                  = 5,
	BL_HalfResSetup                                                                  = 6,
	BL_ReplacingTonemapper                                                           = 7,
	BL_SSRInput                                                                      = 8
};

/// Enum /Script/Engine.ENotifyTriggerMode
/// Size: 0x01 (1 bytes)
enum class ENotifyTriggerMode : uint8_t
{
	ENotifyTriggerMode__AllAnimations                                                = 0,
	ENotifyTriggerMode__HighestWeightedAnimation                                     = 1,
	ENotifyTriggerMode__None                                                         = 2
};

/// Enum /Script/Engine.EBlendSpaceAxis
/// Size: 0x01 (1 bytes)
enum class EBlendSpaceAxis : uint8_t
{
	BSA_None                                                                         = 0,
	BSA_X                                                                            = 1,
	BSA_Y                                                                            = 2,
	BSA_Max                                                                          = 3
};

/// Enum /Script/Engine.EBlueprintNativizationFlag
/// Size: 0x01 (1 bytes)
enum class EBlueprintNativizationFlag : uint8_t
{
	EBlueprintNativizationFlag__Disabled                                             = 0,
	EBlueprintNativizationFlag__Dependency                                           = 1,
	EBlueprintNativizationFlag__ExplicitlyEnabled                                    = 2
};

/// Enum /Script/Engine.EBlueprintCompileMode
/// Size: 0x01 (1 bytes)
enum class EBlueprintCompileMode : uint8_t
{
	EBlueprintCompileMode__Default                                                   = 0,
	EBlueprintCompileMode__Development                                               = 1,
	EBlueprintCompileMode__FinalRelease                                              = 2
};

/// Enum /Script/Engine.EBlueprintType
/// Size: 0x01 (1 bytes)
enum class EBlueprintType : uint8_t
{
	BPTYPE_Normal                                                                    = 0,
	BPTYPE_Const                                                                     = 1,
	BPTYPE_MacroLibrary                                                              = 2,
	BPTYPE_Interface                                                                 = 3,
	BPTYPE_LevelScript                                                               = 4,
	BPTYPE_FunctionLibrary                                                           = 5
};

/// Enum /Script/Engine.EBlueprintStatus
/// Size: 0x01 (1 bytes)
enum class EBlueprintStatus : uint8_t
{
	BS_Unknown                                                                       = 0,
	BS_Dirty                                                                         = 1,
	BS_Error                                                                         = 2,
	BS_UpToDate                                                                      = 3,
	BS_BeingCreated                                                                  = 4,
	BS_UpToDateWithWarnings                                                          = 5
};

/// Enum /Script/Engine.EDOFMode
/// Size: 0x01 (1 bytes)
enum class EDOFMode : uint8_t
{
	EDOFMode__Default                                                                = 0,
	EDOFMode__SixDOF                                                                 = 1,
	EDOFMode__YZPlane                                                                = 2,
	EDOFMode__XZPlane                                                                = 3,
	EDOFMode__XYPlane                                                                = 4,
	EDOFMode__CustomPlane                                                            = 5,
	EDOFMode__None                                                                   = 6
};

/// Enum /Script/Engine.EBrushType
/// Size: 0x01 (1 bytes)
enum class EBrushType : uint8_t
{
	Brush_Default                                                                    = 0,
	Brush_Add                                                                        = 1,
	Brush_Subtract                                                                   = 2
};

/// Enum /Script/Engine.ECsgOper
/// Size: 0x01 (1 bytes)
enum class ECsgOper : uint8_t
{
	CSG_Active                                                                       = 0,
	CSG_Add                                                                          = 1,
	CSG_Subtract                                                                     = 2,
	CSG_Intersect                                                                    = 3,
	CSG_Deintersect                                                                  = 4,
	CSG_None                                                                         = 5
};

/// Enum /Script/Engine.EInitialOscillatorOffset
/// Size: 0x01 (1 bytes)
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom                                                                 = 0,
	EOO_OffsetZero                                                                   = 1
};

/// Enum /Script/Engine.EOscillatorWaveform
/// Size: 0x01 (1 bytes)
enum class EOscillatorWaveform : uint8_t
{
	EOscillatorWaveform__SineWave                                                    = 0,
	EOscillatorWaveform__PerlinNoise                                                 = 1
};

/// Enum /Script/Engine.ECameraShakeDurationType
/// Size: 0x01 (1 bytes)
enum class ECameraShakeDurationType : uint8_t
{
	ECameraShakeDurationType__Fixed                                                  = 0,
	ECameraShakeDurationType__Infinite                                               = 1,
	ECameraShakeDurationType__Custom                                                 = 2
};

/// Enum /Script/Engine.ECameraShakeUpdateResultFlags
/// Size: 0x01 (1 bytes)
enum class ECameraShakeUpdateResultFlags : uint8_t
{
	ECameraShakeUpdateResultFlags__ApplyAsAbsolute                                   = 1,
	ECameraShakeUpdateResultFlags__SkipAutoScale                                     = 2,
	ECameraShakeUpdateResultFlags__SkipAutoPlaySpace                                 = 4,
	ECameraShakeUpdateResultFlags__Default                                           = 0
};

/// Enum /Script/Engine.ECameraShakeAttenuation
/// Size: 0x01 (1 bytes)
enum class ECameraShakeAttenuation : uint8_t
{
	ECameraShakeAttenuation__Linear                                                  = 0,
	ECameraShakeAttenuation__Quadratic                                               = 1
};

/// Enum /Script/Engine.ECameraAlphaBlendMode
/// Size: 0x01 (1 bytes)
enum class ECameraAlphaBlendMode : uint8_t
{
	ECameraAlphaBlendMode__CABM_Linear                                               = 0,
	ECameraAlphaBlendMode__CABM_Cubic                                                = 1
};

/// Enum /Script/Engine.ECameraShakePlaySpace
/// Size: 0x01 (1 bytes)
enum class ECameraShakePlaySpace : uint8_t
{
	ECameraShakePlaySpace__CameraLocal                                               = 0,
	ECameraShakePlaySpace__World                                                     = 1,
	ECameraShakePlaySpace__UserDefined                                               = 2
};

/// Enum /Script/Engine.ECameraProjectionMode
/// Size: 0x01 (1 bytes)
enum class ECameraProjectionMode : uint8_t
{
	ECameraProjectionMode__Perspective                                               = 0,
	ECameraProjectionMode__Orthographic                                              = 1
};

/// Enum /Script/Engine.ECloudStorageDelegate
/// Size: 0x01 (1 bytes)
enum class ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete                                                         = 0,
	CSD_KeyValueWriteComplete                                                        = 1,
	CSD_ValueChanged                                                                 = 2,
	CSD_DocumentQueryComplete                                                        = 3,
	CSD_DocumentReadComplete                                                         = 4,
	CSD_DocumentWriteComplete                                                        = 5,
	CSD_DocumentConflictDetected                                                     = 6
};

/// Enum /Script/Engine.EAngularDriveMode
/// Size: 0x01 (1 bytes)
enum class EAngularDriveMode : uint8_t
{
	EAngularDriveMode__SLERP                                                         = 0,
	EAngularDriveMode__TwistAndSwing                                                 = 1
};

/// Enum /Script/Engine.ECurveTableMode
/// Size: 0x01 (1 bytes)
enum class ECurveTableMode : uint8_t
{
	ECurveTableMode__Empty                                                           = 0,
	ECurveTableMode__SimpleCurves                                                    = 1,
	ECurveTableMode__RichCurves                                                      = 2
};

/// Enum /Script/Engine.ECustomAttributeBlendType
/// Size: 0x01 (1 bytes)
enum class ECustomAttributeBlendType : uint8_t
{
	ECustomAttributeBlendType__Override                                              = 0,
	ECustomAttributeBlendType__Blend                                                 = 1
};

/// Enum /Script/Engine.EEvaluateCurveTableResult
/// Size: 0x01 (1 bytes)
enum class EEvaluateCurveTableResult : uint8_t
{
	EEvaluateCurveTableResult__RowFound                                              = 0,
	EEvaluateCurveTableResult__RowNotFound                                           = 1
};

/// Enum /Script/Engine.EGrammaticalNumber
/// Size: 0x01 (1 bytes)
enum class EGrammaticalNumber : uint8_t
{
	EGrammaticalNumber__Singular                                                     = 0,
	EGrammaticalNumber__Plural                                                       = 1
};

/// Enum /Script/Engine.EGrammaticalGender
/// Size: 0x01 (1 bytes)
enum class EGrammaticalGender : uint8_t
{
	EGrammaticalGender__Neuter                                                       = 0,
	EGrammaticalGender__Masculine                                                    = 1,
	EGrammaticalGender__Feminine                                                     = 2,
	EGrammaticalGender__Mixed                                                        = 3
};

/// Enum /Script/Engine.DistributionParamMode
/// Size: 0x01 (1 bytes)
enum class DistributionParamMode : uint8_t
{
	DPM_Normal                                                                       = 0,
	DPM_Abs                                                                          = 1,
	DPM_Direct                                                                       = 2
};

/// Enum /Script/Engine.EDistributionVectorMirrorFlags
/// Size: 0x01 (1 bytes)
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                                                                       = 0,
	EDVMF_Different                                                                  = 1,
	EDVMF_Mirror                                                                     = 2
};

/// Enum /Script/Engine.EDistributionVectorLockFlags
/// Size: 0x01 (1 bytes)
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                                                                       = 0,
	EDVLF_XY                                                                         = 1,
	EDVLF_XZ                                                                         = 2,
	EDVLF_YZ                                                                         = 3,
	EDVLF_XYZ                                                                        = 4
};

/// Enum /Script/Engine.ENodeEnabledState
/// Size: 0x01 (1 bytes)
enum class ENodeEnabledState : uint8_t
{
	ENodeEnabledState__Enabled                                                       = 0,
	ENodeEnabledState__Disabled                                                      = 1,
	ENodeEnabledState__DevelopmentOnly                                               = 2
};

/// Enum /Script/Engine.ENodeAdvancedPins
/// Size: 0x01 (1 bytes)
enum class ENodeAdvancedPins : uint8_t
{
	ENodeAdvancedPins__NoPins                                                        = 0,
	ENodeAdvancedPins__Shown                                                         = 1,
	ENodeAdvancedPins__Hidden                                                        = 2
};

/// Enum /Script/Engine.ENodeTitleType
/// Size: 0x01 (1 bytes)
enum class ENodeTitleType : uint8_t
{
	ENodeTitleType__FullTitle                                                        = 0,
	ENodeTitleType__ListView                                                         = 1,
	ENodeTitleType__EditableTitle                                                    = 2,
	ENodeTitleType__MenuTitle                                                        = 3,
	ENodeTitleType__MAX_TitleTypes                                                   = 4
};

/// Enum /Script/Engine.EPinContainerType
/// Size: 0x01 (1 bytes)
enum class EPinContainerType : uint8_t
{
	EPinContainerType__None                                                          = 0,
	EPinContainerType__Array                                                         = 1,
	EPinContainerType__Set                                                           = 2,
	EPinContainerType__Map                                                           = 3
};

/// Enum /Script/Engine.EEdGraphPinDirection
/// Size: 0x01 (1 bytes)
enum class EEdGraphPinDirection : uint8_t
{
	EGPD_Input                                                                       = 0,
	EGPD_Output                                                                      = 1
};

/// Enum /Script/Engine.EBlueprintPinStyleType
/// Size: 0x01 (1 bytes)
enum class EBlueprintPinStyleType : uint8_t
{
	BPST_Original                                                                    = 0,
	BPST_VariantA                                                                    = 1
};

/// Enum /Script/Engine.ECanCreateConnectionResponse
/// Size: 0x01 (1 bytes)
enum class ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE                                                            = 0,
	CONNECT_RESPONSE_DISALLOW                                                        = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A                                                  = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B                                                  = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB                                                 = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE                                       = 5
};

/// Enum /Script/Engine.EGraphType
/// Size: 0x01 (1 bytes)
enum class EGraphType : uint8_t
{
	GT_Function                                                                      = 0,
	GT_Ubergraph                                                                     = 1,
	GT_Macro                                                                         = 2,
	GT_Animation                                                                     = 3,
	GT_StateMachine                                                                  = 4
};

/// Enum /Script/Engine.ETransitionType
/// Size: 0x01 (1 bytes)
enum class ETransitionType : uint8_t
{
	ETransitionType__None                                                            = 0,
	ETransitionType__Paused                                                          = 1,
	ETransitionType__Loading                                                         = 2,
	ETransitionType__Saving                                                          = 3,
	ETransitionType__Connecting                                                      = 4,
	ETransitionType__Precaching                                                      = 5,
	ETransitionType__WaitingToConnect                                                = 6
};

/// Enum /Script/Engine.EFullyLoadPackageType
/// Size: 0x01 (1 bytes)
enum class EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                                                                    = 0,
	FULLYLOAD_Game_PreLoadClass                                                      = 1,
	FULLYLOAD_Game_PostLoadClass                                                     = 2,
	FULLYLOAD_Always                                                                 = 3,
	FULLYLOAD_Mutator                                                                = 4
};

/// Enum /Script/Engine.EViewModeIndex
/// Size: 0x01 (1 bytes)
enum class EViewModeIndex : uint8_t
{
	VMI_BrushWireframe                                                               = 0,
	VMI_Wireframe                                                                    = 1,
	VMI_Unlit                                                                        = 2,
	VMI_Lit                                                                          = 3,
	VMI_Lit_DetailLighting                                                           = 4,
	VMI_LightingOnly                                                                 = 5,
	VMI_LightComplexity                                                              = 6,
	VMI_ShaderComplexity                                                             = 8,
	VMI_LightmapDensity                                                              = 9,
	VMI_LitLightmapDensity                                                           = 10,
	VMI_ReflectionOverride                                                           = 11,
	VMI_VisualizeBuffer                                                              = 12,
	VMI_StationaryLightOverlap                                                       = 14,
	VMI_CollisionPawn                                                                = 15,
	VMI_CollisionVisibility                                                          = 16,
	VMI_LODColoration                                                                = 18,
	VMI_QuadOverdraw                                                                 = 19,
	VMI_PrimitiveDistanceAccuracy                                                    = 20,
	VMI_MeshUVDensityAccuracy                                                        = 21,
	VMI_ShaderComplexityWithQuadOverdraw                                             = 22,
	VMI_HLODColoration                                                               = 23,
	VMI_GroupLODColoration                                                           = 24,
	VMI_MaterialTextureScaleAccuracy                                                 = 25,
	VMI_RequiredTextureResolution                                                    = 26,
	VMI_PathTracing                                                                  = 27,
	VMI_RayTracingDebug                                                              = 28,
	VMI_Max                                                                          = 29,
	VMI_Unknown                                                                      = 255
};

/// Enum /Script/Engine.EDemoPlayFailure
/// Size: 0x01 (1 bytes)
enum class EDemoPlayFailure : uint8_t
{
	EDemoPlayFailure__Generic                                                        = 0,
	EDemoPlayFailure__DemoNotFound                                                   = 1,
	EDemoPlayFailure__Corrupt                                                        = 2,
	EDemoPlayFailure__InvalidVersion                                                 = 3,
	EDemoPlayFailure__InitBase                                                       = 4,
	EDemoPlayFailure__GameSpecificHeader                                             = 5,
	EDemoPlayFailure__ReplayStreamerInternal                                         = 6,
	EDemoPlayFailure__LoadMap                                                        = 7,
	EDemoPlayFailure__Serialization                                                  = 8
};

/// Enum /Script/Engine.ETravelType
/// Size: 0x01 (1 bytes)
enum class ETravelType : uint8_t
{
	TRAVEL_Absolute                                                                  = 0,
	TRAVEL_Partial                                                                   = 1,
	TRAVEL_Relative                                                                  = 2
};

/// Enum /Script/Engine.ENetworkLagState
/// Size: 0x01 (1 bytes)
enum class ENetworkLagState : uint8_t
{
	ENetworkLagState__NotLagging                                                     = 0,
	ENetworkLagState__Lagging                                                        = 1
};

/// Enum /Script/Engine.EMouseCaptureMode
/// Size: 0x01 (1 bytes)
enum class EMouseCaptureMode : uint8_t
{
	EMouseCaptureMode__NoCapture                                                     = 0,
	EMouseCaptureMode__CapturePermanently                                            = 1,
	EMouseCaptureMode__CapturePermanently_IncludingInitialMouseDown                  = 2,
	EMouseCaptureMode__CaptureDuringMouseDown                                        = 3,
	EMouseCaptureMode__CaptureDuringRightMouseDown                                   = 4
};

/// Enum /Script/Engine.ECustomTimeStepSynchronizationState
/// Size: 0x01 (1 bytes)
enum class ECustomTimeStepSynchronizationState : uint8_t
{
	ECustomTimeStepSynchronizationState__Closed                                      = 0,
	ECustomTimeStepSynchronizationState__Error                                       = 1,
	ECustomTimeStepSynchronizationState__Synchronized                                = 2,
	ECustomTimeStepSynchronizationState__Synchronizing                               = 3
};

/// Enum /Script/Engine.EMeshBufferAccess
/// Size: 0x01 (1 bytes)
enum class EMeshBufferAccess : uint8_t
{
	EMeshBufferAccess__Default                                                       = 0,
	EMeshBufferAccess__ForceCPUAndGPU                                                = 1
};

/// Enum /Script/Engine.EComponentSocketType
/// Size: 0x01 (1 bytes)
enum class EComponentSocketType : uint8_t
{
	EComponentSocketType__Invalid                                                    = 0,
	EComponentSocketType__Bone                                                       = 1,
	EComponentSocketType__Socket                                                     = 2
};

/// Enum /Script/Engine.EPhysicalMaterialMaskColor
/// Size: 0x01 (1 bytes)
enum class EPhysicalMaterialMaskColor : uint8_t
{
	EPhysicalMaterialMaskColor__Red                                                  = 0,
	EPhysicalMaterialMaskColor__Green                                                = 1,
	EPhysicalMaterialMaskColor__Blue                                                 = 2,
	EPhysicalMaterialMaskColor__Cyan                                                 = 3,
	EPhysicalMaterialMaskColor__Magenta                                              = 4,
	EPhysicalMaterialMaskColor__Yellow                                               = 5,
	EPhysicalMaterialMaskColor__White                                                = 6,
	EPhysicalMaterialMaskColor__Black                                                = 7
};

/// Enum /Script/Engine.EWalkableSlopeBehavior
/// Size: 0x01 (1 bytes)
enum class EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default                                                            = 0,
	WalkableSlope_Increase                                                           = 1,
	WalkableSlope_Decrease                                                           = 2,
	WalkableSlope_Unwalkable                                                         = 3,
	WalkableSlope_Max                                                                = 4
};

/// Enum /Script/Engine.EAutoPossessAI
/// Size: 0x01 (1 bytes)
enum class EAutoPossessAI : uint8_t
{
	EAutoPossessAI__Disabled                                                         = 0,
	EAutoPossessAI__PlacedInWorld                                                    = 1,
	EAutoPossessAI__Spawned                                                          = 2,
	EAutoPossessAI__PlacedInWorldOrSpawned                                           = 3
};

/// Enum /Script/Engine.EUpdateRateShiftBucket
/// Size: 0x01 (1 bytes)
enum class EUpdateRateShiftBucket : uint8_t
{
	EUpdateRateShiftBucket__ShiftBucket0                                             = 0,
	EUpdateRateShiftBucket__ShiftBucket1                                             = 1,
	EUpdateRateShiftBucket__ShiftBucket2                                             = 2,
	EUpdateRateShiftBucket__ShiftBucket3                                             = 3,
	EUpdateRateShiftBucket__ShiftBucket4                                             = 4,
	EUpdateRateShiftBucket__ShiftBucket5                                             = 5,
	EUpdateRateShiftBucket__ShiftBucketMax                                           = 6
};

/// Enum /Script/Engine.EShadowMapFlags
/// Size: 0x01 (1 bytes)
enum class EShadowMapFlags : uint8_t
{
	SMF_None                                                                         = 0,
	SMF_Streamed                                                                     = 1
};

/// Enum /Script/Engine.ELightMapPaddingType
/// Size: 0x01 (1 bytes)
enum class ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding                                                               = 0,
	LMPT_PrePadding                                                                  = 1,
	LMPT_NoPadding                                                                   = 2
};

/// Enum /Script/Engine.ECollisionEnabled
/// Size: 0x01 (1 bytes)
enum class ECollisionEnabled : uint8_t
{
	ECollisionEnabled__NoCollision                                                   = 0,
	ECollisionEnabled__QueryOnly                                                     = 1,
	ECollisionEnabled__PhysicsOnly                                                   = 2,
	ECollisionEnabled__QueryAndPhysics                                               = 3
};

/// Enum /Script/Engine.ETimelineSigType
/// Size: 0x01 (1 bytes)
enum class ETimelineSigType : uint8_t
{
	ETS_EventSignature                                                               = 0,
	ETS_FloatSignature                                                               = 1,
	ETS_VectorSignature                                                              = 2,
	ETS_LinearColorSignature                                                         = 3,
	ETS_InvalidSignature                                                             = 4
};

/// Enum /Script/Engine.EFilterInterpolationType
/// Size: 0x01 (1 bytes)
enum class EFilterInterpolationType : uint8_t
{
	BSIT_Average                                                                     = 0,
	BSIT_Linear                                                                      = 1,
	BSIT_Cubic                                                                       = 2
};

/// Enum /Script/Engine.ECollisionResponse
/// Size: 0x01 (1 bytes)
enum class ECollisionResponse : uint8_t
{
	ECR_Ignore                                                                       = 0,
	ECR_Overlap                                                                      = 1,
	ECR_Block                                                                        = 2
};

/// Enum /Script/Engine.EOverlapFilterOption
/// Size: 0x01 (1 bytes)
enum class EOverlapFilterOption : uint8_t
{
	OverlapFilter_All                                                                = 0,
	OverlapFilter_DynamicOnly                                                        = 1,
	OverlapFilter_StaticOnly                                                         = 2
};

/// Enum /Script/Engine.ECollisionChannel
/// Size: 0x01 (1 bytes)
enum class ECollisionChannel : uint8_t
{
	ECC_WorldStatic                                                                  = 0,
	ECC_WorldDynamic                                                                 = 1,
	ECC_Pawn                                                                         = 2,
	ECC_Visibility                                                                   = 3,
	ECC_Camera                                                                       = 4,
	ECC_PhysicsBody                                                                  = 5,
	ECC_Vehicle                                                                      = 6,
	ECC_Destructible                                                                 = 7,
	ECC_EngineTraceChannel1                                                          = 8,
	ECC_EngineTraceChannel2                                                          = 9,
	ECC_EngineTraceChannel3                                                          = 10,
	ECC_EngineTraceChannel4                                                          = 11,
	ECC_EngineTraceChannel5                                                          = 12,
	ECC_EngineTraceChannel6                                                          = 13,
	ECC_GameTraceChannel1                                                            = 14,
	ECC_GameTraceChannel2                                                            = 15,
	ECC_GameTraceChannel3                                                            = 16,
	ECC_GameTraceChannel4                                                            = 17,
	ECC_GameTraceChannel5                                                            = 18,
	ECC_GameTraceChannel6                                                            = 19,
	ECC_GameTraceChannel7                                                            = 20,
	ECC_GameTraceChannel8                                                            = 21,
	ECC_GameTraceChannel9                                                            = 22,
	ECC_GameTraceChannel10                                                           = 23,
	ECC_GameTraceChannel11                                                           = 24,
	ECC_GameTraceChannel12                                                           = 25,
	ECC_GameTraceChannel13                                                           = 26,
	ECC_GameTraceChannel14                                                           = 27,
	ECC_GameTraceChannel15                                                           = 28,
	ECC_GameTraceChannel16                                                           = 29,
	ECC_GameTraceChannel17                                                           = 30,
	ECC_GameTraceChannel18                                                           = 31,
	ECC_OverlapAll_Deprecated                                                        = 32
};

/// Enum /Script/Engine.ENetworkSmoothingMode
/// Size: 0x01 (1 bytes)
enum class ENetworkSmoothingMode : uint8_t
{
	ENetworkSmoothingMode__Disabled                                                  = 0,
	ENetworkSmoothingMode__Linear                                                    = 1,
	ENetworkSmoothingMode__Exponential                                               = 2,
	ENetworkSmoothingMode__Replay                                                    = 3
};

/// Enum /Script/Engine.ELightingBuildQuality
/// Size: 0x01 (1 bytes)
enum class ELightingBuildQuality : uint8_t
{
	Quality_Preview                                                                  = 0,
	Quality_Medium                                                                   = 1,
	Quality_High                                                                     = 2,
	Quality_Production                                                               = 3
};

/// Enum /Script/Engine.EMaterialShadingRate
/// Size: 0x01 (1 bytes)
enum class EMaterialShadingRate : uint8_t
{
	MSR_1x1                                                                          = 0,
	MSR_2x1                                                                          = 1,
	MSR_1x2                                                                          = 2,
	MSR_2x2                                                                          = 3,
	MSR_4x2                                                                          = 4,
	MSR_2x4                                                                          = 5,
	MSR_4x4                                                                          = 6,
	MSR_Count                                                                        = 7
};

/// Enum /Script/Engine.EMaterialStencilCompare
/// Size: 0x01 (1 bytes)
enum class EMaterialStencilCompare : uint8_t
{
	MSC_Less                                                                         = 0,
	MSC_LessEqual                                                                    = 1,
	MSC_Greater                                                                      = 2,
	MSC_GreaterEqual                                                                 = 3,
	MSC_Equal                                                                        = 4,
	MSC_NotEqual                                                                     = 5,
	MSC_Never                                                                        = 6,
	MSC_Always                                                                       = 7,
	MSC_Count                                                                        = 8
};

/// Enum /Script/Engine.EMaterialSamplerType
/// Size: 0x01 (1 bytes)
enum class EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color                                                                = 0,
	SAMPLERTYPE_Grayscale                                                            = 1,
	SAMPLERTYPE_Alpha                                                                = 2,
	SAMPLERTYPE_Normal                                                               = 3,
	SAMPLERTYPE_Masks                                                                = 4,
	SAMPLERTYPE_DistanceFieldFont                                                    = 5,
	SAMPLERTYPE_LinearColor                                                          = 6,
	SAMPLERTYPE_LinearGrayscale                                                      = 7,
	SAMPLERTYPE_Data                                                                 = 8,
	SAMPLERTYPE_External                                                             = 9,
	SAMPLERTYPE_VirtualColor                                                         = 10,
	SAMPLERTYPE_VirtualGrayscale                                                     = 11,
	SAMPLERTYPE_VirtualAlpha                                                         = 12,
	SAMPLERTYPE_VirtualNormal                                                        = 13,
	SAMPLERTYPE_VirtualMasks                                                         = 14,
	SAMPLERTYPE_VirtualLinearColor                                                   = 15,
	SAMPLERTYPE_VirtualLinearGrayscale                                               = 16
};

/// Enum /Script/Engine.EMaterialTessellationMode
/// Size: 0x01 (1 bytes)
enum class EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation                                                               = 0,
	MTM_FlatTessellation                                                             = 1,
	MTM_PNTriangles                                                                  = 2
};

/// Enum /Script/Engine.EMaterialShadingModel
/// Size: 0x01 (1 bytes)
enum class EMaterialShadingModel : uint8_t
{
	MSM_Unlit                                                                        = 0,
	MSM_DefaultLit                                                                   = 1,
	MSM_Subsurface                                                                   = 2,
	MSM_PreintegratedSkin                                                            = 3,
	MSM_ClearCoat                                                                    = 4,
	MSM_SubsurfaceProfile                                                            = 5,
	MSM_TwoSidedFoliage                                                              = 6,
	MSM_Hair                                                                         = 7,
	MSM_Cloth                                                                        = 8,
	MSM_Eye                                                                          = 9,
	MSM_SingleLayerWater                                                             = 10,
	MSM_ThinTranslucent                                                              = 11,
	MSM_NUM                                                                          = 12,
	MSM_FromMaterialExpression                                                       = 13
};

/// Enum /Script/Engine.EParticleCollisionMode
/// Size: 0x01 (1 bytes)
enum class EParticleCollisionMode : uint8_t
{
	EParticleCollisionMode__SceneDepth                                               = 0,
	EParticleCollisionMode__DistanceField                                            = 1
};

/// Enum /Script/Engine.ETrailWidthMode
/// Size: 0x01 (1 bytes)
enum class ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre                                                       = 0,
	ETrailWidthMode_FromFirst                                                        = 1,
	ETrailWidthMode_FromSecond                                                       = 2
};

/// Enum /Script/Engine.EGBufferFormat
/// Size: 0x01 (1 bytes)
enum class EGBufferFormat : uint8_t
{
	EGBufferFormat__Force8BitsPerChannel                                             = 0,
	EGBufferFormat__Default                                                          = 1,
	EGBufferFormat__HighPrecisionNormals                                             = 3,
	EGBufferFormat__Force16BitsPerChannel                                            = 5
};

/// Enum /Script/Engine.ESceneCaptureCompositeMode
/// Size: 0x01 (1 bytes)
enum class ESceneCaptureCompositeMode : uint8_t
{
	SCCM_Overwrite                                                                   = 0,
	SCCM_Additive                                                                    = 1,
	SCCM_Composite                                                                   = 2
};

/// Enum /Script/Engine.ESceneCaptureSource
/// Size: 0x01 (1 bytes)
enum class ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR                                                                = 0,
	SCS_SceneColorHDRNoAlpha                                                         = 1,
	SCS_FinalColorLDR                                                                = 2,
	SCS_SceneColorSceneDepth                                                         = 3,
	SCS_SceneDepth                                                                   = 4,
	SCS_DeviceDepth                                                                  = 5,
	SCS_Normal                                                                       = 6,
	SCS_BaseColor                                                                    = 7,
	SCS_FinalColorHDR                                                                = 8,
	SCS_FinalToneCurveHDR                                                            = 9
};

/// Enum /Script/Engine.ETranslucentSortPolicy
/// Size: 0x01 (1 bytes)
enum class ETranslucentSortPolicy : uint8_t
{
	ETranslucentSortPolicy__SortByDistance                                           = 0,
	ETranslucentSortPolicy__SortByProjectedZ                                         = 1,
	ETranslucentSortPolicy__SortAlongAxis                                            = 2
};

/// Enum /Script/Engine.ERefractionMode
/// Size: 0x01 (1 bytes)
enum class ERefractionMode : uint8_t
{
	RM_IndexOfRefraction                                                             = 0,
	RM_PixelNormalOffset                                                             = 1
};

/// Enum /Script/Engine.ETranslucencyLightingMode
/// Size: 0x01 (1 bytes)
enum class ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional                                                     = 0,
	TLM_VolumetricDirectional                                                        = 1,
	TLM_VolumetricPerVertexNonDirectional                                            = 2,
	TLM_VolumetricPerVertexDirectional                                               = 3,
	TLM_Surface                                                                      = 4,
	TLM_SurfacePerPixelLighting                                                      = 5
};

/// Enum /Script/Engine.ESamplerSourceMode
/// Size: 0x01 (1 bytes)
enum class ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset                                                             = 0,
	SSM_Wrap_WorldGroupSettings                                                      = 1,
	SSM_Clamp_WorldGroupSettings                                                     = 2
};

/// Enum /Script/Engine.EMobileMaterialType
/// Size: 0x01 (1 bytes)
enum class EMobileMaterialType : uint8_t
{
	MMT_Default                                                                      = 0,
	MMT_PBR                                                                          = 1,
	MMT_Metal                                                                        = 2,
	MMT_Skin                                                                         = 3,
	MMT_Face                                                                         = 4,
	MMT_Hair                                                                         = 5,
	MMT_Eye                                                                          = 6,
	MMT_Cel                                                                          = 7,
	MMT_Sheen                                                                        = 8,
	MMT_Fabric                                                                       = 9,
	MMT_Foliage                                                                      = 10,
	MMT_Particle                                                                     = 11,
	MMT_Water                                                                        = 12,
	MMT_PlaceHold0                                                                   = 13,
	MMT_PlaceHold1                                                                   = 14,
	MMT_PlaceHold2                                                                   = 15,
	MMT_PlaceHold3                                                                   = 16,
	MMT_PlaceHold4                                                                   = 17,
	MMT_PlaceHold5                                                                   = 18,
	MMT_Outline                                                                      = 19,
	MMT_DualNormal                                                                   = 20,
	MMT_Billboard                                                                    = 21
};

/// Enum /Script/Engine.EBlendMode
/// Size: 0x01 (1 bytes)
enum class EBlendMode : uint8_t
{
	BLEND_Opaque                                                                     = 0,
	BLEND_Masked                                                                     = 1,
	BLEND_Translucent                                                                = 2,
	BLEND_Additive                                                                   = 3,
	BLEND_Modulate                                                                   = 4,
	BLEND_AlphaComposite                                                             = 5,
	BLEND_AlphaHoldout                                                               = 6
};

/// Enum /Script/Engine.EOcclusionCombineMode
/// Size: 0x01 (1 bytes)
enum class EOcclusionCombineMode : uint8_t
{
	OCM_Minimum                                                                      = 0,
	OCM_Multiply                                                                     = 1
};

/// Enum /Script/Engine.ELightmapType
/// Size: 0x01 (1 bytes)
enum class ELightmapType : uint8_t
{
	ELightmapType__Default                                                           = 0,
	ELightmapType__ForceSurface                                                      = 1,
	ELightmapType__ForceVolumetric                                                   = 2
};

/// Enum /Script/Engine.EIndirectLightingCacheQuality
/// Size: 0x01 (1 bytes)
enum class EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off                                                                         = 0,
	ILCQ_Point                                                                       = 1,
	ILCQ_Volume                                                                      = 2
};

/// Enum /Script/Engine.ESceneDepthPriorityGroup
/// Size: 0x01 (1 bytes)
enum class ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World                                                                       = 0,
	SDPG_Foreground                                                                  = 1
};

/// Enum /Script/Engine.EAspectRatioAxisConstraint
/// Size: 0x01 (1 bytes)
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV                                                         = 0,
	AspectRatio_MaintainXFOV                                                         = 1,
	AspectRatio_MajorAxisFOV                                                         = 2
};

/// Enum /Script/Engine.EFontCacheType
/// Size: 0x01 (1 bytes)
enum class EFontCacheType : uint8_t
{
	EFontCacheType__Offline                                                          = 0,
	EFontCacheType__Runtime                                                          = 1
};

/// Enum /Script/Engine.EFontImportCharacterSet
/// Size: 0x01 (1 bytes)
enum class EFontImportCharacterSet : uint8_t
{
	FontICS_Default                                                                  = 0,
	FontICS_Ansi                                                                     = 1,
	FontICS_Symbol                                                                   = 2
};

/// Enum /Script/Engine.EStandbyType
/// Size: 0x01 (1 bytes)
enum class EStandbyType : uint8_t
{
	STDBY_Rx                                                                         = 0,
	STDBY_Tx                                                                         = 1,
	STDBY_BadPing                                                                    = 2
};

/// Enum /Script/Engine.ESuggestProjVelocityTraceOption
/// Size: 0x01 (1 bytes)
enum class ESuggestProjVelocityTraceOption : uint8_t
{
	ESuggestProjVelocityTraceOption__DoNotTrace                                      = 0,
	ESuggestProjVelocityTraceOption__TraceFullPath                                   = 1,
	ESuggestProjVelocityTraceOption__OnlyTraceWhileAscending                         = 2
};

/// Enum /Script/Engine.EWindowMode
/// Size: 0x01 (1 bytes)
enum class EWindowMode : uint8_t
{
	EWindowMode__Fullscreen                                                          = 0,
	EWindowMode__WindowedFullscreen                                                  = 1,
	EWindowMode__Windowed                                                            = 2
};

/// Enum /Script/Engine.EHitProxyPriority
/// Size: 0x01 (1 bytes)
enum class EHitProxyPriority : uint8_t
{
	HPP_World                                                                        = 0,
	HPP_Wireframe                                                                    = 1,
	HPP_Foreground                                                                   = 2,
	HPP_UI                                                                           = 3
};

/// Enum /Script/Engine.EImportanceWeight
/// Size: 0x01 (1 bytes)
enum class EImportanceWeight : uint8_t
{
	EImportanceWeight__Luminance                                                     = 0,
	EImportanceWeight__Red                                                           = 1,
	EImportanceWeight__Green                                                         = 2,
	EImportanceWeight__Blue                                                          = 3,
	EImportanceWeight__Alpha                                                         = 4
};

/// Enum /Script/Engine.EAdManagerDelegate
/// Size: 0x01 (1 bytes)
enum class EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner                                                                = 0,
	AMD_UserClosedAd                                                                 = 1
};

/// Enum /Script/Engine.EControllerAnalogStick
/// Size: 0x01 (1 bytes)
enum class EControllerAnalogStick : uint8_t
{
	EControllerAnalogStick__CAS_LeftStick                                            = 0,
	EControllerAnalogStick__CAS_RightStick                                           = 1
};

/// Enum /Script/Engine.EAnimAlphaInputType
/// Size: 0x01 (1 bytes)
enum class EAnimAlphaInputType : uint8_t
{
	EAnimAlphaInputType__Float                                                       = 0,
	EAnimAlphaInputType__Bool                                                        = 1,
	EAnimAlphaInputType__Curve                                                       = 2
};

/// Enum /Script/Engine.ETrackActiveCondition
/// Size: 0x01 (1 bytes)
enum class ETrackActiveCondition : uint8_t
{
	ETAC_Always                                                                      = 0,
	ETAC_GoreEnabled                                                                 = 1,
	ETAC_GoreDisabled                                                                = 2
};

/// Enum /Script/Engine.EInterpTrackMoveRotMode
/// Size: 0x01 (1 bytes)
enum class EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                                                                    = 0,
	IMR_LookAtGroup                                                                  = 1,
	IMR_Ignore                                                                       = 2
};

/// Enum /Script/Engine.EInterpMoveAxis
/// Size: 0x01 (1 bytes)
enum class EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX                                                                = 0,
	AXIS_TranslationY                                                                = 1,
	AXIS_TranslationZ                                                                = 2,
	AXIS_RotationX                                                                   = 3,
	AXIS_RotationY                                                                   = 4,
	AXIS_RotationZ                                                                   = 5
};

/// Enum /Script/Engine.ETrackToggleAction
/// Size: 0x01 (1 bytes)
enum class ETrackToggleAction : uint8_t
{
	ETTA_Off                                                                         = 0,
	ETTA_On                                                                          = 1,
	ETTA_Toggle                                                                      = 2,
	ETTA_Trigger                                                                     = 3
};

/// Enum /Script/Engine.EVisibilityTrackCondition
/// Size: 0x01 (1 bytes)
enum class EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                                                                      = 0,
	EVTC_GoreEnabled                                                                 = 1,
	EVTC_GoreDisabled                                                                = 2
};

/// Enum /Script/Engine.EVisibilityTrackAction
/// Size: 0x01 (1 bytes)
enum class EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                                                                        = 0,
	EVTA_Show                                                                        = 1,
	EVTA_Toggle                                                                      = 2
};

/// Enum /Script/Engine.ESlateGesture
/// Size: 0x01 (1 bytes)
enum class ESlateGesture : uint8_t
{
	ESlateGesture__None                                                              = 0,
	ESlateGesture__Scroll                                                            = 1,
	ESlateGesture__Magnify                                                           = 2,
	ESlateGesture__Swipe                                                             = 3,
	ESlateGesture__Rotate                                                            = 4,
	ESlateGesture__LongPress                                                         = 5
};

/// Enum /Script/Engine.EMIDCreationFlags
/// Size: 0x01 (1 bytes)
enum class EMIDCreationFlags : uint8_t
{
	EMIDCreationFlags__None                                                          = 0,
	EMIDCreationFlags__Transient                                                     = 1
};

/// Enum /Script/Engine.EMatrixColumns
/// Size: 0x01 (1 bytes)
enum class EMatrixColumns : uint8_t
{
	EMatrixColumns__First                                                            = 0,
	EMatrixColumns__Second                                                           = 1,
	EMatrixColumns__Third                                                            = 2,
	EMatrixColumns__Fourth                                                           = 3
};

/// Enum /Script/Engine.ELerpInterpolationMode
/// Size: 0x01 (1 bytes)
enum class ELerpInterpolationMode : uint8_t
{
	ELerpInterpolationMode__QuatInterp                                               = 0,
	ELerpInterpolationMode__EulerInterp                                              = 1,
	ELerpInterpolationMode__DualQuatInterp                                           = 2
};

/// Enum /Script/Engine.EEasingFunc
/// Size: 0x01 (1 bytes)
enum class EEasingFunc : uint8_t
{
	EEasingFunc__Linear                                                              = 0,
	EEasingFunc__Step                                                                = 1,
	EEasingFunc__SinusoidalIn                                                        = 2,
	EEasingFunc__SinusoidalOut                                                       = 3,
	EEasingFunc__SinusoidalInOut                                                     = 4,
	EEasingFunc__EaseIn                                                              = 5,
	EEasingFunc__EaseOut                                                             = 6,
	EEasingFunc__EaseInOut                                                           = 7,
	EEasingFunc__ExpoIn                                                              = 8,
	EEasingFunc__ExpoOut                                                             = 9,
	EEasingFunc__ExpoInOut                                                           = 10,
	EEasingFunc__CircularIn                                                          = 11,
	EEasingFunc__CircularOut                                                         = 12,
	EEasingFunc__CircularInOut                                                       = 13
};

/// Enum /Script/Engine.ERoundingMode
/// Size: 0x01 (1 bytes)
enum class ERoundingMode : uint8_t
{
	HalfToEven                                                                       = 0,
	HalfFromZero                                                                     = 1,
	HalfToZero                                                                       = 2,
	FromZero                                                                         = 3,
	ToZero                                                                           = 4,
	ToNegativeInfinity                                                               = 5,
	ToPositiveInfinity                                                               = 6
};

/// Enum /Script/Engine.EStreamingVolumeUsage
/// Size: 0x01 (1 bytes)
enum class EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                                                                      = 0,
	SVB_LoadingAndVisibility                                                         = 1,
	SVB_VisibilityBlockingOnLoad                                                     = 2,
	SVB_BlockingOnLoad                                                               = 3,
	SVB_LoadingNotVisible                                                            = 4
};

/// Enum /Script/Engine.ESyncOption
/// Size: 0x01 (1 bytes)
enum class ESyncOption : uint8_t
{
	ESyncOption__Drive                                                               = 0,
	ESyncOption__Passive                                                             = 1,
	ESyncOption__Disabled                                                            = 2
};

/// Enum /Script/Engine.EMaterialDecalResponse
/// Size: 0x01 (1 bytes)
enum class EMaterialDecalResponse : uint8_t
{
	MDR_None                                                                         = 0,
	MDR_ColorNormalRoughness                                                         = 1,
	MDR_Color                                                                        = 2,
	MDR_ColorNormal                                                                  = 3,
	MDR_ColorRoughness                                                               = 4,
	MDR_Normal                                                                       = 5,
	MDR_NormalRoughness                                                              = 6,
	MDR_Roughness                                                                    = 7
};

/// Enum /Script/Engine.EDecalBlendMode
/// Size: 0x01 (1 bytes)
enum class EDecalBlendMode : uint8_t
{
	DBM_Translucent                                                                  = 0,
	DBM_Stain                                                                        = 1,
	DBM_Normal                                                                       = 2,
	DBM_Emissive                                                                     = 3,
	DBM_DBuffer_ColorNormalRoughness                                                 = 4,
	DBM_DBuffer_Color                                                                = 5,
	DBM_DBuffer_ColorNormal                                                          = 6,
	DBM_DBuffer_ColorRoughness                                                       = 7,
	DBM_DBuffer_Normal                                                               = 8,
	DBM_DBuffer_NormalRoughness                                                      = 9,
	DBM_DBuffer_Roughness                                                            = 10,
	DBM_DBuffer_Emissive                                                             = 11,
	DBM_DBuffer_AlphaComposite                                                       = 12,
	DBM_DBuffer_EmissiveAlphaComposite                                               = 13,
	DBM_Volumetric_DistanceFunction                                                  = 14,
	DBM_AlphaComposite                                                               = 15,
	DBM_AmbientOcclusion                                                             = 16
};

/// Enum /Script/Engine.ETextureColorChannel
/// Size: 0x01 (1 bytes)
enum class ETextureColorChannel : uint8_t
{
	TCC_Red                                                                          = 0,
	TCC_Green                                                                        = 1,
	TCC_Blue                                                                         = 2,
	TCC_Alpha                                                                        = 3
};

/// Enum /Script/Engine.EMaterialAttributeBlend
/// Size: 0x01 (1 bytes)
enum class EMaterialAttributeBlend : uint8_t
{
	EMaterialAttributeBlend__Blend                                                   = 0,
	EMaterialAttributeBlend__UseA                                                    = 1,
	EMaterialAttributeBlend__UseB                                                    = 2
};

/// Enum /Script/Engine.EChannelMaskParameterColor
/// Size: 0x01 (1 bytes)
enum class EChannelMaskParameterColor : uint8_t
{
	EChannelMaskParameterColor__Red                                                  = 0,
	EChannelMaskParameterColor__Green                                                = 1,
	EChannelMaskParameterColor__Blue                                                 = 2,
	EChannelMaskParameterColor__Alpha                                                = 3
};

/// Enum /Script/Engine.EClampMode
/// Size: 0x01 (1 bytes)
enum class EClampMode : uint8_t
{
	CMODE_Clamp                                                                      = 0,
	CMODE_ClampMin                                                                   = 1,
	CMODE_ClampMax                                                                   = 2
};

/// Enum /Script/Engine.ECustomMaterialOutputType
/// Size: 0x01 (1 bytes)
enum class ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                                                                      = 0,
	CMOT_Float2                                                                      = 1,
	CMOT_Float3                                                                      = 2,
	CMOT_Float4                                                                      = 3,
	CMOT_MaterialAttributes                                                          = 4
};

/// Enum /Script/Engine.EDepthOfFieldFunctionValue
/// Size: 0x01 (1 bytes)
enum class EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask                                                              = 0,
	TDOF_NearMask                                                                    = 1,
	TDOF_FarMask                                                                     = 2,
	TDOF_CircleOfConfusionRadius                                                     = 3
};

/// Enum /Script/Engine.EFunctionInputType
/// Size: 0x01 (1 bytes)
enum class EFunctionInputType : uint8_t
{
	FunctionInput_Scalar                                                             = 0,
	FunctionInput_Vector2                                                            = 1,
	FunctionInput_Vector3                                                            = 2,
	FunctionInput_Vector4                                                            = 3,
	FunctionInput_Texture2D                                                          = 4,
	FunctionInput_TextureCube                                                        = 5,
	FunctionInput_Texture2DArray                                                     = 6,
	FunctionInput_VolumeTexture                                                      = 7,
	FunctionInput_StaticBool                                                         = 8,
	FunctionInput_MaterialAttributes                                                 = 9,
	FunctionInput_TextureExternal                                                    = 10
};

/// Enum /Script/Engine.ENoiseFunction
/// Size: 0x01 (1 bytes)
enum class ENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex                                                         = 0,
	NOISEFUNCTION_GradientTex                                                        = 1,
	NOISEFUNCTION_GradientTex3D                                                      = 2,
	NOISEFUNCTION_GradientALU                                                        = 3,
	NOISEFUNCTION_ValueALU                                                           = 4,
	NOISEFUNCTION_VoronoiALU                                                         = 5
};

/// Enum /Script/Engine.ERuntimeVirtualTextureTextureAddressMode
/// Size: 0x01 (1 bytes)
enum class ERuntimeVirtualTextureTextureAddressMode : uint8_t
{
	RVTTA_Clamp                                                                      = 0,
	RVTTA_Wrap                                                                       = 1
};

/// Enum /Script/Engine.ERuntimeVirtualTextureMipValueMode
/// Size: 0x01 (1 bytes)
enum class ERuntimeVirtualTextureMipValueMode : uint8_t
{
	RVTMVM_None                                                                      = 0,
	RVTMVM_MipLevel                                                                  = 1,
	RVTMVM_MipBias                                                                   = 2
};

/// Enum /Script/Engine.EMaterialSceneAttributeInputMode
/// Size: 0x01 (1 bytes)
enum class EMaterialSceneAttributeInputMode : uint8_t
{
	EMaterialSceneAttributeInputMode__Coordinates                                    = 0,
	EMaterialSceneAttributeInputMode__OffsetFraction                                 = 1
};

/// Enum /Script/Engine.ESpeedTreeLODType
/// Size: 0x01 (1 bytes)
enum class ESpeedTreeLODType : uint8_t
{
	STLOD_Pop                                                                        = 0,
	STLOD_Smooth                                                                     = 1
};

/// Enum /Script/Engine.ESpeedTreeWindType
/// Size: 0x01 (1 bytes)
enum class ESpeedTreeWindType : uint8_t
{
	STW_None                                                                         = 0,
	STW_Fastest                                                                      = 1,
	STW_Fast                                                                         = 2,
	STW_Better                                                                       = 3,
	STW_Best                                                                         = 4,
	STW_Palm                                                                         = 5,
	STW_BestPlus                                                                     = 6
};

/// Enum /Script/Engine.ESpeedTreeGeometryType
/// Size: 0x01 (1 bytes)
enum class ESpeedTreeGeometryType : uint8_t
{
	STG_Branch                                                                       = 0,
	STG_Frond                                                                        = 1,
	STG_Leaf                                                                         = 2,
	STG_FacingLeaf                                                                   = 3,
	STG_Billboard                                                                    = 4
};

/// Enum /Script/Engine.EMaterialExposedTextureProperty
/// Size: 0x01 (1 bytes)
enum class EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize                                                                 = 0,
	TMTM_TexelSize                                                                   = 1
};

/// Enum /Script/Engine.ETextureMipValueMode
/// Size: 0x01 (1 bytes)
enum class ETextureMipValueMode : uint8_t
{
	TMVM_None                                                                        = 0,
	TMVM_MipLevel                                                                    = 1,
	TMVM_MipBias                                                                     = 2,
	TMVM_Derivative                                                                  = 3
};

/// Enum /Script/Engine.EMaterialVectorCoordTransform
/// Size: 0x01 (1 bytes)
enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent                                                                = 0,
	TRANSFORM_Local                                                                  = 1,
	TRANSFORM_World                                                                  = 2,
	TRANSFORM_View                                                                   = 3,
	TRANSFORM_Camera                                                                 = 4,
	TRANSFORM_ParticleWorld                                                          = 5
};

/// Enum /Script/Engine.EMaterialVectorCoordTransformSource
/// Size: 0x01 (1 bytes)
enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent                                                          = 0,
	TRANSFORMSOURCE_Local                                                            = 1,
	TRANSFORMSOURCE_World                                                            = 2,
	TRANSFORMSOURCE_View                                                             = 3,
	TRANSFORMSOURCE_Camera                                                           = 4,
	TRANSFORMSOURCE_ParticleWorld                                                    = 5
};

/// Enum /Script/Engine.EMaterialPositionTransformSource
/// Size: 0x01 (1 bytes)
enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local                                                         = 0,
	TRANSFORMPOSSOURCE_World                                                         = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld                                               = 2,
	TRANSFORMPOSSOURCE_View                                                          = 3,
	TRANSFORMPOSSOURCE_Camera                                                        = 4,
	TRANSFORMPOSSOURCE_Particle                                                      = 5
};

/// Enum /Script/Engine.EVectorNoiseFunction
/// Size: 0x01 (1 bytes)
enum class EVectorNoiseFunction : uint8_t
{
	VNF_CellnoiseALU                                                                 = 0,
	VNF_VectorALU                                                                    = 1,
	VNF_GradientALU                                                                  = 2,
	VNF_CurlALU                                                                      = 3,
	VNF_VoronoiALU                                                                   = 4
};

/// Enum /Script/Engine.EMaterialExposedViewProperty
/// Size: 0x01 (1 bytes)
enum class EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize                                                                  = 0,
	MEVP_FieldOfView                                                                 = 1,
	MEVP_TanHalfFieldOfView                                                          = 2,
	MEVP_ViewSize                                                                    = 3,
	MEVP_WorldSpaceViewPosition                                                      = 4,
	MEVP_WorldSpaceCameraPosition                                                    = 5,
	MEVP_ViewportOffset                                                              = 6,
	MEVP_TemporalSampleCount                                                         = 7,
	MEVP_TemporalSampleIndex                                                         = 8,
	MEVP_TemporalSampleOffset                                                        = 9,
	MEVP_RuntimeVirtualTextureOutputLevel                                            = 10,
	MEVP_RuntimeVirtualTextureOutputDerivative                                       = 11,
	MEVP_PreExposure                                                                 = 12,
	MEVP_RuntimeVirtualTextureMaxLevel                                               = 13
};

/// Enum /Script/Engine.EWorldPositionIncludedOffsets
/// Size: 0x01 (1 bytes)
enum class EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default                                                                      = 0,
	WPT_ExcludeAllShaderOffsets                                                      = 1,
	WPT_CameraRelative                                                               = 2,
	WPT_CameraRelativeNoOffsets                                                      = 3
};

/// Enum /Script/Engine.EMaterialFunctionUsage
/// Size: 0x01 (1 bytes)
enum class EMaterialFunctionUsage : uint8_t
{
	EMaterialFunctionUsage__Default                                                  = 0,
	EMaterialFunctionUsage__MaterialLayer                                            = 1,
	EMaterialFunctionUsage__MaterialLayerBlend                                       = 2
};

/// Enum /Script/Engine.EMaterialUsage
/// Size: 0x01 (1 bytes)
enum class EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh                                                            = 0,
	MATUSAGE_ParticleSprites                                                         = 1,
	MATUSAGE_BeamTrails                                                              = 2,
	MATUSAGE_MeshParticles                                                           = 3,
	MATUSAGE_StaticLighting                                                          = 4,
	MATUSAGE_MorphTargets                                                            = 5,
	MATUSAGE_SplineMesh                                                              = 6,
	MATUSAGE_InstancedStaticMeshes                                                   = 7,
	MATUSAGE_GeometryCollections                                                     = 8,
	MATUSAGE_Clothing                                                                = 9,
	MATUSAGE_NiagaraSprites                                                          = 10,
	MATUSAGE_NiagaraRibbons                                                          = 11,
	MATUSAGE_NiagaraMeshParticles                                                    = 12,
	MATUSAGE_GeometryCache                                                           = 13,
	MATUSAGE_Water                                                                   = 14,
	MATUSAGE_HairStrands                                                             = 15,
	MATUSAGE_LidarPointCloud                                                         = 16,
	MATUSAGE_VirtualHeightfieldMesh                                                  = 17
};

/// Enum /Script/Engine.EMaterialLayerLinkState
/// Size: 0x01 (1 bytes)
enum class EMaterialLayerLinkState : uint8_t
{
	EMaterialLayerLinkState__Uninitialized                                           = 0,
	EMaterialLayerLinkState__LinkedToParent                                          = 1,
	EMaterialLayerLinkState__UnlinkedFromParent                                      = 2,
	EMaterialLayerLinkState__NotFromParent                                           = 3
};

/// Enum /Script/Engine.EMaterialParameterAssociation
/// Size: 0x01 (1 bytes)
enum class EMaterialParameterAssociation : uint8_t
{
	LayerParameter                                                                   = 0,
	BlendParameter                                                                   = 1,
	GlobalParameter                                                                  = 2
};

/// Enum /Script/Engine.EMaterialMergeType
/// Size: 0x01 (1 bytes)
enum class EMaterialMergeType : uint8_t
{
	MaterialMergeType_Default                                                        = 0,
	MaterialMergeType_Simplygon                                                      = 1
};

/// Enum /Script/Engine.ETextureSizingType
/// Size: 0x01 (1 bytes)
enum class ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize                                           = 0,
	TextureSizingType_UseAutomaticBiasedSizes                                        = 1,
	TextureSizingType_UseManualOverrideTextureSize                                   = 2,
	TextureSizingType_UseSimplygonAutomaticSizing                                    = 3
};

/// Enum /Script/Engine.ESceneTextureId
/// Size: 0x01 (1 bytes)
enum class ESceneTextureId : uint8_t
{
	PPI_SceneColor                                                                   = 0,
	PPI_SceneDepth                                                                   = 1,
	PPI_DiffuseColor                                                                 = 2,
	PPI_SpecularColor                                                                = 3,
	PPI_SubsurfaceColor                                                              = 4,
	PPI_BaseColor                                                                    = 5,
	PPI_Specular                                                                     = 6,
	PPI_Metallic                                                                     = 7,
	PPI_WorldNormal                                                                  = 8,
	PPI_SeparateTranslucency                                                         = 9,
	PPI_Opacity                                                                      = 10,
	PPI_Roughness                                                                    = 11,
	PPI_MaterialAO                                                                   = 12,
	PPI_CustomDepth                                                                  = 13,
	PPI_PostProcessInput0                                                            = 14,
	PPI_PostProcessInput1                                                            = 15,
	PPI_PostProcessInput2                                                            = 16,
	PPI_PostProcessInput3                                                            = 17,
	PPI_PostProcessInput4                                                            = 18,
	PPI_PostProcessInput5                                                            = 19,
	PPI_PostProcessInput6                                                            = 20,
	PPI_DecalMask                                                                    = 21,
	PPI_ShadingModelColor                                                            = 22,
	PPI_ShadingModelID                                                               = 23,
	PPI_AmbientOcclusion                                                             = 24,
	PPI_CustomStencil                                                                = 25,
	PPI_StoredBaseColor                                                              = 26,
	PPI_StoredSpecular                                                               = 27,
	PPI_Velocity                                                                     = 28,
	PPI_WorldTangent                                                                 = 29,
	PPI_Anisotropy                                                                   = 30
};

/// Enum /Script/Engine.EMaterialDomain
/// Size: 0x01 (1 bytes)
enum class EMaterialDomain : uint8_t
{
	MD_Surface                                                                       = 0,
	MD_DeferredDecal                                                                 = 1,
	MD_LightFunction                                                                 = 2,
	MD_Volume                                                                        = 3,
	MD_PostProcess                                                                   = 4,
	MD_UI                                                                            = 5,
	MD_RuntimeVirtualTexture                                                         = 6
};

/// Enum /Script/Engine.EMeshInstancingReplacementMethod
/// Size: 0x01 (1 bytes)
enum class EMeshInstancingReplacementMethod : uint8_t
{
	EMeshInstancingReplacementMethod__RemoveOriginalActors                           = 0,
	EMeshInstancingReplacementMethod__KeepOriginalActorsAsEditorOnly                 = 1
};

/// Enum /Script/Engine.EUVOutput
/// Size: 0x01 (1 bytes)
enum class EUVOutput : uint8_t
{
	EUVOutput__DoNotOutputChannel                                                    = 0,
	EUVOutput__OutputChannel                                                         = 1
};

/// Enum /Script/Engine.EMeshMergeType
/// Size: 0x01 (1 bytes)
enum class EMeshMergeType : uint8_t
{
	EMeshMergeType__MeshMergeType_Default                                            = 0,
	EMeshMergeType__MeshMergeType_MergeActor                                         = 1
};

/// Enum /Script/Engine.EMeshLODSelectionType
/// Size: 0x01 (1 bytes)
enum class EMeshLODSelectionType : uint8_t
{
	EMeshLODSelectionType__AllLODs                                                   = 0,
	EMeshLODSelectionType__SpecificLOD                                               = 1,
	EMeshLODSelectionType__CalculateLOD                                              = 2,
	EMeshLODSelectionType__LowestDetailLOD                                           = 3
};

/// Enum /Script/Engine.EProxyNormalComputationMethod
/// Size: 0x01 (1 bytes)
enum class EProxyNormalComputationMethod : uint8_t
{
	EProxyNormalComputationMethod__AngleWeighted                                     = 0,
	EProxyNormalComputationMethod__AreaWeighted                                      = 1,
	EProxyNormalComputationMethod__EqualWeighted                                     = 2
};

/// Enum /Script/Engine.ELandscapeCullingPrecision
/// Size: 0x01 (1 bytes)
enum class ELandscapeCullingPrecision : uint8_t
{
	ELandscapeCullingPrecision__High                                                 = 0,
	ELandscapeCullingPrecision__Medium                                               = 1,
	ELandscapeCullingPrecision__Low                                                  = 2
};

/// Enum /Script/Engine.EStaticMeshReductionTerimationCriterion
/// Size: 0x01 (1 bytes)
enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
	EStaticMeshReductionTerimationCriterion__Triangles                               = 0,
	EStaticMeshReductionTerimationCriterion__Vertices                                = 1,
	EStaticMeshReductionTerimationCriterion__Any                                     = 2
};

/// Enum /Script/Engine.EMeshFeatureImportance
/// Size: 0x01 (1 bytes)
enum class EMeshFeatureImportance : uint8_t
{
	EMeshFeatureImportance__Off                                                      = 0,
	EMeshFeatureImportance__Lowest                                                   = 1,
	EMeshFeatureImportance__Low                                                      = 2,
	EMeshFeatureImportance__Normal                                                   = 3,
	EMeshFeatureImportance__High                                                     = 4,
	EMeshFeatureImportance__Highest                                                  = 5
};

/// Enum /Script/Engine.EVertexPaintAxis
/// Size: 0x01 (1 bytes)
enum class EVertexPaintAxis : uint8_t
{
	EVertexPaintAxis__X                                                              = 0,
	EVertexPaintAxis__Y                                                              = 1,
	EVertexPaintAxis__Z                                                              = 2
};

/// Enum /Script/Engine.EMicroTransactionResult
/// Size: 0x01 (1 bytes)
enum class EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                                                                    = 0,
	MTR_Failed                                                                       = 1,
	MTR_Canceled                                                                     = 2,
	MTR_RestoredFromServer                                                           = 3
};

/// Enum /Script/Engine.EMicroTransactionDelegate
/// Size: 0x01 (1 bytes)
enum class EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete                                                        = 0,
	MTD_PurchaseComplete                                                             = 1
};

/// Enum /Script/Engine.FNavigationSystemRunMode
/// Size: 0x01 (1 bytes)
enum class FNavigationSystemRunMode : uint8_t
{
	FNavigationSystemRunMode__InvalidMode                                            = 0,
	FNavigationSystemRunMode__GameMode                                               = 1,
	FNavigationSystemRunMode__EditorMode                                             = 2,
	FNavigationSystemRunMode__SimulationMode                                         = 3,
	FNavigationSystemRunMode__PIEMode                                                = 4,
	FNavigationSystemRunMode__InferFromWorldMode                                     = 5
};

/// Enum /Script/Engine.ENavigationQueryResult
/// Size: 0x01 (1 bytes)
enum class ENavigationQueryResult : uint8_t
{
	ENavigationQueryResult__Invalid                                                  = 0,
	ENavigationQueryResult__Error                                                    = 1,
	ENavigationQueryResult__Fail                                                     = 2,
	ENavigationQueryResult__Success                                                  = 3
};

/// Enum /Script/Engine.ENavPathEvent
/// Size: 0x01 (1 bytes)
enum class ENavPathEvent : uint8_t
{
	ENavPathEvent__Cleared                                                           = 0,
	ENavPathEvent__NewPath                                                           = 1,
	ENavPathEvent__UpdatedDueToGoalMoved                                             = 2,
	ENavPathEvent__UpdatedDueToNavigationChanged                                     = 3,
	ENavPathEvent__Invalidated                                                       = 4,
	ENavPathEvent__RePathFailed                                                      = 5,
	ENavPathEvent__MetaPathUpdate                                                    = 6,
	ENavPathEvent__Custom                                                            = 7
};

/// Enum /Script/Engine.ENavDataGatheringModeConfig
/// Size: 0x01 (1 bytes)
enum class ENavDataGatheringModeConfig : uint8_t
{
	ENavDataGatheringModeConfig__Invalid                                             = 0,
	ENavDataGatheringModeConfig__Instant                                             = 1,
	ENavDataGatheringModeConfig__Lazy                                                = 2
};

/// Enum /Script/Engine.ENavDataGatheringMode
/// Size: 0x01 (1 bytes)
enum class ENavDataGatheringMode : uint8_t
{
	ENavDataGatheringMode__Default                                                   = 0,
	ENavDataGatheringMode__Instant                                                   = 1,
	ENavDataGatheringMode__Lazy                                                      = 2
};

/// Enum /Script/Engine.ENavigationOptionFlag
/// Size: 0x01 (1 bytes)
enum class ENavigationOptionFlag : uint8_t
{
	ENavigationOptionFlag__Default                                                   = 0,
	ENavigationOptionFlag__Enable                                                    = 1,
	ENavigationOptionFlag__Disable                                                   = 2
};

/// Enum /Script/Engine.ENavLinkDirection
/// Size: 0x01 (1 bytes)
enum class ENavLinkDirection : uint8_t
{
	ENavLinkDirection__BothWays                                                      = 0,
	ENavLinkDirection__LeftToRight                                                   = 1,
	ENavLinkDirection__RightToLeft                                                   = 2
};

/// Enum /Script/Engine.EFastArraySerializerDeltaFlags
/// Size: 0x01 (1 bytes)
enum class EFastArraySerializerDeltaFlags : uint8_t
{
	EFastArraySerializerDeltaFlags__None                                             = 0,
	EFastArraySerializerDeltaFlags__HasBeenSerialized                                = 1,
	EFastArraySerializerDeltaFlags__HasDeltaBeenRequested                            = 2,
	EFastArraySerializerDeltaFlags__IsUsingDeltaSerialization                        = 4
};

/// Enum /Script/Engine.EEmitterRenderMode
/// Size: 0x01 (1 bytes)
enum class EEmitterRenderMode : uint8_t
{
	ERM_Normal                                                                       = 0,
	ERM_Point                                                                        = 1,
	ERM_Cross                                                                        = 2,
	ERM_LightsOnly                                                                   = 3,
	ERM_None                                                                         = 4
};

/// Enum /Script/Engine.EParticleSubUVInterpMethod
/// Size: 0x01 (1 bytes)
enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                                                                      = 0,
	PSUVIM_Linear                                                                    = 1,
	PSUVIM_Linear_Blend                                                              = 2,
	PSUVIM_Random                                                                    = 3,
	PSUVIM_Random_Blend                                                              = 4
};

/// Enum /Script/Engine.EParticleBurstMethod
/// Size: 0x01 (1 bytes)
enum class EParticleBurstMethod : uint8_t
{
	EPBM_Instant                                                                     = 0,
	EPBM_Interpolated                                                                = 1
};

/// Enum /Script/Engine.EParticleSystemInsignificanceReaction
/// Size: 0x01 (1 bytes)
enum class EParticleSystemInsignificanceReaction : uint8_t
{
	EParticleSystemInsignificanceReaction__Auto                                      = 0,
	EParticleSystemInsignificanceReaction__Complete                                  = 1,
	EParticleSystemInsignificanceReaction__DisableTick                               = 2,
	EParticleSystemInsignificanceReaction__DisableTickAndKill                        = 3,
	EParticleSystemInsignificanceReaction__Num                                       = 4
};

/// Enum /Script/Engine.EParticleSignificanceLevel
/// Size: 0x01 (1 bytes)
enum class EParticleSignificanceLevel : uint8_t
{
	EParticleSignificanceLevel__Low                                                  = 0,
	EParticleSignificanceLevel__Medium                                               = 1,
	EParticleSignificanceLevel__High                                                 = 2,
	EParticleSignificanceLevel__Critical                                             = 3,
	EParticleSignificanceLevel__Num                                                  = 4
};

/// Enum /Script/Engine.EParticleDetailMode
/// Size: 0x01 (1 bytes)
enum class EParticleDetailMode : uint8_t
{
	PDM_Low                                                                          = 0,
	PDM_Medium                                                                       = 1,
	PDM_High                                                                         = 2
};

/// Enum /Script/Engine.EParticleSourceSelectionMethod
/// Size: 0x01 (1 bytes)
enum class EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                                                                     = 0,
	EPSSM_Sequential                                                                 = 1
};

/// Enum /Script/Engine.EModuleType
/// Size: 0x01 (1 bytes)
enum class EModuleType : uint8_t
{
	EPMT_General                                                                     = 0,
	EPMT_TypeData                                                                    = 1,
	EPMT_Beam                                                                        = 2,
	EPMT_Trail                                                                       = 3,
	EPMT_Spawn                                                                       = 4,
	EPMT_Required                                                                    = 5,
	EPMT_Event                                                                       = 6,
	EPMT_Light                                                                       = 7,
	EPMT_SubUV                                                                       = 8
};

/// Enum /Script/Engine.EAttractorParticleSelectionMethod
/// Size: 0x01 (1 bytes)
enum class EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                                                                     = 0,
	EAPSM_Sequential                                                                 = 1
};

/// Enum /Script/Engine.Beam2SourceTargetTangentMethod
/// Size: 0x01 (1 bytes)
enum class Beam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                                                                  = 0,
	PEB2STTM_UserSet                                                                 = 1,
	PEB2STTM_Distribution                                                            = 2,
	PEB2STTM_Emitter                                                                 = 3
};

/// Enum /Script/Engine.Beam2SourceTargetMethod
/// Size: 0x01 (1 bytes)
enum class Beam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                                                                  = 0,
	PEB2STM_UserSet                                                                  = 1,
	PEB2STM_Emitter                                                                  = 2,
	PEB2STM_Particle                                                                 = 3,
	PEB2STM_Actor                                                                    = 4
};

/// Enum /Script/Engine.BeamModifierType
/// Size: 0x01 (1 bytes)
enum class BeamModifierType : uint8_t
{
	PEB2MT_Source                                                                    = 0,
	PEB2MT_Target                                                                    = 1
};

/// Enum /Script/Engine.EParticleCameraOffsetUpdateMethod
/// Size: 0x01 (1 bytes)
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet                                                                 = 0,
	EPCOUM_Additive                                                                  = 1,
	EPCOUM_Scalar                                                                    = 2
};

/// Enum /Script/Engine.EParticleCollisionComplete
/// Size: 0x01 (1 bytes)
enum class EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                                                                        = 0,
	EPCC_Freeze                                                                      = 1,
	EPCC_HaltCollisions                                                              = 2,
	EPCC_FreezeTranslation                                                           = 3,
	EPCC_FreezeRotation                                                              = 4,
	EPCC_FreezeMovement                                                              = 5
};

/// Enum /Script/Engine.EParticleCollisionResponse
/// Size: 0x01 (1 bytes)
enum class EParticleCollisionResponse : uint8_t
{
	EParticleCollisionResponse__Bounce                                               = 0,
	EParticleCollisionResponse__Stop                                                 = 1,
	EParticleCollisionResponse__Kill                                                 = 2
};

/// Enum /Script/Engine.ELocationBoneSocketSelectionMethod
/// Size: 0x01 (1 bytes)
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential                                                         = 0,
	BONESOCKETSEL_Random                                                             = 1
};

/// Enum /Script/Engine.ELocationBoneSocketSource
/// Size: 0x01 (1 bytes)
enum class ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones                                                           = 0,
	BONESOCKETSOURCE_Sockets                                                         = 1
};

/// Enum /Script/Engine.ELocationEmitterSelectionMethod
/// Size: 0x01 (1 bytes)
enum class ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                                                                     = 0,
	ELESM_Sequential                                                                 = 1
};

/// Enum /Script/Engine.CylinderHeightAxis
/// Size: 0x01 (1 bytes)
enum class CylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X                                                               = 0,
	PMLPC_HEIGHTAXIS_Y                                                               = 1,
	PMLPC_HEIGHTAXIS_Z                                                               = 2
};

/// Enum /Script/Engine.ELocationSkelVertSurfaceSource
/// Size: 0x01 (1 bytes)
enum class ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert                                                           = 0,
	VERTSURFACESOURCE_Surface                                                        = 1
};

/// Enum /Script/Engine.EOrbitChainMode
/// Size: 0x01 (1 bytes)
enum class EOrbitChainMode : uint8_t
{
	EOChainMode_Add                                                                  = 0,
	EOChainMode_Scale                                                                = 1,
	EOChainMode_Link                                                                 = 2
};

/// Enum /Script/Engine.EParticleAxisLock
/// Size: 0x01 (1 bytes)
enum class EParticleAxisLock : uint8_t
{
	EPAL_NONE                                                                        = 0,
	EPAL_X                                                                           = 1,
	EPAL_Y                                                                           = 2,
	EPAL_Z                                                                           = 3,
	EPAL_NEGATIVE_X                                                                  = 4,
	EPAL_NEGATIVE_Y                                                                  = 5,
	EPAL_NEGATIVE_Z                                                                  = 6,
	EPAL_ROTATE_X                                                                    = 7,
	EPAL_ROTATE_Y                                                                    = 8,
	EPAL_ROTATE_Z                                                                    = 9
};

/// Enum /Script/Engine.EEmitterDynamicParameterValue
/// Size: 0x01 (1 bytes)
enum class EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                                                                     = 0,
	EDPV_AutoSet                                                                     = 1,
	EDPV_VelocityX                                                                   = 2,
	EDPV_VelocityY                                                                   = 3,
	EDPV_VelocityZ                                                                   = 4,
	EDPV_VelocityMag                                                                 = 5
};

/// Enum /Script/Engine.EEmitterNormalsMode
/// Size: 0x01 (1 bytes)
enum class EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing                                                                 = 0,
	ENM_Spherical                                                                    = 1,
	ENM_Cylindrical                                                                  = 2
};

/// Enum /Script/Engine.EParticleSortMode
/// Size: 0x01 (1 bytes)
enum class EParticleSortMode : uint8_t
{
	PSORTMODE_None                                                                   = 0,
	PSORTMODE_ViewProjDepth                                                          = 1,
	PSORTMODE_DistanceToView                                                         = 2,
	PSORTMODE_Age_OldestFirst                                                        = 3,
	PSORTMODE_Age_NewestFirst                                                        = 4
};

/// Enum /Script/Engine.EParticleUVFlipMode
/// Size: 0x01 (1 bytes)
enum class EParticleUVFlipMode : uint8_t
{
	EParticleUVFlipMode__None                                                        = 0,
	EParticleUVFlipMode__FlipUV                                                      = 1,
	EParticleUVFlipMode__FlipUOnly                                                   = 2,
	EParticleUVFlipMode__FlipVOnly                                                   = 3,
	EParticleUVFlipMode__RandomFlipUV                                                = 4,
	EParticleUVFlipMode__RandomFlipUOnly                                             = 5,
	EParticleUVFlipMode__RandomFlipVOnly                                             = 6,
	EParticleUVFlipMode__RandomFlipUVIndependent                                     = 7
};

/// Enum /Script/Engine.ETrail2SourceMethod
/// Size: 0x01 (1 bytes)
enum class ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default                                                                 = 0,
	PET2SRCM_Particle                                                                = 1,
	PET2SRCM_Actor                                                                   = 2
};

/// Enum /Script/Engine.EBeamTaperMethod
/// Size: 0x01 (1 bytes)
enum class EBeamTaperMethod : uint8_t
{
	PEBTM_None                                                                       = 0,
	PEBTM_Full                                                                       = 1,
	PEBTM_Partial                                                                    = 2
};

/// Enum /Script/Engine.EBeam2Method
/// Size: 0x01 (1 bytes)
enum class EBeam2Method : uint8_t
{
	PEB2M_Distance                                                                   = 0,
	PEB2M_Target                                                                     = 1,
	PEB2M_Branch                                                                     = 2
};

/// Enum /Script/Engine.EMeshCameraFacingOptions
/// Size: 0x01 (1 bytes)
enum class EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp                                                                 = 0,
	XAxisFacing_ZUp                                                                  = 1,
	XAxisFacing_NegativeZUp                                                          = 2,
	XAxisFacing_YUp                                                                  = 3,
	XAxisFacing_NegativeYUp                                                          = 4,
	LockedAxis_ZAxisFacing                                                           = 5,
	LockedAxis_NegativeZAxisFacing                                                   = 6,
	LockedAxis_YAxisFacing                                                           = 7,
	LockedAxis_NegativeYAxisFacing                                                   = 8,
	VelocityAligned_ZAxisFacing                                                      = 9,
	VelocityAligned_NegativeZAxisFacing                                              = 10,
	VelocityAligned_YAxisFacing                                                      = 11,
	VelocityAligned_NegativeYAxisFacing                                              = 12
};

/// Enum /Script/Engine.EMeshCameraFacingUpAxis
/// Size: 0x01 (1 bytes)
enum class EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP                                                              = 0,
	CameraFacing_ZUp                                                                 = 1,
	CameraFacing_NegativeZUp                                                         = 2,
	CameraFacing_YUp                                                                 = 3,
	CameraFacing_NegativeYUp                                                         = 4
};

/// Enum /Script/Engine.EMeshScreenAlignment
/// Size: 0x01 (1 bytes)
enum class EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll                                                      = 0,
	PSMA_MeshFaceCameraWithSpin                                                      = 1,
	PSMA_MeshFaceCameraWithLockedAxis                                                = 2
};

/// Enum /Script/Engine.ETrailsRenderAxisOption
/// Size: 0x01 (1 bytes)
enum class ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                                                                  = 0,
	Trails_SourceUp                                                                  = 1,
	Trails_WorldUp                                                                   = 2
};

/// Enum /Script/Engine.EParticleScreenAlignment
/// Size: 0x01 (1 bytes)
enum class EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition                                                         = 0,
	PSA_Square                                                                       = 1,
	PSA_Rectangle                                                                    = 2,
	PSA_Velocity                                                                     = 3,
	PSA_AwayFromCenter                                                               = 4,
	PSA_TypeSpecific                                                                 = 5,
	PSA_FacingCameraDistanceBlend                                                    = 6
};

/// Enum /Script/Engine.EParticleSystemOcclusionBoundsMethod
/// Size: 0x01 (1 bytes)
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                                                                      = 0,
	EPSOBM_ParticleBounds                                                            = 1,
	EPSOBM_CustomBounds                                                              = 2
};

/// Enum /Script/Engine.ParticleSystemLODMethod
/// Size: 0x01 (1 bytes)
enum class ParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic                                                = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet                                                = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic                                        = 2
};

/// Enum /Script/Engine.EParticleSystemUpdateMode
/// Size: 0x01 (1 bytes)
enum class EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                                                                   = 0,
	EPSUM_FixedTime                                                                  = 1
};

/// Enum /Script/Engine.EParticleEventType
/// Size: 0x01 (1 bytes)
enum class EParticleEventType : uint8_t
{
	EPET_Any                                                                         = 0,
	EPET_Spawn                                                                       = 1,
	EPET_Death                                                                       = 2,
	EPET_Collision                                                                   = 3,
	EPET_Burst                                                                       = 4,
	EPET_Blueprint                                                                   = 5
};

/// Enum /Script/Engine.ParticleReplayState
/// Size: 0x01 (1 bytes)
enum class ParticleReplayState : uint8_t
{
	PRS_Disabled                                                                     = 0,
	PRS_Capturing                                                                    = 1,
	PRS_Replaying                                                                    = 2
};

/// Enum /Script/Engine.EParticleSysParamType
/// Size: 0x01 (1 bytes)
enum class EParticleSysParamType : uint8_t
{
	PSPT_None                                                                        = 0,
	PSPT_Scalar                                                                      = 1,
	PSPT_ScalarRand                                                                  = 2,
	PSPT_Vector                                                                      = 3,
	PSPT_VectorRand                                                                  = 4,
	PSPT_Color                                                                       = 5,
	PSPT_Actor                                                                       = 6,
	PSPT_Material                                                                    = 7,
	PSPT_VectorUnitRand                                                              = 8
};

/// Enum /Script/Engine.ESettingsLockedAxis
/// Size: 0x01 (1 bytes)
enum class ESettingsLockedAxis : uint8_t
{
	ESettingsLockedAxis__None                                                        = 0,
	ESettingsLockedAxis__X                                                           = 1,
	ESettingsLockedAxis__Y                                                           = 2,
	ESettingsLockedAxis__Z                                                           = 3,
	ESettingsLockedAxis__Invalid                                                     = 4
};

/// Enum /Script/Engine.ESettingsDOF
/// Size: 0x01 (1 bytes)
enum class ESettingsDOF : uint8_t
{
	ESettingsDOF__Full3D                                                             = 0,
	ESettingsDOF__YZPlane                                                            = 1,
	ESettingsDOF__XZPlane                                                            = 2,
	ESettingsDOF__XYPlane                                                            = 3
};

/// Enum /Script/Engine.EViewTargetBlendFunction
/// Size: 0x01 (1 bytes)
enum class EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                                                                   = 0,
	VTBlend_Cubic                                                                    = 1,
	VTBlend_EaseIn                                                                   = 2,
	VTBlend_EaseOut                                                                  = 3,
	VTBlend_EaseInOut                                                                = 4
};

/// Enum /Script/Engine.EDynamicForceFeedbackAction
/// Size: 0x01 (1 bytes)
enum class EDynamicForceFeedbackAction : uint8_t
{
	EDynamicForceFeedbackAction__Start                                               = 0,
	EDynamicForceFeedbackAction__Update                                              = 1,
	EDynamicForceFeedbackAction__Stop                                                = 2
};

/// Enum /Script/Engine.EMobileReflectionType
/// Size: 0x01 (1 bytes)
enum class EMobileReflectionType : uint8_t
{
	EMobileReflectionType__Default                                                   = 0,
	EMobileReflectionType__OnlySkyLight                                              = 1,
	EMobileReflectionType__OnlyDetail                                                = 2,
	EMobileReflectionType__SpecifiedCapture                                          = 3
};

/// Enum /Script/Engine.ERendererStencilMask
/// Size: 0x01 (1 bytes)
enum class ERendererStencilMask : uint8_t
{
	ERendererStencilMask__ERSM_Default                                               = 0,
	ERendererStencilMask__ERSM                                                       = 1,
	ERendererStencilMask__ERSM3                                                      = 2,
	ERendererStencilMask__ERSM4                                                      = 3,
	ERendererStencilMask__ERSM5                                                      = 4,
	ERendererStencilMask__ERSM6                                                      = 5,
	ERendererStencilMask__ERSM7                                                      = 6,
	ERendererStencilMask__ERSM8                                                      = 7,
	ERendererStencilMask__ERSM9                                                      = 8,
	ERendererStencilMask__ERSM10                                                     = 9
};

/// Enum /Script/Engine.EHasCustomNavigableGeometry
/// Size: 0x01 (1 bytes)
enum class EHasCustomNavigableGeometry : uint8_t
{
	EHasCustomNavigableGeometry__No                                                  = 0,
	EHasCustomNavigableGeometry__Yes                                                 = 1,
	EHasCustomNavigableGeometry__EvenIfNotCollidable                                 = 2,
	EHasCustomNavigableGeometry__DontExport                                          = 3
};

/// Enum /Script/Engine.ECanBeCharacterBase
/// Size: 0x01 (1 bytes)
enum class ECanBeCharacterBase : uint8_t
{
	ECB_No                                                                           = 0,
	ECB_Yes                                                                          = 1,
	ECB_Owner                                                                        = 2
};

/// Enum /Script/Engine.EQuarztQuantizationReference
/// Size: 0x01 (1 bytes)
enum class EQuarztQuantizationReference : uint8_t
{
	EQuarztQuantizationReference__BarRelative                                        = 0,
	EQuarztQuantizationReference__TransportRelative                                  = 1,
	EQuarztQuantizationReference__CurrentTimeRelative                                = 2,
	EQuarztQuantizationReference__Count                                              = 3
};

/// Enum /Script/Engine.EQuartzDelegateType
/// Size: 0x01 (1 bytes)
enum class EQuartzDelegateType : uint8_t
{
	EQuartzDelegateType__MetronomeTick                                               = 0,
	EQuartzDelegateType__CommandEvent                                                = 1,
	EQuartzDelegateType__Count                                                       = 2
};

/// Enum /Script/Engine.EQuartzTimeSignatureQuantization
/// Size: 0x01 (1 bytes)
enum class EQuartzTimeSignatureQuantization : uint8_t
{
	EQuartzTimeSignatureQuantization__HalfNote                                       = 0,
	EQuartzTimeSignatureQuantization__QuarterNote                                    = 1,
	EQuartzTimeSignatureQuantization__EighthNote                                     = 2,
	EQuartzTimeSignatureQuantization__SixteenthNote                                  = 3,
	EQuartzTimeSignatureQuantization__ThirtySecondNote                               = 4,
	EQuartzTimeSignatureQuantization__Count                                          = 5
};

/// Enum /Script/Engine.ERichCurveExtrapolation
/// Size: 0x01 (1 bytes)
enum class ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle                                                                       = 0,
	RCCE_CycleWithOffset                                                             = 1,
	RCCE_Oscillate                                                                   = 2,
	RCCE_Linear                                                                      = 3,
	RCCE_Constant                                                                    = 4,
	RCCE_None                                                                        = 5
};

/// Enum /Script/Engine.ERichCurveInterpMode
/// Size: 0x01 (1 bytes)
enum class ERichCurveInterpMode : uint8_t
{
	RCIM_Linear                                                                      = 0,
	RCIM_Constant                                                                    = 1,
	RCIM_Cubic                                                                       = 2,
	RCIM_None                                                                        = 3
};

/// Enum /Script/Engine.EMobileReflectionLevel
/// Size: 0x01 (1 bytes)
enum class EMobileReflectionLevel : uint8_t
{
	EMobileReflectionLevel__SkyLight                                                 = 0,
	EMobileReflectionLevel__Detail                                                   = 1
};

/// Enum /Script/Engine.EMobileReflectionCompression
/// Size: 0x01 (1 bytes)
enum class EMobileReflectionCompression : uint8_t
{
	EMobileReflectionCompression__Default                                            = 0,
	EMobileReflectionCompression__On                                                 = 1,
	EMobileReflectionCompression__Off                                                = 2
};

/// Enum /Script/Engine.EReflectionSourceType
/// Size: 0x01 (1 bytes)
enum class EReflectionSourceType : uint8_t
{
	EReflectionSourceType__CapturedScene                                             = 0,
	EReflectionSourceType__SpecifiedCubemap                                          = 1
};

/// Enum /Script/Engine.EDefaultBackBufferPixelFormat
/// Size: 0x01 (1 bytes)
enum class EDefaultBackBufferPixelFormat : uint8_t
{
	EDefaultBackBufferPixelFormat__DBBPF_B8G8R8A8                                    = 0,
	EDefaultBackBufferPixelFormat__DBBPF_A16B16G16R16_DEPRECATED                     = 1,
	EDefaultBackBufferPixelFormat__DBBPF_FloatRGB_DEPRECATED                         = 2,
	EDefaultBackBufferPixelFormat__DBBPF_FloatRGBA                                   = 3,
	EDefaultBackBufferPixelFormat__DBBPF_A2B10G10R10                                 = 4
};

/// Enum /Script/Engine.EAutoExposureMethodUI
/// Size: 0x01 (1 bytes)
enum class EAutoExposureMethodUI : uint8_t
{
	EAutoExposureMethodUI__AEM_Histogram                                             = 0,
	EAutoExposureMethodUI__AEM_Basic                                                 = 1,
	EAutoExposureMethodUI__AEM_Manual                                                = 2
};

/// Enum /Script/Engine.EAlphaChannelMode
/// Size: 0x01 (1 bytes)
enum class EAlphaChannelMode : uint8_t
{
	EAlphaChannelMode__Disabled                                                      = 0,
	EAlphaChannelMode__LinearColorSpaceOnly                                          = 1,
	EAlphaChannelMode__AllowThroughTonemapper                                        = 2
};

/// Enum /Script/Engine.EEarlyZPass
/// Size: 0x01 (1 bytes)
enum class EEarlyZPass : uint8_t
{
	EEarlyZPass__None                                                                = 0,
	EEarlyZPass__OpaqueOnly                                                          = 1,
	EEarlyZPass__OpaqueAndMasked                                                     = 2,
	EEarlyZPass__Auto                                                                = 3
};

/// Enum /Script/Engine.ECustomDepthStencil
/// Size: 0x01 (1 bytes)
enum class ECustomDepthStencil : uint8_t
{
	ECustomDepthStencil__Disabled                                                    = 0,
	ECustomDepthStencil__Enabled                                                     = 1,
	ECustomDepthStencil__EnabledOnDemand                                             = 2,
	ECustomDepthStencil__EnabledWithStencil                                          = 3
};

/// Enum /Script/Engine.EMobileMSAASampleCount
/// Size: 0x01 (1 bytes)
enum class EMobileMSAASampleCount : uint8_t
{
	EMobileMSAASampleCount__One                                                      = 1,
	EMobileMSAASampleCount__Two                                                      = 2,
	EMobileMSAASampleCount__Four                                                     = 4,
	EMobileMSAASampleCount__Eight                                                    = 8
};

/// Enum /Script/Engine.ECompositingSampleCount
/// Size: 0x01 (1 bytes)
enum class ECompositingSampleCount : uint8_t
{
	ECompositingSampleCount__One                                                     = 1,
	ECompositingSampleCount__Two                                                     = 2,
	ECompositingSampleCount__Four                                                    = 4,
	ECompositingSampleCount__Eight                                                   = 8
};

/// Enum /Script/Engine.EClearSceneOptions
/// Size: 0x01 (1 bytes)
enum class EClearSceneOptions : uint8_t
{
	EClearSceneOptions__NoClear                                                      = 0,
	EClearSceneOptions__HardwareClear                                                = 1,
	EClearSceneOptions__QuadAtMaxZ                                                   = 2
};

/// Enum /Script/Engine.EReporterLineStyle
/// Size: 0x01 (1 bytes)
enum class EReporterLineStyle : uint8_t
{
	EReporterLineStyle__Line                                                         = 0,
	EReporterLineStyle__Dash                                                         = 1
};

/// Enum /Script/Engine.ELegendPosition
/// Size: 0x01 (1 bytes)
enum class ELegendPosition : uint8_t
{
	ELegendPosition__Outside                                                         = 0,
	ELegendPosition__Inside                                                          = 1
};

/// Enum /Script/Engine.EGraphDataStyle
/// Size: 0x01 (1 bytes)
enum class EGraphDataStyle : uint8_t
{
	EGraphDataStyle__Lines                                                           = 0,
	EGraphDataStyle__Filled                                                          = 1
};

/// Enum /Script/Engine.EGraphAxisStyle
/// Size: 0x01 (1 bytes)
enum class EGraphAxisStyle : uint8_t
{
	EGraphAxisStyle__Lines                                                           = 0,
	EGraphAxisStyle__Notches                                                         = 1,
	EGraphAxisStyle__Grid                                                            = 2
};

/// Enum /Script/Engine.ReverbPreset
/// Size: 0x01 (1 bytes)
enum class ReverbPreset : uint8_t
{
	REVERB_Default                                                                   = 0,
	REVERB_Bathroom                                                                  = 1,
	REVERB_StoneRoom                                                                 = 2,
	REVERB_Auditorium                                                                = 3,
	REVERB_ConcertHall                                                               = 4,
	REVERB_Cave                                                                      = 5,
	REVERB_Hallway                                                                   = 6,
	REVERB_StoneCorridor                                                             = 7,
	REVERB_Alley                                                                     = 8,
	REVERB_Forest                                                                    = 9,
	REVERB_City                                                                      = 10,
	REVERB_Mountains                                                                 = 11,
	REVERB_Quarry                                                                    = 12,
	REVERB_Plain                                                                     = 13,
	REVERB_ParkingLot                                                                = 14,
	REVERB_SewerPipe                                                                 = 15,
	REVERB_Underwater                                                                = 16,
	REVERB_SmallRoom                                                                 = 17,
	REVERB_MediumRoom                                                                = 18,
	REVERB_LargeRoom                                                                 = 19,
	REVERB_MediumHall                                                                = 20,
	REVERB_LargeHall                                                                 = 21,
	REVERB_Plate                                                                     = 22
};

/// Enum /Script/Engine.ERichCurveKeyTimeCompressionFormat
/// Size: 0x01 (1 bytes)
enum class ERichCurveKeyTimeCompressionFormat : uint8_t
{
	RCKTCF_uint16                                                                    = 0,
	RCKTCF_float32                                                                   = 1
};

/// Enum /Script/Engine.ERichCurveCompressionFormat
/// Size: 0x01 (1 bytes)
enum class ERichCurveCompressionFormat : uint8_t
{
	RCCF_Empty                                                                       = 0,
	RCCF_Constant                                                                    = 1,
	RCCF_Linear                                                                      = 2,
	RCCF_Cubic                                                                       = 3,
	RCCF_Mixed                                                                       = 4,
	RCCF_Weighted                                                                    = 5
};

/// Enum /Script/Engine.ERichCurveTangentWeightMode
/// Size: 0x01 (1 bytes)
enum class ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone                                                               = 0,
	RCTWM_WeightedArrive                                                             = 1,
	RCTWM_WeightedLeave                                                              = 2,
	RCTWM_WeightedBoth                                                               = 3
};

/// Enum /Script/Engine.ERichCurveTangentMode
/// Size: 0x01 (1 bytes)
enum class ERichCurveTangentMode : uint8_t
{
	RCTM_Auto                                                                        = 0,
	RCTM_User                                                                        = 1,
	RCTM_Break                                                                       = 2,
	RCTM_None                                                                        = 3
};

/// Enum /Script/Engine.EConstraintTransform
/// Size: 0x01 (1 bytes)
enum class EConstraintTransform : uint8_t
{
	EConstraintTransform__Absolute                                                   = 0,
	EConstraintTransform__Relative                                                   = 1
};

/// Enum /Script/Engine.EControlConstraint
/// Size: 0x01 (1 bytes)
enum class EControlConstraint : uint8_t
{
	EControlConstraint__Orientation                                                  = 0,
	EControlConstraint__Translation                                                  = 1
};

/// Enum /Script/Engine.ERootMotionFinishVelocityMode
/// Size: 0x01 (1 bytes)
enum class ERootMotionFinishVelocityMode : uint8_t
{
	ERootMotionFinishVelocityMode__MaintainLastRootMotionVelocity                    = 0,
	ERootMotionFinishVelocityMode__SetVelocity                                       = 1,
	ERootMotionFinishVelocityMode__ClampVelocity                                     = 2
};

/// Enum /Script/Engine.ERootMotionSourceSettingsFlags
/// Size: 0x01 (1 bytes)
enum class ERootMotionSourceSettingsFlags : uint8_t
{
	ERootMotionSourceSettingsFlags__UseSensitiveLiftoffCheck                         = 1,
	ERootMotionSourceSettingsFlags__DisablePartialEndTick                            = 2,
	ERootMotionSourceSettingsFlags__IgnoreZAccumulate                                = 4
};

/// Enum /Script/Engine.ERootMotionSourceStatusFlags
/// Size: 0x01 (1 bytes)
enum class ERootMotionSourceStatusFlags : uint8_t
{
	ERootMotionSourceStatusFlags__Prepared                                           = 1,
	ERootMotionSourceStatusFlags__Finished                                           = 2,
	ERootMotionSourceStatusFlags__MarkedForRemoval                                   = 4
};

/// Enum /Script/Engine.ERootMotionAccumulateMode
/// Size: 0x01 (1 bytes)
enum class ERootMotionAccumulateMode : uint8_t
{
	ERootMotionAccumulateMode__Override                                              = 0,
	ERootMotionAccumulateMode__Additive                                              = 1
};

/// Enum /Script/Engine.ERuntimeVirtualTextureMainPassType
/// Size: 0x01 (1 bytes)
enum class ERuntimeVirtualTextureMainPassType : uint8_t
{
	ERuntimeVirtualTextureMainPassType__Never                                        = 0,
	ERuntimeVirtualTextureMainPassType__Exclusive                                    = 1,
	ERuntimeVirtualTextureMainPassType__Always                                       = 2
};

/// Enum /Script/Engine.ERuntimeVirtualTextureMaterialType
/// Size: 0x01 (1 bytes)
enum class ERuntimeVirtualTextureMaterialType : uint8_t
{
	ERuntimeVirtualTextureMaterialType__BaseColor                                    = 0,
	ERuntimeVirtualTextureMaterialType__BaseColor_Normal_DEPRECATED                  = 1,
	ERuntimeVirtualTextureMaterialType__BaseColor_Normal_Specular                    = 2,
	ERuntimeVirtualTextureMaterialType__BaseColor_Normal_Specular_YCoCg              = 3,
	ERuntimeVirtualTextureMaterialType__BaseColor_Normal_Specular_Mask_YCoCg         = 4,
	ERuntimeVirtualTextureMaterialType__WorldHeight                                  = 5,
	ERuntimeVirtualTextureMaterialType__Count                                        = 6
};

/// Enum /Script/Engine.EMobilePixelProjectedReflectionQuality
/// Size: 0x01 (1 bytes)
enum class EMobilePixelProjectedReflectionQuality : uint8_t
{
	EMobilePixelProjectedReflectionQuality__Disabled                                 = 0,
	EMobilePixelProjectedReflectionQuality__BestPerformance                          = 1,
	EMobilePixelProjectedReflectionQuality__BetterQuality                            = 2,
	EMobilePixelProjectedReflectionQuality__BestQuality                              = 3
};

/// Enum /Script/Engine.EMobilePlanarReflectionMode
/// Size: 0x01 (1 bytes)
enum class EMobilePlanarReflectionMode : uint8_t
{
	EMobilePlanarReflectionMode__Usual                                               = 0,
	EMobilePlanarReflectionMode__MobilePPRExclusive                                  = 1,
	EMobilePlanarReflectionMode__MobilePPR                                           = 2
};

/// Enum /Script/Engine.EReflectedAndRefractedRayTracedShadows
/// Size: 0x01 (1 bytes)
enum class EReflectedAndRefractedRayTracedShadows : uint8_t
{
	EReflectedAndRefractedRayTracedShadows__Disabled                                 = 0,
	EReflectedAndRefractedRayTracedShadows__Hard_shadows                             = 1,
	EReflectedAndRefractedRayTracedShadows__Area_shadows                             = 2
};

/// Enum /Script/Engine.ERayTracingGlobalIlluminationType
/// Size: 0x01 (1 bytes)
enum class ERayTracingGlobalIlluminationType : uint8_t
{
	ERayTracingGlobalIlluminationType__Disabled                                      = 0,
	ERayTracingGlobalIlluminationType__BruteForce                                    = 1,
	ERayTracingGlobalIlluminationType__FinalGather                                   = 2
};

/// Enum /Script/Engine.ETranslucencyType
/// Size: 0x01 (1 bytes)
enum class ETranslucencyType : uint8_t
{
	ETranslucencyType__Raster                                                        = 0,
	ETranslucencyType__RayTracing                                                    = 1
};

/// Enum /Script/Engine.EReflectionsType
/// Size: 0x01 (1 bytes)
enum class EReflectionsType : uint8_t
{
	EReflectionsType__ScreenSpace                                                    = 0,
	EReflectionsType__RayTracing                                                     = 1
};

/// Enum /Script/Engine.ELightUnits
/// Size: 0x01 (1 bytes)
enum class ELightUnits : uint8_t
{
	ELightUnits__Unitless                                                            = 0,
	ELightUnits__Candelas                                                            = 1,
	ELightUnits__Lumens                                                              = 2
};

/// Enum /Script/Engine.EBloomMethod
/// Size: 0x01 (1 bytes)
enum class EBloomMethod : uint8_t
{
	BM_SOG                                                                           = 0,
	BM_FFT                                                                           = 1
};

/// Enum /Script/Engine.EAutoExposureMethod
/// Size: 0x01 (1 bytes)
enum class EAutoExposureMethod : uint8_t
{
	AEM_Histogram                                                                    = 0,
	AEM_Basic                                                                        = 1,
	AEM_Manual                                                                       = 2
};

/// Enum /Script/Engine.EAntiAliasingMethod
/// Size: 0x01 (1 bytes)
enum class EAntiAliasingMethod : uint8_t
{
	AAM_None                                                                         = 0,
	AAM_FXAA                                                                         = 1,
	AAM_TemporalAA                                                                   = 2,
	AAM_MSAA                                                                         = 3
};

/// Enum /Script/Engine.EDepthOfFieldMethod
/// Size: 0x01 (1 bytes)
enum class EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                                                                    = 0,
	DOFM_Gaussian                                                                    = 1,
	DOFM_CircleDOF                                                                   = 2
};

/// Enum /Script/Engine.ESceneCapturePrimitiveRenderMode
/// Size: 0x01 (1 bytes)
enum class ESceneCapturePrimitiveRenderMode : uint8_t
{
	ESceneCapturePrimitiveRenderMode__PRM_LegacySceneCapture                         = 0,
	ESceneCapturePrimitiveRenderMode__PRM_RenderScenePrimitives                      = 1,
	ESceneCapturePrimitiveRenderMode__PRM_UseShowOnlyList                            = 2
};

/// Enum /Script/Engine.EMaterialProperty
/// Size: 0x01 (1 bytes)
enum class EMaterialProperty : uint8_t
{
	MP_EmissiveColor                                                                 = 0,
	MP_Opacity                                                                       = 1,
	MP_OpacityMask                                                                   = 2,
	MP_DiffuseColor                                                                  = 3,
	MP_SpecularColor                                                                 = 4,
	MP_BaseColor                                                                     = 5,
	MP_Metallic                                                                      = 6,
	MP_Specular                                                                      = 7,
	MP_Roughness                                                                     = 8,
	MP_Anisotropy                                                                    = 9,
	MP_Normal                                                                        = 10,
	MP_Tangent                                                                       = 11,
	MP_WorldPositionOffset                                                           = 12,
	MP_WorldDisplacement                                                             = 13,
	MP_TessellationMultiplier                                                        = 14,
	MP_SubsurfaceColor                                                               = 15,
	MP_CustomData0                                                                   = 16,
	MP_CustomData1                                                                   = 17,
	MP_AmbientOcclusion                                                              = 18,
	MP_Refraction                                                                    = 19,
	MP_CustomizedUVs0                                                                = 20,
	MP_CustomizedUVs1                                                                = 21,
	MP_CustomizedUVs2                                                                = 22,
	MP_CustomizedUVs3                                                                = 23,
	MP_CustomizedUVs4                                                                = 24,
	MP_CustomizedUVs5                                                                = 25,
	MP_CustomizedUVs6                                                                = 26,
	MP_CustomizedUVs7                                                                = 27,
	MP_PixelDepthOffset                                                              = 28,
	MP_ShadingModel                                                                  = 29,
	MP_MaterialAttributes                                                            = 30,
	MP_CustomOutput                                                                  = 31
};

/// Enum /Script/Engine.ESkinCacheDefaultBehavior
/// Size: 0x01 (1 bytes)
enum class ESkinCacheDefaultBehavior : uint8_t
{
	ESkinCacheDefaultBehavior__Exclusive                                             = 0,
	ESkinCacheDefaultBehavior__Inclusive                                             = 1
};

/// Enum /Script/Engine.ESkinCacheUsage
/// Size: 0x01 (1 bytes)
enum class ESkinCacheUsage : uint8_t
{
	ESkinCacheUsage__Auto                                                            = 0,
	ESkinCacheUsage__Disabled                                                        = 255,
	ESkinCacheUsage__Enabled                                                         = 1
};

/// Enum /Script/Engine.EPhysicsTransformUpdateMode
/// Size: 0x01 (1 bytes)
enum class EPhysicsTransformUpdateMode : uint8_t
{
	EPhysicsTransformUpdateMode__SimulationUpatesComponentTransform                  = 0,
	EPhysicsTransformUpdateMode__ComponentTransformIsKinematic                       = 1
};

/// Enum /Script/Engine.EAnimationMode
/// Size: 0x01 (1 bytes)
enum class EAnimationMode : uint8_t
{
	EAnimationMode__AnimationBlueprint                                               = 0,
	EAnimationMode__AnimationSingleNode                                              = 1,
	EAnimationMode__AnimationCustomMode                                              = 2
};

/// Enum /Script/Engine.EKinematicBonesUpdateToPhysics
/// Size: 0x01 (1 bytes)
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
	EKinematicBonesUpdateToPhysics__SkipSimulatingBones                              = 0,
	EKinematicBonesUpdateToPhysics__SkipAllBones                                     = 1
};

/// Enum /Script/Engine.ECustomBoneAttributeLookup
/// Size: 0x01 (1 bytes)
enum class ECustomBoneAttributeLookup : uint8_t
{
	ECustomBoneAttributeLookup__BoneOnly                                             = 0,
	ECustomBoneAttributeLookup__ImmediateParent                                      = 1,
	ECustomBoneAttributeLookup__ParentHierarchy                                      = 2
};

/// Enum /Script/Engine.EClothMassMode
/// Size: 0x01 (1 bytes)
enum class EClothMassMode : uint8_t
{
	EClothMassMode__UniformMass                                                      = 0,
	EClothMassMode__TotalMass                                                        = 1,
	EClothMassMode__Density                                                          = 2,
	EClothMassMode__MaxClothMassMode                                                 = 3
};

/// Enum /Script/Engine.EAnimCurveType
/// Size: 0x01 (1 bytes)
enum class EAnimCurveType : uint8_t
{
	EAnimCurveType__AttributeCurve                                                   = 0,
	EAnimCurveType__MaterialCurve                                                    = 1,
	EAnimCurveType__MorphTargetCurve                                                 = 2,
	EAnimCurveType__MaxAnimCurveType                                                 = 3
};

/// Enum /Script/Engine.ESkeletalMeshSkinningImportVersions
/// Size: 0x01 (1 bytes)
enum class ESkeletalMeshSkinningImportVersions : uint8_t
{
	ESkeletalMeshSkinningImportVersions__Before_Versionning                          = 0,
	ESkeletalMeshSkinningImportVersions__SkeletalMeshBuildRefactor                   = 1,
	ESkeletalMeshSkinningImportVersions__VersionPlusOne                              = 2,
	ESkeletalMeshSkinningImportVersions__LatestVersion                               = 1
};

/// Enum /Script/Engine.ESkeletalMeshGeoImportVersions
/// Size: 0x01 (1 bytes)
enum class ESkeletalMeshGeoImportVersions : uint8_t
{
	ESkeletalMeshGeoImportVersions__Before_Versionning                               = 0,
	ESkeletalMeshGeoImportVersions__SkeletalMeshBuildRefactor                        = 1,
	ESkeletalMeshGeoImportVersions__VersionPlusOne                                   = 2,
	ESkeletalMeshGeoImportVersions__LatestVersion                                    = 1
};

/// Enum /Script/Engine.EBoneFilterActionOption
/// Size: 0x01 (1 bytes)
enum class EBoneFilterActionOption : uint8_t
{
	EBoneFilterActionOption__Remove                                                  = 0,
	EBoneFilterActionOption__Keep                                                    = 1,
	EBoneFilterActionOption__Invalid                                                 = 2
};

/// Enum /Script/Engine.SkeletalMeshOptimizationImportance
/// Size: 0x01 (1 bytes)
enum class SkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                                                                         = 0,
	SMOI_Lowest                                                                      = 1,
	SMOI_Low                                                                         = 2,
	SMOI_Normal                                                                      = 3,
	SMOI_High                                                                        = 4,
	SMOI_Highest                                                                     = 5
};

/// Enum /Script/Engine.SkeletalMeshOptimizationType
/// Size: 0x01 (1 bytes)
enum class SkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles                                                              = 0,
	SMOT_MaxDeviation                                                                = 1,
	SMOT_TriangleOrDeviation                                                         = 2
};

/// Enum /Script/Engine.SkeletalMeshTerminationCriterion
/// Size: 0x01 (1 bytes)
enum class SkeletalMeshTerminationCriterion : uint8_t
{
	SMTC_NumOfTriangles                                                              = 0,
	SMTC_NumOfVerts                                                                  = 1,
	SMTC_TriangleOrVert                                                              = 2,
	SMTC_AbsNumOfTriangles                                                           = 3,
	SMTC_AbsNumOfVerts                                                               = 4,
	SMTC_AbsTriangleOrVert                                                           = 5
};

/// Enum /Script/Engine.EBoneTranslationRetargetingMode
/// Size: 0x01 (1 bytes)
enum class EBoneTranslationRetargetingMode : uint8_t
{
	EBoneTranslationRetargetingMode__Animation                                       = 0,
	EBoneTranslationRetargetingMode__Skeleton                                        = 1,
	EBoneTranslationRetargetingMode__AnimationScaled                                 = 2,
	EBoneTranslationRetargetingMode__AnimationRelative                               = 3,
	EBoneTranslationRetargetingMode__OrientAndScale                                  = 4
};

/// Enum /Script/Engine.EVertexOffsetUsageType
/// Size: 0x01 (1 bytes)
enum class EVertexOffsetUsageType : uint8_t
{
	EVertexOffsetUsageType__None                                                     = 0,
	EVertexOffsetUsageType__PreSkinningOffset                                        = 1,
	EVertexOffsetUsageType__PostSkinningOffset                                       = 2
};

/// Enum /Script/Engine.EBoneSpaces
/// Size: 0x01 (1 bytes)
enum class EBoneSpaces : uint8_t
{
	EBoneSpaces__WorldSpace                                                          = 0,
	EBoneSpaces__ComponentSpace                                                      = 1
};

/// Enum /Script/Engine.EVisibilityBasedAnimTickOption
/// Size: 0x01 (1 bytes)
enum class EVisibilityBasedAnimTickOption : uint8_t
{
	EVisibilityBasedAnimTickOption__AlwaysTickPoseAndRefreshBones                    = 0,
	EVisibilityBasedAnimTickOption__AlwaysTickPose                                   = 1,
	EVisibilityBasedAnimTickOption__OnlyTickMontagesWhenNotRendered                  = 2,
	EVisibilityBasedAnimTickOption__OnlyTickPoseWhenRendered                         = 3
};

/// Enum /Script/Engine.EPhysBodyOp
/// Size: 0x01 (1 bytes)
enum class EPhysBodyOp : uint8_t
{
	PBO_None                                                                         = 0,
	PBO_Term                                                                         = 1
};

/// Enum /Script/Engine.EBoneVisibilityStatus
/// Size: 0x01 (1 bytes)
enum class EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent                                                               = 0,
	BVS_Visible                                                                      = 1,
	BVS_ExplicitlyHidden                                                             = 2
};

/// Enum /Script/Engine.ESkyAtmosphereTransformMode
/// Size: 0x01 (1 bytes)
enum class ESkyAtmosphereTransformMode : uint8_t
{
	ESkyAtmosphereTransformMode__PlanetTopAtAbsoluteWorldOrigin                      = 0,
	ESkyAtmosphereTransformMode__PlanetTopAtComponentTransform                       = 1,
	ESkyAtmosphereTransformMode__PlanetCenterAtComponentTransform                    = 2
};

/// Enum /Script/Engine.ESkyLightSourceType
/// Size: 0x01 (1 bytes)
enum class ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene                                                                = 0,
	SLS_SpecifiedCubemap                                                             = 1
};

/// Enum /Script/Engine.EPriorityAttenuationMethod
/// Size: 0x01 (1 bytes)
enum class EPriorityAttenuationMethod : uint8_t
{
	EPriorityAttenuationMethod__Linear                                               = 0,
	EPriorityAttenuationMethod__CustomCurve                                          = 1,
	EPriorityAttenuationMethod__Manual                                               = 2
};

/// Enum /Script/Engine.ESubmixSendMethod
/// Size: 0x01 (1 bytes)
enum class ESubmixSendMethod : uint8_t
{
	ESubmixSendMethod__Linear                                                        = 0,
	ESubmixSendMethod__CustomCurve                                                   = 1,
	ESubmixSendMethod__Manual                                                        = 2
};

/// Enum /Script/Engine.EReverbSendMethod
/// Size: 0x01 (1 bytes)
enum class EReverbSendMethod : uint8_t
{
	EReverbSendMethod__Linear                                                        = 0,
	EReverbSendMethod__CustomCurve                                                   = 1,
	EReverbSendMethod__Manual                                                        = 2
};

/// Enum /Script/Engine.EAirAbsorptionMethod
/// Size: 0x01 (1 bytes)
enum class EAirAbsorptionMethod : uint8_t
{
	EAirAbsorptionMethod__Linear                                                     = 0,
	EAirAbsorptionMethod__CustomCurve                                                = 1
};

/// Enum /Script/Engine.ESoundSpatializationAlgorithm
/// Size: 0x01 (1 bytes)
enum class ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default                                                           = 0,
	SPATIALIZATION_HRTF                                                              = 1
};

/// Enum /Script/Engine.ESoundDistanceCalc
/// Size: 0x01 (1 bytes)
enum class ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal                                                             = 0,
	SOUNDDISTANCE_InfiniteXYPlane                                                    = 1,
	SOUNDDISTANCE_InfiniteXZPlane                                                    = 2,
	SOUNDDISTANCE_InfiniteYZPlane                                                    = 3
};

/// Enum /Script/Engine.EVirtualizationMode
/// Size: 0x01 (1 bytes)
enum class EVirtualizationMode : uint8_t
{
	EVirtualizationMode__Disabled                                                    = 0,
	EVirtualizationMode__PlayWhenSilent                                              = 1,
	EVirtualizationMode__Restart                                                     = 2
};

/// Enum /Script/Engine.EConcurrencyVolumeScaleMode
/// Size: 0x04 (4 bytes)
enum class EConcurrencyVolumeScaleMode : uint32_t
{
	EConcurrencyVolumeScaleMode__Default                                             = 0,
	EConcurrencyVolumeScaleMode__Distance                                            = 1,
	EConcurrencyVolumeScaleMode__Priority                                            = 2
};

/// Enum /Script/Engine.EMaxConcurrentResolutionRule
/// Size: 0x01 (1 bytes)
enum class EMaxConcurrentResolutionRule : uint8_t
{
	EMaxConcurrentResolutionRule__PreventNew                                         = 0,
	EMaxConcurrentResolutionRule__StopOldest                                         = 1,
	EMaxConcurrentResolutionRule__StopFarthestThenPreventNew                         = 2,
	EMaxConcurrentResolutionRule__StopFarthestThenOldest                             = 3,
	EMaxConcurrentResolutionRule__StopLowestPriority                                 = 4,
	EMaxConcurrentResolutionRule__StopQuietest                                       = 5,
	EMaxConcurrentResolutionRule__StopLowestPriorityThenPreventNew                   = 6,
	EMaxConcurrentResolutionRule__Count                                              = 7
};

/// Enum /Script/Engine.ESoundGroup
/// Size: 0x01 (1 bytes)
enum class ESoundGroup : uint8_t
{
	SOUNDGROUP_Default                                                               = 0,
	SOUNDGROUP_Effects                                                               = 1,
	SOUNDGROUP_UI                                                                    = 2,
	SOUNDGROUP_Music                                                                 = 3,
	SOUNDGROUP_Voice                                                                 = 4,
	SOUNDGROUP_GameSoundGroup1                                                       = 5,
	SOUNDGROUP_GameSoundGroup2                                                       = 6,
	SOUNDGROUP_GameSoundGroup3                                                       = 7,
	SOUNDGROUP_GameSoundGroup4                                                       = 8,
	SOUNDGROUP_GameSoundGroup5                                                       = 9,
	SOUNDGROUP_GameSoundGroup6                                                       = 10,
	SOUNDGROUP_GameSoundGroup7                                                       = 11,
	SOUNDGROUP_GameSoundGroup8                                                       = 12,
	SOUNDGROUP_GameSoundGroup9                                                       = 13,
	SOUNDGROUP_GameSoundGroup10                                                      = 14,
	SOUNDGROUP_GameSoundGroup11                                                      = 15,
	SOUNDGROUP_GameSoundGroup12                                                      = 16,
	SOUNDGROUP_GameSoundGroup13                                                      = 17,
	SOUNDGROUP_GameSoundGroup14                                                      = 18,
	SOUNDGROUP_GameSoundGroup15                                                      = 19,
	SOUNDGROUP_GameSoundGroup16                                                      = 20,
	SOUNDGROUP_GameSoundGroup17                                                      = 21,
	SOUNDGROUP_GameSoundGroup18                                                      = 22,
	SOUNDGROUP_GameSoundGroup19                                                      = 23,
	SOUNDGROUP_GameSoundGroup20                                                      = 24
};

/// Enum /Script/Engine.EModulationRouting
/// Size: 0x01 (1 bytes)
enum class EModulationRouting : uint8_t
{
	EModulationRouting__Disable                                                      = 0,
	EModulationRouting__Inherit                                                      = 1,
	EModulationRouting__Override                                                     = 2
};

/// Enum /Script/Engine.ModulationParamMode
/// Size: 0x01 (1 bytes)
enum class ModulationParamMode : uint8_t
{
	MPM_Normal                                                                       = 0,
	MPM_Abs                                                                          = 1,
	MPM_Direct                                                                       = 2
};

/// Enum /Script/Engine.ESourceBusChannels
/// Size: 0x01 (1 bytes)
enum class ESourceBusChannels : uint8_t
{
	ESourceBusChannels__Mono                                                         = 0,
	ESourceBusChannels__Stereo                                                       = 1
};

/// Enum /Script/Engine.ESourceBusSendLevelControlMethod
/// Size: 0x01 (1 bytes)
enum class ESourceBusSendLevelControlMethod : uint8_t
{
	ESourceBusSendLevelControlMethod__Linear                                         = 0,
	ESourceBusSendLevelControlMethod__CustomCurve                                    = 1,
	ESourceBusSendLevelControlMethod__Manual                                         = 2
};

/// Enum /Script/Engine.EGainParamMode
/// Size: 0x01 (1 bytes)
enum class EGainParamMode : uint8_t
{
	EGainParamMode__Linear                                                           = 0,
	EGainParamMode__Decibels                                                         = 1
};

/// Enum /Script/Engine.EAudioSpectrumType
/// Size: 0x01 (1 bytes)
enum class EAudioSpectrumType : uint8_t
{
	EAudioSpectrumType__MagnitudeSpectrum                                            = 0,
	EAudioSpectrumType__PowerSpectrum                                                = 1,
	EAudioSpectrumType__Decibel                                                      = 2
};

/// Enum /Script/Engine.EFFTWindowType
/// Size: 0x01 (1 bytes)
enum class EFFTWindowType : uint8_t
{
	EFFTWindowType__None                                                             = 0,
	EFFTWindowType__Hamming                                                          = 1,
	EFFTWindowType__Hann                                                             = 2,
	EFFTWindowType__Blackman                                                         = 3
};

/// Enum /Script/Engine.EFFTPeakInterpolationMethod
/// Size: 0x01 (1 bytes)
enum class EFFTPeakInterpolationMethod : uint8_t
{
	EFFTPeakInterpolationMethod__NearestNeighbor                                     = 0,
	EFFTPeakInterpolationMethod__Linear                                              = 1,
	EFFTPeakInterpolationMethod__Quadratic                                           = 2,
	EFFTPeakInterpolationMethod__ConstantQ                                           = 3
};

/// Enum /Script/Engine.EFFTSize
/// Size: 0x01 (1 bytes)
enum class EFFTSize : uint8_t
{
	EFFTSize__DefaultSize                                                            = 0,
	EFFTSize__Min                                                                    = 1,
	EFFTSize__Small                                                                  = 2,
	EFFTSize__Medium                                                                 = 3,
	EFFTSize__Large                                                                  = 4,
	EFFTSize__VeryLarge                                                              = 5,
	EFFTSize__Max                                                                    = 6
};

/// Enum /Script/Engine.ESubmixSendStage
/// Size: 0x01 (1 bytes)
enum class ESubmixSendStage : uint8_t
{
	ESubmixSendStage__PostDistanceAttenuation                                        = 0,
	ESubmixSendStage__PreDistanceAttenuation                                         = 1
};

/// Enum /Script/Engine.ESendLevelControlMethod
/// Size: 0x01 (1 bytes)
enum class ESendLevelControlMethod : uint8_t
{
	ESendLevelControlMethod__Linear                                                  = 0,
	ESendLevelControlMethod__CustomCurve                                             = 1,
	ESendLevelControlMethod__Manual                                                  = 2
};

/// Enum /Script/Engine.EAudioRecordingExportType
/// Size: 0x01 (1 bytes)
enum class EAudioRecordingExportType : uint8_t
{
	EAudioRecordingExportType__SoundWave                                             = 0,
	EAudioRecordingExportType__WavFile                                               = 1
};

/// Enum /Script/Engine.EAudioSpectrumBandPresetType
/// Size: 0x01 (1 bytes)
enum class EAudioSpectrumBandPresetType : uint8_t
{
	EAudioSpectrumBandPresetType__KickDrum                                           = 0,
	EAudioSpectrumBandPresetType__SnareDrum                                          = 1,
	EAudioSpectrumBandPresetType__Voice                                              = 2,
	EAudioSpectrumBandPresetType__Cymbals                                            = 3
};

/// Enum /Script/Engine.ESoundWaveFFTSize
/// Size: 0x01 (1 bytes)
enum class ESoundWaveFFTSize : uint8_t
{
	ESoundWaveFFTSize__VerySmall                                                     = 0,
	ESoundWaveFFTSize__Small                                                         = 1,
	ESoundWaveFFTSize__Medium                                                        = 2,
	ESoundWaveFFTSize__Large                                                         = 3,
	ESoundWaveFFTSize__VeryLarge                                                     = 4
};

/// Enum /Script/Engine.EDecompressionType
/// Size: 0x01 (1 bytes)
enum class EDecompressionType : uint8_t
{
	DTYPE_Setup                                                                      = 0,
	DTYPE_Invalid                                                                    = 1,
	DTYPE_Preview                                                                    = 2,
	DTYPE_Native                                                                     = 3,
	DTYPE_RealTime                                                                   = 4,
	DTYPE_Procedural                                                                 = 5,
	DTYPE_Xenon                                                                      = 6,
	DTYPE_Streaming                                                                  = 7
};

/// Enum /Script/Engine.ESoundWaveLoadingBehavior
/// Size: 0x01 (1 bytes)
enum class ESoundWaveLoadingBehavior : uint8_t
{
	ESoundWaveLoadingBehavior__Inherited                                             = 0,
	ESoundWaveLoadingBehavior__RetainOnLoad                                          = 1,
	ESoundWaveLoadingBehavior__PrimeOnLoad                                           = 2,
	ESoundWaveLoadingBehavior__LoadOnDemand                                          = 3,
	ESoundWaveLoadingBehavior__ForceInline                                           = 4,
	ESoundWaveLoadingBehavior__Uninitialized                                         = 255
};

/// Enum /Script/Engine.ESplineCoordinateSpace
/// Size: 0x01 (1 bytes)
enum class ESplineCoordinateSpace : uint8_t
{
	ESplineCoordinateSpace__Local                                                    = 0,
	ESplineCoordinateSpace__World                                                    = 1
};

/// Enum /Script/Engine.ESplinePointType
/// Size: 0x01 (1 bytes)
enum class ESplinePointType : uint8_t
{
	ESplinePointType__Linear                                                         = 0,
	ESplinePointType__Curve                                                          = 1,
	ESplinePointType__Constant                                                       = 2,
	ESplinePointType__CurveClamped                                                   = 3,
	ESplinePointType__CurveCustomTangent                                             = 4
};

/// Enum /Script/Engine.ESplineMeshAxis
/// Size: 0x01 (1 bytes)
enum class ESplineMeshAxis : uint8_t
{
	ESplineMeshAxis__X                                                               = 0,
	ESplineMeshAxis__Y                                                               = 1,
	ESplineMeshAxis__Z                                                               = 2
};

/// Enum /Script/Engine.EOptimizationType
/// Size: 0x01 (1 bytes)
enum class EOptimizationType : uint8_t
{
	OT_NumOfTriangles                                                                = 0,
	OT_MaxDeviation                                                                  = 1
};

/// Enum /Script/Engine.EImportanceLevel
/// Size: 0x01 (1 bytes)
enum class EImportanceLevel : uint8_t
{
	IL_Off                                                                           = 0,
	IL_Lowest                                                                        = 1,
	IL_Low                                                                           = 2,
	IL_Normal                                                                        = 3,
	IL_High                                                                          = 4,
	IL_Highest                                                                       = 5,
	TEMP_BROKEN2                                                                     = 6
};

/// Enum /Script/Engine.ENormalMode
/// Size: 0x01 (1 bytes)
enum class ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups                                                       = 0,
	NM_RecalculateNormals                                                            = 1,
	NM_RecalculateNormalsSmooth                                                      = 2,
	NM_RecalculateNormalsHard                                                        = 3,
	TEMP_BROKEN                                                                      = 4
};

/// Enum /Script/Engine.EStereoLayerShape
/// Size: 0x01 (1 bytes)
enum class EStereoLayerShape : uint8_t
{
	SLSH_QuadLayer                                                                   = 0,
	SLSH_CylinderLayer                                                               = 1,
	SLSH_CubemapLayer                                                                = 2,
	SLSH_EquirectLayer                                                               = 3
};

/// Enum /Script/Engine.EStereoLayerType
/// Size: 0x01 (1 bytes)
enum class EStereoLayerType : uint8_t
{
	SLT_WorldLocked                                                                  = 0,
	SLT_TrackerLocked                                                                = 1,
	SLT_FaceLocked                                                                   = 2
};

/// Enum /Script/Engine.EOpacitySourceMode
/// Size: 0x01 (1 bytes)
enum class EOpacitySourceMode : uint8_t
{
	OSM_Alpha                                                                        = 0,
	OSM_ColorBrightness                                                              = 1,
	OSM_RedChannel                                                                   = 2,
	OSM_GreenChannel                                                                 = 3,
	OSM_BlueChannel                                                                  = 4
};

/// Enum /Script/Engine.ESubUVBoundingVertexCount
/// Size: 0x01 (1 bytes)
enum class ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices                                                                 = 0,
	BVC_EightVertices                                                                = 1
};

/// Enum /Script/Engine.EVerticalTextAligment
/// Size: 0x01 (1 bytes)
enum class EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop                                                                    = 0,
	EVRTA_TextCenter                                                                 = 1,
	EVRTA_TextBottom                                                                 = 2,
	EVRTA_QuadTop                                                                    = 3
};

/// Enum /Script/Engine.EHorizTextAligment
/// Size: 0x01 (1 bytes)
enum class EHorizTextAligment : uint8_t
{
	EHTA_Left                                                                        = 0,
	EHTA_Center                                                                      = 1,
	EHTA_Right                                                                       = 2
};

/// Enum /Script/Engine.ETextureLossyCompressionAmount
/// Size: 0x01 (1 bytes)
enum class ETextureLossyCompressionAmount : uint8_t
{
	TLCA_Default                                                                     = 0,
	TLCA_None                                                                        = 1,
	TLCA_Lowest                                                                      = 2,
	TLCA_Low                                                                         = 3,
	TLCA_Medium                                                                      = 4,
	TLCA_High                                                                        = 5,
	TLCA_Highest                                                                     = 6
};

/// Enum /Script/Engine.ETextureCompressionQuality
/// Size: 0x01 (1 bytes)
enum class ETextureCompressionQuality : uint8_t
{
	TCQ_Default                                                                      = 0,
	TCQ_Lowest                                                                       = 1,
	TCQ_Low                                                                          = 2,
	TCQ_Medium                                                                       = 3,
	TCQ_High                                                                         = 4,
	TCQ_Highest                                                                      = 5
};

/// Enum /Script/Engine.ETextureSourceFormat
/// Size: 0x01 (1 bytes)
enum class ETextureSourceFormat : uint8_t
{
	TSF_Invalid                                                                      = 0,
	TSF_G8                                                                           = 1,
	TSF_BGRA8                                                                        = 2,
	TSF_BGRE8                                                                        = 3,
	TSF_RGBA16                                                                       = 4,
	TSF_RGBA16F                                                                      = 5,
	TSF_R11G11B10F                                                                   = 6,
	TSF_RGBA8                                                                        = 7,
	TSF_RGBE8                                                                        = 8,
	TSF_G16                                                                          = 9
};

/// Enum /Script/Engine.ETextureSourceArtType
/// Size: 0x01 (1 bytes)
enum class ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed                                                                = 0,
	TSAT_PNGCompressed                                                               = 1,
	TSAT_DDSFile                                                                     = 2
};

/// Enum /Script/Engine.ETextureMipCount
/// Size: 0x01 (1 bytes)
enum class ETextureMipCount : uint8_t
{
	TMC_ResidentMips                                                                 = 0,
	TMC_AllMips                                                                      = 1,
	TMC_AllMipsBiased                                                                = 2
};

/// Enum /Script/Engine.ECompositeTextureMode
/// Size: 0x01 (1 bytes)
enum class ECompositeTextureMode : uint8_t
{
	CTM_Disabled                                                                     = 0,
	CTM_NormalRoughnessToRed                                                         = 1,
	CTM_NormalRoughnessToGreen                                                       = 2,
	CTM_NormalRoughnessToBlue                                                        = 3,
	CTM_NormalRoughnessToAlpha                                                       = 4
};

/// Enum /Script/Engine.TextureAddress
/// Size: 0x01 (1 bytes)
enum class TextureAddress : uint8_t
{
	TA_Wrap                                                                          = 0,
	TA_Clamp                                                                         = 1,
	TA_Mirror                                                                        = 2
};

/// Enum /Script/Engine.TextureFilter
/// Size: 0x01 (1 bytes)
enum class TextureFilter : uint8_t
{
	TF_Nearest                                                                       = 0,
	TF_Bilinear                                                                      = 1,
	TF_Trilinear                                                                     = 2,
	TF_Default                                                                       = 3
};

/// Enum /Script/Engine.TextureCompressionSettings
/// Size: 0x01 (1 bytes)
enum class TextureCompressionSettings : uint8_t
{
	TC_Default                                                                       = 0,
	TC_Normalmap                                                                     = 1,
	TC_Masks                                                                         = 2,
	TC_Grayscale                                                                     = 3,
	TC_Displacementmap                                                               = 4,
	TC_VectorDisplacementmap                                                         = 5,
	TC_HDR                                                                           = 6,
	TC_EditorIcon                                                                    = 7,
	TC_Alpha                                                                         = 8,
	TC_DistanceFieldFont                                                             = 9,
	TC_HDR_Compressed                                                                = 10,
	TC_BC7                                                                           = 11,
	TC_HalfFloat                                                                     = 12,
	TC_ReflectionCapture                                                             = 13
};

/// Enum /Script/Engine.ETextureDownscaleOptions
/// Size: 0x01 (1 bytes)
enum class ETextureDownscaleOptions : uint8_t
{
	ETextureDownscaleOptions__Default                                                = 0,
	ETextureDownscaleOptions__Unfiltered                                             = 1,
	ETextureDownscaleOptions__SimpleAverage                                          = 2,
	ETextureDownscaleOptions__Sharpen0                                               = 3,
	ETextureDownscaleOptions__Sharpen1                                               = 4,
	ETextureDownscaleOptions__Sharpen2                                               = 5,
	ETextureDownscaleOptions__Sharpen3                                               = 6,
	ETextureDownscaleOptions__Sharpen4                                               = 7,
	ETextureDownscaleOptions__Sharpen5                                               = 8,
	ETextureDownscaleOptions__Sharpen6                                               = 9,
	ETextureDownscaleOptions__Sharpen7                                               = 10,
	ETextureDownscaleOptions__Sharpen8                                               = 11,
	ETextureDownscaleOptions__Sharpen9                                               = 12,
	ETextureDownscaleOptions__Sharpen10                                              = 13,
	ETextureDownscaleOptions__Blur1                                                  = 14,
	ETextureDownscaleOptions__Blur2                                                  = 15,
	ETextureDownscaleOptions__Blur3                                                  = 16,
	ETextureDownscaleOptions__Blur4                                                  = 17,
	ETextureDownscaleOptions__Blur5                                                  = 18
};

/// Enum /Script/Engine.ETextureMipLoadOptions
/// Size: 0x01 (1 bytes)
enum class ETextureMipLoadOptions : uint8_t
{
	ETextureMipLoadOptions__Default                                                  = 0,
	ETextureMipLoadOptions__AllMips                                                  = 1,
	ETextureMipLoadOptions__OnlyFirstMip                                             = 2
};

/// Enum /Script/Engine.ETextureSamplerFilter
/// Size: 0x01 (1 bytes)
enum class ETextureSamplerFilter : uint8_t
{
	ETextureSamplerFilter__Point                                                     = 0,
	ETextureSamplerFilter__Bilinear                                                  = 1,
	ETextureSamplerFilter__Trilinear                                                 = 2,
	ETextureSamplerFilter__AnisotropicPoint                                          = 3,
	ETextureSamplerFilter__AnisotropicLinear                                         = 4
};

/// Enum /Script/Engine.ETexturePowerOfTwoSetting
/// Size: 0x01 (1 bytes)
enum class ETexturePowerOfTwoSetting : uint8_t
{
	ETexturePowerOfTwoSetting__None                                                  = 0,
	ETexturePowerOfTwoSetting__PadToPowerOfTwo                                       = 1,
	ETexturePowerOfTwoSetting__PadToSquarePowerOfTwo                                 = 2,
	ETexturePowerOfTwoSetting__ResizeToPowerOfTwo                                    = 3,
	ETexturePowerOfTwoSetting__ResizeToFitTextureCompression                         = 4
};

/// Enum /Script/Engine.TextureMipGenSettings
/// Size: 0x01 (1 bytes)
enum class TextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup                                                            = 0,
	TMGS_SimpleAverage                                                               = 1,
	TMGS_Lanczos                                                                     = 2,
	TMGS_Sharpen0                                                                    = 3,
	TMGS_Sharpen1                                                                    = 4,
	TMGS_Sharpen2                                                                    = 5,
	TMGS_Sharpen3                                                                    = 6,
	TMGS_Sharpen4                                                                    = 7,
	TMGS_Sharpen5                                                                    = 8,
	TMGS_Sharpen6                                                                    = 9,
	TMGS_Sharpen7                                                                    = 10,
	TMGS_Sharpen8                                                                    = 11,
	TMGS_Sharpen9                                                                    = 12,
	TMGS_Sharpen10                                                                   = 13,
	TMGS_NoMipmaps                                                                   = 14,
	TMGS_LeaveExistingMips                                                           = 15,
	TMGS_Blur1                                                                       = 16,
	TMGS_Blur2                                                                       = 17,
	TMGS_Blur3                                                                       = 18,
	TMGS_Blur4                                                                       = 19,
	TMGS_Blur5                                                                       = 20,
	TMGS_Unfiltered                                                                  = 21
};

/// Enum /Script/Engine.TextureGroup
/// Size: 0x01 (1 bytes)
enum class TextureGroup : uint8_t
{
	TEXTUREGROUP_World                                                               = 0,
	TEXTUREGROUP_WorldNormalMap                                                      = 1,
	TEXTUREGROUP_WorldSpecular                                                       = 2,
	TEXTUREGROUP_Character                                                           = 3,
	TEXTUREGROUP_CharacterNormalMap                                                  = 4,
	TEXTUREGROUP_CharacterSpecular                                                   = 5,
	TEXTUREGROUP_Weapon                                                              = 6,
	TEXTUREGROUP_WeaponNormalMap                                                     = 7,
	TEXTUREGROUP_WeaponSpecular                                                      = 8,
	TEXTUREGROUP_Vehicle                                                             = 9,
	TEXTUREGROUP_VehicleNormalMap                                                    = 10,
	TEXTUREGROUP_VehicleSpecular                                                     = 11,
	TEXTUREGROUP_Cinematic                                                           = 12,
	TEXTUREGROUP_Effects                                                             = 13,
	TEXTUREGROUP_EffectsNotFiltered                                                  = 14,
	TEXTUREGROUP_Skybox                                                              = 15,
	TEXTUREGROUP_UI                                                                  = 16,
	TEXTUREGROUP_Lightmap                                                            = 17,
	TEXTUREGROUP_RenderTarget                                                        = 18,
	TEXTUREGROUP_MobileFlattened                                                     = 19,
	TEXTUREGROUP_ProcBuilding_Face                                                   = 20,
	TEXTUREGROUP_ProcBuilding_LightMap                                               = 21,
	TEXTUREGROUP_Shadowmap                                                           = 22,
	TEXTUREGROUP_ColorLookupTable                                                    = 23,
	TEXTUREGROUP_Terrain_Heightmap                                                   = 24,
	TEXTUREGROUP_Terrain_Weightmap                                                   = 25,
	TEXTUREGROUP_Bokeh                                                               = 26,
	TEXTUREGROUP_IESLightProfile                                                     = 27,
	TEXTUREGROUP_Pixels2D                                                            = 28,
	TEXTUREGROUP_HierarchicalLOD                                                     = 29,
	TEXTUREGROUP_Impostor                                                            = 30,
	TEXTUREGROUP_ImpostorNormalDepth                                                 = 31,
	TEXTUREGROUP_8BitData                                                            = 32,
	TEXTUREGROUP_16BitData                                                           = 33,
	TEXTUREGROUP_Project01                                                           = 34,
	TEXTUREGROUP_Project02                                                           = 35,
	TEXTUREGROUP_Project03                                                           = 36,
	TEXTUREGROUP_Project04                                                           = 37,
	TEXTUREGROUP_Project05                                                           = 38,
	TEXTUREGROUP_Project06                                                           = 39,
	TEXTUREGROUP_Project07                                                           = 40,
	TEXTUREGROUP_Project08                                                           = 41,
	TEXTUREGROUP_Project09                                                           = 42,
	TEXTUREGROUP_Project10                                                           = 43,
	TEXTUREGROUP_Project11                                                           = 44,
	TEXTUREGROUP_Project12                                                           = 45,
	TEXTUREGROUP_Project13                                                           = 46,
	TEXTUREGROUP_Project14                                                           = 47,
	TEXTUREGROUP_Project15                                                           = 48
};

/// Enum /Script/Engine.ETextureRenderTargetFormat
/// Size: 0x01 (1 bytes)
enum class ETextureRenderTargetFormat : uint8_t
{
	RTF_R8                                                                           = 0,
	RTF_RG8                                                                          = 1,
	RTF_RGBA8                                                                        = 2,
	RTF_RGBA8_SRGB                                                                   = 3,
	RTF_R16f                                                                         = 4,
	RTF_RG16f                                                                        = 5,
	RTF_RGBA16f                                                                      = 6,
	RTF_R32f                                                                         = 7,
	RTF_RG32f                                                                        = 8,
	RTF_RGBA32f                                                                      = 9,
	RTF_RGB10A2                                                                      = 10
};

/// Enum /Script/Engine.ETimecodeProviderSynchronizationState
/// Size: 0x01 (1 bytes)
enum class ETimecodeProviderSynchronizationState : uint8_t
{
	ETimecodeProviderSynchronizationState__Closed                                    = 0,
	ETimecodeProviderSynchronizationState__Error                                     = 1,
	ETimecodeProviderSynchronizationState__Synchronized                              = 2,
	ETimecodeProviderSynchronizationState__Synchronizing                             = 3
};

/// Enum /Script/Engine.ETimelineDirection
/// Size: 0x01 (1 bytes)
enum class ETimelineDirection : uint8_t
{
	ETimelineDirection__Forward                                                      = 0,
	ETimelineDirection__Backward                                                     = 1
};

/// Enum /Script/Engine.ETimelineLengthMode
/// Size: 0x01 (1 bytes)
enum class ETimelineLengthMode : uint8_t
{
	TL_TimelineLength                                                                = 0,
	TL_LastKeyFrame                                                                  = 1
};

/// Enum /Script/Engine.ETimeStretchCurveMapping
/// Size: 0x01 (1 bytes)
enum class ETimeStretchCurveMapping : uint8_t
{
	ETimeStretchCurveMapping__T_Original                                             = 0,
	ETimeStretchCurveMapping__T_TargetMin                                            = 1,
	ETimeStretchCurveMapping__T_TargetMax                                            = 2
};

/// Enum /Script/Engine.ETwitterIntegrationDelegate
/// Size: 0x01 (1 bytes)
enum class ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete                                                            = 0,
	TID_TweetUIComplete                                                              = 1,
	TID_RequestComplete                                                              = 2
};

/// Enum /Script/Engine.ETwitterRequestMethod
/// Size: 0x01 (1 bytes)
enum class ETwitterRequestMethod : uint8_t
{
	TRM_Get                                                                          = 0,
	TRM_Post                                                                         = 1,
	TRM_Delete                                                                       = 2
};

/// Enum /Script/Engine.EUserDefinedStructureStatus
/// Size: 0x01 (1 bytes)
enum class EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate                                                                    = 0,
	UDSS_Dirty                                                                       = 1,
	UDSS_Error                                                                       = 2,
	UDSS_Duplicate                                                                   = 3
};

/// Enum /Script/Engine.EUIScalingRule
/// Size: 0x01 (1 bytes)
enum class EUIScalingRule : uint8_t
{
	EUIScalingRule__ShortestSide                                                     = 0,
	EUIScalingRule__LongestSide                                                      = 1,
	EUIScalingRule__Horizontal                                                       = 2,
	EUIScalingRule__Vertical                                                         = 3,
	EUIScalingRule__ScaleToFit                                                       = 4,
	EUIScalingRule__Custom                                                           = 5
};

/// Enum /Script/Engine.ERenderFocusRule
/// Size: 0x01 (1 bytes)
enum class ERenderFocusRule : uint8_t
{
	ERenderFocusRule__Always                                                         = 0,
	ERenderFocusRule__NonPointer                                                     = 1,
	ERenderFocusRule__NavigationOnly                                                 = 2,
	ERenderFocusRule__Never                                                          = 3
};

/// Enum /Script/Engine.EVectorFieldConstructionOp
/// Size: 0x01 (1 bytes)
enum class EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude                                                                     = 0,
	VFCO_Revolve                                                                     = 1
};

/// Enum /Script/Engine.EWindSourceType
/// Size: 0x01 (1 bytes)
enum class EWindSourceType : uint8_t
{
	EWindSourceType__Directional                                                     = 0,
	EWindSourceType__Point                                                           = 1
};

/// Enum /Script/Engine.EPSCPoolMethod
/// Size: 0x01 (1 bytes)
enum class EPSCPoolMethod : uint8_t
{
	EPSCPoolMethod__None                                                             = 0,
	EPSCPoolMethod__AutoRelease                                                      = 1,
	EPSCPoolMethod__ManualRelease                                                    = 2,
	EPSCPoolMethod__ManualRelease_OnComplete                                         = 3,
	EPSCPoolMethod__FreeInPool                                                       = 4
};

/// Enum /Script/Engine.EVolumeLightingMethod
/// Size: 0x01 (1 bytes)
enum class EVolumeLightingMethod : uint8_t
{
	VLM_VolumetricLightmap                                                           = 0,
	VLM_SparseVolumeLightingSamples                                                  = 1
};

/// Enum /Script/Engine.EVisibilityAggressiveness
/// Size: 0x01 (1 bytes)
enum class EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive                                                              = 0,
	VIS_ModeratelyAggressive                                                         = 1,
	VIS_MostAggressive                                                               = 2,
	VIS_Max                                                                          = 3
};

/// Enum /Script/UMG.ESlateAccessibleBehavior
/// Size: 0x01 (1 bytes)
enum class ESlateAccessibleBehavior : uint8_t
{
	ESlateAccessibleBehavior__NotAccessible                                          = 0,
	ESlateAccessibleBehavior__Auto                                                   = 1,
	ESlateAccessibleBehavior__Summary                                                = 2,
	ESlateAccessibleBehavior__Custom                                                 = 3,
	ESlateAccessibleBehavior__ToolTip                                                = 4
};

/// Enum /Script/UMG.ESlateVisibility
/// Size: 0x01 (1 bytes)
enum class ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible                                                        = 0,
	ESlateVisibility__Collapsed                                                      = 1,
	ESlateVisibility__Hidden                                                         = 2,
	ESlateVisibility__HitTestInvisible                                               = 3,
	ESlateVisibility__SelfHitTestInvisible                                           = 4
};

/// Enum /Script/UMG.EWidgetVertexEffectType
/// Size: 0x01 (1 bytes)
enum class EWidgetVertexEffectType : uint8_t
{
	EWidgetVertexEffectType__Default                                                 = 0,
	EWidgetVertexEffectType__PerspectX                                               = 1,
	EWidgetVertexEffectType__PerspectY                                               = 2
};

/// Enum /Script/UMG.EVirtualKeyboardType
/// Size: 0x01 (1 bytes)
enum class EVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType__Default                                                    = 0,
	EVirtualKeyboardType__Number                                                     = 1,
	EVirtualKeyboardType__Web                                                        = 2,
	EVirtualKeyboardType__Email                                                      = 3,
	EVirtualKeyboardType__Password                                                   = 4,
	EVirtualKeyboardType__AlphaNumeric                                               = 5
};

/// Enum /Script/UMG.EDragPivot
/// Size: 0x01 (1 bytes)
enum class EDragPivot : uint8_t
{
	EDragPivot__MouseDown                                                            = 0,
	EDragPivot__TopLeft                                                              = 1,
	EDragPivot__TopCenter                                                            = 2,
	EDragPivot__TopRight                                                             = 3,
	EDragPivot__CenterLeft                                                           = 4,
	EDragPivot__CenterCenter                                                         = 5,
	EDragPivot__CenterRight                                                          = 6,
	EDragPivot__BottomLeft                                                           = 7,
	EDragPivot__BottomCenter                                                         = 8,
	EDragPivot__BottomRight                                                          = 9
};

/// Enum /Script/UMG.EDynamicBoxType
/// Size: 0x01 (1 bytes)
enum class EDynamicBoxType : uint8_t
{
	EDynamicBoxType__Horizontal                                                      = 0,
	EDynamicBoxType__Vertical                                                        = 1,
	EDynamicBoxType__Wrap                                                            = 2,
	EDynamicBoxType__VerticalWrap                                                    = 3,
	EDynamicBoxType__Radial                                                          = 4,
	EDynamicBoxType__Overlay                                                         = 5
};

/// Enum /Script/UMG.ESlateSizeRule
/// Size: 0x01 (1 bytes)
enum class ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic                                                        = 0,
	ESlateSizeRule__Fill                                                             = 1
};

/// Enum /Script/UMG.EUMGSequencePlayMode
/// Size: 0x01 (1 bytes)
enum class EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward                                                    = 0,
	EUMGSequencePlayMode__Reverse                                                    = 1,
	EUMGSequencePlayMode__PingPong                                                   = 2
};

/// Enum /Script/UMG.EWidgetAnimationEvent
/// Size: 0x01 (1 bytes)
enum class EWidgetAnimationEvent : uint8_t
{
	EWidgetAnimationEvent__Started                                                   = 0,
	EWidgetAnimationEvent__Finished                                                  = 1
};

/// Enum /Script/UMG.EWidgetTickFrequency
/// Size: 0x01 (1 bytes)
enum class EWidgetTickFrequency : uint8_t
{
	EWidgetTickFrequency__Never                                                      = 0,
	EWidgetTickFrequency__Auto                                                       = 1
};

/// Enum /Script/UMG.EWidgetDesignFlags
/// Size: 0x01 (1 bytes)
enum class EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None                                                         = 0,
	EWidgetDesignFlags__Designing                                                    = 1,
	EWidgetDesignFlags__ShowOutline                                                  = 2,
	EWidgetDesignFlags__ExecutePreConstruct                                          = 4
};

/// Enum /Script/UMG.EBindingKind
/// Size: 0x01 (1 bytes)
enum class EBindingKind : uint8_t
{
	EBindingKind__Function                                                           = 0,
	EBindingKind__Property                                                           = 1
};

/// Enum /Script/UMG.ETickMode
/// Size: 0x01 (1 bytes)
enum class ETickMode : uint8_t
{
	ETickMode__Disabled                                                              = 0,
	ETickMode__Enabled                                                               = 1,
	ETickMode__Automatic                                                             = 2
};

/// Enum /Script/UMG.EWindowVisibility
/// Size: 0x01 (1 bytes)
enum class EWindowVisibility : uint8_t
{
	EWindowVisibility__Visible                                                       = 0,
	EWindowVisibility__SelfHitTestInvisible                                          = 1
};

/// Enum /Script/UMG.EWidgetGeometryMode
/// Size: 0x01 (1 bytes)
enum class EWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode__Plane                                                       = 0,
	EWidgetGeometryMode__Cylinder                                                    = 1
};

/// Enum /Script/UMG.EWidgetBlendMode
/// Size: 0x01 (1 bytes)
enum class EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque                                                         = 0,
	EWidgetBlendMode__Masked                                                         = 1,
	EWidgetBlendMode__Transparent                                                    = 2
};

/// Enum /Script/UMG.EWidgetTimingPolicy
/// Size: 0x01 (1 bytes)
enum class EWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy__RealTime                                                    = 0,
	EWidgetTimingPolicy__GameTime                                                    = 1
};

/// Enum /Script/UMG.EWidgetSpace
/// Size: 0x01 (1 bytes)
enum class EWidgetSpace : uint8_t
{
	EWidgetSpace__World                                                              = 0,
	EWidgetSpace__Screen                                                             = 1
};

/// Enum /Script/UMG.EWidgetInteractionSource
/// Size: 0x01 (1 bytes)
enum class EWidgetInteractionSource : uint8_t
{
	EWidgetInteractionSource__World                                                  = 0,
	EWidgetInteractionSource__Mouse                                                  = 1,
	EWidgetInteractionSource__CenterScreen                                           = 2,
	EWidgetInteractionSource__Custom                                                 = 3
};

/// Enum /Script/MovieScene.EMovieSceneKeyInterpolation
/// Size: 0x01 (1 bytes)
enum class EMovieSceneKeyInterpolation : uint8_t
{
	EMovieSceneKeyInterpolation__Auto                                                = 0,
	EMovieSceneKeyInterpolation__User                                                = 1,
	EMovieSceneKeyInterpolation__Break                                               = 2,
	EMovieSceneKeyInterpolation__Linear                                              = 3,
	EMovieSceneKeyInterpolation__Constant                                            = 4
};

/// Enum /Script/MovieScene.EMovieSceneBlendType
/// Size: 0x01 (1 bytes)
enum class EMovieSceneBlendType : uint8_t
{
	EMovieSceneBlendType__Invalid                                                    = 0,
	EMovieSceneBlendType__Absolute                                                   = 1,
	EMovieSceneBlendType__Additive                                                   = 2,
	EMovieSceneBlendType__Relative                                                   = 4,
	EMovieSceneBlendType__AdditiveFromBase                                           = 8
};

/// Enum /Script/MovieScene.EMovieSceneCompletionMode
/// Size: 0x01 (1 bytes)
enum class EMovieSceneCompletionMode : uint8_t
{
	EMovieSceneCompletionMode__KeepState                                             = 0,
	EMovieSceneCompletionMode__RestoreState                                          = 1,
	EMovieSceneCompletionMode__ProjectDefault                                        = 2
};

/// Enum /Script/MovieScene.EMovieSceneBuiltInEasing
/// Size: 0x01 (1 bytes)
enum class EMovieSceneBuiltInEasing : uint8_t
{
	EMovieSceneBuiltInEasing__Linear                                                 = 0,
	EMovieSceneBuiltInEasing__SinIn                                                  = 1,
	EMovieSceneBuiltInEasing__SinOut                                                 = 2,
	EMovieSceneBuiltInEasing__SinInOut                                               = 3,
	EMovieSceneBuiltInEasing__QuadIn                                                 = 4,
	EMovieSceneBuiltInEasing__QuadOut                                                = 5,
	EMovieSceneBuiltInEasing__QuadInOut                                              = 6,
	EMovieSceneBuiltInEasing__CubicIn                                                = 7,
	EMovieSceneBuiltInEasing__CubicOut                                               = 8,
	EMovieSceneBuiltInEasing__CubicInOut                                             = 9,
	EMovieSceneBuiltInEasing__QuartIn                                                = 10,
	EMovieSceneBuiltInEasing__QuartOut                                               = 11,
	EMovieSceneBuiltInEasing__QuartInOut                                             = 12,
	EMovieSceneBuiltInEasing__QuintIn                                                = 13,
	EMovieSceneBuiltInEasing__QuintOut                                               = 14,
	EMovieSceneBuiltInEasing__QuintInOut                                             = 15,
	EMovieSceneBuiltInEasing__ExpoIn                                                 = 16,
	EMovieSceneBuiltInEasing__ExpoOut                                                = 17,
	EMovieSceneBuiltInEasing__ExpoInOut                                              = 18,
	EMovieSceneBuiltInEasing__CircIn                                                 = 19,
	EMovieSceneBuiltInEasing__CircOut                                                = 20,
	EMovieSceneBuiltInEasing__CircInOut                                              = 21
};

/// Enum /Script/MovieScene.EEvaluationMethod
/// Size: 0x01 (1 bytes)
enum class EEvaluationMethod : uint8_t
{
	EEvaluationMethod__Static                                                        = 0,
	EEvaluationMethod__Swept                                                         = 1
};

/// Enum /Script/MovieScene.EMovieSceneSequenceFlags
/// Size: 0x01 (1 bytes)
enum class EMovieSceneSequenceFlags : uint8_t
{
	EMovieSceneSequenceFlags__None                                                   = 0,
	EMovieSceneSequenceFlags__Volatile                                               = 1,
	EMovieSceneSequenceFlags__BlockingEvaluation                                     = 2,
	EMovieSceneSequenceFlags__InheritedFlags                                         = 1
};

/// Enum /Script/MovieScene.EUpdateClockSource
/// Size: 0x01 (1 bytes)
enum class EUpdateClockSource : uint8_t
{
	EUpdateClockSource__Tick                                                         = 0,
	EUpdateClockSource__Platform                                                     = 1,
	EUpdateClockSource__Audio                                                        = 2,
	EUpdateClockSource__RelativeTimecode                                             = 3,
	EUpdateClockSource__Timecode                                                     = 4,
	EUpdateClockSource__Custom                                                       = 5
};

/// Enum /Script/MovieScene.EMovieSceneEvaluationType
/// Size: 0x01 (1 bytes)
enum class EMovieSceneEvaluationType : uint8_t
{
	EMovieSceneEvaluationType__FrameLocked                                           = 0,
	EMovieSceneEvaluationType__WithSubFrames                                         = 1
};

/// Enum /Script/MovieScene.EMovieScenePlayerStatus
/// Size: 0x01 (1 bytes)
enum class EMovieScenePlayerStatus : uint8_t
{
	EMovieScenePlayerStatus__Stopped                                                 = 0,
	EMovieScenePlayerStatus__Playing                                                 = 1,
	EMovieScenePlayerStatus__Recording                                               = 2,
	EMovieScenePlayerStatus__Scrubbing                                               = 3,
	EMovieScenePlayerStatus__Jumping                                                 = 4,
	EMovieScenePlayerStatus__Stepping                                                = 5,
	EMovieScenePlayerStatus__Paused                                                  = 6
};

/// Enum /Script/MovieScene.EMovieSceneObjectBindingSpace
/// Size: 0x01 (1 bytes)
enum class EMovieSceneObjectBindingSpace : uint8_t
{
	EMovieSceneObjectBindingSpace__Local                                             = 0,
	EMovieSceneObjectBindingSpace__Root                                              = 1
};

/// Enum /Script/MovieScene.ESectionEvaluationFlags
/// Size: 0x01 (1 bytes)
enum class ESectionEvaluationFlags : uint8_t
{
	ESectionEvaluationFlags__None                                                    = 0,
	ESectionEvaluationFlags__PreRoll                                                 = 1,
	ESectionEvaluationFlags__PostRoll                                                = 2
};

/// Enum /Script/MovieScene.EMovieScenePositionType
/// Size: 0x01 (1 bytes)
enum class EMovieScenePositionType : uint8_t
{
	EMovieScenePositionType__Frame                                                   = 0,
	EMovieScenePositionType__Time                                                    = 1,
	EMovieScenePositionType__MarkedFrame                                             = 2
};

/// Enum /Script/MovieScene.EUpdatePositionMethod
/// Size: 0x01 (1 bytes)
enum class EUpdatePositionMethod : uint8_t
{
	EUpdatePositionMethod__Play                                                      = 0,
	EUpdatePositionMethod__Jump                                                      = 1,
	EUpdatePositionMethod__Scrub                                                     = 2
};

/// Enum /Script/MovieScene.ESpawnOwnership
/// Size: 0x01 (1 bytes)
enum class ESpawnOwnership : uint8_t
{
	ESpawnOwnership__InnerSequence                                                   = 0,
	ESpawnOwnership__MasterSequence                                                  = 1,
	ESpawnOwnership__External                                                        = 2
};

/// Enum /Script/MovieSceneTracks.MovieScene3DPathSection_Axis
/// Size: 0x01 (1 bytes)
enum class MovieScene3DPathSection_Axis : uint8_t
{
	MovieScene3DPathSection_Axis__X                                                  = 0,
	MovieScene3DPathSection_Axis__Y                                                  = 1,
	MovieScene3DPathSection_Axis__Z                                                  = 2,
	MovieScene3DPathSection_Axis__NEG_X                                              = 3,
	MovieScene3DPathSection_Axis__NEG_Y                                              = 4,
	MovieScene3DPathSection_Axis__NEG_Z                                              = 5
};

/// Enum /Script/MovieSceneTracks.EFireEventsAtPosition
/// Size: 0x01 (1 bytes)
enum class EFireEventsAtPosition : uint8_t
{
	EFireEventsAtPosition__AtStartOfEvaluation                                       = 0,
	EFireEventsAtPosition__AtEndOfEvaluation                                         = 1,
	EFireEventsAtPosition__AfterSpawn                                                = 2
};

/// Enum /Script/MovieSceneTracks.ELevelVisibility
/// Size: 0x01 (1 bytes)
enum class ELevelVisibility : uint8_t
{
	ELevelVisibility__Visible                                                        = 0,
	ELevelVisibility__Hidden                                                         = 1
};

/// Enum /Script/MovieSceneTracks.EParticleKey
/// Size: 0x01 (1 bytes)
enum class EParticleKey : uint8_t
{
	EParticleKey__Activate                                                           = 0,
	EParticleKey__Deactivate                                                         = 1,
	EParticleKey__Trigger                                                            = 2
};

#pragma pack(pop)


static_assert(sizeof(FTickFunction) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FActorComponentTickFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FSimpleMemberReference) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UActorComponent) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(USceneComponent) == 0x01F8); // 504 bytes (0x0000B0 - 0x0001F8)
static_assert(sizeof(FKeyHandleMap) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FIndexedCurve) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FRealCurve) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(FRichCurveKey) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FRichCurve) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(FRuntimeFloatCurve) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FBaseAttenuationSettings) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FAttenuationSubmixSendSettings) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FSoundAttenuationPluginSettings) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FSoundAttenuationSettings) == 0x03A0); // 928 bytes (0x0000B0 - 0x0003A0)
static_assert(sizeof(FSoundSubmixSendInfo) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FSoundSourceBusSendInfo) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(USynthComponent) == 0x06C0); // 1728 bytes (0x0001F8 - 0x0006C0)
static_assert(sizeof(UAudioGenerator) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UBlueprintFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAudioMixerBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UQuartzClockHandle) == 0x0190); // 400 bytes (0x000028 - 0x000190)
static_assert(sizeof(USoundEffectPreset) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(USoundEffectSubmixPreset) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FSubmixEffectDynamicProcessorFilterSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FSubmixEffectDynamicsProcessorSettings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(USubmixEffectDynamicsProcessorPreset) == 0x0130); // 304 bytes (0x000068 - 0x000130)
static_assert(sizeof(FSubmixEffectEQBand) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSubmixEffectSubmixEQSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(USubmixEffectSubmixEQPreset) == 0x00B0); // 176 bytes (0x000068 - 0x0000B0)
static_assert(sizeof(FSubmixEffectReverbSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(USubmixEffectReverbPreset) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(USubsystem) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UWorldSubsystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UQuartzSubsystem) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(FSoundConcurrencySettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSoundModulationDestinationSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSoundModulationDefaultSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FSoundModulationDefaultRoutingSettings) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(USoundBase) == 0x01B8); // 440 bytes (0x000028 - 0x0001B8)
static_assert(sizeof(FSoundWaveSpectralDataEntry) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSoundWaveSpectralTimeData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSoundWaveEnvelopeTimeData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSubtitleCue) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(USoundWave) == 0x0370); // 880 bytes (0x0001B8 - 0x000370)
static_assert(sizeof(USoundWaveProcedural) == 0x03C0); // 960 bytes (0x000370 - 0x0003C0)
static_assert(sizeof(USynthSound) == 0x03E0); // 992 bytes (0x0003C0 - 0x0003E0)
static_assert(sizeof(UDataAsset) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FActorTickFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FRepMovement) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(sizeof(FVector_NetQuantize100) == 0x000C); // 12 bytes (0x00000C - 0x00000C)
static_assert(sizeof(FRepAttachment) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(AActor) == 0x0220); // 544 bytes (0x000028 - 0x000220)
static_assert(sizeof(FGeomSelection) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(ABrush) == 0x0258); // 600 bytes (0x000220 - 0x000258)
static_assert(sizeof(AVolume) == 0x0258); // 600 bytes (0x000258 - 0x000258)
static_assert(sizeof(FLightingChannels) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FCustomPrimitiveData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCollisionResponseContainer) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FResponseChannel) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FCollisionResponse) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FWalkableSlopeOverride) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBodyInstance) == 0x0158); // 344 bytes (0x000018 - 0x000158)
static_assert(sizeof(UPrimitiveComponent) == 0x0468); // 1128 bytes (0x0001F8 - 0x000468)
static_assert(sizeof(FStreamingLevelsToConsider) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FLevelCollection) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FPSCPoolElem) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPSCPool) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FWorldPSCPool) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(UWorld) == 0x0788); // 1928 bytes (0x000028 - 0x000788)
static_assert(sizeof(UAnimNotify) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UBlueprintAsyncActionBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UPrimaryDataAsset) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAssetManager) == 0x0458); // 1112 bytes (0x000028 - 0x000458)
static_assert(sizeof(UMeshComponent) == 0x0490); // 1168 bytes (0x000468 - 0x000490)
static_assert(sizeof(FVertexOffsetUsage) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSkelMeshComponentLODInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(USkinnedMeshComponent) == 0x06C0); // 1728 bytes (0x000490 - 0x0006C0)
static_assert(sizeof(UStreamableRenderAsset) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(FMeshUVChannelInfo) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FSkeletalMaterial) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FBoneMirrorInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPerPlatformFloat) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FSkeletalMeshBuildSettings) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FSkeletalMeshOptimizationSettings) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FBoneReference) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSkeletalMeshLODInfo) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(sizeof(FPerPlatformInt) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPerPlatformBool) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FSkeletalMeshSamplingRegionMaterialFilter) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSkeletalMeshSamplingRegionBoneFilter) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FSkeletalMeshSamplingRegion) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FSkeletalMeshSamplingLODBuiltData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FSkeletalMeshSamplingRegionBuiltData) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FSkeletalMeshSamplingBuiltData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSkeletalMeshSamplingInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FSkinWeightProfileInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(USkeletalMesh) == 0x03A8); // 936 bytes (0x000060 - 0x0003A8)
static_assert(sizeof(FTouchInputControl) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UTouchInterface) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(FStatColorMapEntry) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FStatColorMapping) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FGameNameRedirect) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FClassRedirect) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FPluginRedirect) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FStructRedirect) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FDirectoryPath) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FDropNoteInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNetDriverDefinition) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UEngine) == 0x0DE0); // 3552 bytes (0x000028 - 0x000DE0)
static_assert(sizeof(UScriptViewportClient) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FDebugDisplayProperty) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UGameViewportClient) == 0x0360); // 864 bytes (0x000038 - 0x000360)
static_assert(sizeof(AController) == 0x0298); // 664 bytes (0x000220 - 0x000298)
static_assert(sizeof(FActiveForceFeedbackEffect) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(APlayerController) == 0x0570); // 1392 bytes (0x000298 - 0x000570)
static_assert(sizeof(UPlayer) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(ULocalPlayer) == 0x0258); // 600 bytes (0x000048 - 0x000258)
static_assert(sizeof(ULocalPlayerSubsystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAssetImportData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAssetUserData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSingleAnimationPlayData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(USkeletalMeshComponent) == 0x0F00); // 3840 bytes (0x0006C0 - 0x000F00)
static_assert(sizeof(FAnimNotifyEventReference) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAnimNotifyArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAnimNotifyQueue) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FAnimLinkableElement) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAnimNotifyEvent) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UAnimInstance) == 0x02B8); // 696 bytes (0x000028 - 0x0002B8)
static_assert(sizeof(FBPComponentClassOverride) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBlueprintComponentChangedPropertyInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBlueprintCookedComponentInstancingData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UBlueprintGeneratedClass) == 0x0328); // 808 bytes (0x000230 - 0x000328)
static_assert(sizeof(UTimecodeProvider) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UFXSystemComponent) == 0x0468); // 1128 bytes (0x000468 - 0x000468)
static_assert(sizeof(FParticleSysParam) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(UParticleSystemComponent) == 0x06D0); // 1744 bytes (0x000468 - 0x0006D0)
static_assert(sizeof(UEngineCustomTimeStep) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AInfo) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(AGameModeBase) == 0x02C0); // 704 bytes (0x000220 - 0x0002C0)
static_assert(sizeof(UDynamicSubsystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEngineSubsystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UFXSystemAsset) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UAnimNotifyState) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UCommandlet) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UGameUserSettings) == 0x0120); // 288 bytes (0x000028 - 0x000120)
static_assert(sizeof(UMaterialExpression) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMaterialExpressionTextureBase) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(FExpressionInput) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UMaterialExpressionTextureSample) == 0x0060); // 96 bytes (0x000048 - 0x000060)
static_assert(sizeof(UMaterialExpressionTextureSampleParameter) == 0x0080); // 128 bytes (0x000060 - 0x000080)
static_assert(sizeof(UMaterialExpressionTextureSampleParameter2D) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(APawn) == 0x0280); // 640 bytes (0x000220 - 0x000280)
static_assert(sizeof(FBasedMovementInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRootMotionSourceSettings) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FVector_NetQuantize10) == 0x000C); // 12 bytes (0x00000C - 0x00000C)
static_assert(sizeof(FRootMotionSourceGroup) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FRootMotionMovementParams) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRepRootMotionMontage) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FSimulatedRootMotionReplicatedMove) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(ACharacter) == 0x04B8); // 1208 bytes (0x000280 - 0x0004B8)
static_assert(sizeof(FSplineCurves) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(USplineComponent) == 0x0560); // 1376 bytes (0x000468 - 0x000560)
static_assert(sizeof(UAnimBoneCompressionCodec) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UAnimCurveCompressionCodec) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAudioComponentParam) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UAudioComponent) == 0x0860); // 2144 bytes (0x0001F8 - 0x000860)
static_assert(sizeof(USaveGame) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AGameMode) == 0x0308); // 776 bytes (0x0002C0 - 0x000308)
static_assert(sizeof(AGameStateBase) == 0x0270); // 624 bytes (0x000220 - 0x000270)
static_assert(sizeof(AGameState) == 0x0290); // 656 bytes (0x000270 - 0x000290)
static_assert(sizeof(UApplicationLifecycleComponent) == 0x0140); // 320 bytes (0x0000B0 - 0x000140)
static_assert(sizeof(UCameraShakeBase) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(UOnlineBlueprintCallProxyBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FUniqueNetIdRepl) == 0x0028); // 40 bytes (0x000001 - 0x000028)
static_assert(sizeof(UNetConnection) == 0x1AF0); // 6896 bytes (0x000048 - 0x001AF0)
static_assert(sizeof(FChannelDefinition) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UNetDriver) == 0x0748); // 1864 bytes (0x000028 - 0x000748)
static_assert(sizeof(UOnlineEngineInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOnlineSession) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovementComponent) == 0x00F0); // 240 bytes (0x0000B0 - 0x0000F0)
static_assert(sizeof(FMovementProperties) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNavAgentProperties) == 0x0030); // 48 bytes (0x000001 - 0x000030)
static_assert(sizeof(UNavMovementComponent) == 0x0130); // 304 bytes (0x0000F0 - 0x000130)
static_assert(sizeof(UPawnMovementComponent) == 0x0138); // 312 bytes (0x000130 - 0x000138)
static_assert(sizeof(FVector_NetQuantize) == 0x000C); // 12 bytes (0x00000C - 0x00000C)
static_assert(sizeof(FVector_NetQuantizeNormal) == 0x000C); // 12 bytes (0x00000C - 0x00000C)
static_assert(sizeof(FHitResult) == 0x008C); // 140 bytes (0x000000 - 0x00008C)
static_assert(sizeof(FFindFloorResult) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FNavAvoidanceMask) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FCharacterMovementComponentPostPhysicsTickFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UCharacterMovementComponent) == 0x0B00); // 2816 bytes (0x000138 - 0x000B00)
static_assert(sizeof(USoundEffectSourcePreset) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FWeightedBlendable) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWeightedBlendables) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPostProcessSettings) == 0x0550); // 1360 bytes (0x000000 - 0x000550)
static_assert(sizeof(ACameraActor) == 0x07A0); // 1952 bytes (0x000220 - 0x0007A0)
static_assert(sizeof(FFOscillator) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FROscillator) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FVOscillator) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UMatineeCameraShake) == 0x0178); // 376 bytes (0x000098 - 0x000178)
static_assert(sizeof(UShapeComponent) == 0x0480); // 1152 bytes (0x000468 - 0x000480)
static_assert(sizeof(UBoxComponent) == 0x0490); // 1168 bytes (0x000480 - 0x000490)
static_assert(sizeof(USphereComponent) == 0x0490); // 1168 bytes (0x000480 - 0x000490)
static_assert(sizeof(ATriggerBase) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(ATriggerBox) == 0x0228); // 552 bytes (0x000228 - 0x000228)
static_assert(sizeof(UChildActorComponent) == 0x0230); // 560 bytes (0x0001F8 - 0x000230)
static_assert(sizeof(UGameInstance) == 0x01A8); // 424 bytes (0x000028 - 0x0001A8)
static_assert(sizeof(UArrowComponent) == 0x0480); // 1152 bytes (0x000468 - 0x000480)
static_assert(sizeof(FEngineShowFlagsSetting) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(USceneCaptureComponent) == 0x02B0); // 688 bytes (0x0001F8 - 0x0002B0)
static_assert(sizeof(USceneCaptureComponent2D) == 0x08B0); // 2224 bytes (0x0002B0 - 0x0008B0)
static_assert(sizeof(USpringArmComponent) == 0x0280); // 640 bytes (0x0001F8 - 0x000280)
static_assert(sizeof(UTextRenderComponent) == 0x04B8); // 1208 bytes (0x000468 - 0x0004B8)
static_assert(sizeof(UCameraComponent) == 0x07E0); // 2016 bytes (0x0001F8 - 0x0007E0)
static_assert(sizeof(ASkyLight) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UTexture) == 0x00D8); // 216 bytes (0x000060 - 0x0000D8)
static_assert(sizeof(UTextureCube) == 0x0130); // 304 bytes (0x0000D8 - 0x000130)
static_assert(sizeof(FStaticMeshComponentLODInfo) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FStreamingTextureBuildInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FLightmassPrimitiveSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UStaticMeshComponent) == 0x04F8); // 1272 bytes (0x000490 - 0x0004F8)
static_assert(sizeof(FInstancedStaticMeshInstanceData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FInstancedStaticMeshMappingInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UInstancedStaticMeshComponent) == 0x05A0); // 1440 bytes (0x0004F8 - 0x0005A0)
static_assert(sizeof(UHierarchicalInstancedStaticMeshComponent) == 0x0690); // 1680 bytes (0x0005A0 - 0x000690)
static_assert(sizeof(AStaticMeshActor) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(FLightmassMaterialInterfaceSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMaterialTextureInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UMaterialInterface) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(FMaterialParameterInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FScalarParameterValue) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FVectorParameterValue) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FTextureParameterValue) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRuntimeVirtualTextureParameterValue) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FFontParameterValue) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMaterialInstanceBasePropertyOverrides) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FStaticParameterBase) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FStaticSwitchParameter) == 0x0028); // 40 bytes (0x000024 - 0x000028)
static_assert(sizeof(FStaticComponentMaskParameter) == 0x0028); // 40 bytes (0x000024 - 0x000028)
static_assert(sizeof(FStaticTerrainLayerWeightParameter) == 0x002C); // 44 bytes (0x000024 - 0x00002C)
static_assert(sizeof(FMaterialLayersFunctions) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FStaticMaterialLayersParameter) == 0x0068); // 104 bytes (0x000024 - 0x000068)
static_assert(sizeof(FStaticParameterSet) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FMaterialCachedParameterEntry) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FMaterialCachedParameters) == 0x01A0); // 416 bytes (0x000000 - 0x0001A0)
static_assert(sizeof(UMaterialInstance) == 0x0378); // 888 bytes (0x000088 - 0x000378)
static_assert(sizeof(UMaterialInstanceConstant) == 0x0380); // 896 bytes (0x000378 - 0x000380)
static_assert(sizeof(UMaterialExpressionCustomOutput) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UDynamicBlueprintBinding) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBlueprintCore) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UBlueprint) == 0x00A0); // 160 bytes (0x000050 - 0x0000A0)
static_assert(sizeof(UModel) == 0x0258); // 600 bytes (0x000028 - 0x000258)
static_assert(sizeof(UChannel) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UActorChannel) == 0x0298); // 664 bytes (0x000070 - 0x000298)
static_assert(sizeof(UAnimationAsset) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FInterpolationParameter) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPerBoneInterpolation) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FBlendSample) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FEditorElement) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBlendParameter) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UBlendSpaceBase) == 0x0148); // 328 bytes (0x000080 - 0x000148)
static_assert(sizeof(UBlendSpace) == 0x0150); // 336 bytes (0x000148 - 0x000150)
static_assert(sizeof(UAimOffsetBlendSpace) == 0x0150); // 336 bytes (0x000150 - 0x000150)
static_assert(sizeof(UBlendSpace1D) == 0x0150); // 336 bytes (0x000148 - 0x000150)
static_assert(sizeof(UAimOffsetBlendSpace1D) == 0x0150); // 336 bytes (0x000150 - 0x000150)
static_assert(sizeof(UAISystemBase) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(AAmbientSound) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(FCustomAttributeSetting) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UAnimationSettings) == 0x00D0); // 208 bytes (0x000038 - 0x0000D0)
static_assert(sizeof(FAnimGroupInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UAnimBlueprint) == 0x00C8); // 200 bytes (0x0000A0 - 0x0000C8)
static_assert(sizeof(FBakedStateExitTransition) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FBakedAnimationState) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FAnimationStateBase) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAnimationTransitionBetweenStates) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FBakedAnimationStateMachine) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FCachedPoseIndices) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FExposedValueCopyRecord) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FExposedValueHandler) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FGraphAssetPlayerInformation) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAnimGraphBlendOptions) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UAnimBlueprintGeneratedClass) == 0x05B0); // 1456 bytes (0x000328 - 0x0005B0)
static_assert(sizeof(UAnimBoneCompressionSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FAnimBlueprintFunction) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FAnimBlueprintFunctionData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UAnimClassData) == 0x0330); // 816 bytes (0x000028 - 0x000330)
static_assert(sizeof(UAnimClassInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSmartName) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FAnimCurveBase) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FFloatCurve) == 0x0098); // 152 bytes (0x000018 - 0x000098)
static_assert(sizeof(FRawCurveTracks) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAnimSequenceBase) == 0x00A8); // 168 bytes (0x000080 - 0x0000A8)
static_assert(sizeof(UAnimCompositeBase) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(FAnimSegment) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAnimTrack) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAnimComposite) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UAnimCompress) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAnimCompress_BitwiseCompressOnly) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UAnimCompress_LeastDestructive) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UAnimCompress_RemoveLinearKeys) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UAnimCompress_PerTrackCompression) == 0x00D8); // 216 bytes (0x000060 - 0x0000D8)
static_assert(sizeof(UAnimCompress_RemoveEverySecondKey) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UAnimCompress_RemoveTrivialKeys) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UAnimCurveCompressionCodec_CompressedRichCurve) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAnimCurveCompressionCodec_UniformIndexable) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAnimCurveCompressionCodec_UniformlySampled) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAnimCurveCompressionSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UAnimLayerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAnimMetaData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAlphaBlend) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAnimSyncMarker) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FMarkerSyncData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FCompositeSection) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(FSlotAnimationTrack) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBranchingPoint) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(FBranchingPointMarker) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FTimeStretchCurveMarker) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTimeStretchCurve) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UAnimMontage) == 0x01D0); // 464 bytes (0x0000A8 - 0x0001D0)
static_assert(sizeof(UAnimNotify_PauseClothingSimulation) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAnimNotify_PlayParticleEffect) == 0x0090); // 144 bytes (0x000038 - 0x000090)
static_assert(sizeof(UAnimNotify_PlaySound) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(UAnimNotify_ResetClothingSimulation) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAnimNotify_ResetDynamics) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAnimNotify_ResumeClothingSimulation) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAnimNotifyState_DisableRootMotion) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAnimNotifyState_TimedParticleEffect) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UAnimNotifyState_Trail) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(FTrackToSkeletonMap) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FStringCurveKey) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FStringCurve) == 0x0088); // 136 bytes (0x000068 - 0x000088)
static_assert(sizeof(FBakedStringCustomAttribute) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FIntegralKey) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FIntegralCurve) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(FBakedIntegerCustomAttribute) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FSimpleCurveKey) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSimpleCurve) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(FBakedFloatCustomAttribute) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FBakedCustomAttributePerBoneData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UAnimSequence) == 0x01B0); // 432 bytes (0x0000A8 - 0x0001B0)
static_assert(sizeof(FAnimSetMeshLinkup) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAnimSet) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(UAnimSingleNodeInstance) == 0x02D0); // 720 bytes (0x0002B8 - 0x0002D0)
static_assert(sizeof(UAnimStateMachineTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAnimStreamable) == 0x00E0); // 224 bytes (0x0000A8 - 0x0000E0)
static_assert(sizeof(UAssetExportTask) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FPrimaryAssetRules) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FPrimaryAssetTypeInfo) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FPrimaryAssetRulesOverride) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FPrimaryAssetRulesCustomOverride) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FAssetManagerRedirect) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UAssetManagerSettings) == 0x0100); // 256 bytes (0x000038 - 0x000100)
static_assert(sizeof(FAssetMapping) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAssetMappingTable) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UAsyncActionHandleSaveGame) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UAsyncActionLoadPrimaryAssetBase) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UAsyncActionLoadPrimaryAsset) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(UAsyncActionLoadPrimaryAssetClass) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(UAsyncActionLoadPrimaryAssetList) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(UAsyncActionLoadPrimaryAssetClassList) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(UAsyncActionChangePrimaryAssetBundles) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(AAtmosphericFog) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(FAtmospherePrecomputeParameters) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(UAtmosphericFogComponent) == 0x0300); // 768 bytes (0x0001F8 - 0x000300)
static_assert(sizeof(UAudioBus) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FAudioQualitySettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UAudioSettings) == 0x0148); // 328 bytes (0x000038 - 0x000148)
static_assert(sizeof(FReverbSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FInteriorSettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FAudioVolumeSubmixSendSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAudioVolumeSubmixOverrideSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(AAudioVolume) == 0x02C8); // 712 bytes (0x000258 - 0x0002C8)
static_assert(sizeof(UAutoDestroySubsystem) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(FEditorMapPerformanceTestDefinition) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FFilePath) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FImportFactorySettingValues) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FEditorImportWorkflowDefinition) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FBuildPromotionImportWorkflowSettings) == 0x0150); // 336 bytes (0x000000 - 0x000150)
static_assert(sizeof(FBuildPromotionOpenAssetSettings) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FBuildPromotionNewProjectSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FBuildPromotionTestSettings) == 0x01F0); // 496 bytes (0x000000 - 0x0001F0)
static_assert(sizeof(FMaterialEditorPromotionSettings) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FParticleEditorPromotionSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBlueprintEditorPromotionSettings) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FExternalToolDefinition) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FEditorImportExportTestDefinition) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FLaunchOnTestSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UAutomationTestSettings) == 0x0340); // 832 bytes (0x000028 - 0x000340)
static_assert(sizeof(UAvoidanceManager) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(FBandwidthTestItem) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBandwidthTestGenerator) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(ABandwidthTestActor) == 0x0240); // 576 bytes (0x000220 - 0x000240)
static_assert(sizeof(UBillboardComponent) == 0x0490); // 1168 bytes (0x000468 - 0x000490)
static_assert(sizeof(UBlendableInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FBoneNode) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVirtualBone) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSmartNameContainer) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FAnimSlotGroup) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(USkeleton) == 0x0378); // 888 bytes (0x000028 - 0x000378)
static_assert(sizeof(FBlendProfileBoneEntry) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UBlendProfile) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(ABlockingVolume) == 0x0258); // 600 bytes (0x000258 - 0x000258)
static_assert(sizeof(UBlueprintExtension) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBlueprintMapLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBlueprintPathsLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPlatformGameInstance) == 0x0278); // 632 bytes (0x0001A8 - 0x000278)
static_assert(sizeof(UBlueprintPlatformLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBlueprintSetLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FKShapeElem) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FKSphereElem) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(FKBoxElem) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(FKSphylElem) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(FKConvexElem) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(FKTaperedCapsuleElem) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(FKAggregateGeom) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(UBodySetup) == 0x02A0); // 672 bytes (0x000048 - 0x0002A0)
static_assert(sizeof(FBranchFilter) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FInputBlendPose) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UBoneMaskFilter) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UBookmarkBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBookMark) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UBookMark2D) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UBoundsCopyComponent) == 0x0120); // 288 bytes (0x0000B0 - 0x000120)
static_assert(sizeof(AReflectionCapture) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(ABoxReflectionCapture) == 0x0228); // 552 bytes (0x000228 - 0x000228)
static_assert(sizeof(UReflectionCaptureComponent) == 0x0278); // 632 bytes (0x0001F8 - 0x000278)
static_assert(sizeof(UBoxReflectionCaptureComponent) == 0x0290); // 656 bytes (0x000278 - 0x000290)
static_assert(sizeof(UBreakpoint) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FBuilderPoly) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UBrushBuilder) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UBrushComponent) == 0x0480); // 1152 bytes (0x000468 - 0x000480)
static_assert(sizeof(ABrushShape) == 0x0258); // 600 bytes (0x000258 - 0x000258)
static_assert(sizeof(UButtonStyleAsset) == 0x03D0); // 976 bytes (0x000028 - 0x0003D0)
static_assert(sizeof(UCameraAnim) == 0x05C0); // 1472 bytes (0x000028 - 0x0005C0)
static_assert(sizeof(UCameraAnimInst) == 0x0110); // 272 bytes (0x000028 - 0x000110)
static_assert(sizeof(ACameraBlockingVolume) == 0x0258); // 600 bytes (0x000258 - 0x000258)
static_assert(sizeof(UCameraModifier) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FActiveCameraShakeInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPooledCameraShakes) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UCameraModifier_CameraShake) == 0x00B0); // 176 bytes (0x000048 - 0x0000B0)
static_assert(sizeof(ACameraShakeSourceActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UCameraShakeSourceComponent) == 0x0220); // 544 bytes (0x0001F8 - 0x000220)
static_assert(sizeof(UCanvas) == 0x02D0); // 720 bytes (0x000028 - 0x0002D0)
static_assert(sizeof(UTextureRenderTarget) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UTextureRenderTarget2D) == 0x0108); // 264 bytes (0x0000E0 - 0x000108)
static_assert(sizeof(UCanvasRenderTarget2D) == 0x0128); // 296 bytes (0x000108 - 0x000128)
static_assert(sizeof(UCapsuleComponent) == 0x0490); // 1168 bytes (0x000480 - 0x000490)
static_assert(sizeof(UCheatManager) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UCheckBoxStyleAsset) == 0x0840); // 2112 bytes (0x000028 - 0x000840)
static_assert(sizeof(UChildConnection) == 0x1AF8); // 6904 bytes (0x001AF0 - 0x001AF8)
static_assert(sizeof(FDelegateArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPlatformInterfaceBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UCloudStorageBase) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FCollisionResponseTemplate) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FCustomChannelSetup) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FCustomProfile) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRedirector) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UCollisionProfile) == 0x0170); // 368 bytes (0x000038 - 0x000170)
static_assert(sizeof(FBlueprintComponentDelegateBinding) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UComponentDelegateBinding) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UActorComponentInstanceDataTransientOuter) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCurveTable) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UCompositeCurveTable) == 0x00C8); // 200 bytes (0x0000A0 - 0x0000C8)
static_assert(sizeof(UDataTable) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(UCompositeDataTable) == 0x00D8); // 216 bytes (0x0000B0 - 0x0000D8)
static_assert(sizeof(UConsole) == 0x0130); // 304 bytes (0x000028 - 0x000130)
static_assert(sizeof(UControlChannel) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(UStreamingSettings) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UGarbageCollectionSettings) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(FCullDistanceSizePair) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(ACullDistanceVolume) == 0x0270); // 624 bytes (0x000258 - 0x000270)
static_assert(sizeof(UCurveBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UCurveEdPresetCurve) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCurveFloat) == 0x00B8); // 184 bytes (0x000030 - 0x0000B8)
static_assert(sizeof(UCurveLinearColor) == 0x0250); // 592 bytes (0x000030 - 0x000250)
static_assert(sizeof(UTexture2D) == 0x0100); // 256 bytes (0x0000D8 - 0x000100)
static_assert(sizeof(UCurveLinearColorAtlas) == 0x0118); // 280 bytes (0x000100 - 0x000118)
static_assert(sizeof(UCurveSourceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCurveVector) == 0x01B0); // 432 bytes (0x000030 - 0x0001B0)
static_assert(sizeof(UDamageType) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UDataTableFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ADebugCameraController) == 0x0678); // 1656 bytes (0x000570 - 0x000678)
static_assert(sizeof(FDebugCameraControllerSettingsViewModeIndex) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UDebugCameraControllerSettings) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(FDebugTextInfo) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(AHUD) == 0x0310); // 784 bytes (0x000220 - 0x000310)
static_assert(sizeof(ADebugCameraHUD) == 0x0310); // 784 bytes (0x000310 - 0x000310)
static_assert(sizeof(UDebugDrawService) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ADecalActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UDecalComponent) == 0x0240); // 576 bytes (0x0001F8 - 0x000240)
static_assert(sizeof(ADefaultPawn) == 0x02A8); // 680 bytes (0x000280 - 0x0002A8)
static_assert(sizeof(APhysicsVolume) == 0x0268); // 616 bytes (0x000258 - 0x000268)
static_assert(sizeof(ADefaultPhysicsVolume) == 0x0268); // 616 bytes (0x000268 - 0x000268)
static_assert(sizeof(UDemoNetConnection) == 0x1B60); // 7008 bytes (0x001AF0 - 0x001B60)
static_assert(sizeof(FRollbackNetStartupActorInfo) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FMulticastRecordOptions) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UDemoNetDriver) == 0x12C0); // 4800 bytes (0x000748 - 0x0012C0)
static_assert(sizeof(UPendingNetGame) == 0x00C0); // 192 bytes (0x000028 - 0x0000C0)
static_assert(sizeof(UDemoPendingNetGame) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UDestructibleInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FTextureLODGroup) == 0x0064); // 100 bytes (0x000000 - 0x000064)
static_assert(sizeof(UTextureLODSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UDeviceProfile) == 0x00A8); // 168 bytes (0x000038 - 0x0000A8)
static_assert(sizeof(UDeviceProfileFragment) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UDeviceProfileManager) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(UDialogueSoundWaveProxy) == 0x01D0); // 464 bytes (0x0001B8 - 0x0001D0)
static_assert(sizeof(UDialogueVoice) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FDialogueContext) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FDialogueContextMapping) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UDialogueWave) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(ALight) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(ADirectionalLight) == 0x0230); // 560 bytes (0x000230 - 0x000230)
static_assert(sizeof(ULightComponentBase) == 0x0228); // 552 bytes (0x0001F8 - 0x000228)
static_assert(sizeof(ULightComponent) == 0x0328); // 808 bytes (0x000228 - 0x000328)
static_assert(sizeof(FLightmassLightSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FLightmassDirectionalLightSettings) == 0x0010); // 16 bytes (0x00000C - 0x000010)
static_assert(sizeof(UDirectionalLightComponent) == 0x03F0); // 1008 bytes (0x000328 - 0x0003F0)
static_assert(sizeof(UDistribution) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UDistributionFloat) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UDistributionFloatConstant) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UDistributionFloatConstantCurve) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UDistributionFloatParameterBase) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UDistributionFloatParticleParameter) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UDistributionFloatUniform) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UDistributionFloatUniformCurve) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UDistributionVector) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UDistributionVectorConstant) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UDistributionVectorConstantCurve) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(UDistributionVectorParameterBase) == 0x0090); // 144 bytes (0x000050 - 0x000090)
static_assert(sizeof(UDistributionVectorParticleParameter) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UDistributionVectorUniform) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UDistributionVectorUniformCurve) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(ADocumentationActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UDPICustomScalingRule) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDrawFrustumComponent) == 0x0490); // 1168 bytes (0x000468 - 0x000490)
static_assert(sizeof(UDrawSphereComponent) == 0x0490); // 1168 bytes (0x000490 - 0x000490)
static_assert(sizeof(UEdGraph) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UGraphNodeContextMenuContext) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UEdGraphNode) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(UEdGraphNode_Documentation) == 0x00B8); // 184 bytes (0x000098 - 0x0000B8)
static_assert(sizeof(FEdGraphTerminalType) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FEdGraphPinType) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(UEdGraphPin_Deprecated) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(UEdGraphSchema) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AEmitter) == 0x0270); // 624 bytes (0x000220 - 0x000270)
static_assert(sizeof(AEmitterCameraLensEffectBase) == 0x02E0); // 736 bytes (0x000270 - 0x0002E0)
static_assert(sizeof(UViewModeUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEngineBaseTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEngineHandlerComponentFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULocalMessage) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEngineMessage) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UEngineTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AExponentialHeightFog) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(FExponentialHeightFogData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UExponentialHeightFogComponent) == 0x02A0); // 672 bytes (0x0001F8 - 0x0002A0)
static_assert(sizeof(UExporter) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UFloatingPawnMovement) == 0x0150); // 336 bytes (0x000138 - 0x000150)
static_assert(sizeof(FFontCharacter) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FFontImportOptionsData) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(UFont) == 0x01D0); // 464 bytes (0x000028 - 0x0001D0)
static_assert(sizeof(UFontFace) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UFontImportOptions) == 0x00D8); // 216 bytes (0x000028 - 0x0000D8)
static_assert(sizeof(FForceFeedbackAttenuationSettings) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UForceFeedbackAttenuation) == 0x00D8); // 216 bytes (0x000028 - 0x0000D8)
static_assert(sizeof(UForceFeedbackComponent) == 0x02E0); // 736 bytes (0x0001F8 - 0x0002E0)
static_assert(sizeof(FForceFeedbackChannelDetails) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(UForceFeedbackEffect) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UGameEngine) == 0x0E30); // 3632 bytes (0x000DE0 - 0x000E30)
static_assert(sizeof(UGameInstanceSubsystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(AGameNetworkManager) == 0x02D0); // 720 bytes (0x000220 - 0x0002D0)
static_assert(sizeof(UGameplayStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AGameSession) == 0x0238); // 568 bytes (0x000220 - 0x000238)
static_assert(sizeof(ASpotLight) == 0x0238); // 568 bytes (0x000230 - 0x000238)
static_assert(sizeof(AGeneratedMeshAreaLight) == 0x0238); // 568 bytes (0x000238 - 0x000238)
static_assert(sizeof(UHapticFeedbackEffect_Base) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UHapticFeedbackEffect_Buffer) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FHapticFeedbackDetails_Curve) == 0x0110); // 272 bytes (0x000000 - 0x000110)
static_assert(sizeof(UHapticFeedbackEffect_Curve) == 0x0138); // 312 bytes (0x000028 - 0x000138)
static_assert(sizeof(UHapticFeedbackEffect_SoundWave) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UHealthSnapshotBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UHLODEngineSubsystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FHLODProxyMesh) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UHLODProxy) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UHLODProxyDesc) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UImportanceSamplingLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UImportantToggleSettingInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInGameAdManager) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(FComponentKey) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FComponentOverrideRecord) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(UInheritableComponentHandler) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UInputDelegateBinding) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FBlueprintInputDelegateBinding) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FBlueprintInputActionDelegateBinding) == 0x0018); // 24 bytes (0x000004 - 0x000018)
static_assert(sizeof(UInputActionDelegateBinding) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FBlueprintInputAxisDelegateBinding) == 0x0014); // 20 bytes (0x000004 - 0x000014)
static_assert(sizeof(UInputAxisDelegateBinding) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FBlueprintInputAxisKeyDelegateBinding) == 0x0028); // 40 bytes (0x000004 - 0x000028)
static_assert(sizeof(UInputAxisKeyDelegateBinding) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FCachedKeyToActionInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UInputComponent) == 0x0138); // 312 bytes (0x0000B0 - 0x000138)
static_assert(sizeof(FBlueprintInputKeyDelegateBinding) == 0x0038); // 56 bytes (0x000004 - 0x000038)
static_assert(sizeof(UInputKeyDelegateBinding) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FInputAxisProperties) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FInputAxisConfigEntry) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInputActionKeyMapping) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FInputAxisKeyMapping) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FInputActionSpeechMapping) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UInputSettings) == 0x0140); // 320 bytes (0x000028 - 0x000140)
static_assert(sizeof(FBlueprintInputTouchDelegateBinding) == 0x0010); // 16 bytes (0x000004 - 0x000010)
static_assert(sizeof(UInputTouchDelegateBinding) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UInputVectorAxisDelegateBinding) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UInterface_AssetUserData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBoneReferenceSkeletonProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInterface_CollisionDataProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInterface_PostProcessVolume) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInterface_PreviewMeshProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FCurveEdEntry) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FCurveEdTab) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UInterpCurveEdSetup) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UInterpData) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UInterpFilter) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UInterpFilter_Classes) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UInterpFilter_Custom) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UInterpGroup) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UInterpGroupCamera) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UInterpGroupDirector) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UInterpGroupInst) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UInterpGroupInstCamera) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UInterpGroupInstDirector) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(FInterpControlPoint) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(UInterpToMovementComponent) == 0x0190); // 400 bytes (0x0000F0 - 0x000190)
static_assert(sizeof(UInterpTrack) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UInterpTrackFloatBase) == 0x0090); // 144 bytes (0x000070 - 0x000090)
static_assert(sizeof(FAnimControlTrackKey) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UInterpTrackAnimControl) == 0x00B0); // 176 bytes (0x000090 - 0x0000B0)
static_assert(sizeof(UInterpTrackVectorBase) == 0x0090); // 144 bytes (0x000070 - 0x000090)
static_assert(sizeof(UInterpTrackAudioMaster) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(FBoolTrackKey) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UInterpTrackBoolProp) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(UInterpTrackColorProp) == 0x0098); // 152 bytes (0x000090 - 0x000098)
static_assert(sizeof(UInterpTrackColorScale) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(FDirectorTrackCut) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UInterpTrackDirector) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(FEventTrackKey) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UInterpTrackEvent) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(UInterpTrackFade) == 0x00A8); // 168 bytes (0x000090 - 0x0000A8)
static_assert(sizeof(UInterpTrackFloatAnimBPParam) == 0x00B0); // 176 bytes (0x000090 - 0x0000B0)
static_assert(sizeof(UInterpTrackFloatMaterialParam) == 0x00A8); // 168 bytes (0x000090 - 0x0000A8)
static_assert(sizeof(UInterpTrackFloatParticleParam) == 0x0098); // 152 bytes (0x000090 - 0x000098)
static_assert(sizeof(UInterpTrackFloatProp) == 0x0098); // 152 bytes (0x000090 - 0x000098)
static_assert(sizeof(UInterpTrackInst) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInterpTrackInstAnimControl) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UInterpTrackInstAudioMaster) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInterpTrackInstProperty) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UInterpTrackInstBoolProp) == 0x0068); // 104 bytes (0x000050 - 0x000068)
static_assert(sizeof(UInterpTrackInstColorProp) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UInterpTrackInstColorScale) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInterpTrackInstDirector) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UInterpTrackInstEvent) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UInterpTrackInstFade) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInterpTrackInstFloatAnimBPParam) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FPrimitiveMaterialRef) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UInterpTrackInstFloatMaterialParam) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UInterpTrackInstFloatParticleParam) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UInterpTrackInstFloatProp) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UInterpTrackInstLinearColorProp) == 0x0068); // 104 bytes (0x000050 - 0x000068)
static_assert(sizeof(UInterpTrackInstMove) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UInterpTrackInstParticleReplay) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UInterpTrackInstSlomo) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UInterpTrackInstSound) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UInterpTrackInstToggle) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UInterpTrackInstVectorMaterialParam) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UInterpTrackInstVectorProp) == 0x0068); // 104 bytes (0x000050 - 0x000068)
static_assert(sizeof(UInterpTrackInstVisibility) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UInterpTrackLinearColorBase) == 0x0090); // 144 bytes (0x000070 - 0x000090)
static_assert(sizeof(UInterpTrackLinearColorProp) == 0x0098); // 152 bytes (0x000090 - 0x000098)
static_assert(sizeof(FInterpLookupPoint) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FInterpLookupTrack) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UInterpTrackMove) == 0x00C8); // 200 bytes (0x000070 - 0x0000C8)
static_assert(sizeof(UInterpTrackMoveAxis) == 0x00A8); // 168 bytes (0x000090 - 0x0000A8)
static_assert(sizeof(FParticleReplayTrackKey) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UInterpTrackParticleReplay) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UInterpTrackSlomo) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(FSoundTrackKey) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UInterpTrackSound) == 0x00A8); // 168 bytes (0x000090 - 0x0000A8)
static_assert(sizeof(FToggleTrackKey) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UInterpTrackToggle) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(UInterpTrackVectorMaterialParam) == 0x00A8); // 168 bytes (0x000090 - 0x0000A8)
static_assert(sizeof(UInterpTrackVectorProp) == 0x0098); // 152 bytes (0x000090 - 0x000098)
static_assert(sizeof(FVisibilityTrackKey) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UInterpTrackVisibility) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(UIntSerialization) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(AKillZVolume) == 0x0268); // 616 bytes (0x000268 - 0x000268)
static_assert(sizeof(UKismetArrayLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKismetGuidLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKismetInputLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKismetInternationalizationLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKismetMaterialLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKismetMathLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKismetNodeHelperLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKismetRenderingLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKismetStringLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKismetStringTableLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKismetSystemLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKismetTextLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FLayerActorStats) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(ULayer) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(ULevelPartitionInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FReplicatedStaticActorDestructionInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(ULevel) == 0x0298); // 664 bytes (0x000028 - 0x000298)
static_assert(sizeof(ULevelActorContainer) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ALevelBounds) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(ALevelScriptActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(ULevelScriptBlueprint) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(ULevelStreaming) == 0x0148); // 328 bytes (0x000028 - 0x000148)
static_assert(sizeof(ULevelStreamingAlwaysLoaded) == 0x0150); // 336 bytes (0x000148 - 0x000150)
static_assert(sizeof(ULevelStreamingDynamic) == 0x0150); // 336 bytes (0x000148 - 0x000150)
static_assert(sizeof(ULevelStreamingPersistent) == 0x0150); // 336 bytes (0x000148 - 0x000150)
static_assert(sizeof(ALevelStreamingVolume) == 0x0270); // 624 bytes (0x000258 - 0x000270)
static_assert(sizeof(ULightmappedSurfaceCollection) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ULightMapTexture2D) == 0x0108); // 264 bytes (0x000100 - 0x000108)
static_assert(sizeof(ULightMapVirtualTexture2D) == 0x0118); // 280 bytes (0x000100 - 0x000118)
static_assert(sizeof(ALightmassCharacterIndirectDetailVolume) == 0x0258); // 600 bytes (0x000258 - 0x000258)
static_assert(sizeof(ALightmassImportanceVolume) == 0x0258); // 600 bytes (0x000258 - 0x000258)
static_assert(sizeof(ALightmassPortal) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(ULightmassPortalComponent) == 0x0200); // 512 bytes (0x0001F8 - 0x000200)
static_assert(sizeof(ULightmassPrimitiveSettingsObject) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ULineBatchComponent) == 0x04B0); // 1200 bytes (0x000468 - 0x0004B0)
static_assert(sizeof(FLightmassPointLightSettings) == 0x000C); // 12 bytes (0x00000C - 0x00000C)
static_assert(sizeof(ULocalLightComponent) == 0x0340); // 832 bytes (0x000328 - 0x000340)
static_assert(sizeof(ALODActor) == 0x02A8); // 680 bytes (0x000220 - 0x0002A8)
static_assert(sizeof(FComponentSync) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FLODMappingData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(ULODSyncComponent) == 0x0140); // 320 bytes (0x0000B0 - 0x000140)
static_assert(sizeof(ULODSyncInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMapBuildDataRegistry) == 0x0238); // 568 bytes (0x000028 - 0x000238)
static_assert(sizeof(FMaterialInput) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FScalarMaterialInput) == 0x000C); // 12 bytes (0x00000C - 0x00000C)
static_assert(sizeof(FVectorMaterialInput) == 0x000C); // 12 bytes (0x00000C - 0x00000C)
static_assert(sizeof(FColorMaterialInput) == 0x000C); // 12 bytes (0x00000C - 0x00000C)
static_assert(sizeof(FMaterialShadingModelField) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FMaterialAttributesInput) == 0x0010); // 16 bytes (0x00000C - 0x000010)
static_assert(sizeof(FShadingModelMaterialInput) == 0x000C); // 12 bytes (0x00000C - 0x00000C)
static_assert(sizeof(FMaterialFunctionInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMaterialParameterCollectionInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMaterialCachedExpressionData) == 0x0228); // 552 bytes (0x000000 - 0x000228)
static_assert(sizeof(UMaterial) == 0x0498); // 1176 bytes (0x000088 - 0x000498)
static_assert(sizeof(FMaterialSpriteElement) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UMaterialBillboardComponent) == 0x0480); // 1152 bytes (0x000468 - 0x000480)
static_assert(sizeof(UMaterialExpressionAbs) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionActorPositionWS) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionAdd) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(UMaterialExpressionAdvancedFeatureSwitch) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionAntialiasedTextureMask) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(UMaterialExpressionAppendVector) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionArccosine) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionArccosineFast) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionArcsine) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionArcsineFast) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionArctangent) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionArctangent2) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionArctangent2Fast) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionArctangentFast) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionAtmosphericFogColor) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionAtmosphericLightColor) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionAtmosphericLightVector) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionBentNormalCustomOutput) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionBlackBody) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionBlendMaterialAttributes) == 0x0088); // 136 bytes (0x000040 - 0x000088)
static_assert(sizeof(UMaterialExpressionBreakMaterialAttributes) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionBumpOffset) == 0x0088); // 136 bytes (0x000040 - 0x000088)
static_assert(sizeof(UMaterialExpressionCameraPositionWS) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionCameraVectorWS) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionCeil) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionParameter) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionVectorParameter) == 0x0070); // 112 bytes (0x000058 - 0x000070)
static_assert(sizeof(UMaterialExpressionChannelMaskParameter) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UMaterialExpressionClamp) == 0x0088); // 136 bytes (0x000040 - 0x000088)
static_assert(sizeof(UMaterialExpressionClearCoatNormalCustomOutput) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionCloudSampleAttribute) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionCollectionParameter) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMaterialExpressionComment) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(UMaterialExpressionComponentMask) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionConstant) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMaterialExpressionConstant2Vector) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMaterialExpressionConstant3Vector) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UMaterialExpressionConstant4Vector) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UMaterialExpressionConstantBiasScale) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMaterialExpressionCosine) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionCrossProduct) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionScalarParameter) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(UMaterialExpressionCurveAtlasRowParameter) == 0x0088); // 136 bytes (0x000060 - 0x000088)
static_assert(sizeof(FCustomInput) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FCustomOutput) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FCustomDefine) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UMaterialExpressionCustom) == 0x00A8); // 168 bytes (0x000040 - 0x0000A8)
static_assert(sizeof(UMaterialExpressionDDX) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionDDY) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionDecalDerivative) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionDecalLifetimeOpacity) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionDecalMipmapLevel) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMaterialExpressionDeltaTime) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionDepthFade) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(UMaterialExpressionDepthOfFieldFunction) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionDeriveNormalZ) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionDesaturation) == 0x0078); // 120 bytes (0x000040 - 0x000078)
static_assert(sizeof(UMaterialExpressionDistance) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionDistanceCullFade) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionDistanceFieldGradient) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionDistanceToNearestSurface) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionDivide) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(UMaterialExpressionDotProduct) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionDynamicParameter) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionEdenCustomMaterialOutput) == 0x00E0); // 224 bytes (0x000040 - 0x0000E0)
static_assert(sizeof(UMaterialExpressionEyeAdaptation) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionFeatureLevelSwitch) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionFloor) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionFmod) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionFontSample) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UMaterialExpressionFontSampleParameter) == 0x0070); // 112 bytes (0x000050 - 0x000070)
static_assert(sizeof(UMaterialExpressionFrac) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionFresnel) == 0x0088); // 136 bytes (0x000040 - 0x000088)
static_assert(sizeof(UMaterialExpressionFunctionInput) == 0x00C0); // 192 bytes (0x000040 - 0x0000C0)
static_assert(sizeof(UMaterialExpressionFunctionOutput) == 0x0088); // 136 bytes (0x000040 - 0x000088)
static_assert(sizeof(UMaterialExpressionGetMaterialAttributes) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionGIReplace) == 0x0080); // 128 bytes (0x000040 - 0x000080)
static_assert(sizeof(UMaterialExpressionHairAttributes) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMaterialExpressionHairColor) == 0x0080); // 128 bytes (0x000040 - 0x000080)
static_assert(sizeof(UMaterialExpressionIf) == 0x00B0); // 176 bytes (0x000040 - 0x0000B0)
static_assert(sizeof(UMaterialExpressionInverseLinearInterpolate) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(UMaterialExpressionLightmapUVs) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionLightmassReplace) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionLightVector) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionLinearInterpolate) == 0x0088); // 136 bytes (0x000040 - 0x000088)
static_assert(sizeof(UMaterialExpressionLogarithm10) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionLogarithm2) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionMakeMaterialAttributes) == 0x0270); // 624 bytes (0x000040 - 0x000270)
static_assert(sizeof(UMaterialExpressionMapARPassthroughCameraUV) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionMaterialAttributeLayers) == 0x00E8); // 232 bytes (0x000040 - 0x0000E8)
static_assert(sizeof(UMaterialExpressionMaterialFunctionCall) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionMaterialLayerOutput) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UMaterialExpressionMaterialProxyReplace) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionMax) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(UMaterialExpressionMin) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(UMaterialExpressionMultiply) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(UMaterialExpressionNoise) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(UMaterialExpressionNormalize) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionObjectBounds) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionObjectOrientation) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionObjectPositionWS) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionObjectRadius) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionOneMinus) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionPanner) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(UMaterialExpressionParticleColor) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionParticleDirection) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionParticleMacroUV) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionParticleMotionBlurFade) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionParticlePositionWS) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionParticleRadius) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionParticleRandom) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionParticleRelativeTime) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionParticleSize) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionParticleSpeed) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionParticleSubUV) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UMaterialExpressionParticleSubUVProperties) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionPerInstanceCustomData) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMaterialExpressionPerInstanceFadeAmount) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionPerInstanceRandom) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionPixelDepth) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionPixelNormalWS) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionPower) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(UMaterialExpressionPrecomputedAOMask) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionPreSkinnedLocalBounds) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionPreSkinnedNormal) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionPreSkinnedPosition) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionPreSkinnedTangent) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionPreviousFrameSwitch) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionQualitySwitch) == 0x00D0); // 208 bytes (0x000040 - 0x0000D0)
static_assert(sizeof(UMaterialExpressionRayTracingQualitySwitch) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionReflectionCapturePassSwitch) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionReflectionVectorWS) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionReroute) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionRotateAboutAxis) == 0x0098); // 152 bytes (0x000040 - 0x000098)
static_assert(sizeof(UMaterialExpressionRotator) == 0x0078); // 120 bytes (0x000040 - 0x000078)
static_assert(sizeof(UMaterialExpressionRound) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionRuntimeVirtualTextureOutput) == 0x00D0); // 208 bytes (0x000040 - 0x0000D0)
static_assert(sizeof(UMaterialExpressionRuntimeVirtualTextureReplace) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionRuntimeVirtualTextureSample) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(UMaterialExpressionRuntimeVirtualTextureSampleParameter) == 0x00B0); // 176 bytes (0x000090 - 0x0000B0)
static_assert(sizeof(UMaterialExpressionSaturate) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionSceneColor) == 0x0078); // 120 bytes (0x000040 - 0x000078)
static_assert(sizeof(UMaterialExpressionSceneDepth) == 0x0078); // 120 bytes (0x000040 - 0x000078)
static_assert(sizeof(UMaterialExpressionSceneDepthWithoutWater) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionSceneTexelSize) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionSceneTexture) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionScreenPosition) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionSetMaterialAttributes) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMaterialExpressionShaderStageSwitch) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionShadingModel) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMaterialExpressionShadingPathSwitch) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(UMaterialExpressionShadowReplace) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionSign) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionSine) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionSingleLayerWaterMaterialOutput) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(UMaterialExpressionSkinningVertexOffsets) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionSkyAtmosphereLightDirection) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMaterialExpressionSkyAtmosphereLightIlluminance) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionSkyAtmosphereLightDiskLuminance) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMaterialExpressionSkyAtmosphereAerialPerspective) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionSkyAtmosphereViewLuminance) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionSmoothStep) == 0x0088); // 136 bytes (0x000040 - 0x000088)
static_assert(sizeof(UMaterialExpressionSobol) == 0x0088); // 136 bytes (0x000040 - 0x000088)
static_assert(sizeof(UMaterialExpressionSpeedTree) == 0x00A0); // 160 bytes (0x000040 - 0x0000A0)
static_assert(sizeof(UMaterialExpressionSphereMask) == 0x0098); // 152 bytes (0x000040 - 0x000098)
static_assert(sizeof(UMaterialExpressionSphericalParticleOpacity) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionSquareRoot) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionStaticBool) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMaterialExpressionStaticBoolParameter) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(UMaterialExpressionStaticComponentMaskParameter) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(UMaterialExpressionStaticSwitch) == 0x0080); // 128 bytes (0x000040 - 0x000080)
static_assert(sizeof(UMaterialExpressionStaticSwitchParameter) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UMaterialExpressionStep) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(UMaterialExpressionSubtract) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(UMaterialExpressionTangent) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionTangentOutput) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionTemporalSobol) == 0x0078); // 120 bytes (0x000040 - 0x000078)
static_assert(sizeof(UMaterialExpressionTextureCoordinate) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UMaterialExpressionTextureObject) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UMaterialExpressionTextureObjectParameter) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UMaterialExpressionTextureProperty) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionTextureSampleParameter2DArray) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UMaterialExpressionTextureSampleParameterCube) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UMaterialExpressionTextureSampleParameterSubUV) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(UMaterialExpressionTextureSampleParameterVolume) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UMaterialExpressionThinTranslucentMaterialOutput) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionTime) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMaterialExpressionTransform) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionTransformPosition) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionTruncate) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionTwoSidedSign) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionVectorNoise) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionVertexColor) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionVertexInterpolator) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMaterialExpressionVertexNormalWS) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionVertexTangentWS) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionViewProperty) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMaterialExpressionViewSize) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionVirtualTextureFeatureSwitch) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMaterialExpressionVolumetricAdvancedMaterialInput) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMaterialExpressionVolumetricAdvancedMaterialOutput) == 0x00F0); // 240 bytes (0x000040 - 0x0000F0)
static_assert(sizeof(UMaterialExpressionWorldPosition) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMaterialFunctionInterface) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMaterialFunction) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialFunctionInstance) == 0x00C0); // 192 bytes (0x000040 - 0x0000C0)
static_assert(sizeof(UMaterialFunctionMaterialLayer) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UMaterialFunctionMaterialLayerInstance) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UMaterialFunctionMaterialLayerBlend) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UMaterialFunctionMaterialLayerBlendInstance) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(AMaterialInstanceActor) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UMaterialInstanceDynamic) == 0x03C8); // 968 bytes (0x000378 - 0x0003C8)
static_assert(sizeof(FCollectionParameterBase) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCollectionScalarParameter) == 0x001C); // 28 bytes (0x000018 - 0x00001C)
static_assert(sizeof(FCollectionVectorParameter) == 0x0028); // 40 bytes (0x000018 - 0x000028)
static_assert(sizeof(UMaterialParameterCollection) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UMaterialParameterCollectionInstance) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(sizeof(FInterpGroupActorInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCameraCutInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(AMatineeActor) == 0x02C8); // 712 bytes (0x000220 - 0x0002C8)
static_assert(sizeof(AMatineeActorCameraAnim) == 0x02D0); // 720 bytes (0x0002C8 - 0x0002D0)
static_assert(sizeof(UMatineeAnimInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMatineeInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AMeshMergeCullingVolume) == 0x0258); // 600 bytes (0x000258 - 0x000258)
static_assert(sizeof(UMeshSimplificationSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UMeshVertexPainterKismetLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPurchaseInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UMicroTransactionBase) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UModelComponent) == 0x04B0); // 1200 bytes (0x000468 - 0x0004B0)
static_assert(sizeof(UMorphTarget) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UNavAgentInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNavAreaBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UNavCollisionBase) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UNavEdgeProviderInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNavigationDataChunk) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UNavigationDataInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ANavigationObjectBase) == 0x0248); // 584 bytes (0x000220 - 0x000248)
static_assert(sizeof(UNavigationSystemBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNavAgentSelector) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UNavigationSystemConfig) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UNullNavSysConfig) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FNavigationLinkBase) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNavigationLink) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(FNavigationSegmentLink) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UNavLinkDefinition) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UNavPathObserverInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNavRelevantInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USimulatedClientNetConnection) == 0x1AF0); // 6896 bytes (0x001AF0 - 0x001AF0)
static_assert(sizeof(UNetPushModelHelpers) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNetworkPredictionInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNetworkEmulationProfileDescription) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UNetworkSettings) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(FNodeItem) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UNodeMappingContainer) == 0x0168); // 360 bytes (0x000028 - 0x000168)
static_assert(sizeof(UNodeMappingProviderInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ANote) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(UObjectLibrary) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UObjectReferencer) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UObjectTraceWorldSubsystem) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UPackageMapClient) == 0x03F8); // 1016 bytes (0x0000E0 - 0x0003F8)
static_assert(sizeof(APainCausingVolume) == 0x0290); // 656 bytes (0x000268 - 0x000290)
static_assert(sizeof(UParticleEmitter) == 0x01C0); // 448 bytes (0x000028 - 0x0001C0)
static_assert(sizeof(AParticleEventManager) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(UParticleLODLevel) == 0x00B8); // 184 bytes (0x000028 - 0x0000B8)
static_assert(sizeof(UParticleModule) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UParticleModuleAccelerationBase) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FDistributionLookupTable) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRawDistribution) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRawDistributionVector) == 0x0048); // 72 bytes (0x000020 - 0x000048)
static_assert(sizeof(UParticleModuleAcceleration) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(UParticleModuleAccelerationConstant) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(FRawDistributionFloat) == 0x0030); // 48 bytes (0x000020 - 0x000030)
static_assert(sizeof(UParticleModuleAccelerationDrag) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UParticleModuleAccelerationDragScaleOverLife) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UParticleModuleAccelerationOverLifetime) == 0x0080); // 128 bytes (0x000038 - 0x000080)
static_assert(sizeof(UParticleModuleAttractorBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UParticleModuleAttractorLine) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UParticleModuleAttractorParticle) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UParticleModuleAttractorPoint) == 0x00E0); // 224 bytes (0x000030 - 0x0000E0)
static_assert(sizeof(UParticleModuleAttractorPointGravity) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UParticleModuleBeamBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FBeamModifierOptions) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UParticleModuleBeamModifier) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UParticleModuleBeamNoise) == 0x0190); // 400 bytes (0x000030 - 0x000190)
static_assert(sizeof(UParticleModuleBeamSource) == 0x0118); // 280 bytes (0x000030 - 0x000118)
static_assert(sizeof(UParticleModuleBeamTarget) == 0x0120); // 288 bytes (0x000030 - 0x000120)
static_assert(sizeof(UParticleModuleCameraBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UParticleModuleCameraOffset) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UParticleModuleCollisionBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UParticleModuleCollision) == 0x0190); // 400 bytes (0x000030 - 0x000190)
static_assert(sizeof(UParticleModuleCollisionGPU) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UParticleModuleColorBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UParticleModuleColor) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(FParticleRandomSeedInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UParticleModuleColor_Seeded) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(UParticleModuleColorOverLife) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UParticleModuleColorScaleOverLife) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UParticleModuleEventBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FParticleEvent_GenerateInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UParticleModuleEventGenerator) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UParticleModuleEventReceiverBase) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UParticleModuleEventReceiverKillParticles) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UParticleModuleEventReceiverSpawn) == 0x00D8); // 216 bytes (0x000040 - 0x0000D8)
static_assert(sizeof(UParticleModuleEventSendToGame) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UParticleModuleKillBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UParticleModuleKillBox) == 0x00C8); // 200 bytes (0x000030 - 0x0000C8)
static_assert(sizeof(UParticleModuleKillHeight) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UParticleModuleLifetimeBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UParticleModuleLifetime) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UParticleModuleLifetime_Seeded) == 0x0080); // 128 bytes (0x000060 - 0x000080)
static_assert(sizeof(UParticleModuleLightBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UParticleModuleLight) == 0x0120); // 288 bytes (0x000030 - 0x000120)
static_assert(sizeof(UParticleModuleLight_Seeded) == 0x0140); // 320 bytes (0x000120 - 0x000140)
static_assert(sizeof(UParticleModuleLocationBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UParticleModuleLocation) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UParticleModuleLocation_Seeded) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(FLocationBoneSocketInfo) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UParticleModuleLocationBoneSocket) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UParticleModuleLocationDirect) == 0x0150); // 336 bytes (0x000030 - 0x000150)
static_assert(sizeof(UParticleModuleLocationEmitter) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UParticleModuleLocationEmitterDirect) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UParticleModuleLocationPrimitiveBase) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UParticleModuleLocationPrimitiveCylinder) == 0x0120); // 288 bytes (0x0000B0 - 0x000120)
static_assert(sizeof(UParticleModuleLocationPrimitiveCylinder_Seeded) == 0x0140); // 320 bytes (0x000120 - 0x000140)
static_assert(sizeof(UParticleModuleLocationPrimitiveSphere) == 0x00E0); // 224 bytes (0x0000B0 - 0x0000E0)
static_assert(sizeof(UParticleModuleLocationPrimitiveSphere_Seeded) == 0x0100); // 256 bytes (0x0000E0 - 0x000100)
static_assert(sizeof(UParticleModuleLocationPrimitiveTriangle) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UParticleModuleLocationSkelVertSurface) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UParticleModuleLocationWorldOffset) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UParticleModuleLocationWorldOffset_Seeded) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(UParticleModuleMaterialBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UParticleModuleMeshMaterial) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UParticleModuleRotationBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UParticleModuleMeshRotation) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UParticleModuleMeshRotation_Seeded) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(UParticleModuleRotationRateBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UParticleModuleMeshRotationRate) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UParticleModuleMeshRotationRate_Seeded) == 0x0098); // 152 bytes (0x000078 - 0x000098)
static_assert(sizeof(UParticleModuleMeshRotationRateMultiplyLife) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UParticleModuleMeshRotationRateOverLife) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UParticleModuleOrbitBase) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FOrbitOptions) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UParticleModuleOrbit) == 0x0130); // 304 bytes (0x000038 - 0x000130)
static_assert(sizeof(UParticleModuleOrientationBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UParticleModuleOrientationAxisLock) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UParticleModuleParameterBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FEmitterDynamicParameter) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UParticleModuleParameterDynamic) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UParticleModuleParameterDynamic_Seeded) == 0x0068); // 104 bytes (0x000048 - 0x000068)
static_assert(sizeof(UParticleModulePivotOffset) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FParticleBurst) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UParticleModuleRequired) == 0x0140); // 320 bytes (0x000030 - 0x000140)
static_assert(sizeof(UParticleModuleRotation) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UParticleModuleRotation_Seeded) == 0x0080); // 128 bytes (0x000060 - 0x000080)
static_assert(sizeof(UParticleModuleRotationOverLifetime) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UParticleModuleRotationRate) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UParticleModuleRotationRate_Seeded) == 0x0080); // 128 bytes (0x000060 - 0x000080)
static_assert(sizeof(UParticleModuleRotationRateMultiplyLife) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UParticleModuleSizeBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UParticleModuleSize) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UParticleModuleSize_Seeded) == 0x0098); // 152 bytes (0x000078 - 0x000098)
static_assert(sizeof(UParticleModuleSizeMultiplyLife) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UParticleModuleSizeScale) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UParticleModuleSizeScaleBySpeed) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UParticleModuleSourceMovement) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UParticleModuleSpawnBase) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UParticleModuleSpawn) == 0x00E8); // 232 bytes (0x000038 - 0x0000E8)
static_assert(sizeof(UParticleModuleSpawnPerUnit) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UParticleModuleSubUVBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UParticleModuleSubUV) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UParticleModuleSubUVMovie) == 0x00B0); // 176 bytes (0x000070 - 0x0000B0)
static_assert(sizeof(UParticleModuleTrailBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UParticleModuleTrailSource) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UParticleModuleTypeDataBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UParticleModuleTypeDataAnimTrail) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UParticleModuleTypeDataBeam2) == 0x0150); // 336 bytes (0x000030 - 0x000150)
static_assert(sizeof(FGPUSpriteLocalVectorFieldInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FFloatDistribution) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGPUSpriteEmitterInfo) == 0x0280); // 640 bytes (0x000000 - 0x000280)
static_assert(sizeof(FGPUSpriteResourceData) == 0x0160); // 352 bytes (0x000000 - 0x000160)
static_assert(sizeof(UParticleModuleTypeDataGpu) == 0x0420); // 1056 bytes (0x000030 - 0x000420)
static_assert(sizeof(UParticleModuleTypeDataMesh) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UParticleModuleTypeDataRibbon) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UParticleModuleVectorFieldBase) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UParticleModuleVectorFieldGlobal) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UParticleModuleVectorFieldLocal) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UParticleModuleVectorFieldRotation) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UParticleModuleVectorFieldRotationRate) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UParticleModuleVectorFieldScale) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UParticleModuleVectorFieldScaleOverLife) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UParticleModuleVelocityBase) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UParticleModuleVelocity) == 0x00B0); // 176 bytes (0x000038 - 0x0000B0)
static_assert(sizeof(UParticleModuleVelocity_Seeded) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(UParticleModuleVelocityCone) == 0x00A8); // 168 bytes (0x000038 - 0x0000A8)
static_assert(sizeof(UParticleModuleVelocityInheritParent) == 0x0080); // 128 bytes (0x000038 - 0x000080)
static_assert(sizeof(UParticleModuleVelocityOverLifetime) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(UParticleSpriteEmitter) == 0x01C0); // 448 bytes (0x0001C0 - 0x0001C0)
static_assert(sizeof(FParticleSystemLOD) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLODSoloTrack) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNamedEmitterMaterial) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UParticleSystem) == 0x0110); // 272 bytes (0x000030 - 0x000110)
static_assert(sizeof(UParticleSystemReplay) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UPathFollowingAgentInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPawnNoiseEmitterComponent) == 0x00D8); // 216 bytes (0x0000B0 - 0x0000D8)
static_assert(sizeof(UPhysicalAnimationComponent) == 0x00F0); // 240 bytes (0x0000B0 - 0x0000F0)
static_assert(sizeof(UPhysicalMaterialMask) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FSolverIterations) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(UPhysicsAsset) == 0x0138); // 312 bytes (0x000028 - 0x000138)
static_assert(sizeof(FPhysicalAnimationData) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FPhysicalAnimationProfile) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(USkeletalBodySetup) == 0x02B8); // 696 bytes (0x0002A0 - 0x0002B8)
static_assert(sizeof(UPhysicsCollisionHandler) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ARigidBodyBase) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(APhysicsConstraintActor) == 0x0240); // 576 bytes (0x000220 - 0x000240)
static_assert(sizeof(FConstrainComponentPropName) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FConstraintInstanceBase) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FConstraintBaseParams) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FLinearConstraint) == 0x001C); // 28 bytes (0x000014 - 0x00001C)
static_assert(sizeof(FConeConstraint) == 0x0020); // 32 bytes (0x000014 - 0x000020)
static_assert(sizeof(FTwistConstraint) == 0x001C); // 28 bytes (0x000014 - 0x00001C)
static_assert(sizeof(FConstraintDrive) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLinearDriveConstraint) == 0x004C); // 76 bytes (0x000000 - 0x00004C)
static_assert(sizeof(FAngularDriveConstraint) == 0x004C); // 76 bytes (0x000000 - 0x00004C)
static_assert(sizeof(FConstraintProfileProperties) == 0x010C); // 268 bytes (0x000000 - 0x00010C)
static_assert(sizeof(FConstraintInstance) == 0x01C0); // 448 bytes (0x000018 - 0x0001C0)
static_assert(sizeof(UPhysicsConstraintComponent) == 0x0400); // 1024 bytes (0x0001F8 - 0x000400)
static_assert(sizeof(FPhysicsConstraintProfileHandle) == 0x0114); // 276 bytes (0x000000 - 0x000114)
static_assert(sizeof(UPhysicsConstraintTemplate) == 0x0308); // 776 bytes (0x000028 - 0x000308)
static_assert(sizeof(UPhysicsHandleComponent) == 0x0160); // 352 bytes (0x0000B0 - 0x000160)
static_assert(sizeof(FRigidBodyErrorCorrection) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(sizeof(FPhysicalSurfaceName) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FBroadphaseSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FChaosPhysicsSettings) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(UPhysicsSettings) == 0x01A0); // 416 bytes (0x0000E0 - 0x0001A0)
static_assert(sizeof(UPhysicsSpringComponent) == 0x0220); // 544 bytes (0x0001F8 - 0x000220)
static_assert(sizeof(APhysicsThruster) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UPhysicsThrusterComponent) == 0x0200); // 512 bytes (0x0001F8 - 0x000200)
static_assert(sizeof(ASceneCapture) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(APlanarReflection) == 0x0240); // 576 bytes (0x000230 - 0x000240)
static_assert(sizeof(UPlanarReflectionComponent) == 0x03A0); // 928 bytes (0x0002B0 - 0x0003A0)
static_assert(sizeof(APlaneReflectionCapture) == 0x0228); // 552 bytes (0x000228 - 0x000228)
static_assert(sizeof(UPlaneReflectionCaptureComponent) == 0x0290); // 656 bytes (0x000278 - 0x000290)
static_assert(sizeof(UPlatformEventsComponent) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(UPlatformInterfaceWebResponse) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(FMinimalViewInfo) == 0x05E0); // 1504 bytes (0x000000 - 0x0005E0)
static_assert(sizeof(FCameraCacheEntry) == 0x05F0); // 1520 bytes (0x000000 - 0x0005F0)
static_assert(sizeof(FTViewTarget) == 0x0600); // 1536 bytes (0x000000 - 0x000600)
static_assert(sizeof(APlayerCameraManager) == 0x27B0); // 10160 bytes (0x000220 - 0x0027B0)
static_assert(sizeof(FKeyBind) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UPlayerInput) == 0x03A8); // 936 bytes (0x000028 - 0x0003A8)
static_assert(sizeof(APlayerStart) == 0x0250); // 592 bytes (0x000248 - 0x000250)
static_assert(sizeof(APlayerStartPIE) == 0x0250); // 592 bytes (0x000250 - 0x000250)
static_assert(sizeof(APlayerState) == 0x0320); // 800 bytes (0x000220 - 0x000320)
static_assert(sizeof(UPluginCommandlet) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(APointLight) == 0x0238); // 568 bytes (0x000230 - 0x000238)
static_assert(sizeof(UPointLightComponent) == 0x0358); // 856 bytes (0x000340 - 0x000358)
static_assert(sizeof(UPolys) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UPoseableMeshComponent) == 0x0820); // 2080 bytes (0x0006C0 - 0x000820)
static_assert(sizeof(FPoseData) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FPoseDataContainer) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(UPoseAsset) == 0x0120); // 288 bytes (0x000080 - 0x000120)
static_assert(sizeof(UPoseWatch) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UPostProcessComponent) == 0x0760); // 1888 bytes (0x0001F8 - 0x000760)
static_assert(sizeof(APostProcessVolume) == 0x07C0); // 1984 bytes (0x000258 - 0x0007C0)
static_assert(sizeof(APrecomputedVisibilityOverrideVolume) == 0x0288); // 648 bytes (0x000258 - 0x000288)
static_assert(sizeof(APrecomputedVisibilityVolume) == 0x0258); // 600 bytes (0x000258 - 0x000258)
static_assert(sizeof(UPreviewCollectionInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPreviewMeshCollectionEntry) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UPreviewMeshCollection) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(FCollectionReference) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UPrimaryAssetLabel) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UProjectileMovementComponent) == 0x01D0); // 464 bytes (0x0000F0 - 0x0001D0)
static_assert(sizeof(UProxyLODMeshSimplificationSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(ARadialForceActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(URadialForceComponent) == 0x0230); // 560 bytes (0x0001F8 - 0x000230)
static_assert(sizeof(ARectLight) == 0x0238); // 568 bytes (0x000230 - 0x000238)
static_assert(sizeof(URectLightComponent) == 0x0360); // 864 bytes (0x000340 - 0x000360)
static_assert(sizeof(URendererSettings) == 0x0140); // 320 bytes (0x000038 - 0x000140)
static_assert(sizeof(URendererOverrideSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UReplayNetConnection) == 0x22F0); // 8944 bytes (0x001AF0 - 0x0022F0)
static_assert(sizeof(UReplaySubsystem) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UReplicationDriver) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UReplicationConnectionDriver) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UReporterBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UReporterGraph) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UReverbEffect) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(FRigTransformConstraint) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTransformBaseConstraint) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTransformBase) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNode) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(URig) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(URotatingMovementComponent) == 0x0110); // 272 bytes (0x0000F0 - 0x000110)
static_assert(sizeof(URuntimeOptionsBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(URuntimeVirtualTexture) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(URuntimeVirtualTextureComponent) == 0x0270); // 624 bytes (0x0001F8 - 0x000270)
static_assert(sizeof(ARuntimeVirtualTextureVolume) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(URVOAvoidanceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UScene) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ASceneCapture2D) == 0x0238); // 568 bytes (0x000230 - 0x000238)
static_assert(sizeof(USceneCaptureComponentCube) == 0x02E0); // 736 bytes (0x0002B0 - 0x0002E0)
static_assert(sizeof(ASceneCaptureCube) == 0x0238); // 568 bytes (0x000230 - 0x000238)
static_assert(sizeof(FBPVariableMetaDataEntry) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(USCS_Node) == 0x00D8); // 216 bytes (0x000028 - 0x0000D8)
static_assert(sizeof(USelection) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(AServerStatReplicator) == 0x02E8); // 744 bytes (0x000220 - 0x0002E8)
static_assert(sizeof(UShadowMapTexture2D) == 0x0108); // 264 bytes (0x000100 - 0x000108)
static_assert(sizeof(USimpleConstructionScript) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(ASkeletalMeshActor) == 0x02A8); // 680 bytes (0x000220 - 0x0002A8)
static_assert(sizeof(USkeletalMeshEditorData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FBoneFilter) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FSkeletalMeshLODGroupSettings) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(USkeletalMeshLODSettings) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(USkeletalMeshSimplificationSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(USkeletalMeshSocket) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(FTentDistribution) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(USkyAtmosphereComponent) == 0x02D0); // 720 bytes (0x0001F8 - 0x0002D0)
static_assert(sizeof(ASkyAtmosphere) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(USkyLightComponent) == 0x0410); // 1040 bytes (0x000228 - 0x000410)
static_assert(sizeof(USlateBrushAsset) == 0x0100); // 256 bytes (0x000028 - 0x000100)
static_assert(sizeof(USlateTextureAtlasInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USmokeTestCommandlet) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(USoundAttenuation) == 0x03C8); // 968 bytes (0x000028 - 0x0003C8)
static_assert(sizeof(FSoundClassProperties) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FPassiveSoundMixModifier) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(USoundClass) == 0x00D0); // 208 bytes (0x000028 - 0x0000D0)
static_assert(sizeof(USoundConcurrency) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(USoundCue) == 0x0590); // 1424 bytes (0x0001B8 - 0x000590)
static_assert(sizeof(FSourceEffectChainEntry) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(USoundEffectSourcePresetChain) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FSoundGroup) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(USoundGroups) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(FAudioEffectParameters) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAudioEQEffect) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FSoundClassAdjuster) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(USoundMix) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(USoundNode) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(USoundNodeAssetReferencer) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USoundNodeAttenuation) == 0x03F8); // 1016 bytes (0x000048 - 0x0003F8)
static_assert(sizeof(USoundNodeBranch) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(USoundNodeConcatenator) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(USoundNodeDelay) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(FDialogueWaveParameter) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(USoundNodeDialoguePlayer) == 0x0070); // 112 bytes (0x000048 - 0x000070)
static_assert(sizeof(FDistanceDatum) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(USoundNodeDistanceCrossFade) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(USoundNodeDoppler) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(USoundNodeEnveloper) == 0x0190); // 400 bytes (0x000048 - 0x000190)
static_assert(sizeof(USoundNodeGroupControl) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(USoundNodeLooping) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(USoundNodeMature) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USoundNodeMixer) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(USoundNodeModulator) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(FModulatorContinuousParams) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(USoundNodeModulatorContinuous) == 0x0088); // 136 bytes (0x000048 - 0x000088)
static_assert(sizeof(USoundNodeOscillator) == 0x0070); // 112 bytes (0x000048 - 0x000070)
static_assert(sizeof(USoundNodeParamCrossFade) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(USoundNodeQualityLevel) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(USoundNodeRandom) == 0x0078); // 120 bytes (0x000048 - 0x000078)
static_assert(sizeof(USoundNodeSoundClass) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(USoundNodeSwitch) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(USoundNodeWaveParam) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(USoundNodeWavePlayer) == 0x0088); // 136 bytes (0x000048 - 0x000088)
static_assert(sizeof(USoundSourceBus) == 0x0388); // 904 bytes (0x000370 - 0x000388)
static_assert(sizeof(USoundSubmixBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USoundSubmixWithParentBase) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(USoundSubmix) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(USoundfieldSubmix) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UEndpointSubmix) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(USoundfieldEndpointSubmix) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(ASpectatorPawn) == 0x02A8); // 680 bytes (0x0002A8 - 0x0002A8)
static_assert(sizeof(USpectatorPawnMovement) == 0x0158); // 344 bytes (0x000150 - 0x000158)
static_assert(sizeof(ASphereReflectionCapture) == 0x0230); // 560 bytes (0x000228 - 0x000230)
static_assert(sizeof(USphereReflectionCaptureComponent) == 0x0290); // 656 bytes (0x000278 - 0x000290)
static_assert(sizeof(USplineMetadata) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ASplineMeshActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(FSplineMeshParams) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(USplineMeshComponent) == 0x0590); // 1424 bytes (0x0004F8 - 0x000590)
static_assert(sizeof(USpotLightComponent) == 0x0360); // 864 bytes (0x000358 - 0x000360)
static_assert(sizeof(FStaticMaterial) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UStaticMesh) == 0x0150); // 336 bytes (0x000060 - 0x000150)
static_assert(sizeof(UStaticMeshSocket) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UStereoLayerShape) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStereoLayerShapeQuad) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStereoLayerShapeCylinder) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UStereoLayerShapeCubemap) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStereoLayerShapeEquirect) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(FEquirectProps) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UStereoLayerComponent) == 0x02E0); // 736 bytes (0x0001F8 - 0x0002E0)
static_assert(sizeof(UStereoLayerFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStringTable) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FSubsurfaceProfileStruct) == 0x008C); // 140 bytes (0x000000 - 0x00008C)
static_assert(sizeof(USubsurfaceProfile) == 0x00B8); // 184 bytes (0x000028 - 0x0000B8)
static_assert(sizeof(USubsystemBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USubUVAnimation) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(USystemTimeTimecodeProvider) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(ATargetPoint) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(UTextPropertyTestObject) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(ATextRenderActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UTexture2DArray) == 0x0138); // 312 bytes (0x0000D8 - 0x000138)
static_assert(sizeof(UTexture2DDynamic) == 0x00F0); // 240 bytes (0x0000D8 - 0x0000F0)
static_assert(sizeof(UTextureLightProfile) == 0x0108); // 264 bytes (0x000100 - 0x000108)
static_assert(sizeof(UTextureMipDataProviderFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTextureRenderTarget2DArray) == 0x0100); // 256 bytes (0x0000E0 - 0x000100)
static_assert(sizeof(UTextureRenderTargetCube) == 0x00F8); // 248 bytes (0x0000E0 - 0x0000F8)
static_assert(sizeof(UTextureRenderTargetVolume) == 0x0100); // 256 bytes (0x0000E0 - 0x000100)
static_assert(sizeof(UThumbnailInfo) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FTimelineEventEntry) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FTimelineVectorTrack) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FTimelineFloatTrack) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FTimelineLinearColorTrack) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FTimeline) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(UTimelineComponent) == 0x0150); // 336 bytes (0x0000B0 - 0x000150)
static_assert(sizeof(FTTTrackBase) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FTTEventTrack) == 0x0028); // 40 bytes (0x000018 - 0x000028)
static_assert(sizeof(FTTPropertyTrack) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FTTFloatTrack) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FTTVectorTrack) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FTTLinearColorTrack) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(UTimelineTemplate) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(UTireType) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(ATriggerCapsule) == 0x0228); // 552 bytes (0x000228 - 0x000228)
static_assert(sizeof(ATriggerSphere) == 0x0228); // 552 bytes (0x000228 - 0x000228)
static_assert(sizeof(ATriggerVolume) == 0x0258); // 600 bytes (0x000258 - 0x000258)
static_assert(sizeof(UTwitterIntegrationBase) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UUserDefinedEnum) == 0x00B0); // 176 bytes (0x000060 - 0x0000B0)
static_assert(sizeof(UUserDefinedStruct) == 0x0108); // 264 bytes (0x0000C0 - 0x000108)
static_assert(sizeof(FHardwareCursorReference) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UUserInterfaceSettings) == 0x0278); // 632 bytes (0x000038 - 0x000278)
static_assert(sizeof(UVectorField) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UVectorFieldAnimated) == 0x0088); // 136 bytes (0x000048 - 0x000088)
static_assert(sizeof(UVectorFieldComponent) == 0x0490); // 1168 bytes (0x000468 - 0x000490)
static_assert(sizeof(UVectorFieldStatic) == 0x0098); // 152 bytes (0x000048 - 0x000098)
static_assert(sizeof(AVectorFieldVolume) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UViewportStatsSubsystem) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UVirtualTexture) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULightMapVirtualTexture) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URuntimeVirtualTextureStreamingProxy) == 0x0100); // 256 bytes (0x000100 - 0x000100)
static_assert(sizeof(FVirtualTextureBuildSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UVirtualTexture2D) == 0x0110); // 272 bytes (0x000100 - 0x000110)
static_assert(sizeof(UVirtualTextureBuilder) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FVirtualTextureSpacePoolConfig) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UVirtualTexturePoolConfig) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UVisualLoggerAutomationTests) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVisualLoggerDebugSnapshotInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVisualLoggerKismetLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVoiceChannel) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(FVoiceSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UVOIPTalker) == 0x00E8); // 232 bytes (0x0000B0 - 0x0000E8)
static_assert(sizeof(UVOIPStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVolumeTexture) == 0x0130); // 304 bytes (0x0000D8 - 0x000130)
static_assert(sizeof(UVolumetricCloudComponent) == 0x0240); // 576 bytes (0x0001F8 - 0x000240)
static_assert(sizeof(AVolumetricCloud) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(AVolumetricLightmapDensityVolume) == 0x0260); // 608 bytes (0x000258 - 0x000260)
static_assert(sizeof(AWindDirectionalSource) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UWindDirectionalSourceComponent) == 0x0220); // 544 bytes (0x0001F8 - 0x000220)
static_assert(sizeof(UWorldComposition) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FMaterialProxySettings) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FMeshProxySettings) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FMeshMergingSettings) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FHierarchicalSimplification) == 0x0160); // 352 bytes (0x000000 - 0x000160)
static_assert(sizeof(UHierarchicalLODSetup) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(FNetViewer) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(AWorldSettings) == 0x03A0); // 928 bytes (0x000220 - 0x0003A0)
static_assert(sizeof(FVectorDistribution) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FVector4Distribution) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FFloatRK4SpringInterpolator) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FVectorRK4SpringInterpolator) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFormatArgumentData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FExpressionOutput) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FVector2MaterialInput) == 0x000C); // 12 bytes (0x00000C - 0x00000C)
static_assert(sizeof(FBranchingPointNotifyPayload) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FPlatformInterfaceData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPlatformInterfaceDelegateResult) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FDebugFloatHistory) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FLatentActionInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FTimerHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FCollisionProfileName) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGenericStruct) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FUserActivity) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FTableRowBase) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAnimNode_Base) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAnimNode_CustomProperty) == 0x0058); // 88 bytes (0x000010 - 0x000058)
static_assert(sizeof(FPoseLinkBase) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPoseLink) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FInputRange) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInputScaleBiasClamp) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FInputAlphaBoolBlend) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FInputScaleBias) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAnimInstanceProxy) == 0x0760); // 1888 bytes (0x000000 - 0x000760)
static_assert(sizeof(FComponentReference) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FKeyHandleLookupTable) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FComponentSpacePoseLink) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FAnimNode_AssetPlayerBase) == 0x0038); // 56 bytes (0x000010 - 0x000038)
static_assert(sizeof(FPerBoneBlendWeight) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPoseSnapshot) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FAnimNode_Root) == 0x0030); // 48 bytes (0x000010 - 0x000030)
static_assert(sizeof(FAnimCurveParam) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FActorComponentDuplicatedObjectData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FActorComponentInstanceData) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FSceneComponentInstanceData) == 0x00B8); // 184 bytes (0x000068 - 0x0000B8)
static_assert(sizeof(FAnimationGroupReference) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FAnimGroupInstance) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FAnimTickRecord) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FMarkerSyncAnimPosition) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FBlendFilter) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FBlendSampleData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FAnimationRecordingSettings) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FComponentSpacePose) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FLocalSpacePose) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNamedTransform) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNamedColor) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNamedVector) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FNamedFloat) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FAnimParentNodeAssetOverride) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAnimBlueprintDebugData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FAnimationFrameSnapshot) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FStateMachineDebugData) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FStateMachineStateDebugData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRootMotionExtractionStep) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAnimationErrorStats) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVectorCurve) == 0x0198); // 408 bytes (0x000018 - 0x000198)
static_assert(sizeof(FTransformCurve) == 0x04E0); // 1248 bytes (0x000018 - 0x0004E0)
static_assert(sizeof(FSlotEvaluationPose) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(FA2Pose) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FA2CSPose) == 0x0028); // 40 bytes (0x000010 - 0x000028)
static_assert(sizeof(FQueuedDrawDebugItem) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FAnimInstanceSubsystemData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FAnimMontageInstance) == 0x01B0); // 432 bytes (0x000000 - 0x0001B0)
static_assert(sizeof(FAnimNode_ApplyMeshSpaceAdditive) == 0x00D0); // 208 bytes (0x000010 - 0x0000D0)
static_assert(sizeof(FAnimNode_Inertialization) == 0x0070); // 112 bytes (0x000010 - 0x000070)
static_assert(sizeof(FInertializationPoseDiff) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FInertializationCurveDiff) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInertializationBoneDiff) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FInertializationPose) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FAnimNode_LinkedAnimGraph) == 0x00A0); // 160 bytes (0x000058 - 0x0000A0)
static_assert(sizeof(FAnimNode_LinkedAnimLayer) == 0x00B0); // 176 bytes (0x0000A0 - 0x0000B0)
static_assert(sizeof(FAnimNode_LinkedInputPose) == 0x0118); // 280 bytes (0x000010 - 0x000118)
static_assert(sizeof(FAnimNode_SaveCachedPose) == 0x0158); // 344 bytes (0x000010 - 0x000158)
static_assert(sizeof(FAnimNode_SequencePlayer) == 0x0080); // 128 bytes (0x000038 - 0x000080)
static_assert(sizeof(FAnimNode_StateMachine) == 0x00B0); // 176 bytes (0x000010 - 0x0000B0)
static_assert(sizeof(FAnimationPotentialTransition) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAnimationActiveTransitionEntry) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(sizeof(FAnimNode_TransitionPoseEvaluator) == 0x00F8); // 248 bytes (0x000010 - 0x0000F8)
static_assert(sizeof(FAnimNode_TransitionResult) == 0x0028); // 40 bytes (0x000010 - 0x000028)
static_assert(sizeof(FAnimNode_UseCachedPose) == 0x0028); // 40 bytes (0x000010 - 0x000028)
static_assert(sizeof(FAnimNode_ConvertLocalToComponentSpace) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(sizeof(FAnimNode_ConvertComponentToLocalSpace) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(sizeof(FCompressedTrack) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FCurveTrack) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FScaleTrack) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRotationTrack) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FTranslationTrack) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRawAnimSequenceTrack) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAnimSequenceTrackContainer) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAnimSingleNodeInstanceProxy) == 0x08B0); // 2224 bytes (0x000760 - 0x0008B0)
static_assert(sizeof(FAnimNode_SingleNode) == 0x0030); // 48 bytes (0x000010 - 0x000030)
static_assert(sizeof(FAnimationTransitionRule) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAnimationState) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FAnimNotifyTrack) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FPerBoneBlendWeights) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAssetImportInfo) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FAtmospherePrecomputeInstanceData) == 0x0160); // 352 bytes (0x0000B8 - 0x000160)
static_assert(sizeof(FAudioReverbEffect) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FNavAvoidanceData) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FGridBlendSample) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FBPEditorBookmarkNode) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FEditedDocumentInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FBPInterfaceDescription) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBPVariableDescription) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FBlueprintMacroCosmeticInfo) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FCompilerNativizationOptions) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FEventGraphFastCallPair) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBlueprintDebugData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FPointerToUberGraphFrame) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FDebuggingInfoForSingleFunction) == 0x0190); // 400 bytes (0x000000 - 0x000190)
static_assert(sizeof(FNodeToCodeAssociation) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FAnimCurveType) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FBookmarkBaseJumpToSettings) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FBookmarkJumpToSettings) == 0x0001); // 1 bytes (0x000001 - 0x000001)
static_assert(sizeof(FBookmark2DJumpToSettings) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FCachedAnimTransitionData) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FCachedAnimRelevancyData) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FCachedAnimAssetPlayerData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCachedAnimStateData) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FCachedAnimStateArray) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCameraShakeDuration) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FCameraShakeInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCameraShakeUpdateResult) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FCameraShakeUpdateParams) == 0x05F0); // 1520 bytes (0x000000 - 0x0005F0)
static_assert(sizeof(FDummySpacerCameraTypes) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FCanvasIcon) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FWrappedStringElement) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FTextSizingParameters) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FCharacterNetworkSerializationPackedBits) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FCharacterMoveResponsePackedBits) == 0x0098); // 152 bytes (0x000098 - 0x000098)
static_assert(sizeof(FCharacterServerMovePackedBits) == 0x0098); // 152 bytes (0x000098 - 0x000098)
static_assert(sizeof(FChildActorAttachedActorInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FChildActorComponentInstanceData) == 0x00E8); // 232 bytes (0x0000B8 - 0x0000E8)
static_assert(sizeof(FAutoCompleteNode) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRuntimeCurveLinearColor) == 0x0208); // 520 bytes (0x000000 - 0x000208)
static_assert(sizeof(FNamedCurveValue) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FCurveTableRowHandle) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCustomAttribute) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FCustomAttributePerBoneData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FDataTableCategoryHandle) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FDataTableRowHandle) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGraphReference) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FEdGraphPinReference) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FEdGraphSchemaAction) == 0x0100); // 256 bytes (0x000000 - 0x000100)
static_assert(sizeof(FEdGraphSchemaAction_NewNode) == 0x0108); // 264 bytes (0x000100 - 0x000108)
static_assert(sizeof(FScreenMessageString) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FURL) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FFullyLoadedPackagesInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FLevelStreamingStatus) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNamedNetDriver) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWorldContext) == 0x0288); // 648 bytes (0x000000 - 0x000288)
static_assert(sizeof(FExposureSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTickPrerequisite) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCanvasUVTri) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FDepthFieldGlowInfo) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FFontRenderInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FDamageEvent) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRadialDamageParams) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FRadialDamageEvent) == 0x0040); // 64 bytes (0x000010 - 0x000040)
static_assert(sizeof(FPointDamageEvent) == 0x00B0); // 176 bytes (0x000010 - 0x0000B0)
static_assert(sizeof(FMeshBuildSettings) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPOV) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FAnimUpdateRateParameters) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FAnimSlotDesc) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FAnimSlotInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMTDResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FOverlapResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSwarmDebugOptions) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FLightmassDebugOptions) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBasedPosition) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FFractureEffect) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigidBodyContactInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FCollisionImpactData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRigidBodyState) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FForceFeedbackParameters) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FPredictProjectilePathPointData) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FPredictProjectilePathResult) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FPredictProjectilePathParams) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FActiveHapticFeedbackEffect) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FClusterNode) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FClusterNode_DEPRECATED) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FHLODISMComponentDesc) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FImportanceTexture) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FInstancedStaticMeshLightMapInstanceData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FInstancedStaticMeshComponentInstanceData) == 0x0150); // 336 bytes (0x0000B8 - 0x000150)
static_assert(sizeof(FInterpEdSelKey) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCameraPreviewInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FSubTrackGroup) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSupportedSubTrackInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FVectorSpringState) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FFloatSpringState) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FDrawToRenderTargetContext) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLatentActionManager) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FLevelSimplificationDetails) == 0x012C); // 300 bytes (0x000000 - 0x00012C)
static_assert(sizeof(FStreamableTextureInstance) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FDynamicTextureInstance) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FPrecomputedLightInstanceData) == 0x0110); // 272 bytes (0x0000B8 - 0x000110)
static_assert(sizeof(FBatchedPoint) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FBatchedLine) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(sizeof(FClientReceiveData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FParameterGroupData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FStaticComponentMaskValue) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FParameterChannelNames) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FFunctionExpressionOutput) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FFunctionExpressionInput) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FScalarParameterAtlasInstanceData) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FMemberReference) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMeshInstancingSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMeshReductionSettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FNameCurveKey) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNameCurve) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(FNavDataConfig) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(FPacketSimulationSettings) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(sizeof(FFastArraySerializer) == 0x0108); // 264 bytes (0x000000 - 0x000108)
static_assert(sizeof(FFastArraySerializerItem) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FParticleCurvePair) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBeamTargetData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FParticleSystemWorldManagerTickFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FParticleSystemReplayFrame) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FParticleEmitterReplayFrame) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFreezablePerPlatformInt) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FViewTargetTransitionParams) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FUpdateLevelStreamingLevelStatus) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPlayerMuteList) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FPreviewAttachedObjectPair) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FPreviewAssetAttachContainer) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPrimitiveComponentInstanceData) == 0x0100); // 256 bytes (0x0000B8 - 0x000100)
static_assert(sizeof(FSpriteCategoryInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FQuartzPulseOverrideStep) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FQuartzTimeSignature) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FQuartzClockSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FQuartzQuantizationBoundary) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FQuartzTransportTimeStamp) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FLevelNameAndTime) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCompressedRichCurve) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRootMotionSourceStatus) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FRootMotionFinishVelocitySettings) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FRootMotionSource) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FRootMotionSource_JumpForce) == 0x00D0); // 208 bytes (0x000098 - 0x0000D0)
static_assert(sizeof(FRootMotionSource_MoveToDynamicForce) == 0x00D0); // 208 bytes (0x000098 - 0x0000D0)
static_assert(sizeof(FRootMotionSource_MoveToForce) == 0x00C0); // 192 bytes (0x000098 - 0x0000C0)
static_assert(sizeof(FRootMotionSource_RadialForce) == 0x00E0); // 224 bytes (0x000098 - 0x0000E0)
static_assert(sizeof(FRootMotionSource_ConstantForce) == 0x00B0); // 176 bytes (0x000098 - 0x0000B0)
static_assert(sizeof(FCameraExposureSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FGaussianSumBloomSettings) == 0x0084); // 132 bytes (0x000000 - 0x000084)
static_assert(sizeof(FConvolutionBloomSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FLensBloomSettings) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FLensImperfectionSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FLensSettings) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(FFilmStockSettings) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FColorGradePerRangeSettings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FColorGradingSettings) == 0x0150); // 336 bytes (0x000000 - 0x000150)
static_assert(sizeof(FSceneViewExtensionIsActiveFunctor) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FClothPhysicsProperties_Legacy) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FClothingAssetData_Legacy) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FSkeletalMeshClothBuildParams) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FBoneMirrorExport) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FSkeletalMeshComponentClothTickFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FSkeletalMeshComponentEndPhysicsTickFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FNameMapping) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigConfiguration) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBoneReductionSetting) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FReferencePose) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSkeletonToMeshLinkup) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSkelMeshSkinWeightInfo) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FSkinWeightProfileManagerTickFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FPrecomputedSkyLightInstanceData) == 0x0170); // 368 bytes (0x0000B8 - 0x000170)
static_assert(sizeof(FSmartNameMapping) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FCurveMetaData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSoundClassEditorData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSoundNodeEditorData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSoundSubmixSpectralAnalysisBandSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSoundWaveEnvelopeDataPerSound) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSoundWaveSpectralData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FSoundWaveSpectralDataPerSound) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FStreamedAudioPlatformData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSplineInstanceData) == 0x01A0); // 416 bytes (0x0000B8 - 0x0001A0)
static_assert(sizeof(FSplinePoint) == 0x0044); // 68 bytes (0x000000 - 0x000044)
static_assert(sizeof(FSplineMeshInstanceData) == 0x00E8); // 232 bytes (0x0000B8 - 0x0000E8)
static_assert(sizeof(FMaterialRemapIndex) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAssetEditorOrbitCameraPosition) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMeshSectionInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMeshSectionInfoMap) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FStaticMeshSourceModel) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FStaticMeshOptimizationSettings) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FPaintedVertex) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FStaticMeshVertexColorLODData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FStaticMeshComponentInstanceData) == 0x0140); // 320 bytes (0x000100 - 0x000140)
static_assert(sizeof(FTextureFormatSettings) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FTexturePlatformData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FTextureSource) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FTextureSourceBlock) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FStreamingRenderAssetPrimitiveInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FTTTrackId) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTimeStretchCurveInstance) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FUpdateLevelVisibilityLevelInfo) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FEndPhysicsTickFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FStartPhysicsTickFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FLevelViewportInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FLightmassWorldInfoSettings) == 0x004C); // 76 bytes (0x000000 - 0x00004C)
static_assert(sizeof(UVisual) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FWidgetTransform) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FWidgetVertexEffect) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(UWidget) == 0x0128); // 296 bytes (0x000028 - 0x000128)
static_assert(sizeof(UPanelWidget) == 0x0140); // 320 bytes (0x000128 - 0x000140)
static_assert(sizeof(UContentWidget) == 0x0140); // 320 bytes (0x000140 - 0x000140)
static_assert(sizeof(UButton) == 0x0588); // 1416 bytes (0x000140 - 0x000588)
static_assert(sizeof(UCanvasPanel) == 0x0150); // 336 bytes (0x000140 - 0x000150)
static_assert(sizeof(URetainerBox) == 0x0170); // 368 bytes (0x000140 - 0x000170)
static_assert(sizeof(UOverlay) == 0x0150); // 336 bytes (0x000140 - 0x000150)
static_assert(sizeof(FShapedTextOptions) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(UTextLayoutWidget) == 0x0148); // 328 bytes (0x000128 - 0x000148)
static_assert(sizeof(UTextBlock) == 0x0310); // 784 bytes (0x000148 - 0x000310)
static_assert(sizeof(UWidgetSwitcher) == 0x0158); // 344 bytes (0x000140 - 0x000158)
static_assert(sizeof(FSlateChildSize) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRadialBoxSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FUserWidgetPool) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(UDynamicEntryBoxBase) == 0x01F8); // 504 bytes (0x000128 - 0x0001F8)
static_assert(sizeof(FNamedSlotBinding) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAnimationEventBinding) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UUserWidget) == 0x0280); // 640 bytes (0x000128 - 0x000280)
static_assert(sizeof(UPanelSlot) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(URichTextBlockDecorator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UListViewBase) == 0x09B0); // 2480 bytes (0x000128 - 0x0009B0)
static_assert(sizeof(UListView) == 0x0AF8); // 2808 bytes (0x0009B0 - 0x000AF8)
static_assert(sizeof(USafeZone) == 0x0158); // 344 bytes (0x000140 - 0x000158)
static_assert(sizeof(UScrollBox) == 0x0C58); // 3160 bytes (0x000140 - 0x000C58)
static_assert(sizeof(UWidgetComponent) == 0x05B8); // 1464 bytes (0x000490 - 0x0005B8)
static_assert(sizeof(UAsyncTaskDownloadImage) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UBackgroundBlur) == 0x0240); // 576 bytes (0x000140 - 0x000240)
static_assert(sizeof(UBackgroundBlurSlot) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(FDynamicPropertyPath) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPropertyBinding) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UBoolBinding) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UBorder) == 0x02E0); // 736 bytes (0x000140 - 0x0002E0)
static_assert(sizeof(UBorderSlot) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UBrushBinding) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UButtonSlot) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(FAnchorData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UCanvasPanelSlot) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UCheckBox) == 0x0A30); // 2608 bytes (0x000140 - 0x000A30)
static_assert(sizeof(UCheckedStateBinding) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UCircularThrobber) == 0x0230); // 560 bytes (0x000128 - 0x000230)
static_assert(sizeof(UColorBinding) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UComboBox) == 0x0160); // 352 bytes (0x000128 - 0x000160)
static_assert(sizeof(UComboBoxString) == 0x13F0); // 5104 bytes (0x000128 - 0x0013F0)
static_assert(sizeof(UDragDropOperation) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UDynamicEntryBox) == 0x0200); // 512 bytes (0x0001F8 - 0x000200)
static_assert(sizeof(UEditableText) == 0x0570); // 1392 bytes (0x000128 - 0x000570)
static_assert(sizeof(UEditableTextBox) == 0x0EF0); // 3824 bytes (0x000128 - 0x000EF0)
static_assert(sizeof(UExpandableArea) == 0x0440); // 1088 bytes (0x000128 - 0x000440)
static_assert(sizeof(UFloatBinding) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UGridPanel) == 0x0170); // 368 bytes (0x000140 - 0x000170)
static_assert(sizeof(UGridSlot) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UHorizontalBox) == 0x0150); // 336 bytes (0x000140 - 0x000150)
static_assert(sizeof(UHorizontalBoxSlot) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UImage) == 0x0280); // 640 bytes (0x000128 - 0x000280)
static_assert(sizeof(UInputKeySelector) == 0x0940); // 2368 bytes (0x000128 - 0x000940)
static_assert(sizeof(UInt32Binding) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UInvalidationBox) == 0x0158); // 344 bytes (0x000140 - 0x000158)
static_assert(sizeof(UUserListEntry) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUserListEntryLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUserObjectListEntry) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUserObjectListEntryLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UListViewDesignerPreviewItem) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMenuAnchor) == 0x0190); // 400 bytes (0x000140 - 0x000190)
static_assert(sizeof(UMouseCursorBinding) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UMovieSceneEntitySystem) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMovieScenePropertySystem) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UMovieScene2DTransformPropertySystem) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UMovieSceneSignedObject) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FMovieSceneSectionEvalOptions) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FMovieSceneEasingSettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMovieSceneFrameRange) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FOptionalMovieSceneBlendType) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(UMovieSceneSection) == 0x00E8); // 232 bytes (0x000050 - 0x0000E8)
static_assert(sizeof(FMovieScene2DTransformMask) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMovieSceneChannel) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMovieSceneTangentData) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMovieSceneFloatValue) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMovieSceneKeyHandleMap) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(FMovieSceneFloatChannel) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(UMovieScene2DTransformSection) == 0x0558); // 1368 bytes (0x0000E8 - 0x000558)
static_assert(sizeof(FMovieSceneTrackEvalOptions) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMovieSceneTrackEvaluationFieldEntry) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMovieSceneTrackEvaluationField) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UMovieSceneTrack) == 0x0078); // 120 bytes (0x000050 - 0x000078)
static_assert(sizeof(UMovieSceneNameableTrack) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(FMovieScenePropertyBinding) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UMovieScenePropertyTrack) == 0x00A8); // 168 bytes (0x000078 - 0x0000A8)
static_assert(sizeof(UMovieScene2DTransformTrack) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(UMovieSceneMarginSection) == 0x0368); // 872 bytes (0x0000E8 - 0x000368)
static_assert(sizeof(UMovieSceneMarginTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMovieSceneMaterialTrack) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(UMovieSceneWidgetMaterialTrack) == 0x00A8); // 168 bytes (0x000088 - 0x0000A8)
static_assert(sizeof(UMultiLineEditableText) == 0x0590); // 1424 bytes (0x000148 - 0x000590)
static_assert(sizeof(UMultiLineEditableTextBox) == 0x1170); // 4464 bytes (0x000148 - 0x001170)
static_assert(sizeof(UNamedSlot) == 0x0150); // 336 bytes (0x000140 - 0x000150)
static_assert(sizeof(UNamedSlotInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNativeWidgetHost) == 0x0138); // 312 bytes (0x000128 - 0x000138)
static_assert(sizeof(UOverlaySlot) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(UProgressBar) == 0x0420); // 1056 bytes (0x000128 - 0x000420)
static_assert(sizeof(URichTextBlock) == 0x0880); // 2176 bytes (0x000148 - 0x000880)
static_assert(sizeof(URichTextBlockImageDecorator) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(USafeZoneSlot) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UScaleBox) == 0x0160); // 352 bytes (0x000140 - 0x000160)
static_assert(sizeof(UScaleBoxSlot) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UScrollBar) == 0x08D0); // 2256 bytes (0x000128 - 0x0008D0)
static_assert(sizeof(UScrollBoxSlot) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(USizeBox) == 0x0180); // 384 bytes (0x000140 - 0x000180)
static_assert(sizeof(USizeBoxSlot) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(USlateBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSlateMeshVertex) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(USlateVectorArtData) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(USlateAccessibleWidgetData) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(USlider) == 0x06E0); // 1760 bytes (0x000128 - 0x0006E0)
static_assert(sizeof(USpacer) == 0x0140); // 320 bytes (0x000128 - 0x000140)
static_assert(sizeof(USpinBox) == 0x06C0); // 1728 bytes (0x000128 - 0x0006C0)
static_assert(sizeof(UTextBinding) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UThrobber) == 0x0220); // 544 bytes (0x000128 - 0x000220)
static_assert(sizeof(UTileView) == 0x0B20); // 2848 bytes (0x000AF8 - 0x000B20)
static_assert(sizeof(UTreeView) == 0x0B50); // 2896 bytes (0x000AF8 - 0x000B50)
static_assert(sizeof(FMovieSceneSequenceID) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMovieSceneRootEvaluationTemplateInstance) == 0x00E8); // 232 bytes (0x000000 - 0x0000E8)
static_assert(sizeof(UUMGSequencePlayer) == 0x0578); // 1400 bytes (0x000028 - 0x000578)
static_assert(sizeof(UUMGSequenceTickManager) == 0x0120); // 288 bytes (0x000028 - 0x000120)
static_assert(sizeof(UUniformGridPanel) == 0x0168); // 360 bytes (0x000140 - 0x000168)
static_assert(sizeof(UUniformGridSlot) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UVerticalBox) == 0x0150); // 336 bytes (0x000140 - 0x000150)
static_assert(sizeof(UVerticalBoxSlot) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UViewport) == 0x0188); // 392 bytes (0x000140 - 0x000188)
static_assert(sizeof(UVisibilityBinding) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UMovieSceneSequence) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(FWidgetAnimationBinding) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UWidgetAnimation) == 0x0090); // 144 bytes (0x000060 - 0x000090)
static_assert(sizeof(FBlueprintWidgetAnimationDelegateBinding) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(UWidgetAnimationDelegateBinding) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UWidgetAnimationPlayCallbackProxy) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UWidgetBinding) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(FDelegateRuntimeBinding) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UWidgetBlueprintGeneratedClass) == 0x0368); // 872 bytes (0x000328 - 0x000368)
static_assert(sizeof(UWidgetBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UWidgetInteractionComponent) == 0x0400); // 1024 bytes (0x0001F8 - 0x000400)
static_assert(sizeof(UWidgetLayoutLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FWidgetNavigationData) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UWidgetNavigation) == 0x0100); // 256 bytes (0x000028 - 0x000100)
static_assert(sizeof(UWidgetSwitcherSlot) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(UWidgetTree) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UWindowTitleBarArea) == 0x0160); // 352 bytes (0x000140 - 0x000160)
static_assert(sizeof(UWindowTitleBarAreaSlot) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UWrapBox) == 0x0168); // 360 bytes (0x000140 - 0x000168)
static_assert(sizeof(UWrapBoxSlot) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(FEventReply) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FPaintContext) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMovieSceneEvalTemplateBase) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMovieSceneEvalTemplate) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(sizeof(FMovieScenePropertySectionData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMovieScenePropertySectionTemplate) == 0x0038); // 56 bytes (0x000020 - 0x000038)
static_assert(sizeof(FMovieSceneMarginSectionTemplate) == 0x02C0); // 704 bytes (0x000038 - 0x0002C0)
static_assert(sizeof(FScalarParameterNameAndCurve) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FMovieSceneBoolChannel) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FBoolParameterNameAndCurve) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FVector2DParameterNameAndCurves) == 0x0148); // 328 bytes (0x000000 - 0x000148)
static_assert(sizeof(FVectorParameterNameAndCurves) == 0x01E8); // 488 bytes (0x000000 - 0x0001E8)
static_assert(sizeof(FColorParameterNameAndCurves) == 0x0288); // 648 bytes (0x000000 - 0x000288)
static_assert(sizeof(FTransformParameterNameAndCurves) == 0x05A8); // 1448 bytes (0x000000 - 0x0005A8)
static_assert(sizeof(FMovieSceneParameterSectionTemplate) == 0x0080); // 128 bytes (0x000020 - 0x000080)
static_assert(sizeof(FMovieSceneWidgetMaterialSectionTemplate) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(FRichTextStyleRow) == 0x0370); // 880 bytes (0x000008 - 0x000370)
static_assert(sizeof(FRichImageRow) == 0x00E0); // 224 bytes (0x000008 - 0x0000E0)
static_assert(sizeof(FWidgetComponentInstanceData) == 0x00C8); // 200 bytes (0x0000B8 - 0x0000C8)
static_assert(sizeof(FMovieSceneSequenceLoopCount) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMovieSceneSequencePlaybackSettings) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMovieSceneSequenceReplProperties) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UMovieSceneSequencePlayer) == 0x0680); // 1664 bytes (0x000028 - 0x000680)
static_assert(sizeof(FMovieSceneSectionParameters) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UMovieSceneSubSection) == 0x0160); // 352 bytes (0x0000E8 - 0x000160)
static_assert(sizeof(UMovieSceneSubTrack) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(UMovieSceneCustomClockSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneEntityProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieScenePlaybackClient) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneTrackTemplateProducer) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNodeAndChannelMappings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneNodeGroup) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneNodeGroupCollection) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMovieSceneSpawnable) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FMovieScenePossessable) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FMovieSceneBinding) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMovieSceneObjectBindingID) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMovieSceneObjectBindingIDs) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMovieSceneMarkedFrame) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UMovieScene) == 0x0148); // 328 bytes (0x000050 - 0x000148)
static_assert(sizeof(FMovieSceneBindingOverrideData) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UMovieSceneBindingOverrides) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UMovieSceneBindingOwnerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneBlenderSystem) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMovieSceneBoolSection) == 0x0180); // 384 bytes (0x0000E8 - 0x000180)
static_assert(sizeof(UMovieSceneEntityInstantiatorSystem) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMovieSceneGenericBoundObjectInstantiator) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMovieSceneBoundSceneComponentInstantiator) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMovieSceneSceneComponentImpersonator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMovieSceneTrackIdentifier) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMovieSceneEvalTemplatePtr) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FMovieSceneTrackImplementationPtr) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMovieSceneEvaluationTrack) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FMovieSceneEvaluationTemplateSerialNumber) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMovieSceneTemplateGenerationLedger) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FMovieSceneEvaluationTemplate) == 0x0160); // 352 bytes (0x000000 - 0x000160)
static_assert(sizeof(FMovieSceneSequenceHierarchyNode) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMovieSceneSubSequenceTree) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FMovieSceneTimeTransform) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FMovieSceneTimeWarping) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMovieSceneNestedSequenceTransform) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMovieSceneSequenceTransform) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMovieSceneSequenceInstanceDataPtr) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMovieSceneSubSequenceData) == 0x00E8); // 232 bytes (0x000000 - 0x0000E8)
static_assert(sizeof(FMovieSceneSequenceHierarchy) == 0x0118); // 280 bytes (0x000000 - 0x000118)
static_assert(sizeof(FMovieSceneEvaluationFieldEntityTree) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FMovieSceneEvaluationFieldEntityKey) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FMovieSceneEvaluationFieldEntity) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMovieSceneEvaluationFieldEntityMetaData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FMovieSceneEvaluationFieldSharedEntityMetaData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMovieSceneEntityComponentField) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FMovieSceneEvaluationGroupLUTIndex) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMovieSceneEvaluationFieldTrackPtr) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMovieSceneFieldEntry_EvaluationTrack) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FMovieSceneFieldEntry_ChildTemplate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMovieSceneEvaluationGroup) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMovieSceneEvaluationKey) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FMovieSceneOrderedEvaluationKey) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMovieSceneEvaluationMetaData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMovieSceneEvaluationField) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMovieSceneSequenceCompilerMaskStruct) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(UMovieSceneCompiledData) == 0x03F8); // 1016 bytes (0x000028 - 0x0003F8)
static_assert(sizeof(UMovieSceneCompiledDataManager) == 0x0230); // 560 bytes (0x000028 - 0x000230)
static_assert(sizeof(UMovieSceneFloatDecomposer) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneBuiltInEasingFunction) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMovieSceneEasingExternalCurve) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMovieSceneEasingFunction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMovieSceneEntitySystemGraphNodes) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMovieSceneEntitySystemGraph) == 0x0138); // 312 bytes (0x000000 - 0x000138)
static_assert(sizeof(UMovieSceneEntitySystemLinker) == 0x0458); // 1112 bytes (0x000028 - 0x000458)
static_assert(sizeof(UMovieSceneEvalTimeSystem) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UMovieSceneFolder) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UMovieSceneKeyProxy) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneMasterInstantiatorSystem) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMovieScenePreAnimatedStateSystemInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieSceneCachePreAnimatedStateSystem) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMovieSceneRestorePreAnimatedStateSystem) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMovieSceneSequenceTickManager) == 0x00D0); // 208 bytes (0x000028 - 0x0000D0)
static_assert(sizeof(UMovieSceneSpawnablesSystem) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMovieSceneSpawnSection) == 0x0188); // 392 bytes (0x000180 - 0x000188)
static_assert(sizeof(UMovieSceneSpawnTrack) == 0x0098); // 152 bytes (0x000078 - 0x000098)
static_assert(sizeof(UTestMovieSceneTrack) == 0x0098); // 152 bytes (0x000078 - 0x000098)
static_assert(sizeof(UTestMovieSceneSection) == 0x00E8); // 232 bytes (0x0000E8 - 0x0000E8)
static_assert(sizeof(UTestMovieSceneSequence) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UTestMovieSceneSubTrack) == 0x0098); // 152 bytes (0x000088 - 0x000098)
static_assert(sizeof(UTestMovieSceneSubSection) == 0x0160); // 352 bytes (0x000160 - 0x000160)
static_assert(sizeof(FMovieSceneTrackInstanceInput) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UMovieSceneTrackInstance) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UMovieSceneTrackInstanceInstantiator) == 0x00F0); // 240 bytes (0x000040 - 0x0000F0)
static_assert(sizeof(UMovieSceneTrackInstanceSystem) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(FMovieSceneSequenceInstanceData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMovieSceneEvaluationOperand) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMovieSceneIntegerChannel) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FMovieSceneByteChannel) == 0x0098); // 152 bytes (0x000008 - 0x000098)
static_assert(sizeof(FMovieSceneTrackImplementation) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FTrackInstanceInputComponent) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMovieSceneTrackInstanceComponent) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FEasingComponentData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMovieSceneSectionGroup) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMovieSceneTrackLabels) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMovieSceneExpansionState) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMovieSceneEditorData) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FMovieSceneTimecodeSource) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMovieSceneEntitySystemGraphNode) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMovieSceneEmptyStruct) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMovieSceneSegmentIdentifier) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMovieSceneEvaluationFieldSegmentPtr) == 0x000C); // 12 bytes (0x000008 - 0x00000C)
static_assert(sizeof(FMovieSceneSubSectionData) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMovieSceneKeyStruct) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMovieSceneKeyTimeStruct) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FGeneratedMovieSceneKeyStruct) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FMovieSceneObjectPathChannelKeyValue) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMovieSceneObjectPathChannel) == 0x00C0); // 192 bytes (0x000008 - 0x0000C0)
static_assert(sizeof(FMovieSceneSegment) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FSectionEvaluationData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FMovieSceneSubSequenceTreeEntry) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMovieSceneSequencePlaybackParams) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMovieSceneWarpCounter) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTestMovieSceneEvalTemplate) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FMovieSceneTrackDisplayOptions) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMovieSceneTrackInstanceEntry) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UMovieSceneParameterSection) == 0x0148); // 328 bytes (0x0000E8 - 0x000148)
static_assert(sizeof(UFloatChannelEvaluatorSystem) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMovieSceneTransformOrigin) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMovieScene3DConstraintSection) == 0x0110); // 272 bytes (0x0000E8 - 0x000110)
static_assert(sizeof(UMovieScene3DAttachSection) == 0x0130); // 304 bytes (0x000110 - 0x000130)
static_assert(sizeof(UMovieScene3DConstraintTrack) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(UMovieScene3DAttachTrack) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UMovieScene3DPathSection) == 0x01B8); // 440 bytes (0x000110 - 0x0001B8)
static_assert(sizeof(UMovieScene3DPathTrack) == 0x0090); // 144 bytes (0x000088 - 0x000090)
static_assert(sizeof(UMovieScene3DTransformPropertySystem) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FMovieSceneTransformMask) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UMovieScene3DTransformSection) == 0x0740); // 1856 bytes (0x0000E8 - 0x000740)
static_assert(sizeof(UMovieScene3DTransformTrack) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(FMovieSceneActorReferenceKey) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMovieSceneActorReferenceData) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(UMovieSceneActorReferenceSection) == 0x0228); // 552 bytes (0x0000E8 - 0x000228)
static_assert(sizeof(UMovieSceneActorReferenceTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMovieSceneAudioSection) == 0x0338); // 824 bytes (0x0000E8 - 0x000338)
static_assert(sizeof(UMovieSceneAudioTrack) == 0x0090); // 144 bytes (0x000078 - 0x000090)
static_assert(sizeof(UMovieSceneBaseValueEvaluatorSystem) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMovieSceneBoolTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMovieSceneByteSection) == 0x0180); // 384 bytes (0x0000E8 - 0x000180)
static_assert(sizeof(UMovieSceneByteTrack) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(FMovieSceneCameraAnimSectionData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UMovieSceneCameraAnimSection) == 0x0128); // 296 bytes (0x0000E8 - 0x000128)
static_assert(sizeof(UMovieSceneCameraAnimTrack) == 0x0090); // 144 bytes (0x000078 - 0x000090)
static_assert(sizeof(UMovieSceneCameraCutSection) == 0x0160); // 352 bytes (0x0000E8 - 0x000160)
static_assert(sizeof(UMovieSceneCameraCutTrack) == 0x0090); // 144 bytes (0x000078 - 0x000090)
static_assert(sizeof(UMovieSceneCameraCutTrackInstance) == 0x00B8); // 184 bytes (0x000050 - 0x0000B8)
static_assert(sizeof(FMovieSceneCameraShakeSectionData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UMovieSceneCameraShakeSection) == 0x0128); // 296 bytes (0x0000E8 - 0x000128)
static_assert(sizeof(UMovieSceneCameraShakeSourceShakeSection) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(UMovieSceneCameraShakeSourceShakeTrack) == 0x0090); // 144 bytes (0x000078 - 0x000090)
static_assert(sizeof(FMovieSceneCameraShakeSourceTrigger) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMovieSceneCameraShakeSourceTriggerChannel) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(UMovieSceneCameraShakeSourceTriggerSection) == 0x0170); // 368 bytes (0x0000E8 - 0x000170)
static_assert(sizeof(UMovieSceneCameraShakeSourceTriggerTrack) == 0x0090); // 144 bytes (0x000078 - 0x000090)
static_assert(sizeof(UMovieSceneCameraShakeTrack) == 0x0090); // 144 bytes (0x000078 - 0x000090)
static_assert(sizeof(UMovieSceneCinematicShotSection) == 0x0188); // 392 bytes (0x000160 - 0x000188)
static_assert(sizeof(UMovieSceneCinematicShotTrack) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(sizeof(UMovieSceneColorSection) == 0x0368); // 872 bytes (0x0000E8 - 0x000368)
static_assert(sizeof(UMovieSceneColorTrack) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UMovieSceneComponentAttachmentInvalidatorSystem) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMovieSceneComponentAttachmentSystem) == 0x01C0); // 448 bytes (0x000040 - 0x0001C0)
static_assert(sizeof(UMovieSceneComponentMobilitySystem) == 0x0220); // 544 bytes (0x000040 - 0x000220)
static_assert(sizeof(UMovieScenePreAnimatedComponentTransformSystem) == 0x01C0); // 448 bytes (0x000040 - 0x0001C0)
static_assert(sizeof(UMovieSceneComponentTransformSystem) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UMovieSceneEnumSection) == 0x0180); // 384 bytes (0x0000E8 - 0x000180)
static_assert(sizeof(UMovieSceneEnumTrack) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UMovieSceneEulerTransformPropertySystem) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UMovieSceneEulerTransformTrack) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(UMovieSceneEventSectionBase) == 0x00E8); // 232 bytes (0x0000E8 - 0x0000E8)
static_assert(sizeof(FMovieSceneEventPtrs) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMovieSceneEvent) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UMovieSceneEventRepeaterSection) == 0x0118); // 280 bytes (0x0000E8 - 0x000118)
static_assert(sizeof(FMovieSceneEventParameters) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FEventPayload) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMovieSceneEventSectionData) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(UMovieSceneEventSection) == 0x01E8); // 488 bytes (0x0000E8 - 0x0001E8)
static_assert(sizeof(UMovieSceneEventSystem) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(UMovieScenePreSpawnEventSystem) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UMovieScenePostSpawnEventSystem) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UMovieScenePostEvalEventSystem) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UMovieSceneEventTrack) == 0x0098); // 152 bytes (0x000078 - 0x000098)
static_assert(sizeof(FMovieSceneEventChannel) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(UMovieSceneEventTriggerSection) == 0x0178); // 376 bytes (0x0000E8 - 0x000178)
static_assert(sizeof(UMovieSceneFadeSection) == 0x01A0); // 416 bytes (0x0000E8 - 0x0001A0)
static_assert(sizeof(UMovieSceneFloatTrack) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(UMovieSceneFadeTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMovieSceneFloatPropertySystem) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UMovieSceneFloatSection) == 0x0190); // 400 bytes (0x0000E8 - 0x000190)
static_assert(sizeof(UMovieSceneHierarchicalBiasSystem) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMovieSceneIntegerSection) == 0x0178); // 376 bytes (0x0000E8 - 0x000178)
static_assert(sizeof(UMovieSceneIntegerTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMovieSceneInterrogatedPropertyInstantiatorSystem) == 0x01E8); // 488 bytes (0x000040 - 0x0001E8)
static_assert(sizeof(UMovieSceneLevelVisibilitySection) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(UMovieSceneLevelVisibilitySystem) == 0x01A8); // 424 bytes (0x000040 - 0x0001A8)
static_assert(sizeof(UMovieSceneLevelVisibilityTrack) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(UMovieSceneMaterialParameterCollectionTrack) == 0x0098); // 152 bytes (0x000088 - 0x000098)
static_assert(sizeof(UMovieSceneComponentMaterialTrack) == 0x0098); // 152 bytes (0x000088 - 0x000098)
static_assert(sizeof(UMovieSceneObjectPropertySection) == 0x01A8); // 424 bytes (0x0000E8 - 0x0001A8)
static_assert(sizeof(UMovieSceneObjectPropertyTrack) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UMovieSceneParticleParameterTrack) == 0x0090); // 144 bytes (0x000078 - 0x000090)
static_assert(sizeof(FMovieSceneParticleChannel) == 0x0098); // 152 bytes (0x000098 - 0x000098)
static_assert(sizeof(UMovieSceneParticleSection) == 0x0180); // 384 bytes (0x0000E8 - 0x000180)
static_assert(sizeof(UMovieSceneParticleTrack) == 0x0090); // 144 bytes (0x000078 - 0x000090)
static_assert(sizeof(UMovieScenePiecewiseFloatBlenderSystem) == 0x0120); // 288 bytes (0x000060 - 0x000120)
static_assert(sizeof(UMovieScenePrimitiveMaterialSection) == 0x01A8); // 424 bytes (0x0000E8 - 0x0001A8)
static_assert(sizeof(UMovieScenePrimitiveMaterialTrack) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UMovieScenePropertyInstantiatorSystem) == 0x0290); // 656 bytes (0x000040 - 0x000290)
static_assert(sizeof(UMovieSceneQuaternionInterpolationRotationSystem) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(FMovieSceneSkeletalAnimationParams) == 0x00D8); // 216 bytes (0x000000 - 0x0000D8)
static_assert(sizeof(UMovieSceneSkeletalAnimationSection) == 0x0270); // 624 bytes (0x0000E8 - 0x000270)
static_assert(sizeof(FMovieSceneSkeletalAnimRootMotionTrackParams) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UMovieSceneSkeletalAnimationTrack) == 0x00D0); // 208 bytes (0x000078 - 0x0000D0)
static_assert(sizeof(UMovieSceneSlomoSection) == 0x0188); // 392 bytes (0x0000E8 - 0x000188)
static_assert(sizeof(UMovieSceneSlomoTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(FMovieSceneStringChannel) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(UMovieSceneStringSection) == 0x0188); // 392 bytes (0x0000E8 - 0x000188)
static_assert(sizeof(UMovieSceneStringTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMovieSceneTransformOriginSystem) == 0x0078); // 120 bytes (0x000040 - 0x000078)
static_assert(sizeof(UMovieSceneTransformTrack) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(UMovieSceneVectorSection) == 0x0370); // 880 bytes (0x0000E8 - 0x000370)
static_assert(sizeof(UMovieSceneVectorTrack) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UMovieSceneVisibilityTrack) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UMovieSceneHierarchicalEasingInstantiatorSystem) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(UWeightAndEasingEvaluatorSystem) == 0x0078); // 120 bytes (0x000040 - 0x000078)
static_assert(sizeof(FMovieScene3DPathSectionTemplate) == 0x00E0); // 224 bytes (0x000020 - 0x0000E0)
static_assert(sizeof(FMovieScene3DTransformKeyStruct) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FMovieScene3DScaleKeyStruct) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FMovieScene3DRotationKeyStruct) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FMovieScene3DLocationKeyStruct) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FMovieScene3DTransformTemplateData) == 0x0650); // 1616 bytes (0x000000 - 0x000650)
static_assert(sizeof(FMovieSceneActorReferenceSectionTemplate) == 0x00E8); // 232 bytes (0x000020 - 0x0000E8)
static_assert(sizeof(FMovieSceneAudioSectionTemplate) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FMovieSceneAdditiveCameraAnimationTemplate) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FMovieSceneCameraShakeSectionTemplate) == 0x0048); // 72 bytes (0x000020 - 0x000048)
static_assert(sizeof(FMovieSceneCameraAnimSectionTemplate) == 0x0048); // 72 bytes (0x000020 - 0x000048)
static_assert(sizeof(FMovieSceneCameraShakeSourceShakeSectionTemplate) == 0x0048); // 72 bytes (0x000020 - 0x000048)
static_assert(sizeof(FMovieSceneCameraShakeSourceTriggerSectionTemplate) == 0x0040); // 64 bytes (0x000020 - 0x000040)
static_assert(sizeof(FMovieSceneColorKeyStruct) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FMovieSceneColorSectionTemplate) == 0x02C0); // 704 bytes (0x000038 - 0x0002C0)
static_assert(sizeof(FMovieSceneEventPayloadVariable) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMovieSceneEventTriggerData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FMovieSceneEventSectionTemplate) == 0x00B0); // 176 bytes (0x000020 - 0x0000B0)
static_assert(sizeof(FMovieSceneFadeSectionTemplate) == 0x00D8); // 216 bytes (0x000020 - 0x0000D8)
static_assert(sizeof(FMovieSceneMaterialParameterCollectionTemplate) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(FMovieSceneObjectPropertyTemplate) == 0x00F8); // 248 bytes (0x000038 - 0x0000F8)
static_assert(sizeof(FMovieSceneComponentMaterialSectionTemplate) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(FMovieSceneParticleParameterSectionTemplate) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(FMovieSceneParticleSectionTemplate) == 0x00B8); // 184 bytes (0x000020 - 0x0000B8)
static_assert(sizeof(FMovieScenePrimitiveMaterialTemplate) == 0x00E8); // 232 bytes (0x000020 - 0x0000E8)
static_assert(sizeof(FMovieSceneVectorPropertySectionTemplate) == 0x02C0); // 704 bytes (0x000038 - 0x0002C0)
static_assert(sizeof(FMovieSceneStringPropertySectionTemplate) == 0x00D8); // 216 bytes (0x000038 - 0x0000D8)
static_assert(sizeof(FMovieSceneIntegerPropertySectionTemplate) == 0x00D0); // 208 bytes (0x000038 - 0x0000D0)
static_assert(sizeof(FMovieSceneEnumPropertySectionTemplate) == 0x00D0); // 208 bytes (0x000038 - 0x0000D0)
static_assert(sizeof(FMovieSceneBytePropertySectionTemplate) == 0x00D0); // 208 bytes (0x000038 - 0x0000D0)
static_assert(sizeof(FMovieSceneBoolPropertySectionTemplate) == 0x00C8); // 200 bytes (0x000038 - 0x0000C8)
static_assert(sizeof(FMovieSceneSkeletalAnimationSectionTemplateParameters) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(FMovieSceneSkeletalAnimationSectionTemplate) == 0x0100); // 256 bytes (0x000020 - 0x000100)
static_assert(sizeof(FMovieSceneSlomoSectionTemplate) == 0x00C0); // 192 bytes (0x000020 - 0x0000C0)
static_assert(sizeof(FLevelVisibilityComponentData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMovieSceneVectorKeyStructBase) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FMovieSceneVector4KeyStruct) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FMovieSceneVectorKeyStruct) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FMovieSceneVector2DKeyStruct) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FMovieSceneVisibilitySectionTemplate) == 0x00C8); // 200 bytes (0x0000C8 - 0x0000C8)
static_assert(offsetof(FTickFunction, TickGroup) == 0x0008);
static_assert(offsetof(FTickFunction, EndTickGroup) == 0x0009);
static_assert(offsetof(FSimpleMemberReference, MemberParent) == 0x0000);
static_assert(offsetof(FSimpleMemberReference, MemberName) == 0x0008);
static_assert(offsetof(FSimpleMemberReference, MemberGuid) == 0x0010);
static_assert(offsetof(UActorComponent, PrimaryComponentTick) == 0x0030);
static_assert(offsetof(UActorComponent, ComponentTags) == 0x0060);
static_assert(offsetof(UActorComponent, AssetUserData) == 0x0070);
static_assert(offsetof(UActorComponent, CreationMethod) == 0x008C);
static_assert(offsetof(UActorComponent, UCSModifiedProperties) == 0x0090);
static_assert(offsetof(USceneComponent, PhysicsVolume) == 0x00B8);
static_assert(offsetof(USceneComponent, AttachParent) == 0x00C0);
static_assert(offsetof(USceneComponent, AttachSocketName) == 0x00C8);
static_assert(offsetof(USceneComponent, AttachChildren) == 0x00D0);
static_assert(offsetof(USceneComponent, ClientAttachedChildren) == 0x00E0);
static_assert(offsetof(USceneComponent, RelativeLocation) == 0x011C);
static_assert(offsetof(USceneComponent, RelativeRotation) == 0x0128);
static_assert(offsetof(USceneComponent, RelativeScale3D) == 0x0134);
static_assert(offsetof(USceneComponent, ComponentVelocity) == 0x0140);
static_assert(offsetof(USceneComponent, Mobility) == 0x014F);
static_assert(offsetof(USceneComponent, DetailMode) == 0x0150);
static_assert(offsetof(FIndexedCurve, KeyHandlesToIndices) == 0x0008);
static_assert(offsetof(FRealCurve, PreInfinityExtrap) == 0x006C);
static_assert(offsetof(FRealCurve, PostInfinityExtrap) == 0x006D);
static_assert(offsetof(FRichCurveKey, InterpMode) == 0x0000);
static_assert(offsetof(FRichCurveKey, TangentMode) == 0x0001);
static_assert(offsetof(FRichCurveKey, TangentWeightMode) == 0x0002);
static_assert(offsetof(FRichCurve, Keys) == 0x0070);
static_assert(offsetof(FRuntimeFloatCurve, EditorCurveData) == 0x0000);
static_assert(offsetof(FRuntimeFloatCurve, ExternalCurve) == 0x0080);
static_assert(offsetof(FBaseAttenuationSettings, DistanceAlgorithm) == 0x0008);
static_assert(offsetof(FBaseAttenuationSettings, AttenuationShape) == 0x0009);
static_assert(offsetof(FBaseAttenuationSettings, FalloffMode) == 0x0010);
static_assert(offsetof(FBaseAttenuationSettings, AttenuationShapeExtents) == 0x0014);
static_assert(offsetof(FBaseAttenuationSettings, CustomAttenuationCurve) == 0x0028);
static_assert(offsetof(FAttenuationSubmixSendSettings, Submix) == 0x0000);
static_assert(offsetof(FAttenuationSubmixSendSettings, SubmixSendMethod) == 0x0008);
static_assert(offsetof(FAttenuationSubmixSendSettings, CustomSubmixSendCurve) == 0x0020);
static_assert(offsetof(FSoundAttenuationPluginSettings, SpatializationPluginSettingsArray) == 0x0000);
static_assert(offsetof(FSoundAttenuationPluginSettings, OcclusionPluginSettingsArray) == 0x0010);
static_assert(offsetof(FSoundAttenuationPluginSettings, ReverbPluginSettingsArray) == 0x0020);
static_assert(offsetof(FSoundAttenuationSettings, SpatializationAlgorithm) == 0x00B2);
static_assert(offsetof(FSoundAttenuationSettings, AbsorptionMethod) == 0x00B8);
static_assert(offsetof(FSoundAttenuationSettings, OcclusionTraceChannel) == 0x00B9);
static_assert(offsetof(FSoundAttenuationSettings, ReverbSendMethod) == 0x00BA);
static_assert(offsetof(FSoundAttenuationSettings, PriorityAttenuationMethod) == 0x00BB);
static_assert(offsetof(FSoundAttenuationSettings, CustomLowpassAirAbsorptionCurve) == 0x00D0);
static_assert(offsetof(FSoundAttenuationSettings, CustomHighpassAirAbsorptionCurve) == 0x0158);
static_assert(offsetof(FSoundAttenuationSettings, CustomReverbSendCurve) == 0x0238);
static_assert(offsetof(FSoundAttenuationSettings, SubmixSendSettings) == 0x02C0);
static_assert(offsetof(FSoundAttenuationSettings, CustomPriorityAttenuationCurve) == 0x02E8);
static_assert(offsetof(FSoundAttenuationSettings, PluginSettings) == 0x0370);
static_assert(offsetof(FSoundSubmixSendInfo, SendLevelControlMethod) == 0x0000);
static_assert(offsetof(FSoundSubmixSendInfo, SendStage) == 0x0001);
static_assert(offsetof(FSoundSubmixSendInfo, SoundSubmix) == 0x0008);
static_assert(offsetof(FSoundSubmixSendInfo, CustomSendLevelCurve) == 0x0028);
static_assert(offsetof(FSoundSourceBusSendInfo, SourceBusSendLevelControlMethod) == 0x0000);
static_assert(offsetof(FSoundSourceBusSendInfo, SoundSourceBus) == 0x0008);
static_assert(offsetof(FSoundSourceBusSendInfo, AudioBus) == 0x0010);
static_assert(offsetof(FSoundSourceBusSendInfo, CustomSendLevelCurve) == 0x0030);
static_assert(offsetof(USynthComponent, AttenuationSettings) == 0x0200);
static_assert(offsetof(USynthComponent, AttenuationOverrides) == 0x0208);
static_assert(offsetof(USynthComponent, ConcurrencySettings) == 0x05A8);
static_assert(offsetof(USynthComponent, SoundClass) == 0x0600);
static_assert(offsetof(USynthComponent, SourceEffectChain) == 0x0608);
static_assert(offsetof(USynthComponent, SoundSubmix) == 0x0610);
static_assert(offsetof(USynthComponent, SoundSubmixSends) == 0x0618);
static_assert(offsetof(USynthComponent, BusSends) == 0x0628);
static_assert(offsetof(USynthComponent, PreEffectBusSends) == 0x0638);
static_assert(offsetof(USynthComponent, Synth) == 0x0688);
static_assert(offsetof(USynthComponent, AudioComponent) == 0x0690);
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, DynamicsProcessorType) == 0x0000);
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, PeakMode) == 0x0001);
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, LinkMode) == 0x0002);
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, ExternalSubmix) == 0x0020);
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, KeyHighshelf) == 0x0034);
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, KeyLowshelf) == 0x0040);
static_assert(offsetof(USubmixEffectDynamicsProcessorPreset, Settings) == 0x00E0);
static_assert(offsetof(FSubmixEffectSubmixEQSettings, EQBands) == 0x0000);
static_assert(offsetof(USubmixEffectSubmixEQPreset, Settings) == 0x00A0);
static_assert(offsetof(USubmixEffectReverbPreset, Settings) == 0x00D0);
static_assert(offsetof(FSoundConcurrencySettings, ResolutionRule) == 0x0008);
static_assert(offsetof(FSoundConcurrencySettings, VolumeScaleMode) == 0x0014);
static_assert(offsetof(FSoundModulationDestinationSettings, Modulator) == 0x0008);
static_assert(offsetof(FSoundModulationDefaultSettings, VolumeModulationDestination) == 0x0000);
static_assert(offsetof(FSoundModulationDefaultSettings, PitchModulationDestination) == 0x0010);
static_assert(offsetof(FSoundModulationDefaultSettings, HighpassModulationDestination) == 0x0020);
static_assert(offsetof(FSoundModulationDefaultSettings, LowpassModulationDestination) == 0x0030);
static_assert(offsetof(FSoundModulationDefaultRoutingSettings, VolumeRouting) == 0x0040);
static_assert(offsetof(FSoundModulationDefaultRoutingSettings, PitchRouting) == 0x0041);
static_assert(offsetof(FSoundModulationDefaultRoutingSettings, HighpassRouting) == 0x0042);
static_assert(offsetof(FSoundModulationDefaultRoutingSettings, LowpassRouting) == 0x0043);
static_assert(offsetof(USoundBase, SoundClassObject) == 0x0030);
static_assert(offsetof(USoundBase, VirtualizationMode) == 0x0039);
static_assert(offsetof(USoundBase, ConcurrencyOverrides) == 0x00E0);
static_assert(offsetof(USoundBase, AttenuationSettings) == 0x0118);
static_assert(offsetof(USoundBase, ModulationSettings) == 0x0120);
static_assert(offsetof(USoundBase, SoundSubmixObject) == 0x0168);
static_assert(offsetof(USoundBase, SoundSubmixSends) == 0x0170);
static_assert(offsetof(USoundBase, SourceEffectChain) == 0x0180);
static_assert(offsetof(USoundBase, BusSends) == 0x0188);
static_assert(offsetof(USoundBase, PreEffectBusSends) == 0x0198);
static_assert(offsetof(USoundBase, AssetUserData) == 0x01A8);
static_assert(offsetof(FSoundWaveSpectralTimeData, Data) == 0x0000);
static_assert(offsetof(FSubtitleCue, Text) == 0x0000);
static_assert(offsetof(USoundWave, SampleRateQuality) == 0x01C0);
static_assert(offsetof(USoundWave, SoundGroup) == 0x01C2);
static_assert(offsetof(USoundWave, LoadingBehavior) == 0x01C4);
static_assert(offsetof(USoundWave, FrequenciesToAnalyze) == 0x01C8);
static_assert(offsetof(USoundWave, CookedSpectralTimeData) == 0x01D8);
static_assert(offsetof(USoundWave, CookedEnvelopeTimeData) == 0x01E8);
static_assert(offsetof(USoundWave, SpokenText) == 0x0240);
static_assert(offsetof(USoundWave, Subtitles) == 0x0270);
static_assert(offsetof(USoundWave, Curves) == 0x0280);
static_assert(offsetof(USoundWave, InternalCurves) == 0x0288);
static_assert(offsetof(USynthSound, OwningSynthComponent) == 0x03C0);
static_assert(offsetof(UDataAsset, NativeClass) == 0x0028);
static_assert(offsetof(FRepMovement, LinearVelocity) == 0x0000);
static_assert(offsetof(FRepMovement, AngularVelocity) == 0x000C);
static_assert(offsetof(FRepMovement, Location) == 0x0018);
static_assert(offsetof(FRepMovement, Rotation) == 0x0024);
static_assert(offsetof(FRepMovement, LocationQuantizationLevel) == 0x0031);
static_assert(offsetof(FRepMovement, VelocityQuantizationLevel) == 0x0032);
static_assert(offsetof(FRepMovement, RotationQuantizationLevel) == 0x0033);
static_assert(offsetof(FRepAttachment, AttachParent) == 0x0000);
static_assert(offsetof(FRepAttachment, LocationOffset) == 0x0008);
static_assert(offsetof(FRepAttachment, RelativeScale3D) == 0x0014);
static_assert(offsetof(FRepAttachment, RotationOffset) == 0x0020);
static_assert(offsetof(FRepAttachment, AttachSocket) == 0x002C);
static_assert(offsetof(FRepAttachment, AttachComponent) == 0x0038);
static_assert(offsetof(AActor, PrimaryActorTick) == 0x0028);
static_assert(offsetof(AActor, UpdateOverlapsMethodDuringLevelStreaming) == 0x005D);
static_assert(offsetof(AActor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 0x005E);
static_assert(offsetof(AActor, RemoteRole) == 0x005F);
static_assert(offsetof(AActor, ReplicatedMovement) == 0x0060);
static_assert(offsetof(AActor, AttachmentReplication) == 0x00A0);
static_assert(offsetof(AActor, Owner) == 0x00E0);
static_assert(offsetof(AActor, NetDriverName) == 0x00E8);
static_assert(offsetof(AActor, Role) == 0x00F0);
static_assert(offsetof(AActor, NetDormancy) == 0x00F1);
static_assert(offsetof(AActor, SpawnCollisionHandlingMethod) == 0x00F2);
static_assert(offsetof(AActor, AutoReceiveInput) == 0x00F3);
static_assert(offsetof(AActor, InputComponent) == 0x00F8);
static_assert(offsetof(AActor, Instigator) == 0x0118);
static_assert(offsetof(AActor, Children) == 0x0120);
static_assert(offsetof(AActor, RootComponent) == 0x0130);
static_assert(offsetof(AActor, ControllingMatineeActors) == 0x0138);
static_assert(offsetof(AActor, Layers) == 0x0150);
static_assert(offsetof(AActor, ParentComponent) == 0x0160);
static_assert(offsetof(AActor, Tags) == 0x0170);
static_assert(offsetof(AActor, InstanceComponents) == 0x01F0);
static_assert(offsetof(AActor, BlueprintCreatedComponents) == 0x0200);
static_assert(offsetof(ABrush, BrushType) == 0x0220);
static_assert(offsetof(ABrush, BrushColor) == 0x0224);
static_assert(offsetof(ABrush, Brush) == 0x0230);
static_assert(offsetof(ABrush, BrushComponent) == 0x0238);
static_assert(offsetof(ABrush, SavedSelections) == 0x0248);
static_assert(offsetof(FCustomPrimitiveData, Data) == 0x0000);
static_assert(offsetof(FCollisionResponseContainer, WorldStatic) == 0x0000);
static_assert(offsetof(FCollisionResponseContainer, WorldDynamic) == 0x0001);
static_assert(offsetof(FCollisionResponseContainer, Pawn) == 0x0002);
static_assert(offsetof(FCollisionResponseContainer, Visibility) == 0x0003);
static_assert(offsetof(FCollisionResponseContainer, Camera) == 0x0004);
static_assert(offsetof(FCollisionResponseContainer, PhysicsBody) == 0x0005);
static_assert(offsetof(FCollisionResponseContainer, Vehicle) == 0x0006);
static_assert(offsetof(FCollisionResponseContainer, Destructible) == 0x0007);
static_assert(offsetof(FCollisionResponseContainer, EngineTraceChannel1) == 0x0008);
static_assert(offsetof(FCollisionResponseContainer, EngineTraceChannel2) == 0x0009);
static_assert(offsetof(FCollisionResponseContainer, EngineTraceChannel3) == 0x000A);
static_assert(offsetof(FCollisionResponseContainer, EngineTraceChannel4) == 0x000B);
static_assert(offsetof(FCollisionResponseContainer, EngineTraceChannel5) == 0x000C);
static_assert(offsetof(FCollisionResponseContainer, EngineTraceChannel6) == 0x000D);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel1) == 0x000E);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel2) == 0x000F);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel3) == 0x0010);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel4) == 0x0011);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel5) == 0x0012);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel6) == 0x0013);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel7) == 0x0014);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel8) == 0x0015);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel9) == 0x0016);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel10) == 0x0017);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel11) == 0x0018);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel12) == 0x0019);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel13) == 0x001A);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel14) == 0x001B);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel15) == 0x001C);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel16) == 0x001D);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel17) == 0x001E);
static_assert(offsetof(FCollisionResponseContainer, GameTraceChannel18) == 0x001F);
static_assert(offsetof(FResponseChannel, Channel) == 0x0000);
static_assert(offsetof(FResponseChannel, Response) == 0x0008);
static_assert(offsetof(FCollisionResponse, ResponseToChannels) == 0x0000);
static_assert(offsetof(FCollisionResponse, ResponseArray) == 0x0020);
static_assert(offsetof(FWalkableSlopeOverride, WalkableSlopeBehavior) == 0x0000);
static_assert(offsetof(FBodyInstance, ObjectType) == 0x001E);
static_assert(offsetof(FBodyInstance, CollisionEnabled) == 0x0020);
static_assert(offsetof(FBodyInstance, SleepFamily) == 0x0059);
static_assert(offsetof(FBodyInstance, DOFMode) == 0x005A);
static_assert(offsetof(FBodyInstance, CollisionProfileName) == 0x006C);
static_assert(offsetof(FBodyInstance, CollisionResponses) == 0x0078);
static_assert(offsetof(FBodyInstance, CustomDOFPlaneNormal) == 0x00C0);
static_assert(offsetof(FBodyInstance, COMNudge) == 0x00CC);
static_assert(offsetof(FBodyInstance, InertiaTensorScale) == 0x00DC);
static_assert(offsetof(FBodyInstance, WalkableSlopeOverride) == 0x00F8);
static_assert(offsetof(FBodyInstance, PhysMaterialOverride) == 0x0108);
static_assert(offsetof(UPrimitiveComponent, DepthPriorityGroup) == 0x020C);
static_assert(offsetof(UPrimitiveComponent, ViewOwnerDepthPriorityGroup) == 0x020D);
static_assert(offsetof(UPrimitiveComponent, IndirectLightingCacheQuality) == 0x020E);
static_assert(offsetof(UPrimitiveComponent, LightmapType) == 0x020F);
static_assert(offsetof(UPrimitiveComponent, MobileReflectionType) == 0x0217);
static_assert(offsetof(UPrimitiveComponent, MobileSpecifiedCaptures) == 0x0218);
static_assert(offsetof(UPrimitiveComponent, bHasCustomNavigableGeometry) == 0x022A);
static_assert(offsetof(UPrimitiveComponent, CanCharacterStepUpOn) == 0x022C);
static_assert(offsetof(UPrimitiveComponent, LightingChannels) == 0x022D);
static_assert(offsetof(UPrimitiveComponent, CustomDepthStencilWriteMask) == 0x022E);
static_assert(offsetof(UPrimitiveComponent, CustomPrimitiveData) == 0x0240);
static_assert(offsetof(UPrimitiveComponent, CustomPrimitiveDataInternal) == 0x0250);
static_assert(offsetof(UPrimitiveComponent, RuntimeVirtualTextures) == 0x0270);
static_assert(offsetof(UPrimitiveComponent, VirtualTextureRenderPassType) == 0x0283);
static_assert(offsetof(UPrimitiveComponent, MoveIgnoreActors) == 0x02B0);
static_assert(offsetof(UPrimitiveComponent, MoveIgnoreComponents) == 0x02C0);
static_assert(offsetof(UPrimitiveComponent, BodyInstance) == 0x02E0);
static_assert(offsetof(UPrimitiveComponent, LODParentPrimitive) == 0x0460);
static_assert(offsetof(FStreamingLevelsToConsider, StreamingLevels) == 0x0000);
static_assert(offsetof(FLevelCollection, GameState) == 0x0008);
static_assert(offsetof(FLevelCollection, NetDriver) == 0x0010);
static_assert(offsetof(FLevelCollection, DemoNetDriver) == 0x0018);
static_assert(offsetof(FLevelCollection, PersistentLevel) == 0x0020);
static_assert(offsetof(FPSCPoolElem, PSC) == 0x0000);
static_assert(offsetof(FPSCPool, FreeElements) == 0x0000);
static_assert(offsetof(FPSCPool, InUseComponents_Auto) == 0x0010);
static_assert(offsetof(FPSCPool, InUseComponents_Manual) == 0x0020);
static_assert(offsetof(FWorldPSCPool, WorldParticleSystemPools) == 0x0000);
static_assert(offsetof(UWorld, PersistentLevel) == 0x0030);
static_assert(offsetof(UWorld, NetDriver) == 0x0038);
static_assert(offsetof(UWorld, LineBatcher) == 0x0040);
static_assert(offsetof(UWorld, PersistentLineBatcher) == 0x0048);
static_assert(offsetof(UWorld, ForegroundLineBatcher) == 0x0050);
static_assert(offsetof(UWorld, NetworkManager) == 0x0058);
static_assert(offsetof(UWorld, PhysicsCollisionHandler) == 0x0060);
static_assert(offsetof(UWorld, ExtraReferencedObjects) == 0x0068);
static_assert(offsetof(UWorld, PerModuleDataObjects) == 0x0078);
static_assert(offsetof(UWorld, StreamingLevels) == 0x0088);
static_assert(offsetof(UWorld, StreamingLevelsToConsider) == 0x0098);
static_assert(offsetof(UWorld, StreamingLevelsPrefix) == 0x00C0);
static_assert(offsetof(UWorld, CurrentLevelPendingVisibility) == 0x00D0);
static_assert(offsetof(UWorld, CurrentLevelPendingInvisibility) == 0x00D8);
static_assert(offsetof(UWorld, DemoNetDriver) == 0x00E0);
static_assert(offsetof(UWorld, MyParticleEventManager) == 0x00E8);
static_assert(offsetof(UWorld, DefaultPhysicsVolume) == 0x00F0);
static_assert(offsetof(UWorld, NavigationSystem) == 0x0110);
static_assert(offsetof(UWorld, AuthorityGameMode) == 0x0118);
static_assert(offsetof(UWorld, GameState) == 0x0120);
static_assert(offsetof(UWorld, AISystem) == 0x0128);
static_assert(offsetof(UWorld, AvoidanceManager) == 0x0130);
static_assert(offsetof(UWorld, Levels) == 0x0138);
static_assert(offsetof(UWorld, LevelCollections) == 0x0148);
static_assert(offsetof(UWorld, OwningGameInstance) == 0x0180);
static_assert(offsetof(UWorld, ParameterCollectionInstances) == 0x0188);
static_assert(offsetof(UWorld, CanvasForRenderingToTarget) == 0x0198);
static_assert(offsetof(UWorld, CanvasForDrawMaterialToRenderTarget) == 0x01A0);
static_assert(offsetof(UWorld, ComponentsThatNeedEndOfFrameUpdate) == 0x0248);
static_assert(offsetof(UWorld, ComponentsThatNeedEndOfFrameUpdate_OnGameThread) == 0x0258);
static_assert(offsetof(UWorld, WorldComposition) == 0x05D8);
static_assert(offsetof(UWorld, PSCPool) == 0x0668);
static_assert(offsetof(UAssetManager, ObjectReferenceList) == 0x02C0);
static_assert(offsetof(UMeshComponent, OverrideMaterials) == 0x0468);
static_assert(offsetof(FSkelMeshComponentLODInfo, HiddenMaterials) == 0x0000);
static_assert(offsetof(USkinnedMeshComponent, SkeletalMesh) == 0x0498);
static_assert(offsetof(USkinnedMeshComponent, MasterPoseComponent) == 0x04A0);
static_assert(offsetof(USkinnedMeshComponent, SkinCacheUsage) == 0x04A8);
static_assert(offsetof(USkinnedMeshComponent, VertexOffsetUsage) == 0x04B8);
static_assert(offsetof(USkinnedMeshComponent, PhysicsAssetOverride) == 0x05C0);
static_assert(offsetof(USkinnedMeshComponent, LODInfo) == 0x05E8);
static_assert(offsetof(USkinnedMeshComponent, VisibilityBasedAnimTickOption) == 0x061C);
static_assert(offsetof(USkinnedMeshComponent, CachedWorldSpaceBounds) == 0x0638);
static_assert(offsetof(USkinnedMeshComponent, CachedWorldToLocalTransform) == 0x0660);
static_assert(offsetof(FSkeletalMaterial, MaterialInterface) == 0x0000);
static_assert(offsetof(FSkeletalMaterial, MaterialSlotName) == 0x0008);
static_assert(offsetof(FSkeletalMaterial, UVChannelData) == 0x0010);
static_assert(offsetof(FBoneMirrorInfo, BoneFlipAxis) == 0x0004);
static_assert(offsetof(FSkeletalMeshOptimizationSettings, TerminationCriterion) == 0x0000);
static_assert(offsetof(FSkeletalMeshOptimizationSettings, ReductionMethod) == 0x0018);
static_assert(offsetof(FSkeletalMeshOptimizationSettings, SilhouetteImportance) == 0x0019);
static_assert(offsetof(FSkeletalMeshOptimizationSettings, TextureImportance) == 0x001A);
static_assert(offsetof(FSkeletalMeshOptimizationSettings, ShadingImportance) == 0x001B);
static_assert(offsetof(FSkeletalMeshOptimizationSettings, SkinningImportance) == 0x001C);
static_assert(offsetof(FBoneReference, BoneName) == 0x0000);
static_assert(offsetof(FSkeletalMeshLODInfo, ScreenSize) == 0x0000);
static_assert(offsetof(FSkeletalMeshLODInfo, LODMaterialMap) == 0x0008);
static_assert(offsetof(FSkeletalMeshLODInfo, LODOutlineMaterialMap) == 0x0018);
static_assert(offsetof(FSkeletalMeshLODInfo, BuildSettings) == 0x0028);
static_assert(offsetof(FSkeletalMeshLODInfo, ReductionSettings) == 0x003C);
static_assert(offsetof(FSkeletalMeshLODInfo, BonesToRemove) == 0x0078);
static_assert(offsetof(FSkeletalMeshLODInfo, BonesToPrioritize) == 0x0088);
static_assert(offsetof(FSkeletalMeshLODInfo, BakePose) == 0x00A0);
static_assert(offsetof(FSkeletalMeshLODInfo, BakePoseOverride) == 0x00A8);
static_assert(offsetof(FSkeletalMeshLODInfo, SourceImportFilename) == 0x00B0);
static_assert(offsetof(FSkeletalMeshLODInfo, SkinCacheUsage) == 0x00C0);
static_assert(offsetof(FSkeletalMeshSamplingRegionMaterialFilter, MaterialName) == 0x0000);
static_assert(offsetof(FSkeletalMeshSamplingRegionBoneFilter, BoneName) == 0x0000);
static_assert(offsetof(FSkeletalMeshSamplingRegion, Name) == 0x0000);
static_assert(offsetof(FSkeletalMeshSamplingRegion, MaterialFilters) == 0x0010);
static_assert(offsetof(FSkeletalMeshSamplingRegion, BoneFilters) == 0x0020);
static_assert(offsetof(FSkeletalMeshSamplingBuiltData, WholeMeshBuiltData) == 0x0000);
static_assert(offsetof(FSkeletalMeshSamplingBuiltData, RegionBuiltData) == 0x0010);
static_assert(offsetof(FSkeletalMeshSamplingInfo, Regions) == 0x0000);
static_assert(offsetof(FSkeletalMeshSamplingInfo, BuiltData) == 0x0010);
static_assert(offsetof(FSkinWeightProfileInfo, Name) == 0x0000);
static_assert(offsetof(FSkinWeightProfileInfo, DefaultProfile) == 0x0008);
static_assert(offsetof(FSkinWeightProfileInfo, DefaultProfileFromLODIndex) == 0x000C);
static_assert(offsetof(USkeletalMesh, Skeleton) == 0x0080);
static_assert(offsetof(USkeletalMesh, ImportedBounds) == 0x0088);
static_assert(offsetof(USkeletalMesh, ExtendedBounds) == 0x00A4);
static_assert(offsetof(USkeletalMesh, PositiveBoundsExtension) == 0x00C0);
static_assert(offsetof(USkeletalMesh, NegativeBoundsExtension) == 0x00CC);
static_assert(offsetof(USkeletalMesh, Materials) == 0x00D8);
static_assert(offsetof(USkeletalMesh, SkelMirrorTable) == 0x00E8);
static_assert(offsetof(USkeletalMesh, LODInfo) == 0x00F8);
static_assert(offsetof(USkeletalMesh, MinLOD) == 0x0158);
static_assert(offsetof(USkeletalMesh, DisableBelowMinLodStripping) == 0x015C);
static_assert(offsetof(USkeletalMesh, SkelMirrorAxis) == 0x015D);
static_assert(offsetof(USkeletalMesh, SkelMirrorFlipAxis) == 0x015E);
static_assert(offsetof(USkeletalMesh, BodySetup) == 0x0160);
static_assert(offsetof(USkeletalMesh, PhysicsAsset) == 0x0168);
static_assert(offsetof(USkeletalMesh, ShadowPhysicsAsset) == 0x0170);
static_assert(offsetof(USkeletalMesh, NodeMappingData) == 0x0178);
static_assert(offsetof(USkeletalMesh, MorphTargets) == 0x0188);
static_assert(offsetof(USkeletalMesh, PostProcessAnimBlueprint) == 0x0320);
static_assert(offsetof(USkeletalMesh, MeshClothingAssets) == 0x0328);
static_assert(offsetof(USkeletalMesh, SamplingInfo) == 0x0338);
static_assert(offsetof(USkeletalMesh, AssetUserData) == 0x0368);
static_assert(offsetof(USkeletalMesh, Sockets) == 0x0378);
static_assert(offsetof(USkeletalMesh, SkinWeightProfiles) == 0x0398);
static_assert(offsetof(FTouchInputControl, Image1) == 0x0000);
static_assert(offsetof(FTouchInputControl, Image2) == 0x0008);
static_assert(offsetof(FTouchInputControl, Center) == 0x0010);
static_assert(offsetof(FTouchInputControl, VisualSize) == 0x0018);
static_assert(offsetof(FTouchInputControl, ThumbSize) == 0x0020);
static_assert(offsetof(FTouchInputControl, InteractionSize) == 0x0028);
static_assert(offsetof(FTouchInputControl, InputScale) == 0x0030);
static_assert(offsetof(FTouchInputControl, MainInputKey) == 0x0038);
static_assert(offsetof(FTouchInputControl, AltInputKey) == 0x0050);
static_assert(offsetof(UTouchInterface, Controls) == 0x0028);
static_assert(offsetof(FStatColorMapEntry, Out) == 0x0004);
static_assert(offsetof(FStatColorMapping, StatName) == 0x0000);
static_assert(offsetof(FStatColorMapping, ColorMap) == 0x0010);
static_assert(offsetof(FGameNameRedirect, OldGameName) == 0x0000);
static_assert(offsetof(FGameNameRedirect, NewGameName) == 0x0008);
static_assert(offsetof(FClassRedirect, ObjectName) == 0x0000);
static_assert(offsetof(FClassRedirect, OldClassName) == 0x0008);
static_assert(offsetof(FClassRedirect, NewClassName) == 0x0010);
static_assert(offsetof(FClassRedirect, OldSubobjName) == 0x0018);
static_assert(offsetof(FClassRedirect, NewSubobjName) == 0x0020);
static_assert(offsetof(FClassRedirect, NewClassClass) == 0x0028);
static_assert(offsetof(FClassRedirect, NewClassPackage) == 0x0030);
static_assert(offsetof(FPluginRedirect, OldPluginName) == 0x0000);
static_assert(offsetof(FPluginRedirect, NewPluginName) == 0x0010);
static_assert(offsetof(FStructRedirect, OldStructName) == 0x0000);
static_assert(offsetof(FStructRedirect, NewStructName) == 0x0008);
static_assert(offsetof(FDirectoryPath, Path) == 0x0000);
static_assert(offsetof(FDropNoteInfo, Location) == 0x0000);
static_assert(offsetof(FDropNoteInfo, Rotation) == 0x000C);
static_assert(offsetof(FDropNoteInfo, Comment) == 0x0018);
static_assert(offsetof(FNetDriverDefinition, DefName) == 0x0000);
static_assert(offsetof(FNetDriverDefinition, DriverClassName) == 0x0008);
static_assert(offsetof(FNetDriverDefinition, DriverClassNameFallback) == 0x0010);
static_assert(offsetof(UEngine, TinyFont) == 0x0030);
static_assert(offsetof(UEngine, TinyFontName) == 0x0038);
static_assert(offsetof(UEngine, SmallFont) == 0x0050);
static_assert(offsetof(UEngine, SmallFontName) == 0x0058);
static_assert(offsetof(UEngine, MediumFont) == 0x0070);
static_assert(offsetof(UEngine, MediumFontName) == 0x0078);
static_assert(offsetof(UEngine, LargeFont) == 0x0090);
static_assert(offsetof(UEngine, LargeFontName) == 0x0098);
static_assert(offsetof(UEngine, SubtitleFont) == 0x00B0);
static_assert(offsetof(UEngine, SubtitleFontName) == 0x00B8);
static_assert(offsetof(UEngine, AdditionalFonts) == 0x00D0);
static_assert(offsetof(UEngine, AdditionalFontNames) == 0x00E0);
static_assert(offsetof(UEngine, ConsoleClass) == 0x00F0);
static_assert(offsetof(UEngine, ConsoleClassName) == 0x00F8);
static_assert(offsetof(UEngine, GameViewportClientClass) == 0x0110);
static_assert(offsetof(UEngine, GameViewportClientClassName) == 0x0118);
static_assert(offsetof(UEngine, LocalPlayerClass) == 0x0130);
static_assert(offsetof(UEngine, LocalPlayerClassName) == 0x0138);
static_assert(offsetof(UEngine, WorldSettingsClass) == 0x0150);
static_assert(offsetof(UEngine, WorldSettingsClassName) == 0x0158);
static_assert(offsetof(UEngine, NavigationSystemClassName) == 0x0170);
static_assert(offsetof(UEngine, NavigationSystemClass) == 0x0188);
static_assert(offsetof(UEngine, NavigationSystemConfigClassName) == 0x0190);
static_assert(offsetof(UEngine, NavigationSystemConfigClass) == 0x01A8);
static_assert(offsetof(UEngine, AvoidanceManagerClassName) == 0x01B0);
static_assert(offsetof(UEngine, AvoidanceManagerClass) == 0x01C8);
static_assert(offsetof(UEngine, AIControllerClassName) == 0x01D0);
static_assert(offsetof(UEngine, PhysicsCollisionHandlerClass) == 0x01E8);
static_assert(offsetof(UEngine, PhysicsCollisionHandlerClassName) == 0x01F0);
static_assert(offsetof(UEngine, GameUserSettingsClassName) == 0x0208);
static_assert(offsetof(UEngine, GameUserSettingsClass) == 0x0220);
static_assert(offsetof(UEngine, GameUserSettings) == 0x0228);
static_assert(offsetof(UEngine, LevelScriptActorClass) == 0x0230);
static_assert(offsetof(UEngine, LevelScriptActorClassName) == 0x0238);
static_assert(offsetof(UEngine, DefaultBlueprintBaseClassName) == 0x0250);
static_assert(offsetof(UEngine, GameSingletonClassName) == 0x0268);
static_assert(offsetof(UEngine, GameSingleton) == 0x0280);
static_assert(offsetof(UEngine, AssetManagerClassName) == 0x0288);
static_assert(offsetof(UEngine, AssetManager) == 0x02A0);
static_assert(offsetof(UEngine, DefaultTexture) == 0x02A8);
static_assert(offsetof(UEngine, DefaultTextureName) == 0x02B0);
static_assert(offsetof(UEngine, DefaultDiffuseTexture) == 0x02C8);
static_assert(offsetof(UEngine, DefaultDiffuseTextureName) == 0x02D0);
static_assert(offsetof(UEngine, DefaultBSPVertexTexture) == 0x02E8);
static_assert(offsetof(UEngine, DefaultBSPVertexTextureName) == 0x02F0);
static_assert(offsetof(UEngine, HighFrequencyNoiseTexture) == 0x0308);
static_assert(offsetof(UEngine, HighFrequencyNoiseTextureName) == 0x0310);
static_assert(offsetof(UEngine, DefaultBokehTexture) == 0x0328);
static_assert(offsetof(UEngine, DefaultBokehTextureName) == 0x0330);
static_assert(offsetof(UEngine, DefaultBloomKernelTexture) == 0x0348);
static_assert(offsetof(UEngine, DefaultBloomKernelTextureName) == 0x0350);
static_assert(offsetof(UEngine, WireframeMaterial) == 0x0368);
static_assert(offsetof(UEngine, WireframeMaterialName) == 0x0370);
static_assert(offsetof(UEngine, DebugMeshMaterial) == 0x0380);
static_assert(offsetof(UEngine, DebugMeshMaterialName) == 0x0388);
static_assert(offsetof(UEngine, EmissiveMeshMaterial) == 0x03A0);
static_assert(offsetof(UEngine, EmissiveMeshMaterialName) == 0x03A8);
static_assert(offsetof(UEngine, LevelColorationLitMaterial) == 0x03C0);
static_assert(offsetof(UEngine, LevelColorationLitMaterialName) == 0x03C8);
static_assert(offsetof(UEngine, LevelColorationUnlitMaterial) == 0x03D8);
static_assert(offsetof(UEngine, LevelColorationUnlitMaterialName) == 0x03E0);
static_assert(offsetof(UEngine, LightingTexelDensityMaterial) == 0x03F0);
static_assert(offsetof(UEngine, LightingTexelDensityName) == 0x03F8);
static_assert(offsetof(UEngine, ShadedLevelColorationLitMaterial) == 0x0408);
static_assert(offsetof(UEngine, ShadedLevelColorationLitMaterialName) == 0x0410);
static_assert(offsetof(UEngine, ShadedLevelColorationUnlitMaterial) == 0x0420);
static_assert(offsetof(UEngine, ShadedLevelColorationUnlitMaterialName) == 0x0428);
static_assert(offsetof(UEngine, RemoveSurfaceMaterial) == 0x0438);
static_assert(offsetof(UEngine, RemoveSurfaceMaterialName) == 0x0440);
static_assert(offsetof(UEngine, VertexColorMaterial) == 0x0458);
static_assert(offsetof(UEngine, VertexColorMaterialName) == 0x0460);
static_assert(offsetof(UEngine, VertexColorViewModeMaterial_ColorOnly) == 0x0470);
static_assert(offsetof(UEngine, VertexColorViewModeMaterialName_ColorOnly) == 0x0478);
static_assert(offsetof(UEngine, VertexColorViewModeMaterial_AlphaAsColor) == 0x0488);
static_assert(offsetof(UEngine, VertexColorViewModeMaterialName_AlphaAsColor) == 0x0490);
static_assert(offsetof(UEngine, VertexColorViewModeMaterial_RedOnly) == 0x04A0);
static_assert(offsetof(UEngine, VertexColorViewModeMaterialName_RedOnly) == 0x04A8);
static_assert(offsetof(UEngine, VertexColorViewModeMaterial_GreenOnly) == 0x04B8);
static_assert(offsetof(UEngine, VertexColorViewModeMaterialName_GreenOnly) == 0x04C0);
static_assert(offsetof(UEngine, VertexColorViewModeMaterial_BlueOnly) == 0x04D0);
static_assert(offsetof(UEngine, VertexColorViewModeMaterialName_BlueOnly) == 0x04D8);
static_assert(offsetof(UEngine, DebugEditorMaterialName) == 0x04E8);
static_assert(offsetof(UEngine, ConstraintLimitMaterial) == 0x0500);
static_assert(offsetof(UEngine, ConstraintLimitMaterialX) == 0x0508);
static_assert(offsetof(UEngine, ConstraintLimitMaterialXAxis) == 0x0510);
static_assert(offsetof(UEngine, ConstraintLimitMaterialY) == 0x0518);
static_assert(offsetof(UEngine, ConstraintLimitMaterialYAxis) == 0x0520);
static_assert(offsetof(UEngine, ConstraintLimitMaterialZ) == 0x0528);
static_assert(offsetof(UEngine, ConstraintLimitMaterialZAxis) == 0x0530);
static_assert(offsetof(UEngine, ConstraintLimitMaterialPrismatic) == 0x0538);
static_assert(offsetof(UEngine, InvalidLightmapSettingsMaterial) == 0x0540);
static_assert(offsetof(UEngine, InvalidLightmapSettingsMaterialName) == 0x0548);
static_assert(offsetof(UEngine, PreviewShadowsIndicatorMaterial) == 0x0560);
static_assert(offsetof(UEngine, PreviewShadowsIndicatorMaterialName) == 0x0568);
static_assert(offsetof(UEngine, ArrowMaterial) == 0x0580);
static_assert(offsetof(UEngine, ArrowMaterialYellow) == 0x0588);
static_assert(offsetof(UEngine, ArrowMaterialName) == 0x0590);
static_assert(offsetof(UEngine, LightingOnlyBrightness) == 0x05A8);
static_assert(offsetof(UEngine, ShaderComplexityColors) == 0x05B8);
static_assert(offsetof(UEngine, QuadComplexityColors) == 0x05C8);
static_assert(offsetof(UEngine, LightComplexityColors) == 0x05D8);
static_assert(offsetof(UEngine, StationaryLightOverlapColors) == 0x05E8);
static_assert(offsetof(UEngine, LODColorationColors) == 0x05F8);
static_assert(offsetof(UEngine, HLODColorationColors) == 0x0608);
static_assert(offsetof(UEngine, StreamingAccuracyColors) == 0x0618);
static_assert(offsetof(UEngine, LightMapDensityVertexMappedColor) == 0x0648);
static_assert(offsetof(UEngine, LightMapDensitySelectedColor) == 0x0658);
static_assert(offsetof(UEngine, StatColorMappings) == 0x0668);
static_assert(offsetof(UEngine, DefaultPhysMaterial) == 0x0678);
static_assert(offsetof(UEngine, DefaultPhysMaterialName) == 0x0680);
static_assert(offsetof(UEngine, ActiveGameNameRedirects) == 0x0698);
static_assert(offsetof(UEngine, ActiveClassRedirects) == 0x06A8);
static_assert(offsetof(UEngine, ActivePluginRedirects) == 0x06B8);
static_assert(offsetof(UEngine, ActiveStructRedirects) == 0x06C8);
static_assert(offsetof(UEngine, PreIntegratedSkinBRDFTexture) == 0x06D8);
static_assert(offsetof(UEngine, PreIntegratedSkinBRDFTextureName) == 0x06E0);
static_assert(offsetof(UEngine, BlueNoiseTexture) == 0x06F8);
static_assert(offsetof(UEngine, BlueNoiseTextureName) == 0x0700);
static_assert(offsetof(UEngine, MiniFontTexture) == 0x0718);
static_assert(offsetof(UEngine, MiniFontTextureName) == 0x0720);
static_assert(offsetof(UEngine, WeightMapPlaceholderTexture) == 0x0738);
static_assert(offsetof(UEngine, WeightMapPlaceholderTextureName) == 0x0740);
static_assert(offsetof(UEngine, LightMapDensityTexture) == 0x0758);
static_assert(offsetof(UEngine, LightMapDensityTextureName) == 0x0760);
static_assert(offsetof(UEngine, GameViewport) == 0x0780);
static_assert(offsetof(UEngine, DeferredCommands) == 0x0788);
static_assert(offsetof(UEngine, SmoothedFrameRateRange) == 0x07AC);
static_assert(offsetof(UEngine, CustomTimeStep) == 0x07C0);
static_assert(offsetof(UEngine, CustomTimeStepClassName) == 0x07E8);
static_assert(offsetof(UEngine, TimecodeProvider) == 0x0800);
static_assert(offsetof(UEngine, TimecodeProviderClassName) == 0x0828);
static_assert(offsetof(UEngine, GenerateDefaultTimecodeFrameRate) == 0x0844);
static_assert(offsetof(UEngine, C_WorldBox) == 0x085C);
static_assert(offsetof(UEngine, C_BrushWire) == 0x0860);
static_assert(offsetof(UEngine, C_AddWire) == 0x0864);
static_assert(offsetof(UEngine, C_SubtractWire) == 0x0868);
static_assert(offsetof(UEngine, C_SemiSolidWire) == 0x086C);
static_assert(offsetof(UEngine, C_NonSolidWire) == 0x0870);
static_assert(offsetof(UEngine, C_WireBackground) == 0x0874);
static_assert(offsetof(UEngine, C_ScaleBoxHi) == 0x0878);
static_assert(offsetof(UEngine, C_VolumeCollision) == 0x087C);
static_assert(offsetof(UEngine, C_BSPCollision) == 0x0880);
static_assert(offsetof(UEngine, C_OrthoBackground) == 0x0884);
static_assert(offsetof(UEngine, C_Volume) == 0x0888);
static_assert(offsetof(UEngine, C_BrushShape) == 0x088C);
static_assert(offsetof(UEngine, GameScreenshotSaveDirectory) == 0x0898);
static_assert(offsetof(UEngine, TransitionType) == 0x08A8);
static_assert(offsetof(UEngine, TransitionDescription) == 0x08B0);
static_assert(offsetof(UEngine, TransitionGameMode) == 0x08C0);
static_assert(offsetof(UEngine, PendingDroppedNotes) == 0x08F0);
static_assert(offsetof(UEngine, DefaultSelectedMaterialColor) == 0x090C);
static_assert(offsetof(UEngine, SelectedMaterialColor) == 0x091C);
static_assert(offsetof(UEngine, SelectionOutlineColor) == 0x092C);
static_assert(offsetof(UEngine, SubduedSelectionOutlineColor) == 0x093C);
static_assert(offsetof(UEngine, SelectedMaterialColorOverride) == 0x094C);
static_assert(offsetof(UEngine, ParticleEventManagerClassPath) == 0x0970);
static_assert(offsetof(UEngine, NetDriverDefinitions) == 0x0BF8);
static_assert(offsetof(UEngine, ServerActors) == 0x0C08);
static_assert(offsetof(UEngine, RuntimeServerActors) == 0x0C18);
static_assert(offsetof(FDebugDisplayProperty, Obj) == 0x0000);
static_assert(offsetof(FDebugDisplayProperty, WithinClass) == 0x0008);
static_assert(offsetof(UGameViewportClient, ViewportConsole) == 0x0040);
static_assert(offsetof(UGameViewportClient, DebugProperties) == 0x0048);
static_assert(offsetof(UGameViewportClient, World) == 0x0078);
static_assert(offsetof(UGameViewportClient, GameInstance) == 0x0080);
static_assert(offsetof(AController, PlayerState) == 0x0228);
static_assert(offsetof(AController, StateName) == 0x0248);
static_assert(offsetof(AController, Pawn) == 0x0250);
static_assert(offsetof(AController, Character) == 0x0260);
static_assert(offsetof(AController, TransformComponent) == 0x0268);
static_assert(offsetof(AController, ControlRotation) == 0x0288);
static_assert(offsetof(FActiveForceFeedbackEffect, ForceFeedbackEffect) == 0x0000);
static_assert(offsetof(APlayerController, Player) == 0x0298);
static_assert(offsetof(APlayerController, AcknowledgedPawn) == 0x02A0);
static_assert(offsetof(APlayerController, ControllingDirTrackInst) == 0x02A8);
static_assert(offsetof(APlayerController, MyHUD) == 0x02B0);
static_assert(offsetof(APlayerController, PlayerCameraManager) == 0x02B8);
static_assert(offsetof(APlayerController, PlayerCameraManagerClass) == 0x02C0);
static_assert(offsetof(APlayerController, TargetViewRotation) == 0x02CC);
static_assert(offsetof(APlayerController, HiddenActors) == 0x02F0);
static_assert(offsetof(APlayerController, LastSpectatorSyncLocation) == 0x0318);
static_assert(offsetof(APlayerController, LastSpectatorSyncRotation) == 0x0324);
static_assert(offsetof(APlayerController, CheatManager) == 0x0338);
static_assert(offsetof(APlayerController, CheatClass) == 0x0340);
static_assert(offsetof(APlayerController, PlayerInput) == 0x0348);
static_assert(offsetof(APlayerController, ActiveForceFeedbackEffects) == 0x0350);
static_assert(offsetof(APlayerController, PendingSwapConnection) == 0x0410);
static_assert(offsetof(APlayerController, NetConnection) == 0x0418);
static_assert(offsetof(APlayerController, ClickEventKeys) == 0x0440);
static_assert(offsetof(APlayerController, DefaultMouseCursor) == 0x0450);
static_assert(offsetof(APlayerController, CurrentMouseCursor) == 0x0451);
static_assert(offsetof(APlayerController, DefaultClickTraceChannel) == 0x0452);
static_assert(offsetof(APlayerController, CurrentClickTraceChannel) == 0x0453);
static_assert(offsetof(APlayerController, InactiveStateInputComponent) == 0x04D0);
static_assert(offsetof(APlayerController, CurrentTouchInterface) == 0x04F0);
static_assert(offsetof(APlayerController, SpectatorPawn) == 0x0548);
static_assert(offsetof(APlayerController, SpawnLocation) == 0x0558);
static_assert(offsetof(UPlayer, PlayerController) == 0x0030);
static_assert(offsetof(ULocalPlayer, ViewportClient) == 0x0070);
static_assert(offsetof(ULocalPlayer, AspectRatioAxisConstraint) == 0x0094);
static_assert(offsetof(ULocalPlayer, PendingLevelPlayerControllerClass) == 0x0098);
static_assert(offsetof(FSingleAnimationPlayData, AnimToPlay) == 0x0000);
static_assert(offsetof(USkeletalMeshComponent, AnimBlueprintGeneratedClass) == 0x06C0);
static_assert(offsetof(USkeletalMeshComponent, AnimClass) == 0x06C8);
static_assert(offsetof(USkeletalMeshComponent, AnimScriptInstance) == 0x06D0);
static_assert(offsetof(USkeletalMeshComponent, PostProcessAnimInstance) == 0x06D8);
static_assert(offsetof(USkeletalMeshComponent, AnimationData) == 0x06E0);
static_assert(offsetof(USkeletalMeshComponent, RootBoneTranslation) == 0x0708);
static_assert(offsetof(USkeletalMeshComponent, LineCheckBoundsScale) == 0x0714);
static_assert(offsetof(USkeletalMeshComponent, LinkedInstances) == 0x0750);
static_assert(offsetof(USkeletalMeshComponent, CachedBoneSpaceTransforms) == 0x0760);
static_assert(offsetof(USkeletalMeshComponent, CachedComponentSpaceTransforms) == 0x0770);
static_assert(offsetof(USkeletalMeshComponent, KinematicBonesUpdateType) == 0x08D4);
static_assert(offsetof(USkeletalMeshComponent, PhysicsTransformUpdateMode) == 0x08D5);
static_assert(offsetof(USkeletalMeshComponent, AnimationMode) == 0x08D7);
static_assert(offsetof(USkeletalMeshComponent, MassMode) == 0x08E8);
static_assert(offsetof(USkeletalMeshComponent, DisallowedAnimCurves) == 0x0920);
static_assert(offsetof(USkeletalMeshComponent, BodySetup) == 0x0930);
static_assert(offsetof(USkeletalMeshComponent, ClothingSimulationFactory) == 0x0950);
static_assert(offsetof(USkeletalMeshComponent, ClothingInteractor) == 0x0A90);
static_assert(offsetof(FAnimNotifyEventReference, NotifySource) == 0x0008);
static_assert(offsetof(FAnimNotifyArray, Notifies) == 0x0000);
static_assert(offsetof(FAnimNotifyQueue, AnimNotifies) == 0x0010);
static_assert(offsetof(FAnimNotifyQueue, UnfilteredMontageAnimNotifies) == 0x0020);
static_assert(offsetof(FAnimLinkableElement, LinkedMontage) == 0x0008);
static_assert(offsetof(FAnimLinkableElement, LinkMethod) == 0x0018);
static_assert(offsetof(FAnimLinkableElement, CachedLinkMethod) == 0x0019);
static_assert(offsetof(FAnimLinkableElement, LinkedSequence) == 0x0028);
static_assert(offsetof(FAnimNotifyEvent, NotifyName) == 0x0040);
static_assert(offsetof(FAnimNotifyEvent, Notify) == 0x0048);
static_assert(offsetof(FAnimNotifyEvent, NotifyStateClass) == 0x0050);
static_assert(offsetof(FAnimNotifyEvent, EndLink) == 0x0060);
static_assert(offsetof(FAnimNotifyEvent, MontageTickType) == 0x0091);
static_assert(offsetof(FAnimNotifyEvent, NotifyFilterType) == 0x0098);
static_assert(offsetof(UAnimInstance, CurrentSkeleton) == 0x0028);
static_assert(offsetof(UAnimInstance, RootMotionMode) == 0x0030);
static_assert(offsetof(UAnimInstance, NotifyQueue) == 0x0100);
static_assert(offsetof(UAnimInstance, ActiveAnimNotifyState) == 0x0170);
static_assert(offsetof(FBPComponentClassOverride, ComponentName) == 0x0000);
static_assert(offsetof(FBPComponentClassOverride, ComponentClass) == 0x0008);
static_assert(offsetof(FBlueprintComponentChangedPropertyInfo, PropertyName) == 0x0000);
static_assert(offsetof(FBlueprintComponentChangedPropertyInfo, PropertyScope) == 0x0010);
static_assert(offsetof(FBlueprintCookedComponentInstancingData, ChangedPropertyList) == 0x0000);
static_assert(offsetof(UBlueprintGeneratedClass, DynamicBindingObjects) == 0x0238);
static_assert(offsetof(UBlueprintGeneratedClass, ComponentTemplates) == 0x0248);
static_assert(offsetof(UBlueprintGeneratedClass, Timelines) == 0x0258);
static_assert(offsetof(UBlueprintGeneratedClass, ComponentClassOverrides) == 0x0268);
static_assert(offsetof(UBlueprintGeneratedClass, SimpleConstructionScript) == 0x0278);
static_assert(offsetof(UBlueprintGeneratedClass, InheritableComponentHandler) == 0x0280);
static_assert(offsetof(UBlueprintGeneratedClass, UberGraphFramePointerProperty) == 0x0288);
static_assert(offsetof(UBlueprintGeneratedClass, UberGraphFunction) == 0x0298);
static_assert(offsetof(UBlueprintGeneratedClass, CookedComponentInstancingData) == 0x02A0);
static_assert(offsetof(FParticleSysParam, Name) == 0x0000);
static_assert(offsetof(FParticleSysParam, ParamType) == 0x0008);
static_assert(offsetof(FParticleSysParam, Vector) == 0x0014);
static_assert(offsetof(FParticleSysParam, Vector_Low) == 0x0020);
static_assert(offsetof(FParticleSysParam, Color) == 0x002C);
static_assert(offsetof(FParticleSysParam, Actor) == 0x0030);
static_assert(offsetof(FParticleSysParam, Material) == 0x0038);
static_assert(offsetof(UParticleSystemComponent, Template) == 0x0468);
static_assert(offsetof(UParticleSystemComponent, EmitterMaterials) == 0x0470);
static_assert(offsetof(UParticleSystemComponent, SkelMeshComponents) == 0x0480);
static_assert(offsetof(UParticleSystemComponent, LODMethod) == 0x049D);
static_assert(offsetof(UParticleSystemComponent, RequiredSignificance) == 0x049E);
static_assert(offsetof(UParticleSystemComponent, InstanceParameters) == 0x04A0);
static_assert(offsetof(UParticleSystemComponent, OldPosition) == 0x04F4);
static_assert(offsetof(UParticleSystemComponent, PartSysVelocity) == 0x0500);
static_assert(offsetof(UParticleSystemComponent, ReplayClips) == 0x0540);
static_assert(offsetof(UParticleSystemComponent, AutoAttachParent) == 0x05B0);
static_assert(offsetof(UParticleSystemComponent, AutoAttachSocketName) == 0x05B8);
static_assert(offsetof(UParticleSystemComponent, AutoAttachLocationRule) == 0x05C0);
static_assert(offsetof(UParticleSystemComponent, AutoAttachRotationRule) == 0x05C1);
static_assert(offsetof(UParticleSystemComponent, AutoAttachScaleRule) == 0x05C2);
static_assert(offsetof(AGameModeBase, OptionsString) == 0x0220);
static_assert(offsetof(AGameModeBase, GameSessionClass) == 0x0230);
static_assert(offsetof(AGameModeBase, GameStateClass) == 0x0238);
static_assert(offsetof(AGameModeBase, PlayerControllerClass) == 0x0240);
static_assert(offsetof(AGameModeBase, PlayerStateClass) == 0x0248);
static_assert(offsetof(AGameModeBase, HUDClass) == 0x0250);
static_assert(offsetof(AGameModeBase, DefaultPawnClass) == 0x0258);
static_assert(offsetof(AGameModeBase, SpectatorClass) == 0x0260);
static_assert(offsetof(AGameModeBase, ReplaySpectatorPlayerControllerClass) == 0x0268);
static_assert(offsetof(AGameModeBase, ServerStatReplicatorClass) == 0x0270);
static_assert(offsetof(AGameModeBase, GameSession) == 0x0278);
static_assert(offsetof(AGameModeBase, GameState) == 0x0280);
static_assert(offsetof(AGameModeBase, ServerStatReplicator) == 0x0288);
static_assert(offsetof(AGameModeBase, DefaultPlayerName) == 0x0290);
static_assert(offsetof(UCommandlet, HelpDescription) == 0x0028);
static_assert(offsetof(UCommandlet, HelpUsage) == 0x0038);
static_assert(offsetof(UCommandlet, HelpWebLink) == 0x0048);
static_assert(offsetof(UCommandlet, HelpParamNames) == 0x0058);
static_assert(offsetof(UCommandlet, HelpParamDescriptions) == 0x0068);
static_assert(offsetof(UGameUserSettings, LastCPUBenchmarkSteps) == 0x00E0);
static_assert(offsetof(UGameUserSettings, LastGPUBenchmarkSteps) == 0x00F0);
static_assert(offsetof(UMaterialExpression, Material) == 0x0028);
static_assert(offsetof(UMaterialExpression, Function) == 0x0030);
static_assert(offsetof(UMaterialExpressionTextureBase, Texture) == 0x0040);
static_assert(offsetof(FExpressionInput, ExpressionName) == 0x0004);
static_assert(offsetof(UMaterialExpressionTextureSample, Coordinates) == 0x0048);
static_assert(offsetof(UMaterialExpressionTextureSampleParameter, ParameterName) == 0x0060);
static_assert(offsetof(UMaterialExpressionTextureSampleParameter, ExpressionGUID) == 0x0068);
static_assert(offsetof(UMaterialExpressionTextureSampleParameter, Group) == 0x0078);
static_assert(offsetof(APawn, AutoPossessPlayer) == 0x0230);
static_assert(offsetof(APawn, AutoPossessAI) == 0x0231);
static_assert(offsetof(APawn, AIControllerClass) == 0x0238);
static_assert(offsetof(APawn, PlayerState) == 0x0240);
static_assert(offsetof(APawn, LastHitBy) == 0x0250);
static_assert(offsetof(APawn, Controller) == 0x0258);
static_assert(offsetof(APawn, ControlInputVector) == 0x0264);
static_assert(offsetof(APawn, LastControlInputVector) == 0x0270);
static_assert(offsetof(FBasedMovementInfo, MovementBase) == 0x0000);
static_assert(offsetof(FBasedMovementInfo, BoneName) == 0x0008);
static_assert(offsetof(FBasedMovementInfo, Location) == 0x0010);
static_assert(offsetof(FBasedMovementInfo, Rotation) == 0x001C);
static_assert(offsetof(FRootMotionSourceGroup, LastAccumulatedSettings) == 0x0029);
static_assert(offsetof(FRootMotionSourceGroup, LastPreAdditiveVelocity) == 0x002C);
static_assert(offsetof(FRootMotionMovementParams, RootMotionTransform) == 0x0010);
static_assert(offsetof(FRepRootMotionMontage, AnimMontage) == 0x0008);
static_assert(offsetof(FRepRootMotionMontage, Location) == 0x0014);
static_assert(offsetof(FRepRootMotionMontage, Rotation) == 0x0020);
static_assert(offsetof(FRepRootMotionMontage, MovementBase) == 0x0030);
static_assert(offsetof(FRepRootMotionMontage, MovementBaseBoneName) == 0x0038);
static_assert(offsetof(FRepRootMotionMontage, AuthoritativeRootMotion) == 0x0048);
static_assert(offsetof(FRepRootMotionMontage, Acceleration) == 0x0080);
static_assert(offsetof(FRepRootMotionMontage, LinearVelocity) == 0x008C);
static_assert(offsetof(FSimulatedRootMotionReplicatedMove, RootMotion) == 0x0008);
static_assert(offsetof(ACharacter, Mesh) == 0x0280);
static_assert(offsetof(ACharacter, CharacterMovement) == 0x0288);
static_assert(offsetof(ACharacter, CapsuleComponent) == 0x0290);
static_assert(offsetof(ACharacter, BasedMovement) == 0x0298);
static_assert(offsetof(ACharacter, ReplicatedBasedMovement) == 0x02C8);
static_assert(offsetof(ACharacter, BaseTranslationOffset) == 0x02FC);
static_assert(offsetof(ACharacter, BaseRotationOffset) == 0x0310);
static_assert(offsetof(ACharacter, SavedRootMotion) == 0x0398);
static_assert(offsetof(ACharacter, ClientRootMotionParams) == 0x03D0);
static_assert(offsetof(ACharacter, RootMotionRepMoves) == 0x0410);
static_assert(offsetof(ACharacter, RepRootMotion) == 0x0420);
static_assert(offsetof(FSplineCurves, Position) == 0x0000);
static_assert(offsetof(FSplineCurves, Rotation) == 0x0018);
static_assert(offsetof(FSplineCurves, Scale) == 0x0030);
static_assert(offsetof(FSplineCurves, ReparamTable) == 0x0048);
static_assert(offsetof(FSplineCurves, MetaData) == 0x0060);
static_assert(offsetof(USplineComponent, SplineCurves) == 0x0468);
static_assert(offsetof(USplineComponent, SplineInfo) == 0x04D8);
static_assert(offsetof(USplineComponent, SplineRotInfo) == 0x04F0);
static_assert(offsetof(USplineComponent, SplineScaleInfo) == 0x0508);
static_assert(offsetof(USplineComponent, SplineReparamTable) == 0x0520);
static_assert(offsetof(USplineComponent, DefaultUpVector) == 0x0550);
static_assert(offsetof(UAnimBoneCompressionCodec, Description) == 0x0028);
static_assert(offsetof(FAudioComponentParam, ParamName) == 0x0000);
static_assert(offsetof(FAudioComponentParam, SoundWaveParam) == 0x0018);
static_assert(offsetof(UAudioComponent, Sound) == 0x01F8);
static_assert(offsetof(UAudioComponent, InstanceParameters) == 0x0200);
static_assert(offsetof(UAudioComponent, SoundClassOverride) == 0x0210);
static_assert(offsetof(UAudioComponent, AudioComponentUserID) == 0x0220);
static_assert(offsetof(UAudioComponent, SourceEffectChain) == 0x0250);
static_assert(offsetof(UAudioComponent, AttenuationSettings) == 0x0268);
static_assert(offsetof(UAudioComponent, AttenuationOverrides) == 0x0270);
static_assert(offsetof(UAudioComponent, ConcurrencySettings) == 0x0610);
static_assert(offsetof(UAudioComponent, AutoAttachLocationRule) == 0x0674);
static_assert(offsetof(UAudioComponent, AutoAttachRotationRule) == 0x0675);
static_assert(offsetof(UAudioComponent, AutoAttachScaleRule) == 0x0676);
static_assert(offsetof(UAudioComponent, ModulationRouting) == 0x0678);
static_assert(offsetof(UAudioComponent, AutoAttachParent) == 0x07C0);
static_assert(offsetof(UAudioComponent, AutoAttachSocketName) == 0x07C8);
static_assert(offsetof(AGameMode, MatchState) == 0x02C0);
static_assert(offsetof(AGameMode, EngineMessageClass) == 0x02E0);
static_assert(offsetof(AGameMode, InactivePlayerArray) == 0x02E8);
static_assert(offsetof(AGameStateBase, GameModeClass) == 0x0220);
static_assert(offsetof(AGameStateBase, AuthorityGameMode) == 0x0228);
static_assert(offsetof(AGameStateBase, SpectatorClass) == 0x0230);
static_assert(offsetof(AGameStateBase, PlayerArray) == 0x0238);
static_assert(offsetof(AGameState, MatchState) == 0x0270);
static_assert(offsetof(AGameState, PreviousMatchState) == 0x0278);
static_assert(offsetof(UCameraShakeBase, CameraManager) == 0x0030);
static_assert(offsetof(FUniqueNetIdRepl, ReplicationBytes) == 0x0018);
static_assert(offsetof(UNetConnection, Children) == 0x0048);
static_assert(offsetof(UNetConnection, Driver) == 0x0058);
static_assert(offsetof(UNetConnection, PackageMapClass) == 0x0060);
static_assert(offsetof(UNetConnection, PackageMap) == 0x0068);
static_assert(offsetof(UNetConnection, OpenChannels) == 0x0070);
static_assert(offsetof(UNetConnection, SentTemporaries) == 0x0080);
static_assert(offsetof(UNetConnection, ViewTarget) == 0x0090);
static_assert(offsetof(UNetConnection, OwningActor) == 0x0098);
static_assert(offsetof(UNetConnection, PlayerId) == 0x0160);
static_assert(offsetof(UNetConnection, ChannelsToTick) == 0x1518);
static_assert(offsetof(FChannelDefinition, ChannelName) == 0x0000);
static_assert(offsetof(FChannelDefinition, ClassName) == 0x0008);
static_assert(offsetof(FChannelDefinition, ChannelClass) == 0x0010);
static_assert(offsetof(UNetDriver, NetConnectionClassName) == 0x0030);
static_assert(offsetof(UNetDriver, ReplicationDriverClassName) == 0x0040);
static_assert(offsetof(UNetDriver, ServerConnection) == 0x0088);
static_assert(offsetof(UNetDriver, ClientConnections) == 0x0090);
static_assert(offsetof(UNetDriver, World) == 0x0140);
static_assert(offsetof(UNetDriver, WorldPackage) == 0x0148);
static_assert(offsetof(UNetDriver, NetConnectionClass) == 0x0170);
static_assert(offsetof(UNetDriver, ReplicationDriverClass) == 0x0178);
static_assert(offsetof(UNetDriver, NetDriverName) == 0x0190);
static_assert(offsetof(UNetDriver, ChannelDefinitions) == 0x0198);
static_assert(offsetof(UNetDriver, ChannelDefinitionMap) == 0x01A8);
static_assert(offsetof(UNetDriver, ActorChannelPool) == 0x01F8);
static_assert(offsetof(UNetDriver, ReplicationDriver) == 0x06E8);
static_assert(offsetof(UMovementComponent, UpdatedComponent) == 0x00B0);
static_assert(offsetof(UMovementComponent, UpdatedPrimitive) == 0x00B8);
static_assert(offsetof(UMovementComponent, Velocity) == 0x00C4);
static_assert(offsetof(UMovementComponent, PlaneConstraintNormal) == 0x00D0);
static_assert(offsetof(UMovementComponent, PlaneConstraintOrigin) == 0x00DC);
static_assert(offsetof(UMovementComponent, PlaneConstraintAxisSetting) == 0x00EB);
static_assert(offsetof(FNavAgentProperties, PreferredNavData) == 0x0018);
static_assert(offsetof(UNavMovementComponent, NavAgentProps) == 0x00F0);
static_assert(offsetof(UNavMovementComponent, MovementState) == 0x0125);
static_assert(offsetof(UNavMovementComponent, PathFollowingComp) == 0x0128);
static_assert(offsetof(UPawnMovementComponent, PawnOwner) == 0x0130);
static_assert(offsetof(FHitResult, Location) == 0x0010);
static_assert(offsetof(FHitResult, ImpactPoint) == 0x001C);
static_assert(offsetof(FHitResult, Normal) == 0x0028);
static_assert(offsetof(FHitResult, ImpactNormal) == 0x0034);
static_assert(offsetof(FHitResult, TraceStart) == 0x0040);
static_assert(offsetof(FHitResult, TraceEnd) == 0x004C);
static_assert(offsetof(FHitResult, PhysMaterial) == 0x0064);
static_assert(offsetof(FHitResult, Actor) == 0x006C);
static_assert(offsetof(FHitResult, Component) == 0x0074);
static_assert(offsetof(FHitResult, BoneName) == 0x007C);
static_assert(offsetof(FHitResult, MyBoneName) == 0x0084);
static_assert(offsetof(FFindFloorResult, HitResult) == 0x000C);
static_assert(offsetof(UCharacterMovementComponent, CharacterOwner) == 0x0148);
static_assert(offsetof(UCharacterMovementComponent, MovementMode) == 0x0168);
static_assert(offsetof(UCharacterMovementComponent, NetworkSmoothingMode) == 0x016A);
static_assert(offsetof(UCharacterMovementComponent, RotationRate) == 0x01E4);
static_assert(offsetof(UCharacterMovementComponent, DeferredUpdatedMoveComponent) == 0x01F8);
static_assert(offsetof(UCharacterMovementComponent, Acceleration) == 0x022C);
static_assert(offsetof(UCharacterMovementComponent, LastUpdateRotation) == 0x0240);
static_assert(offsetof(UCharacterMovementComponent, LastUpdateLocation) == 0x0250);
static_assert(offsetof(UCharacterMovementComponent, LastUpdateVelocity) == 0x025C);
static_assert(offsetof(UCharacterMovementComponent, PendingImpulseToApply) == 0x0274);
static_assert(offsetof(UCharacterMovementComponent, PendingForceToApply) == 0x0280);
static_assert(offsetof(UCharacterMovementComponent, CurrentFloor) == 0x02F0);
static_assert(offsetof(UCharacterMovementComponent, DefaultLandMovementMode) == 0x0388);
static_assert(offsetof(UCharacterMovementComponent, DefaultWaterMovementMode) == 0x0389);
static_assert(offsetof(UCharacterMovementComponent, GroundMovementMode) == 0x038A);
static_assert(offsetof(UCharacterMovementComponent, RequestedVelocity) == 0x03A4);
static_assert(offsetof(UCharacterMovementComponent, AvoidanceGroup) == 0x03B4);
static_assert(offsetof(UCharacterMovementComponent, GroupsToAvoid) == 0x03B8);
static_assert(offsetof(UCharacterMovementComponent, GroupsToIgnore) == 0x03BC);
static_assert(offsetof(UCharacterMovementComponent, PendingLaunchVelocity) == 0x03C4);
static_assert(offsetof(UCharacterMovementComponent, PostPhysicsTickFunction) == 0x0490);
static_assert(offsetof(UCharacterMovementComponent, CurrentRootMotion) == 0x0988);
static_assert(offsetof(UCharacterMovementComponent, ServerCorrectionRootMotion) == 0x09C0);
static_assert(offsetof(UCharacterMovementComponent, RootMotionParams) == 0x0A90);
static_assert(offsetof(UCharacterMovementComponent, AnimRootMotionVelocity) == 0x0AD0);
static_assert(offsetof(FWeightedBlendable, Object) == 0x0008);
static_assert(offsetof(FWeightedBlendables, Array) == 0x0000);
static_assert(offsetof(FPostProcessSettings, BloomMethod) == 0x0021);
static_assert(offsetof(FPostProcessSettings, AutoExposureMethod) == 0x0022);
static_assert(offsetof(FPostProcessSettings, ColorSaturation) == 0x0030);
static_assert(offsetof(FPostProcessSettings, ColorContrast) == 0x0040);
static_assert(offsetof(FPostProcessSettings, ColorGamma) == 0x0050);
static_assert(offsetof(FPostProcessSettings, ColorGain) == 0x0060);
static_assert(offsetof(FPostProcessSettings, ColorOffset) == 0x0070);
static_assert(offsetof(FPostProcessSettings, ColorSaturationShadows) == 0x0080);
static_assert(offsetof(FPostProcessSettings, ColorContrastShadows) == 0x0090);
static_assert(offsetof(FPostProcessSettings, ColorGammaShadows) == 0x00A0);
static_assert(offsetof(FPostProcessSettings, ColorGainShadows) == 0x00B0);
static_assert(offsetof(FPostProcessSettings, ColorOffsetShadows) == 0x00C0);
static_assert(offsetof(FPostProcessSettings, ColorSaturationMidtones) == 0x00D0);
static_assert(offsetof(FPostProcessSettings, ColorContrastMidtones) == 0x00E0);
static_assert(offsetof(FPostProcessSettings, ColorGammaMidtones) == 0x00F0);
static_assert(offsetof(FPostProcessSettings, ColorGainMidtones) == 0x0100);
static_assert(offsetof(FPostProcessSettings, ColorOffsetMidtones) == 0x0110);
static_assert(offsetof(FPostProcessSettings, ColorSaturationHighlights) == 0x0120);
static_assert(offsetof(FPostProcessSettings, ColorContrastHighlights) == 0x0130);
static_assert(offsetof(FPostProcessSettings, ColorGammaHighlights) == 0x0140);
static_assert(offsetof(FPostProcessSettings, ColorGainHighlights) == 0x0150);
static_assert(offsetof(FPostProcessSettings, ColorOffsetHighlights) == 0x0160);
static_assert(offsetof(FPostProcessSettings, FilmWhitePoint) == 0x0198);
static_assert(offsetof(FPostProcessSettings, FilmShadowTint) == 0x01A8);
static_assert(offsetof(FPostProcessSettings, FilmChannelMixerRed) == 0x01C4);
static_assert(offsetof(FPostProcessSettings, FilmChannelMixerGreen) == 0x01D4);
static_assert(offsetof(FPostProcessSettings, FilmChannelMixerBlue) == 0x01E4);
static_assert(offsetof(FPostProcessSettings, SceneColorTint) == 0x0204);
static_assert(offsetof(FPostProcessSettings, Bloom1Tint) == 0x0240);
static_assert(offsetof(FPostProcessSettings, Bloom2Tint) == 0x0250);
static_assert(offsetof(FPostProcessSettings, Bloom3Tint) == 0x0260);
static_assert(offsetof(FPostProcessSettings, Bloom4Tint) == 0x0270);
static_assert(offsetof(FPostProcessSettings, Bloom5Tint) == 0x0280);
static_assert(offsetof(FPostProcessSettings, Bloom6Tint) == 0x0290);
static_assert(offsetof(FPostProcessSettings, BloomConvolutionTexture) == 0x02A8);
static_assert(offsetof(FPostProcessSettings, BloomConvolutionCenterUV) == 0x02B0);
static_assert(offsetof(FPostProcessSettings, BloomDirtMask) == 0x02C8);
static_assert(offsetof(FPostProcessSettings, BloomDirtMaskTint) == 0x02D4);
static_assert(offsetof(FPostProcessSettings, AmbientCubemapTint) == 0x02E4);
static_assert(offsetof(FPostProcessSettings, AmbientCubemap) == 0x02F8);
static_assert(offsetof(FPostProcessSettings, AutoExposureBiasCurve) == 0x0328);
static_assert(offsetof(FPostProcessSettings, AutoExposureMeterMask) == 0x0330);
static_assert(offsetof(FPostProcessSettings, LensFlareTint) == 0x0360);
static_assert(offsetof(FPostProcessSettings, LensFlareBokehShape) == 0x0378);
static_assert(offsetof(FPostProcessSettings, LensFlareTints) == 0x0380);
static_assert(offsetof(FPostProcessSettings, IndirectLightingColor) == 0x0454);
static_assert(offsetof(FPostProcessSettings, RayTracingGIType) == 0x0468);
static_assert(offsetof(FPostProcessSettings, ColorGradingLUT) == 0x0478);
static_assert(offsetof(FPostProcessSettings, ReflectionsType) == 0x04F8);
static_assert(offsetof(FPostProcessSettings, RayTracingReflectionsShadows) == 0x0518);
static_assert(offsetof(FPostProcessSettings, TranslucencyType) == 0x051A);
static_assert(offsetof(FPostProcessSettings, RayTracingTranslucencyShadows) == 0x0528);
static_assert(offsetof(FPostProcessSettings, WeightedBlendables) == 0x0540);
static_assert(offsetof(ACameraActor, AutoActivateForPlayer) == 0x0220);
static_assert(offsetof(ACameraActor, CameraComponent) == 0x0228);
static_assert(offsetof(ACameraActor, SceneComponent) == 0x0230);
static_assert(offsetof(ACameraActor, PostProcessSettings) == 0x0250);
static_assert(offsetof(FFOscillator, InitialOffset) == 0x0008);
static_assert(offsetof(FFOscillator, Waveform) == 0x0009);
static_assert(offsetof(FROscillator, Pitch) == 0x0000);
static_assert(offsetof(FROscillator, Yaw) == 0x000C);
static_assert(offsetof(FROscillator, Roll) == 0x0018);
static_assert(offsetof(FVOscillator, X) == 0x0000);
static_assert(offsetof(FVOscillator, Y) == 0x000C);
static_assert(offsetof(FVOscillator, Z) == 0x0018);
static_assert(offsetof(UMatineeCameraShake, RotOscillation) == 0x00A4);
static_assert(offsetof(UMatineeCameraShake, LocOscillation) == 0x00C8);
static_assert(offsetof(UMatineeCameraShake, FOVOscillation) == 0x00EC);
static_assert(offsetof(UMatineeCameraShake, Anim) == 0x0110);
static_assert(offsetof(UMatineeCameraShake, AnimInst) == 0x0120);
static_assert(offsetof(UShapeComponent, ShapeBodySetup) == 0x0468);
static_assert(offsetof(UShapeComponent, AreaClass) == 0x0470);
static_assert(offsetof(UShapeComponent, ShapeColor) == 0x0478);
static_assert(offsetof(UBoxComponent, BoxExtent) == 0x0480);
static_assert(offsetof(ATriggerBase, CollisionComponent) == 0x0220);
static_assert(offsetof(UChildActorComponent, ChildActorClass) == 0x01F8);
static_assert(offsetof(UChildActorComponent, ChildActor) == 0x0200);
static_assert(offsetof(UChildActorComponent, ChildActorTemplate) == 0x0208);
static_assert(offsetof(UGameInstance, LocalPlayers) == 0x0038);
static_assert(offsetof(UGameInstance, OnlineSession) == 0x0048);
static_assert(offsetof(UGameInstance, ReferencedObjects) == 0x0050);
static_assert(offsetof(UArrowComponent, ArrowColor) == 0x0468);
static_assert(offsetof(FEngineShowFlagsSetting, ShowFlagName) == 0x0000);
static_assert(offsetof(USceneCaptureComponent, PrimitiveRenderMode) == 0x01F8);
static_assert(offsetof(USceneCaptureComponent, CaptureSource) == 0x01F9);
static_assert(offsetof(USceneCaptureComponent, HiddenActors) == 0x0210);
static_assert(offsetof(USceneCaptureComponent, ShowOnlyActors) == 0x0230);
static_assert(offsetof(USceneCaptureComponent, ShowFlagSettings) == 0x0250);
static_assert(offsetof(USceneCaptureComponent, ProfilingEventName) == 0x0290);
static_assert(offsetof(USceneCaptureComponent2D, ProjectionType) == 0x02B0);
static_assert(offsetof(USceneCaptureComponent2D, TextureTarget) == 0x02C0);
static_assert(offsetof(USceneCaptureComponent2D, CompositeMode) == 0x02C8);
static_assert(offsetof(USceneCaptureComponent2D, PostProcessSettings) == 0x02D0);
static_assert(offsetof(USceneCaptureComponent2D, CustomProjectionMatrix) == 0x0830);
static_assert(offsetof(USceneCaptureComponent2D, ClipPlaneBase) == 0x0874);
static_assert(offsetof(USceneCaptureComponent2D, ClipPlaneNormal) == 0x0880);
static_assert(offsetof(USpringArmComponent, SocketOffset) == 0x01FC);
static_assert(offsetof(USpringArmComponent, TargetOffset) == 0x0208);
static_assert(offsetof(USpringArmComponent, ProbeChannel) == 0x0218);
static_assert(offsetof(UTextRenderComponent, Text) == 0x0468);
static_assert(offsetof(UTextRenderComponent, TextMaterial) == 0x0480);
static_assert(offsetof(UTextRenderComponent, Font) == 0x0488);
static_assert(offsetof(UTextRenderComponent, HorizontalAlignment) == 0x0490);
static_assert(offsetof(UTextRenderComponent, VerticalAlignment) == 0x0491);
static_assert(offsetof(UTextRenderComponent, TextRenderColor) == 0x0494);
static_assert(offsetof(UCameraComponent, ProjectionMode) == 0x020D);
static_assert(offsetof(UCameraComponent, PostProcessSettings) == 0x0290);
static_assert(offsetof(ASkyLight, LightComponent) == 0x0220);
static_assert(offsetof(UTexture, LightingGuid) == 0x0068);
static_assert(offsetof(UTexture, CompressionSettings) == 0x007C);
static_assert(offsetof(UTexture, Filter) == 0x007D);
static_assert(offsetof(UTexture, MipLoadOptions) == 0x007E);
static_assert(offsetof(UTexture, LODGroup) == 0x007F);
static_assert(offsetof(UTexture, Downscale) == 0x0080);
static_assert(offsetof(UTexture, DownscaleOptions) == 0x0084);
static_assert(offsetof(UTexture, AssetUserData) == 0x0088);
static_assert(offsetof(UStaticMeshComponent, StaticMesh) == 0x04A0);
static_assert(offsetof(UStaticMeshComponent, WireframeColorOverride) == 0x04A8);
static_assert(offsetof(UStaticMeshComponent, LODData) == 0x04C0);
static_assert(offsetof(UStaticMeshComponent, StreamingTextureData) == 0x04D0);
static_assert(offsetof(UStaticMeshComponent, LightmassSettings) == 0x04E0);
static_assert(offsetof(FInstancedStaticMeshInstanceData, Transform) == 0x0000);
static_assert(offsetof(UInstancedStaticMeshComponent, PerInstanceSMData) == 0x04F8);
static_assert(offsetof(UInstancedStaticMeshComponent, PerInstanceSMCustomData) == 0x0510);
static_assert(offsetof(UInstancedStaticMeshComponent, InstanceReorderTable) == 0x0530);
static_assert(offsetof(UInstancedStaticMeshComponent, CachedMappings) == 0x0590);
static_assert(offsetof(UHierarchicalInstancedStaticMeshComponent, SortedInstances) == 0x05B0);
static_assert(offsetof(UHierarchicalInstancedStaticMeshComponent, BuiltInstanceBounds) == 0x05C8);
static_assert(offsetof(UHierarchicalInstancedStaticMeshComponent, UnbuiltInstanceBounds) == 0x05E4);
static_assert(offsetof(UHierarchicalInstancedStaticMeshComponent, UnbuiltInstanceBoundsList) == 0x0600);
static_assert(offsetof(UHierarchicalInstancedStaticMeshComponent, CacheMeshExtendedBounds) == 0x061C);
static_assert(offsetof(AStaticMeshActor, StaticMeshComponent) == 0x0220);
static_assert(offsetof(AStaticMeshActor, NavigationGeometryGatheringMode) == 0x0229);
static_assert(offsetof(FMaterialTextureInfo, TextureName) == 0x0008);
static_assert(offsetof(UMaterialInterface, SubsurfaceProfile) == 0x0038);
static_assert(offsetof(UMaterialInterface, LightmassSettings) == 0x0050);
static_assert(offsetof(UMaterialInterface, TextureStreamingData) == 0x0060);
static_assert(offsetof(UMaterialInterface, AssetUserData) == 0x0070);
static_assert(offsetof(FMaterialParameterInfo, Name) == 0x0000);
static_assert(offsetof(FMaterialParameterInfo, Association) == 0x0008);
static_assert(offsetof(FScalarParameterValue, ParameterInfo) == 0x0000);
static_assert(offsetof(FScalarParameterValue, ExpressionGUID) == 0x0014);
static_assert(offsetof(FVectorParameterValue, ParameterInfo) == 0x0000);
static_assert(offsetof(FVectorParameterValue, ParameterValue) == 0x0010);
static_assert(offsetof(FVectorParameterValue, ExpressionGUID) == 0x0020);
static_assert(offsetof(FTextureParameterValue, ParameterInfo) == 0x0000);
static_assert(offsetof(FTextureParameterValue, ParameterValue) == 0x0010);
static_assert(offsetof(FTextureParameterValue, ExpressionGUID) == 0x0018);
static_assert(offsetof(FRuntimeVirtualTextureParameterValue, ParameterInfo) == 0x0000);
static_assert(offsetof(FRuntimeVirtualTextureParameterValue, ParameterValue) == 0x0010);
static_assert(offsetof(FRuntimeVirtualTextureParameterValue, ExpressionGUID) == 0x0018);
static_assert(offsetof(FFontParameterValue, ParameterInfo) == 0x0000);
static_assert(offsetof(FFontParameterValue, FontValue) == 0x0010);
static_assert(offsetof(FFontParameterValue, ExpressionGUID) == 0x001C);
static_assert(offsetof(FMaterialInstanceBasePropertyOverrides, BlendMode) == 0x0002);
static_assert(offsetof(FMaterialInstanceBasePropertyOverrides, ShadingModel) == 0x0003);
static_assert(offsetof(FMaterialInstanceBasePropertyOverrides, ShadingRate) == 0x0004);
static_assert(offsetof(FStaticParameterBase, ParameterInfo) == 0x0000);
static_assert(offsetof(FStaticParameterBase, ExpressionGUID) == 0x0014);
static_assert(offsetof(FMaterialLayersFunctions, Layers) == 0x0000);
static_assert(offsetof(FMaterialLayersFunctions, Blends) == 0x0010);
static_assert(offsetof(FMaterialLayersFunctions, LayerStates) == 0x0020);
static_assert(offsetof(FMaterialLayersFunctions, KeyString) == 0x0030);
static_assert(offsetof(FStaticMaterialLayersParameter, Value) == 0x0028);
static_assert(offsetof(FStaticParameterSet, StaticSwitchParameters) == 0x0000);
static_assert(offsetof(FStaticParameterSet, StaticComponentMaskParameters) == 0x0010);
static_assert(offsetof(FStaticParameterSet, TerrainLayerWeightParameters) == 0x0020);
static_assert(offsetof(FStaticParameterSet, MaterialLayersParameters) == 0x0030);
static_assert(offsetof(FMaterialCachedParameterEntry, NameHashes) == 0x0000);
static_assert(offsetof(FMaterialCachedParameterEntry, ParameterInfos) == 0x0010);
static_assert(offsetof(FMaterialCachedParameterEntry, ExpressionGuids) == 0x0020);
static_assert(offsetof(FMaterialCachedParameterEntry, Overrides) == 0x0030);
static_assert(offsetof(FMaterialCachedParameters, RuntimeEntries) == 0x0000);
static_assert(offsetof(FMaterialCachedParameters, ScalarValues) == 0x0140);
static_assert(offsetof(FMaterialCachedParameters, VectorValues) == 0x0150);
static_assert(offsetof(FMaterialCachedParameters, TextureValues) == 0x0160);
static_assert(offsetof(FMaterialCachedParameters, FontValues) == 0x0170);
static_assert(offsetof(FMaterialCachedParameters, FontPageValues) == 0x0180);
static_assert(offsetof(FMaterialCachedParameters, RuntimeVirtualTextureValues) == 0x0190);
static_assert(offsetof(UMaterialInstance, PhysMaterial) == 0x0088);
static_assert(offsetof(UMaterialInstance, PhysicalMaterialMap) == 0x0090);
static_assert(offsetof(UMaterialInstance, Parent) == 0x00D0);
static_assert(offsetof(UMaterialInstance, ResourceParent) == 0x00D8);
static_assert(offsetof(UMaterialInstance, ScalarParameterValues) == 0x00E8);
static_assert(offsetof(UMaterialInstance, VectorParameterValues) == 0x00F8);
static_assert(offsetof(UMaterialInstance, TextureParameterValues) == 0x0108);
static_assert(offsetof(UMaterialInstance, RuntimeVirtualTextureParameterValues) == 0x0118);
static_assert(offsetof(UMaterialInstance, FontParameterValues) == 0x0128);
static_assert(offsetof(UMaterialInstance, BasePropertyOverrides) == 0x0138);
static_assert(offsetof(UMaterialInstance, StaticParameters) == 0x0150);
static_assert(offsetof(UMaterialInstance, CachedLayerParameters) == 0x0190);
static_assert(offsetof(UMaterialInstance, CachedReferencedTextures) == 0x0330);
static_assert(offsetof(UMaterialInstance, CachedReferencedParameterCollections) == 0x0340);
static_assert(offsetof(UMaterialInstanceConstant, PhysMaterialMask) == 0x0378);
static_assert(offsetof(UBlueprintCore, SkeletonGeneratedClass) == 0x0028);
static_assert(offsetof(UBlueprintCore, GeneratedClass) == 0x0030);
static_assert(offsetof(UBlueprintCore, BlueprintGuid) == 0x003C);
static_assert(offsetof(UBlueprint, ParentClass) == 0x0050);
static_assert(offsetof(UBlueprint, BlueprintType) == 0x0058);
static_assert(offsetof(UBlueprint, SimpleConstructionScript) == 0x0060);
static_assert(offsetof(UBlueprint, ComponentTemplates) == 0x0068);
static_assert(offsetof(UBlueprint, Timelines) == 0x0078);
static_assert(offsetof(UBlueprint, ComponentClassOverrides) == 0x0088);
static_assert(offsetof(UBlueprint, InheritableComponentHandler) == 0x0098);
static_assert(offsetof(UChannel, Connection) == 0x0028);
static_assert(offsetof(UActorChannel, Actor) == 0x0070);
static_assert(offsetof(UActorChannel, CreateSubObjects) == 0x0160);
static_assert(offsetof(UAnimationAsset, Skeleton) == 0x0038);
static_assert(offsetof(UAnimationAsset, MetaData) == 0x0060);
static_assert(offsetof(UAnimationAsset, AssetUserData) == 0x0070);
static_assert(offsetof(FInterpolationParameter, InterpolationType) == 0x0004);
static_assert(offsetof(FPerBoneInterpolation, BoneReference) == 0x0000);
static_assert(offsetof(FBlendSample, Animation) == 0x0000);
static_assert(offsetof(FBlendSample, SampleValue) == 0x0008);
static_assert(offsetof(FBlendParameter, DisplayName) == 0x0000);
static_assert(offsetof(UBlendSpaceBase, InterpolationParam) == 0x0090);
static_assert(offsetof(UBlendSpaceBase, NotifyTriggerMode) == 0x00AC);
static_assert(offsetof(UBlendSpaceBase, PerBoneBlend) == 0x00B0);
static_assert(offsetof(UBlendSpaceBase, SampleData) == 0x00C8);
static_assert(offsetof(UBlendSpaceBase, GridSamples) == 0x00D8);
static_assert(offsetof(UBlendSpaceBase, BlendParameters) == 0x00E8);
static_assert(offsetof(UBlendSpace, AxisToScaleAnimation) == 0x0148);
static_assert(offsetof(UAISystemBase, AISystemClassName) == 0x0028);
static_assert(offsetof(UAISystemBase, AISystemModuleName) == 0x0040);
static_assert(offsetof(AAmbientSound, AudioComponent) == 0x0220);
static_assert(offsetof(FCustomAttributeSetting, Name) == 0x0000);
static_assert(offsetof(FCustomAttributeSetting, Meaning) == 0x0010);
static_assert(offsetof(UAnimationSettings, KeyEndEffectorsMatchNameArray) == 0x0040);
static_assert(offsetof(UAnimationSettings, BoneCustomAttributesNames) == 0x0058);
static_assert(offsetof(UAnimationSettings, BoneNamesWithCustomAttributes) == 0x0068);
static_assert(offsetof(UAnimationSettings, AttributeBlendModes) == 0x0078);
static_assert(offsetof(UAnimationSettings, DefaultAttributeBlendMode) == 0x00C8);
static_assert(offsetof(FAnimGroupInfo, Name) == 0x0000);
static_assert(offsetof(FAnimGroupInfo, Color) == 0x0008);
static_assert(offsetof(UAnimBlueprint, TargetSkeleton) == 0x00A8);
static_assert(offsetof(UAnimBlueprint, Groups) == 0x00B0);
static_assert(offsetof(FBakedStateExitTransition, PoseEvaluatorLinks) == 0x0010);
static_assert(offsetof(FBakedAnimationState, StateName) == 0x0000);
static_assert(offsetof(FBakedAnimationState, Transitions) == 0x0008);
static_assert(offsetof(FBakedAnimationState, PlayerNodeIndices) == 0x0030);
static_assert(offsetof(FBakedAnimationState, LayerNodeIndices) == 0x0040);
static_assert(offsetof(FAnimationStateBase, StateName) == 0x0000);
static_assert(offsetof(FAnimationTransitionBetweenStates, BlendMode) == 0x0020);
static_assert(offsetof(FAnimationTransitionBetweenStates, CustomCurve) == 0x0028);
static_assert(offsetof(FAnimationTransitionBetweenStates, BlendProfile) == 0x0030);
static_assert(offsetof(FAnimationTransitionBetweenStates, LogicType) == 0x0038);
static_assert(offsetof(FBakedAnimationStateMachine, MachineName) == 0x0000);
static_assert(offsetof(FBakedAnimationStateMachine, States) == 0x0010);
static_assert(offsetof(FBakedAnimationStateMachine, Transitions) == 0x0020);
static_assert(offsetof(FCachedPoseIndices, OrderedSavedPoseNodeIndices) == 0x0000);
static_assert(offsetof(FExposedValueCopyRecord, PostCopyOperation) == 0x0004);
static_assert(offsetof(FExposedValueHandler, BoundFunction) == 0x0000);
static_assert(offsetof(FExposedValueHandler, CopyRecords) == 0x0008);
static_assert(offsetof(FExposedValueHandler, Function) == 0x0018);
static_assert(offsetof(FGraphAssetPlayerInformation, PlayerNodeIndices) == 0x0000);
static_assert(offsetof(UAnimBlueprintGeneratedClass, BakedStateMachines) == 0x0330);
static_assert(offsetof(UAnimBlueprintGeneratedClass, TargetSkeleton) == 0x0340);
static_assert(offsetof(UAnimBlueprintGeneratedClass, AnimNotifies) == 0x0348);
static_assert(offsetof(UAnimBlueprintGeneratedClass, OrderedSavedPoseIndicesMap) == 0x0358);
static_assert(offsetof(UAnimBlueprintGeneratedClass, SyncGroupNames) == 0x0428);
static_assert(offsetof(UAnimBlueprintGeneratedClass, EvaluateGraphExposedInputs) == 0x0438);
static_assert(offsetof(UAnimBlueprintGeneratedClass, GraphAssetPlayerInformation) == 0x0448);
static_assert(offsetof(UAnimBlueprintGeneratedClass, GraphBlendOptions) == 0x0498);
static_assert(offsetof(UAnimBlueprintGeneratedClass, PropertyAccessLibrary) == 0x04E8);
static_assert(offsetof(UAnimBoneCompressionSettings, Codecs) == 0x0028);
static_assert(offsetof(FAnimBlueprintFunction, Name) == 0x0000);
static_assert(offsetof(FAnimBlueprintFunction, Group) == 0x0008);
static_assert(offsetof(FAnimBlueprintFunction, InputPoseNames) == 0x0018);
static_assert(offsetof(FAnimBlueprintFunction, InputPoseNodeIndices) == 0x0028);
static_assert(offsetof(UAnimClassData, BakedStateMachines) == 0x0030);
static_assert(offsetof(UAnimClassData, TargetSkeleton) == 0x0040);
static_assert(offsetof(UAnimClassData, AnimNotifies) == 0x0048);
static_assert(offsetof(UAnimClassData, OrderedSavedPoseIndicesMap) == 0x0058);
static_assert(offsetof(UAnimClassData, AnimBlueprintFunctions) == 0x00A8);
static_assert(offsetof(UAnimClassData, AnimBlueprintFunctionData) == 0x00B8);
static_assert(offsetof(UAnimClassData, GraphNameAssetPlayers) == 0x01A8);
static_assert(offsetof(UAnimClassData, SyncGroupNames) == 0x01F8);
static_assert(offsetof(UAnimClassData, EvaluateGraphExposedInputs) == 0x0208);
static_assert(offsetof(UAnimClassData, GraphBlendOptions) == 0x0218);
static_assert(offsetof(UAnimClassData, PropertyAccessLibrary) == 0x0268);
static_assert(offsetof(FSmartName, DisplayName) == 0x0000);
static_assert(offsetof(FAnimCurveBase, LastObservedName) == 0x0000);
static_assert(offsetof(FAnimCurveBase, Name) == 0x0008);
static_assert(offsetof(FFloatCurve, FloatCurve) == 0x0018);
static_assert(offsetof(FRawCurveTracks, FloatCurves) == 0x0000);
static_assert(offsetof(UAnimSequenceBase, Notifies) == 0x0080);
static_assert(offsetof(UAnimSequenceBase, RawCurveData) == 0x0098);
static_assert(offsetof(FAnimSegment, AnimReference) == 0x0000);
static_assert(offsetof(FAnimTrack, AnimSegments) == 0x0000);
static_assert(offsetof(UAnimComposite, AnimationTrack) == 0x00A8);
static_assert(offsetof(UAnimCompress, TranslationCompressionFormat) == 0x003C);
static_assert(offsetof(UAnimCompress, RotationCompressionFormat) == 0x003D);
static_assert(offsetof(UAnimCompress, ScaleCompressionFormat) == 0x003E);
static_assert(offsetof(UAnimCurveCompressionSettings, Codec) == 0x0028);
static_assert(offsetof(FAlphaBlend, CustomCurve) == 0x0000);
static_assert(offsetof(FAlphaBlend, BlendOption) == 0x0024);
static_assert(offsetof(FAnimSyncMarker, MarkerName) == 0x0000);
static_assert(offsetof(FMarkerSyncData, AuthoredSyncMarkers) == 0x0000);
static_assert(offsetof(FCompositeSection, SectionName) == 0x0030);
static_assert(offsetof(FCompositeSection, NextSectionName) == 0x003C);
static_assert(offsetof(FCompositeSection, MetaData) == 0x0048);
static_assert(offsetof(FSlotAnimationTrack, SlotName) == 0x0000);
static_assert(offsetof(FSlotAnimationTrack, AnimTrack) == 0x0008);
static_assert(offsetof(FBranchingPoint, EventName) == 0x0030);
static_assert(offsetof(FBranchingPointMarker, NotifyEventType) == 0x0008);
static_assert(offsetof(FTimeStretchCurve, Markers) == 0x0008);
static_assert(offsetof(UAnimMontage, BlendIn) == 0x00A8);
static_assert(offsetof(UAnimMontage, BlendOut) == 0x00E0);
static_assert(offsetof(UAnimMontage, SyncGroup) == 0x0118);
static_assert(offsetof(UAnimMontage, MarkerData) == 0x0128);
static_assert(offsetof(UAnimMontage, CompositeSections) == 0x0148);
static_assert(offsetof(UAnimMontage, SlotAnimTracks) == 0x0158);
static_assert(offsetof(UAnimMontage, BranchingPoints) == 0x0168);
static_assert(offsetof(UAnimMontage, RootMotionRootLock) == 0x017B);
static_assert(offsetof(UAnimMontage, BranchingPointMarkers) == 0x0180);
static_assert(offsetof(UAnimMontage, BranchingPointStateNotifyIndices) == 0x0190);
static_assert(offsetof(UAnimMontage, TimeStretchCurve) == 0x01A0);
static_assert(offsetof(UAnimMontage, TimeStretchCurveName) == 0x01C8);
static_assert(offsetof(UAnimNotify_PlayParticleEffect, PSTemplate) == 0x0038);
static_assert(offsetof(UAnimNotify_PlayParticleEffect, LocationOffset) == 0x0040);
static_assert(offsetof(UAnimNotify_PlayParticleEffect, RotationOffset) == 0x004C);
static_assert(offsetof(UAnimNotify_PlayParticleEffect, Scale) == 0x0058);
static_assert(offsetof(UAnimNotify_PlayParticleEffect, SocketName) == 0x0084);
static_assert(offsetof(UAnimNotify_PlaySound, Sound) == 0x0038);
static_assert(offsetof(UAnimNotify_PlaySound, AttachName) == 0x004C);
static_assert(offsetof(UAnimNotifyState_TimedParticleEffect, PSTemplate) == 0x0030);
static_assert(offsetof(UAnimNotifyState_TimedParticleEffect, SocketName) == 0x0038);
static_assert(offsetof(UAnimNotifyState_TimedParticleEffect, LocationOffset) == 0x0040);
static_assert(offsetof(UAnimNotifyState_TimedParticleEffect, RotationOffset) == 0x004C);
static_assert(offsetof(UAnimNotifyState_Trail, PSTemplate) == 0x0030);
static_assert(offsetof(UAnimNotifyState_Trail, FirstSocketName) == 0x0038);
static_assert(offsetof(UAnimNotifyState_Trail, SecondSocketName) == 0x0040);
static_assert(offsetof(UAnimNotifyState_Trail, WidthScaleMode) == 0x0048);
static_assert(offsetof(UAnimNotifyState_Trail, WidthScaleCurve) == 0x004C);
static_assert(offsetof(FStringCurveKey, Value) == 0x0008);
static_assert(offsetof(FStringCurve, DefaultValue) == 0x0068);
static_assert(offsetof(FStringCurve, Keys) == 0x0078);
static_assert(offsetof(FBakedStringCustomAttribute, AttributeName) == 0x0000);
static_assert(offsetof(FBakedStringCustomAttribute, StringCurve) == 0x0008);
static_assert(offsetof(FIntegralCurve, Keys) == 0x0068);
static_assert(offsetof(FBakedIntegerCustomAttribute, AttributeName) == 0x0000);
static_assert(offsetof(FBakedIntegerCustomAttribute, IntCurve) == 0x0008);
static_assert(offsetof(FSimpleCurve, InterpMode) == 0x0070);
static_assert(offsetof(FSimpleCurve, Keys) == 0x0078);
static_assert(offsetof(FBakedFloatCustomAttribute, AttributeName) == 0x0000);
static_assert(offsetof(FBakedFloatCustomAttribute, FloatCurve) == 0x0008);
static_assert(offsetof(FBakedCustomAttributePerBoneData, StringAttributes) == 0x0008);
static_assert(offsetof(FBakedCustomAttributePerBoneData, IntAttributes) == 0x0018);
static_assert(offsetof(FBakedCustomAttributePerBoneData, FloatAttributes) == 0x0028);
static_assert(offsetof(UAnimSequence, TrackToSkeletonMapTable) == 0x00B0);
static_assert(offsetof(UAnimSequence, BoneCompressionSettings) == 0x00D0);
static_assert(offsetof(UAnimSequence, CurveCompressionSettings) == 0x00D8);
static_assert(offsetof(UAnimSequence, AdditiveAnimType) == 0x0150);
static_assert(offsetof(UAnimSequence, RefPoseType) == 0x0151);
static_assert(offsetof(UAnimSequence, RefPoseSeq) == 0x0158);
static_assert(offsetof(UAnimSequence, RetargetSource) == 0x0164);
static_assert(offsetof(UAnimSequence, Interpolation) == 0x016C);
static_assert(offsetof(UAnimSequence, RootMotionRootLock) == 0x016E);
static_assert(offsetof(UAnimSequence, AuthoredSyncMarkers) == 0x0178);
static_assert(offsetof(UAnimSequence, BakedPerBoneCustomAttributeData) == 0x01A0);
static_assert(offsetof(FAnimSetMeshLinkup, BoneToTrackTable) == 0x0000);
static_assert(offsetof(UAnimSet, TrackBoneNames) == 0x0030);
static_assert(offsetof(UAnimSet, LinkupCache) == 0x0040);
static_assert(offsetof(UAnimSet, BoneUseAnimTranslation) == 0x0050);
static_assert(offsetof(UAnimSet, ForceUseMeshTranslation) == 0x0060);
static_assert(offsetof(UAnimSet, UseTranslationBoneNames) == 0x0070);
static_assert(offsetof(UAnimSet, ForceMeshTranslationBoneNames) == 0x0080);
static_assert(offsetof(UAnimSet, PreviewSkelMeshName) == 0x0090);
static_assert(offsetof(UAnimSet, BestRatioSkelMeshName) == 0x0098);
static_assert(offsetof(UAnimSingleNodeInstance, CurrentAsset) == 0x02B8);
static_assert(offsetof(UAnimStreamable, Interpolation) == 0x00AC);
static_assert(offsetof(UAnimStreamable, RetargetSource) == 0x00B0);
static_assert(offsetof(UAnimStreamable, BoneCompressionSettings) == 0x00C8);
static_assert(offsetof(UAnimStreamable, CurveCompressionSettings) == 0x00D0);
static_assert(offsetof(UAnimStreamable, RootMotionRootLock) == 0x00D9);
static_assert(offsetof(UAssetExportTask, Object) == 0x0028);
static_assert(offsetof(UAssetExportTask, Exporter) == 0x0030);
static_assert(offsetof(UAssetExportTask, Filename) == 0x0038);
static_assert(offsetof(UAssetExportTask, IgnoreObjectList) == 0x0050);
static_assert(offsetof(UAssetExportTask, options) == 0x0060);
static_assert(offsetof(UAssetExportTask, Errors) == 0x0068);
static_assert(offsetof(FPrimaryAssetRules, CookRule) == 0x0009);
static_assert(offsetof(FPrimaryAssetTypeInfo, PrimaryAssetType) == 0x0000);
static_assert(offsetof(FPrimaryAssetTypeInfo, AssetBaseClass) == 0x0008);
static_assert(offsetof(FPrimaryAssetTypeInfo, AssetBaseClassLoaded) == 0x0030);
static_assert(offsetof(FPrimaryAssetTypeInfo, Directories) == 0x0040);
static_assert(offsetof(FPrimaryAssetTypeInfo, SpecificAssets) == 0x0050);
static_assert(offsetof(FPrimaryAssetTypeInfo, Rules) == 0x0060);
static_assert(offsetof(FPrimaryAssetTypeInfo, AssetScanPaths) == 0x0070);
static_assert(offsetof(FPrimaryAssetRulesOverride, PrimaryAssetId) == 0x0000);
static_assert(offsetof(FPrimaryAssetRulesOverride, Rules) == 0x0010);
static_assert(offsetof(FPrimaryAssetRulesCustomOverride, PrimaryAssetType) == 0x0000);
static_assert(offsetof(FPrimaryAssetRulesCustomOverride, FilterDirectory) == 0x0008);
static_assert(offsetof(FPrimaryAssetRulesCustomOverride, FilterString) == 0x0018);
static_assert(offsetof(FPrimaryAssetRulesCustomOverride, Rules) == 0x0028);
static_assert(offsetof(FAssetManagerRedirect, Old) == 0x0000);
static_assert(offsetof(FAssetManagerRedirect, New) == 0x0010);
static_assert(offsetof(UAssetManagerSettings, PrimaryAssetTypesToScan) == 0x0038);
static_assert(offsetof(UAssetManagerSettings, DirectoriesToExclude) == 0x0048);
static_assert(offsetof(UAssetManagerSettings, PrimaryAssetRules) == 0x0058);
static_assert(offsetof(UAssetManagerSettings, CustomPrimaryAssetRules) == 0x0068);
static_assert(offsetof(UAssetManagerSettings, PrimaryAssetIdRedirects) == 0x0080);
static_assert(offsetof(UAssetManagerSettings, PrimaryAssetTypeRedirects) == 0x0090);
static_assert(offsetof(UAssetManagerSettings, AssetPathRedirects) == 0x00A0);
static_assert(offsetof(FAssetMapping, SourceAsset) == 0x0000);
static_assert(offsetof(FAssetMapping, TargetAsset) == 0x0008);
static_assert(offsetof(UAssetMappingTable, MappedAssets) == 0x0028);
static_assert(offsetof(UAsyncActionHandleSaveGame, SaveGameObject) == 0x0060);
static_assert(offsetof(AAtmosphericFog, AtmosphericFogComponent) == 0x0220);
static_assert(offsetof(UAtmosphericFogComponent, DefaultLightColor) == 0x0224);
static_assert(offsetof(UAtmosphericFogComponent, PrecomputeParams) == 0x022C);
static_assert(offsetof(UAtmosphericFogComponent, TransmittanceTexture) == 0x0258);
static_assert(offsetof(UAtmosphericFogComponent, IrradianceTexture) == 0x0260);
static_assert(offsetof(UAudioBus, AudioBusChannels) == 0x0028);
static_assert(offsetof(FAudioQualitySettings, DisplayName) == 0x0000);
static_assert(offsetof(UAudioSettings, DefaultSoundClassName) == 0x0038);
static_assert(offsetof(UAudioSettings, DefaultMediaSoundClassName) == 0x0050);
static_assert(offsetof(UAudioSettings, DefaultSoundConcurrencyName) == 0x0068);
static_assert(offsetof(UAudioSettings, DefaultBaseSoundMix) == 0x0080);
static_assert(offsetof(UAudioSettings, VoiPSoundClass) == 0x0098);
static_assert(offsetof(UAudioSettings, MasterSubmix) == 0x00B0);
static_assert(offsetof(UAudioSettings, ReverbSubmix) == 0x00C8);
static_assert(offsetof(UAudioSettings, EQSubmix) == 0x00E0);
static_assert(offsetof(UAudioSettings, VoiPSampleRate) == 0x00F8);
static_assert(offsetof(UAudioSettings, QualityLevels) == 0x0110);
static_assert(offsetof(UAudioSettings, PanningMethod) == 0x0128);
static_assert(offsetof(UAudioSettings, MonoChannelUpmixMethod) == 0x0129);
static_assert(offsetof(UAudioSettings, DialogueFilenameFormat) == 0x0130);
static_assert(offsetof(FReverbSettings, ReverbEffect) == 0x0008);
static_assert(offsetof(FReverbSettings, ReverbPluginEffect) == 0x0010);
static_assert(offsetof(FAudioVolumeSubmixSendSettings, ListenerLocationState) == 0x0000);
static_assert(offsetof(FAudioVolumeSubmixSendSettings, SourceLocationState) == 0x0001);
static_assert(offsetof(FAudioVolumeSubmixSendSettings, SubmixSends) == 0x0008);
static_assert(offsetof(FAudioVolumeSubmixOverrideSettings, Submix) == 0x0000);
static_assert(offsetof(FAudioVolumeSubmixOverrideSettings, SubmixEffectChain) == 0x0008);
static_assert(offsetof(AAudioVolume, Settings) == 0x0260);
static_assert(offsetof(AAudioVolume, AmbientZoneSettings) == 0x0280);
static_assert(offsetof(AAudioVolume, SubmixSendSettings) == 0x02A8);
static_assert(offsetof(AAudioVolume, SubmixOverrideSettings) == 0x02B8);
static_assert(offsetof(UAutoDestroySubsystem, ActorsToPoll) == 0x0038);
static_assert(offsetof(FEditorMapPerformanceTestDefinition, PerformanceTestmap) == 0x0000);
static_assert(offsetof(FFilePath, FilePath) == 0x0000);
static_assert(offsetof(FImportFactorySettingValues, SettingName) == 0x0000);
static_assert(offsetof(FImportFactorySettingValues, Value) == 0x0010);
static_assert(offsetof(FEditorImportWorkflowDefinition, ImportFilePath) == 0x0000);
static_assert(offsetof(FEditorImportWorkflowDefinition, FactorySettings) == 0x0010);
static_assert(offsetof(FBuildPromotionImportWorkflowSettings, Diffuse) == 0x0000);
static_assert(offsetof(FBuildPromotionImportWorkflowSettings, Normal) == 0x0020);
static_assert(offsetof(FBuildPromotionImportWorkflowSettings, StaticMesh) == 0x0040);
static_assert(offsetof(FBuildPromotionImportWorkflowSettings, ReimportStaticMesh) == 0x0060);
static_assert(offsetof(FBuildPromotionImportWorkflowSettings, BlendShapeMesh) == 0x0080);
static_assert(offsetof(FBuildPromotionImportWorkflowSettings, MorphMesh) == 0x00A0);
static_assert(offsetof(FBuildPromotionImportWorkflowSettings, SkeletalMesh) == 0x00C0);
static_assert(offsetof(FBuildPromotionImportWorkflowSettings, Animation) == 0x00E0);
static_assert(offsetof(FBuildPromotionImportWorkflowSettings, Sound) == 0x0100);
static_assert(offsetof(FBuildPromotionImportWorkflowSettings, SurroundSound) == 0x0120);
static_assert(offsetof(FBuildPromotionImportWorkflowSettings, OtherAssetsToImport) == 0x0140);
static_assert(offsetof(FBuildPromotionOpenAssetSettings, BlueprintAsset) == 0x0000);
static_assert(offsetof(FBuildPromotionOpenAssetSettings, MaterialAsset) == 0x0010);
static_assert(offsetof(FBuildPromotionOpenAssetSettings, ParticleSystemAsset) == 0x0020);
static_assert(offsetof(FBuildPromotionOpenAssetSettings, SkeletalMeshAsset) == 0x0030);
static_assert(offsetof(FBuildPromotionOpenAssetSettings, StaticMeshAsset) == 0x0040);
static_assert(offsetof(FBuildPromotionOpenAssetSettings, TextureAsset) == 0x0050);
static_assert(offsetof(FBuildPromotionNewProjectSettings, NewProjectFolderOverride) == 0x0000);
static_assert(offsetof(FBuildPromotionNewProjectSettings, NewProjectNameOverride) == 0x0010);
static_assert(offsetof(FBuildPromotionTestSettings, DefaultStaticMeshAsset) == 0x0000);
static_assert(offsetof(FBuildPromotionTestSettings, ImportWorkflow) == 0x0010);
static_assert(offsetof(FBuildPromotionTestSettings, OpenAssets) == 0x0160);
static_assert(offsetof(FBuildPromotionTestSettings, NewProjectSettings) == 0x01C0);
static_assert(offsetof(FBuildPromotionTestSettings, SourceControlMaterial) == 0x01E0);
static_assert(offsetof(FMaterialEditorPromotionSettings, DefaultMaterialAsset) == 0x0000);
static_assert(offsetof(FMaterialEditorPromotionSettings, DefaultDiffuseTexture) == 0x0010);
static_assert(offsetof(FMaterialEditorPromotionSettings, DefaultNormalTexture) == 0x0020);
static_assert(offsetof(FParticleEditorPromotionSettings, DefaultParticleAsset) == 0x0000);
static_assert(offsetof(FBlueprintEditorPromotionSettings, FirstMeshPath) == 0x0000);
static_assert(offsetof(FBlueprintEditorPromotionSettings, SecondMeshPath) == 0x0010);
static_assert(offsetof(FBlueprintEditorPromotionSettings, DefaultParticleAsset) == 0x0020);
static_assert(offsetof(FExternalToolDefinition, ToolName) == 0x0000);
static_assert(offsetof(FExternalToolDefinition, ExecutablePath) == 0x0010);
static_assert(offsetof(FExternalToolDefinition, CommandLineOptions) == 0x0020);
static_assert(offsetof(FExternalToolDefinition, WorkingDirectory) == 0x0030);
static_assert(offsetof(FExternalToolDefinition, ScriptExtension) == 0x0040);
static_assert(offsetof(FExternalToolDefinition, ScriptDirectory) == 0x0050);
static_assert(offsetof(FEditorImportExportTestDefinition, ImportFilePath) == 0x0000);
static_assert(offsetof(FEditorImportExportTestDefinition, ExportFileExtension) == 0x0010);
static_assert(offsetof(FEditorImportExportTestDefinition, FactorySettings) == 0x0028);
static_assert(offsetof(FLaunchOnTestSettings, LaunchOnTestmap) == 0x0000);
static_assert(offsetof(FLaunchOnTestSettings, DeviceID) == 0x0010);
static_assert(offsetof(UAutomationTestSettings, EngineTestModules) == 0x0028);
static_assert(offsetof(UAutomationTestSettings, EditorTestModules) == 0x0038);
static_assert(offsetof(UAutomationTestSettings, AutomationTestmap) == 0x0048);
static_assert(offsetof(UAutomationTestSettings, EditorPerformanceTestMaps) == 0x0060);
static_assert(offsetof(UAutomationTestSettings, AssetsToOpen) == 0x0070);
static_assert(offsetof(UAutomationTestSettings, MapsToPIETest) == 0x0080);
static_assert(offsetof(UAutomationTestSettings, BuildPromotionTest) == 0x0090);
static_assert(offsetof(UAutomationTestSettings, MaterialEditorPromotionTest) == 0x0280);
static_assert(offsetof(UAutomationTestSettings, ParticleEditorPromotionTest) == 0x02B0);
static_assert(offsetof(UAutomationTestSettings, BlueprintEditorPromotionTest) == 0x02C0);
static_assert(offsetof(UAutomationTestSettings, TestLevelFolders) == 0x02F0);
static_assert(offsetof(UAutomationTestSettings, ExternalTools) == 0x0300);
static_assert(offsetof(UAutomationTestSettings, ImportExportTestDefinitions) == 0x0310);
static_assert(offsetof(UAutomationTestSettings, LaunchOnSettings) == 0x0320);
static_assert(offsetof(UAutomationTestSettings, DefaultScreenshotResolution) == 0x0330);
static_assert(offsetof(FBandwidthTestItem, Kilobyte) == 0x0000);
static_assert(offsetof(FBandwidthTestGenerator, ReplicatedBuffers) == 0x0000);
static_assert(offsetof(ABandwidthTestActor, BandwidthGenerator) == 0x0220);
static_assert(offsetof(UBillboardComponent, Sprite) == 0x0468);
static_assert(offsetof(FBoneNode, Name) == 0x0000);
static_assert(offsetof(FBoneNode, TranslationRetargetingMode) == 0x000C);
static_assert(offsetof(FVirtualBone, SourceBoneName) == 0x0000);
static_assert(offsetof(FVirtualBone, TargetBoneName) == 0x0008);
static_assert(offsetof(FVirtualBone, VirtualBoneName) == 0x0010);
static_assert(offsetof(FAnimSlotGroup, GroupName) == 0x0000);
static_assert(offsetof(FAnimSlotGroup, SlotNames) == 0x0008);
static_assert(offsetof(USkeleton, BoneTree) == 0x0038);
static_assert(offsetof(USkeleton, RefLocalPoses) == 0x0048);
static_assert(offsetof(USkeleton, VirtualBoneGuid) == 0x0180);
static_assert(offsetof(USkeleton, VirtualBones) == 0x0190);
static_assert(offsetof(USkeleton, Sockets) == 0x01A0);
static_assert(offsetof(USkeleton, SmartNames) == 0x0200);
static_assert(offsetof(USkeleton, BlendProfiles) == 0x0280);
static_assert(offsetof(USkeleton, SlotGroups) == 0x0290);
static_assert(offsetof(USkeleton, AssetUserData) == 0x0368);
static_assert(offsetof(FBlendProfileBoneEntry, BoneReference) == 0x0000);
static_assert(offsetof(UBlendProfile, OwningSkeleton) == 0x0030);
static_assert(offsetof(UBlendProfile, ProfileEntries) == 0x0038);
static_assert(offsetof(FKShapeElem, Name) == 0x000C);
static_assert(offsetof(FKShapeElem, CollisionEnabled) == 0x0019);
static_assert(offsetof(FKSphereElem, Center) == 0x0030);
static_assert(offsetof(FKBoxElem, Center) == 0x0030);
static_assert(offsetof(FKBoxElem, Rotation) == 0x003C);
static_assert(offsetof(FKSphylElem, Center) == 0x0030);
static_assert(offsetof(FKSphylElem, Rotation) == 0x003C);
static_assert(offsetof(FKConvexElem, VertexData) == 0x0030);
static_assert(offsetof(FKConvexElem, IndexData) == 0x0040);
static_assert(offsetof(FKConvexElem, ElemBox) == 0x0050);
static_assert(offsetof(FKConvexElem, Transform) == 0x0070);
static_assert(offsetof(FKTaperedCapsuleElem, Center) == 0x0030);
static_assert(offsetof(FKTaperedCapsuleElem, Rotation) == 0x003C);
static_assert(offsetof(FKAggregateGeom, SphereElems) == 0x0000);
static_assert(offsetof(FKAggregateGeom, BoxElems) == 0x0010);
static_assert(offsetof(FKAggregateGeom, SphylElems) == 0x0020);
static_assert(offsetof(FKAggregateGeom, ConvexElems) == 0x0030);
static_assert(offsetof(FKAggregateGeom, TaperedCapsuleElems) == 0x0040);
static_assert(offsetof(UBodySetup, AggGeom) == 0x0048);
static_assert(offsetof(UBodySetup, PhysMaterial) == 0x00A8);
static_assert(offsetof(UBodySetup, WalkableSlopeOverride) == 0x00B0);
static_assert(offsetof(UBodySetup, DefaultInstance) == 0x0128);
static_assert(offsetof(UBodySetup, BuildScale3D) == 0x0288);
static_assert(offsetof(FBranchFilter, BoneName) == 0x0000);
static_assert(offsetof(FInputBlendPose, BranchFilters) == 0x0000);
static_assert(offsetof(UBoneMaskFilter, BlendPoses) == 0x0028);
static_assert(offsetof(UBookMark, Location) == 0x0028);
static_assert(offsetof(UBookMark, Rotation) == 0x0034);
static_assert(offsetof(UBookMark, HiddenLevels) == 0x0040);
static_assert(offsetof(UBookMark2D, Location) == 0x002C);
static_assert(offsetof(UBoundsCopyComponent, BoundsSourceActor) == 0x00B0);
static_assert(offsetof(UBoundsCopyComponent, PostTransform) == 0x00E0);
static_assert(offsetof(AReflectionCapture, CaptureComponent) == 0x0220);
static_assert(offsetof(UReflectionCaptureComponent, CaptureOffsetComponent) == 0x01F8);
static_assert(offsetof(UReflectionCaptureComponent, ReflectionSourceType) == 0x0200);
static_assert(offsetof(UReflectionCaptureComponent, MobileReflectionCompression) == 0x0201);
static_assert(offsetof(UReflectionCaptureComponent, Cubemap) == 0x0208);
static_assert(offsetof(UReflectionCaptureComponent, ReflectionLevel) == 0x0224);
static_assert(offsetof(UReflectionCaptureComponent, CaptureOffset) == 0x0228);
static_assert(offsetof(UReflectionCaptureComponent, MapBuildDataId) == 0x0234);
static_assert(offsetof(UReflectionCaptureComponent, CachedEncodedHDRCubemap) == 0x0258);
static_assert(offsetof(UBoxReflectionCaptureComponent, PreviewInfluenceBox) == 0x0280);
static_assert(offsetof(UBoxReflectionCaptureComponent, PreviewCaptureBox) == 0x0288);
static_assert(offsetof(UBreakpoint, Node) == 0x0030);
static_assert(offsetof(FBuilderPoly, VertexIndices) == 0x0000);
static_assert(offsetof(FBuilderPoly, ItemName) == 0x0014);
static_assert(offsetof(UBrushBuilder, BitmapFilename) == 0x0028);
static_assert(offsetof(UBrushBuilder, Tooltip) == 0x0038);
static_assert(offsetof(UBrushBuilder, Vertices) == 0x0050);
static_assert(offsetof(UBrushBuilder, Polys) == 0x0060);
static_assert(offsetof(UBrushBuilder, Layer) == 0x0070);
static_assert(offsetof(UBrushComponent, Brush) == 0x0468);
static_assert(offsetof(UBrushComponent, BrushBodySetup) == 0x0470);
static_assert(offsetof(UButtonStyleAsset, ButtonStyle) == 0x0030);
static_assert(offsetof(UCameraAnim, CameraInterpGroup) == 0x0028);
static_assert(offsetof(UCameraAnim, BoundingBox) == 0x0034);
static_assert(offsetof(UCameraAnim, BasePostProcessSettings) == 0x0060);
static_assert(offsetof(UCameraAnimInst, CamAnim) == 0x0028);
static_assert(offsetof(UCameraAnimInst, InterpGroupInst) == 0x0030);
static_assert(offsetof(UCameraAnimInst, MoveTrack) == 0x0068);
static_assert(offsetof(UCameraAnimInst, MoveInst) == 0x0070);
static_assert(offsetof(UCameraAnimInst, PlaySpace) == 0x0078);
static_assert(offsetof(UCameraModifier, CameraOwner) == 0x0030);
static_assert(offsetof(FActiveCameraShakeInfo, ShakeInstance) == 0x0000);
static_assert(offsetof(FActiveCameraShakeInfo, ShakeSource) == 0x0008);
static_assert(offsetof(FPooledCameraShakes, PooledShakes) == 0x0000);
static_assert(offsetof(UCameraModifier_CameraShake, ActiveShakes) == 0x0048);
static_assert(offsetof(UCameraModifier_CameraShake, ExpiredPooledShakesMap) == 0x0058);
static_assert(offsetof(ACameraShakeSourceActor, CameraShakeSourceComponent) == 0x0220);
static_assert(offsetof(UCameraShakeSourceComponent, Attenuation) == 0x01F8);
static_assert(offsetof(UCameraShakeSourceComponent, CameraShake) == 0x0208);
static_assert(offsetof(UCanvas, DrawColor) == 0x0038);
static_assert(offsetof(UCanvas, ColorModulate) == 0x0050);
static_assert(offsetof(UCanvas, DefaultTexture) == 0x0060);
static_assert(offsetof(UCanvas, GradientTexture0) == 0x0068);
static_assert(offsetof(UCanvas, ReporterGraph) == 0x0070);
static_assert(offsetof(UTextureRenderTarget2D, ClearColor) == 0x00E8);
static_assert(offsetof(UTextureRenderTarget2D, AddressX) == 0x00F8);
static_assert(offsetof(UTextureRenderTarget2D, AddressY) == 0x00F9);
static_assert(offsetof(UTextureRenderTarget2D, RenderTargetFormat) == 0x00FB);
static_assert(offsetof(UTextureRenderTarget2D, MipsSamplerFilter) == 0x00FD);
static_assert(offsetof(UTextureRenderTarget2D, MipsAddressU) == 0x00FE);
static_assert(offsetof(UTextureRenderTarget2D, MipsAddressV) == 0x00FF);
static_assert(offsetof(UTextureRenderTarget2D, OverrideFormat) == 0x0100);
static_assert(offsetof(UCanvasRenderTarget2D, World) == 0x0118);
static_assert(offsetof(UCheatManager, DebugCameraControllerRef) == 0x0028);
static_assert(offsetof(UCheatManager, DebugCameraControllerClass) == 0x0030);
static_assert(offsetof(UCheckBoxStyleAsset, CheckBoxStyle) == 0x0030);
static_assert(offsetof(UChildConnection, Parent) == 0x1AF0);
static_assert(offsetof(UPlatformInterfaceBase, AllDelegates) == 0x0028);
static_assert(offsetof(UCloudStorageBase, LocalCloudFiles) == 0x0038);
static_assert(offsetof(FCollisionResponseTemplate, Name) == 0x0000);
static_assert(offsetof(FCollisionResponseTemplate, CollisionEnabled) == 0x0008);
static_assert(offsetof(FCollisionResponseTemplate, ObjectTypeName) == 0x002C);
static_assert(offsetof(FCollisionResponseTemplate, CustomResponses) == 0x0038);
static_assert(offsetof(FCustomChannelSetup, Channel) == 0x0000);
static_assert(offsetof(FCustomChannelSetup, DefaultResponse) == 0x0001);
static_assert(offsetof(FCustomChannelSetup, Name) == 0x0004);
static_assert(offsetof(FCustomProfile, Name) == 0x0000);
static_assert(offsetof(FCustomProfile, CustomResponses) == 0x0008);
static_assert(offsetof(FRedirector, OldName) == 0x0000);
static_assert(offsetof(FRedirector, NewName) == 0x0008);
static_assert(offsetof(UCollisionProfile, Profiles) == 0x0038);
static_assert(offsetof(UCollisionProfile, DefaultChannelResponses) == 0x0048);
static_assert(offsetof(UCollisionProfile, EditProfiles) == 0x0058);
static_assert(offsetof(UCollisionProfile, ProfileRedirects) == 0x0068);
static_assert(offsetof(UCollisionProfile, CollisionChannelRedirects) == 0x0078);
static_assert(offsetof(FBlueprintComponentDelegateBinding, ComponentPropertyName) == 0x0000);
static_assert(offsetof(FBlueprintComponentDelegateBinding, DelegatePropertyName) == 0x0008);
static_assert(offsetof(FBlueprintComponentDelegateBinding, FunctionNameToBind) == 0x0010);
static_assert(offsetof(UComponentDelegateBinding, ComponentDelegateBindings) == 0x0028);
static_assert(offsetof(UCompositeCurveTable, ParentTables) == 0x00A0);
static_assert(offsetof(UCompositeCurveTable, OldParentTables) == 0x00B0);
static_assert(offsetof(UDataTable, RowStruct) == 0x0028);
static_assert(offsetof(UDataTable, ImportKeyField) == 0x0088);
static_assert(offsetof(UCompositeDataTable, ParentTables) == 0x00B0);
static_assert(offsetof(UCompositeDataTable, OldParentTables) == 0x00C0);
static_assert(offsetof(UConsole, ConsoleTargetPlayer) == 0x0038);
static_assert(offsetof(UConsole, DefaultTexture_Black) == 0x0040);
static_assert(offsetof(UConsole, DefaultTexture_White) == 0x0048);
static_assert(offsetof(UConsole, HistoryBuffer) == 0x0068);
static_assert(offsetof(ACullDistanceVolume, CullDistances) == 0x0258);
static_assert(offsetof(UCurveFloat, FloatCurve) == 0x0030);
static_assert(offsetof(UCurveLinearColor, FloatCurves) == 0x0030);
static_assert(offsetof(UTexture2D, AddressX) == 0x00E1);
static_assert(offsetof(UTexture2D, AddressY) == 0x00E2);
static_assert(offsetof(UTexture2D, ImportedSize) == 0x00E4);
static_assert(offsetof(UCurveLinearColorAtlas, GradientCurves) == 0x0108);
static_assert(offsetof(UCurveVector, FloatCurves) == 0x0030);
static_assert(offsetof(ADebugCameraController, DrawFrustum) == 0x0578);
static_assert(offsetof(ADebugCameraController, SelectedActor) == 0x0580);
static_assert(offsetof(ADebugCameraController, SelectedComponent) == 0x0588);
static_assert(offsetof(ADebugCameraController, SelectedHitPoint) == 0x0590);
static_assert(offsetof(ADebugCameraController, OriginalControllerRef) == 0x0620);
static_assert(offsetof(ADebugCameraController, OriginalPlayer) == 0x0628);
static_assert(offsetof(FDebugCameraControllerSettingsViewModeIndex, ViewModeIndex) == 0x0008);
static_assert(offsetof(UDebugCameraControllerSettings, CycleViewModes) == 0x0038);
static_assert(offsetof(FDebugTextInfo, SrcActor) == 0x0000);
static_assert(offsetof(FDebugTextInfo, SrcActorOffset) == 0x0008);
static_assert(offsetof(FDebugTextInfo, SrcActorDesiredOffset) == 0x0014);
static_assert(offsetof(FDebugTextInfo, DebugText) == 0x0020);
static_assert(offsetof(FDebugTextInfo, TextColor) == 0x0038);
static_assert(offsetof(FDebugTextInfo, OrigActorLocation) == 0x0040);
static_assert(offsetof(FDebugTextInfo, Font) == 0x0050);
static_assert(offsetof(AHUD, PlayerOwner) == 0x0220);
static_assert(offsetof(AHUD, PostRenderedActors) == 0x0238);
static_assert(offsetof(AHUD, DebugDisplay) == 0x0250);
static_assert(offsetof(AHUD, ToggledDebugCategories) == 0x0260);
static_assert(offsetof(AHUD, Canvas) == 0x0270);
static_assert(offsetof(AHUD, DebugCanvas) == 0x0278);
static_assert(offsetof(AHUD, DebugTextList) == 0x0280);
static_assert(offsetof(AHUD, ShowDebugTargetDesiredClass) == 0x0290);
static_assert(offsetof(AHUD, ShowDebugTargetActor) == 0x0298);
static_assert(offsetof(ADecalActor, Decal) == 0x0220);
static_assert(offsetof(UDecalComponent, DecalMaterial) == 0x01F8);
static_assert(offsetof(UDecalComponent, DecalSize) == 0x021C);
static_assert(offsetof(ADefaultPawn, MovementComponent) == 0x0288);
static_assert(offsetof(ADefaultPawn, CollisionComponent) == 0x0290);
static_assert(offsetof(ADefaultPawn, MeshComponent) == 0x0298);
static_assert(offsetof(FRollbackNetStartupActorInfo, Archetype) == 0x0008);
static_assert(offsetof(FRollbackNetStartupActorInfo, Level) == 0x0038);
static_assert(offsetof(FRollbackNetStartupActorInfo, ObjReferences) == 0x00A0);
static_assert(offsetof(FMulticastRecordOptions, FuncPathName) == 0x0000);
static_assert(offsetof(UDemoNetDriver, RollbackNetStartupActors) == 0x0840);
static_assert(offsetof(UDemoNetDriver, MulticastRecordOptions) == 0x0A10);
static_assert(offsetof(UDemoNetDriver, SpectatorControllers) == 0x0A28);
static_assert(offsetof(UPendingNetGame, NetDriver) == 0x0030);
static_assert(offsetof(UPendingNetGame, DemoNetDriver) == 0x0038);
static_assert(offsetof(FTextureLODGroup, Group) == 0x0000);
static_assert(offsetof(FTextureLODGroup, MipGenSettings) == 0x0020);
static_assert(offsetof(FTextureLODGroup, MinMagFilter) == 0x0040);
static_assert(offsetof(FTextureLODGroup, MipFilter) == 0x0048);
static_assert(offsetof(FTextureLODGroup, MipLoadOptions) == 0x0050);
static_assert(offsetof(FTextureLODGroup, DownscaleOptions) == 0x0058);
static_assert(offsetof(UTextureLODSettings, TextureLODGroups) == 0x0028);
static_assert(offsetof(UDeviceProfile, DeviceType) == 0x0038);
static_assert(offsetof(UDeviceProfile, BaseProfileName) == 0x0048);
static_assert(offsetof(UDeviceProfile, Parent) == 0x0058);
static_assert(offsetof(UDeviceProfile, CVars) == 0x0088);
static_assert(offsetof(UDeviceProfileManager, Profiles) == 0x0028);
static_assert(offsetof(UDialogueVoice, Gender) == 0x0028);
static_assert(offsetof(UDialogueVoice, Plurality) == 0x0029);
static_assert(offsetof(UDialogueVoice, LocalizationGUID) == 0x002C);
static_assert(offsetof(FDialogueContext, Speaker) == 0x0000);
static_assert(offsetof(FDialogueContext, Targets) == 0x0008);
static_assert(offsetof(FDialogueContextMapping, Context) == 0x0000);
static_assert(offsetof(FDialogueContextMapping, SoundWave) == 0x0018);
static_assert(offsetof(FDialogueContextMapping, LocalizationKeyFormat) == 0x0020);
static_assert(offsetof(FDialogueContextMapping, Proxy) == 0x0030);
static_assert(offsetof(UDialogueWave, SpokenText) == 0x0030);
static_assert(offsetof(UDialogueWave, SubtitleOverride) == 0x0040);
static_assert(offsetof(UDialogueWave, ContextMappings) == 0x0050);
static_assert(offsetof(UDialogueWave, LocalizationGUID) == 0x0060);
static_assert(offsetof(ALight, LightComponent) == 0x0220);
static_assert(offsetof(ULightComponentBase, LightGuid) == 0x01F8);
static_assert(offsetof(ULightComponentBase, LightColor) == 0x0210);
static_assert(offsetof(ULightComponent, LightingChannels) == 0x0261);
static_assert(offsetof(ULightComponent, LightFunctionMaterial) == 0x0268);
static_assert(offsetof(ULightComponent, LightFunctionScale) == 0x0270);
static_assert(offsetof(ULightComponent, IESTexture) == 0x0280);
static_assert(offsetof(ULightComponent, BloomTint) == 0x02A8);
static_assert(offsetof(UDirectionalLightComponent, LightShaftOverrideDirection) == 0x0338);
static_assert(offsetof(UDirectionalLightComponent, AtmosphereSunDiskColorScale) == 0x0388);
static_assert(offsetof(UDirectionalLightComponent, CloudScatteredLuminanceScale) == 0x03B8);
static_assert(offsetof(UDirectionalLightComponent, LightmassSettings) == 0x03C8);
static_assert(offsetof(UDirectionalLightComponent, ModulatedShadowColor) == 0x03DC);
static_assert(offsetof(UDistributionFloatConstantCurve, ConstantCurve) == 0x0038);
static_assert(offsetof(UDistributionFloatParameterBase, ParameterName) == 0x0040);
static_assert(offsetof(UDistributionFloatParameterBase, ParamMode) == 0x0058);
static_assert(offsetof(UDistributionFloatUniformCurve, ConstantCurve) == 0x0038);
static_assert(offsetof(UDistributionVectorConstant, Constant) == 0x0038);
static_assert(offsetof(UDistributionVectorConstant, LockedAxes) == 0x0048);
static_assert(offsetof(UDistributionVectorConstantCurve, ConstantCurve) == 0x0038);
static_assert(offsetof(UDistributionVectorConstantCurve, LockedAxes) == 0x0054);
static_assert(offsetof(UDistributionVectorParameterBase, ParameterName) == 0x0050);
static_assert(offsetof(UDistributionVectorParameterBase, MinInput) == 0x0058);
static_assert(offsetof(UDistributionVectorParameterBase, MaxInput) == 0x0064);
static_assert(offsetof(UDistributionVectorParameterBase, MinOutput) == 0x0070);
static_assert(offsetof(UDistributionVectorParameterBase, MaxOutput) == 0x007C);
static_assert(offsetof(UDistributionVectorParameterBase, ParamModes) == 0x0088);
static_assert(offsetof(UDistributionVectorUniform, Max) == 0x0038);
static_assert(offsetof(UDistributionVectorUniform, Min) == 0x0044);
static_assert(offsetof(UDistributionVectorUniform, LockedAxes) == 0x0054);
static_assert(offsetof(UDistributionVectorUniform, MirrorFlags) == 0x0055);
static_assert(offsetof(UDistributionVectorUniformCurve, ConstantCurve) == 0x0038);
static_assert(offsetof(UDistributionVectorUniformCurve, LockedAxes) == 0x0054);
static_assert(offsetof(UDistributionVectorUniformCurve, MirrorFlags) == 0x0056);
static_assert(offsetof(UDrawFrustumComponent, FrustumColor) == 0x0468);
static_assert(offsetof(UDrawFrustumComponent, Texture) == 0x0480);
static_assert(offsetof(UEdGraph, Schema) == 0x0028);
static_assert(offsetof(UEdGraph, Nodes) == 0x0030);
static_assert(offsetof(UGraphNodeContextMenuContext, Blueprint) == 0x0028);
static_assert(offsetof(UGraphNodeContextMenuContext, Graph) == 0x0030);
static_assert(offsetof(UGraphNodeContextMenuContext, Node) == 0x0038);
static_assert(offsetof(UEdGraphNode, DeprecatedPins) == 0x0038);
static_assert(offsetof(UEdGraphNode, AdvancedPinDisplay) == 0x0058);
static_assert(offsetof(UEdGraphNode, EnabledState) == 0x0059);
static_assert(offsetof(UEdGraphNode, NodeComment) == 0x0060);
static_assert(offsetof(UEdGraphNode, ErrorMsg) == 0x0078);
static_assert(offsetof(UEdGraphNode, NodeGuid) == 0x0088);
static_assert(offsetof(UEdGraphNode_Documentation, Link) == 0x0098);
static_assert(offsetof(UEdGraphNode_Documentation, Excerpt) == 0x00A8);
static_assert(offsetof(FEdGraphTerminalType, TerminalCategory) == 0x0000);
static_assert(offsetof(FEdGraphTerminalType, TerminalSubCategory) == 0x0008);
static_assert(offsetof(FEdGraphTerminalType, TerminalSubCategoryObject) == 0x0010);
static_assert(offsetof(FEdGraphPinType, PinCategory) == 0x0000);
static_assert(offsetof(FEdGraphPinType, PinSubCategory) == 0x0008);
static_assert(offsetof(FEdGraphPinType, PinSubCategoryObject) == 0x0010);
static_assert(offsetof(FEdGraphPinType, PinSubCategoryMemberReference) == 0x0018);
static_assert(offsetof(FEdGraphPinType, PinValueType) == 0x0038);
static_assert(offsetof(FEdGraphPinType, ContainerType) == 0x0054);
static_assert(offsetof(UEdGraphPin_Deprecated, PinName) == 0x0028);
static_assert(offsetof(UEdGraphPin_Deprecated, PinToolTip) == 0x0038);
static_assert(offsetof(UEdGraphPin_Deprecated, Direction) == 0x0048);
static_assert(offsetof(UEdGraphPin_Deprecated, PinType) == 0x0050);
static_assert(offsetof(UEdGraphPin_Deprecated, DefaultValue) == 0x00A8);
static_assert(offsetof(UEdGraphPin_Deprecated, AutogeneratedDefaultValue) == 0x00B8);
static_assert(offsetof(UEdGraphPin_Deprecated, DefaultObject) == 0x00C8);
static_assert(offsetof(UEdGraphPin_Deprecated, DefaultTextValue) == 0x00D0);
static_assert(offsetof(UEdGraphPin_Deprecated, LinkedTo) == 0x00E8);
static_assert(offsetof(UEdGraphPin_Deprecated, SubPins) == 0x00F8);
static_assert(offsetof(UEdGraphPin_Deprecated, ParentPin) == 0x0108);
static_assert(offsetof(UEdGraphPin_Deprecated, ReferencePassThroughConnection) == 0x0110);
static_assert(offsetof(AEmitter, ParticleSystemComponent) == 0x0220);
static_assert(offsetof(AEmitterCameraLensEffectBase, PS_CameraEffect) == 0x0270);
static_assert(offsetof(AEmitterCameraLensEffectBase, PS_CameraEffectNonExtremeContent) == 0x0278);
static_assert(offsetof(AEmitterCameraLensEffectBase, BaseCamera) == 0x0280);
static_assert(offsetof(AEmitterCameraLensEffectBase, RelativeTransform) == 0x0290);
static_assert(offsetof(AEmitterCameraLensEffectBase, EmittersToTreatAsSame) == 0x02C8);
static_assert(offsetof(UEngineMessage, FailedPlaceMessage) == 0x0028);
static_assert(offsetof(UEngineMessage, MaxedOutMessage) == 0x0038);
static_assert(offsetof(UEngineMessage, EnteredMessage) == 0x0048);
static_assert(offsetof(UEngineMessage, LeftMessage) == 0x0058);
static_assert(offsetof(UEngineMessage, GlobalNameChange) == 0x0068);
static_assert(offsetof(UEngineMessage, SpecEnteredMessage) == 0x0078);
static_assert(offsetof(UEngineMessage, NewPlayerMessage) == 0x0088);
static_assert(offsetof(UEngineMessage, NewSpecMessage) == 0x0098);
static_assert(offsetof(AExponentialHeightFog, Component) == 0x0220);
static_assert(offsetof(UExponentialHeightFogComponent, SecondFogData) == 0x0200);
static_assert(offsetof(UExponentialHeightFogComponent, FogInscatteringColor) == 0x020C);
static_assert(offsetof(UExponentialHeightFogComponent, InscatteringColorCubemap) == 0x0220);
static_assert(offsetof(UExponentialHeightFogComponent, InscatteringTextureTint) == 0x022C);
static_assert(offsetof(UExponentialHeightFogComponent, DirectionalInscatteringColor) == 0x024C);
static_assert(offsetof(UExponentialHeightFogComponent, VolumetricFogAlbedo) == 0x0270);
static_assert(offsetof(UExponentialHeightFogComponent, VolumetricFogEmissive) == 0x0274);
static_assert(offsetof(UExporter, SupportedClass) == 0x0028);
static_assert(offsetof(UExporter, ExportRootScope) == 0x0030);
static_assert(offsetof(UExporter, FormatExtension) == 0x0038);
static_assert(offsetof(UExporter, FormatDescription) == 0x0048);
static_assert(offsetof(UExporter, ExportTask) == 0x0068);
static_assert(offsetof(FFontImportOptionsData, FontName) == 0x0000);
static_assert(offsetof(FFontImportOptionsData, CharacterSet) == 0x0018);
static_assert(offsetof(FFontImportOptionsData, Chars) == 0x0020);
static_assert(offsetof(FFontImportOptionsData, UnicodeRange) == 0x0030);
static_assert(offsetof(FFontImportOptionsData, CharsFilePath) == 0x0040);
static_assert(offsetof(FFontImportOptionsData, CharsFileWildcard) == 0x0050);
static_assert(offsetof(FFontImportOptionsData, ForegroundColor) == 0x0064);
static_assert(offsetof(UFont, FontCacheType) == 0x0030);
static_assert(offsetof(UFont, Characters) == 0x0038);
static_assert(offsetof(UFont, Textures) == 0x0048);
static_assert(offsetof(UFont, ImportOptions) == 0x0070);
static_assert(offsetof(UFont, MaxCharHeight) == 0x0128);
static_assert(offsetof(UFont, LegacyFontName) == 0x0140);
static_assert(offsetof(UFont, CompositeFont) == 0x0148);
static_assert(offsetof(UFontFace, SourceFilename) == 0x0030);
static_assert(offsetof(UFontFace, Hinting) == 0x0040);
static_assert(offsetof(UFontFace, LoadingPolicy) == 0x0041);
static_assert(offsetof(UFontFace, LayoutMethod) == 0x0042);
static_assert(offsetof(UFontImportOptions, Data) == 0x0028);
static_assert(offsetof(UForceFeedbackAttenuation, Attenuation) == 0x0028);
static_assert(offsetof(UForceFeedbackComponent, ForceFeedbackEffect) == 0x01F8);
static_assert(offsetof(UForceFeedbackComponent, AttenuationSettings) == 0x0208);
static_assert(offsetof(UForceFeedbackComponent, AttenuationOverrides) == 0x0210);
static_assert(offsetof(FForceFeedbackChannelDetails, Curve) == 0x0008);
static_assert(offsetof(UForceFeedbackEffect, ChannelDetails) == 0x0028);
static_assert(offsetof(UGameEngine, GameInstance) == 0x0DE8);
static_assert(offsetof(AGameSession, SessionName) == 0x0230);
static_assert(offsetof(ASpotLight, SpotLightComponent) == 0x0230);
static_assert(offsetof(UHapticFeedbackEffect_Buffer, Amplitudes) == 0x0028);
static_assert(offsetof(FHapticFeedbackDetails_Curve, Frequency) == 0x0000);
static_assert(offsetof(FHapticFeedbackDetails_Curve, Amplitude) == 0x0088);
static_assert(offsetof(UHapticFeedbackEffect_Curve, HapticDetails) == 0x0028);
static_assert(offsetof(UHapticFeedbackEffect_SoundWave, SoundWave) == 0x0028);
static_assert(offsetof(FHLODProxyMesh, LODActor) == 0x0000);
static_assert(offsetof(FHLODProxyMesh, StaticMesh) == 0x0020);
static_assert(offsetof(FHLODProxyMesh, Key) == 0x0028);
static_assert(offsetof(UHLODProxy, ProxyMeshes) == 0x0028);
static_assert(offsetof(UHLODProxy, HLODActors) == 0x0038);
static_assert(offsetof(FComponentKey, OwnerClass) == 0x0000);
static_assert(offsetof(FComponentKey, SCSVariableName) == 0x0008);
static_assert(offsetof(FComponentKey, AssociatedGuid) == 0x0010);
static_assert(offsetof(FComponentOverrideRecord, ComponentClass) == 0x0000);
static_assert(offsetof(FComponentOverrideRecord, ComponentTemplate) == 0x0008);
static_assert(offsetof(FComponentOverrideRecord, ComponentKey) == 0x0010);
static_assert(offsetof(FComponentOverrideRecord, CookedComponentInstancingData) == 0x0030);
static_assert(offsetof(UInheritableComponentHandler, Records) == 0x0028);
static_assert(offsetof(UInheritableComponentHandler, UnnecessaryComponents) == 0x0038);
static_assert(offsetof(FBlueprintInputActionDelegateBinding, InputActionName) == 0x0004);
static_assert(offsetof(FBlueprintInputActionDelegateBinding, InputKeyEvent) == 0x000C);
static_assert(offsetof(FBlueprintInputActionDelegateBinding, FunctionNameToBind) == 0x0010);
static_assert(offsetof(UInputActionDelegateBinding, InputActionDelegateBindings) == 0x0028);
static_assert(offsetof(FBlueprintInputAxisDelegateBinding, InputAxisName) == 0x0004);
static_assert(offsetof(FBlueprintInputAxisDelegateBinding, FunctionNameToBind) == 0x000C);
static_assert(offsetof(UInputAxisDelegateBinding, InputAxisDelegateBindings) == 0x0028);
static_assert(offsetof(FBlueprintInputAxisKeyDelegateBinding, AxisKey) == 0x0008);
static_assert(offsetof(FBlueprintInputAxisKeyDelegateBinding, FunctionNameToBind) == 0x0020);
static_assert(offsetof(UInputAxisKeyDelegateBinding, InputAxisKeyDelegateBindings) == 0x0028);
static_assert(offsetof(FCachedKeyToActionInfo, PlayerInput) == 0x0000);
static_assert(offsetof(UInputComponent, CachedKeyToActionInfo) == 0x0120);
static_assert(offsetof(FBlueprintInputKeyDelegateBinding, InputChord) == 0x0008);
static_assert(offsetof(FBlueprintInputKeyDelegateBinding, InputKeyEvent) == 0x0028);
static_assert(offsetof(FBlueprintInputKeyDelegateBinding, FunctionNameToBind) == 0x002C);
static_assert(offsetof(UInputKeyDelegateBinding, InputKeyDelegateBindings) == 0x0028);
static_assert(offsetof(FInputAxisConfigEntry, AxisKeyName) == 0x0000);
static_assert(offsetof(FInputAxisConfigEntry, AxisProperties) == 0x0008);
static_assert(offsetof(FInputActionKeyMapping, ActionName) == 0x0000);
static_assert(offsetof(FInputActionKeyMapping, Key) == 0x0010);
static_assert(offsetof(FInputAxisKeyMapping, AxisName) == 0x0000);
static_assert(offsetof(FInputAxisKeyMapping, Key) == 0x0010);
static_assert(offsetof(FInputActionSpeechMapping, ActionName) == 0x0000);
static_assert(offsetof(FInputActionSpeechMapping, SpeechKeyword) == 0x0008);
static_assert(offsetof(UInputSettings, AxisConfig) == 0x0028);
static_assert(offsetof(UInputSettings, ExcludedAutocorrectOS) == 0x0040);
static_assert(offsetof(UInputSettings, ExcludedAutocorrectCultures) == 0x0050);
static_assert(offsetof(UInputSettings, ExcludedAutocorrectDeviceModels) == 0x0060);
static_assert(offsetof(UInputSettings, DefaultViewportMouseCaptureMode) == 0x0070);
static_assert(offsetof(UInputSettings, DefaultViewportMouseLockMode) == 0x0071);
static_assert(offsetof(UInputSettings, ActionMappings) == 0x0080);
static_assert(offsetof(UInputSettings, AxisMappings) == 0x0090);
static_assert(offsetof(UInputSettings, SpeechMappings) == 0x00A0);
static_assert(offsetof(UInputSettings, DefaultPlayerInputClass) == 0x00B0);
static_assert(offsetof(UInputSettings, DefaultInputComponentClass) == 0x00D8);
static_assert(offsetof(UInputSettings, DefaultTouchInterface) == 0x0100);
static_assert(offsetof(UInputSettings, ConsoleKey) == 0x0118);
static_assert(offsetof(UInputSettings, ConsoleKeys) == 0x0130);
static_assert(offsetof(FBlueprintInputTouchDelegateBinding, InputKeyEvent) == 0x0004);
static_assert(offsetof(FBlueprintInputTouchDelegateBinding, FunctionNameToBind) == 0x0008);
static_assert(offsetof(UInputTouchDelegateBinding, InputTouchDelegateBindings) == 0x0028);
static_assert(offsetof(FCurveEdEntry, CurveObject) == 0x0000);
static_assert(offsetof(FCurveEdEntry, CurveColor) == 0x0008);
static_assert(offsetof(FCurveEdEntry, CurveName) == 0x0010);
static_assert(offsetof(FCurveEdTab, TabName) == 0x0000);
static_assert(offsetof(FCurveEdTab, Curves) == 0x0010);
static_assert(offsetof(UInterpCurveEdSetup, Tabs) == 0x0028);
static_assert(offsetof(UInterpData, InterpGroups) == 0x0030);
static_assert(offsetof(UInterpData, CurveEdSetup) == 0x0040);
static_assert(offsetof(UInterpData, CachedDirectorGroup) == 0x0058);
static_assert(offsetof(UInterpData, AllEventNames) == 0x0060);
static_assert(offsetof(UInterpFilter, Caption) == 0x0028);
static_assert(offsetof(UInterpGroup, InterpTracks) == 0x0030);
static_assert(offsetof(UInterpGroup, GroupName) == 0x0040);
static_assert(offsetof(UInterpGroup, GroupColor) == 0x0048);
static_assert(offsetof(UInterpGroupCamera, CameraAnimInst) == 0x0050);
static_assert(offsetof(UInterpGroupInst, Group) == 0x0028);
static_assert(offsetof(UInterpGroupInst, GroupActor) == 0x0030);
static_assert(offsetof(UInterpGroupInst, TrackInst) == 0x0038);
static_assert(offsetof(FInterpControlPoint, PositionControlPoint) == 0x0000);
static_assert(offsetof(UInterpToMovementComponent, TeleportType) == 0x00F9);
static_assert(offsetof(UInterpToMovementComponent, BehaviourType) == 0x00FA);
static_assert(offsetof(UInterpToMovementComponent, ControlPoints) == 0x0158);
static_assert(offsetof(UInterpTrack, SubTracks) == 0x0038);
static_assert(offsetof(UInterpTrack, TrackInstClass) == 0x0048);
static_assert(offsetof(UInterpTrack, ActiveCondition) == 0x0050);
static_assert(offsetof(UInterpTrack, TrackTitle) == 0x0058);
static_assert(offsetof(UInterpTrackFloatBase, FloatTrack) == 0x0070);
static_assert(offsetof(FAnimControlTrackKey, AnimSeq) == 0x0008);
static_assert(offsetof(UInterpTrackAnimControl, SlotName) == 0x0090);
static_assert(offsetof(UInterpTrackAnimControl, AnimSeqs) == 0x0098);
static_assert(offsetof(UInterpTrackVectorBase, VectorTrack) == 0x0070);
static_assert(offsetof(UInterpTrackBoolProp, BoolTrack) == 0x0070);
static_assert(offsetof(UInterpTrackBoolProp, PropertyName) == 0x0080);
static_assert(offsetof(UInterpTrackColorProp, PropertyName) == 0x0090);
static_assert(offsetof(FDirectorTrackCut, TargetCamGroup) == 0x0008);
static_assert(offsetof(UInterpTrackDirector, CutTrack) == 0x0070);
static_assert(offsetof(FEventTrackKey, EventName) == 0x0004);
static_assert(offsetof(UInterpTrackEvent, EventTrack) == 0x0070);
static_assert(offsetof(UInterpTrackFade, FadeColor) == 0x0094);
static_assert(offsetof(UInterpTrackFloatAnimBPParam, AnimBlueprintClass) == 0x0090);
static_assert(offsetof(UInterpTrackFloatAnimBPParam, AnimClass) == 0x0098);
static_assert(offsetof(UInterpTrackFloatAnimBPParam, ParamName) == 0x00A0);
static_assert(offsetof(UInterpTrackFloatMaterialParam, TargetMaterials) == 0x0090);
static_assert(offsetof(UInterpTrackFloatMaterialParam, ParamName) == 0x00A0);
static_assert(offsetof(UInterpTrackFloatParticleParam, ParamName) == 0x0090);
static_assert(offsetof(UInterpTrackFloatProp, PropertyName) == 0x0090);
static_assert(offsetof(UInterpTrackInstProperty, PropertyOuterObjectInst) == 0x0048);
static_assert(offsetof(UInterpTrackInstColorProp, ResetColor) == 0x0058);
static_assert(offsetof(UInterpTrackInstDirector, OldViewTarget) == 0x0028);
static_assert(offsetof(UInterpTrackInstFloatAnimBPParam, AnimScriptInstance) == 0x0028);
static_assert(offsetof(FPrimitiveMaterialRef, Primitive) == 0x0000);
static_assert(offsetof(FPrimitiveMaterialRef, Decal) == 0x0008);
static_assert(offsetof(UInterpTrackInstFloatMaterialParam, MaterialInstances) == 0x0028);
static_assert(offsetof(UInterpTrackInstFloatMaterialParam, ResetFloats) == 0x0038);
static_assert(offsetof(UInterpTrackInstFloatMaterialParam, PrimitiveMaterialRefs) == 0x0048);
static_assert(offsetof(UInterpTrackInstFloatMaterialParam, InstancedTrack) == 0x0058);
static_assert(offsetof(UInterpTrackInstLinearColorProp, ResetColor) == 0x0058);
static_assert(offsetof(UInterpTrackInstMove, ResetLocation) == 0x0028);
static_assert(offsetof(UInterpTrackInstMove, ResetRotation) == 0x0034);
static_assert(offsetof(UInterpTrackInstSound, PlayAudioComp) == 0x0030);
static_assert(offsetof(UInterpTrackInstToggle, Action) == 0x0028);
static_assert(offsetof(UInterpTrackInstVectorMaterialParam, MaterialInstances) == 0x0028);
static_assert(offsetof(UInterpTrackInstVectorMaterialParam, ResetVectors) == 0x0038);
static_assert(offsetof(UInterpTrackInstVectorMaterialParam, PrimitiveMaterialRefs) == 0x0048);
static_assert(offsetof(UInterpTrackInstVectorMaterialParam, InstancedTrack) == 0x0058);
static_assert(offsetof(UInterpTrackInstVectorProp, ResetVector) == 0x0058);
static_assert(offsetof(UInterpTrackInstVisibility, Action) == 0x0028);
static_assert(offsetof(UInterpTrackLinearColorBase, LinearColorTrack) == 0x0070);
static_assert(offsetof(UInterpTrackLinearColorProp, PropertyName) == 0x0090);
static_assert(offsetof(FInterpLookupPoint, GroupName) == 0x0000);
static_assert(offsetof(FInterpLookupTrack, Points) == 0x0000);
static_assert(offsetof(UInterpTrackMove, PosTrack) == 0x0070);
static_assert(offsetof(UInterpTrackMove, EulerTrack) == 0x0088);
static_assert(offsetof(UInterpTrackMove, LookupTrack) == 0x00A0);
static_assert(offsetof(UInterpTrackMove, LookAtGroupName) == 0x00B0);
static_assert(offsetof(UInterpTrackMove, RotMode) == 0x00C4);
static_assert(offsetof(UInterpTrackMoveAxis, MoveAxis) == 0x0090);
static_assert(offsetof(UInterpTrackMoveAxis, LookupTrack) == 0x0098);
static_assert(offsetof(UInterpTrackParticleReplay, TrackKeys) == 0x0070);
static_assert(offsetof(FSoundTrackKey, Sound) == 0x0010);
static_assert(offsetof(UInterpTrackSound, Sounds) == 0x0090);
static_assert(offsetof(FToggleTrackKey, ToggleAction) == 0x0004);
static_assert(offsetof(UInterpTrackToggle, ToggleTrack) == 0x0070);
static_assert(offsetof(UInterpTrackVectorMaterialParam, TargetMaterials) == 0x0090);
static_assert(offsetof(UInterpTrackVectorMaterialParam, ParamName) == 0x00A0);
static_assert(offsetof(UInterpTrackVectorProp, PropertyName) == 0x0090);
static_assert(offsetof(FVisibilityTrackKey, Action) == 0x0004);
static_assert(offsetof(FVisibilityTrackKey, ActiveCondition) == 0x0005);
static_assert(offsetof(UInterpTrackVisibility, VisibilityTrack) == 0x0070);
static_assert(offsetof(FLayerActorStats, Type) == 0x0000);
static_assert(offsetof(ULayer, LayerName) == 0x0028);
static_assert(offsetof(ULayer, ActorStats) == 0x0038);
static_assert(offsetof(FReplicatedStaticActorDestructionInfo, ObjClass) == 0x0030);
static_assert(offsetof(ULevel, OwningWorld) == 0x00B8);
static_assert(offsetof(ULevel, Model) == 0x00C0);
static_assert(offsetof(ULevel, ModelComponents) == 0x00C8);
static_assert(offsetof(ULevel, ActorCluster) == 0x00D8);
static_assert(offsetof(ULevel, LevelScriptActor) == 0x00E8);
static_assert(offsetof(ULevel, NavListStart) == 0x00F0);
static_assert(offsetof(ULevel, NavListEnd) == 0x00F8);
static_assert(offsetof(ULevel, NavDataChunks) == 0x0100);
static_assert(offsetof(ULevel, StaticNavigableGeometry) == 0x0118);
static_assert(offsetof(ULevel, StreamingTextureGuids) == 0x0128);
static_assert(offsetof(ULevel, LevelBuildDataId) == 0x01D0);
static_assert(offsetof(ULevel, MapBuildData) == 0x01E0);
static_assert(offsetof(ULevel, LightBuildLevelOffset) == 0x01E8);
static_assert(offsetof(ULevel, WorldSettings) == 0x0258);
static_assert(offsetof(ULevel, AssetUserData) == 0x0268);
static_assert(offsetof(ULevel, DestroyedReplicatedStaticActors) == 0x0288);
static_assert(offsetof(ULevelActorContainer, Actors) == 0x0028);
static_assert(offsetof(ALevelBounds, BoxComponent) == 0x0220);
static_assert(offsetof(ULevelStreaming, WorldAsset) == 0x0028);
static_assert(offsetof(ULevelStreaming, PackageNameToLoad) == 0x0050);
static_assert(offsetof(ULevelStreaming, LODPackageNames) == 0x0058);
static_assert(offsetof(ULevelStreaming, LevelTransform) == 0x0080);
static_assert(offsetof(ULevelStreaming, LevelColor) == 0x00BC);
static_assert(offsetof(ULevelStreaming, EditorStreamingVolumes) == 0x00D0);
static_assert(offsetof(ULevelStreaming, LoadedLevel) == 0x0128);
static_assert(offsetof(ULevelStreaming, PendingUnloadLevel) == 0x0130);
static_assert(offsetof(ALevelStreamingVolume, StreamingLevelNames) == 0x0258);
static_assert(offsetof(ALevelStreamingVolume, StreamingUsage) == 0x026C);
static_assert(offsetof(ULightmappedSurfaceCollection, SourceModel) == 0x0028);
static_assert(offsetof(ULightmappedSurfaceCollection, Surfaces) == 0x0030);
static_assert(offsetof(ULightMapVirtualTexture2D, TypeToLayer) == 0x0100);
static_assert(offsetof(ALightmassPortal, PortalComponent) == 0x0220);
static_assert(offsetof(ULightmassPortalComponent, PreviewBox) == 0x01F8);
static_assert(offsetof(ULightmassPrimitiveSettingsObject, LightmassSettings) == 0x0028);
static_assert(offsetof(ULocalLightComponent, IntensityUnits) == 0x0328);
static_assert(offsetof(ULocalLightComponent, LightmassSettings) == 0x0334);
static_assert(offsetof(ALODActor, StaticMeshComponent) == 0x0220);
static_assert(offsetof(ALODActor, ImpostersStaticMeshComponents) == 0x0228);
static_assert(offsetof(ALODActor, Proxy) == 0x0278);
static_assert(offsetof(ALODActor, Key) == 0x0280);
static_assert(offsetof(ALODActor, SubActors) == 0x0290);
static_assert(offsetof(FComponentSync, Name) == 0x0000);
static_assert(offsetof(FComponentSync, SyncOption) == 0x0008);
static_assert(offsetof(FLODMappingData, Mapping) == 0x0000);
static_assert(offsetof(FLODMappingData, InverseMapping) == 0x0010);
static_assert(offsetof(ULODSyncComponent, ComponentsToSync) == 0x00B8);
static_assert(offsetof(ULODSyncComponent, CustomLODMapping) == 0x00C8);
static_assert(offsetof(ULODSyncComponent, DriveComponents) == 0x0120);
static_assert(offsetof(ULODSyncComponent, SubComponents) == 0x0130);
static_assert(offsetof(UMapBuildDataRegistry, LevelLightingQuality) == 0x0028);
static_assert(offsetof(FMaterialInput, ExpressionName) == 0x0004);
static_assert(offsetof(FMaterialFunctionInfo, StateId) == 0x0000);
static_assert(offsetof(FMaterialFunctionInfo, Function) == 0x0010);
static_assert(offsetof(FMaterialParameterCollectionInfo, StateId) == 0x0000);
static_assert(offsetof(FMaterialParameterCollectionInfo, ParameterCollection) == 0x0010);
static_assert(offsetof(FMaterialCachedExpressionData, Parameters) == 0x0000);
static_assert(offsetof(FMaterialCachedExpressionData, ReferencedTextures) == 0x01A0);
static_assert(offsetof(FMaterialCachedExpressionData, FunctionInfos) == 0x01B0);
static_assert(offsetof(FMaterialCachedExpressionData, ParameterCollectionInfos) == 0x01C0);
static_assert(offsetof(FMaterialCachedExpressionData, DefaultLayers) == 0x01D0);
static_assert(offsetof(FMaterialCachedExpressionData, DefaultLayerBlends) == 0x01E0);
static_assert(offsetof(FMaterialCachedExpressionData, GrassTypes) == 0x01F0);
static_assert(offsetof(FMaterialCachedExpressionData, DynamicParameterNames) == 0x0200);
static_assert(offsetof(FMaterialCachedExpressionData, QualityLevelsUsed) == 0x0210);
static_assert(offsetof(UMaterial, PhysMaterial) == 0x0088);
static_assert(offsetof(UMaterial, PhysMaterialMask) == 0x0090);
static_assert(offsetof(UMaterial, PhysicalMaterialMap) == 0x0098);
static_assert(offsetof(UMaterial, Metallic) == 0x00D8);
static_assert(offsetof(UMaterial, Specular) == 0x00EC);
static_assert(offsetof(UMaterial, Anisotropy) == 0x0100);
static_assert(offsetof(UMaterial, Normal) == 0x0114);
static_assert(offsetof(UMaterial, Tangent) == 0x0128);
static_assert(offsetof(UMaterial, EmissiveColor) == 0x013C);
static_assert(offsetof(UMaterial, MaterialDomain) == 0x0150);
static_assert(offsetof(UMaterial, BlendMode) == 0x0151);
static_assert(offsetof(UMaterial, DecalBlendMode) == 0x0152);
static_assert(offsetof(UMaterial, MaterialDecalResponse) == 0x0153);
static_assert(offsetof(UMaterial, ShadingModel) == 0x0154);
static_assert(offsetof(UMaterial, ShadingModels) == 0x0156);
static_assert(offsetof(UMaterial, WorldPositionOffset) == 0x015C);
static_assert(offsetof(UMaterial, Refraction) == 0x0170);
static_assert(offsetof(UMaterial, MaterialAttributes) == 0x0184);
static_assert(offsetof(UMaterial, PixelDepthOffset) == 0x019C);
static_assert(offsetof(UMaterial, ShadingModelFromMaterialExpression) == 0x01B0);
static_assert(offsetof(UMaterial, TranslucencyLightingMode) == 0x01C6);
static_assert(offsetof(UMaterial, TranslucentMultipleScatteringExtinction) == 0x01E4);
static_assert(offsetof(UMaterial, MobileMaterialType) == 0x0201);
static_assert(offsetof(UMaterial, D3D11TessellationMode) == 0x0209);
static_assert(offsetof(UMaterial, ShadingRate) == 0x020B);
static_assert(offsetof(UMaterial, BlendableLocation) == 0x020E);
static_assert(offsetof(UMaterial, StencilCompare) == 0x0215);
static_assert(offsetof(UMaterial, RefractionMode) == 0x0217);
static_assert(offsetof(UMaterial, StateId) == 0x0228);
static_assert(offsetof(UMaterial, CachedExpressionData) == 0x0270);
static_assert(offsetof(FMaterialSpriteElement, Material) == 0x0000);
static_assert(offsetof(FMaterialSpriteElement, DistanceToOpacityCurve) == 0x0008);
static_assert(offsetof(FMaterialSpriteElement, DistanceToSizeCurve) == 0x0020);
static_assert(offsetof(UMaterialBillboardComponent, Elements) == 0x0468);
static_assert(offsetof(UMaterialExpressionAbs, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionAdd, A) == 0x0040);
static_assert(offsetof(UMaterialExpressionAdd, B) == 0x0054);
static_assert(offsetof(UMaterialExpressionAdvancedFeatureSwitch, Default) == 0x0040);
static_assert(offsetof(UMaterialExpressionAdvancedFeatureSwitch, Advanced) == 0x0054);
static_assert(offsetof(UMaterialExpressionAntialiasedTextureMask, Channel) == 0x0084);
static_assert(offsetof(UMaterialExpressionAppendVector, A) == 0x0040);
static_assert(offsetof(UMaterialExpressionAppendVector, B) == 0x0054);
static_assert(offsetof(UMaterialExpressionArccosine, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionArccosineFast, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionArcsine, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionArcsineFast, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionArctangent, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionArctangent2, Y) == 0x0040);
static_assert(offsetof(UMaterialExpressionArctangent2, X) == 0x0054);
static_assert(offsetof(UMaterialExpressionArctangent2Fast, Y) == 0x0040);
static_assert(offsetof(UMaterialExpressionArctangent2Fast, X) == 0x0054);
static_assert(offsetof(UMaterialExpressionArctangentFast, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionAtmosphericFogColor, WorldPosition) == 0x0040);
static_assert(offsetof(UMaterialExpressionBentNormalCustomOutput, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionBlackBody, Temp) == 0x0040);
static_assert(offsetof(UMaterialExpressionBlendMaterialAttributes, A) == 0x0040);
static_assert(offsetof(UMaterialExpressionBlendMaterialAttributes, B) == 0x0058);
static_assert(offsetof(UMaterialExpressionBlendMaterialAttributes, Alpha) == 0x0070);
static_assert(offsetof(UMaterialExpressionBlendMaterialAttributes, PixelAttributeBlendType) == 0x0084);
static_assert(offsetof(UMaterialExpressionBlendMaterialAttributes, VertexAttributeBlendType) == 0x0085);
static_assert(offsetof(UMaterialExpressionBreakMaterialAttributes, MaterialAttributes) == 0x0040);
static_assert(offsetof(UMaterialExpressionBumpOffset, Coordinate) == 0x0040);
static_assert(offsetof(UMaterialExpressionBumpOffset, Height) == 0x0054);
static_assert(offsetof(UMaterialExpressionBumpOffset, HeightRatioInput) == 0x0068);
static_assert(offsetof(UMaterialExpressionCeil, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionParameter, ParameterName) == 0x0040);
static_assert(offsetof(UMaterialExpressionParameter, ExpressionGUID) == 0x0048);
static_assert(offsetof(UMaterialExpressionVectorParameter, DefaultValue) == 0x0058);
static_assert(offsetof(UMaterialExpressionChannelMaskParameter, MaskChannel) == 0x0070);
static_assert(offsetof(UMaterialExpressionClamp, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionClamp, Min) == 0x0054);
static_assert(offsetof(UMaterialExpressionClamp, Max) == 0x0068);
static_assert(offsetof(UMaterialExpressionClamp, ClampMode) == 0x007C);
static_assert(offsetof(UMaterialExpressionClearCoatNormalCustomOutput, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionCollectionParameter, Collection) == 0x0040);
static_assert(offsetof(UMaterialExpressionCollectionParameter, ParameterName) == 0x0048);
static_assert(offsetof(UMaterialExpressionCollectionParameter, ParameterId) == 0x0050);
static_assert(offsetof(UMaterialExpressionComment, Text) == 0x0048);
static_assert(offsetof(UMaterialExpressionComment, CommentColor) == 0x0058);
static_assert(offsetof(UMaterialExpressionComponentMask, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionConstant3Vector, Constant) == 0x0040);
static_assert(offsetof(UMaterialExpressionConstant4Vector, Constant) == 0x0040);
static_assert(offsetof(UMaterialExpressionConstantBiasScale, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionCosine, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionCrossProduct, A) == 0x0040);
static_assert(offsetof(UMaterialExpressionCrossProduct, B) == 0x0054);
static_assert(offsetof(UMaterialExpressionCurveAtlasRowParameter, Curve) == 0x0060);
static_assert(offsetof(UMaterialExpressionCurveAtlasRowParameter, Atlas) == 0x0068);
static_assert(offsetof(UMaterialExpressionCurveAtlasRowParameter, InputTime) == 0x0070);
static_assert(offsetof(FCustomInput, InputName) == 0x0000);
static_assert(offsetof(FCustomInput, Input) == 0x0008);
static_assert(offsetof(FCustomOutput, OutputName) == 0x0000);
static_assert(offsetof(FCustomOutput, OutputType) == 0x0008);
static_assert(offsetof(FCustomDefine, DefineName) == 0x0000);
static_assert(offsetof(FCustomDefine, DefineValue) == 0x0010);
static_assert(offsetof(UMaterialExpressionCustom, Code) == 0x0040);
static_assert(offsetof(UMaterialExpressionCustom, OutputType) == 0x0050);
static_assert(offsetof(UMaterialExpressionCustom, Description) == 0x0058);
static_assert(offsetof(UMaterialExpressionCustom, Inputs) == 0x0068);
static_assert(offsetof(UMaterialExpressionCustom, AdditionalOutputs) == 0x0078);
static_assert(offsetof(UMaterialExpressionCustom, AdditionalDefines) == 0x0088);
static_assert(offsetof(UMaterialExpressionCustom, IncludeFilePaths) == 0x0098);
static_assert(offsetof(UMaterialExpressionDDX, Value) == 0x0040);
static_assert(offsetof(UMaterialExpressionDDY, Value) == 0x0040);
static_assert(offsetof(UMaterialExpressionDecalMipmapLevel, TextureSize) == 0x0040);
static_assert(offsetof(UMaterialExpressionDepthFade, InOpacity) == 0x0040);
static_assert(offsetof(UMaterialExpressionDepthFade, FadeDistance) == 0x0054);
static_assert(offsetof(UMaterialExpressionDepthOfFieldFunction, FunctionValue) == 0x0040);
static_assert(offsetof(UMaterialExpressionDepthOfFieldFunction, Depth) == 0x0044);
static_assert(offsetof(UMaterialExpressionDeriveNormalZ, InXY) == 0x0040);
static_assert(offsetof(UMaterialExpressionDesaturation, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionDesaturation, Fraction) == 0x0054);
static_assert(offsetof(UMaterialExpressionDesaturation, LuminanceFactors) == 0x0068);
static_assert(offsetof(UMaterialExpressionDistance, A) == 0x0040);
static_assert(offsetof(UMaterialExpressionDistance, B) == 0x0054);
static_assert(offsetof(UMaterialExpressionDistanceFieldGradient, Position) == 0x0040);
static_assert(offsetof(UMaterialExpressionDistanceToNearestSurface, Position) == 0x0040);
static_assert(offsetof(UMaterialExpressionDivide, A) == 0x0040);
static_assert(offsetof(UMaterialExpressionDivide, B) == 0x0054);
static_assert(offsetof(UMaterialExpressionDotProduct, A) == 0x0040);
static_assert(offsetof(UMaterialExpressionDotProduct, B) == 0x0054);
static_assert(offsetof(UMaterialExpressionDynamicParameter, ParamNames) == 0x0040);
static_assert(offsetof(UMaterialExpressionDynamicParameter, DefaultValue) == 0x0050);
static_assert(offsetof(UMaterialExpressionEdenCustomMaterialOutput, EdenCustomInput0) == 0x0040);
static_assert(offsetof(UMaterialExpressionEdenCustomMaterialOutput, EdenCustomInput1) == 0x0054);
static_assert(offsetof(UMaterialExpressionEdenCustomMaterialOutput, EdenCustomInput2) == 0x0068);
static_assert(offsetof(UMaterialExpressionEdenCustomMaterialOutput, EdenCustomInput3) == 0x007C);
static_assert(offsetof(UMaterialExpressionEdenCustomMaterialOutput, EdenCustomInput4) == 0x0090);
static_assert(offsetof(UMaterialExpressionEdenCustomMaterialOutput, EdenCustomInput5) == 0x00A4);
static_assert(offsetof(UMaterialExpressionEdenCustomMaterialOutput, EdenCustomInput6) == 0x00B8);
static_assert(offsetof(UMaterialExpressionEdenCustomMaterialOutput, EdenCustomInput7) == 0x00CC);
static_assert(offsetof(UMaterialExpressionFeatureLevelSwitch, Default) == 0x0040);
static_assert(offsetof(UMaterialExpressionFloor, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionFmod, A) == 0x0040);
static_assert(offsetof(UMaterialExpressionFmod, B) == 0x0054);
static_assert(offsetof(UMaterialExpressionFontSample, Font) == 0x0040);
static_assert(offsetof(UMaterialExpressionFontSampleParameter, ParameterName) == 0x0050);
static_assert(offsetof(UMaterialExpressionFontSampleParameter, ExpressionGUID) == 0x0058);
static_assert(offsetof(UMaterialExpressionFontSampleParameter, Group) == 0x0068);
static_assert(offsetof(UMaterialExpressionFrac, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionFresnel, ExponentIn) == 0x0040);
static_assert(offsetof(UMaterialExpressionFresnel, BaseReflectFractionIn) == 0x0058);
static_assert(offsetof(UMaterialExpressionFresnel, Normal) == 0x0070);
static_assert(offsetof(UMaterialExpressionFunctionInput, Preview) == 0x0040);
static_assert(offsetof(UMaterialExpressionFunctionInput, InputName) == 0x0054);
static_assert(offsetof(UMaterialExpressionFunctionInput, Description) == 0x0060);
static_assert(offsetof(UMaterialExpressionFunctionInput, ID) == 0x0070);
static_assert(offsetof(UMaterialExpressionFunctionInput, InputType) == 0x0080);
static_assert(offsetof(UMaterialExpressionFunctionInput, PreviewValue) == 0x0090);
static_assert(offsetof(UMaterialExpressionFunctionOutput, OutputName) == 0x0040);
static_assert(offsetof(UMaterialExpressionFunctionOutput, Description) == 0x0048);
static_assert(offsetof(UMaterialExpressionFunctionOutput, A) == 0x005C);
static_assert(offsetof(UMaterialExpressionFunctionOutput, ID) == 0x0074);
static_assert(offsetof(UMaterialExpressionGetMaterialAttributes, MaterialAttributes) == 0x0040);
static_assert(offsetof(UMaterialExpressionGetMaterialAttributes, AttributeGetTypes) == 0x0058);
static_assert(offsetof(UMaterialExpressionGIReplace, Default) == 0x0040);
static_assert(offsetof(UMaterialExpressionGIReplace, StaticIndirect) == 0x0054);
static_assert(offsetof(UMaterialExpressionGIReplace, DynamicIndirect) == 0x0068);
static_assert(offsetof(UMaterialExpressionHairColor, Melanin) == 0x0040);
static_assert(offsetof(UMaterialExpressionHairColor, Redness) == 0x0054);
static_assert(offsetof(UMaterialExpressionHairColor, DyeColor) == 0x0068);
static_assert(offsetof(UMaterialExpressionIf, A) == 0x0040);
static_assert(offsetof(UMaterialExpressionIf, B) == 0x0054);
static_assert(offsetof(UMaterialExpressionIf, AGreaterThanB) == 0x0068);
static_assert(offsetof(UMaterialExpressionIf, AEqualsB) == 0x007C);
static_assert(offsetof(UMaterialExpressionIf, ALessThanB) == 0x0090);
static_assert(offsetof(UMaterialExpressionInverseLinearInterpolate, A) == 0x0040);
static_assert(offsetof(UMaterialExpressionInverseLinearInterpolate, B) == 0x0054);
static_assert(offsetof(UMaterialExpressionInverseLinearInterpolate, Value) == 0x0068);
static_assert(offsetof(UMaterialExpressionLightmassReplace, Realtime) == 0x0040);
static_assert(offsetof(UMaterialExpressionLightmassReplace, Lightmass) == 0x0054);
static_assert(offsetof(UMaterialExpressionLinearInterpolate, A) == 0x0040);
static_assert(offsetof(UMaterialExpressionLinearInterpolate, B) == 0x0054);
static_assert(offsetof(UMaterialExpressionLinearInterpolate, Alpha) == 0x0068);
static_assert(offsetof(UMaterialExpressionLogarithm10, X) == 0x0040);
static_assert(offsetof(UMaterialExpressionLogarithm2, X) == 0x0040);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, BaseColor) == 0x0040);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, Metallic) == 0x0054);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, Specular) == 0x0068);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, Roughness) == 0x007C);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, Anisotropy) == 0x0090);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, EmissiveColor) == 0x00A4);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, Opacity) == 0x00B8);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, OpacityMask) == 0x00CC);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, Normal) == 0x00E0);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, Tangent) == 0x00F4);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, WorldPositionOffset) == 0x0108);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, WorldDisplacement) == 0x011C);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, TessellationMultiplier) == 0x0130);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, SubsurfaceColor) == 0x0144);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, ClearCoat) == 0x0158);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, ClearCoatRoughness) == 0x016C);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, AmbientOcclusion) == 0x0180);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, Refraction) == 0x0194);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, CustomizedUVs) == 0x01A8);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, PixelDepthOffset) == 0x0248);
static_assert(offsetof(UMaterialExpressionMakeMaterialAttributes, ShadingModel) == 0x025C);
static_assert(offsetof(UMaterialExpressionMapARPassthroughCameraUV, Coordinates) == 0x0040);
static_assert(offsetof(UMaterialExpressionMaterialAttributeLayers, ParameterName) == 0x0040);
static_assert(offsetof(UMaterialExpressionMaterialAttributeLayers, ExpressionGUID) == 0x0048);
static_assert(offsetof(UMaterialExpressionMaterialAttributeLayers, Input) == 0x0058);
static_assert(offsetof(UMaterialExpressionMaterialAttributeLayers, DefaultLayers) == 0x0070);
static_assert(offsetof(UMaterialExpressionMaterialAttributeLayers, LayerCallers) == 0x00B0);
static_assert(offsetof(UMaterialExpressionMaterialAttributeLayers, BlendCallers) == 0x00C8);
static_assert(offsetof(UMaterialExpressionMaterialFunctionCall, MaterialFunction) == 0x0040);
static_assert(offsetof(UMaterialExpressionMaterialFunctionCall, FunctionParameterInfo) == 0x0048);
static_assert(offsetof(UMaterialExpressionMaterialProxyReplace, Realtime) == 0x0040);
static_assert(offsetof(UMaterialExpressionMaterialProxyReplace, MaterialProxy) == 0x0054);
static_assert(offsetof(UMaterialExpressionMax, A) == 0x0040);
static_assert(offsetof(UMaterialExpressionMax, B) == 0x0054);
static_assert(offsetof(UMaterialExpressionMin, A) == 0x0040);
static_assert(offsetof(UMaterialExpressionMin, B) == 0x0054);
static_assert(offsetof(UMaterialExpressionMultiply, A) == 0x0040);
static_assert(offsetof(UMaterialExpressionMultiply, B) == 0x0054);
static_assert(offsetof(UMaterialExpressionNoise, Position) == 0x0040);
static_assert(offsetof(UMaterialExpressionNoise, FilterWidth) == 0x0054);
static_assert(offsetof(UMaterialExpressionNoise, NoiseFunction) == 0x0070);
static_assert(offsetof(UMaterialExpressionNormalize, VectorInput) == 0x0040);
static_assert(offsetof(UMaterialExpressionOneMinus, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionPanner, Coordinate) == 0x0040);
static_assert(offsetof(UMaterialExpressionPanner, Time) == 0x0054);
static_assert(offsetof(UMaterialExpressionPanner, Speed) == 0x0068);
static_assert(offsetof(UMaterialExpressionPerInstanceCustomData, DefaultValue) == 0x0040);
static_assert(offsetof(UMaterialExpressionPower, Base) == 0x0040);
static_assert(offsetof(UMaterialExpressionPower, Exponent) == 0x0054);
static_assert(offsetof(UMaterialExpressionPreviousFrameSwitch, CurrentFrame) == 0x0040);
static_assert(offsetof(UMaterialExpressionPreviousFrameSwitch, PreviousFrame) == 0x0054);
static_assert(offsetof(UMaterialExpressionQualitySwitch, Default) == 0x0040);
static_assert(offsetof(UMaterialExpressionQualitySwitch, Inputs) == 0x0054);
static_assert(offsetof(UMaterialExpressionRayTracingQualitySwitch, Normal) == 0x0040);
static_assert(offsetof(UMaterialExpressionRayTracingQualitySwitch, RayTraced) == 0x0054);
static_assert(offsetof(UMaterialExpressionReflectionCapturePassSwitch, Default) == 0x0040);
static_assert(offsetof(UMaterialExpressionReflectionCapturePassSwitch, Reflection) == 0x0054);
static_assert(offsetof(UMaterialExpressionReflectionVectorWS, CustomWorldNormal) == 0x0040);
static_assert(offsetof(UMaterialExpressionReroute, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionRotateAboutAxis, NormalizedRotationAxis) == 0x0040);
static_assert(offsetof(UMaterialExpressionRotateAboutAxis, RotationAngle) == 0x0054);
static_assert(offsetof(UMaterialExpressionRotateAboutAxis, PivotPoint) == 0x0068);
static_assert(offsetof(UMaterialExpressionRotateAboutAxis, Position) == 0x007C);
static_assert(offsetof(UMaterialExpressionRotator, Coordinate) == 0x0040);
static_assert(offsetof(UMaterialExpressionRotator, Time) == 0x0054);
static_assert(offsetof(UMaterialExpressionRound, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureOutput, BaseColor) == 0x0040);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureOutput, Specular) == 0x0054);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureOutput, Roughness) == 0x0068);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureOutput, Normal) == 0x007C);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureOutput, WorldHeight) == 0x0090);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureOutput, Opacity) == 0x00A4);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureOutput, Mask) == 0x00B8);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureReplace, Default) == 0x0040);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureReplace, VirtualTextureOutput) == 0x0054);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureSample, Coordinates) == 0x0040);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureSample, WorldPosition) == 0x0054);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureSample, MipValue) == 0x0068);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureSample, VirtualTexture) == 0x0080);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureSample, MaterialType) == 0x0088);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureSample, MipValueMode) == 0x008B);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureSample, TextureAddressMode) == 0x008C);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureSampleParameter, ParameterName) == 0x0090);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureSampleParameter, ExpressionGUID) == 0x0098);
static_assert(offsetof(UMaterialExpressionRuntimeVirtualTextureSampleParameter, Group) == 0x00A8);
static_assert(offsetof(UMaterialExpressionSaturate, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionSceneColor, InputMode) == 0x0040);
static_assert(offsetof(UMaterialExpressionSceneColor, Input) == 0x0044);
static_assert(offsetof(UMaterialExpressionSceneColor, OffsetFraction) == 0x0058);
static_assert(offsetof(UMaterialExpressionSceneColor, ConstInput) == 0x006C);
static_assert(offsetof(UMaterialExpressionSceneDepth, InputMode) == 0x0040);
static_assert(offsetof(UMaterialExpressionSceneDepth, Input) == 0x0044);
static_assert(offsetof(UMaterialExpressionSceneDepth, Coordinates) == 0x0058);
static_assert(offsetof(UMaterialExpressionSceneDepth, ConstInput) == 0x006C);
static_assert(offsetof(UMaterialExpressionSceneDepthWithoutWater, InputMode) == 0x0040);
static_assert(offsetof(UMaterialExpressionSceneDepthWithoutWater, Input) == 0x0044);
static_assert(offsetof(UMaterialExpressionSceneDepthWithoutWater, ConstInput) == 0x0058);
static_assert(offsetof(UMaterialExpressionSceneTexture, Coordinates) == 0x0040);
static_assert(offsetof(UMaterialExpressionSceneTexture, SceneTextureId) == 0x0054);
static_assert(offsetof(UMaterialExpressionSetMaterialAttributes, Inputs) == 0x0040);
static_assert(offsetof(UMaterialExpressionSetMaterialAttributes, AttributeSetTypes) == 0x0050);
static_assert(offsetof(UMaterialExpressionShaderStageSwitch, PixelShader) == 0x0040);
static_assert(offsetof(UMaterialExpressionShaderStageSwitch, VertexShader) == 0x0054);
static_assert(offsetof(UMaterialExpressionShadingModel, ShadingModel) == 0x0040);
static_assert(offsetof(UMaterialExpressionShadingPathSwitch, Default) == 0x0040);
static_assert(offsetof(UMaterialExpressionShadingPathSwitch, Inputs) == 0x0054);
static_assert(offsetof(UMaterialExpressionShadowReplace, Default) == 0x0040);
static_assert(offsetof(UMaterialExpressionShadowReplace, Shadow) == 0x0054);
static_assert(offsetof(UMaterialExpressionSign, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionSine, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionSingleLayerWaterMaterialOutput, ScatteringCoefficients) == 0x0040);
static_assert(offsetof(UMaterialExpressionSingleLayerWaterMaterialOutput, AbsorptionCoefficients) == 0x0054);
static_assert(offsetof(UMaterialExpressionSingleLayerWaterMaterialOutput, PhaseG) == 0x0068);
static_assert(offsetof(UMaterialExpressionSingleLayerWaterMaterialOutput, ColorScaleBehindWater) == 0x007C);
static_assert(offsetof(UMaterialExpressionSkyAtmosphereLightIlluminance, WorldPosition) == 0x0044);
static_assert(offsetof(UMaterialExpressionSkyAtmosphereAerialPerspective, WorldPosition) == 0x0040);
static_assert(offsetof(UMaterialExpressionSmoothStep, Min) == 0x0040);
static_assert(offsetof(UMaterialExpressionSmoothStep, Max) == 0x0054);
static_assert(offsetof(UMaterialExpressionSmoothStep, Value) == 0x0068);
static_assert(offsetof(UMaterialExpressionSobol, Cell) == 0x0040);
static_assert(offsetof(UMaterialExpressionSobol, Index) == 0x0054);
static_assert(offsetof(UMaterialExpressionSobol, Seed) == 0x0068);
static_assert(offsetof(UMaterialExpressionSobol, ConstSeed) == 0x0080);
static_assert(offsetof(UMaterialExpressionSpeedTree, GeometryInput) == 0x0040);
static_assert(offsetof(UMaterialExpressionSpeedTree, WindInput) == 0x0054);
static_assert(offsetof(UMaterialExpressionSpeedTree, LODInput) == 0x0068);
static_assert(offsetof(UMaterialExpressionSpeedTree, ExtraBendWS) == 0x007C);
static_assert(offsetof(UMaterialExpressionSpeedTree, GeometryType) == 0x0090);
static_assert(offsetof(UMaterialExpressionSpeedTree, WindType) == 0x0091);
static_assert(offsetof(UMaterialExpressionSpeedTree, LODType) == 0x0092);
static_assert(offsetof(UMaterialExpressionSphereMask, A) == 0x0040);
static_assert(offsetof(UMaterialExpressionSphereMask, B) == 0x0054);
static_assert(offsetof(UMaterialExpressionSphereMask, Radius) == 0x0068);
static_assert(offsetof(UMaterialExpressionSphereMask, Hardness) == 0x007C);
static_assert(offsetof(UMaterialExpressionSphericalParticleOpacity, Density) == 0x0040);
static_assert(offsetof(UMaterialExpressionSquareRoot, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionStaticSwitch, A) == 0x0044);
static_assert(offsetof(UMaterialExpressionStaticSwitch, B) == 0x0058);
static_assert(offsetof(UMaterialExpressionStaticSwitch, Value) == 0x006C);
static_assert(offsetof(UMaterialExpressionStep, Y) == 0x0040);
static_assert(offsetof(UMaterialExpressionStep, X) == 0x0054);
static_assert(offsetof(UMaterialExpressionSubtract, A) == 0x0040);
static_assert(offsetof(UMaterialExpressionSubtract, B) == 0x0054);
static_assert(offsetof(UMaterialExpressionTangent, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionTangentOutput, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionTemporalSobol, Index) == 0x0040);
static_assert(offsetof(UMaterialExpressionTemporalSobol, Seed) == 0x0054);
static_assert(offsetof(UMaterialExpressionTemporalSobol, ConstSeed) == 0x006C);
static_assert(offsetof(UMaterialExpressionTextureProperty, TextureObject) == 0x0040);
static_assert(offsetof(UMaterialExpressionTextureProperty, Property) == 0x0054);
static_assert(offsetof(UMaterialExpressionThinTranslucentMaterialOutput, TransmittanceColor) == 0x0040);
static_assert(offsetof(UMaterialExpressionTransform, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionTransform, TransformSourceType) == 0x0054);
static_assert(offsetof(UMaterialExpressionTransform, TransformType) == 0x0055);
static_assert(offsetof(UMaterialExpressionTransformPosition, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionTransformPosition, TransformSourceType) == 0x0054);
static_assert(offsetof(UMaterialExpressionTransformPosition, TransformType) == 0x0055);
static_assert(offsetof(UMaterialExpressionTruncate, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionVectorNoise, Position) == 0x0040);
static_assert(offsetof(UMaterialExpressionVectorNoise, NoiseFunction) == 0x0054);
static_assert(offsetof(UMaterialExpressionVertexInterpolator, Input) == 0x0040);
static_assert(offsetof(UMaterialExpressionViewProperty, Property) == 0x0040);
static_assert(offsetof(UMaterialExpressionVirtualTextureFeatureSwitch, No) == 0x0040);
static_assert(offsetof(UMaterialExpressionVirtualTextureFeatureSwitch, Yes) == 0x0054);
static_assert(offsetof(UMaterialExpressionVolumetricAdvancedMaterialOutput, PhaseG) == 0x0040);
static_assert(offsetof(UMaterialExpressionVolumetricAdvancedMaterialOutput, PhaseG2) == 0x0054);
static_assert(offsetof(UMaterialExpressionVolumetricAdvancedMaterialOutput, PhaseBlend) == 0x0068);
static_assert(offsetof(UMaterialExpressionVolumetricAdvancedMaterialOutput, MultiScatteringContribution) == 0x007C);
static_assert(offsetof(UMaterialExpressionVolumetricAdvancedMaterialOutput, MultiScatteringOcclusion) == 0x0090);
static_assert(offsetof(UMaterialExpressionVolumetricAdvancedMaterialOutput, MultiScatteringEccentricity) == 0x00A4);
static_assert(offsetof(UMaterialExpressionVolumetricAdvancedMaterialOutput, ConservativeDensity) == 0x00B8);
static_assert(offsetof(UMaterialExpressionWorldPosition, WorldPositionShaderOffset) == 0x0040);
static_assert(offsetof(UMaterialFunctionInterface, StateId) == 0x0028);
static_assert(offsetof(UMaterialFunctionInterface, MaterialFunctionUsage) == 0x0038);
static_assert(offsetof(UMaterialFunction, Description) == 0x0040);
static_assert(offsetof(UMaterialFunctionInstance, Parent) == 0x0040);
static_assert(offsetof(UMaterialFunctionInstance, Base) == 0x0048);
static_assert(offsetof(UMaterialFunctionInstance, ScalarParameterValues) == 0x0050);
static_assert(offsetof(UMaterialFunctionInstance, VectorParameterValues) == 0x0060);
static_assert(offsetof(UMaterialFunctionInstance, TextureParameterValues) == 0x0070);
static_assert(offsetof(UMaterialFunctionInstance, FontParameterValues) == 0x0080);
static_assert(offsetof(UMaterialFunctionInstance, StaticSwitchParameterValues) == 0x0090);
static_assert(offsetof(UMaterialFunctionInstance, StaticComponentMaskParameterValues) == 0x00A0);
static_assert(offsetof(UMaterialFunctionInstance, RuntimeVirtualTextureParameterValues) == 0x00B0);
static_assert(offsetof(AMaterialInstanceActor, TargetActors) == 0x0220);
static_assert(offsetof(FCollectionParameterBase, ParameterName) == 0x0000);
static_assert(offsetof(FCollectionParameterBase, ID) == 0x0008);
static_assert(offsetof(FCollectionVectorParameter, DefaultValue) == 0x0018);
static_assert(offsetof(UMaterialParameterCollection, StateId) == 0x0028);
static_assert(offsetof(UMaterialParameterCollection, ScalarParameters) == 0x0038);
static_assert(offsetof(UMaterialParameterCollection, VectorParameters) == 0x0048);
static_assert(offsetof(UMaterialParameterCollectionInstance, Collection) == 0x0030);
static_assert(offsetof(FInterpGroupActorInfo, ObjectName) == 0x0000);
static_assert(offsetof(FInterpGroupActorInfo, Actors) == 0x0008);
static_assert(offsetof(FCameraCutInfo, Location) == 0x0000);
static_assert(offsetof(AMatineeActor, MatineeData) == 0x0220);
static_assert(offsetof(AMatineeActor, MatineeControllerName) == 0x0228);
static_assert(offsetof(AMatineeActor, GroupActorInfos) == 0x0248);
static_assert(offsetof(AMatineeActor, GroupInst) == 0x0260);
static_assert(offsetof(AMatineeActor, CameraCuts) == 0x0270);
static_assert(offsetof(AMatineeActorCameraAnim, CameraAnim) == 0x02C8);
static_assert(offsetof(UMeshSimplificationSettings, MeshReductionModuleName) == 0x0038);
static_assert(offsetof(FPurchaseInfo, Identifier) == 0x0000);
static_assert(offsetof(FPurchaseInfo, DisplayName) == 0x0010);
static_assert(offsetof(FPurchaseInfo, DisplayDescription) == 0x0020);
static_assert(offsetof(FPurchaseInfo, DisplayPrice) == 0x0030);
static_assert(offsetof(UMicroTransactionBase, AvailableProducts) == 0x0038);
static_assert(offsetof(UMicroTransactionBase, LastError) == 0x0048);
static_assert(offsetof(UMicroTransactionBase, LastErrorSolution) == 0x0058);
static_assert(offsetof(UModelComponent, ModelBodySetup) == 0x0480);
static_assert(offsetof(UMorphTarget, BaseSkelMesh) == 0x0028);
static_assert(offsetof(UNavigationDataChunk, NavigationDataName) == 0x0028);
static_assert(offsetof(ANavigationObjectBase, CapsuleComponent) == 0x0228);
static_assert(offsetof(ANavigationObjectBase, GoodSprite) == 0x0230);
static_assert(offsetof(ANavigationObjectBase, BadSprite) == 0x0238);
static_assert(offsetof(UNavigationSystemConfig, NavigationSystemClass) == 0x0028);
static_assert(offsetof(UNavigationSystemConfig, SupportedAgentsMask) == 0x0040);
static_assert(offsetof(UNavigationSystemConfig, DefaultAgentName) == 0x0044);
static_assert(offsetof(FNavigationLinkBase, SupportedAgents) == 0x0014);
static_assert(offsetof(FNavigationLinkBase, Direction) == 0x001C);
static_assert(offsetof(FNavigationLinkBase, AreaClass) == 0x0020);
static_assert(offsetof(FNavigationLink, Left) == 0x0030);
static_assert(offsetof(FNavigationLink, Right) == 0x003C);
static_assert(offsetof(FNavigationSegmentLink, LeftStart) == 0x0030);
static_assert(offsetof(FNavigationSegmentLink, LeftEnd) == 0x003C);
static_assert(offsetof(FNavigationSegmentLink, RightStart) == 0x0048);
static_assert(offsetof(FNavigationSegmentLink, RightEnd) == 0x0054);
static_assert(offsetof(UNavLinkDefinition, Links) == 0x0028);
static_assert(offsetof(UNavLinkDefinition, SegmentLinks) == 0x0038);
static_assert(offsetof(FNetworkEmulationProfileDescription, ProfileName) == 0x0000);
static_assert(offsetof(FNetworkEmulationProfileDescription, Tooltip) == 0x0010);
static_assert(offsetof(UNetworkSettings, NetworkEmulationProfiles) == 0x0048);
static_assert(offsetof(FNodeItem, ParentName) == 0x0000);
static_assert(offsetof(FNodeItem, Transform) == 0x0010);
static_assert(offsetof(UNodeMappingContainer, SourceItems) == 0x0028);
static_assert(offsetof(UNodeMappingContainer, TargetItems) == 0x0078);
static_assert(offsetof(UNodeMappingContainer, SourceToTarget) == 0x00C8);
static_assert(offsetof(UNodeMappingContainer, SourceAsset) == 0x0118);
static_assert(offsetof(UNodeMappingContainer, TargetAsset) == 0x0140);
static_assert(offsetof(UObjectLibrary, ObjectBaseClass) == 0x0028);
static_assert(offsetof(UObjectLibrary, Objects) == 0x0038);
static_assert(offsetof(UObjectReferencer, ReferencedObjects) == 0x0028);
static_assert(offsetof(APainCausingVolume, DamageType) == 0x0270);
static_assert(offsetof(APainCausingVolume, DamageInstigator) == 0x0280);
static_assert(offsetof(UParticleEmitter, EmitterName) == 0x0028);
static_assert(offsetof(UParticleEmitter, EmitterRenderMode) == 0x0034);
static_assert(offsetof(UParticleEmitter, SignificanceLevel) == 0x0035);
static_assert(offsetof(UParticleEmitter, LODLevels) == 0x0040);
static_assert(offsetof(UParticleLODLevel, RequiredModule) == 0x0030);
static_assert(offsetof(UParticleLODLevel, Modules) == 0x0038);
static_assert(offsetof(UParticleLODLevel, TypeDataModule) == 0x0048);
static_assert(offsetof(UParticleLODLevel, SpawnModule) == 0x0050);
static_assert(offsetof(UParticleLODLevel, EventGenerator) == 0x0058);
static_assert(offsetof(UParticleLODLevel, SpawningModules) == 0x0060);
static_assert(offsetof(UParticleLODLevel, SpawnModules) == 0x0070);
static_assert(offsetof(UParticleLODLevel, UpdateModules) == 0x0080);
static_assert(offsetof(UParticleLODLevel, OrbitModules) == 0x0090);
static_assert(offsetof(UParticleLODLevel, EventReceiverModules) == 0x00A0);
static_assert(offsetof(FDistributionLookupTable, Values) == 0x0008);
static_assert(offsetof(FRawDistribution, Table) == 0x0000);
static_assert(offsetof(FRawDistributionVector, MinValueVec) == 0x0028);
static_assert(offsetof(FRawDistributionVector, MaxValueVec) == 0x0034);
static_assert(offsetof(FRawDistributionVector, Distribution) == 0x0040);
static_assert(offsetof(UParticleModuleAcceleration, Acceleration) == 0x0038);
static_assert(offsetof(UParticleModuleAccelerationConstant, Acceleration) == 0x0038);
static_assert(offsetof(FRawDistributionFloat, Distribution) == 0x0028);
static_assert(offsetof(UParticleModuleAccelerationDrag, DragCoefficient) == 0x0038);
static_assert(offsetof(UParticleModuleAccelerationDrag, DragCoefficientRaw) == 0x0040);
static_assert(offsetof(UParticleModuleAccelerationDragScaleOverLife, DragScale) == 0x0038);
static_assert(offsetof(UParticleModuleAccelerationDragScaleOverLife, DragScaleRaw) == 0x0040);
static_assert(offsetof(UParticleModuleAccelerationOverLifetime, AccelOverLife) == 0x0038);
static_assert(offsetof(UParticleModuleAttractorLine, EndPoint0) == 0x0030);
static_assert(offsetof(UParticleModuleAttractorLine, EndPoint1) == 0x003C);
static_assert(offsetof(UParticleModuleAttractorLine, Range) == 0x0048);
static_assert(offsetof(UParticleModuleAttractorLine, Strength) == 0x0078);
static_assert(offsetof(UParticleModuleAttractorParticle, EmitterName) == 0x0030);
static_assert(offsetof(UParticleModuleAttractorParticle, Range) == 0x0038);
static_assert(offsetof(UParticleModuleAttractorParticle, Strength) == 0x0070);
static_assert(offsetof(UParticleModuleAttractorParticle, SelectionMethod) == 0x00A4);
static_assert(offsetof(UParticleModuleAttractorPoint, Position) == 0x0030);
static_assert(offsetof(UParticleModuleAttractorPoint, Range) == 0x0078);
static_assert(offsetof(UParticleModuleAttractorPoint, Strength) == 0x00A8);
static_assert(offsetof(UParticleModuleAttractorPointGravity, Position) == 0x0030);
static_assert(offsetof(UParticleModuleAttractorPointGravity, Strength) == 0x0040);
static_assert(offsetof(UParticleModuleAttractorPointGravity, StrengthRaw) == 0x0048);
static_assert(offsetof(UParticleModuleBeamModifier, ModifierType) == 0x0030);
static_assert(offsetof(UParticleModuleBeamModifier, PositionOptions) == 0x0034);
static_assert(offsetof(UParticleModuleBeamModifier, Position) == 0x0038);
static_assert(offsetof(UParticleModuleBeamModifier, TangentOptions) == 0x0080);
static_assert(offsetof(UParticleModuleBeamModifier, Tangent) == 0x0088);
static_assert(offsetof(UParticleModuleBeamModifier, StrengthOptions) == 0x00D4);
static_assert(offsetof(UParticleModuleBeamModifier, Strength) == 0x00D8);
static_assert(offsetof(UParticleModuleBeamNoise, NoiseRange) == 0x0040);
static_assert(offsetof(UParticleModuleBeamNoise, NoiseRangeScale) == 0x0088);
static_assert(offsetof(UParticleModuleBeamNoise, NoiseSpeed) == 0x00C0);
static_assert(offsetof(UParticleModuleBeamNoise, NoiseTangentStrength) == 0x0120);
static_assert(offsetof(UParticleModuleBeamNoise, NoiseScale) == 0x0160);
static_assert(offsetof(UParticleModuleBeamSource, SourceMethod) == 0x0030);
static_assert(offsetof(UParticleModuleBeamSource, SourceName) == 0x0034);
static_assert(offsetof(UParticleModuleBeamSource, Source) == 0x0040);
static_assert(offsetof(UParticleModuleBeamSource, SourceTangentMethod) == 0x008C);
static_assert(offsetof(UParticleModuleBeamSource, SourceTangent) == 0x0090);
static_assert(offsetof(UParticleModuleBeamSource, SourceStrength) == 0x00E0);
static_assert(offsetof(UParticleModuleBeamTarget, TargetMethod) == 0x0030);
static_assert(offsetof(UParticleModuleBeamTarget, TargetName) == 0x0034);
static_assert(offsetof(UParticleModuleBeamTarget, Target) == 0x0040);
static_assert(offsetof(UParticleModuleBeamTarget, TargetTangentMethod) == 0x008C);
static_assert(offsetof(UParticleModuleBeamTarget, TargetTangent) == 0x0090);
static_assert(offsetof(UParticleModuleBeamTarget, TargetStrength) == 0x00E0);
static_assert(offsetof(UParticleModuleCameraOffset, CameraOffset) == 0x0030);
static_assert(offsetof(UParticleModuleCameraOffset, UpdateMethod) == 0x0064);
static_assert(offsetof(UParticleModuleCollision, DampingFactor) == 0x0030);
static_assert(offsetof(UParticleModuleCollision, DampingFactorRotation) == 0x0078);
static_assert(offsetof(UParticleModuleCollision, MaxCollisions) == 0x00C0);
static_assert(offsetof(UParticleModuleCollision, CollisionCompletionOption) == 0x00F0);
static_assert(offsetof(UParticleModuleCollision, ParticleMass) == 0x0118);
static_assert(offsetof(UParticleModuleCollision, DelayAmount) == 0x0158);
static_assert(offsetof(UParticleModuleCollisionGPU, Resilience) == 0x0030);
static_assert(offsetof(UParticleModuleCollisionGPU, ResilienceScaleOverLife) == 0x0060);
static_assert(offsetof(UParticleModuleCollisionGPU, Response) == 0x00A4);
static_assert(offsetof(UParticleModuleCollisionGPU, CollisionMode) == 0x00A5);
static_assert(offsetof(UParticleModuleColor, StartColor) == 0x0030);
static_assert(offsetof(UParticleModuleColor, StartAlpha) == 0x0078);
static_assert(offsetof(FParticleRandomSeedInfo, ParameterName) == 0x0000);
static_assert(offsetof(FParticleRandomSeedInfo, RandomSeeds) == 0x0010);
static_assert(offsetof(UParticleModuleColor_Seeded, RandomSeedInfo) == 0x00B0);
static_assert(offsetof(UParticleModuleColorOverLife, ColorOverLife) == 0x0030);
static_assert(offsetof(UParticleModuleColorOverLife, AlphaOverLife) == 0x0078);
static_assert(offsetof(UParticleModuleColorScaleOverLife, ColorScaleOverLife) == 0x0030);
static_assert(offsetof(UParticleModuleColorScaleOverLife, AlphaScaleOverLife) == 0x0078);
static_assert(offsetof(FParticleEvent_GenerateInfo, Type) == 0x0000);
static_assert(offsetof(FParticleEvent_GenerateInfo, CustomName) == 0x0010);
static_assert(offsetof(FParticleEvent_GenerateInfo, ParticleModuleEventsToSendToGame) == 0x0018);
static_assert(offsetof(UParticleModuleEventGenerator, Events) == 0x0030);
static_assert(offsetof(UParticleModuleEventReceiverBase, EventGeneratorType) == 0x0030);
static_assert(offsetof(UParticleModuleEventReceiverBase, EventName) == 0x0034);
static_assert(offsetof(UParticleModuleEventReceiverSpawn, SpawnCount) == 0x0040);
static_assert(offsetof(UParticleModuleEventReceiverSpawn, InheritVelocityScale) == 0x0078);
static_assert(offsetof(UParticleModuleEventReceiverSpawn, PhysicalMaterials) == 0x00C0);
static_assert(offsetof(UParticleModuleKillBox, LowerLeftCorner) == 0x0030);
static_assert(offsetof(UParticleModuleKillBox, UpperRightCorner) == 0x0078);
static_assert(offsetof(UParticleModuleKillHeight, Height) == 0x0030);
static_assert(offsetof(UParticleModuleLifetime, LifeTime) == 0x0030);
static_assert(offsetof(UParticleModuleLifetime_Seeded, RandomSeedInfo) == 0x0060);
static_assert(offsetof(UParticleModuleLight, ColorScaleOverLife) == 0x0038);
static_assert(offsetof(UParticleModuleLight, BrightnessOverLife) == 0x0080);
static_assert(offsetof(UParticleModuleLight, RadiusScale) == 0x00B0);
static_assert(offsetof(UParticleModuleLight, LightExponent) == 0x00E0);
static_assert(offsetof(UParticleModuleLight, LightingChannels) == 0x0110);
static_assert(offsetof(UParticleModuleLight_Seeded, RandomSeedInfo) == 0x0120);
static_assert(offsetof(UParticleModuleLocation, StartLocation) == 0x0030);
static_assert(offsetof(UParticleModuleLocation_Seeded, RandomSeedInfo) == 0x0080);
static_assert(offsetof(FLocationBoneSocketInfo, BoneSocketName) == 0x0000);
static_assert(offsetof(FLocationBoneSocketInfo, Offset) == 0x0008);
static_assert(offsetof(UParticleModuleLocationBoneSocket, SourceType) == 0x0030);
static_assert(offsetof(UParticleModuleLocationBoneSocket, UniversalOffset) == 0x0034);
static_assert(offsetof(UParticleModuleLocationBoneSocket, SourceLocations) == 0x0040);
static_assert(offsetof(UParticleModuleLocationBoneSocket, SelectionMethod) == 0x0050);
static_assert(offsetof(UParticleModuleLocationBoneSocket, SkelMeshActorParamName) == 0x005C);
static_assert(offsetof(UParticleModuleLocationDirect, Location) == 0x0030);
static_assert(offsetof(UParticleModuleLocationDirect, LocationOffset) == 0x0078);
static_assert(offsetof(UParticleModuleLocationDirect, ScaleFactor) == 0x00C0);
static_assert(offsetof(UParticleModuleLocationDirect, Direction) == 0x0108);
static_assert(offsetof(UParticleModuleLocationEmitter, EmitterName) == 0x0030);
static_assert(offsetof(UParticleModuleLocationEmitter, SelectionMethod) == 0x0038);
static_assert(offsetof(UParticleModuleLocationEmitterDirect, EmitterName) == 0x0030);
static_assert(offsetof(UParticleModuleLocationPrimitiveBase, VelocityScale) == 0x0038);
static_assert(offsetof(UParticleModuleLocationPrimitiveBase, StartLocation) == 0x0068);
static_assert(offsetof(UParticleModuleLocationPrimitiveCylinder, StartRadius) == 0x00B8);
static_assert(offsetof(UParticleModuleLocationPrimitiveCylinder, StartHeight) == 0x00E8);
static_assert(offsetof(UParticleModuleLocationPrimitiveCylinder, HeightAxis) == 0x0118);
static_assert(offsetof(UParticleModuleLocationPrimitiveCylinder_Seeded, RandomSeedInfo) == 0x0120);
static_assert(offsetof(UParticleModuleLocationPrimitiveSphere, StartRadius) == 0x00B0);
static_assert(offsetof(UParticleModuleLocationPrimitiveSphere_Seeded, RandomSeedInfo) == 0x00E0);
static_assert(offsetof(UParticleModuleLocationPrimitiveTriangle, StartOffset) == 0x0030);
static_assert(offsetof(UParticleModuleLocationPrimitiveTriangle, Height) == 0x0078);
static_assert(offsetof(UParticleModuleLocationPrimitiveTriangle, Angle) == 0x00A8);
static_assert(offsetof(UParticleModuleLocationPrimitiveTriangle, Thickness) == 0x00D8);
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, SourceType) == 0x0030);
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, UniversalOffset) == 0x0034);
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, SkelMeshActorParamName) == 0x0048);
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, ValidAssociatedBones) == 0x0050);
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, NormalToCompare) == 0x0064);
static_assert(offsetof(UParticleModuleLocationSkelVertSurface, ValidMaterialIndices) == 0x0078);
static_assert(offsetof(UParticleModuleLocationWorldOffset_Seeded, RandomSeedInfo) == 0x0080);
static_assert(offsetof(UParticleModuleMeshMaterial, MeshMaterials) == 0x0030);
static_assert(offsetof(UParticleModuleMeshRotation, StartRotation) == 0x0030);
static_assert(offsetof(UParticleModuleMeshRotation_Seeded, RandomSeedInfo) == 0x0080);
static_assert(offsetof(UParticleModuleMeshRotationRate, StartRotationRate) == 0x0030);
static_assert(offsetof(UParticleModuleMeshRotationRate_Seeded, RandomSeedInfo) == 0x0078);
static_assert(offsetof(UParticleModuleMeshRotationRateMultiplyLife, LifeMultiplier) == 0x0030);
static_assert(offsetof(UParticleModuleMeshRotationRateOverLife, RotRate) == 0x0030);
static_assert(offsetof(UParticleModuleOrbit, ChainMode) == 0x0038);
static_assert(offsetof(UParticleModuleOrbit, OffsetAmount) == 0x0040);
static_assert(offsetof(UParticleModuleOrbit, OffsetOptions) == 0x0088);
static_assert(offsetof(UParticleModuleOrbit, RotationAmount) == 0x0090);
static_assert(offsetof(UParticleModuleOrbit, RotationOptions) == 0x00D8);
static_assert(offsetof(UParticleModuleOrbit, RotationRateAmount) == 0x00E0);
static_assert(offsetof(UParticleModuleOrbit, RotationRateOptions) == 0x0128);
static_assert(offsetof(UParticleModuleOrientationAxisLock, LockAxisFlags) == 0x0030);
static_assert(offsetof(FEmitterDynamicParameter, ParamName) == 0x0000);
static_assert(offsetof(FEmitterDynamicParameter, ValueMethod) == 0x000C);
static_assert(offsetof(FEmitterDynamicParameter, ParamValue) == 0x0018);
static_assert(offsetof(UParticleModuleParameterDynamic, DynamicParams) == 0x0030);
static_assert(offsetof(UParticleModuleParameterDynamic_Seeded, RandomSeedInfo) == 0x0048);
static_assert(offsetof(UParticleModulePivotOffset, PivotOffset) == 0x0030);
static_assert(offsetof(UParticleModuleRequired, Material) == 0x0030);
static_assert(offsetof(UParticleModuleRequired, EmitterOrigin) == 0x0040);
static_assert(offsetof(UParticleModuleRequired, EmitterRotation) == 0x004C);
static_assert(offsetof(UParticleModuleRequired, ScreenAlignment) == 0x0058);
static_assert(offsetof(UParticleModuleRequired, SortMode) == 0x005A);
static_assert(offsetof(UParticleModuleRequired, SpawnRate) == 0x0060);
static_assert(offsetof(UParticleModuleRequired, BurstList) == 0x0090);
static_assert(offsetof(UParticleModuleRequired, InterpolationMethod) == 0x00A9);
static_assert(offsetof(UParticleModuleRequired, ParticleBurstMethod) == 0x00AB);
static_assert(offsetof(UParticleModuleRequired, OpacitySourceMode) == 0x00AD);
static_assert(offsetof(UParticleModuleRequired, EmitterNormalsMode) == 0x00AE);
static_assert(offsetof(UParticleModuleRequired, MacroUVPosition) == 0x00C0);
static_assert(offsetof(UParticleModuleRequired, UVFlippingMode) == 0x00D0);
static_assert(offsetof(UParticleModuleRequired, BoundingMode) == 0x00D1);
static_assert(offsetof(UParticleModuleRequired, NormalsSphereCenter) == 0x00D4);
static_assert(offsetof(UParticleModuleRequired, CutoutTexture) == 0x00E8);
static_assert(offsetof(UParticleModuleRequired, NormalsCylinderDirection) == 0x00F8);
static_assert(offsetof(UParticleModuleRequired, NamedMaterialOverrides) == 0x0108);
static_assert(offsetof(UParticleModuleRotation, StartRotation) == 0x0030);
static_assert(offsetof(UParticleModuleRotation_Seeded, RandomSeedInfo) == 0x0060);
static_assert(offsetof(UParticleModuleRotationOverLifetime, RotationOverLife) == 0x0030);
static_assert(offsetof(UParticleModuleRotationRate, StartRotationRate) == 0x0030);
static_assert(offsetof(UParticleModuleRotationRate_Seeded, RandomSeedInfo) == 0x0060);
static_assert(offsetof(UParticleModuleRotationRateMultiplyLife, LifeMultiplier) == 0x0030);
static_assert(offsetof(UParticleModuleSize, StartSize) == 0x0030);
static_assert(offsetof(UParticleModuleSize_Seeded, RandomSeedInfo) == 0x0078);
static_assert(offsetof(UParticleModuleSizeMultiplyLife, LifeMultiplier) == 0x0030);
static_assert(offsetof(UParticleModuleSizeScale, SizeScale) == 0x0030);
static_assert(offsetof(UParticleModuleSizeScaleBySpeed, SpeedScale) == 0x0030);
static_assert(offsetof(UParticleModuleSizeScaleBySpeed, MaxScale) == 0x0038);
static_assert(offsetof(UParticleModuleSourceMovement, SourceMovementScale) == 0x0030);
static_assert(offsetof(UParticleModuleSpawn, Rate) == 0x0038);
static_assert(offsetof(UParticleModuleSpawn, RateScale) == 0x0068);
static_assert(offsetof(UParticleModuleSpawn, ParticleBurstMethod) == 0x0098);
static_assert(offsetof(UParticleModuleSpawn, BurstList) == 0x00A0);
static_assert(offsetof(UParticleModuleSpawn, BurstScale) == 0x00B0);
static_assert(offsetof(UParticleModuleSpawnPerUnit, SpawnPerUnit) == 0x0040);
static_assert(offsetof(UParticleModuleSubUV, Animation) == 0x0030);
static_assert(offsetof(UParticleModuleSubUV, SubImageIndex) == 0x0038);
static_assert(offsetof(UParticleModuleSubUVMovie, FrameRate) == 0x0078);
static_assert(offsetof(UParticleModuleTrailSource, SourceMethod) == 0x0030);
static_assert(offsetof(UParticleModuleTrailSource, SourceName) == 0x0034);
static_assert(offsetof(UParticleModuleTrailSource, SourceStrength) == 0x0040);
static_assert(offsetof(UParticleModuleTrailSource, SourceOffsetDefaults) == 0x0078);
static_assert(offsetof(UParticleModuleTrailSource, SelectionMethod) == 0x0088);
static_assert(offsetof(UParticleModuleTypeDataBeam2, BeamMethod) == 0x0030);
static_assert(offsetof(UParticleModuleTypeDataBeam2, BranchParentName) == 0x0054);
static_assert(offsetof(UParticleModuleTypeDataBeam2, Distance) == 0x0060);
static_assert(offsetof(UParticleModuleTypeDataBeam2, TaperMethod) == 0x0090);
static_assert(offsetof(UParticleModuleTypeDataBeam2, TaperFactor) == 0x0098);
static_assert(offsetof(UParticleModuleTypeDataBeam2, TaperScale) == 0x00C8);
static_assert(offsetof(FGPUSpriteLocalVectorFieldInfo, Field) == 0x0000);
static_assert(offsetof(FGPUSpriteLocalVectorFieldInfo, Transform) == 0x0010);
static_assert(offsetof(FGPUSpriteLocalVectorFieldInfo, MinInitialRotation) == 0x0040);
static_assert(offsetof(FGPUSpriteLocalVectorFieldInfo, MaxInitialRotation) == 0x004C);
static_assert(offsetof(FGPUSpriteLocalVectorFieldInfo, RotationRate) == 0x0058);
static_assert(offsetof(FFloatDistribution, Table) == 0x0000);
static_assert(offsetof(FGPUSpriteEmitterInfo, RequiredModule) == 0x0000);
static_assert(offsetof(FGPUSpriteEmitterInfo, SpawnModule) == 0x0008);
static_assert(offsetof(FGPUSpriteEmitterInfo, SpawnPerUnitModule) == 0x0010);
static_assert(offsetof(FGPUSpriteEmitterInfo, SpawnModules) == 0x0018);
static_assert(offsetof(FGPUSpriteEmitterInfo, LocalVectorField) == 0x0030);
static_assert(offsetof(FGPUSpriteEmitterInfo, VectorFieldScale) == 0x00A0);
static_assert(offsetof(FGPUSpriteEmitterInfo, DragCoefficient) == 0x00C0);
static_assert(offsetof(FGPUSpriteEmitterInfo, PointAttractorStrength) == 0x00E0);
static_assert(offsetof(FGPUSpriteEmitterInfo, Resilience) == 0x0100);
static_assert(offsetof(FGPUSpriteEmitterInfo, ConstantAcceleration) == 0x0120);
static_assert(offsetof(FGPUSpriteEmitterInfo, PointAttractorPosition) == 0x012C);
static_assert(offsetof(FGPUSpriteEmitterInfo, OrbitOffsetBase) == 0x013C);
static_assert(offsetof(FGPUSpriteEmitterInfo, OrbitOffsetRange) == 0x0148);
static_assert(offsetof(FGPUSpriteEmitterInfo, InvMaxSize) == 0x0154);
static_assert(offsetof(FGPUSpriteEmitterInfo, ScreenAlignment) == 0x0168);
static_assert(offsetof(FGPUSpriteEmitterInfo, LockAxisFlag) == 0x0169);
static_assert(offsetof(FGPUSpriteEmitterInfo, CollisionMode) == 0x0170);
static_assert(offsetof(FGPUSpriteEmitterInfo, DynamicColor) == 0x0180);
static_assert(offsetof(FGPUSpriteEmitterInfo, DynamicAlpha) == 0x01C8);
static_assert(offsetof(FGPUSpriteEmitterInfo, DynamicColorScale) == 0x01F8);
static_assert(offsetof(FGPUSpriteEmitterInfo, DynamicAlphaScale) == 0x0240);
static_assert(offsetof(FGPUSpriteResourceData, QuantizedColorSamples) == 0x0000);
static_assert(offsetof(FGPUSpriteResourceData, QuantizedMiscSamples) == 0x0010);
static_assert(offsetof(FGPUSpriteResourceData, QuantizedSimulationAttrSamples) == 0x0020);
static_assert(offsetof(FGPUSpriteResourceData, ColorScale) == 0x0030);
static_assert(offsetof(FGPUSpriteResourceData, ColorBias) == 0x0040);
static_assert(offsetof(FGPUSpriteResourceData, MiscScale) == 0x0050);
static_assert(offsetof(FGPUSpriteResourceData, MiscBias) == 0x0060);
static_assert(offsetof(FGPUSpriteResourceData, SimulationAttrCurveScale) == 0x0070);
static_assert(offsetof(FGPUSpriteResourceData, SimulationAttrCurveBias) == 0x0080);
static_assert(offsetof(FGPUSpriteResourceData, SubImageSize) == 0x0090);
static_assert(offsetof(FGPUSpriteResourceData, SizeBySpeed) == 0x00A0);
static_assert(offsetof(FGPUSpriteResourceData, ConstantAcceleration) == 0x00B0);
static_assert(offsetof(FGPUSpriteResourceData, OrbitOffsetBase) == 0x00BC);
static_assert(offsetof(FGPUSpriteResourceData, OrbitOffsetRange) == 0x00C8);
static_assert(offsetof(FGPUSpriteResourceData, OrbitFrequencyBase) == 0x00D4);
static_assert(offsetof(FGPUSpriteResourceData, OrbitFrequencyRange) == 0x00E0);
static_assert(offsetof(FGPUSpriteResourceData, OrbitPhaseBase) == 0x00EC);
static_assert(offsetof(FGPUSpriteResourceData, OrbitPhaseRange) == 0x00F8);
static_assert(offsetof(FGPUSpriteResourceData, ScreenAlignment) == 0x0144);
static_assert(offsetof(FGPUSpriteResourceData, LockAxisFlag) == 0x0145);
static_assert(offsetof(FGPUSpriteResourceData, PivotOffset) == 0x0148);
static_assert(offsetof(UParticleModuleTypeDataGpu, EmitterInfo) == 0x0030);
static_assert(offsetof(UParticleModuleTypeDataGpu, ResourceData) == 0x02B0);
static_assert(offsetof(UParticleModuleTypeDataMesh, Mesh) == 0x0030);
static_assert(offsetof(UParticleModuleTypeDataMesh, MeshAlignment) == 0x0045);
static_assert(offsetof(UParticleModuleTypeDataMesh, RollPitchYawRange) == 0x0048);
static_assert(offsetof(UParticleModuleTypeDataMesh, AxisLockOption) == 0x0090);
static_assert(offsetof(UParticleModuleTypeDataMesh, CameraFacingUpAxisOption) == 0x0092);
static_assert(offsetof(UParticleModuleTypeDataMesh, CameraFacingOption) == 0x0093);
static_assert(offsetof(UParticleModuleTypeDataRibbon, RenderAxis) == 0x0044);
static_assert(offsetof(UParticleModuleVectorFieldLocal, VectorField) == 0x0030);
static_assert(offsetof(UParticleModuleVectorFieldLocal, RelativeTranslation) == 0x0038);
static_assert(offsetof(UParticleModuleVectorFieldLocal, RelativeRotation) == 0x0044);
static_assert(offsetof(UParticleModuleVectorFieldLocal, RelativeScale3D) == 0x0050);
static_assert(offsetof(UParticleModuleVectorFieldRotation, MinInitialRotation) == 0x0030);
static_assert(offsetof(UParticleModuleVectorFieldRotation, MaxInitialRotation) == 0x003C);
static_assert(offsetof(UParticleModuleVectorFieldRotationRate, RotationRate) == 0x0030);
static_assert(offsetof(UParticleModuleVectorFieldScale, VectorFieldScale) == 0x0030);
static_assert(offsetof(UParticleModuleVectorFieldScale, VectorFieldScaleRaw) == 0x0038);
static_assert(offsetof(UParticleModuleVectorFieldScaleOverLife, VectorFieldScaleOverLife) == 0x0030);
static_assert(offsetof(UParticleModuleVectorFieldScaleOverLife, VectorFieldScaleOverLifeRaw) == 0x0038);
static_assert(offsetof(UParticleModuleVelocity, StartVelocity) == 0x0038);
static_assert(offsetof(UParticleModuleVelocity, StartVelocityRadial) == 0x0080);
static_assert(offsetof(UParticleModuleVelocity_Seeded, RandomSeedInfo) == 0x00B0);
static_assert(offsetof(UParticleModuleVelocityCone, Angle) == 0x0038);
static_assert(offsetof(UParticleModuleVelocityCone, Velocity) == 0x0068);
static_assert(offsetof(UParticleModuleVelocityCone, Direction) == 0x0098);
static_assert(offsetof(UParticleModuleVelocityInheritParent, Scale) == 0x0038);
static_assert(offsetof(UParticleModuleVelocityOverLifetime, VelOverLife) == 0x0038);
static_assert(offsetof(FLODSoloTrack, SoloEnableSetting) == 0x0000);
static_assert(offsetof(FNamedEmitterMaterial, Name) == 0x0000);
static_assert(offsetof(FNamedEmitterMaterial, Material) == 0x0008);
static_assert(offsetof(UParticleSystem, Emitters) == 0x0040);
static_assert(offsetof(UParticleSystem, PreviewComponent) == 0x0050);
static_assert(offsetof(UParticleSystem, CurveEdSetup) == 0x0058);
static_assert(offsetof(UParticleSystem, LODDistances) == 0x0068);
static_assert(offsetof(UParticleSystem, LODSettings) == 0x0078);
static_assert(offsetof(UParticleSystem, FixedRelativeBoundingBox) == 0x0088);
static_assert(offsetof(UParticleSystem, SystemUpdateMode) == 0x00B2);
static_assert(offsetof(UParticleSystem, LODMethod) == 0x00B3);
static_assert(offsetof(UParticleSystem, InsignificantReaction) == 0x00B4);
static_assert(offsetof(UParticleSystem, OcclusionBoundsMethod) == 0x00B5);
static_assert(offsetof(UParticleSystem, MaxSignificanceLevel) == 0x00B7);
static_assert(offsetof(UParticleSystem, MacroUVPosition) == 0x00C0);
static_assert(offsetof(UParticleSystem, CustomOcclusionBounds) == 0x00CC);
static_assert(offsetof(UParticleSystem, SoloTracking) == 0x00E8);
static_assert(offsetof(UParticleSystem, NamedMaterialSlots) == 0x00F8);
static_assert(offsetof(UPawnNoiseEmitterComponent, LastRemoteNoisePosition) == 0x00B4);
static_assert(offsetof(UPhysicalAnimationComponent, SkeletalMeshComponent) == 0x00B8);
static_assert(offsetof(UPhysicalMaterialMask, AddressX) == 0x002C);
static_assert(offsetof(UPhysicalMaterialMask, AddressY) == 0x002D);
static_assert(offsetof(UPhysicsAsset, BoundsBodies) == 0x0030);
static_assert(offsetof(UPhysicsAsset, SkeletalBodySetups) == 0x0040);
static_assert(offsetof(UPhysicsAsset, ConstraintSetup) == 0x0050);
static_assert(offsetof(UPhysicsAsset, SolverIterations) == 0x0060);
static_assert(offsetof(UPhysicsAsset, ThumbnailInfo) == 0x0120);
static_assert(offsetof(UPhysicsAsset, BodySetup) == 0x0128);
static_assert(offsetof(FPhysicalAnimationData, BodyName) == 0x0000);
static_assert(offsetof(FPhysicalAnimationProfile, ProfileName) == 0x0000);
static_assert(offsetof(FPhysicalAnimationProfile, PhysicalAnimationData) == 0x0008);
static_assert(offsetof(USkeletalBodySetup, PhysicalAnimationData) == 0x02A8);
static_assert(offsetof(UPhysicsCollisionHandler, DefaultImpactSound) == 0x0030);
static_assert(offsetof(APhysicsConstraintActor, ConstraintComp) == 0x0220);
static_assert(offsetof(APhysicsConstraintActor, ConstraintActor1) == 0x0228);
static_assert(offsetof(APhysicsConstraintActor, ConstraintActor2) == 0x0230);
static_assert(offsetof(FConstrainComponentPropName, ComponentName) == 0x0000);
static_assert(offsetof(FLinearConstraint, XMotion) == 0x0018);
static_assert(offsetof(FLinearConstraint, YMotion) == 0x0019);
static_assert(offsetof(FLinearConstraint, ZMotion) == 0x001A);
static_assert(offsetof(FConeConstraint, Swing1Motion) == 0x001C);
static_assert(offsetof(FConeConstraint, Swing2Motion) == 0x001D);
static_assert(offsetof(FTwistConstraint, TwistMotion) == 0x0018);
static_assert(offsetof(FLinearDriveConstraint, PositionTarget) == 0x0000);
static_assert(offsetof(FLinearDriveConstraint, VelocityTarget) == 0x000C);
static_assert(offsetof(FLinearDriveConstraint, XDrive) == 0x0018);
static_assert(offsetof(FLinearDriveConstraint, YDrive) == 0x0028);
static_assert(offsetof(FLinearDriveConstraint, ZDrive) == 0x0038);
static_assert(offsetof(FAngularDriveConstraint, TwistDrive) == 0x0000);
static_assert(offsetof(FAngularDriveConstraint, SwingDrive) == 0x0010);
static_assert(offsetof(FAngularDriveConstraint, SlerpDrive) == 0x0020);
static_assert(offsetof(FAngularDriveConstraint, OrientationTarget) == 0x0030);
static_assert(offsetof(FAngularDriveConstraint, AngularVelocityTarget) == 0x003C);
static_assert(offsetof(FAngularDriveConstraint, AngularDriveMode) == 0x0048);
static_assert(offsetof(FConstraintProfileProperties, LinearLimit) == 0x0018);
static_assert(offsetof(FConstraintProfileProperties, ConeLimit) == 0x0034);
static_assert(offsetof(FConstraintProfileProperties, TwistLimit) == 0x0054);
static_assert(offsetof(FConstraintProfileProperties, LinearDrive) == 0x0070);
static_assert(offsetof(FConstraintProfileProperties, AngularDrive) == 0x00BC);
static_assert(offsetof(FConstraintInstance, JointName) == 0x0018);
static_assert(offsetof(FConstraintInstance, ConstraintBone1) == 0x0020);
static_assert(offsetof(FConstraintInstance, ConstraintBone2) == 0x0028);
static_assert(offsetof(FConstraintInstance, Pos1) == 0x0030);
static_assert(offsetof(FConstraintInstance, PriAxis1) == 0x003C);
static_assert(offsetof(FConstraintInstance, SecAxis1) == 0x0048);
static_assert(offsetof(FConstraintInstance, Pos2) == 0x0054);
static_assert(offsetof(FConstraintInstance, PriAxis2) == 0x0060);
static_assert(offsetof(FConstraintInstance, SecAxis2) == 0x006C);
static_assert(offsetof(FConstraintInstance, AngularRotationOffset) == 0x0078);
static_assert(offsetof(FConstraintInstance, ProfileInstance) == 0x008C);
static_assert(offsetof(UPhysicsConstraintComponent, ConstraintActor1) == 0x01F8);
static_assert(offsetof(UPhysicsConstraintComponent, ComponentName1) == 0x0200);
static_assert(offsetof(UPhysicsConstraintComponent, ConstraintActor2) == 0x0208);
static_assert(offsetof(UPhysicsConstraintComponent, ComponentName2) == 0x0210);
static_assert(offsetof(UPhysicsConstraintComponent, ConstraintSetup) == 0x0228);
static_assert(offsetof(UPhysicsConstraintComponent, ConstraintInstance) == 0x0240);
static_assert(offsetof(FPhysicsConstraintProfileHandle, ProfileProperties) == 0x0000);
static_assert(offsetof(FPhysicsConstraintProfileHandle, ProfileName) == 0x010C);
static_assert(offsetof(UPhysicsConstraintTemplate, DefaultInstance) == 0x0028);
static_assert(offsetof(UPhysicsConstraintTemplate, ProfileHandles) == 0x01E8);
static_assert(offsetof(UPhysicsConstraintTemplate, DefaultProfile) == 0x01F8);
static_assert(offsetof(UPhysicsHandleComponent, GrabbedComponent) == 0x00B0);
static_assert(offsetof(FPhysicalSurfaceName, Type) == 0x0000);
static_assert(offsetof(FPhysicalSurfaceName, Name) == 0x0004);
static_assert(offsetof(FBroadphaseSettings, MBPBounds) == 0x0004);
static_assert(offsetof(FBroadphaseSettings, MBPOuterBounds) == 0x0020);
static_assert(offsetof(FChaosPhysicsSettings, DefaultThreadingModel) == 0x0000);
static_assert(offsetof(FChaosPhysicsSettings, DedicatedThreadTickMode) == 0x0001);
static_assert(offsetof(FChaosPhysicsSettings, DedicatedThreadBufferMode) == 0x0002);
static_assert(offsetof(UPhysicsSettings, PhysicErrorCorrection) == 0x00E0);
static_assert(offsetof(UPhysicsSettings, LockedAxis) == 0x0114);
static_assert(offsetof(UPhysicsSettings, DefaultDegreesOfFreedom) == 0x0115);
static_assert(offsetof(UPhysicsSettings, PhysicalSurfaces) == 0x0148);
static_assert(offsetof(UPhysicsSettings, DefaultBroadphaseSettings) == 0x0158);
static_assert(offsetof(UPhysicsSettings, ChaosSettings) == 0x019C);
static_assert(offsetof(UPhysicsSpringComponent, SpringChannel) == 0x0208);
static_assert(offsetof(APhysicsThruster, ThrusterComponent) == 0x0220);
static_assert(offsetof(ASceneCapture, MeshComp) == 0x0220);
static_assert(offsetof(ASceneCapture, SceneComponent) == 0x0228);
static_assert(offsetof(APlanarReflection, PlanarReflectionComponent) == 0x0230);
static_assert(offsetof(UPlanarReflectionComponent, PreviewBox) == 0x02B0);
static_assert(offsetof(UPlaneReflectionCaptureComponent, PreviewInfluenceRadius) == 0x0280);
static_assert(offsetof(UPlaneReflectionCaptureComponent, PreviewCaptureBox) == 0x0288);
static_assert(offsetof(UPlatformInterfaceWebResponse, OriginalURL) == 0x0028);
static_assert(offsetof(UPlatformInterfaceWebResponse, StringResponse) == 0x0040);
static_assert(offsetof(UPlatformInterfaceWebResponse, BinaryResponse) == 0x0050);
static_assert(offsetof(FMinimalViewInfo, Location) == 0x0000);
static_assert(offsetof(FMinimalViewInfo, Rotation) == 0x000C);
static_assert(offsetof(FMinimalViewInfo, ProjectionMode) == 0x0034);
static_assert(offsetof(FMinimalViewInfo, PostProcessSettings) == 0x0040);
static_assert(offsetof(FMinimalViewInfo, OffCenterProjectionOffset) == 0x0590);
static_assert(offsetof(FCameraCacheEntry, POV) == 0x0010);
static_assert(offsetof(FTViewTarget, Target) == 0x0000);
static_assert(offsetof(FTViewTarget, POV) == 0x0010);
static_assert(offsetof(FTViewTarget, PlayerState) == 0x05F0);
static_assert(offsetof(APlayerCameraManager, PCOwner) == 0x0220);
static_assert(offsetof(APlayerCameraManager, TransformComponent) == 0x0228);
static_assert(offsetof(APlayerCameraManager, CameraCache) == 0x0290);
static_assert(offsetof(APlayerCameraManager, LastFrameCameraCache) == 0x0880);
static_assert(offsetof(APlayerCameraManager, ViewTarget) == 0x0E70);
static_assert(offsetof(APlayerCameraManager, PendingViewTarget) == 0x1470);
static_assert(offsetof(APlayerCameraManager, CameraCachePrivate) == 0x1AA0);
static_assert(offsetof(APlayerCameraManager, LastFrameCameraCachePrivate) == 0x2090);
static_assert(offsetof(APlayerCameraManager, ModifierList) == 0x2680);
static_assert(offsetof(APlayerCameraManager, DefaultModifiers) == 0x2690);
static_assert(offsetof(APlayerCameraManager, FreeCamOffset) == 0x26A4);
static_assert(offsetof(APlayerCameraManager, ViewTargetOffset) == 0x26B0);
static_assert(offsetof(APlayerCameraManager, CameraLensEffects) == 0x26E0);
static_assert(offsetof(APlayerCameraManager, CachedCameraShakeMod) == 0x26F0);
static_assert(offsetof(APlayerCameraManager, AnimInstPool) == 0x26F8);
static_assert(offsetof(APlayerCameraManager, PostProcessBlendCache) == 0x2738);
static_assert(offsetof(APlayerCameraManager, ActiveAnims) == 0x2758);
static_assert(offsetof(APlayerCameraManager, FreeAnims) == 0x2768);
static_assert(offsetof(APlayerCameraManager, AnimCameraActor) == 0x2778);
static_assert(offsetof(FKeyBind, Key) == 0x0000);
static_assert(offsetof(FKeyBind, Command) == 0x0018);
static_assert(offsetof(UPlayerInput, DebugExecBindings) == 0x0120);
static_assert(offsetof(UPlayerInput, InvertedAxis) == 0x0160);
static_assert(offsetof(APlayerStart, PlayerStartTag) == 0x0248);
static_assert(offsetof(APlayerState, EngineMessageClass) == 0x0230);
static_assert(offsetof(APlayerState, SavedNetworkAddress) == 0x0240);
static_assert(offsetof(APlayerState, UniqueId) == 0x0250);
static_assert(offsetof(APlayerState, PawnPrivate) == 0x0280);
static_assert(offsetof(APlayerState, PlayerNamePrivate) == 0x0300);
static_assert(offsetof(APointLight, PointLightComponent) == 0x0230);
static_assert(offsetof(FPoseData, LocalSpacePose) == 0x0000);
static_assert(offsetof(FPoseData, TrackToBufferIndex) == 0x0010);
static_assert(offsetof(FPoseData, CurveData) == 0x0060);
static_assert(offsetof(FPoseDataContainer, PoseNames) == 0x0000);
static_assert(offsetof(FPoseDataContainer, Tracks) == 0x0010);
static_assert(offsetof(FPoseDataContainer, TrackMap) == 0x0020);
static_assert(offsetof(FPoseDataContainer, Poses) == 0x0070);
static_assert(offsetof(FPoseDataContainer, Curves) == 0x0080);
static_assert(offsetof(UPoseAsset, PoseContainer) == 0x0080);
static_assert(offsetof(UPoseAsset, RetargetSource) == 0x0118);
static_assert(offsetof(UPoseWatch, Node) == 0x0028);
static_assert(offsetof(UPoseWatch, PoseWatchColour) == 0x0030);
static_assert(offsetof(UPostProcessComponent, Settings) == 0x0200);
static_assert(offsetof(APostProcessVolume, Settings) == 0x0260);
static_assert(offsetof(APrecomputedVisibilityOverrideVolume, OverrideVisibleActors) == 0x0258);
static_assert(offsetof(APrecomputedVisibilityOverrideVolume, OverrideInvisibleActors) == 0x0268);
static_assert(offsetof(APrecomputedVisibilityOverrideVolume, OverrideInvisibleLevels) == 0x0278);
static_assert(offsetof(FPreviewMeshCollectionEntry, SkeletalMesh) == 0x0000);
static_assert(offsetof(UPreviewMeshCollection, Skeleton) == 0x0038);
static_assert(offsetof(UPreviewMeshCollection, SkeletalMeshes) == 0x0040);
static_assert(offsetof(FCollectionReference, CollectionName) == 0x0000);
static_assert(offsetof(UPrimaryAssetLabel, Describe) == 0x0030);
static_assert(offsetof(UPrimaryAssetLabel, CollectDependencieOptions) == 0x0039);
static_assert(offsetof(UPrimaryAssetLabel, Rules) == 0x0040);
static_assert(offsetof(UPrimaryAssetLabel, DirectoriesToAlwaysCook) == 0x0050);
static_assert(offsetof(UPrimaryAssetLabel, IgnoreAssets) == 0x0060);
static_assert(offsetof(UPrimaryAssetLabel, IgnoreExplicitAssets) == 0x0088);
static_assert(offsetof(UPrimaryAssetLabel, AssetCollection) == 0x00A8);
static_assert(offsetof(UProjectileMovementComponent, PreviousHitNormal) == 0x0100);
static_assert(offsetof(UProjectileMovementComponent, HomingTargetComponent) == 0x014C);
static_assert(offsetof(UProxyLODMeshSimplificationSettings, ProxyLODMeshReductionModuleName) == 0x0038);
static_assert(offsetof(ARadialForceActor, ForceComponent) == 0x0220);
static_assert(offsetof(URadialForceComponent, Falloff) == 0x01FC);
static_assert(offsetof(ARectLight, RectLightComponent) == 0x0230);
static_assert(offsetof(URectLightComponent, SourceTexture) == 0x0350);
static_assert(offsetof(URendererSettings, MobileMSAASampleCount) == 0x0040);
static_assert(offsetof(URendererSettings, TranslucentSortPolicy) == 0x0078);
static_assert(offsetof(URendererSettings, TranslucentSortAxis) == 0x007C);
static_assert(offsetof(URendererSettings, CustomDepthStencil) == 0x0088);
static_assert(offsetof(URendererSettings, bEnableAlphaChannelInPostProcessing) == 0x0090);
static_assert(offsetof(URendererSettings, DefaultFeatureAutoExposure) == 0x0098);
static_assert(offsetof(URendererSettings, DefaultFeatureAntiAliasing) == 0x00A4);
static_assert(offsetof(URendererSettings, DefaultLightUnits) == 0x00A5);
static_assert(offsetof(URendererSettings, DefaultBackBufferPixelFormat) == 0x00A6);
static_assert(offsetof(URendererSettings, EarlyZPass) == 0x00AC);
static_assert(offsetof(URendererSettings, ClearSceneMethod) == 0x00B4);
static_assert(offsetof(URendererSettings, GBufferFormat) == 0x00C8);
static_assert(offsetof(URendererSettings, DefaultSkinCacheBehavior) == 0x00D8);
static_assert(offsetof(URendererSettings, MobilePlanarReflectionMode) == 0x00F0);
static_assert(offsetof(URendererSettings, bStreamSkeletalMeshLODs) == 0x00F1);
static_assert(offsetof(URendererSettings, bDiscardSkeletalMeshOptionalLODs) == 0x00F2);
static_assert(offsetof(URendererSettings, VisualizeCalibrationColorMaterialPath) == 0x00F8);
static_assert(offsetof(URendererSettings, VisualizeCalibrationCustomMaterialPath) == 0x0110);
static_assert(offsetof(URendererSettings, VisualizeCalibrationGrayscaleMaterialPath) == 0x0128);
static_assert(offsetof(FRigTransformConstraint, TranformType) == 0x0000);
static_assert(offsetof(FRigTransformConstraint, ParentSpace) == 0x0004);
static_assert(offsetof(FTransformBaseConstraint, TransformConstraints) == 0x0000);
static_assert(offsetof(FTransformBase, Node) == 0x0000);
static_assert(offsetof(FTransformBase, Constraints) == 0x0008);
static_assert(offsetof(FNode, Name) == 0x0000);
static_assert(offsetof(FNode, ParentName) == 0x0008);
static_assert(offsetof(FNode, Transform) == 0x0010);
static_assert(offsetof(FNode, DisplayName) == 0x0040);
static_assert(offsetof(URig, TransformBases) == 0x0030);
static_assert(offsetof(URig, Nodes) == 0x0040);
static_assert(offsetof(URotatingMovementComponent, RotationRate) == 0x00F0);
static_assert(offsetof(URotatingMovementComponent, PivotTranslation) == 0x00FC);
static_assert(offsetof(URuntimeVirtualTexture, MaterialType) == 0x0034);
static_assert(offsetof(URuntimeVirtualTexture, LODGroup) == 0x0040);
static_assert(offsetof(URuntimeVirtualTexture, StreamingTexture) == 0x0048);
static_assert(offsetof(URuntimeVirtualTextureComponent, BoundsAlignActor) == 0x01F8);
static_assert(offsetof(URuntimeVirtualTextureComponent, VirtualTexture) == 0x0228);
static_assert(offsetof(URuntimeVirtualTextureComponent, StreamingTexture) == 0x0240);
static_assert(offsetof(ARuntimeVirtualTextureVolume, VirtualTextureComponent) == 0x0220);
static_assert(offsetof(ASceneCapture2D, CaptureComponent2D) == 0x0230);
static_assert(offsetof(USceneCaptureComponentCube, TextureTarget) == 0x02B0);
static_assert(offsetof(USceneCaptureComponentCube, TextureTargetLeft) == 0x02C0);
static_assert(offsetof(USceneCaptureComponentCube, TextureTargetRight) == 0x02C8);
static_assert(offsetof(USceneCaptureComponentCube, TextureTargetODS) == 0x02D0);
static_assert(offsetof(ASceneCaptureCube, CaptureComponentCube) == 0x0230);
static_assert(offsetof(FBPVariableMetaDataEntry, DataKey) == 0x0000);
static_assert(offsetof(FBPVariableMetaDataEntry, DataValue) == 0x0008);
static_assert(offsetof(USCS_Node, ComponentClass) == 0x0028);
static_assert(offsetof(USCS_Node, ComponentTemplate) == 0x0030);
static_assert(offsetof(USCS_Node, CookedComponentInstancingData) == 0x0038);
static_assert(offsetof(USCS_Node, AttachToName) == 0x0080);
static_assert(offsetof(USCS_Node, ParentComponentOrVariableName) == 0x0088);
static_assert(offsetof(USCS_Node, ParentComponentOwnerClassName) == 0x0090);
static_assert(offsetof(USCS_Node, ChildNodes) == 0x00A0);
static_assert(offsetof(USCS_Node, MetaDataArray) == 0x00B0);
static_assert(offsetof(USCS_Node, VariableGuid) == 0x00C0);
static_assert(offsetof(USCS_Node, InternalVariableName) == 0x00D0);
static_assert(offsetof(UShadowMapTexture2D, ShadowmapFlags) == 0x0100);
static_assert(offsetof(USimpleConstructionScript, RootNodes) == 0x0028);
static_assert(offsetof(USimpleConstructionScript, AllNodes) == 0x0038);
static_assert(offsetof(USimpleConstructionScript, DefaultSceneRootNode) == 0x0048);
static_assert(offsetof(ASkeletalMeshActor, SkeletalMeshComponent) == 0x0230);
static_assert(offsetof(ASkeletalMeshActor, ReplicatedMesh) == 0x0238);
static_assert(offsetof(ASkeletalMeshActor, ReplicatedPhysAsset) == 0x0240);
static_assert(offsetof(ASkeletalMeshActor, ReplicatedMaterial0) == 0x0248);
static_assert(offsetof(ASkeletalMeshActor, ReplicatedMaterial1) == 0x0250);
static_assert(offsetof(FBoneFilter, BoneName) == 0x0004);
static_assert(offsetof(FSkeletalMeshLODGroupSettings, ScreenSize) == 0x0000);
static_assert(offsetof(FSkeletalMeshLODGroupSettings, BoneFilterActionOption) == 0x0008);
static_assert(offsetof(FSkeletalMeshLODGroupSettings, BoneList) == 0x0010);
static_assert(offsetof(FSkeletalMeshLODGroupSettings, BonesToPrioritize) == 0x0020);
static_assert(offsetof(FSkeletalMeshLODGroupSettings, BakePose) == 0x0038);
static_assert(offsetof(FSkeletalMeshLODGroupSettings, ReductionSettings) == 0x0040);
static_assert(offsetof(USkeletalMeshLODSettings, MinLOD) == 0x0030);
static_assert(offsetof(USkeletalMeshLODSettings, DisableBelowMinLodStripping) == 0x0034);
static_assert(offsetof(USkeletalMeshLODSettings, bSupportLODStreaming) == 0x0036);
static_assert(offsetof(USkeletalMeshLODSettings, MaxNumStreamedLODs) == 0x0038);
static_assert(offsetof(USkeletalMeshLODSettings, MaxNumOptionalLODs) == 0x003C);
static_assert(offsetof(USkeletalMeshLODSettings, LODGroups) == 0x0040);
static_assert(offsetof(USkeletalMeshSimplificationSettings, SkeletalMeshReductionModuleName) == 0x0038);
static_assert(offsetof(USkeletalMeshSocket, SocketName) == 0x0028);
static_assert(offsetof(USkeletalMeshSocket, BoneName) == 0x0030);
static_assert(offsetof(USkeletalMeshSocket, RelativeLocation) == 0x0038);
static_assert(offsetof(USkeletalMeshSocket, RelativeRotation) == 0x0044);
static_assert(offsetof(USkeletalMeshSocket, RelativeScale) == 0x0050);
static_assert(offsetof(USkyAtmosphereComponent, TransformMode) == 0x01F8);
static_assert(offsetof(USkyAtmosphereComponent, GroundAlbedo) == 0x0200);
static_assert(offsetof(USkyAtmosphereComponent, RayleighScattering) == 0x0214);
static_assert(offsetof(USkyAtmosphereComponent, MieScattering) == 0x022C);
static_assert(offsetof(USkyAtmosphereComponent, MieAbsorption) == 0x0240);
static_assert(offsetof(USkyAtmosphereComponent, OtherAbsorption) == 0x025C);
static_assert(offsetof(USkyAtmosphereComponent, OtherTentDistribution) == 0x026C);
static_assert(offsetof(USkyAtmosphereComponent, SkyLuminanceFactor) == 0x0278);
static_assert(offsetof(USkyAtmosphereComponent, bStaticLightingBuiltGUID) == 0x02BC);
static_assert(offsetof(ASkyAtmosphere, SkyAtmosphereComponent) == 0x0220);
static_assert(offsetof(USkyLightComponent, SourceType) == 0x0229);
static_assert(offsetof(USkyLightComponent, Cubemap) == 0x0230);
static_assert(offsetof(USkyLightComponent, LowerHemisphereColor) == 0x0248);
static_assert(offsetof(USkyLightComponent, OcclusionTint) == 0x0268);
static_assert(offsetof(USkyLightComponent, OcclusionCombineMode) == 0x0280);
static_assert(offsetof(USkyLightComponent, BlendDestinationCubemap) == 0x0338);
static_assert(offsetof(USlateBrushAsset, Brush) == 0x0030);
static_assert(offsetof(USoundAttenuation, Attenuation) == 0x0028);
static_assert(offsetof(FSoundClassProperties, ModulationSettings) == 0x0030);
static_assert(offsetof(FSoundClassProperties, OutputTarget) == 0x0070);
static_assert(offsetof(FSoundClassProperties, LoadingBehavior) == 0x0071);
static_assert(offsetof(FSoundClassProperties, DefaultSubmix) == 0x0078);
static_assert(offsetof(FPassiveSoundMixModifier, SoundMix) == 0x0000);
static_assert(offsetof(USoundClass, Properties) == 0x0028);
static_assert(offsetof(USoundClass, ChildClasses) == 0x00A8);
static_assert(offsetof(USoundClass, PassiveSoundMixModifiers) == 0x00B8);
static_assert(offsetof(USoundClass, ParentClass) == 0x00C8);
static_assert(offsetof(USoundConcurrency, Concurrency) == 0x0028);
static_assert(offsetof(USoundCue, FirstNode) == 0x01C0);
static_assert(offsetof(USoundCue, AttenuationOverrides) == 0x01D0);
static_assert(offsetof(FSourceEffectChainEntry, Preset) == 0x0000);
static_assert(offsetof(USoundEffectSourcePresetChain, Chain) == 0x0028);
static_assert(offsetof(FSoundGroup, SoundGroup) == 0x0000);
static_assert(offsetof(FSoundGroup, DisplayName) == 0x0008);
static_assert(offsetof(USoundGroups, SoundGroupProfiles) == 0x0028);
static_assert(offsetof(FSoundClassAdjuster, SoundClassObject) == 0x0000);
static_assert(offsetof(USoundMix, EQSettings) == 0x0030);
static_assert(offsetof(USoundMix, SoundClassEffects) == 0x0070);
static_assert(offsetof(USoundNode, ChildNodes) == 0x0028);
static_assert(offsetof(USoundNodeAttenuation, AttenuationSettings) == 0x0048);
static_assert(offsetof(USoundNodeAttenuation, AttenuationOverrides) == 0x0050);
static_assert(offsetof(USoundNodeBranch, BoolParameterName) == 0x0048);
static_assert(offsetof(USoundNodeConcatenator, InputVolume) == 0x0048);
static_assert(offsetof(FDialogueWaveParameter, DialogueWave) == 0x0000);
static_assert(offsetof(FDialogueWaveParameter, Context) == 0x0008);
static_assert(offsetof(USoundNodeDialoguePlayer, DialogueWaveParameter) == 0x0048);
static_assert(offsetof(USoundNodeDistanceCrossFade, CrossFadeInput) == 0x0048);
static_assert(offsetof(USoundNodeEnveloper, VolumeInterpCurve) == 0x0060);
static_assert(offsetof(USoundNodeEnveloper, PitchInterpCurve) == 0x0068);
static_assert(offsetof(USoundNodeEnveloper, VolumeCurve) == 0x0070);
static_assert(offsetof(USoundNodeEnveloper, PitchCurve) == 0x00F8);
static_assert(offsetof(USoundNodeGroupControl, GroupSizes) == 0x0048);
static_assert(offsetof(USoundNodeMixer, InputVolume) == 0x0048);
static_assert(offsetof(FModulatorContinuousParams, ParameterName) == 0x0000);
static_assert(offsetof(FModulatorContinuousParams, ParamMode) == 0x001C);
static_assert(offsetof(USoundNodeModulatorContinuous, PitchModulationParams) == 0x0048);
static_assert(offsetof(USoundNodeModulatorContinuous, VolumeModulationParams) == 0x0068);
static_assert(offsetof(USoundNodeParamCrossFade, ParamName) == 0x0058);
static_assert(offsetof(USoundNodeRandom, Weights) == 0x0048);
static_assert(offsetof(USoundNodeRandom, HasBeenUsed) == 0x0058);
static_assert(offsetof(USoundNodeSoundClass, SoundClassOverride) == 0x0048);
static_assert(offsetof(USoundNodeSwitch, IntParameterName) == 0x0048);
static_assert(offsetof(USoundNodeWaveParam, WaveParameterName) == 0x0048);
static_assert(offsetof(USoundNodeWavePlayer, SoundWaveAssetPtr) == 0x0048);
static_assert(offsetof(USoundNodeWavePlayer, SoundWave) == 0x0070);
static_assert(offsetof(USoundSourceBus, SourceBusChannels) == 0x0370);
static_assert(offsetof(USoundSourceBus, AudioBus) == 0x0378);
static_assert(offsetof(USoundSubmixBase, ChildSubmixes) == 0x0028);
static_assert(offsetof(USoundSubmixWithParentBase, ParentSubmix) == 0x0038);
static_assert(offsetof(USoundSubmix, SubmixEffectChain) == 0x0048);
static_assert(offsetof(USoundSubmix, AmbisonicsPluginSettings) == 0x0058);
static_assert(offsetof(USoundSubmix, GainMode) == 0x0068);
static_assert(offsetof(USoundfieldSubmix, SoundfieldEncodingFormat) == 0x0040);
static_assert(offsetof(USoundfieldSubmix, EncodingSettings) == 0x0048);
static_assert(offsetof(USoundfieldSubmix, SoundfieldEffectChain) == 0x0050);
static_assert(offsetof(USoundfieldSubmix, EncodingSettingsClass) == 0x0060);
static_assert(offsetof(UEndpointSubmix, EndpointType) == 0x0038);
static_assert(offsetof(UEndpointSubmix, EndpointSettingsClass) == 0x0040);
static_assert(offsetof(UEndpointSubmix, EndpointSettings) == 0x0048);
static_assert(offsetof(USoundfieldEndpointSubmix, SoundfieldEndpointType) == 0x0038);
static_assert(offsetof(USoundfieldEndpointSubmix, EndpointSettingsClass) == 0x0040);
static_assert(offsetof(USoundfieldEndpointSubmix, EndpointSettings) == 0x0048);
static_assert(offsetof(USoundfieldEndpointSubmix, EncodingSettingsClass) == 0x0050);
static_assert(offsetof(USoundfieldEndpointSubmix, EncodingSettings) == 0x0058);
static_assert(offsetof(USoundfieldEndpointSubmix, SoundfieldEffectChain) == 0x0060);
static_assert(offsetof(ASphereReflectionCapture, DrawCaptureRadius) == 0x0228);
static_assert(offsetof(USphereReflectionCaptureComponent, PreviewInfluenceRadius) == 0x0280);
static_assert(offsetof(ASplineMeshActor, SplineMeshComponent) == 0x0220);
static_assert(offsetof(FSplineMeshParams, StartPos) == 0x0000);
static_assert(offsetof(FSplineMeshParams, StartTangent) == 0x000C);
static_assert(offsetof(FSplineMeshParams, StartScale) == 0x0018);
static_assert(offsetof(FSplineMeshParams, StartOffset) == 0x0024);
static_assert(offsetof(FSplineMeshParams, EndPos) == 0x002C);
static_assert(offsetof(FSplineMeshParams, EndScale) == 0x0038);
static_assert(offsetof(FSplineMeshParams, EndTangent) == 0x0040);
static_assert(offsetof(FSplineMeshParams, EndOffset) == 0x0050);
static_assert(offsetof(USplineMeshComponent, SplineParams) == 0x0500);
static_assert(offsetof(USplineMeshComponent, SplineUpDir) == 0x0558);
static_assert(offsetof(USplineMeshComponent, CachedMeshBodySetupGuid) == 0x0568);
static_assert(offsetof(USplineMeshComponent, BodySetup) == 0x0578);
static_assert(offsetof(USplineMeshComponent, ForwardAxis) == 0x0585);
static_assert(offsetof(FStaticMaterial, MaterialInterface) == 0x0000);
static_assert(offsetof(FStaticMaterial, MaterialSlotName) == 0x0008);
static_assert(offsetof(FStaticMaterial, ImportedMaterialSlotName) == 0x0010);
static_assert(offsetof(FStaticMaterial, UVChannelData) == 0x0018);
static_assert(offsetof(UStaticMesh, MinLOD) == 0x0080);
static_assert(offsetof(UStaticMesh, StaticMaterials) == 0x0088);
static_assert(offsetof(UStaticMesh, BodySetup) == 0x00A8);
static_assert(offsetof(UStaticMesh, Sockets) == 0x00D8);
static_assert(offsetof(UStaticMesh, PositiveBoundsExtension) == 0x00F8);
static_assert(offsetof(UStaticMesh, NegativeBoundsExtension) == 0x0104);
static_assert(offsetof(UStaticMesh, ExtendedBounds) == 0x0110);
static_assert(offsetof(UStaticMesh, AssetUserData) == 0x0130);
static_assert(offsetof(UStaticMesh, EditableMesh) == 0x0140);
static_assert(offsetof(UStaticMesh, NavCollision) == 0x0148);
static_assert(offsetof(UStaticMeshSocket, SocketName) == 0x0028);
static_assert(offsetof(UStaticMeshSocket, RelativeLocation) == 0x0030);
static_assert(offsetof(UStaticMeshSocket, RelativeRotation) == 0x003C);
static_assert(offsetof(UStaticMeshSocket, RelativeScale) == 0x0048);
static_assert(offsetof(UStaticMeshSocket, Tag) == 0x0058);
static_assert(offsetof(UStereoLayerShapeEquirect, LeftUVRect) == 0x0028);
static_assert(offsetof(UStereoLayerShapeEquirect, RightUVRect) == 0x003C);
static_assert(offsetof(UStereoLayerShapeEquirect, LeftScale) == 0x0050);
static_assert(offsetof(UStereoLayerShapeEquirect, RightScale) == 0x0058);
static_assert(offsetof(UStereoLayerShapeEquirect, LeftBias) == 0x0060);
static_assert(offsetof(UStereoLayerShapeEquirect, RightBias) == 0x0068);
static_assert(offsetof(FEquirectProps, LeftUVRect) == 0x0000);
static_assert(offsetof(FEquirectProps, RightUVRect) == 0x0014);
static_assert(offsetof(FEquirectProps, LeftScale) == 0x0028);
static_assert(offsetof(FEquirectProps, RightScale) == 0x0030);
static_assert(offsetof(FEquirectProps, LeftBias) == 0x0038);
static_assert(offsetof(FEquirectProps, RightBias) == 0x0040);
static_assert(offsetof(UStereoLayerComponent, Texture) == 0x0200);
static_assert(offsetof(UStereoLayerComponent, LeftTexture) == 0x0208);
static_assert(offsetof(UStereoLayerComponent, QuadSize) == 0x0214);
static_assert(offsetof(UStereoLayerComponent, UVRect) == 0x021C);
static_assert(offsetof(UStereoLayerComponent, EquirectProps) == 0x023C);
static_assert(offsetof(UStereoLayerComponent, StereoLayerType) == 0x0284);
static_assert(offsetof(UStereoLayerComponent, StereoLayerShape) == 0x0285);
static_assert(offsetof(UStereoLayerComponent, Shape) == 0x0288);
static_assert(offsetof(FSubsurfaceProfileStruct, SurfaceAlbedo) == 0x0000);
static_assert(offsetof(FSubsurfaceProfileStruct, MeanFreePathColor) == 0x0010);
static_assert(offsetof(FSubsurfaceProfileStruct, SubsurfaceColor) == 0x0030);
static_assert(offsetof(FSubsurfaceProfileStruct, FalloffColor) == 0x0040);
static_assert(offsetof(FSubsurfaceProfileStruct, BoundaryColorBleed) == 0x0050);
static_assert(offsetof(FSubsurfaceProfileStruct, TransmissionTintColor) == 0x007C);
static_assert(offsetof(USubsurfaceProfile, Settings) == 0x0028);
static_assert(offsetof(USubUVAnimation, SubUVTexture) == 0x0028);
static_assert(offsetof(USubUVAnimation, BoundingMode) == 0x0038);
static_assert(offsetof(USubUVAnimation, OpacitySourceMode) == 0x0039);
static_assert(offsetof(USystemTimeTimecodeProvider, FrameRate) == 0x0030);
static_assert(offsetof(UTextPropertyTestObject, DefaultedText) == 0x0028);
static_assert(offsetof(UTextPropertyTestObject, UndefaultedText) == 0x0040);
static_assert(offsetof(UTextPropertyTestObject, TransientText) == 0x0058);
static_assert(offsetof(ATextRenderActor, TextRender) == 0x0220);
static_assert(offsetof(UTexture2DArray, AddressX) == 0x0130);
static_assert(offsetof(UTexture2DArray, AddressY) == 0x0131);
static_assert(offsetof(UTexture2DArray, AddressZ) == 0x0132);
static_assert(offsetof(UTexture2DDynamic, Format) == 0x00E0);
static_assert(offsetof(UTextureRenderTarget2DArray, ClearColor) == 0x00EC);
static_assert(offsetof(UTextureRenderTarget2DArray, OverrideFormat) == 0x00FC);
static_assert(offsetof(UTextureRenderTargetCube, ClearColor) == 0x00E4);
static_assert(offsetof(UTextureRenderTargetCube, OverrideFormat) == 0x00F4);
static_assert(offsetof(UTextureRenderTargetVolume, ClearColor) == 0x00EC);
static_assert(offsetof(UTextureRenderTargetVolume, OverrideFormat) == 0x00FC);
static_assert(offsetof(FTimelineVectorTrack, VectorCurve) == 0x0000);
static_assert(offsetof(FTimelineVectorTrack, TrackName) == 0x0018);
static_assert(offsetof(FTimelineVectorTrack, VectorPropertyName) == 0x0020);
static_assert(offsetof(FTimelineFloatTrack, FloatCurve) == 0x0000);
static_assert(offsetof(FTimelineFloatTrack, TrackName) == 0x0018);
static_assert(offsetof(FTimelineFloatTrack, FloatPropertyName) == 0x0020);
static_assert(offsetof(FTimelineLinearColorTrack, LinearColorCurve) == 0x0000);
static_assert(offsetof(FTimelineLinearColorTrack, TrackName) == 0x0018);
static_assert(offsetof(FTimelineLinearColorTrack, LinearColorPropertyName) == 0x0020);
static_assert(offsetof(FTimeline, LengthMode) == 0x0000);
static_assert(offsetof(FTimeline, Events) == 0x0010);
static_assert(offsetof(FTimeline, InterpVectors) == 0x0020);
static_assert(offsetof(FTimeline, InterpFloats) == 0x0030);
static_assert(offsetof(FTimeline, InterpLinearColors) == 0x0040);
static_assert(offsetof(FTimeline, PropertySetObject) == 0x0070);
static_assert(offsetof(FTimeline, DirectionPropertyName) == 0x0078);
static_assert(offsetof(UTimelineComponent, TheTimeline) == 0x00B0);
static_assert(offsetof(FTTTrackBase, TrackName) == 0x0008);
static_assert(offsetof(FTTEventTrack, FunctionName) == 0x0018);
static_assert(offsetof(FTTEventTrack, CurveKeys) == 0x0020);
static_assert(offsetof(FTTPropertyTrack, PropertyName) == 0x0018);
static_assert(offsetof(FTTFloatTrack, CurveFloat) == 0x0020);
static_assert(offsetof(FTTVectorTrack, CurveVector) == 0x0020);
static_assert(offsetof(FTTLinearColorTrack, CurveLinearColor) == 0x0020);
static_assert(offsetof(UTimelineTemplate, LengthMode) == 0x002C);
static_assert(offsetof(UTimelineTemplate, EventTracks) == 0x0030);
static_assert(offsetof(UTimelineTemplate, FloatTracks) == 0x0040);
static_assert(offsetof(UTimelineTemplate, VectorTracks) == 0x0050);
static_assert(offsetof(UTimelineTemplate, LinearColorTracks) == 0x0060);
static_assert(offsetof(UTimelineTemplate, MetaDataArray) == 0x0070);
static_assert(offsetof(UTimelineTemplate, TimelineGuid) == 0x0080);
static_assert(offsetof(UTimelineTemplate, VariableName) == 0x0090);
static_assert(offsetof(UTimelineTemplate, DirectionPropertyName) == 0x0098);
static_assert(offsetof(UTimelineTemplate, UpdateFunctionName) == 0x00A0);
static_assert(offsetof(UTimelineTemplate, FinishedFunctionName) == 0x00A8);
static_assert(offsetof(UUserDefinedEnum, DisplayNameMap) == 0x0060);
static_assert(offsetof(UUserDefinedStruct, status) == 0x00C0);
static_assert(offsetof(UUserDefinedStruct, Guid) == 0x00C4);
static_assert(offsetof(FHardwareCursorReference, CursorPath) == 0x0000);
static_assert(offsetof(FHardwareCursorReference, HotSpot) == 0x0008);
static_assert(offsetof(UUserInterfaceSettings, RenderFocusRule) == 0x0038);
static_assert(offsetof(UUserInterfaceSettings, DefaultCursor) == 0x00E8);
static_assert(offsetof(UUserInterfaceSettings, TextEditBeamCursor) == 0x0100);
static_assert(offsetof(UUserInterfaceSettings, CrosshairsCursor) == 0x0118);
static_assert(offsetof(UUserInterfaceSettings, HandCursor) == 0x0130);
static_assert(offsetof(UUserInterfaceSettings, GrabHandCursor) == 0x0148);
static_assert(offsetof(UUserInterfaceSettings, GrabHandClosedCursor) == 0x0160);
static_assert(offsetof(UUserInterfaceSettings, SlashedCircleCursor) == 0x0178);
static_assert(offsetof(UUserInterfaceSettings, UIScaleRule) == 0x0194);
static_assert(offsetof(UUserInterfaceSettings, CustomScalingRuleClass) == 0x0198);
static_assert(offsetof(UUserInterfaceSettings, UIScaleCurve) == 0x01B0);
static_assert(offsetof(UUserInterfaceSettings, DesignScreenSize) == 0x023C);
static_assert(offsetof(UUserInterfaceSettings, CursorClasses) == 0x0248);
static_assert(offsetof(UUserInterfaceSettings, CustomScalingRuleClassInstance) == 0x0258);
static_assert(offsetof(UUserInterfaceSettings, CustomScalingRule) == 0x0260);
static_assert(offsetof(UVectorField, Bounds) == 0x0028);
static_assert(offsetof(UVectorFieldAnimated, Texture) == 0x0048);
static_assert(offsetof(UVectorFieldAnimated, ConstructionOp) == 0x0050);
static_assert(offsetof(UVectorFieldAnimated, NoiseField) == 0x0078);
static_assert(offsetof(UVectorFieldComponent, VectorField) == 0x0468);
static_assert(offsetof(AVectorFieldVolume, VectorFieldComponent) == 0x0220);
static_assert(offsetof(UVirtualTexture2D, Settings) == 0x0100);
static_assert(offsetof(UVirtualTextureBuilder, Texture) == 0x0028);
static_assert(offsetof(UVirtualTexturePoolConfig, Pools) == 0x0030);
static_assert(offsetof(FVoiceSettings, ComponentToAttachTo) == 0x0000);
static_assert(offsetof(FVoiceSettings, AttenuationSettings) == 0x0008);
static_assert(offsetof(FVoiceSettings, SourceEffectChain) == 0x0010);
static_assert(offsetof(UVOIPTalker, Settings) == 0x00B0);
static_assert(offsetof(UVolumetricCloudComponent, GroundAlbedo) == 0x020C);
static_assert(offsetof(UVolumetricCloudComponent, Material) == 0x0210);
static_assert(offsetof(AVolumetricCloud, VolumetricCloudComponent) == 0x0220);
static_assert(offsetof(AVolumetricLightmapDensityVolume, AllowedMipLevelRange) == 0x0258);
static_assert(offsetof(AWindDirectionalSource, Component) == 0x0220);
static_assert(offsetof(UWorldComposition, TilesStreaming) == 0x0048);
static_assert(offsetof(FMaterialProxySettings, TextureSize) == 0x0000);
static_assert(offsetof(FMaterialProxySettings, TextureSizingType) == 0x0028);
static_assert(offsetof(FMaterialProxySettings, MaterialMergeType) == 0x0029);
static_assert(offsetof(FMaterialProxySettings, BlendMode) == 0x002A);
static_assert(offsetof(FMaterialProxySettings, DiffuseTextureSize) == 0x0030);
static_assert(offsetof(FMaterialProxySettings, NormalTextureSize) == 0x0038);
static_assert(offsetof(FMaterialProxySettings, TangentTextureSize) == 0x0040);
static_assert(offsetof(FMaterialProxySettings, MetallicTextureSize) == 0x0048);
static_assert(offsetof(FMaterialProxySettings, RoughnessTextureSize) == 0x0050);
static_assert(offsetof(FMaterialProxySettings, AnisotropyTextureSize) == 0x0058);
static_assert(offsetof(FMaterialProxySettings, SpecularTextureSize) == 0x0060);
static_assert(offsetof(FMaterialProxySettings, EmissiveTextureSize) == 0x0068);
static_assert(offsetof(FMaterialProxySettings, OpacityTextureSize) == 0x0070);
static_assert(offsetof(FMaterialProxySettings, OpacityMaskTextureSize) == 0x0078);
static_assert(offsetof(FMaterialProxySettings, AmbientOcclusionTextureSize) == 0x0080);
static_assert(offsetof(FMeshProxySettings, MaterialSettings) == 0x0008);
static_assert(offsetof(FMeshProxySettings, UnresolvedGeometryColor) == 0x0094);
static_assert(offsetof(FMeshProxySettings, NormalCalculationMethod) == 0x00A4);
static_assert(offsetof(FMeshProxySettings, LandscapeCullingPrecision) == 0x00A5);
static_assert(offsetof(FMeshMergingSettings, OutputUVs) == 0x0004);
static_assert(offsetof(FMeshMergingSettings, MaterialSettings) == 0x000C);
static_assert(offsetof(FMeshMergingSettings, LODSelectionType) == 0x009C);
static_assert(offsetof(FHierarchicalSimplification, ProxySetting) == 0x000C);
static_assert(offsetof(FHierarchicalSimplification, MergeSetting) == 0x00B4);
static_assert(offsetof(UHierarchicalLODSetup, HierarchicalLODSetup) == 0x0028);
static_assert(offsetof(UHierarchicalLODSetup, OverrideBaseMaterial) == 0x0038);
static_assert(offsetof(FNetViewer, Connection) == 0x0000);
static_assert(offsetof(FNetViewer, InViewer) == 0x0008);
static_assert(offsetof(FNetViewer, ViewTarget) == 0x0010);
static_assert(offsetof(FNetViewer, ViewLocation) == 0x0018);
static_assert(offsetof(FNetViewer, ViewDir) == 0x0024);
static_assert(offsetof(AWorldSettings, VisibilityAggressiveness) == 0x022C);
static_assert(offsetof(AWorldSettings, NavigationSystemConfig) == 0x0230);
static_assert(offsetof(AWorldSettings, NavigationSystemConfigOverride) == 0x0238);
static_assert(offsetof(AWorldSettings, KillZDamageType) == 0x0248);
static_assert(offsetof(AWorldSettings, DefaultPhysicsVolumeClass) == 0x0258);
static_assert(offsetof(AWorldSettings, PhysicsCollisionHandlerClass) == 0x0260);
static_assert(offsetof(AWorldSettings, DefaultGameMode) == 0x0268);
static_assert(offsetof(AWorldSettings, GameNetworkManagerClass) == 0x0270);
static_assert(offsetof(AWorldSettings, DefaultColorScale) == 0x027C);
static_assert(offsetof(AWorldSettings, DefaultReverbSettings) == 0x0298);
static_assert(offsetof(AWorldSettings, DefaultAmbientZoneSettings) == 0x02B8);
static_assert(offsetof(AWorldSettings, DefaultBaseSoundMix) == 0x02E0);
static_assert(offsetof(AWorldSettings, BroadphaseSettings) == 0x0304);
static_assert(offsetof(AWorldSettings, Pauser) == 0x0348);
static_assert(offsetof(AWorldSettings, ReplicationViewers) == 0x0350);
static_assert(offsetof(AWorldSettings, AssetUserData) == 0x0360);
static_assert(offsetof(AWorldSettings, PauserPlayerState) == 0x0370);
static_assert(offsetof(AWorldSettings, DefaultBookmarkClass) == 0x0380);
static_assert(offsetof(AWorldSettings, BookmarkArray) == 0x0388);
static_assert(offsetof(AWorldSettings, LastBookmarkClass) == 0x0398);
static_assert(offsetof(FVectorDistribution, Table) == 0x0000);
static_assert(offsetof(FVector4Distribution, Table) == 0x0000);
static_assert(offsetof(FFormatArgumentData, ArgumentName) == 0x0000);
static_assert(offsetof(FFormatArgumentData, ArgumentValueType) == 0x0010);
static_assert(offsetof(FFormatArgumentData, ArgumentValue) == 0x0018);
static_assert(offsetof(FFormatArgumentData, ArgumentValueGender) == 0x0038);
static_assert(offsetof(FExpressionOutput, OutputName) == 0x0000);
static_assert(offsetof(FPlatformInterfaceData, DataName) == 0x0000);
static_assert(offsetof(FPlatformInterfaceData, Type) == 0x0008);
static_assert(offsetof(FPlatformInterfaceData, StringValue) == 0x0018);
static_assert(offsetof(FPlatformInterfaceData, ObjectValue) == 0x0028);
static_assert(offsetof(FPlatformInterfaceDelegateResult, Data) == 0x0008);
static_assert(offsetof(FDebugFloatHistory, Samples) == 0x0000);
static_assert(offsetof(FLatentActionInfo, ExecutionFunction) == 0x0008);
static_assert(offsetof(FLatentActionInfo, CallbackTarget) == 0x0010);
static_assert(offsetof(FCollisionProfileName, Name) == 0x0000);
static_assert(offsetof(FUserActivity, ActionName) == 0x0000);
static_assert(offsetof(FAnimNode_CustomProperty, SourcePropertyNames) == 0x0010);
static_assert(offsetof(FAnimNode_CustomProperty, DestPropertyNames) == 0x0020);
static_assert(offsetof(FAnimNode_CustomProperty, TargetInstance) == 0x0030);
static_assert(offsetof(FInputScaleBiasClamp, InRange) == 0x0004);
static_assert(offsetof(FInputScaleBiasClamp, OutRange) == 0x000C);
static_assert(offsetof(FInputAlphaBoolBlend, BlendOption) == 0x0008);
static_assert(offsetof(FInputAlphaBoolBlend, CustomCurve) == 0x0010);
static_assert(offsetof(FInputAlphaBoolBlend, AlphaBlend) == 0x0018);
static_assert(offsetof(FComponentReference, OtherActor) == 0x0000);
static_assert(offsetof(FComponentReference, ComponentProperty) == 0x0008);
static_assert(offsetof(FComponentReference, PathToComponent) == 0x0010);
static_assert(offsetof(FAnimNode_AssetPlayerBase, GroupName) == 0x0010);
static_assert(offsetof(FAnimNode_AssetPlayerBase, GroupRole) == 0x0018);
static_assert(offsetof(FAnimNode_AssetPlayerBase, GroupScope) == 0x0019);
static_assert(offsetof(FPoseSnapshot, LocalTransforms) == 0x0000);
static_assert(offsetof(FPoseSnapshot, BoneNames) == 0x0010);
static_assert(offsetof(FPoseSnapshot, SkeletalMeshName) == 0x0020);
static_assert(offsetof(FPoseSnapshot, SnapshotName) == 0x0028);
static_assert(offsetof(FAnimNode_Root, Result) == 0x0010);
static_assert(offsetof(FAnimNode_Root, Name) == 0x0020);
static_assert(offsetof(FAnimNode_Root, Group) == 0x0028);
static_assert(offsetof(FAnimCurveParam, Name) == 0x0000);
static_assert(offsetof(FActorComponentInstanceData, SourceComponentTemplate) == 0x0008);
static_assert(offsetof(FActorComponentInstanceData, SourceComponentCreationMethod) == 0x0010);
static_assert(offsetof(FActorComponentInstanceData, SavedProperties) == 0x0018);
static_assert(offsetof(FActorComponentInstanceData, UniqueTransientPackage) == 0x0028);
static_assert(offsetof(FActorComponentInstanceData, DuplicatedObjects) == 0x0038);
static_assert(offsetof(FActorComponentInstanceData, ReferencedObjects) == 0x0048);
static_assert(offsetof(FActorComponentInstanceData, ReferencedNames) == 0x0058);
static_assert(offsetof(FSceneComponentInstanceData, AttachedInstanceComponents) == 0x0068);
static_assert(offsetof(FAnimationGroupReference, GroupName) == 0x0000);
static_assert(offsetof(FAnimationGroupReference, GroupRole) == 0x0008);
static_assert(offsetof(FAnimationGroupReference, GroupScope) == 0x0009);
static_assert(offsetof(FAnimTickRecord, SourceAsset) == 0x0000);
static_assert(offsetof(FMarkerSyncAnimPosition, PreviousMarkerName) == 0x0000);
static_assert(offsetof(FMarkerSyncAnimPosition, NextMarkerName) == 0x0008);
static_assert(offsetof(FBlendSampleData, Animation) == 0x0008);
static_assert(offsetof(FAnimationRecordingSettings, InterpMode) == 0x000C);
static_assert(offsetof(FAnimationRecordingSettings, TangentMode) == 0x000D);
static_assert(offsetof(FComponentSpacePose, Transforms) == 0x0000);
static_assert(offsetof(FComponentSpacePose, Names) == 0x0010);
static_assert(offsetof(FLocalSpacePose, Transforms) == 0x0000);
static_assert(offsetof(FLocalSpacePose, Names) == 0x0010);
static_assert(offsetof(FNamedTransform, Value) == 0x0000);
static_assert(offsetof(FNamedTransform, Name) == 0x0030);
static_assert(offsetof(FNamedColor, Value) == 0x0000);
static_assert(offsetof(FNamedColor, Name) == 0x0004);
static_assert(offsetof(FNamedVector, Value) == 0x0000);
static_assert(offsetof(FNamedVector, Name) == 0x000C);
static_assert(offsetof(FNamedFloat, Name) == 0x0004);
static_assert(offsetof(FAnimParentNodeAssetOverride, NewAsset) == 0x0000);
static_assert(offsetof(FAnimParentNodeAssetOverride, ParentNodeGuid) == 0x0008);
static_assert(offsetof(FRootMotionExtractionStep, AnimSequence) == 0x0000);
static_assert(offsetof(FVectorCurve, FloatCurves) == 0x0018);
static_assert(offsetof(FTransformCurve, TranslationCurve) == 0x0018);
static_assert(offsetof(FTransformCurve, RotationCurve) == 0x01B0);
static_assert(offsetof(FTransformCurve, ScaleCurve) == 0x0348);
static_assert(offsetof(FSlotEvaluationPose, AdditiveType) == 0x0000);
static_assert(offsetof(FA2Pose, Bones) == 0x0000);
static_assert(offsetof(FA2CSPose, ComponentSpaceFlags) == 0x0018);
static_assert(offsetof(FQueuedDrawDebugItem, ItemType) == 0x0000);
static_assert(offsetof(FQueuedDrawDebugItem, StartLoc) == 0x0004);
static_assert(offsetof(FQueuedDrawDebugItem, EndLoc) == 0x0010);
static_assert(offsetof(FQueuedDrawDebugItem, Center) == 0x001C);
static_assert(offsetof(FQueuedDrawDebugItem, Rotation) == 0x0028);
static_assert(offsetof(FQueuedDrawDebugItem, Color) == 0x0040);
static_assert(offsetof(FQueuedDrawDebugItem, Message) == 0x0050);
static_assert(offsetof(FQueuedDrawDebugItem, TextScale) == 0x0060);
static_assert(offsetof(FAnimMontageInstance, Montage) == 0x0000);
static_assert(offsetof(FAnimMontageInstance, NextSections) == 0x00E8);
static_assert(offsetof(FAnimMontageInstance, PrevSections) == 0x00F8);
static_assert(offsetof(FAnimMontageInstance, ActiveStateBranchingPoints) == 0x0118);
static_assert(offsetof(FAnimMontageInstance, Blend) == 0x0130);
static_assert(offsetof(FAnimNode_ApplyMeshSpaceAdditive, Base) == 0x0010);
static_assert(offsetof(FAnimNode_ApplyMeshSpaceAdditive, Additive) == 0x0020);
static_assert(offsetof(FAnimNode_ApplyMeshSpaceAdditive, AlphaInputType) == 0x0030);
static_assert(offsetof(FAnimNode_ApplyMeshSpaceAdditive, AlphaBoolBlend) == 0x0040);
static_assert(offsetof(FAnimNode_ApplyMeshSpaceAdditive, AlphaCurveName) == 0x0088);
static_assert(offsetof(FAnimNode_ApplyMeshSpaceAdditive, AlphaScaleBias) == 0x0090);
static_assert(offsetof(FAnimNode_ApplyMeshSpaceAdditive, AlphaScaleBiasClamp) == 0x0098);
static_assert(offsetof(FAnimNode_Inertialization, Source) == 0x0010);
static_assert(offsetof(FAnimNode_LinkedAnimGraph, InputPoses) == 0x0058);
static_assert(offsetof(FAnimNode_LinkedAnimGraph, InputPoseNames) == 0x0068);
static_assert(offsetof(FAnimNode_LinkedAnimGraph, InstanceClass) == 0x0078);
static_assert(offsetof(FAnimNode_LinkedAnimGraph, Tag) == 0x0080);
static_assert(offsetof(FAnimNode_LinkedAnimLayer, Interface) == 0x00A0);
static_assert(offsetof(FAnimNode_LinkedAnimLayer, Layer) == 0x00A8);
static_assert(offsetof(FAnimNode_LinkedInputPose, Name) == 0x0010);
static_assert(offsetof(FAnimNode_LinkedInputPose, Graph) == 0x0018);
static_assert(offsetof(FAnimNode_LinkedInputPose, InputPose) == 0x0020);
static_assert(offsetof(FAnimNode_SaveCachedPose, Pose) == 0x0010);
static_assert(offsetof(FAnimNode_SaveCachedPose, CachePoseName) == 0x0020);
static_assert(offsetof(FAnimNode_SequencePlayer, Sequence) == 0x0038);
static_assert(offsetof(FAnimNode_SequencePlayer, PlayRateScaleBiasClamp) == 0x0048);
static_assert(offsetof(FAnimationActiveTransitionEntry, BlendProfile) == 0x00B8);
static_assert(offsetof(FAnimNode_TransitionPoseEvaluator, DataSource) == 0x00F0);
static_assert(offsetof(FAnimNode_TransitionPoseEvaluator, EvaluatorMode) == 0x00F1);
static_assert(offsetof(FAnimNode_UseCachedPose, LinkToCachingNode) == 0x0010);
static_assert(offsetof(FAnimNode_UseCachedPose, CachePoseName) == 0x0020);
static_assert(offsetof(FAnimNode_ConvertLocalToComponentSpace, LocalPose) == 0x0010);
static_assert(offsetof(FAnimNode_ConvertComponentToLocalSpace, ComponentPose) == 0x0010);
static_assert(offsetof(FCompressedTrack, ByteStream) == 0x0000);
static_assert(offsetof(FCompressedTrack, Times) == 0x0010);
static_assert(offsetof(FCurveTrack, CurveName) == 0x0000);
static_assert(offsetof(FCurveTrack, CurveWeights) == 0x0008);
static_assert(offsetof(FScaleTrack, ScaleKeys) == 0x0000);
static_assert(offsetof(FScaleTrack, Times) == 0x0010);
static_assert(offsetof(FRotationTrack, RotKeys) == 0x0000);
static_assert(offsetof(FRotationTrack, Times) == 0x0010);
static_assert(offsetof(FTranslationTrack, PosKeys) == 0x0000);
static_assert(offsetof(FTranslationTrack, Times) == 0x0010);
static_assert(offsetof(FRawAnimSequenceTrack, PosKeys) == 0x0000);
static_assert(offsetof(FRawAnimSequenceTrack, RotKeys) == 0x0010);
static_assert(offsetof(FRawAnimSequenceTrack, ScaleKeys) == 0x0020);
static_assert(offsetof(FAnimSequenceTrackContainer, AnimationTracks) == 0x0000);
static_assert(offsetof(FAnimSequenceTrackContainer, TrackNames) == 0x0010);
static_assert(offsetof(FAnimNode_SingleNode, SourcePose) == 0x0010);
static_assert(offsetof(FAnimationTransitionRule, RuleToExecute) == 0x0000);
static_assert(offsetof(FAnimationState, Transitions) == 0x0008);
static_assert(offsetof(FAnimNotifyTrack, TrackName) == 0x0000);
static_assert(offsetof(FAnimNotifyTrack, TrackColor) == 0x0008);
static_assert(offsetof(FPerBoneBlendWeights, BoneBlendWeights) == 0x0000);
static_assert(offsetof(FGridBlendSample, GridElement) == 0x0000);
static_assert(offsetof(FBPEditorBookmarkNode, NodeGuid) == 0x0000);
static_assert(offsetof(FBPEditorBookmarkNode, ParentGuid) == 0x0010);
static_assert(offsetof(FBPEditorBookmarkNode, DisplayName) == 0x0020);
static_assert(offsetof(FEditedDocumentInfo, EditedObjectPath) == 0x0000);
static_assert(offsetof(FEditedDocumentInfo, SavedViewOffset) == 0x0018);
static_assert(offsetof(FEditedDocumentInfo, EditedObject) == 0x0028);
static_assert(offsetof(FBPInterfaceDescription, Interface) == 0x0000);
static_assert(offsetof(FBPInterfaceDescription, Graphs) == 0x0008);
static_assert(offsetof(FBPVariableDescription, VarName) == 0x0000);
static_assert(offsetof(FBPVariableDescription, VarGuid) == 0x0008);
static_assert(offsetof(FBPVariableDescription, VarType) == 0x0018);
static_assert(offsetof(FBPVariableDescription, FriendlyName) == 0x0070);
static_assert(offsetof(FBPVariableDescription, Category) == 0x0080);
static_assert(offsetof(FBPVariableDescription, RepNotifyFunc) == 0x00A0);
static_assert(offsetof(FBPVariableDescription, ReplicationCondition) == 0x00A8);
static_assert(offsetof(FBPVariableDescription, MetaDataArray) == 0x00B0);
static_assert(offsetof(FBPVariableDescription, DefaultValue) == 0x00C0);
static_assert(offsetof(FCompilerNativizationOptions, PlatformName) == 0x0000);
static_assert(offsetof(FCompilerNativizationOptions, ExcludedModules) == 0x0010);
static_assert(offsetof(FCompilerNativizationOptions, ExcludedFolderPaths) == 0x0070);
static_assert(offsetof(FEventGraphFastCallPair, FunctionToPatch) == 0x0000);
static_assert(offsetof(FCachedAnimTransitionData, StateMachineName) == 0x0000);
static_assert(offsetof(FCachedAnimTransitionData, FromStateName) == 0x0008);
static_assert(offsetof(FCachedAnimTransitionData, ToStateName) == 0x0010);
static_assert(offsetof(FCachedAnimRelevancyData, StateMachineName) == 0x0000);
static_assert(offsetof(FCachedAnimRelevancyData, StateName) == 0x0008);
static_assert(offsetof(FCachedAnimAssetPlayerData, StateMachineName) == 0x0000);
static_assert(offsetof(FCachedAnimAssetPlayerData, StateName) == 0x0008);
static_assert(offsetof(FCachedAnimStateData, StateMachineName) == 0x0000);
static_assert(offsetof(FCachedAnimStateData, StateName) == 0x0008);
static_assert(offsetof(FCachedAnimStateArray, States) == 0x0000);
static_assert(offsetof(FCameraShakeDuration, Type) == 0x0004);
static_assert(offsetof(FCameraShakeInfo, Duration) == 0x0000);
static_assert(offsetof(FCanvasIcon, Texture) == 0x0000);
static_assert(offsetof(FWrappedStringElement, Value) == 0x0000);
static_assert(offsetof(FWrappedStringElement, LineExtent) == 0x0010);
static_assert(offsetof(FTextSizingParameters, Scaling) == 0x0010);
static_assert(offsetof(FTextSizingParameters, DrawFont) == 0x0018);
static_assert(offsetof(FTextSizingParameters, SpacingAdjust) == 0x0020);
static_assert(offsetof(FChildActorAttachedActorInfo, Actor) == 0x0000);
static_assert(offsetof(FChildActorAttachedActorInfo, SocketName) == 0x0008);
static_assert(offsetof(FChildActorAttachedActorInfo, RelativeTransform) == 0x0010);
static_assert(offsetof(FChildActorComponentInstanceData, ChildActorClass) == 0x00B8);
static_assert(offsetof(FChildActorComponentInstanceData, ChildActorName) == 0x00C0);
static_assert(offsetof(FChildActorComponentInstanceData, AttachedActors) == 0x00C8);
static_assert(offsetof(FAutoCompleteNode, AutoCompleteListIndices) == 0x0008);
static_assert(offsetof(FRuntimeCurveLinearColor, ColorCurves) == 0x0000);
static_assert(offsetof(FRuntimeCurveLinearColor, ExternalCurve) == 0x0200);
static_assert(offsetof(FNamedCurveValue, Name) == 0x0000);
static_assert(offsetof(FCurveTableRowHandle, CurveTable) == 0x0000);
static_assert(offsetof(FCurveTableRowHandle, RowName) == 0x0008);
static_assert(offsetof(FCustomAttribute, Name) == 0x0000);
static_assert(offsetof(FCustomAttribute, Times) == 0x0010);
static_assert(offsetof(FCustomAttributePerBoneData, Attributes) == 0x0008);
static_assert(offsetof(FDataTableCategoryHandle, DataTable) == 0x0000);
static_assert(offsetof(FDataTableCategoryHandle, ColumnName) == 0x0008);
static_assert(offsetof(FDataTableCategoryHandle, RowContents) == 0x0010);
static_assert(offsetof(FDataTableRowHandle, DataTable) == 0x0000);
static_assert(offsetof(FDataTableRowHandle, RowName) == 0x0008);
static_assert(offsetof(FGraphReference, MacroGraph) == 0x0000);
static_assert(offsetof(FGraphReference, GraphBlueprint) == 0x0008);
static_assert(offsetof(FGraphReference, GraphGuid) == 0x0010);
static_assert(offsetof(FEdGraphPinReference, OwningNode) == 0x0000);
static_assert(offsetof(FEdGraphPinReference, PinId) == 0x0008);
static_assert(offsetof(FEdGraphSchemaAction, MenuDescription) == 0x0008);
static_assert(offsetof(FEdGraphSchemaAction, TooltipDescription) == 0x0020);
static_assert(offsetof(FEdGraphSchemaAction, Category) == 0x0038);
static_assert(offsetof(FEdGraphSchemaAction, Keywords) == 0x0050);
static_assert(offsetof(FEdGraphSchemaAction, MenuDescriptionArray) == 0x0070);
static_assert(offsetof(FEdGraphSchemaAction, FullSearchTitlesArray) == 0x0080);
static_assert(offsetof(FEdGraphSchemaAction, FullSearchKeywordsArray) == 0x0090);
static_assert(offsetof(FEdGraphSchemaAction, FullSearchCategoryArray) == 0x00A0);
static_assert(offsetof(FEdGraphSchemaAction, LocalizedMenuDescriptionArray) == 0x00B0);
static_assert(offsetof(FEdGraphSchemaAction, LocalizedFullSearchTitlesArray) == 0x00C0);
static_assert(offsetof(FEdGraphSchemaAction, LocalizedFullSearchKeywordsArray) == 0x00D0);
static_assert(offsetof(FEdGraphSchemaAction, LocalizedFullSearchCategoryArray) == 0x00E0);
static_assert(offsetof(FEdGraphSchemaAction, SearchText) == 0x00F0);
static_assert(offsetof(FEdGraphSchemaAction_NewNode, NodeTemplate) == 0x0100);
static_assert(offsetof(FScreenMessageString, ScreenMessage) == 0x0008);
static_assert(offsetof(FScreenMessageString, DisplayColor) == 0x0018);
static_assert(offsetof(FScreenMessageString, TextScale) == 0x0024);
static_assert(offsetof(FURL, Protocol) == 0x0000);
static_assert(offsetof(FURL, Host) == 0x0010);
static_assert(offsetof(FURL, Map) == 0x0028);
static_assert(offsetof(FURL, RedirectURL) == 0x0038);
static_assert(offsetof(FURL, Op) == 0x0048);
static_assert(offsetof(FURL, Portal) == 0x0058);
static_assert(offsetof(FFullyLoadedPackagesInfo, FullyLoadType) == 0x0000);
static_assert(offsetof(FFullyLoadedPackagesInfo, Tag) == 0x0008);
static_assert(offsetof(FFullyLoadedPackagesInfo, PackagesToLoad) == 0x0018);
static_assert(offsetof(FFullyLoadedPackagesInfo, LoadedObjects) == 0x0028);
static_assert(offsetof(FLevelStreamingStatus, PackageName) == 0x0000);
static_assert(offsetof(FNamedNetDriver, NetDriver) == 0x0000);
static_assert(offsetof(FWorldContext, LastURL) == 0x00D0);
static_assert(offsetof(FWorldContext, LastRemoteURL) == 0x0138);
static_assert(offsetof(FWorldContext, PendingNetGame) == 0x01A0);
static_assert(offsetof(FWorldContext, PackagesToFullyLoad) == 0x01A8);
static_assert(offsetof(FWorldContext, LoadedLevelsForPendingMapChange) == 0x01C8);
static_assert(offsetof(FWorldContext, ObjectReferencers) == 0x01F0);
static_assert(offsetof(FWorldContext, PendingLevelStreamingStatusUpdates) == 0x0200);
static_assert(offsetof(FWorldContext, GameViewport) == 0x0210);
static_assert(offsetof(FWorldContext, OwningGameInstance) == 0x0218);
static_assert(offsetof(FWorldContext, ActiveNetDrivers) == 0x0220);
static_assert(offsetof(FCanvasUVTri, V0_Pos) == 0x0000);
static_assert(offsetof(FCanvasUVTri, V0_UV) == 0x0008);
static_assert(offsetof(FCanvasUVTri, V0_Color) == 0x0010);
static_assert(offsetof(FCanvasUVTri, V1_Pos) == 0x0020);
static_assert(offsetof(FCanvasUVTri, V1_UV) == 0x0028);
static_assert(offsetof(FCanvasUVTri, V1_Color) == 0x0030);
static_assert(offsetof(FCanvasUVTri, V2_Pos) == 0x0040);
static_assert(offsetof(FCanvasUVTri, V2_UV) == 0x0048);
static_assert(offsetof(FCanvasUVTri, V2_Color) == 0x0050);
static_assert(offsetof(FDepthFieldGlowInfo, GlowColor) == 0x0004);
static_assert(offsetof(FDepthFieldGlowInfo, GlowOuterRadius) == 0x0014);
static_assert(offsetof(FDepthFieldGlowInfo, GlowInnerRadius) == 0x001C);
static_assert(offsetof(FFontRenderInfo, GlowInfo) == 0x0004);
static_assert(offsetof(FDamageEvent, DamageTypeClass) == 0x0008);
static_assert(offsetof(FRadialDamageEvent, Params) == 0x0010);
static_assert(offsetof(FRadialDamageEvent, Origin) == 0x0024);
static_assert(offsetof(FRadialDamageEvent, ComponentHits) == 0x0030);
static_assert(offsetof(FPointDamageEvent, ShotDirection) == 0x0014);
static_assert(offsetof(FPointDamageEvent, HitInfo) == 0x0020);
static_assert(offsetof(FMeshBuildSettings, BuildScale3D) == 0x0014);
static_assert(offsetof(FMeshBuildSettings, DistanceFieldReplacementMesh) == 0x0028);
static_assert(offsetof(FPOV, Location) == 0x0000);
static_assert(offsetof(FPOV, Rotation) == 0x000C);
static_assert(offsetof(FAnimUpdateRateParameters, ShiftBucket) == 0x0001);
static_assert(offsetof(FAnimUpdateRateParameters, BaseVisibleDistanceFactorThesholds) == 0x0020);
static_assert(offsetof(FAnimUpdateRateParameters, LODToFrameSkipMap) == 0x0030);
static_assert(offsetof(FAnimSlotDesc, SlotName) == 0x0000);
static_assert(offsetof(FAnimSlotInfo, SlotName) == 0x0000);
static_assert(offsetof(FAnimSlotInfo, ChannelWeights) == 0x0008);
static_assert(offsetof(FMTDResult, Direction) == 0x0000);
static_assert(offsetof(FOverlapResult, Actor) == 0x0000);
static_assert(offsetof(FOverlapResult, Component) == 0x0008);
static_assert(offsetof(FBasedPosition, Base) == 0x0000);
static_assert(offsetof(FBasedPosition, Position) == 0x0008);
static_assert(offsetof(FBasedPosition, CachedBaseLocation) == 0x0014);
static_assert(offsetof(FBasedPosition, CachedBaseRotation) == 0x0020);
static_assert(offsetof(FBasedPosition, CachedTransPosition) == 0x002C);
static_assert(offsetof(FFractureEffect, ParticleSystem) == 0x0000);
static_assert(offsetof(FFractureEffect, Sound) == 0x0008);
static_assert(offsetof(FRigidBodyContactInfo, ContactPosition) == 0x0000);
static_assert(offsetof(FRigidBodyContactInfo, ContactNormal) == 0x000C);
static_assert(offsetof(FRigidBodyContactInfo, PhysMaterial) == 0x0020);
static_assert(offsetof(FCollisionImpactData, ContactInfos) == 0x0000);
static_assert(offsetof(FCollisionImpactData, TotalNormalImpulse) == 0x0010);
static_assert(offsetof(FCollisionImpactData, TotalFrictionImpulse) == 0x001C);
static_assert(offsetof(FRigidBodyState, Position) == 0x0000);
static_assert(offsetof(FRigidBodyState, Quaternion) == 0x0010);
static_assert(offsetof(FRigidBodyState, LinVel) == 0x0020);
static_assert(offsetof(FRigidBodyState, AngVel) == 0x002C);
static_assert(offsetof(FForceFeedbackParameters, Tag) == 0x0000);
static_assert(offsetof(FPredictProjectilePathPointData, Location) == 0x0000);
static_assert(offsetof(FPredictProjectilePathPointData, Velocity) == 0x000C);
static_assert(offsetof(FPredictProjectilePathResult, PathData) == 0x0000);
static_assert(offsetof(FPredictProjectilePathResult, LastTraceDestination) == 0x0010);
static_assert(offsetof(FPredictProjectilePathResult, HitResult) == 0x002C);
static_assert(offsetof(FPredictProjectilePathParams, StartLocation) == 0x0000);
static_assert(offsetof(FPredictProjectilePathParams, LaunchVelocity) == 0x000C);
static_assert(offsetof(FPredictProjectilePathParams, TraceChannel) == 0x0025);
static_assert(offsetof(FPredictProjectilePathParams, ActorsToIgnore) == 0x0038);
static_assert(offsetof(FPredictProjectilePathParams, DrawDebugType) == 0x0050);
static_assert(offsetof(FActiveHapticFeedbackEffect, HapticEffect) == 0x0000);
static_assert(offsetof(FClusterNode, BoundMin) == 0x0000);
static_assert(offsetof(FClusterNode, BoundMax) == 0x0010);
static_assert(offsetof(FClusterNode, MinInstanceScale) == 0x0028);
static_assert(offsetof(FClusterNode, MaxInstanceScale) == 0x0034);
static_assert(offsetof(FClusterNode_DEPRECATED, BoundMin) == 0x0000);
static_assert(offsetof(FClusterNode_DEPRECATED, BoundMax) == 0x0010);
static_assert(offsetof(FHLODISMComponentDesc, StaticMesh) == 0x0000);
static_assert(offsetof(FHLODISMComponentDesc, Material) == 0x0008);
static_assert(offsetof(FHLODISMComponentDesc, Instances) == 0x0010);
static_assert(offsetof(FImportanceTexture, Size) == 0x0000);
static_assert(offsetof(FImportanceTexture, MarginalCDF) == 0x0010);
static_assert(offsetof(FImportanceTexture, ConditionalCDF) == 0x0020);
static_assert(offsetof(FImportanceTexture, TextureData) == 0x0030);
static_assert(offsetof(FImportanceTexture, Texture) == 0x0040);
static_assert(offsetof(FImportanceTexture, Weighting) == 0x0048);
static_assert(offsetof(FInstancedStaticMeshLightMapInstanceData, Transform) == 0x0000);
static_assert(offsetof(FInstancedStaticMeshLightMapInstanceData, MapBuildDataIds) == 0x0030);
static_assert(offsetof(FInstancedStaticMeshComponentInstanceData, StaticMesh) == 0x00B8);
static_assert(offsetof(FInstancedStaticMeshComponentInstanceData, CachedStaticLighting) == 0x00C0);
static_assert(offsetof(FInstancedStaticMeshComponentInstanceData, PerInstanceSMData) == 0x0100);
static_assert(offsetof(FInstancedStaticMeshComponentInstanceData, PerInstanceSMCustomData) == 0x0110);
static_assert(offsetof(FInterpEdSelKey, Group) == 0x0000);
static_assert(offsetof(FInterpEdSelKey, Track) == 0x0008);
static_assert(offsetof(FCameraPreviewInfo, PawnClass) == 0x0000);
static_assert(offsetof(FCameraPreviewInfo, AnimSeq) == 0x0008);
static_assert(offsetof(FCameraPreviewInfo, Location) == 0x0010);
static_assert(offsetof(FCameraPreviewInfo, Rotation) == 0x001C);
static_assert(offsetof(FCameraPreviewInfo, PawnInst) == 0x0028);
static_assert(offsetof(FSubTrackGroup, GroupName) == 0x0000);
static_assert(offsetof(FSubTrackGroup, TrackIndices) == 0x0010);
static_assert(offsetof(FSupportedSubTrackInfo, SupportedClass) == 0x0000);
static_assert(offsetof(FSupportedSubTrackInfo, SubTrackName) == 0x0008);
static_assert(offsetof(FDrawToRenderTargetContext, RenderTarget) == 0x0000);
static_assert(offsetof(FLevelSimplificationDetails, StaticMeshMaterialSettings) == 0x0008);
static_assert(offsetof(FLevelSimplificationDetails, LandscapeMaterialSettings) == 0x0098);
static_assert(offsetof(FDynamicTextureInstance, Texture) == 0x0028);
static_assert(offsetof(FPrecomputedLightInstanceData, Transform) == 0x00C0);
static_assert(offsetof(FPrecomputedLightInstanceData, LightGuid) == 0x00F0);
static_assert(offsetof(FBatchedPoint, Position) == 0x0000);
static_assert(offsetof(FBatchedPoint, Color) == 0x000C);
static_assert(offsetof(FBatchedLine, Start) == 0x0000);
static_assert(offsetof(FBatchedLine, End) == 0x000C);
static_assert(offsetof(FBatchedLine, Color) == 0x0018);
static_assert(offsetof(FClientReceiveData, LocalPC) == 0x0000);
static_assert(offsetof(FClientReceiveData, MessageType) == 0x0008);
static_assert(offsetof(FClientReceiveData, MessageString) == 0x0018);
static_assert(offsetof(FClientReceiveData, RelatedPlayerState) == 0x0028);
static_assert(offsetof(FClientReceiveData, RelatedPlayerState0) == 0x0030);
static_assert(offsetof(FClientReceiveData, OptionalObject) == 0x0038);
static_assert(offsetof(FParameterGroupData, GroupName) == 0x0000);
static_assert(offsetof(FParameterChannelNames, R) == 0x0000);
static_assert(offsetof(FParameterChannelNames, G) == 0x0018);
static_assert(offsetof(FParameterChannelNames, B) == 0x0030);
static_assert(offsetof(FParameterChannelNames, A) == 0x0048);
static_assert(offsetof(FFunctionExpressionOutput, ExpressionOutput) == 0x0000);
static_assert(offsetof(FFunctionExpressionOutput, ExpressionOutputId) == 0x0008);
static_assert(offsetof(FFunctionExpressionOutput, Output) == 0x0018);
static_assert(offsetof(FFunctionExpressionInput, ExpressionInput) == 0x0000);
static_assert(offsetof(FFunctionExpressionInput, ExpressionInputId) == 0x0008);
static_assert(offsetof(FFunctionExpressionInput, Input) == 0x0018);
static_assert(offsetof(FScalarParameterAtlasInstanceData, Curve) == 0x0008);
static_assert(offsetof(FScalarParameterAtlasInstanceData, Atlas) == 0x0030);
static_assert(offsetof(FMemberReference, MemberParent) == 0x0000);
static_assert(offsetof(FMemberReference, MemberScope) == 0x0008);
static_assert(offsetof(FMemberReference, MemberName) == 0x0018);
static_assert(offsetof(FMemberReference, MemberGuid) == 0x0020);
static_assert(offsetof(FMeshInstancingSettings, ActorClassToUse) == 0x0000);
static_assert(offsetof(FMeshInstancingSettings, MeshReplacementMethod) == 0x000C);
static_assert(offsetof(FMeshInstancingSettings, ISMComponentToUse) == 0x0010);
static_assert(offsetof(FMeshReductionSettings, SilhouetteImportance) == 0x001C);
static_assert(offsetof(FMeshReductionSettings, TextureImportance) == 0x001D);
static_assert(offsetof(FMeshReductionSettings, ShadingImportance) == 0x001E);
static_assert(offsetof(FMeshReductionSettings, TerminationCriterion) == 0x0020);
static_assert(offsetof(FMeshReductionSettings, VisibilityAggressiveness) == 0x0021);
static_assert(offsetof(FMeshReductionSettings, VertexColorImportance) == 0x0022);
static_assert(offsetof(FNameCurveKey, Value) == 0x0004);
static_assert(offsetof(FNameCurve, Keys) == 0x0068);
static_assert(offsetof(FNavDataConfig, Name) == 0x0030);
static_assert(offsetof(FNavDataConfig, Color) == 0x0038);
static_assert(offsetof(FNavDataConfig, DefaultQueryExtent) == 0x003C);
static_assert(offsetof(FNavDataConfig, NavigationDataClass) == 0x0048);
static_assert(offsetof(FNavDataConfig, NavDataClass) == 0x0050);
static_assert(offsetof(FFastArraySerializer, DeltaFlags) == 0x0100);
static_assert(offsetof(FParticleCurvePair, CurveName) == 0x0000);
static_assert(offsetof(FParticleCurvePair, CurveObject) == 0x0010);
static_assert(offsetof(FBeamTargetData, TargetName) == 0x0000);
static_assert(offsetof(FViewTargetTransitionParams, BlendFunction) == 0x0004);
static_assert(offsetof(FUpdateLevelStreamingLevelStatus, PackageName) == 0x0000);
static_assert(offsetof(FPreviewAttachedObjectPair, AttachedObject) == 0x0000);
static_assert(offsetof(FPreviewAttachedObjectPair, Object) == 0x0028);
static_assert(offsetof(FPreviewAttachedObjectPair, AttachedTo) == 0x0030);
static_assert(offsetof(FPreviewAssetAttachContainer, AttachedObjects) == 0x0000);
static_assert(offsetof(FPrimitiveComponentInstanceData, ComponentTransform) == 0x00C0);
static_assert(offsetof(FPrimitiveComponentInstanceData, LODParent) == 0x00F8);
static_assert(offsetof(FSpriteCategoryInfo, Category) == 0x0000);
static_assert(offsetof(FSpriteCategoryInfo, DisplayName) == 0x0008);
static_assert(offsetof(FSpriteCategoryInfo, Description) == 0x0020);
static_assert(offsetof(FQuartzPulseOverrideStep, PulseDuration) == 0x0004);
static_assert(offsetof(FQuartzTimeSignature, BeatType) == 0x0004);
static_assert(offsetof(FQuartzTimeSignature, OptionalPulseOverride) == 0x0008);
static_assert(offsetof(FQuartzClockSettings, TimeSignature) == 0x0000);
static_assert(offsetof(FQuartzQuantizationBoundary, Quantization) == 0x0000);
static_assert(offsetof(FQuartzQuantizationBoundary, CountingReferencePoint) == 0x0008);
static_assert(offsetof(FLevelNameAndTime, LevelName) == 0x0000);
static_assert(offsetof(FRootMotionFinishVelocitySettings, Mode) == 0x0000);
static_assert(offsetof(FRootMotionFinishVelocitySettings, SetVelocity) == 0x0004);
static_assert(offsetof(FRootMotionSource, AccumulateMode) == 0x0014);
static_assert(offsetof(FRootMotionSource, InstanceName) == 0x0018);
static_assert(offsetof(FRootMotionSource, status) == 0x0030);
static_assert(offsetof(FRootMotionSource, Settings) == 0x0031);
static_assert(offsetof(FRootMotionSource, RootMotionParams) == 0x0040);
static_assert(offsetof(FRootMotionSource, FinishVelocityParams) == 0x0080);
static_assert(offsetof(FRootMotionSource_JumpForce, Rotation) == 0x0098);
static_assert(offsetof(FRootMotionSource_JumpForce, PathOffsetCurve) == 0x00B0);
static_assert(offsetof(FRootMotionSource_JumpForce, TimeMappingCurve) == 0x00B8);
static_assert(offsetof(FRootMotionSource_MoveToDynamicForce, StartLocation) == 0x0098);
static_assert(offsetof(FRootMotionSource_MoveToDynamicForce, InitialTargetLocation) == 0x00A4);
static_assert(offsetof(FRootMotionSource_MoveToDynamicForce, TargetLocation) == 0x00B0);
static_assert(offsetof(FRootMotionSource_MoveToDynamicForce, PathOffsetCurve) == 0x00C0);
static_assert(offsetof(FRootMotionSource_MoveToDynamicForce, TimeMappingCurve) == 0x00C8);
static_assert(offsetof(FRootMotionSource_MoveToForce, StartLocation) == 0x0098);
static_assert(offsetof(FRootMotionSource_MoveToForce, TargetLocation) == 0x00A4);
static_assert(offsetof(FRootMotionSource_MoveToForce, PathOffsetCurve) == 0x00B8);
static_assert(offsetof(FRootMotionSource_RadialForce, Location) == 0x0098);
static_assert(offsetof(FRootMotionSource_RadialForce, LocationActor) == 0x00A8);
static_assert(offsetof(FRootMotionSource_RadialForce, StrengthDistanceFalloff) == 0x00C0);
static_assert(offsetof(FRootMotionSource_RadialForce, StrengthOverTime) == 0x00C8);
static_assert(offsetof(FRootMotionSource_RadialForce, FixedWorldDirection) == 0x00D4);
static_assert(offsetof(FRootMotionSource_ConstantForce, Force) == 0x0098);
static_assert(offsetof(FRootMotionSource_ConstantForce, StrengthOverTime) == 0x00A8);
static_assert(offsetof(FCameraExposureSettings, method) == 0x0000);
static_assert(offsetof(FCameraExposureSettings, BiasCurve) == 0x0020);
static_assert(offsetof(FCameraExposureSettings, MeterMask) == 0x0028);
static_assert(offsetof(FGaussianSumBloomSettings, Filter1Tint) == 0x0024);
static_assert(offsetof(FGaussianSumBloomSettings, Filter2Tint) == 0x0034);
static_assert(offsetof(FGaussianSumBloomSettings, Filter3Tint) == 0x0044);
static_assert(offsetof(FGaussianSumBloomSettings, Filter4Tint) == 0x0054);
static_assert(offsetof(FGaussianSumBloomSettings, Filter5Tint) == 0x0064);
static_assert(offsetof(FGaussianSumBloomSettings, Filter6Tint) == 0x0074);
static_assert(offsetof(FConvolutionBloomSettings, Texture) == 0x0000);
static_assert(offsetof(FConvolutionBloomSettings, CenterUV) == 0x000C);
static_assert(offsetof(FLensBloomSettings, GaussianSum) == 0x0000);
static_assert(offsetof(FLensBloomSettings, Convolution) == 0x0088);
static_assert(offsetof(FLensBloomSettings, method) == 0x00B0);
static_assert(offsetof(FLensImperfectionSettings, DirtMask) == 0x0000);
static_assert(offsetof(FLensImperfectionSettings, DirtMaskTint) == 0x000C);
static_assert(offsetof(FLensSettings, Bloom) == 0x0000);
static_assert(offsetof(FLensSettings, Imperfections) == 0x00B8);
static_assert(offsetof(FColorGradePerRangeSettings, Saturation) == 0x0000);
static_assert(offsetof(FColorGradePerRangeSettings, Contrast) == 0x0010);
static_assert(offsetof(FColorGradePerRangeSettings, Gamma) == 0x0020);
static_assert(offsetof(FColorGradePerRangeSettings, Gain) == 0x0030);
static_assert(offsetof(FColorGradePerRangeSettings, Offset) == 0x0040);
static_assert(offsetof(FColorGradingSettings, Global) == 0x0000);
static_assert(offsetof(FColorGradingSettings, Shadows) == 0x0050);
static_assert(offsetof(FColorGradingSettings, Midtones) == 0x00A0);
static_assert(offsetof(FColorGradingSettings, Highlights) == 0x00F0);
static_assert(offsetof(FClothingAssetData_Legacy, AssetName) == 0x0000);
static_assert(offsetof(FClothingAssetData_Legacy, ApexFileName) == 0x0008);
static_assert(offsetof(FClothingAssetData_Legacy, PhysicsProperties) == 0x001C);
static_assert(offsetof(FSkeletalMeshClothBuildParams, TargetAsset) == 0x0000);
static_assert(offsetof(FSkeletalMeshClothBuildParams, AssetName) == 0x0010);
static_assert(offsetof(FSkeletalMeshClothBuildParams, PhysicsAsset) == 0x0030);
static_assert(offsetof(FBoneMirrorExport, BoneName) == 0x0000);
static_assert(offsetof(FBoneMirrorExport, SourceBoneName) == 0x0008);
static_assert(offsetof(FBoneMirrorExport, BoneFlipAxis) == 0x0010);
static_assert(offsetof(FNameMapping, NodeName) == 0x0000);
static_assert(offsetof(FNameMapping, BoneName) == 0x0008);
static_assert(offsetof(FRigConfiguration, Rig) == 0x0000);
static_assert(offsetof(FRigConfiguration, BoneMappingTable) == 0x0008);
static_assert(offsetof(FBoneReductionSetting, BonesToRemove) == 0x0000);
static_assert(offsetof(FReferencePose, PoseName) == 0x0000);
static_assert(offsetof(FReferencePose, ReferencePose) == 0x0008);
static_assert(offsetof(FSkeletonToMeshLinkup, SkeletonToMeshTable) == 0x0000);
static_assert(offsetof(FSkeletonToMeshLinkup, MeshToSkeletonTable) == 0x0010);
static_assert(offsetof(FPrecomputedSkyLightInstanceData, LightGuid) == 0x00B8);
static_assert(offsetof(FSoundWaveEnvelopeDataPerSound, SoundWave) == 0x0008);
static_assert(offsetof(FSoundWaveSpectralDataPerSound, SpectralData) == 0x0000);
static_assert(offsetof(FSoundWaveSpectralDataPerSound, SoundWave) == 0x0018);
static_assert(offsetof(FSplineInstanceData, SplineCurves) == 0x00C0);
static_assert(offsetof(FSplineInstanceData, SplineCurvesPreUCS) == 0x0130);
static_assert(offsetof(FSplinePoint, Position) == 0x0004);
static_assert(offsetof(FSplinePoint, ArriveTangent) == 0x0010);
static_assert(offsetof(FSplinePoint, LeaveTangent) == 0x001C);
static_assert(offsetof(FSplinePoint, Rotation) == 0x0028);
static_assert(offsetof(FSplinePoint, Scale) == 0x0034);
static_assert(offsetof(FSplinePoint, Type) == 0x0040);
static_assert(offsetof(FSplineMeshInstanceData, StartPos) == 0x00B8);
static_assert(offsetof(FSplineMeshInstanceData, EndPos) == 0x00C4);
static_assert(offsetof(FSplineMeshInstanceData, StartTangent) == 0x00D0);
static_assert(offsetof(FSplineMeshInstanceData, EndTangent) == 0x00DC);
static_assert(offsetof(FMaterialRemapIndex, MaterialRemap) == 0x0008);
static_assert(offsetof(FAssetEditorOrbitCameraPosition, CamOrbitPoint) == 0x0004);
static_assert(offsetof(FAssetEditorOrbitCameraPosition, CamOrbitZoom) == 0x0010);
static_assert(offsetof(FAssetEditorOrbitCameraPosition, CamOrbitRotation) == 0x001C);
static_assert(offsetof(FMeshSectionInfoMap, Map) == 0x0000);
static_assert(offsetof(FStaticMeshSourceModel, BuildSettings) == 0x0000);
static_assert(offsetof(FStaticMeshSourceModel, ReductionSettings) == 0x0030);
static_assert(offsetof(FStaticMeshSourceModel, ScreenSize) == 0x0058);
static_assert(offsetof(FStaticMeshSourceModel, SourceImportFilename) == 0x0060);
static_assert(offsetof(FStaticMeshOptimizationSettings, ReductionMethod) == 0x0000);
static_assert(offsetof(FPaintedVertex, Position) == 0x0000);
static_assert(offsetof(FPaintedVertex, Color) == 0x000C);
static_assert(offsetof(FPaintedVertex, Normal) == 0x0010);
static_assert(offsetof(FStaticMeshVertexColorLODData, PaintedVertices) == 0x0000);
static_assert(offsetof(FStaticMeshVertexColorLODData, VertexBufferColors) == 0x0010);
static_assert(offsetof(FStaticMeshComponentInstanceData, StaticMesh) == 0x0100);
static_assert(offsetof(FStaticMeshComponentInstanceData, VertexColorLODs) == 0x0108);
static_assert(offsetof(FStaticMeshComponentInstanceData, CachedStaticLighting) == 0x0118);
static_assert(offsetof(FStaticMeshComponentInstanceData, StreamingTextureData) == 0x0128);
static_assert(offsetof(FTextureFormatSettings, CompressionSettings) == 0x0000);
static_assert(offsetof(FStreamingRenderAssetPrimitiveInfo, RenderAsset) == 0x0000);
static_assert(offsetof(FStreamingRenderAssetPrimitiveInfo, Bounds) == 0x0008);
static_assert(offsetof(FUpdateLevelVisibilityLevelInfo, PackageName) == 0x0000);
static_assert(offsetof(FUpdateLevelVisibilityLevelInfo, Filename) == 0x0008);
static_assert(offsetof(FLevelViewportInfo, CamPosition) == 0x0000);
static_assert(offsetof(FLevelViewportInfo, CamRotation) == 0x000C);
static_assert(offsetof(FLightmassWorldInfoSettings, EnvironmentColor) == 0x0014);
static_assert(offsetof(FLightmassWorldInfoSettings, VolumeLightingMethod) == 0x0024);
static_assert(offsetof(FWidgetTransform, Translation) == 0x0000);
static_assert(offsetof(FWidgetTransform, Scale) == 0x0008);
static_assert(offsetof(FWidgetTransform, Shear) == 0x0010);
static_assert(offsetof(FWidgetVertexEffect, EffectType) == 0x0000);
static_assert(offsetof(FWidgetVertexEffect, VertexEffectPivot) == 0x0004);
static_assert(offsetof(FWidgetVertexEffect, Anchor0) == 0x000C);
static_assert(offsetof(FWidgetVertexEffect, Anchor1) == 0x0014);
static_assert(offsetof(UWidget, Slot) == 0x0028);
static_assert(offsetof(UWidget, ToolTipText) == 0x0040);
static_assert(offsetof(UWidget, ToolTipWidget) == 0x0068);
static_assert(offsetof(UWidget, RenderTransform) == 0x0090);
static_assert(offsetof(UWidget, RenderTransformPivot) == 0x00AC);
static_assert(offsetof(UWidget, VertexEffect) == 0x00B4);
static_assert(offsetof(UWidget, AccessibleWidgetData) == 0x00D8);
static_assert(offsetof(UWidget, Cursor) == 0x00E1);
static_assert(offsetof(UWidget, Clipping) == 0x00E2);
static_assert(offsetof(UWidget, Visibility) == 0x00E3);
static_assert(offsetof(UWidget, Navigation) == 0x00E8);
static_assert(offsetof(UWidget, FlowDirectionPreference) == 0x00F0);
static_assert(offsetof(UWidget, NativeBindings) == 0x0118);
static_assert(offsetof(UPanelWidget, Slots) == 0x0128);
static_assert(offsetof(UButton, Style) == 0x0140);
static_assert(offsetof(UButton, WidgetStyle) == 0x0150);
static_assert(offsetof(UButton, ColorAndOpacity) == 0x04F0);
static_assert(offsetof(UButton, BackgroundColor) == 0x0500);
static_assert(offsetof(UButton, ClickMethod) == 0x0510);
static_assert(offsetof(UButton, TouchMethod) == 0x0511);
static_assert(offsetof(UButton, PressMethod) == 0x0512);
static_assert(offsetof(UButton, HitMargin) == 0x0514);
static_assert(offsetof(URetainerBox, EffectMaterial) == 0x0150);
static_assert(offsetof(URetainerBox, TextureParameter) == 0x0158);
static_assert(offsetof(FShapedTextOptions, TextShapingMethod) == 0x0001);
static_assert(offsetof(FShapedTextOptions, TextFlowDirection) == 0x0002);
static_assert(offsetof(UTextLayoutWidget, ShapedTextOptions) == 0x0128);
static_assert(offsetof(UTextLayoutWidget, Justification) == 0x012B);
static_assert(offsetof(UTextLayoutWidget, WrappingPolicy) == 0x012C);
static_assert(offsetof(UTextLayoutWidget, Margin) == 0x0134);
static_assert(offsetof(UTextBlock, Text) == 0x0148);
static_assert(offsetof(UTextBlock, ColorAndOpacity) == 0x0170);
static_assert(offsetof(UTextBlock, Font) == 0x01A8);
static_assert(offsetof(UTextBlock, StrikeBrush) == 0x0200);
static_assert(offsetof(UTextBlock, ShadowOffset) == 0x02D0);
static_assert(offsetof(UTextBlock, ShadowColorAndOpacity) == 0x02D8);
static_assert(offsetof(UTextBlock, TextTransformPolicy) == 0x02FE);
static_assert(offsetof(FSlateChildSize, SizeRule) == 0x0004);
static_assert(offsetof(FUserWidgetPool, ActiveWidgets) == 0x0000);
static_assert(offsetof(FUserWidgetPool, InactiveWidgets) == 0x0010);
static_assert(offsetof(UDynamicEntryBoxBase, EntryBoxType) == 0x0128);
static_assert(offsetof(UDynamicEntryBoxBase, EntrySpacing) == 0x012C);
static_assert(offsetof(UDynamicEntryBoxBase, SpacingPattern) == 0x0138);
static_assert(offsetof(UDynamicEntryBoxBase, EntrySizeRule) == 0x0148);
static_assert(offsetof(UDynamicEntryBoxBase, EntryHorizontalAlignment) == 0x0150);
static_assert(offsetof(UDynamicEntryBoxBase, EntryVerticalAlignment) == 0x0151);
static_assert(offsetof(UDynamicEntryBoxBase, RadialBoxSettings) == 0x0158);
static_assert(offsetof(UDynamicEntryBoxBase, EntryWidgetPool) == 0x0178);
static_assert(offsetof(FNamedSlotBinding, Name) == 0x0000);
static_assert(offsetof(FNamedSlotBinding, Content) == 0x0008);
static_assert(offsetof(FAnimationEventBinding, Animation) == 0x0000);
static_assert(offsetof(FAnimationEventBinding, AnimationEvent) == 0x0018);
static_assert(offsetof(FAnimationEventBinding, UserTag) == 0x001C);
static_assert(offsetof(UUserWidget, ColorAndOpacity) == 0x0130);
static_assert(offsetof(UUserWidget, ForegroundColor) == 0x0150);
static_assert(offsetof(UUserWidget, Padding) == 0x01B0);
static_assert(offsetof(UUserWidget, ActiveSequencePlayers) == 0x01C0);
static_assert(offsetof(UUserWidget, AnimationTickManager) == 0x01D0);
static_assert(offsetof(UUserWidget, StoppedSequencePlayers) == 0x01D8);
static_assert(offsetof(UUserWidget, NamedSlotBindings) == 0x01E8);
static_assert(offsetof(UUserWidget, WidgetTree) == 0x01F8);
static_assert(offsetof(UUserWidget, TickFrequency) == 0x0210);
static_assert(offsetof(UUserWidget, InputComponent) == 0x0218);
static_assert(offsetof(UUserWidget, AnimationCallbacks) == 0x0220);
static_assert(offsetof(UPanelSlot, Parent) == 0x0028);
static_assert(offsetof(UPanelSlot, Content) == 0x0030);
static_assert(offsetof(UListViewBase, WidgetBarStyle) == 0x0130);
static_assert(offsetof(UListViewBase, ScrollBarVisibility) == 0x0894);
static_assert(offsetof(UListViewBase, EntryWidgetClass) == 0x0898);
static_assert(offsetof(UListViewBase, EntryWidgetPool) == 0x08D0);
static_assert(offsetof(UListView, Orientation) == 0x0A68);
static_assert(offsetof(UListView, SelectionMode) == 0x0A69);
static_assert(offsetof(UListView, ConsumeMouseWheel) == 0x0A6A);
static_assert(offsetof(UListView, ListItems) == 0x0A78);
static_assert(offsetof(UScrollBox, WidgetStyle) == 0x0140);
static_assert(offsetof(UScrollBox, WidgetBarStyle) == 0x0490);
static_assert(offsetof(UScrollBox, Style) == 0x0BF0);
static_assert(offsetof(UScrollBox, BarStyle) == 0x0BF8);
static_assert(offsetof(UScrollBox, Orientation) == 0x0C00);
static_assert(offsetof(UScrollBox, ScrollBarVisibility) == 0x0C01);
static_assert(offsetof(UScrollBox, ConsumeMouseWheel) == 0x0C02);
static_assert(offsetof(UScrollBox, ScrollbarThickness) == 0x0C04);
static_assert(offsetof(UScrollBox, ScrollbarPadding) == 0x0C0C);
static_assert(offsetof(UScrollBox, NavigationDestination) == 0x0C20);
static_assert(offsetof(UScrollBox, ScrollWhenFocusChanges) == 0x0C28);
static_assert(offsetof(UWidgetComponent, Space) == 0x0490);
static_assert(offsetof(UWidgetComponent, TimingPolicy) == 0x0491);
static_assert(offsetof(UWidgetComponent, WidgetClass) == 0x0498);
static_assert(offsetof(UWidgetComponent, DrawSize) == 0x04A0);
static_assert(offsetof(UWidgetComponent, CurrentDrawSize) == 0x04B8);
static_assert(offsetof(UWidgetComponent, Pivot) == 0x04C4);
static_assert(offsetof(UWidgetComponent, WindowVisibility) == 0x04CE);
static_assert(offsetof(UWidgetComponent, OwnerPlayer) == 0x04D0);
static_assert(offsetof(UWidgetComponent, BackgroundColor) == 0x04D8);
static_assert(offsetof(UWidgetComponent, TintColorAndOpacity) == 0x04E8);
static_assert(offsetof(UWidgetComponent, BlendMode) == 0x04FC);
static_assert(offsetof(UWidgetComponent, BodySetup) == 0x0500);
static_assert(offsetof(UWidgetComponent, TranslucentMaterial) == 0x0508);
static_assert(offsetof(UWidgetComponent, TranslucentMaterial_OneSided) == 0x0510);
static_assert(offsetof(UWidgetComponent, OpaqueMaterial) == 0x0518);
static_assert(offsetof(UWidgetComponent, OpaqueMaterial_OneSided) == 0x0520);
static_assert(offsetof(UWidgetComponent, MaskedMaterial) == 0x0528);
static_assert(offsetof(UWidgetComponent, MaskedMaterial_OneSided) == 0x0530);
static_assert(offsetof(UWidgetComponent, RenderTarget) == 0x0538);
static_assert(offsetof(UWidgetComponent, MaterialInstance) == 0x0540);
static_assert(offsetof(UWidgetComponent, SharedLayerName) == 0x054C);
static_assert(offsetof(UWidgetComponent, GeometryMode) == 0x0558);
static_assert(offsetof(UWidgetComponent, TickMode) == 0x0560);
static_assert(offsetof(UWidgetComponent, Widget) == 0x0588);
static_assert(offsetof(UBackgroundBlur, Padding) == 0x0140);
static_assert(offsetof(UBackgroundBlur, HorizontalAlignment) == 0x0150);
static_assert(offsetof(UBackgroundBlur, VerticalAlignment) == 0x0151);
static_assert(offsetof(UBackgroundBlur, LowQualityFallbackBrush) == 0x0160);
static_assert(offsetof(UBackgroundBlurSlot, Padding) == 0x0038);
static_assert(offsetof(UBackgroundBlurSlot, HorizontalAlignment) == 0x0048);
static_assert(offsetof(UBackgroundBlurSlot, VerticalAlignment) == 0x0049);
static_assert(offsetof(UPropertyBinding, SourceObject) == 0x0028);
static_assert(offsetof(UPropertyBinding, SourcePath) == 0x0030);
static_assert(offsetof(UPropertyBinding, DestinationProperty) == 0x0058);
static_assert(offsetof(UBorder, HorizontalAlignment) == 0x0140);
static_assert(offsetof(UBorder, VerticalAlignment) == 0x0141);
static_assert(offsetof(UBorder, ContentColorAndOpacity) == 0x0144);
static_assert(offsetof(UBorder, Padding) == 0x0164);
static_assert(offsetof(UBorder, Background) == 0x0180);
static_assert(offsetof(UBorder, BrushColor) == 0x0260);
static_assert(offsetof(UBorder, DesiredSizeScale) == 0x0280);
static_assert(offsetof(UBorderSlot, Padding) == 0x0038);
static_assert(offsetof(UBorderSlot, HorizontalAlignment) == 0x0048);
static_assert(offsetof(UBorderSlot, VerticalAlignment) == 0x0049);
static_assert(offsetof(UButtonSlot, Padding) == 0x0038);
static_assert(offsetof(UButtonSlot, HorizontalAlignment) == 0x0048);
static_assert(offsetof(UButtonSlot, VerticalAlignment) == 0x0049);
static_assert(offsetof(FAnchorData, Offsets) == 0x0000);
static_assert(offsetof(FAnchorData, Anchors) == 0x0010);
static_assert(offsetof(FAnchorData, Alignment) == 0x0020);
static_assert(offsetof(UCanvasPanelSlot, LayoutData) == 0x0038);
static_assert(offsetof(UCheckBox, CheckedState) == 0x0140);
static_assert(offsetof(UCheckBox, WidgetStyle) == 0x0160);
static_assert(offsetof(UCheckBox, Style) == 0x0970);
static_assert(offsetof(UCheckBox, UncheckedImage) == 0x0978);
static_assert(offsetof(UCheckBox, UncheckedHoveredImage) == 0x0980);
static_assert(offsetof(UCheckBox, UncheckedPressedImage) == 0x0988);
static_assert(offsetof(UCheckBox, CheckedImage) == 0x0990);
static_assert(offsetof(UCheckBox, CheckedHoveredImage) == 0x0998);
static_assert(offsetof(UCheckBox, CheckedPressedImage) == 0x09A0);
static_assert(offsetof(UCheckBox, UndeterminedImage) == 0x09A8);
static_assert(offsetof(UCheckBox, UndeterminedHoveredImage) == 0x09B0);
static_assert(offsetof(UCheckBox, UndeterminedPressedImage) == 0x09B8);
static_assert(offsetof(UCheckBox, HorizontalAlignment) == 0x09C0);
static_assert(offsetof(UCheckBox, Padding) == 0x09C4);
static_assert(offsetof(UCheckBox, BorderBackgroundColor) == 0x09D8);
static_assert(offsetof(UCheckBox, ClickMethod) == 0x0A00);
static_assert(offsetof(UCheckBox, TouchMethod) == 0x0A01);
static_assert(offsetof(UCheckBox, PressMethod) == 0x0A02);
static_assert(offsetof(UCircularThrobber, PieceImage) == 0x0138);
static_assert(offsetof(UCircularThrobber, Image) == 0x0140);
static_assert(offsetof(UComboBox, Items) == 0x0128);
static_assert(offsetof(UComboBoxString, DefaultOptions) == 0x0128);
static_assert(offsetof(UComboBoxString, SelectedOption) == 0x0138);
static_assert(offsetof(UComboBoxString, WidgetStyle) == 0x0150);
static_assert(offsetof(UComboBoxString, ItemStyle) == 0x0710);
static_assert(offsetof(UComboBoxString, ContentPadding) == 0x12D0);
static_assert(offsetof(UComboBoxString, Font) == 0x12E8);
static_assert(offsetof(UComboBoxString, ForegroundColor) == 0x1340);
static_assert(offsetof(UDragDropOperation, Tag) == 0x0028);
static_assert(offsetof(UDragDropOperation, Payload) == 0x0038);
static_assert(offsetof(UDragDropOperation, DefaultDragVisual) == 0x0040);
static_assert(offsetof(UDragDropOperation, Pivot) == 0x0048);
static_assert(offsetof(UDragDropOperation, Offset) == 0x004C);
static_assert(offsetof(UDynamicEntryBox, EntryWidgetClass) == 0x01F8);
static_assert(offsetof(UEditableText, Text) == 0x0128);
static_assert(offsetof(UEditableText, HintText) == 0x0150);
static_assert(offsetof(UEditableText, WidgetStyle) == 0x0180);
static_assert(offsetof(UEditableText, Style) == 0x0480);
static_assert(offsetof(UEditableText, BackgroundImageSelected) == 0x0488);
static_assert(offsetof(UEditableText, BackgroundImageComposing) == 0x0490);
static_assert(offsetof(UEditableText, CaretImage) == 0x0498);
static_assert(offsetof(UEditableText, Font) == 0x04A0);
static_assert(offsetof(UEditableText, ColorAndOpacity) == 0x04F8);
static_assert(offsetof(UEditableText, KeyboardType) == 0x052E);
static_assert(offsetof(UEditableText, VirtualKeyboardOptions) == 0x052F);
static_assert(offsetof(UEditableText, VirtualKeyboardTrigger) == 0x0530);
static_assert(offsetof(UEditableText, VirtualKeyboardDismissAction) == 0x0531);
static_assert(offsetof(UEditableText, Justification) == 0x0532);
static_assert(offsetof(UEditableText, ShapedTextOptions) == 0x0533);
static_assert(offsetof(UEditableTextBox, Text) == 0x0128);
static_assert(offsetof(UEditableTextBox, WidgetStyle) == 0x0150);
static_assert(offsetof(UEditableTextBox, Style) == 0x0D00);
static_assert(offsetof(UEditableTextBox, HintText) == 0x0D08);
static_assert(offsetof(UEditableTextBox, Font) == 0x0D30);
static_assert(offsetof(UEditableTextBox, ForegroundColor) == 0x0D88);
static_assert(offsetof(UEditableTextBox, BackgroundColor) == 0x0D98);
static_assert(offsetof(UEditableTextBox, ReadOnlyForegroundColor) == 0x0DA8);
static_assert(offsetof(UEditableTextBox, Padding) == 0x0DC0);
static_assert(offsetof(UEditableTextBox, KeyboardType) == 0x0DD6);
static_assert(offsetof(UEditableTextBox, VirtualKeyboardOptions) == 0x0DD7);
static_assert(offsetof(UEditableTextBox, VirtualKeyboardTrigger) == 0x0DD8);
static_assert(offsetof(UEditableTextBox, VirtualKeyboardDismissAction) == 0x0DD9);
static_assert(offsetof(UEditableTextBox, Justification) == 0x0DDA);
static_assert(offsetof(UEditableTextBox, ShapedTextOptions) == 0x0DDB);
static_assert(offsetof(UEditableTextBox, CaretImageBrush) == 0x0DE0);
static_assert(offsetof(UEditableTextBox, CaretOffset) == 0x0EB0);
static_assert(offsetof(UEditableTextBox, CaretExtraSize) == 0x0EB8);
static_assert(offsetof(UExpandableArea, Style) == 0x0130);
static_assert(offsetof(UExpandableArea, BorderBrush) == 0x02F0);
static_assert(offsetof(UExpandableArea, BorderColor) == 0x03C0);
static_assert(offsetof(UExpandableArea, HeaderPadding) == 0x03F0);
static_assert(offsetof(UExpandableArea, AreaPadding) == 0x0400);
static_assert(offsetof(UExpandableArea, HeaderContent) == 0x0420);
static_assert(offsetof(UExpandableArea, BodyContent) == 0x0428);
static_assert(offsetof(UGridPanel, ColumnFill) == 0x0140);
static_assert(offsetof(UGridPanel, RowFill) == 0x0150);
static_assert(offsetof(UGridSlot, Padding) == 0x0038);
static_assert(offsetof(UGridSlot, HorizontalAlignment) == 0x0048);
static_assert(offsetof(UGridSlot, VerticalAlignment) == 0x0049);
static_assert(offsetof(UGridSlot, Nudge) == 0x0060);
static_assert(offsetof(UHorizontalBoxSlot, Padding) == 0x0040);
static_assert(offsetof(UHorizontalBoxSlot, Size) == 0x0050);
static_assert(offsetof(UHorizontalBoxSlot, HorizontalAlignment) == 0x0058);
static_assert(offsetof(UHorizontalBoxSlot, VerticalAlignment) == 0x0059);
static_assert(offsetof(UImage, Brush) == 0x0130);
static_assert(offsetof(UImage, ColorAndOpacity) == 0x0210);
static_assert(offsetof(UInputKeySelector, WidgetStyle) == 0x0130);
static_assert(offsetof(UInputKeySelector, TextStyle) == 0x04D0);
static_assert(offsetof(UInputKeySelector, SelectedKey) == 0x0830);
static_assert(offsetof(UInputKeySelector, Font) == 0x0850);
static_assert(offsetof(UInputKeySelector, Margin) == 0x08A8);
static_assert(offsetof(UInputKeySelector, ColorAndOpacity) == 0x08B8);
static_assert(offsetof(UInputKeySelector, KeySelectionText) == 0x08C8);
static_assert(offsetof(UInputKeySelector, NoKeySpecifiedText) == 0x08E0);
static_assert(offsetof(UInputKeySelector, EscapeKeys) == 0x0900);
static_assert(offsetof(UMenuAnchor, MenuClass) == 0x0140);
static_assert(offsetof(UMenuAnchor, Placement) == 0x0168);
static_assert(offsetof(UMovieSceneEntitySystem, Linker) == 0x0028);
static_assert(offsetof(UMovieScenePropertySystem, InstantiatorSystem) == 0x0040);
static_assert(offsetof(UMovieSceneSignedObject, Signature) == 0x0028);
static_assert(offsetof(FMovieSceneSectionEvalOptions, CompletionMode) == 0x0001);
static_assert(offsetof(FOptionalMovieSceneBlendType, BlendType) == 0x0000);
static_assert(offsetof(UMovieSceneSection, EvalOptions) == 0x0050);
static_assert(offsetof(UMovieSceneSection, Easing) == 0x0058);
static_assert(offsetof(UMovieSceneSection, SectionRange) == 0x0090);
static_assert(offsetof(UMovieSceneSection, PreRollFrames) == 0x00A0);
static_assert(offsetof(UMovieSceneSection, PostRollFrames) == 0x00A4);
static_assert(offsetof(UMovieSceneSection, BlendType) == 0x00C9);
static_assert(offsetof(FMovieSceneTangentData, TangentWeightMode) == 0x0010);
static_assert(offsetof(FMovieSceneFloatValue, Tangent) == 0x0004);
static_assert(offsetof(FMovieSceneFloatValue, InterpMode) == 0x0018);
static_assert(offsetof(FMovieSceneFloatValue, TangentMode) == 0x0019);
static_assert(offsetof(FMovieSceneFloatChannel, PreInfinityExtrap) == 0x0008);
static_assert(offsetof(FMovieSceneFloatChannel, PostInfinityExtrap) == 0x0009);
static_assert(offsetof(FMovieSceneFloatChannel, Times) == 0x0010);
static_assert(offsetof(FMovieSceneFloatChannel, Values) == 0x0020);
static_assert(offsetof(FMovieSceneFloatChannel, KeyHandles) == 0x0038);
static_assert(offsetof(FMovieSceneFloatChannel, TickResolution) == 0x0098);
static_assert(offsetof(UMovieScene2DTransformSection, TransformMask) == 0x00F0);
static_assert(offsetof(UMovieScene2DTransformSection, Translation) == 0x00F8);
static_assert(offsetof(UMovieScene2DTransformSection, Rotation) == 0x0238);
static_assert(offsetof(UMovieScene2DTransformSection, Scale) == 0x02D8);
static_assert(offsetof(UMovieScene2DTransformSection, Shear) == 0x0418);
static_assert(offsetof(FMovieSceneTrackEvaluationFieldEntry, Section) == 0x0000);
static_assert(offsetof(FMovieSceneTrackEvaluationFieldEntry, Range) == 0x0008);
static_assert(offsetof(FMovieSceneTrackEvaluationFieldEntry, ForcedTime) == 0x0018);
static_assert(offsetof(FMovieSceneTrackEvaluationFieldEntry, Flags) == 0x001C);
static_assert(offsetof(FMovieSceneTrackEvaluationField, Entries) == 0x0000);
static_assert(offsetof(UMovieSceneTrack, EvalOptions) == 0x0050);
static_assert(offsetof(UMovieSceneTrack, EvaluationFieldGuid) == 0x0058);
static_assert(offsetof(UMovieSceneTrack, EvaluationField) == 0x0068);
static_assert(offsetof(FMovieScenePropertyBinding, PropertyName) == 0x0000);
static_assert(offsetof(FMovieScenePropertyBinding, PropertyPath) == 0x0008);
static_assert(offsetof(UMovieScenePropertyTrack, SectionToKey) == 0x0078);
static_assert(offsetof(UMovieScenePropertyTrack, PropertyBinding) == 0x0080);
static_assert(offsetof(UMovieScenePropertyTrack, Sections) == 0x0098);
static_assert(offsetof(UMovieSceneMarginSection, TopCurve) == 0x00E8);
static_assert(offsetof(UMovieSceneMarginSection, LeftCurve) == 0x0188);
static_assert(offsetof(UMovieSceneMarginSection, RightCurve) == 0x0228);
static_assert(offsetof(UMovieSceneMarginSection, BottomCurve) == 0x02C8);
static_assert(offsetof(UMovieSceneMaterialTrack, Sections) == 0x0078);
static_assert(offsetof(UMovieSceneWidgetMaterialTrack, BrushPropertyNamePath) == 0x0090);
static_assert(offsetof(UMovieSceneWidgetMaterialTrack, TrackName) == 0x00A0);
static_assert(offsetof(UMultiLineEditableText, Text) == 0x0148);
static_assert(offsetof(UMultiLineEditableText, HintText) == 0x0160);
static_assert(offsetof(UMultiLineEditableText, WidgetStyle) == 0x0190);
static_assert(offsetof(UMultiLineEditableText, Font) == 0x04F8);
static_assert(offsetof(UMultiLineEditableText, VirtualKeyboardOptions) == 0x0555);
static_assert(offsetof(UMultiLineEditableText, VirtualKeyboardDismissAction) == 0x0556);
static_assert(offsetof(UMultiLineEditableTextBox, Text) == 0x0148);
static_assert(offsetof(UMultiLineEditableTextBox, HintText) == 0x0160);
static_assert(offsetof(UMultiLineEditableTextBox, WidgetStyle) == 0x0190);
static_assert(offsetof(UMultiLineEditableTextBox, TextStyle) == 0x0D40);
static_assert(offsetof(UMultiLineEditableTextBox, VirtualKeyboardOptions) == 0x10A3);
static_assert(offsetof(UMultiLineEditableTextBox, VirtualKeyboardDismissAction) == 0x10A4);
static_assert(offsetof(UMultiLineEditableTextBox, Style) == 0x10A8);
static_assert(offsetof(UMultiLineEditableTextBox, Font) == 0x10B0);
static_assert(offsetof(UMultiLineEditableTextBox, ForegroundColor) == 0x1108);
static_assert(offsetof(UMultiLineEditableTextBox, BackgroundColor) == 0x1118);
static_assert(offsetof(UMultiLineEditableTextBox, ReadOnlyForegroundColor) == 0x1128);
static_assert(offsetof(UOverlaySlot, Padding) == 0x0040);
static_assert(offsetof(UOverlaySlot, HorizontalAlignment) == 0x0050);
static_assert(offsetof(UOverlaySlot, VerticalAlignment) == 0x0051);
static_assert(offsetof(UProgressBar, WidgetStyle) == 0x0130);
static_assert(offsetof(UProgressBar, Style) == 0x03B0);
static_assert(offsetof(UProgressBar, BackgroundImage) == 0x03B8);
static_assert(offsetof(UProgressBar, FillImage) == 0x03C0);
static_assert(offsetof(UProgressBar, MarqueeImage) == 0x03C8);
static_assert(offsetof(UProgressBar, BarFillType) == 0x03D4);
static_assert(offsetof(UProgressBar, BorderPadding) == 0x03D8);
static_assert(offsetof(UProgressBar, FillColorAndOpacity) == 0x03F0);
static_assert(offsetof(URichTextBlock, Text) == 0x0148);
static_assert(offsetof(URichTextBlock, TextStyleSet) == 0x0160);
static_assert(offsetof(URichTextBlock, DecoratorClasses) == 0x0168);
static_assert(offsetof(URichTextBlock, DefaultTextStyleOverride) == 0x0180);
static_assert(offsetof(URichTextBlock, TextTransformPolicy) == 0x04E4);
static_assert(offsetof(URichTextBlock, DefaultTextStyle) == 0x04F0);
static_assert(offsetof(URichTextBlock, InstanceDecorators) == 0x0850);
static_assert(offsetof(URichTextBlockImageDecorator, ImageSet) == 0x0028);
static_assert(offsetof(USafeZoneSlot, SafeAreaScale) == 0x003C);
static_assert(offsetof(USafeZoneSlot, HAlign) == 0x004C);
static_assert(offsetof(USafeZoneSlot, VAlign) == 0x004D);
static_assert(offsetof(USafeZoneSlot, Padding) == 0x0050);
static_assert(offsetof(UScaleBox, Stretch) == 0x0140);
static_assert(offsetof(UScaleBox, StretchDirection) == 0x0141);
static_assert(offsetof(UScaleBoxSlot, Padding) == 0x0038);
static_assert(offsetof(UScaleBoxSlot, HorizontalAlignment) == 0x0048);
static_assert(offsetof(UScaleBoxSlot, VerticalAlignment) == 0x0049);
static_assert(offsetof(UScrollBar, WidgetStyle) == 0x0130);
static_assert(offsetof(UScrollBar, Style) == 0x0890);
static_assert(offsetof(UScrollBar, Orientation) == 0x089A);
static_assert(offsetof(UScrollBar, Thickness) == 0x089C);
static_assert(offsetof(UScrollBar, Padding) == 0x08A4);
static_assert(offsetof(UScrollBoxSlot, Padding) == 0x0038);
static_assert(offsetof(UScrollBoxSlot, HorizontalAlignment) == 0x0048);
static_assert(offsetof(UScrollBoxSlot, VerticalAlignment) == 0x0049);
static_assert(offsetof(USizeBox, OptionContentAnchor) == 0x0174);
static_assert(offsetof(USizeBoxSlot, Padding) == 0x0038);
static_assert(offsetof(USizeBoxSlot, HorizontalAlignment) == 0x0058);
static_assert(offsetof(USizeBoxSlot, VerticalAlignment) == 0x0059);
static_assert(offsetof(FSlateMeshVertex, Position) == 0x0000);
static_assert(offsetof(FSlateMeshVertex, Color) == 0x0008);
static_assert(offsetof(FSlateMeshVertex, UV0) == 0x000C);
static_assert(offsetof(FSlateMeshVertex, UV1) == 0x0014);
static_assert(offsetof(FSlateMeshVertex, UV2) == 0x001C);
static_assert(offsetof(FSlateMeshVertex, UV3) == 0x0024);
static_assert(offsetof(FSlateMeshVertex, UV4) == 0x002C);
static_assert(offsetof(FSlateMeshVertex, UV5) == 0x0034);
static_assert(offsetof(USlateVectorArtData, VertexData) == 0x0028);
static_assert(offsetof(USlateVectorArtData, IndexData) == 0x0038);
static_assert(offsetof(USlateVectorArtData, Material) == 0x0048);
static_assert(offsetof(USlateVectorArtData, ExtentMin) == 0x0050);
static_assert(offsetof(USlateVectorArtData, ExtentMax) == 0x0058);
static_assert(offsetof(USlateAccessibleWidgetData, AccessibleBehavior) == 0x0029);
static_assert(offsetof(USlateAccessibleWidgetData, AccessibleSummaryBehavior) == 0x002A);
static_assert(offsetof(USlateAccessibleWidgetData, AccessibleText) == 0x0030);
static_assert(offsetof(USlateAccessibleWidgetData, AccessibleSummaryText) == 0x0058);
static_assert(offsetof(USlider, WidgetStyle) == 0x0150);
static_assert(offsetof(USlider, Orientation) == 0x0650);
static_assert(offsetof(USlider, SliderBarColor) == 0x0654);
static_assert(offsetof(USlider, SliderHandleColor) == 0x0664);
static_assert(offsetof(USpacer, Size) == 0x0128);
static_assert(offsetof(USpinBox, WidgetStyle) == 0x0140);
static_assert(offsetof(USpinBox, Style) == 0x05A0);
static_assert(offsetof(USpinBox, Font) == 0x05C0);
static_assert(offsetof(USpinBox, Justification) == 0x0618);
static_assert(offsetof(USpinBox, ForegroundColor) == 0x0628);
static_assert(offsetof(UThrobber, PieceImage) == 0x0130);
static_assert(offsetof(UThrobber, Image) == 0x0140);
static_assert(offsetof(UTileView, TileAlignment) == 0x0B00);
static_assert(offsetof(FMovieSceneRootEvaluationTemplateInstance, WeakRootSequence) == 0x0000);
static_assert(offsetof(FMovieSceneRootEvaluationTemplateInstance, CompiledDataManager) == 0x0008);
static_assert(offsetof(FMovieSceneRootEvaluationTemplateInstance, EntitySystemLinker) == 0x0018);
static_assert(offsetof(FMovieSceneRootEvaluationTemplateInstance, DirectorInstances) == 0x0090);
static_assert(offsetof(UUMGSequencePlayer, Animation) == 0x0410);
static_assert(offsetof(UUMGSequencePlayer, RootTemplateInstance) == 0x0420);
static_assert(offsetof(UUMGSequenceTickManager, Linker) == 0x0078);
static_assert(offsetof(UUniformGridPanel, SlotPadding) == 0x0140);
static_assert(offsetof(UUniformGridSlot, HorizontalAlignment) == 0x0038);
static_assert(offsetof(UUniformGridSlot, VerticalAlignment) == 0x0039);
static_assert(offsetof(UVerticalBoxSlot, Size) == 0x0038);
static_assert(offsetof(UVerticalBoxSlot, Padding) == 0x0040);
static_assert(offsetof(UVerticalBoxSlot, HorizontalAlignment) == 0x0058);
static_assert(offsetof(UVerticalBoxSlot, VerticalAlignment) == 0x0059);
static_assert(offsetof(UViewport, BackgroundColor) == 0x0140);
static_assert(offsetof(UMovieSceneSequence, CompiledData) == 0x0050);
static_assert(offsetof(UMovieSceneSequence, DefaultCompletionMode) == 0x0058);
static_assert(offsetof(UMovieSceneSequence, SequenceFlags) == 0x005B);
static_assert(offsetof(FWidgetAnimationBinding, WidgetName) == 0x0000);
static_assert(offsetof(FWidgetAnimationBinding, SlotWidgetName) == 0x0008);
static_assert(offsetof(FWidgetAnimationBinding, AnimationGuid) == 0x0010);
static_assert(offsetof(UWidgetAnimation, MovieScene) == 0x0060);
static_assert(offsetof(UWidgetAnimation, AnimationBindings) == 0x0068);
static_assert(offsetof(UWidgetAnimation, DisplayLabel) == 0x0080);
static_assert(offsetof(FBlueprintWidgetAnimationDelegateBinding, Action) == 0x0000);
static_assert(offsetof(FBlueprintWidgetAnimationDelegateBinding, AnimationToBind) == 0x0004);
static_assert(offsetof(FBlueprintWidgetAnimationDelegateBinding, FunctionNameToBind) == 0x000C);
static_assert(offsetof(FBlueprintWidgetAnimationDelegateBinding, UserTag) == 0x0014);
static_assert(offsetof(UWidgetAnimationDelegateBinding, WidgetAnimationDelegateBindings) == 0x0028);
static_assert(offsetof(FDelegateRuntimeBinding, ObjectName) == 0x0000);
static_assert(offsetof(FDelegateRuntimeBinding, PropertyName) == 0x0010);
static_assert(offsetof(FDelegateRuntimeBinding, FunctionName) == 0x0018);
static_assert(offsetof(FDelegateRuntimeBinding, SourcePath) == 0x0020);
static_assert(offsetof(FDelegateRuntimeBinding, Kind) == 0x0048);
static_assert(offsetof(UWidgetBlueprintGeneratedClass, WidgetTree) == 0x0328);
static_assert(offsetof(UWidgetBlueprintGeneratedClass, Bindings) == 0x0338);
static_assert(offsetof(UWidgetBlueprintGeneratedClass, Animations) == 0x0348);
static_assert(offsetof(UWidgetBlueprintGeneratedClass, NamedSlots) == 0x0358);
static_assert(offsetof(UWidgetInteractionComponent, TraceChannel) == 0x0220);
static_assert(offsetof(UWidgetInteractionComponent, InteractionSource) == 0x0228);
static_assert(offsetof(UWidgetInteractionComponent, DebugColor) == 0x0234);
static_assert(offsetof(UWidgetInteractionComponent, CustomHitResult) == 0x02C0);
static_assert(offsetof(UWidgetInteractionComponent, LocalHitLocation) == 0x034C);
static_assert(offsetof(UWidgetInteractionComponent, LastLocalHitLocation) == 0x0354);
static_assert(offsetof(UWidgetInteractionComponent, HoveredWidgetComponent) == 0x0360);
static_assert(offsetof(UWidgetInteractionComponent, LastHitResult) == 0x0368);
static_assert(offsetof(FWidgetNavigationData, Rule) == 0x0000);
static_assert(offsetof(FWidgetNavigationData, WidgetToFocus) == 0x0004);
static_assert(offsetof(FWidgetNavigationData, Widget) == 0x000C);
static_assert(offsetof(UWidgetNavigation, Up) == 0x0028);
static_assert(offsetof(UWidgetNavigation, Down) == 0x004C);
static_assert(offsetof(UWidgetNavigation, Left) == 0x0070);
static_assert(offsetof(UWidgetNavigation, Right) == 0x0094);
static_assert(offsetof(UWidgetNavigation, Next) == 0x00B8);
static_assert(offsetof(UWidgetNavigation, Previous) == 0x00DC);
static_assert(offsetof(UWidgetSwitcherSlot, Padding) == 0x0040);
static_assert(offsetof(UWidgetSwitcherSlot, HorizontalAlignment) == 0x0050);
static_assert(offsetof(UWidgetSwitcherSlot, VerticalAlignment) == 0x0051);
static_assert(offsetof(UWidgetTree, RootWidget) == 0x0028);
static_assert(offsetof(UWindowTitleBarAreaSlot, Padding) == 0x0038);
static_assert(offsetof(UWindowTitleBarAreaSlot, HorizontalAlignment) == 0x0048);
static_assert(offsetof(UWindowTitleBarAreaSlot, VerticalAlignment) == 0x0049);
static_assert(offsetof(UWrapBox, InnerSlotPadding) == 0x0140);
static_assert(offsetof(UWrapBox, Orientation) == 0x0152);
static_assert(offsetof(UWrapBoxSlot, Padding) == 0x0038);
static_assert(offsetof(UWrapBoxSlot, HorizontalAlignment) == 0x0050);
static_assert(offsetof(UWrapBoxSlot, VerticalAlignment) == 0x0051);
static_assert(offsetof(FMovieSceneEvalTemplate, CompletionMode) == 0x0010);
static_assert(offsetof(FMovieSceneEvalTemplate, SourceSectionPtr) == 0x0014);
static_assert(offsetof(FMovieScenePropertySectionData, PropertyName) == 0x0000);
static_assert(offsetof(FMovieScenePropertySectionData, PropertyPath) == 0x0008);
static_assert(offsetof(FMovieScenePropertySectionTemplate, PropertyData) == 0x0020);
static_assert(offsetof(FMovieSceneMarginSectionTemplate, TopCurve) == 0x0038);
static_assert(offsetof(FMovieSceneMarginSectionTemplate, LeftCurve) == 0x00D8);
static_assert(offsetof(FMovieSceneMarginSectionTemplate, RightCurve) == 0x0178);
static_assert(offsetof(FMovieSceneMarginSectionTemplate, BottomCurve) == 0x0218);
static_assert(offsetof(FMovieSceneMarginSectionTemplate, BlendType) == 0x02B8);
static_assert(offsetof(FScalarParameterNameAndCurve, ParameterName) == 0x0000);
static_assert(offsetof(FScalarParameterNameAndCurve, ParameterCurve) == 0x0008);
static_assert(offsetof(FMovieSceneBoolChannel, Times) == 0x0008);
static_assert(offsetof(FMovieSceneBoolChannel, Values) == 0x0020);
static_assert(offsetof(FBoolParameterNameAndCurve, ParameterName) == 0x0000);
static_assert(offsetof(FBoolParameterNameAndCurve, ParameterCurve) == 0x0008);
static_assert(offsetof(FVector2DParameterNameAndCurves, ParameterName) == 0x0000);
static_assert(offsetof(FVector2DParameterNameAndCurves, XCurve) == 0x0008);
static_assert(offsetof(FVector2DParameterNameAndCurves, YCurve) == 0x00A8);
static_assert(offsetof(FVectorParameterNameAndCurves, ParameterName) == 0x0000);
static_assert(offsetof(FVectorParameterNameAndCurves, XCurve) == 0x0008);
static_assert(offsetof(FVectorParameterNameAndCurves, YCurve) == 0x00A8);
static_assert(offsetof(FVectorParameterNameAndCurves, ZCurve) == 0x0148);
static_assert(offsetof(FColorParameterNameAndCurves, ParameterName) == 0x0000);
static_assert(offsetof(FColorParameterNameAndCurves, RedCurve) == 0x0008);
static_assert(offsetof(FColorParameterNameAndCurves, GreenCurve) == 0x00A8);
static_assert(offsetof(FColorParameterNameAndCurves, BlueCurve) == 0x0148);
static_assert(offsetof(FColorParameterNameAndCurves, AlphaCurve) == 0x01E8);
static_assert(offsetof(FTransformParameterNameAndCurves, ParameterName) == 0x0000);
static_assert(offsetof(FTransformParameterNameAndCurves, Translation) == 0x0008);
static_assert(offsetof(FTransformParameterNameAndCurves, Rotation) == 0x01E8);
static_assert(offsetof(FTransformParameterNameAndCurves, Scale) == 0x03C8);
static_assert(offsetof(FMovieSceneParameterSectionTemplate, Scalars) == 0x0020);
static_assert(offsetof(FMovieSceneParameterSectionTemplate, Bools) == 0x0030);
static_assert(offsetof(FMovieSceneParameterSectionTemplate, Vector2Ds) == 0x0040);
static_assert(offsetof(FMovieSceneParameterSectionTemplate, Vectors) == 0x0050);
static_assert(offsetof(FMovieSceneParameterSectionTemplate, Colors) == 0x0060);
static_assert(offsetof(FMovieSceneParameterSectionTemplate, Transforms) == 0x0070);
static_assert(offsetof(FMovieSceneWidgetMaterialSectionTemplate, BrushPropertyNamePath) == 0x0080);
static_assert(offsetof(FRichTextStyleRow, TextStyle) == 0x0010);
static_assert(offsetof(FRichImageRow, Brush) == 0x0010);
static_assert(offsetof(FMovieSceneSequencePlaybackSettings, LoopCount) == 0x0004);
static_assert(offsetof(FMovieSceneSequenceReplProperties, LastKnownPosition) == 0x0000);
static_assert(offsetof(FMovieSceneSequenceReplProperties, LastKnownStatus) == 0x0008);
static_assert(offsetof(UMovieSceneSequencePlayer, status) == 0x0460);
static_assert(offsetof(UMovieSceneSequencePlayer, Sequence) == 0x0468);
static_assert(offsetof(UMovieSceneSequencePlayer, StartTime) == 0x0470);
static_assert(offsetof(UMovieSceneSequencePlayer, PlaybackSettings) == 0x0480);
static_assert(offsetof(UMovieSceneSequencePlayer, RootTemplateInstance) == 0x0498);
static_assert(offsetof(UMovieSceneSequencePlayer, NetSyncProps) == 0x05E8);
static_assert(offsetof(UMovieSceneSequencePlayer, TickManager) == 0x0608);
static_assert(offsetof(FMovieSceneSectionParameters, StartFrameOffset) == 0x0000);
static_assert(offsetof(FMovieSceneSectionParameters, EndFrameOffset) == 0x0008);
static_assert(offsetof(FMovieSceneSectionParameters, FirstLoopStartFrameOffset) == 0x000C);
static_assert(offsetof(UMovieSceneSubSection, Parameters) == 0x00E8);
static_assert(offsetof(UMovieSceneSubSection, SubSequence) == 0x0118);
static_assert(offsetof(UMovieSceneSubSection, ActorToRecord) == 0x0120);
static_assert(offsetof(UMovieSceneSubSection, TargetSequenceName) == 0x0140);
static_assert(offsetof(UMovieSceneSubSection, TargetPathToRecordTo) == 0x0150);
static_assert(offsetof(UMovieSceneSubTrack, Sections) == 0x0078);
static_assert(offsetof(FMovieSceneSpawnable, SpawnTransform) == 0x0000);
static_assert(offsetof(FMovieSceneSpawnable, Tags) == 0x0030);
static_assert(offsetof(FMovieSceneSpawnable, Guid) == 0x0044);
static_assert(offsetof(FMovieSceneSpawnable, Name) == 0x0058);
static_assert(offsetof(FMovieSceneSpawnable, ObjectTemplate) == 0x0068);
static_assert(offsetof(FMovieSceneSpawnable, ChildPossessables) == 0x0070);
static_assert(offsetof(FMovieSceneSpawnable, Ownership) == 0x0080);
static_assert(offsetof(FMovieSceneSpawnable, LevelName) == 0x0084);
static_assert(offsetof(FMovieScenePossessable, Tags) == 0x0000);
static_assert(offsetof(FMovieScenePossessable, Guid) == 0x0010);
static_assert(offsetof(FMovieScenePossessable, Name) == 0x0020);
static_assert(offsetof(FMovieScenePossessable, PossessedObjectClass) == 0x0030);
static_assert(offsetof(FMovieScenePossessable, ParentGuid) == 0x0038);
static_assert(offsetof(FMovieSceneBinding, ObjectGuid) == 0x0000);
static_assert(offsetof(FMovieSceneBinding, BindingName) == 0x0010);
static_assert(offsetof(FMovieSceneBinding, Tracks) == 0x0020);
static_assert(offsetof(FMovieSceneObjectBindingID, Space) == 0x0004);
static_assert(offsetof(FMovieSceneObjectBindingID, Guid) == 0x0008);
static_assert(offsetof(FMovieSceneObjectBindingIDs, IDs) == 0x0000);
static_assert(offsetof(FMovieSceneMarkedFrame, FrameNumber) == 0x0000);
static_assert(offsetof(FMovieSceneMarkedFrame, Label) == 0x0008);
static_assert(offsetof(UMovieScene, Spawnables) == 0x0050);
static_assert(offsetof(UMovieScene, Possessables) == 0x0060);
static_assert(offsetof(UMovieScene, ObjectBindings) == 0x0070);
static_assert(offsetof(UMovieScene, BindingGroups) == 0x0080);
static_assert(offsetof(UMovieScene, MasterTracks) == 0x00D0);
static_assert(offsetof(UMovieScene, CameraCutTrack) == 0x00E0);
static_assert(offsetof(UMovieScene, SelectionRange) == 0x00E8);
static_assert(offsetof(UMovieScene, PlaybackRange) == 0x00F8);
static_assert(offsetof(UMovieScene, TickResolution) == 0x0108);
static_assert(offsetof(UMovieScene, DisplayRate) == 0x0110);
static_assert(offsetof(UMovieScene, EvaluationType) == 0x0118);
static_assert(offsetof(UMovieScene, ClockSource) == 0x0119);
static_assert(offsetof(UMovieScene, CustomClockSourcePath) == 0x0120);
static_assert(offsetof(UMovieScene, MarkedFrames) == 0x0138);
static_assert(offsetof(FMovieSceneBindingOverrideData, ObjectBindingID) == 0x0000);
static_assert(offsetof(FMovieSceneBindingOverrideData, Object) == 0x0018);
static_assert(offsetof(UMovieSceneBindingOverrides, BindingData) == 0x0028);
static_assert(offsetof(UMovieSceneBoolSection, BoolCurve) == 0x00F0);
static_assert(offsetof(FMovieSceneEvaluationTrack, ObjectBindingID) == 0x0000);
static_assert(offsetof(FMovieSceneEvaluationTrack, EvaluationMethod) == 0x0012);
static_assert(offsetof(FMovieSceneEvaluationTrack, SourceTrack) == 0x0014);
static_assert(offsetof(FMovieSceneEvaluationTrack, ChildTemplates) == 0x0020);
static_assert(offsetof(FMovieSceneEvaluationTrack, TrackTemplate) == 0x0030);
static_assert(offsetof(FMovieSceneEvaluationTrack, EvaluationGroup) == 0x0068);
static_assert(offsetof(FMovieSceneTemplateGenerationLedger, LastTrackIdentifier) == 0x0000);
static_assert(offsetof(FMovieSceneTemplateGenerationLedger, TrackSignatureToTrackIdentifier) == 0x0008);
static_assert(offsetof(FMovieSceneTemplateGenerationLedger, SubSectionRanges) == 0x0058);
static_assert(offsetof(FMovieSceneEvaluationTemplate, Tracks) == 0x0000);
static_assert(offsetof(FMovieSceneEvaluationTemplate, SequenceSignature) == 0x00A0);
static_assert(offsetof(FMovieSceneEvaluationTemplate, TemplateSerialNumber) == 0x00B0);
static_assert(offsetof(FMovieSceneEvaluationTemplate, TemplateLedger) == 0x00B8);
static_assert(offsetof(FMovieSceneSequenceHierarchyNode, ParentID) == 0x0000);
static_assert(offsetof(FMovieSceneSequenceHierarchyNode, Children) == 0x0008);
static_assert(offsetof(FMovieSceneTimeTransform, Offset) == 0x0004);
static_assert(offsetof(FMovieSceneTimeWarping, Start) == 0x0000);
static_assert(offsetof(FMovieSceneTimeWarping, End) == 0x0004);
static_assert(offsetof(FMovieSceneNestedSequenceTransform, LinearTransform) == 0x0000);
static_assert(offsetof(FMovieSceneNestedSequenceTransform, Warping) == 0x000C);
static_assert(offsetof(FMovieSceneSequenceTransform, LinearTransform) == 0x0000);
static_assert(offsetof(FMovieSceneSequenceTransform, NestedTransforms) == 0x0010);
static_assert(offsetof(FMovieSceneSubSequenceData, Sequence) == 0x0000);
static_assert(offsetof(FMovieSceneSubSequenceData, RootToSequenceTransform) == 0x0018);
static_assert(offsetof(FMovieSceneSubSequenceData, TickResolution) == 0x0038);
static_assert(offsetof(FMovieSceneSubSequenceData, DeterministicSequenceID) == 0x0040);
static_assert(offsetof(FMovieSceneSubSequenceData, PlayRange) == 0x0044);
static_assert(offsetof(FMovieSceneSubSequenceData, FullPlayRange) == 0x0054);
static_assert(offsetof(FMovieSceneSubSequenceData, UnwarpedPlayRange) == 0x0064);
static_assert(offsetof(FMovieSceneSubSequenceData, PreRollRange) == 0x0074);
static_assert(offsetof(FMovieSceneSubSequenceData, PostRollRange) == 0x0084);
static_assert(offsetof(FMovieSceneSubSequenceData, InstanceData) == 0x0098);
static_assert(offsetof(FMovieSceneSubSequenceData, SubSectionSignature) == 0x00B8);
static_assert(offsetof(FMovieSceneSubSequenceData, OuterToInnerTransform) == 0x00C8);
static_assert(offsetof(FMovieSceneSequenceHierarchy, RootNode) == 0x0000);
static_assert(offsetof(FMovieSceneSequenceHierarchy, Tree) == 0x0018);
static_assert(offsetof(FMovieSceneSequenceHierarchy, SubSequences) == 0x0078);
static_assert(offsetof(FMovieSceneSequenceHierarchy, Hierarchy) == 0x00C8);
static_assert(offsetof(FMovieSceneEvaluationFieldEntityKey, EntityOwner) == 0x0000);
static_assert(offsetof(FMovieSceneEvaluationFieldEntity, Key) == 0x0000);
static_assert(offsetof(FMovieSceneEvaluationFieldEntityMetaData, ForcedTime) == 0x0000);
static_assert(offsetof(FMovieSceneEvaluationFieldEntityMetaData, Flags) == 0x0008);
static_assert(offsetof(FMovieSceneEvaluationFieldSharedEntityMetaData, ObjectBindingID) == 0x0000);
static_assert(offsetof(FMovieSceneEntityComponentField, PersistentEntityTree) == 0x0000);
static_assert(offsetof(FMovieSceneEntityComponentField, OneShotEntityTree) == 0x0060);
static_assert(offsetof(FMovieSceneEntityComponentField, Entities) == 0x00C0);
static_assert(offsetof(FMovieSceneEntityComponentField, EntityMetaData) == 0x00D0);
static_assert(offsetof(FMovieSceneEntityComponentField, SharedMetaData) == 0x00E0);
static_assert(offsetof(FMovieSceneEvaluationFieldTrackPtr, SequenceID) == 0x0000);
static_assert(offsetof(FMovieSceneEvaluationFieldTrackPtr, TrackIdentifier) == 0x0004);
static_assert(offsetof(FMovieSceneFieldEntry_EvaluationTrack, TrackPtr) == 0x0000);
static_assert(offsetof(FMovieSceneFieldEntry_ChildTemplate, Flags) == 0x0002);
static_assert(offsetof(FMovieSceneFieldEntry_ChildTemplate, ForcedTime) == 0x0004);
static_assert(offsetof(FMovieSceneEvaluationGroup, LUTIndices) == 0x0000);
static_assert(offsetof(FMovieSceneEvaluationGroup, TrackLUT) == 0x0010);
static_assert(offsetof(FMovieSceneEvaluationGroup, SectionLUT) == 0x0020);
static_assert(offsetof(FMovieSceneEvaluationKey, SequenceID) == 0x0000);
static_assert(offsetof(FMovieSceneEvaluationKey, TrackIdentifier) == 0x0004);
static_assert(offsetof(FMovieSceneOrderedEvaluationKey, Key) == 0x0000);
static_assert(offsetof(FMovieSceneEvaluationMetaData, ActiveSequences) == 0x0000);
static_assert(offsetof(FMovieSceneEvaluationMetaData, ActiveEntities) == 0x0010);
static_assert(offsetof(FMovieSceneEvaluationField, Ranges) == 0x0000);
static_assert(offsetof(FMovieSceneEvaluationField, Groups) == 0x0010);
static_assert(offsetof(FMovieSceneEvaluationField, MetaData) == 0x0020);
static_assert(offsetof(UMovieSceneCompiledData, EvaluationTemplate) == 0x0028);
static_assert(offsetof(UMovieSceneCompiledData, Hierarchy) == 0x0188);
static_assert(offsetof(UMovieSceneCompiledData, EntityComponentField) == 0x02A0);
static_assert(offsetof(UMovieSceneCompiledData, TrackTemplateField) == 0x0390);
static_assert(offsetof(UMovieSceneCompiledData, DeterminismFences) == 0x03C0);
static_assert(offsetof(UMovieSceneCompiledData, CompiledSignature) == 0x03D0);
static_assert(offsetof(UMovieSceneCompiledData, CompilerVersion) == 0x03E0);
static_assert(offsetof(UMovieSceneCompiledData, AccumulatedMask) == 0x03F0);
static_assert(offsetof(UMovieSceneCompiledData, AllocatedMask) == 0x03F1);
static_assert(offsetof(UMovieSceneCompiledData, AccumulatedFlags) == 0x03F2);
static_assert(offsetof(UMovieSceneCompiledDataManager, Hierarchies) == 0x00D8);
static_assert(offsetof(UMovieSceneCompiledDataManager, TrackTemplates) == 0x0128);
static_assert(offsetof(UMovieSceneCompiledDataManager, TrackTemplateFields) == 0x0178);
static_assert(offsetof(UMovieSceneCompiledDataManager, EntityComponentFields) == 0x01C8);
static_assert(offsetof(UMovieSceneBuiltInEasingFunction, Type) == 0x0030);
static_assert(offsetof(UMovieSceneEasingExternalCurve, Curve) == 0x0030);
static_assert(offsetof(FMovieSceneEntitySystemGraph, Nodes) == 0x0080);
static_assert(offsetof(UMovieSceneEntitySystemLinker, SystemGraph) == 0x0238);
static_assert(offsetof(UMovieSceneFolder, folderName) == 0x0028);
static_assert(offsetof(UMovieSceneFolder, ChildFolders) == 0x0030);
static_assert(offsetof(UMovieSceneFolder, ChildMasterTracks) == 0x0040);
static_assert(offsetof(UMovieSceneFolder, ChildObjectBindingStrings) == 0x0050);
static_assert(offsetof(UMovieSceneSequenceTickManager, SequenceActors) == 0x0028);
static_assert(offsetof(UMovieSceneSequenceTickManager, Linker) == 0x0038);
static_assert(offsetof(UMovieSceneSpawnTrack, Sections) == 0x0078);
static_assert(offsetof(UMovieSceneSpawnTrack, ObjectGuid) == 0x0088);
static_assert(offsetof(UTestMovieSceneTrack, SectionArray) == 0x0088);
static_assert(offsetof(UTestMovieSceneSequence, MovieScene) == 0x0060);
static_assert(offsetof(UTestMovieSceneSubTrack, SectionArray) == 0x0088);
static_assert(offsetof(FMovieSceneTrackInstanceInput, Section) == 0x0000);
static_assert(offsetof(UMovieSceneTrackInstance, AnimatedObject) == 0x0028);
static_assert(offsetof(UMovieSceneTrackInstance, Linker) == 0x0038);
static_assert(offsetof(UMovieSceneTrackInstance, Inputs) == 0x0040);
static_assert(offsetof(UMovieSceneTrackInstanceSystem, Instantiator) == 0x0040);
static_assert(offsetof(FMovieSceneEvaluationOperand, ObjectBindingID) == 0x0000);
static_assert(offsetof(FMovieSceneEvaluationOperand, SequenceID) == 0x0010);
static_assert(offsetof(FMovieSceneIntegerChannel, Times) == 0x0008);
static_assert(offsetof(FMovieSceneIntegerChannel, Values) == 0x0020);
static_assert(offsetof(FMovieSceneByteChannel, Times) == 0x0008);
static_assert(offsetof(FMovieSceneByteChannel, Values) == 0x0020);
static_assert(offsetof(FMovieSceneByteChannel, Enum) == 0x0030);
static_assert(offsetof(FTrackInstanceInputComponent, Section) == 0x0000);
static_assert(offsetof(FMovieSceneTrackInstanceComponent, Owner) == 0x0000);
static_assert(offsetof(FMovieSceneTrackInstanceComponent, TrackInstanceClass) == 0x0008);
static_assert(offsetof(FEasingComponentData, Section) == 0x0000);
static_assert(offsetof(FMovieSceneTrackLabels, Strings) == 0x0000);
static_assert(offsetof(FMovieSceneEditorData, ExpansionStates) == 0x0000);
static_assert(offsetof(FMovieSceneEditorData, PinnedNodes) == 0x0050);
static_assert(offsetof(FMovieSceneEditorData, WorkingRange) == 0x00D0);
static_assert(offsetof(FMovieSceneEditorData, ViewRange) == 0x00E0);
static_assert(offsetof(FMovieSceneTimecodeSource, Timecode) == 0x0000);
static_assert(offsetof(FMovieSceneTimecodeSource, DeltaFrame) == 0x0014);
static_assert(offsetof(FMovieSceneEntitySystemGraphNode, System) == 0x0020);
static_assert(offsetof(FMovieSceneEvaluationFieldSegmentPtr, SegmentID) == 0x0008);
static_assert(offsetof(FMovieSceneSubSectionData, Section) == 0x0000);
static_assert(offsetof(FMovieSceneSubSectionData, ObjectBindingID) == 0x0008);
static_assert(offsetof(FMovieSceneSubSectionData, Flags) == 0x0018);
static_assert(offsetof(FMovieSceneKeyTimeStruct, Time) == 0x0008);
static_assert(offsetof(FMovieSceneObjectPathChannelKeyValue, SoftPtr) == 0x0000);
static_assert(offsetof(FMovieSceneObjectPathChannelKeyValue, HardPtr) == 0x0028);
static_assert(offsetof(FMovieSceneObjectPathChannel, PropertyClass) == 0x0008);
static_assert(offsetof(FMovieSceneObjectPathChannel, Times) == 0x0010);
static_assert(offsetof(FMovieSceneObjectPathChannel, Values) == 0x0020);
static_assert(offsetof(FMovieSceneObjectPathChannel, DefaultValue) == 0x0030);
static_assert(offsetof(FSectionEvaluationData, ForcedTime) == 0x0004);
static_assert(offsetof(FSectionEvaluationData, Flags) == 0x0008);
static_assert(offsetof(FMovieSceneSequencePlaybackParams, Frame) == 0x0000);
static_assert(offsetof(FMovieSceneSequencePlaybackParams, MarkedFrame) == 0x0010);
static_assert(offsetof(FMovieSceneSequencePlaybackParams, PositionType) == 0x0020);
static_assert(offsetof(FMovieSceneSequencePlaybackParams, UpdateMethod) == 0x0021);
static_assert(offsetof(FMovieSceneWarpCounter, WarpCounts) == 0x0000);
static_assert(offsetof(FMovieSceneTrackInstanceEntry, BoundObject) == 0x0000);
static_assert(offsetof(FMovieSceneTrackInstanceEntry, TrackInstance) == 0x0008);
static_assert(offsetof(UMovieSceneParameterSection, BoolParameterNamesAndCurves) == 0x00E8);
static_assert(offsetof(UMovieSceneParameterSection, ScalarParameterNamesAndCurves) == 0x00F8);
static_assert(offsetof(UMovieSceneParameterSection, Vector2DParameterNamesAndCurves) == 0x0108);
static_assert(offsetof(UMovieSceneParameterSection, VectorParameterNamesAndCurves) == 0x0118);
static_assert(offsetof(UMovieSceneParameterSection, ColorParameterNamesAndCurves) == 0x0128);
static_assert(offsetof(UMovieSceneParameterSection, TransformParameterNamesAndCurves) == 0x0138);
static_assert(offsetof(UMovieScene3DConstraintSection, ConstraintId) == 0x00E8);
static_assert(offsetof(UMovieScene3DConstraintSection, ConstraintBindingID) == 0x00F8);
static_assert(offsetof(UMovieScene3DAttachSection, AttachSocketName) == 0x0118);
static_assert(offsetof(UMovieScene3DAttachSection, AttachComponentName) == 0x0120);
static_assert(offsetof(UMovieScene3DAttachSection, AttachmentLocationRule) == 0x0128);
static_assert(offsetof(UMovieScene3DAttachSection, AttachmentRotationRule) == 0x0129);
static_assert(offsetof(UMovieScene3DAttachSection, AttachmentScaleRule) == 0x012A);
static_assert(offsetof(UMovieScene3DAttachSection, DetachmentLocationRule) == 0x012B);
static_assert(offsetof(UMovieScene3DAttachSection, DetachmentRotationRule) == 0x012C);
static_assert(offsetof(UMovieScene3DAttachSection, DetachmentScaleRule) == 0x012D);
static_assert(offsetof(UMovieScene3DConstraintTrack, ConstraintSections) == 0x0078);
static_assert(offsetof(UMovieScene3DPathSection, TimingCurve) == 0x0110);
static_assert(offsetof(UMovieScene3DPathSection, FrontAxisEnum) == 0x01B0);
static_assert(offsetof(UMovieScene3DPathSection, UpAxisEnum) == 0x01B1);
static_assert(offsetof(UMovieScene3DTransformSection, TransformMask) == 0x00F0);
static_assert(offsetof(UMovieScene3DTransformSection, Translation) == 0x00F8);
static_assert(offsetof(UMovieScene3DTransformSection, Rotation) == 0x02D8);
static_assert(offsetof(UMovieScene3DTransformSection, Scale) == 0x04B8);
static_assert(offsetof(UMovieScene3DTransformSection, ManualWeight) == 0x0698);
static_assert(offsetof(FMovieSceneActorReferenceKey, Object) == 0x0000);
static_assert(offsetof(FMovieSceneActorReferenceKey, ComponentName) == 0x0018);
static_assert(offsetof(FMovieSceneActorReferenceKey, SocketName) == 0x0020);
static_assert(offsetof(FMovieSceneActorReferenceData, KeyTimes) == 0x0008);
static_assert(offsetof(FMovieSceneActorReferenceData, KeyValues) == 0x0040);
static_assert(offsetof(UMovieSceneActorReferenceSection, ActorReferenceData) == 0x00E8);
static_assert(offsetof(UMovieSceneActorReferenceSection, ActorGuidIndexCurve) == 0x0198);
static_assert(offsetof(UMovieSceneActorReferenceSection, ActorGuidStrings) == 0x0218);
static_assert(offsetof(UMovieSceneAudioSection, Sound) == 0x00E8);
static_assert(offsetof(UMovieSceneAudioSection, StartFrameOffset) == 0x00F0);
static_assert(offsetof(UMovieSceneAudioSection, SoundVolume) == 0x0108);
static_assert(offsetof(UMovieSceneAudioSection, PitchMultiplier) == 0x01A8);
static_assert(offsetof(UMovieSceneAudioSection, AttachActorData) == 0x0248);
static_assert(offsetof(UMovieSceneAudioSection, AttenuationSettings) == 0x0300);
static_assert(offsetof(UMovieSceneAudioTrack, AudioSections) == 0x0080);
static_assert(offsetof(UMovieSceneByteSection, ByteCurve) == 0x00E8);
static_assert(offsetof(UMovieSceneByteTrack, Enum) == 0x00B0);
static_assert(offsetof(FMovieSceneCameraAnimSectionData, CameraAnim) == 0x0000);
static_assert(offsetof(UMovieSceneCameraAnimSection, AnimData) == 0x00E8);
static_assert(offsetof(UMovieSceneCameraAnimSection, CameraAnim) == 0x0108);
static_assert(offsetof(UMovieSceneCameraAnimTrack, CameraAnimSections) == 0x0080);
static_assert(offsetof(UMovieSceneCameraCutSection, CameraGuid) == 0x00F4);
static_assert(offsetof(UMovieSceneCameraCutSection, CameraBindingID) == 0x0104);
static_assert(offsetof(UMovieSceneCameraCutSection, InitialCameraCutTransform) == 0x0120);
static_assert(offsetof(UMovieSceneCameraCutTrack, Sections) == 0x0080);
static_assert(offsetof(FMovieSceneCameraShakeSectionData, ShakeClass) == 0x0000);
static_assert(offsetof(FMovieSceneCameraShakeSectionData, PlaySpace) == 0x000C);
static_assert(offsetof(FMovieSceneCameraShakeSectionData, UserDefinedPlaySpace) == 0x0010);
static_assert(offsetof(UMovieSceneCameraShakeSection, ShakeData) == 0x00E8);
static_assert(offsetof(UMovieSceneCameraShakeSection, ShakeClass) == 0x0108);
static_assert(offsetof(UMovieSceneCameraShakeSection, PlaySpace) == 0x0114);
static_assert(offsetof(UMovieSceneCameraShakeSection, UserDefinedPlaySpace) == 0x0118);
static_assert(offsetof(UMovieSceneCameraShakeSourceShakeSection, ShakeData) == 0x00E8);
static_assert(offsetof(UMovieSceneCameraShakeSourceShakeTrack, CameraShakeSections) == 0x0080);
static_assert(offsetof(FMovieSceneCameraShakeSourceTrigger, ShakeClass) == 0x0000);
static_assert(offsetof(FMovieSceneCameraShakeSourceTrigger, PlaySpace) == 0x000C);
static_assert(offsetof(FMovieSceneCameraShakeSourceTrigger, UserDefinedPlaySpace) == 0x0010);
static_assert(offsetof(FMovieSceneCameraShakeSourceTriggerChannel, KeyTimes) == 0x0008);
static_assert(offsetof(FMovieSceneCameraShakeSourceTriggerChannel, KeyValues) == 0x0018);
static_assert(offsetof(UMovieSceneCameraShakeSourceTriggerSection, Channel) == 0x00E8);
static_assert(offsetof(UMovieSceneCameraShakeSourceTriggerTrack, Sections) == 0x0080);
static_assert(offsetof(UMovieSceneCameraShakeTrack, CameraShakeSections) == 0x0080);
static_assert(offsetof(UMovieSceneCinematicShotSection, ShotDisplayName) == 0x0160);
static_assert(offsetof(UMovieSceneCinematicShotSection, DisplayName) == 0x0170);
static_assert(offsetof(UMovieSceneColorSection, RedCurve) == 0x00E8);
static_assert(offsetof(UMovieSceneColorSection, GreenCurve) == 0x0188);
static_assert(offsetof(UMovieSceneColorSection, BlueCurve) == 0x0228);
static_assert(offsetof(UMovieSceneColorSection, AlphaCurve) == 0x02C8);
static_assert(offsetof(UMovieSceneEnumSection, EnumCurve) == 0x00E8);
static_assert(offsetof(UMovieSceneEnumTrack, Enum) == 0x00B0);
static_assert(offsetof(FMovieSceneEventPtrs, Function) == 0x0000);
static_assert(offsetof(FMovieSceneEvent, Ptrs) == 0x0000);
static_assert(offsetof(UMovieSceneEventRepeaterSection, Event) == 0x00F0);
static_assert(offsetof(FEventPayload, EventName) == 0x0000);
static_assert(offsetof(FEventPayload, Parameters) == 0x0008);
static_assert(offsetof(FMovieSceneEventSectionData, Times) == 0x0008);
static_assert(offsetof(FMovieSceneEventSectionData, KeyValues) == 0x0018);
static_assert(offsetof(UMovieSceneEventSection, Events) == 0x00E8);
static_assert(offsetof(UMovieSceneEventSection, EventData) == 0x0160);
static_assert(offsetof(UMovieSceneEventTrack, EventPosition) == 0x0084);
static_assert(offsetof(UMovieSceneEventTrack, Sections) == 0x0088);
static_assert(offsetof(FMovieSceneEventChannel, KeyTimes) == 0x0008);
static_assert(offsetof(FMovieSceneEventChannel, KeyValues) == 0x0018);
static_assert(offsetof(UMovieSceneEventTriggerSection, EventChannel) == 0x00F0);
static_assert(offsetof(UMovieSceneFadeSection, FloatCurve) == 0x00E8);
static_assert(offsetof(UMovieSceneFadeSection, FadeColor) == 0x0188);
static_assert(offsetof(UMovieSceneFloatSection, FloatCurve) == 0x00F0);
static_assert(offsetof(UMovieSceneIntegerSection, IntegerCurve) == 0x00E8);
static_assert(offsetof(UMovieSceneLevelVisibilitySection, Visibility) == 0x00F0);
static_assert(offsetof(UMovieSceneLevelVisibilitySection, LevelNames) == 0x00F8);
static_assert(offsetof(UMovieSceneLevelVisibilityTrack, Sections) == 0x0078);
static_assert(offsetof(UMovieSceneMaterialParameterCollectionTrack, MPC) == 0x0090);
static_assert(offsetof(UMovieSceneObjectPropertySection, ObjectChannel) == 0x00E8);
static_assert(offsetof(UMovieSceneObjectPropertyTrack, PropertyClass) == 0x00B0);
static_assert(offsetof(UMovieSceneParticleParameterTrack, Sections) == 0x0080);
static_assert(offsetof(UMovieSceneParticleSection, ParticleKeys) == 0x00E8);
static_assert(offsetof(UMovieSceneParticleTrack, ParticleSections) == 0x0080);
static_assert(offsetof(UMovieScenePrimitiveMaterialSection, MaterialChannel) == 0x00E8);
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, Animation) == 0x0000);
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, FirstLoopStartFrameOffset) == 0x0008);
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, StartFrameOffset) == 0x000C);
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, EndFrameOffset) == 0x0010);
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, SlotName) == 0x001C);
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, Weight) == 0x0028);
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, Params) == 0x00E8);
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, AnimSequence) == 0x01C0);
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, Animation) == 0x01C8);
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, SlotName) == 0x01E0);
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, StartLocationOffset) == 0x01E8);
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, StartRotationOffset) == 0x01F4);
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, MatchedBoneName) == 0x0204);
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, MatchedLocationOffset) == 0x020C);
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, MatchedRotationOffset) == 0x0218);
static_assert(offsetof(UMovieSceneSkeletalAnimationTrack, AnimationSections) == 0x0080);
static_assert(offsetof(UMovieSceneSkeletalAnimationTrack, RootMotionParams) == 0x0098);
static_assert(offsetof(UMovieSceneSlomoSection, FloatCurve) == 0x00E8);
static_assert(offsetof(FMovieSceneStringChannel, Times) == 0x0008);
static_assert(offsetof(FMovieSceneStringChannel, Values) == 0x0018);
static_assert(offsetof(FMovieSceneStringChannel, DefaultValue) == 0x0028);
static_assert(offsetof(UMovieSceneStringSection, StringCurve) == 0x00E8);
static_assert(offsetof(UMovieSceneVectorSection, Curves) == 0x00E8);
static_assert(offsetof(FMovieScene3DPathSectionTemplate, PathBindingID) == 0x0020);
static_assert(offsetof(FMovieScene3DPathSectionTemplate, TimingCurve) == 0x0038);
static_assert(offsetof(FMovieScene3DPathSectionTemplate, FrontAxisEnum) == 0x00D8);
static_assert(offsetof(FMovieScene3DPathSectionTemplate, UpAxisEnum) == 0x00D9);
static_assert(offsetof(FMovieScene3DTransformKeyStruct, Location) == 0x0008);
static_assert(offsetof(FMovieScene3DTransformKeyStruct, Rotation) == 0x0014);
static_assert(offsetof(FMovieScene3DTransformKeyStruct, Scale) == 0x0020);
static_assert(offsetof(FMovieScene3DTransformKeyStruct, Time) == 0x002C);
static_assert(offsetof(FMovieScene3DScaleKeyStruct, Scale) == 0x0008);
static_assert(offsetof(FMovieScene3DScaleKeyStruct, Time) == 0x0014);
static_assert(offsetof(FMovieScene3DRotationKeyStruct, Rotation) == 0x0008);
static_assert(offsetof(FMovieScene3DRotationKeyStruct, Time) == 0x0014);
static_assert(offsetof(FMovieScene3DLocationKeyStruct, Location) == 0x0008);
static_assert(offsetof(FMovieScene3DLocationKeyStruct, Time) == 0x0014);
static_assert(offsetof(FMovieScene3DTransformTemplateData, TranslationCurve) == 0x0000);
static_assert(offsetof(FMovieScene3DTransformTemplateData, RotationCurve) == 0x01E0);
static_assert(offsetof(FMovieScene3DTransformTemplateData, ScaleCurve) == 0x03C0);
static_assert(offsetof(FMovieScene3DTransformTemplateData, ManualWeight) == 0x05A0);
static_assert(offsetof(FMovieScene3DTransformTemplateData, BlendType) == 0x0640);
static_assert(offsetof(FMovieScene3DTransformTemplateData, Mask) == 0x0644);
static_assert(offsetof(FMovieSceneActorReferenceSectionTemplate, PropertyData) == 0x0020);
static_assert(offsetof(FMovieSceneActorReferenceSectionTemplate, ActorReferenceData) == 0x0038);
static_assert(offsetof(FMovieSceneAudioSectionTemplate, AudioSection) == 0x0020);
static_assert(offsetof(FMovieSceneCameraShakeSectionTemplate, SourceData) == 0x0020);
static_assert(offsetof(FMovieSceneCameraShakeSectionTemplate, SectionStartTime) == 0x0040);
static_assert(offsetof(FMovieSceneCameraAnimSectionTemplate, SourceData) == 0x0020);
static_assert(offsetof(FMovieSceneCameraAnimSectionTemplate, SectionStartTime) == 0x0040);
static_assert(offsetof(FMovieSceneCameraShakeSourceShakeSectionTemplate, SourceData) == 0x0020);
static_assert(offsetof(FMovieSceneCameraShakeSourceShakeSectionTemplate, SectionStartTime) == 0x0040);
static_assert(offsetof(FMovieSceneCameraShakeSourceShakeSectionTemplate, SectionEndTime) == 0x0044);
static_assert(offsetof(FMovieSceneCameraShakeSourceTriggerSectionTemplate, TriggerTimes) == 0x0020);
static_assert(offsetof(FMovieSceneCameraShakeSourceTriggerSectionTemplate, TriggerValues) == 0x0030);
static_assert(offsetof(FMovieSceneColorKeyStruct, Color) == 0x0008);
static_assert(offsetof(FMovieSceneColorKeyStruct, Time) == 0x0018);
static_assert(offsetof(FMovieSceneColorSectionTemplate, Curves) == 0x0038);
static_assert(offsetof(FMovieSceneColorSectionTemplate, BlendType) == 0x02B8);
static_assert(offsetof(FMovieSceneEventPayloadVariable, Value) == 0x0000);
static_assert(offsetof(FMovieSceneEventTriggerData, Ptrs) == 0x0000);
static_assert(offsetof(FMovieSceneEventTriggerData, ObjectBindingID) == 0x0028);
static_assert(offsetof(FMovieSceneEventSectionTemplate, EventData) == 0x0020);
static_assert(offsetof(FMovieSceneFadeSectionTemplate, FadeCurve) == 0x0020);
static_assert(offsetof(FMovieSceneFadeSectionTemplate, FadeColor) == 0x00C0);
static_assert(offsetof(FMovieSceneMaterialParameterCollectionTemplate, MPC) == 0x0080);
static_assert(offsetof(FMovieSceneObjectPropertyTemplate, ObjectChannel) == 0x0038);
static_assert(offsetof(FMovieSceneParticleSectionTemplate, ParticleKeys) == 0x0020);
static_assert(offsetof(FMovieScenePrimitiveMaterialTemplate, MaterialChannel) == 0x0028);
static_assert(offsetof(FMovieSceneVectorPropertySectionTemplate, ComponentCurves) == 0x0038);
static_assert(offsetof(FMovieSceneVectorPropertySectionTemplate, BlendType) == 0x02BC);
static_assert(offsetof(FMovieSceneStringPropertySectionTemplate, StringCurve) == 0x0038);
static_assert(offsetof(FMovieSceneIntegerPropertySectionTemplate, IntegerCurve) == 0x0038);
static_assert(offsetof(FMovieSceneIntegerPropertySectionTemplate, BlendType) == 0x00C8);
static_assert(offsetof(FMovieSceneEnumPropertySectionTemplate, EnumCurve) == 0x0038);
static_assert(offsetof(FMovieSceneBytePropertySectionTemplate, ByteCurve) == 0x0038);
static_assert(offsetof(FMovieSceneBoolPropertySectionTemplate, BoolCurve) == 0x0038);
static_assert(offsetof(FMovieSceneSkeletalAnimationSectionTemplateParameters, SectionStartTime) == 0x00D8);
static_assert(offsetof(FMovieSceneSkeletalAnimationSectionTemplateParameters, SectionEndTime) == 0x00DC);
static_assert(offsetof(FMovieSceneSkeletalAnimationSectionTemplate, Params) == 0x0020);
static_assert(offsetof(FMovieSceneSlomoSectionTemplate, SlomoCurve) == 0x0020);
static_assert(offsetof(FLevelVisibilityComponentData, Section) == 0x0000);
static_assert(offsetof(FMovieSceneVectorKeyStructBase, Time) == 0x0008);
static_assert(offsetof(FMovieSceneVector4KeyStruct, Vector) == 0x0030);
static_assert(offsetof(FMovieSceneVectorKeyStruct, Vector) == 0x0028);
static_assert(offsetof(FMovieSceneVector2DKeyStruct, Vector) == 0x0028);

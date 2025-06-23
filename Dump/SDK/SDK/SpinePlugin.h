
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"
#include "ProceduralMeshComponent.h"
#include "SlateCore.h"
#include "merged_AudioMixer_Engine_UMG_MovieScene_MovieSceneTracks.h"

#pragma pack(push, 0x1)

class USpineAtlasAsset;
class USpineBoneDriverComponent;
class USpineBoneFollowerComponent;
class USpineSkeletonAnimationComponent;
class USpineSkeletonComponent;
class USpineSkeletonDataAsset;
class USpineSkeletonRendererComponent;
class USpineWidget;
class UTrackEntry;

#pragma pack(pop)


static_assert(sizeof(USpineAtlasAsset) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(USpineBoneDriverComponent) == 0x0220); // 544 bytes (0x0001F8 - 0x000220)
static_assert(sizeof(USpineBoneFollowerComponent) == 0x0220); // 544 bytes (0x0001F8 - 0x000220)
static_assert(sizeof(UTrackEntry) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(USpineSkeletonComponent) == 0x0108); // 264 bytes (0x0000B0 - 0x000108)
static_assert(sizeof(USpineSkeletonAnimationComponent) == 0x0208); // 520 bytes (0x000108 - 0x000208)
static_assert(sizeof(FSpineAnimationStateMixData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(USpineSkeletonDataAsset) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(USpineSkeletonRendererComponent) == 0x07C0); // 1984 bytes (0x0004F8 - 0x0007C0)
static_assert(sizeof(USpineWidget) == 0x0710); // 1808 bytes (0x000128 - 0x000710)
static_assert(sizeof(FSpineEvent) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(USpineAtlasAsset, atlasPages) == 0x0030);
static_assert(offsetof(USpineAtlasAsset, rawData) == 0x0048);
static_assert(offsetof(USpineAtlasAsset, atlasFileName) == 0x0058);
static_assert(offsetof(USpineBoneDriverComponent, Target) == 0x01F8);
static_assert(offsetof(USpineBoneDriverComponent, BoneName) == 0x0200);
static_assert(offsetof(USpineBoneFollowerComponent, Target) == 0x01F8);
static_assert(offsetof(USpineBoneFollowerComponent, BoneName) == 0x0200);
static_assert(offsetof(USpineSkeletonComponent, Atlas) == 0x00B0);
static_assert(offsetof(USpineSkeletonComponent, SkeletonData) == 0x00B8);
static_assert(offsetof(USpineSkeletonAnimationComponent, PreviewAnimation) == 0x0168);
static_assert(offsetof(USpineSkeletonAnimationComponent, PreviewSkin) == 0x0178);
static_assert(offsetof(FSpineAnimationStateMixData, From) == 0x0000);
static_assert(offsetof(FSpineAnimationStateMixData, To) == 0x0010);
static_assert(offsetof(USpineSkeletonDataAsset, MixData) == 0x0030);
static_assert(offsetof(USpineSkeletonDataAsset, Bones) == 0x0040);
static_assert(offsetof(USpineSkeletonDataAsset, Slots) == 0x0050);
static_assert(offsetof(USpineSkeletonDataAsset, Skins) == 0x0060);
static_assert(offsetof(USpineSkeletonDataAsset, Animations) == 0x0070);
static_assert(offsetof(USpineSkeletonDataAsset, Events) == 0x0080);
static_assert(offsetof(USpineSkeletonDataAsset, rawData) == 0x0090);
static_assert(offsetof(USpineSkeletonDataAsset, skeletonDataFileName) == 0x00A0);
static_assert(offsetof(USpineSkeletonRendererComponent, NormalBlendMaterial) == 0x04F8);
static_assert(offsetof(USpineSkeletonRendererComponent, AdditiveBlendMaterial) == 0x0500);
static_assert(offsetof(USpineSkeletonRendererComponent, MultiplyBlendMaterial) == 0x0508);
static_assert(offsetof(USpineSkeletonRendererComponent, ScreenBlendMaterial) == 0x0510);
static_assert(offsetof(USpineSkeletonRendererComponent, atlasNormalBlendMaterials) == 0x0518);
static_assert(offsetof(USpineSkeletonRendererComponent, atlasAdditiveBlendMaterials) == 0x0528);
static_assert(offsetof(USpineSkeletonRendererComponent, atlasMultiplyBlendMaterials) == 0x0538);
static_assert(offsetof(USpineSkeletonRendererComponent, atlasScreenBlendMaterials) == 0x0548);
static_assert(offsetof(USpineSkeletonRendererComponent, TextureParameterName) == 0x055C);
static_assert(offsetof(USpineSkeletonRendererComponent, Color) == 0x0564);
static_assert(offsetof(USpineSkeletonRendererComponent, Vertices) == 0x0768);
static_assert(offsetof(USpineSkeletonRendererComponent, Indices) == 0x0778);
static_assert(offsetof(USpineSkeletonRendererComponent, Normals) == 0x0788);
static_assert(offsetof(USpineSkeletonRendererComponent, UVs) == 0x0798);
static_assert(offsetof(USpineSkeletonRendererComponent, Colors) == 0x07A8);
static_assert(offsetof(USpineWidget, InitialSkin) == 0x0128);
static_assert(offsetof(USpineWidget, Atlas) == 0x0138);
static_assert(offsetof(USpineWidget, SkeletonData) == 0x0140);
static_assert(offsetof(USpineWidget, NormalBlendMaterial) == 0x0148);
static_assert(offsetof(USpineWidget, AdditiveBlendMaterial) == 0x0150);
static_assert(offsetof(USpineWidget, MultiplyBlendMaterial) == 0x0158);
static_assert(offsetof(USpineWidget, ScreenBlendMaterial) == 0x0160);
static_assert(offsetof(USpineWidget, TextureParameterName) == 0x0168);
static_assert(offsetof(USpineWidget, Color) == 0x0174);
static_assert(offsetof(USpineWidget, Brush) == 0x0190);
static_assert(offsetof(USpineWidget, SpineBoundMargin) == 0x0260);
static_assert(offsetof(USpineWidget, SpinePivot) == 0x0270);
static_assert(offsetof(USpineWidget, atlasNormalBlendMaterials) == 0x0340);
static_assert(offsetof(USpineWidget, atlasAdditiveBlendMaterials) == 0x03A0);
static_assert(offsetof(USpineWidget, atlasMultiplyBlendMaterials) == 0x0400);
static_assert(offsetof(USpineWidget, atlasScreenBlendMaterials) == 0x0460);
static_assert(offsetof(FSpineEvent, Name) == 0x0000);
static_assert(offsetof(FSpineEvent, StringValue) == 0x0010);

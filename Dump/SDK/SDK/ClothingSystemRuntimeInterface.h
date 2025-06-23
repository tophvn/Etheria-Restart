
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
#include "BasicType.h"
#include "CoreUObject.h"

#pragma pack(push, 0x1)

class UClothConfigBase;
class UClothPhysicalMeshDataBase_Legacy;
class UClothSharedSimConfigBase;
class UClothingAssetBase;
class UClothingSimulationFactory;
class UClothingSimulationInteractor;

#pragma pack(pop)


static_assert(sizeof(UClothConfigBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothingSimulationFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothingSimulationInteractor) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UClothSharedSimConfigBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothingAssetBase) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FClothVertBoneData) == 0x004C); // 76 bytes (0x000000 - 0x00004C)
static_assert(sizeof(UClothPhysicalMeshDataBase_Legacy) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(FClothCollisionPrim_Sphere) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FClothCollisionPrim_SphereConnection) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FClothCollisionPrim_Convex) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FClothCollisionPrim_Box) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FClothCollisionData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(offsetof(UClothingAssetBase, ImportedFilePath) == 0x0028);
static_assert(offsetof(UClothingAssetBase, AssetGuid) == 0x0038);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Vertices) == 0x0028);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Normals) == 0x0038);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Indices) == 0x0048);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, InverseMasses) == 0x0058);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, BoneData) == 0x0068);
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, SelfCollisionIndices) == 0x0080);
static_assert(offsetof(FClothCollisionPrim_Sphere, LocalPosition) == 0x0008);
static_assert(offsetof(FClothCollisionPrim_Convex, Planes) == 0x0000);
static_assert(offsetof(FClothCollisionPrim_Convex, SurfacePoints) == 0x0010);
static_assert(offsetof(FClothCollisionPrim_Box, LocalPosition) == 0x0000);
static_assert(offsetof(FClothCollisionPrim_Box, LocalRotation) == 0x0010);
static_assert(offsetof(FClothCollisionPrim_Box, HalfExtents) == 0x0020);
static_assert(offsetof(FClothCollisionData, Spheres) == 0x0000);
static_assert(offsetof(FClothCollisionData, SphereConnections) == 0x0010);
static_assert(offsetof(FClothCollisionData, Convexes) == 0x0020);
static_assert(offsetof(FClothCollisionData, Boxes) == 0x0030);

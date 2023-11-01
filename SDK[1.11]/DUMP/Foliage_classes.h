// Class Foliage.*2312e04442
// Size: 0xdd0 (Inherited: 0xdb0)
struct U*2312e04442 : UHierarchicalInstancedStaticMeshComponent {
	struct FMulticastDelegate OnInstanceTakePointDamage; // 0xda8(0x10)
	struct FMulticastDelegate OnInstanceTakeRadialDamage; // 0xdb8(0x10)
};

// Class Foliage.*cc61dd21b2
// Size: 0x28 (Inherited: 0x28)
struct U*cc61dd21b2 : UBlueprintFunctionLibrary {

	struct UObject* *75ab3f0366(struct UStaticMesh* StaticMesh); // Function Foliage.*cc61dd21b2.*75ab3f0366 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5e9fae4
	float *2b51d65701(struct UStaticMesh* StaticMesh); // Function Foliage.*cc61dd21b2.*2b51d65701 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5e9fc28
};

// Class Foliage.FoliageType
// Size: 0x440 (Inherited: 0x28)
struct UFoliageType : UObject {
	struct FGuid *0c361bc6a3; // 0x28(0x10)
	float Density; // 0x38(0x04)
	float *1badf58b71; // 0x3c(0x04)
	float Radius; // 0x40(0x04)
	enum class EFoliageScaling Scaling; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FFloatInterval ScaleX; // 0x48(0x08)
	struct FFloatInterval ScaleY; // 0x50(0x08)
	struct FFloatInterval ScaleZ; // 0x58(0x08)
	struct F*8088cd7e9b *25f5d4a4d8[0x04]; // 0x60(0x30)
	enum class FoliageVertexColorMask VertexColorMask; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float VertexColorMaskThreshold; // 0x94(0x04)
	char VertexColorMaskInvert : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct FFloatInterval *1e009b5180; // 0x9c(0x08)
	char AlignToNormal : 1; // 0xa4(0x01)
	char pad_A4_1 : 7; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	float *3205f2e2a3; // 0xa8(0x04)
	char *f8bdd84665 : 1; // 0xac(0x01)
	char pad_AC_1 : 7; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float *459a588fca; // 0xb0(0x04)
	struct FFloatInterval *200ac50c38; // 0xb4(0x08)
	struct FFloatInterval Height; // 0xbc(0x08)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct FName> LandscapeLayers; // 0xc8(0x10)
	struct FName LandscapeLayer; // 0xd8(0x08)
	char CollisionWithWorld : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FVector *b17cccdb80; // 0xe4(0x0c)
	float *ed6a819e24; // 0xf0(0x04)
	struct FBoxSphereBounds *6aa6417be5; // 0xf4(0x1c)
	struct FVector *63fa54fa87; // 0x110(0x0c)
	enum class EComponentMobility Mobility; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FInt32Interval CullDistance; // 0x120(0x08)
	char bEnableStaticLighting : 1; // 0x128(0x01)
	char CastShadow : 1; // 0x128(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x128(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x128(0x01)
	char bCastDynamicShadow : 1; // 0x128(0x01)
	char bCastStaticShadow : 1; // 0x128(0x01)
	char bCastShadowAsTwoSided : 1; // 0x128(0x01)
	char bOverrideLightMapRes : 1; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	int32 OverriddenLightMapRes; // 0x12c(0x04)
	char bUseAsOccluder : 1; // 0x130(0x01)
	char bTreatAsGrass : 1; // 0x130(0x01)
	char bRenderCustomDepth : 1; // 0x130(0x01)
	char pad_130_3 : 5; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	int32 CustomDepthStencilValue; // 0x134(0x04)
	char *f0ec410b1c : 1; // 0x138(0x01)
	char *e465b784ab : 1; // 0x138(0x01)
	char *0566bc7293 : 1; // 0x138(0x01)
	char pad_138_3 : 5; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	enum class EDecalChannel DecalChannel; // 0x13c(0x01)
	enum class EHasCustomNavigableGeometry *389aa2b4e3; // 0x13d(0x01)
	struct FLightingChannels LightingChannels; // 0x13e(0x03)
	char pad_141[0xf]; // 0x141(0x0f)
	struct FBodyInstance BodyInstance; // 0x150(0x230)
	float *8dbb45714e; // 0x380(0x04)
	float *ce73f4073f; // 0x384(0x04)
	int32 *1051228a6b; // 0x388(0x04)
	float *2f6886a4c3; // 0x38c(0x04)
	float *1201615545; // 0x390(0x04)
	float *601e407a76; // 0x394(0x04)
	int32 *535cf7aca7; // 0x398(0x04)
	int32 *e58643ee94; // 0x39c(0x04)
	float *b8f4941a24; // 0x3a0(0x04)
	bool bCanGrowInShade; // 0x3a4(0x01)
	bool bSpawnsInShade; // 0x3a5(0x01)
	char pad_3A6[0x2]; // 0x3a6(0x02)
	float MaxInitialAge; // 0x3a8(0x04)
	float MaxAge; // 0x3ac(0x04)
	float *e5755ec720; // 0x3b0(0x04)
	struct FFloatInterval *8fbc5e6696; // 0x3b4(0x08)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct FRuntimeFloatCurve *0ee2e9841f; // 0x3c0(0x78)
	int32 *c16ed9db17; // 0x438(0x04)
	char ReapplyDensity : 1; // 0x43c(0x01)
	char ReapplyRadius : 1; // 0x43c(0x01)
	char ReapplyAlignToNormal : 1; // 0x43c(0x01)
	char ReapplyRandomYaw : 1; // 0x43c(0x01)
	char ReapplyScaling : 1; // 0x43c(0x01)
	char ReapplyScaleX : 1; // 0x43c(0x01)
	char ReapplyScaleY : 1; // 0x43c(0x01)
	char ReapplyScaleZ : 1; // 0x43c(0x01)
	char ReapplyRandomPitchAngle : 1; // 0x43d(0x01)
	char ReapplyGroundSlope : 1; // 0x43d(0x01)
	char ReapplyHeight : 1; // 0x43d(0x01)
	char ReapplyLandscapeLayers : 1; // 0x43d(0x01)
	char ReapplyZOffset : 1; // 0x43d(0x01)
	char ReapplyCollisionWithWorld : 1; // 0x43d(0x01)
	char *5f0575f332 : 1; // 0x43d(0x01)
	char *09c59fbf3c : 1; // 0x43d(0x01)
	char pad_43E[0x2]; // 0x43e(0x02)
};

// Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x460 (Inherited: 0x440)
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	struct UStaticMesh* Mesh; // 0x440(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x448(0x10)
	struct UClass* ComponentClass; // 0x458(0x08)
};

// Class Foliage.InstancedFoliageActor
// Size: 0x438 (Inherited: 0x3e8)
struct AInstancedFoliageActor : AActor {
	char pad_3E8[0x50]; // 0x3e8(0x50)
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x458 (Inherited: 0x3f8)
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x3f8(0x08)
	struct FVector *fe59ef3398; // 0x400(0x0c)
	struct FVector *dbcabce038; // 0x40c(0x0c)
	struct FVector *f543c89244; // 0x418(0x0c)
	struct FVector *939f237751; // 0x424(0x0c)
	float FoliageDamageImpulseScale; // 0x430(0x04)
	float FoliageTouchImpulseScale; // 0x434(0x04)
	float FoliageStiffness; // 0x438(0x04)
	float FoliageStiffnessQuadratic; // 0x43c(0x04)
	float FoliageDamping; // 0x440(0x04)
	float MaxDamageImpulse; // 0x444(0x04)
	float MaxTouchImpulse; // 0x448(0x04)
	float MaxForce; // 0x44c(0x04)
	float Mass; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)

	struct AActor* CapsuleTouched(struct UPrimitiveComponent* Param2, bool Param4); // Function Foliage.InteractiveFoliageActor.CapsuleTouched // Final|Native|Protected|HasOutParms // @ game+0x5e9f894
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0xbb0 (Inherited: 0xba0)
struct UInteractiveFoliageComponent : UStaticMeshComponent {
	char pad_BA0[0x10]; // 0xba0(0x10)
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x428 (Inherited: 0x420)
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x420(0x08)
};

// Class Foliage.ProceduralFoliageComponent
// Size: 0x220 (Inherited: 0x1f0)
struct UProceduralFoliageComponent : UActorComponent {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x1f0(0x08)
	float TileOverlap; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct AVolume* SpawningVolume; // 0x200(0x08)
	struct FGuid *c6948e5923; // 0x208(0x10)
	char pad_218[0x8]; // 0x218(0x08)
};

// Class Foliage.ProceduralFoliageSpawner
// Size: 0x70 (Inherited: 0x28)
struct UProceduralFoliageSpawner : UObject {
	int32 RandomSeed; // 0x28(0x04)
	float TileSize; // 0x2c(0x04)
	int32 NumUniqueTiles; // 0x30(0x04)
	float MinimumQuadTreeSize; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x40(0x10)
	bool *0cff38dac4; // 0x50(0x01)
	char pad_51[0x1f]; // 0x51(0x1f)

	void Simulate(); // Function Foliage.ProceduralFoliageSpawner.Simulate // Final|Native|Public|BlueprintCallable // @ game+0x5e9fda4
};

// Class Foliage.*7dbd3e3567
// Size: 0x158 (Inherited: 0x28)
struct U*7dbd3e3567 : UObject {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x28(0x08)
	char pad_30[0xa0]; // 0x30(0xa0)
	struct TArray<struct F*25271daf79> *bb3fbf778b; // 0xd0(0x10)
	char pad_E0[0x78]; // 0xe0(0x78)
};

// Class Foliage.ProceduralFoliageVolume
// Size: 0x428 (Inherited: 0x420)
struct AProceduralFoliageVolume : AVolume {
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x420(0x08)
};


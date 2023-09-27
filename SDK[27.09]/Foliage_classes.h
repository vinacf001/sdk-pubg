// Class Foliage.*061ea11e83
// Size: 0xdd0 (Inherited: 0xdb0)
struct U*061ea11e83 : UHierarchicalInstancedStaticMeshComponent {
	struct FMulticastDelegate OnInstanceTakePointDamage; // 0xda8(0x10)
	struct FMulticastDelegate OnInstanceTakeRadialDamage; // 0xdb8(0x10)
};

// Class Foliage.*4258936a22
// Size: 0x30 (Inherited: 0x30)
struct U*4258936a22 : UBlueprintFunctionLibrary {

	void *13a55e9faa(); // Function Foliage.*4258936a22.*13a55e9faa // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6064be0
	void *8f44908b12(); // Function Foliage.*4258936a22.*8f44908b12 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6064a9c
};

// Class Foliage.FoliageType
// Size: 0x440 (Inherited: 0x30)
struct UFoliageType : UObject {
	struct FGuid *a3f68c2e15; // 0x30(0x10)
	float Density; // 0x40(0x04)
	float *a04bbe3e67; // 0x44(0x04)
	float Radius; // 0x48(0x04)
	enum class EFoliageScaling Scaling; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FFloatInterval ScaleX; // 0x50(0x08)
	struct FFloatInterval ScaleY; // 0x58(0x08)
	struct FFloatInterval ScaleZ; // 0x60(0x08)
	struct F*e2c42c1d89 *d1853b81b2[0x04]; // 0x68(0x30)
	enum class FoliageVertexColorMask VertexColorMask; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float VertexColorMaskThreshold; // 0x9c(0x04)
	char VertexColorMaskInvert : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FFloatInterval *331610df7f; // 0xa4(0x08)
	char AlignToNormal : 1; // 0xac(0x01)
	char pad_AC_1 : 7; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float *cabcb7c1b0; // 0xb0(0x04)
	char *a7fc5c1589 : 1; // 0xb4(0x01)
	char pad_B4_1 : 7; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float *0aa7b0cc3a; // 0xb8(0x04)
	struct FFloatInterval *da1dbd7f59; // 0xbc(0x08)
	struct FFloatInterval Height; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FName> LandscapeLayers; // 0xd0(0x10)
	struct FName LandscapeLayer; // 0xe0(0x08)
	char CollisionWithWorld : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FVector *e1945b8183; // 0xec(0x0c)
	float *eed98d0b51; // 0xf8(0x04)
	struct FBoxSphereBounds *fc127629b9; // 0xfc(0x1c)
	struct FVector *dfeca56445; // 0x118(0x0c)
	enum class EComponentMobility Mobility; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	struct FInt32Interval CullDistance; // 0x128(0x08)
	char bEnableStaticLighting : 1; // 0x130(0x01)
	char CastShadow : 1; // 0x130(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x130(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x130(0x01)
	char bCastDynamicShadow : 1; // 0x130(0x01)
	char bCastStaticShadow : 1; // 0x130(0x01)
	char bCastShadowAsTwoSided : 1; // 0x130(0x01)
	char bOverrideLightMapRes : 1; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	int32 OverriddenLightMapRes; // 0x134(0x04)
	char bUseAsOccluder : 1; // 0x138(0x01)
	char bTreatAsGrass : 1; // 0x138(0x01)
	char bRenderCustomDepth : 1; // 0x138(0x01)
	char pad_138_3 : 5; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	int32 CustomDepthStencilValue; // 0x13c(0x04)
	char *668636af81 : 1; // 0x140(0x01)
	char *b3a3eee86b : 1; // 0x140(0x01)
	char *07830a14a6 : 1; // 0x140(0x01)
	char pad_140_3 : 5; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	enum class EDecalChannel DecalChannel; // 0x144(0x01)
	enum class EHasCustomNavigableGeometry *d6502f39c8; // 0x145(0x01)
	struct FLightingChannels LightingChannels; // 0x146(0x03)
	char pad_149[0x7]; // 0x149(0x07)
	struct FBodyInstance BodyInstance; // 0x150(0x230)
	float *60d660c7cf; // 0x380(0x04)
	float *610362be42; // 0x384(0x04)
	int32 *78da4aff70; // 0x388(0x04)
	float *0db1800483; // 0x38c(0x04)
	float *43990c9fcf; // 0x390(0x04)
	float *550b070e54; // 0x394(0x04)
	int32 *daf8e5e9f8; // 0x398(0x04)
	int32 *bfce674ef9; // 0x39c(0x04)
	float *1666efa644; // 0x3a0(0x04)
	bool bCanGrowInShade; // 0x3a4(0x01)
	bool bSpawnsInShade; // 0x3a5(0x01)
	char pad_3A6[0x2]; // 0x3a6(0x02)
	float MaxInitialAge; // 0x3a8(0x04)
	float MaxAge; // 0x3ac(0x04)
	float *09fb0a9a55; // 0x3b0(0x04)
	struct FFloatInterval *5abb08ce68; // 0x3b4(0x08)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct FRuntimeFloatCurve *5b13d24445; // 0x3c0(0x78)
	int32 *b12cb1e456; // 0x438(0x04)
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
	char *2d74d4bf01 : 1; // 0x43d(0x01)
	char *0870e284ac : 1; // 0x43d(0x01)
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
// Size: 0x458 (Inherited: 0x408)
struct AInstancedFoliageActor : AActor {
	char pad_408[0x50]; // 0x408(0x50)
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x478 (Inherited: 0x418)
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x418(0x08)
	struct FVector *3f846fef41; // 0x420(0x0c)
	struct FVector *9143e00734; // 0x42c(0x0c)
	struct FVector *57675dff16; // 0x438(0x0c)
	struct FVector *f50b110fbe; // 0x444(0x0c)
	float FoliageDamageImpulseScale; // 0x450(0x04)
	float FoliageTouchImpulseScale; // 0x454(0x04)
	float FoliageStiffness; // 0x458(0x04)
	float FoliageStiffnessQuadratic; // 0x45c(0x04)
	float FoliageDamping; // 0x460(0x04)
	float MaxDamageImpulse; // 0x464(0x04)
	float MaxTouchImpulse; // 0x468(0x04)
	float MaxForce; // 0x46c(0x04)
	float Mass; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)

	void CapsuleTouched(); // Function Foliage.InteractiveFoliageActor.CapsuleTouched // Final|Native|Protected|HasOutParms // @ game+0x606484c
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0xbb0 (Inherited: 0xba0)
struct UInteractiveFoliageComponent : UStaticMeshComponent {
	char pad_BA0[0x10]; // 0xba0(0x10)
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x448 (Inherited: 0x440)
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x440(0x08)
};

// Class Foliage.ProceduralFoliageComponent
// Size: 0x230 (Inherited: 0x200)
struct UProceduralFoliageComponent : UActorComponent {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x200(0x08)
	float TileOverlap; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct AVolume* SpawningVolume; // 0x210(0x08)
	struct FGuid *5d639b4aac; // 0x218(0x10)
	char pad_228[0x8]; // 0x228(0x08)
};

// Class Foliage.ProceduralFoliageSpawner
// Size: 0x78 (Inherited: 0x30)
struct UProceduralFoliageSpawner : UObject {
	int32 RandomSeed; // 0x30(0x04)
	float TileSize; // 0x34(0x04)
	int32 NumUniqueTiles; // 0x38(0x04)
	float MinimumQuadTreeSize; // 0x3c(0x04)
	char pad_40[0x8]; // 0x40(0x08)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x48(0x10)
	bool *e1c1d5f2d8; // 0x58(0x01)
	char pad_59[0x1f]; // 0x59(0x1f)

	void Simulate(); // Function Foliage.ProceduralFoliageSpawner.Simulate // Final|Native|Public|BlueprintCallable // @ game+0x6064d5c
};

// Class Foliage.*dbbfce7018
// Size: 0x160 (Inherited: 0x30)
struct U*dbbfce7018 : UObject {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x30(0x08)
	char pad_38[0xa0]; // 0x38(0xa0)
	struct TArray<struct F*db83a82904> *2e4ec2cfe1; // 0xd8(0x10)
	char pad_E8[0x78]; // 0xe8(0x78)
};

// Class Foliage.ProceduralFoliageVolume
// Size: 0x448 (Inherited: 0x440)
struct AProceduralFoliageVolume : AVolume {
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x440(0x08)
};


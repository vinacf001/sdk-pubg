// Class Foliage.*883e67a4f9
// Size: 0xd80 (Inherited: 0xd60)
struct U*883e67a4f9 : UHierarchicalInstancedStaticMeshComponent {
	struct FMulticastDelegate OnInstanceTakePointDamage; // 0xd58(0x10)
	struct FMulticastDelegate OnInstanceTakeRadialDamage; // 0xd68(0x10)
};

// Class Foliage.*bae01c6b5e
// Size: 0x30 (Inherited: 0x30)
struct U*bae01c6b5e : UBlueprintFunctionLibrary {

	void *189d4ea2b6(); // Function Foliage.*bae01c6b5e.*189d4ea2b6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6441e9c
	void *adf5b3b7b3(); // Function Foliage.*bae01c6b5e.*adf5b3b7b3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6441fe0
};

// Class Foliage.FoliageType
// Size: 0x450 (Inherited: 0x30)
struct UFoliageType : UObject {
	struct FGuid *bcae898d9e; // 0x30(0x10)
	float Density; // 0x40(0x04)
	float *c97274d76c; // 0x44(0x04)
	float Radius; // 0x48(0x04)
	enum class EFoliageScaling Scaling; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FFloatInterval ScaleX; // 0x50(0x08)
	struct FFloatInterval ScaleY; // 0x58(0x08)
	struct FFloatInterval ScaleZ; // 0x60(0x08)
	struct F*0b79243295 *4f3a7ec747[0x04]; // 0x68(0x30)
	enum class FoliageVertexColorMask VertexColorMask; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float VertexColorMaskThreshold; // 0x9c(0x04)
	char VertexColorMaskInvert : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FFloatInterval *e4b1acf7cd; // 0xa4(0x08)
	char AlignToNormal : 1; // 0xac(0x01)
	char pad_AC_1 : 7; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float *253263ed11; // 0xb0(0x04)
	char *a677f89f19 : 1; // 0xb4(0x01)
	char pad_B4_1 : 7; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float *010555cfe4; // 0xb8(0x04)
	struct FFloatInterval *04d00a7144; // 0xbc(0x08)
	struct FFloatInterval Height; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FName> LandscapeLayers; // 0xd0(0x10)
	struct FName LandscapeLayer; // 0xe0(0x08)
	char CollisionWithWorld : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FVector *a1aaa7d3ee; // 0xec(0x0c)
	float *7af302a964; // 0xf8(0x04)
	struct FBoxSphereBounds *0297c1dd8a; // 0xfc(0x1c)
	struct FVector *766ae003e8; // 0x118(0x0c)
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
	char *7ea77ae49c : 1; // 0x140(0x01)
	char *d5b1d4efdd : 1; // 0x140(0x01)
	char *634898d6e3 : 1; // 0x140(0x01)
	char pad_140_3 : 5; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	enum class EDecalChannel DecalChannel; // 0x144(0x01)
	enum class EHasCustomNavigableGeometry *161218546b; // 0x145(0x01)
	struct FLightingChannels LightingChannels; // 0x146(0x03)
	char pad_149[0x7]; // 0x149(0x07)
	struct FBodyInstance BodyInstance; // 0x150(0x240)
	float *b06e0108b7; // 0x390(0x04)
	float *1e742d0ad5; // 0x394(0x04)
	int32 *449b7e6db3; // 0x398(0x04)
	float *e6fd04ec35; // 0x39c(0x04)
	float *9a04436318; // 0x3a0(0x04)
	float *761683aad2; // 0x3a4(0x04)
	int32 *6158b633ac; // 0x3a8(0x04)
	int32 *4306ec7ed8; // 0x3ac(0x04)
	float *3b341440ff; // 0x3b0(0x04)
	bool bCanGrowInShade; // 0x3b4(0x01)
	bool bSpawnsInShade; // 0x3b5(0x01)
	char pad_3B6[0x2]; // 0x3b6(0x02)
	float MaxInitialAge; // 0x3b8(0x04)
	float MaxAge; // 0x3bc(0x04)
	float *b8ab45c962; // 0x3c0(0x04)
	struct FFloatInterval *db2656320f; // 0x3c4(0x08)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct FRuntimeFloatCurve *580f37dfff; // 0x3d0(0x78)
	int32 *34dfcf99f2; // 0x448(0x04)
	char ReapplyDensity : 1; // 0x44c(0x01)
	char ReapplyRadius : 1; // 0x44c(0x01)
	char ReapplyAlignToNormal : 1; // 0x44c(0x01)
	char ReapplyRandomYaw : 1; // 0x44c(0x01)
	char ReapplyScaling : 1; // 0x44c(0x01)
	char ReapplyScaleX : 1; // 0x44c(0x01)
	char ReapplyScaleY : 1; // 0x44c(0x01)
	char ReapplyScaleZ : 1; // 0x44c(0x01)
	char ReapplyRandomPitchAngle : 1; // 0x44d(0x01)
	char ReapplyGroundSlope : 1; // 0x44d(0x01)
	char ReapplyHeight : 1; // 0x44d(0x01)
	char ReapplyLandscapeLayers : 1; // 0x44d(0x01)
	char ReapplyZOffset : 1; // 0x44d(0x01)
	char ReapplyCollisionWithWorld : 1; // 0x44d(0x01)
	char *41acbe8138 : 1; // 0x44d(0x01)
	char *515f2592b9 : 1; // 0x44d(0x01)
	char pad_44E[0x2]; // 0x44e(0x02)
};

// Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x470 (Inherited: 0x450)
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	struct UStaticMesh* Mesh; // 0x450(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x458(0x10)
	struct UClass* ComponentClass; // 0x468(0x08)
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
	struct FVector *1ebd4cfdfa; // 0x400(0x0c)
	struct FVector *52b671e0ac; // 0x40c(0x0c)
	struct FVector *8820954241; // 0x418(0x0c)
	struct FVector *886abcca2d; // 0x424(0x0c)
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

	void CapsuleTouched(); // Function Foliage.InteractiveFoliageActor.CapsuleTouched // Final|Native|Protected|HasOutParms // @ game+0x6441c4c
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0xb60 (Inherited: 0xb50)
struct UInteractiveFoliageComponent : UStaticMeshComponent {
	char pad_B50[0x10]; // 0xb50(0x10)
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x428 (Inherited: 0x420)
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x420(0x08)
};

// Class Foliage.ProceduralFoliageComponent
// Size: 0x230 (Inherited: 0x200)
struct UProceduralFoliageComponent : UActorComponent {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x200(0x08)
	float TileOverlap; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct AVolume* SpawningVolume; // 0x210(0x08)
	struct FGuid *daf7bfcd03; // 0x218(0x10)
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
	bool *a02332daed; // 0x58(0x01)
	char pad_59[0x1f]; // 0x59(0x1f)

	void Simulate(); // Function Foliage.ProceduralFoliageSpawner.Simulate // Final|Native|Public|BlueprintCallable // @ game+0x644215c
};

// Class Foliage.*2397fdab2f
// Size: 0x160 (Inherited: 0x30)
struct U*2397fdab2f : UObject {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x30(0x08)
	char pad_38[0xa0]; // 0x38(0xa0)
	struct TArray<struct F*13222359fd> *b6531a9813; // 0xd8(0x10)
	char pad_E8[0x78]; // 0xe8(0x78)
};

// Class Foliage.ProceduralFoliageVolume
// Size: 0x428 (Inherited: 0x420)
struct AProceduralFoliageVolume : AVolume {
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x420(0x08)
};


// Class Foliage.*883e67a4f9
// Size: 0xd80 (Inherited: 0xd60)
struct U*883e67a4f9 : UHierarchicalInstancedStaticMeshComponent {
	struct FMulticastDelegate OnInstanceTakePointDamage; // 0xd58(0x10)
	struct FMulticastDelegate OnInstanceTakeRadialDamage; // 0xd68(0x10)
};

// Class Foliage.*bae01c6b5e
// Size: 0x30 (Inherited: 0x30)
struct U*bae01c6b5e : UBlueprintFunctionLibrary {
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
// Size: 0x448 (Inherited: 0x3f8)
struct AInstancedFoliageActor : AActor {
	float NetUpdateFrequency; // 0x30(0x04)
	char pad_3FC_0 : 3; // 0x3fc(0x01)
	char *afc0b607c1 : 1; // 0x40(0x01)
	char *195141a832 : 1; // 0x41(0x01)
	char bReplicates : 1; // 0x41(0x01)
	struct FName *dc8dad45d2; // 0x48(0x08)
	enum class ENetRole RemoteRole; // 0x50(0x01)
	struct AActor* Owner; // 0x58(0x08)
	struct FRepMovement ReplicatedMovement; // 0x60(0x34)
	struct F*163cdb3029 *4998573317; // 0x98(0x40)
	float *f4ec68df5a; // 0xd8(0x04)
	char bHidden : 1; // 0xf8(0x01)
	char *ccd23c4d11 : 1; // 0xf8(0x01)
	char *00c044e8f3 : 1; // 0xf8(0x01)
	char bOnlyRelevantToOwner : 1; // 0xf8(0x01)
	char bAlwaysRelevant : 1; // 0xf8(0x01)
	char *0b52d4980d : 1; // 0xf8(0x01)
	char *581c4aea8e : 1; // 0xf8(0x01)
	char *00a5818f10 : 1; // 0xf8(0x01)
	char *578ce01c9c : 1; // 0xf9(0x01)
	char *dc908ea105 : 1; // 0xf9(0x01)
	char bNetUseOwnerRelevancy : 1; // 0xf9(0x01)
	char *e59ae21b72 : 1; // 0xf9(0x01)
	char *42194894c7 : 1; // 0xf9(0x01)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x100(0x10)
	struct APawn* Instigator; // 0x160(0x08)
	char bAutoDestroyWhenFinished : 1; // 0x168(0x01)
	char bCanBeDamaged : 1; // 0x168(0x01)
	char *48c13dc856 : 1; // 0x168(0x01)
	char *b6f52fdcb3 : 1; // 0x168(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x168(0x01)
	char *ff1816ff9e : 1; // 0x168(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x168(0x01)
	char *a9f513e55a : 1; // 0x168(0x01)
	char *07bc7fef21 : 1; // 0x169(0x01)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x170(0x10)
	float NetPriority; // 0x180(0x04)
	struct FMulticastDelegate OnBeginCursorOver; // 0x188(0x10)
	struct FMulticastDelegate OnReleased; // 0x198(0x10)
	struct TArray<struct FName> Tags; // 0x1a8(0x10)
	char *72b47ba3cd : 1; // 0x1b8(0x01)
	char *8b1bf7449f : 1; // 0x1b8(0x01)
	char *d253d94f65 : 1; // 0x1b8(0x01)
	char *3b999d2d7a : 1; // 0x1b8(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x1b9(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x1ba(0x01)
	float MinNetUpdateFrequency; // 0x1bc(0x04)
	struct AActor* ParentComponentActor; // 0x1c0(0x08)
	struct FMulticastDelegate OnEndCursorOver; // 0x1c8(0x10)
	struct FMulticastDelegate OnInputTouchLeave; // 0x1d8(0x10)
	struct TArray<struct AActor*> Children; // 0x1e8(0x10)
	enum class *d729d3c5a5 InputConsumeOption; // 0x1f8(0x01)
	uint64 *59b4fa8b00; // 0x200(0x08)
	enum class ENetRole Role; // 0x208(0x01)
	int32 *403c4f6ec5; // 0x210(0x04)
	float InitialLifeSpan; // 0x214(0x04)
	struct FMulticastDelegate OnTakePointDamage; // 0x218(0x10)
	int32 *c2b5fafb50; // 0x228(0x04)
	struct FMulticastDelegate OnInputTouchEnd; // 0x230(0x10)
	float CustomTimeDilation; // 0x240(0x04)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x248(0x10)
	struct TArray<struct AMatineeActor*> *24dd036ec9; // 0x258(0x10)
	struct USceneComponent* RootComponent; // 0x268(0x08)
	struct FMulticastDelegate OnActorHit; // 0x270(0x10)
	struct UChildActorComponent* *18ff5b3923; // 0x280(0x08)
	struct FMulticastDelegate OnInputTouchBegin; // 0x288(0x10)
	struct FGuid DestructibleId; // 0x298(0x10)
	bool bIsDestroyedVersion; // 0x2a8(0x01)
	bool RemoveFromLevelLOD; // 0x2a9(0x01)
	struct F*b3a779a928 PrimaryActorTick; // 0x2b0(0x58)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x310(0x10)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x320(0x01)
	float NetCullDistanceSquared; // 0x324(0x04)
	struct FMulticastDelegate OnClicked; // 0x328(0x10)
	struct U*89f9a84286* *89f9a84286; // 0x338(0x08)
	enum class EAutoReceiveInput *aaa4c6b0aa; // 0x340(0x01)
	struct FMulticastDelegate OnDestroyed; // 0x398(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x3a8(0x10)
	struct FMulticastDelegate OnActorEndOverlap; // 0x3c0(0x10)
	struct TArray<struct FName> Layers; // 0x3d0(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x3e0(0x10)

	bool K2_AddActorLocalOffset(); // Function Engine.Actor.K2_AddActorLocalOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bb8374
	bool K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor // Final|Native|Public|BlueprintCallable // @ game+0x6bb9ffc
	struct APlayerController* K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // Event|Public|BlueprintEvent // @ game+0x370fbc
	bool K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bbbe48
	struct FHitResult K2_AddActorLocalRotation(bool bTeleport); // Function Engine.Actor.K2_AddActorLocalRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bb854c
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // Native|Public // @ game+0xb50d98
	void GetActorBounds(bool bOnlyCollidingComponents); // Function Engine.Actor.GetActorBounds // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb079c
	void K2_AttachRootComponentTo(struct USceneComponent* InParent, struct FName InSocketName, enum class EAttachLocation AttachLocationType); // Function Engine.Actor.K2_AttachRootComponentTo // Final|Native|Public|BlueprintCallable // @ game+0x6bb9e7c
	void *cdc7b91d6d(); // Function Engine.Actor.*cdc7b91d6d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb68c4
	void MakeNoise(float Loudness, struct APawn* NoiseInstigator, struct FVector NoiseLocation); // Function Engine.Actor.MakeNoise // Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bbda74
	void *75f3114c08(); // Function Engine.Actor.*75f3114c08 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb76e4
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // Native|Protected // @ game+0xbed704
	void *b999b3d1c3(struct UMaterialInterface* Parent, struct UMaterialInstanceDynamic* ReturnValue); // Function Engine.Actor.*b999b3d1c3 // Final|Native|Public|BlueprintCallable // @ game+0x6bbd9f8
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // Event|Public|BlueprintEvent // @ game+0x370fbc
	bool *bad918d000(); // Function Engine.Actor.*bad918d000 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bcaac4
	float *7311615d4b(); // Function Engine.Actor.*7311615d4b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb0d50
	float *685e3b5cc9(); // Function Engine.Actor.*685e3b5cc9 // Native|Public|BlueprintCallable // @ game+0x6bc6498
	struct FVector *1206b0a740(); // Function Engine.Actor.*1206b0a740 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb0bd8
	float *5c41a9b3d8(); // Function Engine.Actor.*5c41a9b3d8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb40a0
	struct FVector *806c296001(); // Function Engine.Actor.*806c296001 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bbae14
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // Event|Public|BlueprintEvent // @ game+0x370fbc
	enum class ETouchIndex ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // Event|Public|BlueprintEvent // @ game+0x370fbc
	struct USceneComponent* *6c12a1a971(); // Function Engine.Actor.*6c12a1a971 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bbb350
	bool *0533b13c90(); // Function Engine.Actor.*0533b13c90 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb112c
	bool *91da404789(); // Function Engine.Actor.*91da404789 // Final|Native|Public|BlueprintCallable // @ game+0xdbd9a8
	void *72d1ab0701(struct FVector NewScale3D); // Function Engine.Actor.*72d1ab0701 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bc2b94
	void K2_OnBecomeViewTarget(struct APlayerController* PC); // Function Engine.Actor.K2_OnBecomeViewTarget // Event|Public|BlueprintEvent // @ game+0x370fbc
	void K2_AddActorWorldOffset(); // Function Engine.Actor.K2_AddActorWorldOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bb8950
	void K2_SetActorLocation(struct FVector NewLocation, bool bSweep, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_SetActorLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bbba2c
	void *bda82fb76a(); // Function Engine.Actor.*bda82fb76a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb1364
	void *de9d01b3f6(struct AActor* ParentActor, struct FName SocketName, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies); // Function Engine.Actor.*de9d01b3f6 // Final|Native|Public|BlueprintCallable // @ game+0x6bba2fc
	void *8ee0b9e990(); // Function Engine.Actor.*8ee0b9e990 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb49d0
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bbaee4
	struct TArray<struct UPrimitiveComponent*> GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb5964
	bool *d57fbe8fc6(); // Function Engine.Actor.*d57fbe8fc6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb7630
	float *511ef00739(); // Function Engine.Actor.*511ef00739 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb2e28
	enum class ETouchIndex ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // Event|Public|BlueprintEvent // @ game+0x370fbc
	struct UChildActorComponent* *ef270d1a10(); // Function Engine.Actor.*ef270d1a10 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb5bb8
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // Native|Public // @ game+0xf1a3fc
	struct TArray<struct UActorComponent*> *d93dde83f1(); // Function Engine.Actor.*d93dde83f1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb2600
	bool K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bbbc10
	struct AActor* *e22a09fc3d(); // Function Engine.Actor.*e22a09fc3d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb5af4
	struct APawn* *dd10056177(); // Function Engine.Actor.*dd10056177 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb49b8
	struct AActor* SetOwner(); // Function Engine.Actor.SetOwner // Native|Public|BlueprintCallable // @ game+0x5d95e60
	struct AActor* ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // Event|Public|BlueprintEvent // @ game+0x370fbc
	void *118a22ba37(struct FName InputAxisName, float ReturnValue); // Function Engine.Actor.*118a22ba37 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb4194
	void DetachRootComponentFromParent(bool bMaintainWorldPosition); // Function Engine.Actor.DetachRootComponentFromParent // Final|Native|Public|BlueprintCallable // @ game+0x6bae4ac
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // Native|Public // @ game+0x40a36c
	void *b7511d0ed8(enum class *ecdd115207 RotationRule); // Function Engine.Actor.*b7511d0ed8 // Final|Native|Public|BlueprintCallable // @ game+0x6bbaaa4
	void K2_AddActorWorldTransform(struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bb8d00
	void ReceiveActorOnInputTouchLeave(enum class ETouchIndex FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // Event|Public|BlueprintEvent // @ game+0x370fbc
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x370fbc
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // Native|Public // @ game+0xd9fc70
	void *f3429ceb97(struct UClass* ComponentClass, struct UActorComponent* ReturnValue); // Function Engine.Actor.*f3429ceb97 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb2508
	void *eb66fec44e(struct FVector ReturnValue); // Function Engine.Actor.*eb66fec44e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb0d04
	void GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb5704
	struct FHitResult ReceivePointDamage(); // Function Engine.Actor.ReceivePointDamage // BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x370fbc
	enum class EEndPlayReason ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x370fbc
	bool SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // Final|Native|Public|BlueprintCallable // @ game+0x6bc2c34
	bool *461623950c(); // Function Engine.Actor.*461623950c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb764c
	struct AActor* ReceiveAnyDamage(); // Function Engine.Actor.ReceiveAnyDamage // BlueprintAuthorityOnly|Event|Public|BlueprintEvent // @ game+0x370fbc
	bool K2_AddActorLocalTransform(); // Function Engine.Actor.K2_AddActorLocalTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bb8724
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // Event|Public|BlueprintEvent // @ game+0x370fbc
	struct AActor* *c4fee2a50d(); // Function Engine.Actor.*c4fee2a50d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb1340
	struct AActor* *5d41351842(float ReturnValue); // Function Engine.Actor.*5d41351842 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb3b64
	void AddComponent(struct FName TemplateName, bool bManualAttachment); // Function Engine.Actor.AddComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0xcade1c
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function Engine.Actor.ReceiveActorBeginOverlap // Event|Public|BlueprintEvent // @ game+0x370fbc
	void *e45fc9ffc9(struct FVector OutLocation, struct FRotator OutRotation); // Function Engine.Actor.*e45fc9ffc9 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb096c
	void *383cbfbf66(); // Function Engine.Actor.*383cbfbf66 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb13a8
	void ReceiveActorOnReleased(struct FKey ButtonReleased); // Function Engine.Actor.ReceiveActorOnReleased // Event|Public|BlueprintEvent // @ game+0x370fbc
	void *d4b72b197e(enum class ENetRole ReturnValue); // Function Engine.Actor.*d4b72b197e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb6404
	void GetVelocity(); // Function Engine.Actor.GetVelocity // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb6fd8
	void *0f7b3f99fd(); // Function Engine.Actor.*0f7b3f99fd // Native|Public|BlueprintCallable // @ game+0x6bb0000
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // Native|Public // @ game+0x6a12d0
	void DisableInput(struct APlayerController* PlayerController); // Function Engine.Actor.DisableInput // Native|Public|BlueprintCallable // @ game+0x6bae540
	void K2_AddActorWorldRotation(); // Function Engine.Actor.K2_AddActorWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bb8b28
	struct UActorComponent* *f221ff8513(); // Function Engine.Actor.*f221ff8513 // Native|Public|BlueprintCallable // @ game+0x6ba9f60
	float *14c0f68ea4(); // Function Engine.Actor.*14c0f68ea4 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6bb3070
	bool ActorHasTag(); // Function Engine.Actor.ActorHasTag // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xe76424
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6bb059c
	enum class ETickingGroup *814a121c39(); // Function Engine.Actor.*814a121c39 // Final|Native|Public|BlueprintCallable // @ game+0x6bc8598
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // Event|Public|BlueprintEvent // @ game+0x370fbc
	float *52068fadb9(); // Function Engine.Actor.*52068fadb9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb3ac4
	void *5f8251239e(); // Function Engine.Actor.*5f8251239e // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6bb0588
	struct FVector *a0012f52a9(); // Function Engine.Actor.*a0012f52a9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb0ba4
	bool SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // Native|Public|BlueprintCallable // @ game+0x6bc2890
	struct AActor* AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x6ba9e38
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x370fbc
	bool *d85c70de6e(); // Function Engine.Actor.*d85c70de6e // Final|Native|Public|BlueprintCallable // @ game+0x6bb6b90
	void *65fa332f56(); // Function Engine.Actor.*65fa332f56 // Native|Public|BlueprintCallable // @ game+0x6bca400
	struct FKey ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // Event|Public|BlueprintEvent // @ game+0x370fbc
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x370fbc
	struct FVector *058a798681(); // Function Engine.Actor.*058a798681 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bc2af4
	struct UActorComponent* *581f8985e1(); // Function Engine.Actor.*581f8985e1 // Final|Native|Public|BlueprintCallable // @ game+0x6bba954
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // Event|Public|BlueprintEvent // @ game+0x370fbc
	void *0d0c513b2c(struct UActorComponent* PrerequisiteComponent); // Function Engine.Actor.*0d0c513b2c // Native|Public|BlueprintCallable // @ game+0x6bbf5c8
	void *83d2d5c58f(); // Function Engine.Actor.*83d2d5c58f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb7e88
	void *efaba219b2(struct FName Tag, struct TArray<struct UActorComponent*> ReturnValue); // Function Engine.Actor.*efaba219b2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb26f0
	void *541a06a744(); // Function Engine.Actor.*541a06a744 // Native|Public|BlueprintCallable // @ game+0x6bbf4a0
	void *ce1958648c(); // Function Engine.Actor.*ce1958648c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb2ec8
	void *891a15da22(struct FVector DestLocation, struct FRotator DestRotation, bool ReturnValue); // Function Engine.Actor.*891a15da22 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bbd3c0
	void ReceiveHit(bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse); // Function Engine.Actor.ReceiveHit // Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x370fbc
	void *76f4a54e31(); // Function Engine.Actor.*76f4a54e31 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb0d38
	struct FTransform GetTransform(); // Function Engine.Actor.GetTransform // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xd1263c
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // Native|Public|BlueprintCallable // @ game+0x6bba93c
	float *7cff7fa404(); // Function Engine.Actor.*7cff7fa404 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb7010
	struct FVector *d5ff08bf52(); // Function Engine.Actor.*d5ff08bf52 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb0a78
	struct AActor* ReceiveRadialDamage(); // Function Engine.Actor.ReceiveRadialDamage // BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x370fbc
	struct FVector *bbf004721b(); // Function Engine.Actor.*bbf004721b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb47b0
	bool *221e5b49fe(); // Function Engine.Actor.*221e5b49fe // Native|Public|BlueprintCallable // @ game+0x6bc8030
	bool K2_SetActorRelativeRotation(); // Function Engine.Actor.K2_SetActorRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bbc020
	bool *4bc88286ff(); // Function Engine.Actor.*4bc88286ff // Final|Native|Public|BlueprintCallable // @ game+0x6bc27f8
	struct AActor* *057be55286(); // Function Engine.Actor.*057be55286 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb5b94
	float *48b2b80fa1(); // Function Engine.Actor.*48b2b80fa1 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb4a80
	struct FRotator K2_SetActorRotation(bool bTeleportPhysics, bool ReturnValue); // Function Engine.Actor.K2_SetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bbc424
	void K2_SetActorTransform(struct FTransform NewTransform); // Function Engine.Actor.K2_SetActorTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bbc524
	void *209c054b22(struct AActor* InParentActor, struct FName InSocketName); // Function Engine.Actor.*209c054b22 // Final|Native|Public|BlueprintCallable // @ game+0x6bc96f8
	void HasAuthority(); // Function Engine.Actor.HasAuthority // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xbe9b28
	void *87d1cdd662(); // Function Engine.Actor.*87d1cdd662 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6bc80c8
	void K2_SetActorRelativeTransform(struct FTransform NewRelativeTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorRelativeTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bbc1f8
	void *32ee7138ab(); // Function Engine.Actor.*32ee7138ab // Final|Native|Public|BlueprintCallable // @ game+0x6bc86b0
	void *45e9b736d8(); // Function Engine.Actor.*45e9b736d8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb0944
	void *f4f472a4df(struct FVector ReturnValue); // Function Engine.Actor.*f4f472a4df // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb0d78
	void *1357a6903c(float TickInterval); // Function Engine.Actor.*1357a6903c // Final|Native|Public|BlueprintCallable // @ game+0x6bc2cc8
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x468 (Inherited: 0x408)
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x408(0x08)
	struct FVector *1ebd4cfdfa; // 0x410(0x0c)
	struct FVector *52b671e0ac; // 0x41c(0x0c)
	struct FVector *8820954241; // 0x428(0x0c)
	struct FVector *886abcca2d; // 0x434(0x0c)
	float FoliageDamageImpulseScale; // 0x440(0x04)
	float FoliageTouchImpulseScale; // 0x444(0x04)
	float FoliageStiffness; // 0x448(0x04)
	float FoliageStiffnessQuadratic; // 0x44c(0x04)
	float FoliageDamping; // 0x450(0x04)
	float MaxDamageImpulse; // 0x454(0x04)
	float MaxTouchImpulse; // 0x458(0x04)
	float MaxForce; // 0x45c(0x04)
	float Mass; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)

	void CapsuleTouched(struct UPrimitiveComponent* Param0, struct AActor* Param1, struct UPrimitiveComponent* Param2); // Function Foliage.InteractiveFoliageActor.CapsuleTouched // Final|Native|Protected|HasOutParms // @ game+0x64397b0
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0xb60 (Inherited: 0xb50)
struct UInteractiveFoliageComponent : UStaticMeshComponent {
	int32 ForcedLodModel; // 0xab0(0x04)
	int32 *9f0fda2ed8; // 0xab4(0x04)
	bool bOverrideMinLOD; // 0xab8(0x01)
	int32 MinLOD; // 0xabc(0x04)
	struct UStaticMesh* StaticMesh; // 0xac0(0x08)
	bool bOverrideWireframeColor; // 0xac8(0x01)
	struct FColor WireframeColorOverride; // 0xacc(0x04)
	struct FLinearColor PerInstanceCustomData; // 0xad0(0x10)
	char *138a858590 : 1; // 0xae0(0x01)
	char *c1a735b803 : 1; // 0xae0(0x01)
	char bDisallowMeshPaintPerInstance : 1; // 0xae0(0x01)
	char *b431fce4a2 : 1; // 0xae0(0x01)
	char bIgnoreInstanceForTextureStreaming : 1; // 0xae0(0x01)
	char bOverrideLightMapRes : 1; // 0xae0(0x01)
	int32 OverriddenLightMapRes; // 0xae4(0x04)
	char bCastDistanceFieldIndirectShadow : 1; // 0xae8(0x01)
	float DistanceFieldIndirectShadowMinVisibility; // 0xaec(0x04)
	float StreamingDistanceMultiplier; // 0xaf0(0x04)
	int32 *12d8adf087; // 0xaf4(0x04)
	char *402c8627cc : 1; // 0xaf8(0x01)
	struct TArray<struct FGuid> IrrelevantLights; // 0xb00(0x10)
	struct TArray<struct F*87fceb50c7> *5ff7bc7629; // 0xb10(0x10)
	struct TArray<struct F*8760f7f7d5> *ad72999b02; // 0xb20(0x10)
	bool *24446b5829; // 0xb30(0x01)
	struct F*2ca2c467d8 LightmassSettings; // 0xb34(0x18)

	int32 *11ee32cc52(); // Function Engine.StaticMeshComponent.*11ee32cc52 // Final|Native|Public|BlueprintCallable // @ game+0x6bc5794
	struct FVector *8243903fcf(); // Function Engine.StaticMeshComponent.*8243903fcf // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb4ad8
	bool SetStaticMesh(); // Function Engine.StaticMeshComponent.SetStaticMesh // Native|Public|BlueprintCallable // @ game+0x663ac24
	struct UStaticMesh* OnRep_StaticMesh(); // Function Engine.StaticMeshComponent.OnRep_StaticMesh // Final|Native|Public // @ game+0x6bbe00c
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x438 (Inherited: 0x430)
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x430(0x08)
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

	int32 Simulate(); // Function Foliage.ProceduralFoliageSpawner.Simulate // Final|Native|Public|BlueprintCallable // @ game+0x6439cc0
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
// Size: 0x438 (Inherited: 0x430)
struct AProceduralFoliageVolume : AVolume {
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x430(0x08)
};


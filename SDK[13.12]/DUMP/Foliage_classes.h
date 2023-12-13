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
// Size: 0x440 (Inherited: 0x3f0)
struct AInstancedFoliageActor : AActor {
	float NetUpdateFrequency; // 0x30(0x04)
	struct FMulticastDelegate OnEndCursorOver; // 0x40(0x10)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x50(0x10)
	char pad_414_0 : 3; // 0x414(0x01)
	char *afc0b607c1 : 1; // 0x60(0x01)
	char *195141a832 : 1; // 0x61(0x01)
	char bReplicates : 1; // 0x61(0x01)
	struct FName *dc8dad45d2; // 0x68(0x08)
	enum class ENetRole RemoteRole; // 0x70(0x01)
	struct AActor* Owner; // 0x78(0x08)
	struct FRepMovement ReplicatedMovement; // 0x80(0x34)
	struct F*163cdb3029 *4998573317; // 0xb8(0x40)
	enum class ENetRole Role; // 0xf8(0x01)
	char bHidden : 1; // 0xfa(0x01)
	char *ccd23c4d11 : 1; // 0xfa(0x01)
	char *00c044e8f3 : 1; // 0xfa(0x01)
	char bOnlyRelevantToOwner : 1; // 0xfa(0x01)
	char bAlwaysRelevant : 1; // 0xfa(0x01)
	char *0b52d4980d : 1; // 0xfa(0x01)
	char *581c4aea8e : 1; // 0xfa(0x01)
	char *00a5818f10 : 1; // 0xfa(0x01)
	char *578ce01c9c : 1; // 0xfb(0x01)
	char *dc908ea105 : 1; // 0xfb(0x01)
	char bNetUseOwnerRelevancy : 1; // 0xfb(0x01)
	char *e59ae21b72 : 1; // 0xfb(0x01)
	char *42194894c7 : 1; // 0xfb(0x01)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x100(0x10)
	char bAutoDestroyWhenFinished : 1; // 0x110(0x01)
	char bCanBeDamaged : 1; // 0x110(0x01)
	char *48c13dc856 : 1; // 0x110(0x01)
	char *b6f52fdcb3 : 1; // 0x110(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x110(0x01)
	char *ff1816ff9e : 1; // 0x110(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x110(0x01)
	char *a9f513e55a : 1; // 0x110(0x01)
	char *07bc7fef21 : 1; // 0x111(0x01)
	struct TArray<struct AMatineeActor*> *24dd036ec9; // 0x118(0x10)
	float *f4ec68df5a; // 0x138(0x04)
	float NetPriority; // 0x13c(0x04)
	char *72b47ba3cd : 1; // 0x144(0x01)
	char *8b1bf7449f : 1; // 0x144(0x01)
	char *d253d94f65 : 1; // 0x144(0x01)
	char *3b999d2d7a : 1; // 0x144(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x145(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x146(0x01)
	int32 *403c4f6ec5; // 0x148(0x04)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x150(0x10)
	struct TArray<struct FName> Tags; // 0x168(0x10)
	float MinNetUpdateFrequency; // 0x178(0x04)
	struct U*89f9a84286* *89f9a84286; // 0x188(0x08)
	struct APawn* Instigator; // 0x190(0x08)
	struct FMulticastDelegate OnClicked; // 0x198(0x10)
	float NetCullDistanceSquared; // 0x1a8(0x04)
	float CustomTimeDilation; // 0x1ac(0x04)
	struct USceneComponent* RootComponent; // 0x1b0(0x08)
	struct TArray<struct FName> Layers; // 0x1b8(0x10)
	struct FMulticastDelegate OnActorEndOverlap; // 0x1c8(0x10)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x1d8(0x01)
	struct FGuid DestructibleId; // 0x1dc(0x10)
	bool bIsDestroyedVersion; // 0x1ec(0x01)
	bool RemoveFromLevelLOD; // 0x1ed(0x01)
	struct F*b3a779a928 PrimaryActorTick; // 0x1f0(0x58)
	float InitialLifeSpan; // 0x24c(0x04)
	struct FMulticastDelegate OnInputTouchLeave; // 0x250(0x10)
	struct UChildActorComponent* *18ff5b3923; // 0x260(0x08)
	struct FMulticastDelegate OnInputTouchEnter; // 0x268(0x10)
	enum class *d729d3c5a5 InputConsumeOption; // 0x278(0x01)
	struct FMulticastDelegate OnBeginCursorOver; // 0x280(0x10)
	struct TArray<struct AActor*> Children; // 0x290(0x10)
	int32 *c2b5fafb50; // 0x2a0(0x04)
	struct FMulticastDelegate OnTakePointDamage; // 0x2f8(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x308(0x10)
	struct FMulticastDelegate OnActorHit; // 0x318(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x328(0x10)
	enum class EAutoReceiveInput *aaa4c6b0aa; // 0x338(0x01)
	struct AActor* ParentComponentActor; // 0x33c(0x08)
	struct FMulticastDelegate OnDestroyed; // 0x348(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x358(0x10)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x3c0(0x10)
	uint64 *59b4fa8b00; // 0x3d0(0x08)
	struct FMulticastDelegate OnReleased; // 0x3d8(0x10)

	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // Native|Public // @ game+0xe6fc80
	struct FVector *d5ff08bf52(); // Function Engine.Actor.*d5ff08bf52 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68946e8
	struct APlayerController* K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // Event|Public|BlueprintEvent // @ game+0x20a5d0
	struct TArray<struct UActorComponent*> *efaba219b2(); // Function Engine.Actor.*efaba219b2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6896340
	enum class ENetRole *d4b72b197e(); // Function Engine.Actor.*d4b72b197e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6899fb8
	bool DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // Final|Native|Public|BlueprintCallable // @ game+0x689211c
	struct FRotator K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x689ea54
	bool K2_SetActorRotation(); // Function Engine.Actor.K2_SetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x689ffe0
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // Native|Public // @ game+0x525484
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // Native|Public|BlueprintCallable // @ game+0x689e4b8
	void *5f8251239e(); // Function Engine.Actor.*5f8251239e // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x68941f8
	bool K2_AttachRootComponentTo(); // Function Engine.Actor.K2_AttachRootComponentTo // Final|Native|Public|BlueprintCallable // @ game+0x689d9f8
	float *5c41a9b3d8(); // Function Engine.Actor.*5c41a9b3d8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6897cf0
	enum class ETouchIndex ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // Event|Public|BlueprintEvent // @ game+0x20a5d0
	struct FVector *058a798681(); // Function Engine.Actor.*058a798681 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x68a6634
	struct FHitResult ReceiveHit(); // Function Engine.Actor.ReceiveHit // Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x20a5d0
	struct FVector *72d1ab0701(); // Function Engine.Actor.*72d1ab0701 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x68a66d4
	bool K2_AddActorLocalRotation(); // Function Engine.Actor.K2_AddActorLocalRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689c0c8
	struct UMaterialInstanceDynamic* *b999b3d1c3(); // Function Engine.Actor.*b999b3d1c3 // Final|Native|Public|BlueprintCallable // @ game+0x68a15b4
	struct AActor* ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // Event|Public|BlueprintEvent // @ game+0x20a5d0
	struct FKey ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // Event|Public|BlueprintEvent // @ game+0x20a5d0
	bool *221e5b49fe(); // Function Engine.Actor.*221e5b49fe // Native|Public|BlueprintCallable // @ game+0x68abb70
	bool *75f3114c08(); // Function Engine.Actor.*75f3114c08 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689b298
	float *cdc7b91d6d(); // Function Engine.Actor.*cdc7b91d6d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689a478
	bool ActorHasTag(); // Function Engine.Actor.ActorHasTag // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdcda54
	enum class ETickingGroup *814a121c39(); // Function Engine.Actor.*814a121c39 // Final|Native|Public|BlueprintCallable // @ game+0x68ac0d8
	float *118a22ba37(); // Function Engine.Actor.*118a22ba37 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6897de4
	struct UActorComponent* *0d0c513b2c(); // Function Engine.Actor.*0d0c513b2c // Native|Public|BlueprintCallable // @ game+0x68a3184
	struct AActor* *c4fee2a50d(); // Function Engine.Actor.*c4fee2a50d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6894f98
	bool K2_AddActorWorldOffset(); // Function Engine.Actor.K2_AddActorWorldOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689c4cc
	bool *4bc88286ff(); // Function Engine.Actor.*4bc88286ff // Final|Native|Public|BlueprintCallable // @ game+0x68a6338
	float *7cff7fa404(); // Function Engine.Actor.*7cff7fa404 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689abc4
	struct UClass* GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6899354
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x20a5d0
	bool HasAuthority(); // Function Engine.Actor.HasAuthority // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xb4995c
	enum class ETouchIndex ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // Event|Public|BlueprintEvent // @ game+0x20a5d0
	bool *0533b13c90(); // Function Engine.Actor.*0533b13c90 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6894d84
	struct FVector *f4f472a4df(); // Function Engine.Actor.*f4f472a4df // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68949d8
	struct UActorComponent* *f3429ceb97(); // Function Engine.Actor.*f3429ceb97 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6896158
	struct FVector *eb66fec44e(); // Function Engine.Actor.*eb66fec44e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6894964
	struct AActor* SetOwner(); // Function Engine.Actor.SetOwner // Native|Public|BlueprintCallable // @ game+0x5a98aa4
	struct FVector *bbf004721b(); // Function Engine.Actor.*bbf004721b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6898400
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // Native|Public // @ game+0x4de458
	struct AActor* ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // Event|Public|BlueprintEvent // @ game+0x20a5d0
	struct FName MakeNoise(); // Function Engine.Actor.MakeNoise // Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable // @ game+0x68a1630
	float *5d41351842(); // Function Engine.Actor.*5d41351842 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68977b4
	float *76f4a54e31(); // Function Engine.Actor.*76f4a54e31 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6894998
	struct USceneComponent* *6c12a1a971(); // Function Engine.Actor.*6c12a1a971 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689ef14
	float *14c0f68ea4(); // Function Engine.Actor.*14c0f68ea4 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6896cc0
	enum class ETouchIndex ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // Event|Public|BlueprintEvent // @ game+0x20a5d0
	struct FHitResult ReceivePointDamage(); // Function Engine.Actor.ReceivePointDamage // BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x20a5d0
	float *52068fadb9(); // Function Engine.Actor.*52068fadb9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6897714
	struct FRotator *e45fc9ffc9(); // Function Engine.Actor.*e45fc9ffc9 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68945dc
	bool GetActorBounds(); // Function Engine.Actor.GetActorBounds // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x689440c
	enum class ETouchIndex ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // Event|Public|BlueprintEvent // @ game+0x20a5d0
	struct AActor* ReceiveRadialDamage(); // Function Engine.Actor.ReceiveRadialDamage // BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x20a5d0
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x20a5d0
	enum class EEndPlayReason ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x20a5d0
	bool SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // Final|Native|Public|BlueprintCallable // @ game+0x68a6774
	bool *d57fbe8fc6(); // Function Engine.Actor.*d57fbe8fc6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689b1e4
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // Native|Protected // @ game+0xb4eb28
	struct APlayerController* K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // Event|Public|BlueprintEvent // @ game+0x20a5d0
	bool *891a15da22(); // Function Engine.Actor.*891a15da22 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x68a0f7c
	bool K2_SetActorLocation(); // Function Engine.Actor.K2_SetActorLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689f5e8
	struct AController* *8ee0b9e990(); // Function Engine.Actor.*8ee0b9e990 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6898620
	float ReceiveTick(); // Function Engine.Actor.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x689420c
	struct FName *bda82fb76a(); // Function Engine.Actor.*bda82fb76a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6894fbc
	struct FKey ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // Event|Public|BlueprintEvent // @ game+0x20a5d0
	bool *de9d01b3f6(); // Function Engine.Actor.*de9d01b3f6 // Final|Native|Public|BlueprintCallable // @ game+0x689de78
	struct FName *209c054b22(); // Function Engine.Actor.*209c054b22 // Final|Native|Public|BlueprintCallable // @ game+0x68ad250
	struct AActor* AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x688db3c
	bool K2_SetActorRelativeRotation(); // Function Engine.Actor.K2_SetActorRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689fbdc
	struct AActor* *541a06a744(); // Function Engine.Actor.*541a06a744 // Native|Public|BlueprintCallable // @ game+0x68a305c
	float *7311615d4b(); // Function Engine.Actor.*7311615d4b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68949b0
	void *65fa332f56(); // Function Engine.Actor.*65fa332f56 // Native|Public|BlueprintCallable // @ game+0x68adf58
	struct APlayerController* *0f7b3f99fd(); // Function Engine.Actor.*0f7b3f99fd // Native|Public|BlueprintCallable // @ game+0x6893c70
	bool K2_AddActorWorldTransform(); // Function Engine.Actor.K2_AddActorWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689c87c
	bool *bad918d000(); // Function Engine.Actor.*bad918d000 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68ae61c
	struct TArray<struct AActor*> *383cbfbf66(); // Function Engine.Actor.*383cbfbf66 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6895000
	float *48b2b80fa1(); // Function Engine.Actor.*48b2b80fa1 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68986d0
	float *511ef00739(); // Function Engine.Actor.*511ef00739 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6896a78
	bool *83d2d5c58f(); // Function Engine.Actor.*83d2d5c58f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689ba04
	struct FVector *806c296001(); // Function Engine.Actor.*806c296001 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x689e990
	struct FVector *a0012f52a9(); // Function Engine.Actor.*a0012f52a9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x689480c
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // Native|Public // @ game+0xab1c94
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void GetTransform(struct FTransform ReturnValue); // Function Engine.Actor.GetTransform // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xc6f6d4
	void *b7511d0ed8(enum class *ecdd115207 LocationRule, enum class *ecdd115207 RotationRule, enum class *ecdd115207 ScaleRule); // Function Engine.Actor.*b7511d0ed8 // Final|Native|Public|BlueprintCallable // @ game+0x689e620
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void *1206b0a740(struct FVector ReturnValue); // Function Engine.Actor.*1206b0a740 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6894840
	void *f221ff8513(struct UActorComponent* PrerequisiteComponent); // Function Engine.Actor.*f221ff8513 // Native|Public|BlueprintCallable // @ game+0x6234cb0
	void *dd10056177(struct APawn* ReturnValue); // Function Engine.Actor.*dd10056177 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6898608
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // Event|Public|BlueprintEvent // @ game+0x20a5d0
	void *45e9b736d8(bool ReturnValue); // Function Engine.Actor.*45e9b736d8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68945b4
	void *e22a09fc3d(struct AActor* ReturnValue); // Function Engine.Actor.*e22a09fc3d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6899744
	void *d93dde83f1(struct UClass* ComponentClass, struct TArray<struct UActorComponent*> ReturnValue); // Function Engine.Actor.*d93dde83f1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6896250
	void K2_SetActorRelativeLocation(struct FVector NewRelativeLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689fa04
	void K2_AddActorWorldRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689c6a4
	void *057be55286(struct AActor* ReturnValue); // Function Engine.Actor.*057be55286 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68997d8
	void GetOverlappingComponents(struct TArray<struct UPrimitiveComponent*> OverlappingComponents); // Function Engine.Actor.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x68995b4
	void *1357a6903c(float TickInterval); // Function Engine.Actor.*1357a6903c // Final|Native|Public|BlueprintCallable // @ game+0x68a6808
	void *ce1958648c(struct AActor* OtherActor, float ReturnValue); // Function Engine.Actor.*ce1958648c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6896b18
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // Native|Public // @ game+0xcf4d04
	void AddComponent(struct FName TemplateName, bool bManualAttachment, struct FTransform RelativeTransform, struct UObject* ComponentTemplateContext, struct UActorComponent* ReturnValue); // Function Engine.Actor.AddComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0xc18b48
	void K2_AddActorLocalTransform(struct FTransform NewTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorLocalTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689c2a0
	void ReceiveAnyDamage(float Damage, struct U*0ad023d030* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Engine.Actor.ReceiveAnyDamage // BlueprintAuthorityOnly|Event|Public|BlueprintEvent // @ game+0x20a5d0
	void K2_SetActorRelativeTransform(); // Function Engine.Actor.K2_SetActorRelativeTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689fdb4
	void K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor // Final|Native|Public|BlueprintCallable // @ game+0x689db78
	void K2_AddActorLocalOffset(); // Function Engine.Actor.K2_AddActorLocalOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689bef0
	void *d85c70de6e(); // Function Engine.Actor.*d85c70de6e // Final|Native|Public|BlueprintCallable // @ game+0x689a744
	void *ef270d1a10(); // Function Engine.Actor.*ef270d1a10 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68997fc
	void *685e3b5cc9(); // Function Engine.Actor.*685e3b5cc9 // Native|Public|BlueprintCallable // @ game+0x68a9fd8
	void *581f8985e1(); // Function Engine.Actor.*581f8985e1 // Final|Native|Public|BlueprintCallable // @ game+0x689e4d0
	void *32ee7138ab(); // Function Engine.Actor.*32ee7138ab // Final|Native|Public|BlueprintCallable // @ game+0x68ac1f0
	void GetVelocity(); // Function Engine.Actor.GetVelocity // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x689ab8c
	void K2_SetActorTransform(); // Function Engine.Actor.K2_SetActorTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68a00e0
	void *91da404789(); // Function Engine.Actor.*91da404789 // Final|Native|Public|BlueprintCallable // @ game+0xd1a1d4
	void DisableInput(); // Function Engine.Actor.DisableInput // Native|Public|BlueprintCallable // @ game+0x68921b0
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // Native|Public|BlueprintCallable // @ game+0x68a63d0
	void K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689f7cc
	void *87d1cdd662(); // Function Engine.Actor.*87d1cdd662 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x68abc08
	void *461623950c(); // Function Engine.Actor.*461623950c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689b200
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x460 (Inherited: 0x400)
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x400(0x08)
	struct FVector *1ebd4cfdfa; // 0x408(0x0c)
	struct FVector *52b671e0ac; // 0x414(0x0c)
	struct FVector *8820954241; // 0x420(0x0c)
	struct FVector *886abcca2d; // 0x42c(0x0c)
	float FoliageDamageImpulseScale; // 0x438(0x04)
	float FoliageTouchImpulseScale; // 0x43c(0x04)
	float FoliageStiffness; // 0x440(0x04)
	float FoliageStiffnessQuadratic; // 0x444(0x04)
	float FoliageDamping; // 0x448(0x04)
	float MaxDamageImpulse; // 0x44c(0x04)
	float MaxTouchImpulse; // 0x450(0x04)
	float MaxForce; // 0x454(0x04)
	float Mass; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)

	struct FHitResult CapsuleTouched(); // Function Foliage.InteractiveFoliageActor.CapsuleTouched // Final|Native|Protected|HasOutParms // @ game+0x613b6b4
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

	int32 *11ee32cc52(); // Function Engine.StaticMeshComponent.*11ee32cc52 // Final|Native|Public|BlueprintCallable // @ game+0x68a92d4
	struct FVector *8243903fcf(); // Function Engine.StaticMeshComponent.*8243903fcf // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6898728
	bool SetStaticMesh(); // Function Engine.StaticMeshComponent.SetStaticMesh // Native|Public|BlueprintCallable // @ game+0x633465c
	struct UStaticMesh* OnRep_StaticMesh(); // Function Engine.StaticMeshComponent.OnRep_StaticMesh // Final|Native|Public // @ game+0x68a1bc8
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x430 (Inherited: 0x428)
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x428(0x08)
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

	int32 Simulate(); // Function Foliage.ProceduralFoliageSpawner.Simulate // Final|Native|Public|BlueprintCallable // @ game+0x613bbc4
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
// Size: 0x430 (Inherited: 0x428)
struct AProceduralFoliageVolume : AVolume {
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x428(0x08)
};


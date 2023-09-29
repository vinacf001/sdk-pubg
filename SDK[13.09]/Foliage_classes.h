// Class Foliage.*061ea11e83
// Size: 0xdc0 (Inherited: 0xda0)
struct U*061ea11e83 : UHierarchicalInstancedStaticMeshComponent {
	struct FMulticastDelegate OnInstanceTakePointDamage; // 0xd98(0x10)
	struct FMulticastDelegate OnInstanceTakeRadialDamage; // 0xda8(0x10)
};

// Class Foliage.*4258936a22
// Size: 0x28 (Inherited: 0x28)
struct U*4258936a22 : UBlueprintFunctionLibrary {
};

// Class Foliage.FoliageType
// Size: 0x440 (Inherited: 0x28)
struct UFoliageType : UObject {
	struct FGuid *a3f68c2e15; // 0x28(0x10)
	float Density; // 0x38(0x04)
	float *a04bbe3e67; // 0x3c(0x04)
	float Radius; // 0x40(0x04)
	enum class EFoliageScaling Scaling; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FFloatInterval ScaleX; // 0x48(0x08)
	struct FFloatInterval ScaleY; // 0x50(0x08)
	struct FFloatInterval ScaleZ; // 0x58(0x08)
	struct F*e2c42c1d89 *d1853b81b2[0x04]; // 0x60(0x30)
	enum class FoliageVertexColorMask VertexColorMask; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float VertexColorMaskThreshold; // 0x94(0x04)
	char VertexColorMaskInvert : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct FFloatInterval *331610df7f; // 0x9c(0x08)
	char AlignToNormal : 1; // 0xa4(0x01)
	char pad_A4_1 : 7; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	float *cabcb7c1b0; // 0xa8(0x04)
	char *a7fc5c1589 : 1; // 0xac(0x01)
	char pad_AC_1 : 7; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float *0aa7b0cc3a; // 0xb0(0x04)
	struct FFloatInterval *da1dbd7f59; // 0xb4(0x08)
	struct FFloatInterval Height; // 0xbc(0x08)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct FName> LandscapeLayers; // 0xc8(0x10)
	struct FName LandscapeLayer; // 0xd8(0x08)
	char CollisionWithWorld : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FVector *e1945b8183; // 0xe4(0x0c)
	float *eed98d0b51; // 0xf0(0x04)
	struct FBoxSphereBounds *fc127629b9; // 0xf4(0x1c)
	struct FVector *dfeca56445; // 0x110(0x0c)
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
	char *668636af81 : 1; // 0x138(0x01)
	char *b3a3eee86b : 1; // 0x138(0x01)
	char *07830a14a6 : 1; // 0x138(0x01)
	char pad_138_3 : 5; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	enum class EDecalChannel DecalChannel; // 0x13c(0x01)
	enum class EHasCustomNavigableGeometry *d6502f39c8; // 0x13d(0x01)
	struct FLightingChannels LightingChannels; // 0x13e(0x03)
	char pad_141[0xf]; // 0x141(0x0f)
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
// Size: 0x448 (Inherited: 0x3f8)
struct AInstancedFoliageActor : AActor {
	struct FMulticastDelegate OnActorEndOverlap; // 0x28(0x10)
	struct FMulticastDelegate OnClicked; // 0x48(0x10)
	int32 *2bc7f7749a; // 0x58(0x04)
	char pad_41C_0 : 3; // 0x41c(0x01)
	char *6a29209afc : 1; // 0x5c(0x01)
	char *6583edce58 : 1; // 0x5d(0x01)
	char bReplicates : 1; // 0x5d(0x01)
	struct FName *332fd811ca; // 0x60(0x08)
	enum class ENetRole RemoteRole; // 0x68(0x01)
	struct AActor* Owner; // 0x70(0x08)
	struct FRepMovement ReplicatedMovement; // 0x78(0x34)
	struct F*e5bda3d960 *e3fb0d68ff; // 0xb0(0x40)
	float InitialLifeSpan; // 0xf4(0x04)
	struct FMulticastDelegate OnInputTouchLeave; // 0xf8(0x10)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x110(0x10)
	struct FGuid DestructibleId; // 0x120(0x10)
	bool bIsDestroyedVersion; // 0x130(0x01)
	bool RemoveFromLevelLOD; // 0x131(0x01)
	struct F*2066290a18 PrimaryActorTick; // 0x138(0x58)
	char bAutoDestroyWhenFinished : 1; // 0x190(0x01)
	char bCanBeDamaged : 1; // 0x190(0x01)
	char *50cd51ed38 : 1; // 0x190(0x01)
	char *e002b42072 : 1; // 0x190(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x190(0x01)
	char *a4c704a3e5 : 1; // 0x190(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x190(0x01)
	char *13aea9b43a : 1; // 0x190(0x01)
	char *4211b886bf : 1; // 0x191(0x01)
	struct AActor* ParentComponentActor; // 0x194(0x08)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x1a0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x1b8(0x10)
	float *ae3e81fc86; // 0x1c8(0x04)
	char *97cac516e7 : 1; // 0x1d8(0x01)
	char *cd27b8552b : 1; // 0x1d8(0x01)
	char *8aabd64ff4 : 1; // 0x1d8(0x01)
	char *3cd32b903e : 1; // 0x1d8(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x1d9(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x1da(0x01)
	float CustomTimeDilation; // 0x1dc(0x04)
	enum class ENetRole Role; // 0x1e1(0x01)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x1e8(0x10)
	struct FMulticastDelegate OnTakePointDamage; // 0x200(0x10)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x260(0x10)
	struct TArray<struct AActor*> Children; // 0x270(0x10)
	int32 *2d89f8ef7f; // 0x280(0x04)
	struct FMulticastDelegate OnInputTouchEnter; // 0x288(0x10)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x298(0x01)
	struct FMulticastDelegate OnInputTouchBegin; // 0x2a0(0x10)
	struct TArray<struct AMatineeActor*> *6220728ad0; // 0x2b0(0x10)
	struct USceneComponent* RootComponent; // 0x2c0(0x08)
	enum class *66c1dada81 InputConsumeOption; // 0x2c8(0x01)
	struct FMulticastDelegate OnReleased; // 0x2d0(0x10)
	struct FMulticastDelegate OnActorHit; // 0x2e0(0x10)
	enum class EAutoReceiveInput *8606d93d96; // 0x2f0(0x01)
	struct TArray<struct FName> Layers; // 0x2f8(0x10)
	struct TArray<struct FName> Tags; // 0x308(0x10)
	struct U*63b14265fa* *63b14265fa; // 0x318(0x08)
	float NetUpdateFrequency; // 0x320(0x04)
	uint64 *f99b84bc94; // 0x328(0x08)
	struct UChildActorComponent* *129513d23d; // 0x330(0x08)
	float MinNetUpdateFrequency; // 0x388(0x04)
	struct FMulticastDelegate OnInputTouchEnd; // 0x390(0x10)
	float NetCullDistanceSquared; // 0x3a0(0x04)
	float NetPriority; // 0x3a4(0x04)
	struct FMulticastDelegate OnBeginCursorOver; // 0x3a8(0x10)
	struct FMulticastDelegate OnDestroyed; // 0x3b8(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x3c8(0x10)
	struct APawn* Instigator; // 0x3e0(0x08)
	char bHidden : 1; // 0x3e8(0x01)
	char *0854a90e26 : 1; // 0x3e8(0x01)
	char *013332e5c6 : 1; // 0x3e8(0x01)
	char bOnlyRelevantToOwner : 1; // 0x3e8(0x01)
	char bAlwaysRelevant : 1; // 0x3e8(0x01)
	char *9ddfc785f1 : 1; // 0x3e8(0x01)
	char *05594c4443 : 1; // 0x3e8(0x01)
	char *ef19f6b6c9 : 1; // 0x3e8(0x01)
	char *dca9d9a72a : 1; // 0x3e9(0x01)
	char *16d69885c9 : 1; // 0x3e9(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x3e9(0x01)
	char *59968c9633 : 1; // 0x3e9(0x01)
	char *02848ec998 : 1; // 0x3e9(0x01)

	void *ccaa7ce1d0(); // Function Engine.Actor.*ccaa7ce1d0 // None // @ game+0x6365248
	void *2f371b4576(); // Function Engine.Actor.*2f371b4576 // None // @ game+0x637c668
	void *3a00f3bb48(); // Function Engine.Actor.*3a00f3bb48 // None // @ game+0x636a7dc
	void *eda0f1fdef(); // Function Engine.Actor.*eda0f1fdef // None // @ game+0x637cc50
	void *82b3653b7b(struct AActor* OtherActor); // Function Engine.Actor.*82b3653b7b // None // @ game+0x636b3e8
	struct AController* ReceiveAnyDamage(float Damage); // Function Engine.Actor.ReceiveAnyDamage // None // @ game+0x26a108
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // None // @ game+0x26a108
	struct FName ActorHasTag(); // Function Engine.Actor.ActorHasTag // None // @ game+0x635bf94
	void *28809cb5e5(); // Function Engine.Actor.*28809cb5e5 // None // @ game+0x6365214
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // None // @ game+0x26a108
	enum class EAttachLocation K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor // None // @ game+0x636e438
	void K2_AddActorWorldOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldOffset // None // @ game+0x636cd8c
	enum class EAttachLocation K2_AttachRootComponentTo(); // Function Engine.Actor.K2_AttachRootComponentTo // None // @ game+0x636e2b8
	void HasAuthority(); // Function Engine.Actor.HasAuthority // None // @ game+0x9e1498
	void *4aadbb23a5(); // Function Engine.Actor.*4aadbb23a5 // None // @ game+0x636a060
	void *7664b363a1(); // Function Engine.Actor.*7664b363a1 // None // @ game+0x6369fa8
	void *fd605f1fa8(); // Function Engine.Actor.*fd605f1fa8 // None // @ game+0x6376d90
	void *2f98c34a3e(); // Function Engine.Actor.*2f98c34a3e // None // @ game+0x6365898
	void *f77af040ad(); // Function Engine.Actor.*f77af040ad // None // @ game+0x6365634
	void *c1c64c0f03(); // Function Engine.Actor.*c1c64c0f03 // None // @ game+0xbe9a6c
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // None // @ game+0x636ed78
	void *b0466cb89a(); // Function Engine.Actor.*b0466cb89a // None // @ game+0x63650f0
	struct FName *43eab6a44c(); // Function Engine.Actor.*43eab6a44c // None // @ game+0x6368648
	enum class EAttachmentRule *ca2fce53c9(struct AActor* ParentActor, struct FName SocketName); // Function Engine.Actor.*ca2fce53c9 // None // @ game+0x636e738
	void K2_AddActorWorldTransform(struct FTransform DeltaTransform, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldTransform // None // @ game+0x636d13c
	bool K2_SetActorLocation(struct FVector NewLocation); // Function Engine.Actor.K2_SetActorLocation // None // @ game+0x636fe08
	struct FKey *a84ae826d7(); // Function Engine.Actor.*a84ae826d7 // None // @ game+0x6368554
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // None // @ game+0x6376e28
	struct UObject* AddComponent(struct FName TemplateName); // Function Engine.Actor.AddComponent // None // @ game+0xa5d3a0
	struct FHitResult K2_AddActorWorldRotation(); // Function Engine.Actor.K2_AddActorWorldRotation // None // @ game+0x636cf64
	void GetTransform(); // Function Engine.Actor.GetTransform // None // @ game+0xaacdcc
	void *298b7db98d(); // Function Engine.Actor.*298b7db98d // None // @ game+0x636ed90
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // None // @ game+0xb99a34
	void *927c0af560(); // Function Engine.Actor.*927c0af560 // None // @ game+0x6364520
	void GetActorBounds(struct FVector Origin); // Function Engine.Actor.GetActorBounds // None // @ game+0x6364cbc
	void *3fb2f52d1d(); // Function Engine.Actor.*3fb2f52d1d // None // @ game+0x6367f78
	float MakeNoise(); // Function Engine.Actor.MakeNoise // None // @ game+0x63720f4
	void *1f7d6b60c4(); // Function Engine.Actor.*1f7d6b60c4 // None // @ game+0x6365288
	void *a487955527(); // Function Engine.Actor.*a487955527 // None // @ game+0x636f250
	void *8e0bd09921(); // Function Engine.Actor.*8e0bd09921 // None // @ game+0x6367524
	void ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // None // @ game+0x26a108
	void ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // None // @ game+0x26a108
	void *76b33f89d4(); // Function Engine.Actor.*76b33f89d4 // None // @ game+0x636ac9c
	void K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // None // @ game+0x26a108
	void DisableInput(); // Function Engine.Actor.DisableInput // None // @ game+0x6362a78
	void *9fc33c71b8(); // Function Engine.Actor.*9fc33c71b8 // None // @ game+0x636ba48
	enum class *42e1cdcd79 *694ac52e11(enum class *42e1cdcd79 LocationRule); // Function Engine.Actor.*694ac52e11 // None // @ game+0x636eee0
	struct UClass* *3d2b57891f(); // Function Engine.Actor.*3d2b57891f // None // @ game+0x63669ec
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // None // @ game+0xb40e14
	void *8df9beeffc(); // Function Engine.Actor.*8df9beeffc // None // @ game+0x637c5d0
	void *7952614099(); // Function Engine.Actor.*7952614099 // None // @ game+0x6365260
	struct FHitResult K2_AddActorLocalRotation(); // Function Engine.Actor.K2_AddActorLocalRotation // None // @ game+0x636c988
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // None // @ game+0xb6a404
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // None // @ game+0x26a108
	void *3dcb8c828c(); // Function Engine.Actor.*3dcb8c828c // None // @ game+0x6364aa8
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors // None // @ game+0x6369bb8
	void *2ad230fb6c(); // Function Engine.Actor.*2ad230fb6c // None // @ game+0x6377260
	void *b01fc0cf78(); // Function Engine.Actor.*b01fc0cf78 // None // @ game+0x6364f98
	void K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // None // @ game+0x26a108
	void *6237fb723e(); // Function Engine.Actor.*6237fb723e // None // @ game+0x636f734
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // None // @ game+0x8b5060
	void *8ab522db39(); // Function Engine.Actor.*8ab522db39 // None // @ game+0x63672dc
	void *7915dcfee8(); // Function Engine.Actor.*7915dcfee8 // None // @ game+0x6366bd4
	struct FHitResult K2_SetActorRelativeTransform(); // Function Engine.Actor.K2_SetActorRelativeTransform // None // @ game+0x63705d4
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // None // @ game+0x26a108
	void *7af955f165(); // Function Engine.Actor.*7af955f165 // None // @ game+0x6373e3c
	void *9ffc398f85(); // Function Engine.Actor.*9ffc398f85 // None // @ game+0x635dd54
	struct FHitResult ReceiveRadialDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceiveRadialDamage // None // @ game+0x26a108
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // None // @ game+0x6364abc
	void *34c6511ade(); // Function Engine.Actor.*34c6511ade // None // @ game+0x6368e6c
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // None // @ game+0x26a108
	void *17f595f9ac(); // Function Engine.Actor.*17f595f9ac // None // @ game+0x636af68
	void SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // None // @ game+0x63771cc
	void ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // None // @ game+0x26a108
	void ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // None // @ game+0x26a108
	void GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // None // @ game+0x6369e18
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorLocalOffset // None // @ game+0x636c7b0
	void *d21a3baa7f(); // Function Engine.Actor.*d21a3baa7f // None // @ game+0x636a03c
	struct FHitResult K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // None // @ game+0x6370224
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // None // @ game+0xb44448
	void *a80dd65dbf(); // Function Engine.Actor.*a80dd65dbf // None // @ game+0x636ba64
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // None // @ game+0x70f418
	void ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // None // @ game+0x26a108
	void AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // None // @ game+0x635dc2c
	void *5c10316bc8(); // Function Engine.Actor.*5c10316bc8 // None // @ game+0x636bafc
	void *679babdbe9(struct FVector DestLocation); // Function Engine.Actor.*679babdbe9 // None // @ game+0x6371a40
	float *77574d4d00(); // Function Engine.Actor.*77574d4d00 // None // @ game+0x637f170
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // None // @ game+0x26a108
	void *2bbda76e95(struct UClass* ComponentClass); // Function Engine.Actor.*2bbda76e95 // None // @ game+0x6366ae4
	void *8ff8fb0472(struct FKey InputAxisKey); // Function Engine.Actor.*8ff8fb0472 // None // @ game+0x6368c64
	void *96888c26b2(); // Function Engine.Actor.*96888c26b2 // None // @ game+0x636586c
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // None // @ game+0x636f318
	void *e14d0605bc(); // Function Engine.Actor.*e14d0605bc // None // @ game+0x63650bc
	void *d30428cd54(); // Function Engine.Actor.*d30428cd54 // None // @ game+0x637cb38
	bool K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // None // @ game+0x636ffec
	void *6d495b918e(); // Function Engine.Actor.*6d495b918e // None // @ game+0x637712c
	void *3b635a9905(); // Function Engine.Actor.*3b635a9905 // None // @ game+0x637708c
	void *12680bdeab(); // Function Engine.Actor.*12680bdeab // None // @ game+0x637ea90
	void ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // None // @ game+0x26a108
	struct FVector *4e14239fe2(); // Function Engine.Actor.*4e14239fe2 // None // @ game+0x6364e8c
	void *553025a5b6(); // Function Engine.Actor.*553025a5b6 // None // @ game+0x6368f34
	void *6f6713dfba(struct AActor* OtherActor); // Function Engine.Actor.*6f6713dfba // None // @ game+0x6368018
	struct FHitResult K2_SetActorRelativeRotation(); // Function Engine.Actor.K2_SetActorRelativeRotation // None // @ game+0x63703fc
	void *f2d13d9497(); // Function Engine.Actor.*f2d13d9497 // None // @ game+0x6365848
	void K2_SetActorRotation(bool bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation // None // @ game+0x605cd0
	void *7fc2785714(); // Function Engine.Actor.*7fc2785714 // None // @ game+0x6373d14
	void *2cfa65e375(); // Function Engine.Actor.*2cfa65e375 // None // @ game+0x6364e64
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // None // @ game+0x26a108
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // None // @ game+0x26a108
	void *58360a298b(struct AActor* Other); // Function Engine.Actor.*58360a298b // None // @ game+0x636c21c
	void DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // None // @ game+0x63629e4
	void *724cefc729(); // Function Engine.Actor.*724cefc729 // None // @ game+0x636b3b0
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // None // @ game+0x26a108
	bool K2_SetActorTransform(bool bSweep); // Function Engine.Actor.K2_SetActorTransform // None // @ game+0x6370800
	void SetOwner(); // Function Engine.Actor.SetOwner // None // @ game+0x637b964
	void *094169766b(); // Function Engine.Actor.*094169766b // None // @ game+0x6368e84
	void *2a43ddf3b4(struct AActor* OtherActor); // Function Engine.Actor.*2a43ddf3b4 // None // @ game+0x636737c
	enum class EAttachmentRule *e13072354b(enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*e13072354b // None // @ game+0x63d310
	void *bf3d34531f(); // Function Engine.Actor.*bf3d34531f // None // @ game+0x637dda0
	struct FVector ReceivePointDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceivePointDamage // None // @ game+0x26a108
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick // None // @ game+0x26a108
	struct FHitResult K2_AddActorLocalTransform(); // Function Engine.Actor.K2_AddActorLocalTransform // None // @ game+0x636cb60
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector NormalImpulse); // Function Engine.Actor.ReceiveHit // None // @ game+0x26a108
	struct UMaterialInterface* *ea2a94b7da(); // Function Engine.Actor.*ea2a94b7da // None // @ game+0x6372078
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x468 (Inherited: 0x408)
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x408(0x08)
	struct FVector *3f846fef41; // 0x410(0x0c)
	struct FVector *9143e00734; // 0x41c(0x0c)
	struct FVector *57675dff16; // 0x428(0x0c)
	struct FVector *f50b110fbe; // 0x434(0x0c)
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

	bool CapsuleTouched(); // Function Foliage.InteractiveFoliageActor.CapsuleTouched // None // @ game+0x5c61224
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0xba0 (Inherited: 0xb90)
struct UInteractiveFoliageComponent : UStaticMeshComponent {
	int32 ForcedLodModel; // 0xaf0(0x04)
	int32 *66a6cd3343; // 0xaf4(0x04)
	bool bOverrideMinLOD; // 0xaf8(0x01)
	int32 MinLOD; // 0xafc(0x04)
	struct UStaticMesh* StaticMesh; // 0xb00(0x08)
	bool bOverrideWireframeColor; // 0xb08(0x01)
	struct FColor WireframeColorOverride; // 0xb0c(0x04)
	struct FLinearColor PerInstanceCustomData; // 0xb10(0x10)
	char *a28fc20375 : 1; // 0xb20(0x01)
	char *a6e890a6e8 : 1; // 0xb20(0x01)
	char bDisallowMeshPaintPerInstance : 1; // 0xb20(0x01)
	char *72ad19ace5 : 1; // 0xb20(0x01)
	char bIgnoreInstanceForTextureStreaming : 1; // 0xb20(0x01)
	char bOverrideLightMapRes : 1; // 0xb20(0x01)
	int32 OverriddenLightMapRes; // 0xb24(0x04)
	char bCastDistanceFieldIndirectShadow : 1; // 0xb28(0x01)
	float DistanceFieldIndirectShadowMinVisibility; // 0xb2c(0x04)
	float StreamingDistanceMultiplier; // 0xb30(0x04)
	int32 *0f0f75dabf; // 0xb34(0x04)
	char *9a59516d8b : 1; // 0xb38(0x01)
	struct TArray<struct FGuid> IrrelevantLights; // 0xb40(0x10)
	struct TArray<struct F*e52484916f> *6f651a8a78; // 0xb50(0x10)
	struct TArray<struct F*2680edbad5> *65df47e5bb; // 0xb60(0x10)
	bool *5b1ebb8f11; // 0xb70(0x01)
	struct F*553842a41b LightmassSettings; // 0xb74(0x18)

	struct UStaticMesh* SetStaticMesh(); // Function Engine.StaticMeshComponent.SetStaticMesh // None // @ game+0x5e3ea00
	struct FVector *34b9302e3c(); // Function Engine.StaticMeshComponent.*34b9302e3c // None // @ game+0x6368fb8
	void OnRep_StaticMesh(); // Function Engine.StaticMeshComponent.OnRep_StaticMesh // None // @ game+0x63726b8
	void *488bd86f9f(); // Function Engine.StaticMeshComponent.*488bd86f9f // None // @ game+0x6379ea8
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x438 (Inherited: 0x430)
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x430(0x08)
};

// Class Foliage.ProceduralFoliageComponent
// Size: 0x220 (Inherited: 0x1f0)
struct UProceduralFoliageComponent : UActorComponent {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x1f0(0x08)
	float TileOverlap; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct AVolume* SpawningVolume; // 0x200(0x08)
	struct FGuid *5d639b4aac; // 0x208(0x10)
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
	bool *e1c1d5f2d8; // 0x50(0x01)
	char pad_51[0x1f]; // 0x51(0x1f)

	void Simulate(); // Function Foliage.ProceduralFoliageSpawner.Simulate // None // @ game+0x5c61734
};

// Class Foliage.*dbbfce7018
// Size: 0x158 (Inherited: 0x28)
struct U*dbbfce7018 : UObject {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x28(0x08)
	char pad_30[0xa0]; // 0x30(0xa0)
	struct TArray<struct F*db83a82904> *2e4ec2cfe1; // 0xd0(0x10)
	char pad_E0[0x78]; // 0xe0(0x78)
};

// Class Foliage.ProceduralFoliageVolume
// Size: 0x438 (Inherited: 0x430)
struct AProceduralFoliageVolume : AVolume {
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x430(0x08)
};


// Class Landscape.ControlPointMeshComponent
// Size: 0xb90 (Inherited: 0xb90)
struct UControlPointMeshComponent : UStaticMeshComponent {
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

// Class Landscape.LandscapeComponent
// Size: 0xb50 (Inherited: 0x9f0)
struct ULandscapeComponent : UPrimitiveComponent {
	int32 SectionBaseX; // 0x9e8(0x04)
	int32 SectionBaseY; // 0x9ec(0x04)
	int32 *7dcda9b4a3; // 0x9f0(0x04)
	int32 *e08946e5a5; // 0x9f4(0x04)
	int32 *5cd5fd738e; // 0x9f8(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0xa00(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0xa08(0x08)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0xa10(0x10)
	struct TArray<struct F*23fe8b97ca> *fd89319904; // 0xa20(0x10)
	struct TArray<struct UTexture2D*> *665d1ed139; // 0xa30(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0xa40(0x08)
	struct FIntPoint *6659267aa2; // 0xa48(0x08)
	struct FVector4 *09d715b250; // 0xa50(0x10)
	float *fbe12384ef; // 0xa60(0x04)
	struct UTexture2D* HeightmapTexture; // 0xa68(0x08)
	struct UTexture2D* NormalmapTexture; // 0xa70(0x08)
	struct FBox *f8b8cc76e9; // 0xa78(0x1c)
	struct ULandscapeHeightfieldCollisionComponent* CollisionComponent; // 0xa94(0x1c)
	struct FGuid *db40c61005; // 0xab0(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0xac0(0x10)
	int32 CollisionMipLevel; // 0xad0(0x04)
	int32 *3431eed4b8; // 0xad4(0x04)
	float *a8da434a60; // 0xad8(0x04)
	float *b2b842a97e; // 0xadc(0x04)
	float StaticLightingResolution; // 0xae0(0x04)
	int32 ForcedLOD; // 0xae4(0x04)
	int32 LODBias; // 0xae8(0x04)
	struct FGuid *f498029bb1; // 0xaec(0x10)
	struct FGuid *ef92c76489; // 0xafc(0x10)
	char pad_B0C[0x4]; // 0xb0c(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0xb10(0x08)
	bool *721691317e; // 0xb18(0x01)
	bool *c09245034f; // 0xb19(0x01)
	char pad_B1A[0x6]; // 0xb1a(0x06)
	struct UMaterialInterface* *af0bbba471; // 0xb20(0x08)
	struct UTexture2D* *e85769d689; // 0xb28(0x08)
	char pad_B30[0x20]; // 0xb30(0x20)
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x3f8 (Inherited: 0x3f8)
struct ALandscapeGizmoActor : AActor {
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

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x448 (Inherited: 0x3f8)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
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

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x9f0 (Inherited: 0x9f0)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
	float MinDrawDistance; // 0x4c8(0x04)
	float LDMaxDrawDistance; // 0x4cc(0x04)
	float CachedMaxDrawDistance; // 0x4d0(0x04)
	enum class *3c659ab94c *7512e3d028; // 0x4d4(0x01)
	enum class *3c659ab94c *d9fcd9b4bb; // 0x4d5(0x01)
	char pad_9FE_0 : 3; // 0x9fe(0x01)
	char bAlwaysCreatePhysicsState : 1; // 0x4d8(0x01)
	char bGenerateOverlapEvents : 1; // 0x4d8(0x01)
	char bMultiBodyOverlap : 1; // 0x4d8(0x01)
	char bCheckAsyncSceneOnMove : 1; // 0x4d8(0x01)
	char bTraceComplexOnMove : 1; // 0x4d8(0x01)
	char bDisableForceFromCharacter : 1; // 0x4d9(0x01)
	char bReturnMaterialOnMove : 1; // 0x4d9(0x01)
	char *3e4d34552d : 1; // 0x4d9(0x01)
	char bAllowCullDistanceVolume : 1; // 0x4d9(0x01)
	char bImportantMesh : 1; // 0x4d9(0x01)
	char bOverrideCullingDistances : 1; // 0x4d9(0x01)
	float HLODScreenSize; // 0x4dc(0x04)
	char *2f091bbd0e : 1; // 0x4e0(0x01)
	char bVisibleInReflectionCaptures : 1; // 0x4e0(0x01)
	char bRenderInMainPass : 1; // 0x4e0(0x01)
	char bRenderInMono : 1; // 0x4e0(0x01)
	char bOwnerNoSee : 1; // 0x4e0(0x01)
	char bOnlyOwnerSee : 1; // 0x4e0(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x4e0(0x01)
	char bUseAsOccluder : 1; // 0x4e0(0x01)
	char bForceAsOccluder : 1; // 0x4e1(0x01)
	char bForceOcclusionQuerying : 1; // 0x4e1(0x01)
	char bForceDisableOcclusionQuerying : 1; // 0x4e1(0x01)
	char *afd92d8969 : 1; // 0x4e1(0x01)
	char bForceMipStreaming : 1; // 0x4e1(0x01)
	char *4c581fbba9 : 1; // 0x4e1(0x01)
	char CastShadow : 1; // 0x4e1(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x4e2(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x4e2(0x01)
	char bCastDynamicShadow : 1; // 0x4e2(0x01)
	char bCastStaticShadow : 1; // 0x4e2(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x4e2(0x01)
	char bSelfShadowOnly : 1; // 0x4e2(0x01)
	char bCastFarShadow : 1; // 0x4e2(0x01)
	char bCastInsetShadow : 1; // 0x4e2(0x01)
	char bCastCinematicShadow : 1; // 0x4e3(0x01)
	char bCastHiddenShadow : 1; // 0x4e3(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4e3(0x01)
	char bLightAsIfStatic : 1; // 0x4e3(0x01)
	char bLightAttachmentsAsGroup : 1; // 0x4e3(0x01)
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x4e3(0x01)
	char bSingleSampleShadowFromStationaryLights : 1; // 0x4e3(0x01)
	char bIgnoreRadialImpulse : 1; // 0x4e3(0x01)
	char bIgnoreRadialForce : 1; // 0x4e4(0x01)
	char bApplyImpulseOnDamage : 1; // 0x4e4(0x01)
	char bSyncBodySleep : 1; // 0x4e4(0x01)
	char *27b0806be5 : 1; // 0x4e4(0x01)
	char *6f3b773115 : 1; // 0x4e4(0x01)
	char *b11801b90d : 1; // 0x4e4(0x01)
	char bRenderCustomDepth : 1; // 0x4e4(0x01)
	char *668636af81 : 1; // 0x4e5(0x01)
	char *b3a3eee86b : 1; // 0x4e6(0x01)
	char *07830a14a6 : 1; // 0x4e6(0x01)
	enum class EDecalChannel DecalChannel; // 0x4e8(0x01)
	enum class *c0765ad24b IndoorOutdoorMask; // 0x4e9(0x01)
	struct FLightingChannels LightingChannels; // 0x4ea(0x03)
	enum class *d315e71b47 IndirectLightingCacheQuality; // 0x4ed(0x01)
	bool CustomDepthStencilValue; // 0x4ee(0x01)
	enum class *6e131cfc7f CustomDepthStencilWriteMask; // 0x4ef(0x01)
	struct TArray<enum class ECollisionChannel> IgnoreCollisionMaskOnSweep; // 0x4f0(0x10)
	int32 TranslucencySortPriority; // 0x500(0x04)
	int32 *6862844184; // 0x504(0x04)
	float LpvBiasMultiplier; // 0x50c(0x04)
	struct FBodyInstance BodyInstance; // 0x510(0x230)
	enum class EHasCustomNavigableGeometry *9a13a32dd1; // 0x748(0x01)
	float BoundsScale; // 0x784(0x04)
	float *aa675c3c9f; // 0x788(0x04)
	float *8aba3be418; // 0x78c(0x04)
	float *69906a8560; // 0x790(0x04)
	enum class *ed39c8987e CanBeCharacterBase; // 0x794(0x01)
	enum class *ed39c8987e CanCharacterStepUpOn; // 0x796(0x01)
	struct TArray<struct AActor*> *5559023e99; // 0x798(0x10)
	struct TArray<struct UPrimitiveComponent*> *34f682ee35; // 0x7a8(0x10)
	struct FMulticastDelegate OnComponentHit; // 0x870(0x10)
	struct FMulticastDelegate OnComponentBeginOverlap; // 0x880(0x10)
	struct FMulticastDelegate OnComponentEndOverlap; // 0x890(0x10)
	struct FMulticastDelegate OnComponentWake; // 0x8a0(0x10)
	struct FMulticastDelegate OnComponentSleep; // 0x8b0(0x10)
	struct FMulticastDelegate OnBeginCursorOver; // 0x8d0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x8e0(0x10)
	struct FMulticastDelegate OnClicked; // 0x8f0(0x10)
	struct FMulticastDelegate OnReleased; // 0x900(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x910(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x920(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x930(0x10)
	struct FMulticastDelegate OnInputTouchLeave; // 0x940(0x10)
	struct UPrimitiveComponent* *afbfc200cf; // 0x978(0x08)
	struct UPrimitiveComponent* *c423c7f1c7; // 0x980(0x08)
	struct F*1d83c9bd93 *605bfc3d64; // 0x988(0x58)

	struct FVector AddForceAtLocation(); // Function Engine.PrimitiveComponent.AddForceAtLocation // None // @ game+0x635ca48
	void GetMass(); // Function Engine.PrimitiveComponent.GetMass // None // @ game+0x63690c0
	void *3f4951ae21(); // Function Engine.PrimitiveComponent.*3f4951ae21 // None // @ game+0x637ae1c
	void *aa442ff688(); // Function Engine.PrimitiveComponent.*aa442ff688 // None // @ game+0x636bf24
	enum class *d6dc0510f4 *2acabdc4bc(); // Function Engine.PrimitiveComponent.*2acabdc4bc // None // @ game+0x635d7e8
	void *dfb097147a(); // Function Engine.PrimitiveComponent.*dfb097147a // None // @ game+0x8a8688
	void *1d5b572e97(); // Function Engine.PrimitiveComponent.*1d5b572e97 // None // @ game+0x636f7ec
	struct AActor* *58360a298b(); // Function Engine.PrimitiveComponent.*58360a298b // None // @ game+0x636c2bc
	struct UMaterialInterface* CreateAndSetMaterialInstanceDynamicFromMaterial(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial // None // @ game+0x6362104
	void *155e776c01(enum class ECollisionChannel Channel); // Function Engine.PrimitiveComponent.*155e776c01 // None // @ game+0x6366944
	enum class *d6dc0510f4 *776b623f1e(); // Function Engine.PrimitiveComponent.*776b623f1e // None // @ game+0x635d9bc
	void *401e8be8c9(); // Function Engine.PrimitiveComponent.*401e8be8c9 // None // @ game+0x636f81c
	void *6c17800325(); // Function Engine.PrimitiveComponent.*6c17800325 // None // @ game+0x6378f74
	void *1060cf1432(); // Function Engine.PrimitiveComponent.*1060cf1432 // None // @ game+0x63797a8
	void *733d8ffdab(); // Function Engine.PrimitiveComponent.*733d8ffdab // None // @ game+0x637bb54
	void *c09d067d0f(); // Function Engine.PrimitiveComponent.*c09d067d0f // None // @ game+0x637c3f0
	void *dfc478eaef(); // Function Engine.PrimitiveComponent.*dfc478eaef // None // @ game+0x636b5b4
	void *d70adb1efd(float MassInKg); // Function Engine.PrimitiveComponent.*d70adb1efd // None // @ game+0x637b08c
	struct FVector K2_LineTraceComponent(struct FName BoneName); // Function Engine.PrimitiveComponent.K2_LineTraceComponent // None // @ game+0x636f850
	void *8f296e8ac0(); // Function Engine.PrimitiveComponent.*8f296e8ac0 // None // @ game+0x637b9f8
	void *3579dd87c5(); // Function Engine.PrimitiveComponent.*3579dd87c5 // None // @ game+0x636ba90
	int32 *c513e9cfca(); // Function Engine.PrimitiveComponent.*c513e9cfca // None // @ game+0x6369250
	void CreateAndSetMaterialInstanceDynamic(bool bConcurrent); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic // None // @ game+0x6362014
	void SetMassScale(); // Function Engine.PrimitiveComponent.SetMassScale // None // @ game+0x568247c
	int32 *c602cc5bf9(); // Function Engine.PrimitiveComponent.*c602cc5bf9 // None // @ game+0x63691ac
	void *6f5a420568(); // Function Engine.PrimitiveComponent.*6f5a420568 // None // @ game+0x637c518
	void *4179761c58(); // Function Engine.PrimitiveComponent.*4179761c58 // None // @ game+0x635e5f4
	struct UMaterialInterface* SetMaterial(); // Function Engine.PrimitiveComponent.SetMaterial // None // @ game+0xb512e8
	struct FName GetPhysicsAngularVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity // None // @ game+0x636a394
	void CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors // None // @ game+0x6361f04
	void *c4ebdc3c8f(struct AActor* Actor); // Function Engine.PrimitiveComponent.*c4ebdc3c8f // None // @ game+0x636b698
	struct FName AddTorque(); // Function Engine.PrimitiveComponent.AddTorque // None // @ game+0x635de7c
	void *5b3c874cbe(struct FVector NewAngVel); // Function Engine.PrimitiveComponent.*5b3c874cbe // None // @ game+0x6377390
	void *baff305a0b(); // Function Engine.PrimitiveComponent.*baff305a0b // None // @ game+0x6379008
	void *b24da2aba6(); // Function Engine.PrimitiveComponent.*b24da2aba6 // None // @ game+0x6369a0c
	void *6d15f9d7fc(); // Function Engine.PrimitiveComponent.*6d15f9d7fc // None // @ game+0x635ec44
	struct UPrimitiveComponent* *bba26f131c(); // Function Engine.PrimitiveComponent.*bba26f131c // None // @ game+0x636c35c
	void SetPhysicsLinearVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity // None // @ game+0x8ed884
	bool SetPhysicsMaxAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity // None // @ game+0x637bbe8
	void *10c86d98d5(); // Function Engine.PrimitiveComponent.*10c86d98d5 // None // @ game+0x6369b40
	void SetLinearDamping(); // Function Engine.PrimitiveComponent.SetLinearDamping // None // @ game+0x635c2b8
	void *fc3da87902(); // Function Engine.PrimitiveComponent.*fc3da87902 // None // @ game+0x637b778
	void *1e088aa233(); // Function Engine.PrimitiveComponent.*1e088aa233 // None // @ game+0x637d99c
	struct FName *9d203d4e3a(); // Function Engine.PrimitiveComponent.*9d203d4e3a // None // @ game+0x6368118
	void *7ab8b110bc(); // Function Engine.PrimitiveComponent.*7ab8b110bc // None // @ game+0x6368f8c
	void *cefd2a89e7(); // Function Engine.PrimitiveComponent.*cefd2a89e7 // None // @ game+0x637b1b8
	void *4135b69ecb(); // Function Engine.PrimitiveComponent.*4135b69ecb // None // @ game+0x637c484
	struct FName AddAngularImpulse(); // Function Engine.PrimitiveComponent.AddAngularImpulse // None // @ game+0x635c034
	void *065d5e11f8(struct FName BoneName); // Function Engine.PrimitiveComponent.*065d5e11f8 // None // @ game+0x6366468
	void *e06446eb04(); // Function Engine.PrimitiveComponent.*e06446eb04 // None // @ game+0x63739f0
	void *f6986ba874(); // Function Engine.PrimitiveComponent.*f6986ba874 // None // @ game+0x637cf08
	bool *285b57600a(); // Function Engine.PrimitiveComponent.*285b57600a // None // @ game+0x637d1ac
	void *5cdc853a89(); // Function Engine.PrimitiveComponent.*5cdc853a89 // None // @ game+0x6379838
	void SetCollisionObjectType(); // Function Engine.PrimitiveComponent.SetCollisionObjectType // None // @ game+0x6378edc
	struct FVector AddImpulseAtLocation(); // Function Engine.PrimitiveComponent.AddImpulseAtLocation // None // @ game+0x635d0e8
	void *b9e13958df(); // Function Engine.PrimitiveComponent.*b9e13958df // None // @ game+0x63668bc
	void SetAllPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity // None // @ game+0x6377488
	void *29c20efb0b(); // Function Engine.PrimitiveComponent.*29c20efb0b // None // @ game+0x6365804
	void *056cc90593(); // Function Engine.PrimitiveComponent.*056cc90593 // None // @ game+0x6378a40
	struct FVector SetPhysicsAngularVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity // None // @ game+0x8ed79c
	void SetAngularDamping(); // Function Engine.PrimitiveComponent.SetAngularDamping // None // @ game+0x6377620
	struct FName AddImpulse(); // Function Engine.PrimitiveComponent.AddImpulse // None // @ game+0x635cfa8
	enum class ECollisionChannel *58f998cca1(); // Function Engine.PrimitiveComponent.*58f998cca1 // None // @ game+0x63790a0
	void *6ad19621d9(); // Function Engine.PrimitiveComponent.*6ad19621d9 // None // @ game+0x637b810
	void *6721a3eb8a(); // Function Engine.PrimitiveComponent.*6721a3eb8a // None // @ game+0x635ec60
	void *601c402444(); // Function Engine.PrimitiveComponent.*601c402444 // None // @ game+0x637eef4
	void GetOverlappingComponents(); // Function Engine.PrimitiveComponent.GetOverlappingComponents // None // @ game+0x6369ee0
	void AddForce(struct FVector force); // Function Engine.PrimitiveComponent.AddForce // None // @ game+0x635c908
	void *1f028ad67d(); // Function Engine.PrimitiveComponent.*1f028ad67d // None // @ game+0x636690c
	struct FName *75116bc348(); // Function Engine.PrimitiveComponent.*75116bc348 // None // @ game+0x6374458
	void *46193842e9(); // Function Engine.PrimitiveComponent.*46193842e9 // None // @ game+0x6361f8c
	void *10f75e50ac(); // Function Engine.PrimitiveComponent.*10f75e50ac // None // @ game+0x63787e8
	void *e3b0f43f9e(struct FVector Point); // Function Engine.PrimitiveComponent.*e3b0f43f9e // None // @ game+0x636a444
	struct FName *36ad2d15e7(); // Function Engine.PrimitiveComponent.*36ad2d15e7 // None // @ game+0x6366760
	void *fec7ca08f4(struct FName BoneName); // Function Engine.PrimitiveComponent.*fec7ca08f4 // None // @ game+0x63690ec
	void *0e38375bb9(); // Function Engine.PrimitiveComponent.*0e38375bb9 // None // @ game+0x636b778
	void *23f39ad152(); // Function Engine.PrimitiveComponent.*23f39ad152 // None // @ game+0x6379ae8
	struct FVector AddForceAtLocationLocal(struct FVector Location); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal // None // @ game+0x635cb94
	void CreateDynamicMaterialInstance(int32 ElementIndex); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance // None // @ game+0x63621f4
	void *923a62a1b9(); // Function Engine.PrimitiveComponent.*923a62a1b9 // None // @ game+0x6379710
	struct FName GetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity // None // @ game+0x8eac50
	void *41428e55af(); // Function Engine.PrimitiveComponent.*41428e55af // None // @ game+0x636f7c0
	void *9f5fbe7730(); // Function Engine.PrimitiveComponent.*9f5fbe7730 // None // @ game+0x6379578
	struct FVector SetCenterOfMass(); // Function Engine.PrimitiveComponent.SetCenterOfMass // None // @ game+0x6378b6c
	void *95f3208c0a(); // Function Engine.PrimitiveComponent.*95f3208c0a // None // @ game+0x6377588
	void *926dc117b6(); // Function Engine.PrimitiveComponent.*926dc117b6 // None // @ game+0x63668e4
	void *d7c852a7d5(); // Function Engine.PrimitiveComponent.*d7c852a7d5 // None // @ game+0x637240c
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.PrimitiveComponent.GetOverlappingActors // None // @ game+0x6369ce8
	void *b76664dec1(); // Function Engine.PrimitiveComponent.*b76664dec1 // None // @ game+0x637eedc
	void *a306d03f54(); // Function Engine.PrimitiveComponent.*a306d03f54 // None // @ game+0xb055d8
};

// Class Landscape.*d374a71f52
// Size: 0x58 (Inherited: 0x28)
struct U*d374a71f52 : UObject {
	struct TArray<struct F*8acfe3d510> *763370e7d5; // 0x28(0x10)
	struct UStaticMesh* GrassMesh; // 0x38(0x08)
	float GrassDensity; // 0x40(0x04)
	float PlacementJitter; // 0x44(0x04)
	int32 StartCullDistance; // 0x48(0x04)
	int32 EndCullDistance; // 0x4c(0x04)
	bool RandomRotation; // 0x50(0x01)
	bool AlignToSurface; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0xb50 (Inherited: 0x9f0)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> *ab774c1a69; // 0x9e8(0x10)
	int32 *db4ec4ee4d; // 0x9f8(0x04)
	int32 *82cda22089; // 0x9fc(0x04)
	int32 *088a0e97de; // 0xa00(0x04)
	float *e1945b8183; // 0xa04(0x04)
	int32 *cdc265c43b; // 0xa08(0x04)
	int32 *bc399488d0; // 0xa0c(0x04)
	struct TArray<bool> *96a237cc36; // 0xa10(0x10)
	struct FGuid *3bed5cc694; // 0xa20(0x10)
	struct FBox *f8b8cc76e9; // 0xa30(0x1c)
	struct ULandscapeComponent* RenderComponent; // 0xa4c(0x1c)
	char pad_A70[0x78]; // 0xa70(0x78)
	struct TArray<struct UPhysicalMaterial*> *a0c84d3b0d; // 0xae8(0x10)
	char pad_AF8[0x58]; // 0xaf8(0x58)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0xb70 (Inherited: 0xb50)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid *4db96309e8; // 0xb50(0x10)
	char pad_B60[0x10]; // 0xb60(0x10)
};

// Class Landscape.LandscapeInfo
// Size: 0x200 (Inherited: 0x28)
struct ULandscapeInfo : UObject {
	struct ALandscape* LandscapeActor; // 0x28(0x1c)
	struct FGuid *50b1b2bcf5; // 0x44(0x10)
	int32 *7dcda9b4a3; // 0x54(0x04)
	int32 *e08946e5a5; // 0x58(0x04)
	int32 *5ee64e2563; // 0x5c(0x04)
	struct FVector *b304b2ccb8; // 0x60(0x0c)
	char pad_6C[0x54]; // 0x6c(0x54)
	SetProperty *f8b4640b92; // 0xc0(0x50)
	char pad_110[0xf0]; // 0x110(0xf0)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x78 (Inherited: 0x28)
struct ULandscapeInfoMap : UObject {
	char pad_28[0x50]; // 0x28(0x50)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x50 (Inherited: 0x28)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x28(0x08)
	struct UPhysicalMaterial* PhysMaterial; // 0x30(0x08)
	float Hardness; // 0x38(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x1e8 (Inherited: 0x1e0)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	char *32bf6ae483 : 1; // 0x1e0(0x01)
	char *2d07bab8a4 : 1; // 0x1e0(0x01)
	char pad_1E0_2 : 6; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
};

// Class Landscape.*d381e13c73
// Size: 0x238 (Inherited: 0x1e8)
struct U*d381e13c73 : ULandscapeMaterialInstanceConstant {
	char *32bf6ae483 : 1; // 0x1e0(0x01)
	char *2d07bab8a4 : 1; // 0x1e0(0x01)
	char pad_1E8_2 : 6; // 0x1e8(0x01)
	char pad_1E9[0x4f]; // 0x1e9(0x4f)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x400 (Inherited: 0x3f8)
struct ALandscapeMeshProxyActor : AActor {
	struct U*3109f0d891* LandscapeMeshProxyComponent; // 0x3f8(0x08)
};

// Class Landscape.*3109f0d891
// Size: 0xbc0 (Inherited: 0xb90)
struct U*3109f0d891 : UStaticMeshComponent {
	struct FGuid *50b1b2bcf5; // 0xb90(0x10)
	struct TArray<struct FIntPoint> *ee14f8a8f1; // 0xba0(0x10)
	int8 *1322178fbc; // 0xbb0(0x01)
	char pad_BB1[0xf]; // 0xbb1(0x0f)
};

// Class Landscape.LandscapeProxy
// Size: 0x840 (Inherited: 0x3f8)
struct ALandscapeProxy : AActor {
	struct FGuid *50b1b2bcf5; // 0x3f8(0x10)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x408(0x08)
	int32 *7dcda9b4a3; // 0x410(0x04)
	int32 *e08946e5a5; // 0x414(0x04)
	int32 *5cd5fd738e; // 0x418(0x04)
	struct FIntPoint *a779aa0650; // 0x41c(0x08)
	int32 MaxLODLevel; // 0x424(0x04)
	float LODDistanceFactor; // 0x428(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x42c(0x01)
	char pad_42D[0x3]; // 0x42d(0x03)
	int32 *67b044c344; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x438(0x08)
	float StreamingDistanceMultiplier; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x448(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x450(0x08)
	float *a8da434a60; // 0x458(0x04)
	float *b2b842a97e; // 0x45c(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x460(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> *b0e468f16b; // 0x470(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> *0c371843e9; // 0x480(0x10)
	char pad_490[0x60]; // 0x490(0x60)
	char *ef822a69ef : 1; // 0x4f0(0x01)
	char bCastStaticShadow : 1; // 0x4f0(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4f0(0x01)
	char bCastFarShadow : 1; // 0x4f0(0x01)
	char *d7cb743792 : 1; // 0x4f0(0x01)
	char bRenderCustomDepth : 1; // 0x4f0(0x01)
	char bGenerateOverlapEvents : 1; // 0x4f0(0x01)
	char *165cddf3ab : 1; // 0x4f0(0x01)
	char *036977bfdf : 1; // 0x4f1(0x01)
	char *e3c1e4a69c : 1; // 0x4f1(0x01)
	char pad_4F1_2 : 6; // 0x4f1(0x01)
	char pad_4F2[0x2]; // 0x4f2(0x02)
	float StaticLightingResolution; // 0x4f4(0x04)
	struct FLightingChannels LightingChannels; // 0x4f8(0x03)
	char pad_4FB[0x1]; // 0x4fb(0x01)
	int32 CustomDepthStencilValue; // 0x4fc(0x04)
	struct F*553842a41b LightmassSettings; // 0x500(0x18)
	int32 CollisionMipLevel; // 0x518(0x04)
	int32 *3431eed4b8; // 0x51c(0x04)
	float *f891ed25fe; // 0x520(0x04)
	char pad_524[0xc]; // 0x524(0x0c)
	struct FBodyInstance BodyInstance; // 0x530(0x230)
	enum class ENavDataGatheringMode *e2328b2504; // 0x760(0x01)
	char pad_761[0xdf]; // 0x761(0xdf)

	void *54123f40ad(); // Function Landscape.LandscapeProxy.*54123f40ad // None // @ game+0x55c01a4
	float *d761853308(float StartSideFalloff, float StartRoll, int32 NumSubdivisions, bool bLowerHeights); // Function Landscape.LandscapeProxy.*d761853308 // None // @ game+0x5c7b224
};

// Class Landscape.Landscape
// Size: 0x840 (Inherited: 0x840)
struct ALandscape : ALandscapeProxy {
	struct FGuid *50b1b2bcf5; // 0x3f8(0x10)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x408(0x08)
	int32 *7dcda9b4a3; // 0x410(0x04)
	int32 *e08946e5a5; // 0x414(0x04)
	int32 *5cd5fd738e; // 0x418(0x04)
	struct FIntPoint *a779aa0650; // 0x41c(0x08)
	int32 MaxLODLevel; // 0x424(0x04)
	float LODDistanceFactor; // 0x428(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x42c(0x01)
	int32 *67b044c344; // 0x430(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x438(0x08)
	float StreamingDistanceMultiplier; // 0x440(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x448(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x450(0x08)
	float *a8da434a60; // 0x458(0x04)
	float *b2b842a97e; // 0x45c(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x460(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> *b0e468f16b; // 0x470(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> *0c371843e9; // 0x480(0x10)
	char *ef822a69ef : 1; // 0x4f0(0x01)
	char bCastStaticShadow : 1; // 0x4f0(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4f0(0x01)
	char bCastFarShadow : 1; // 0x4f0(0x01)
	char *d7cb743792 : 1; // 0x4f0(0x01)
	char bRenderCustomDepth : 1; // 0x4f0(0x01)
	char bGenerateOverlapEvents : 1; // 0x4f0(0x01)
	char *165cddf3ab : 1; // 0x4f0(0x01)
	char *036977bfdf : 1; // 0x4f1(0x01)
	char *e3c1e4a69c : 1; // 0x4f1(0x01)
	float StaticLightingResolution; // 0x4f4(0x04)
	struct FLightingChannels LightingChannels; // 0x4f8(0x03)
	int32 CustomDepthStencilValue; // 0x4fc(0x04)
	struct F*553842a41b LightmassSettings; // 0x500(0x18)
	int32 CollisionMipLevel; // 0x518(0x04)
	int32 *3431eed4b8; // 0x51c(0x04)
	float *f891ed25fe; // 0x520(0x04)
	struct FBodyInstance BodyInstance; // 0x530(0x230)
	enum class ENavDataGatheringMode *e2328b2504; // 0x760(0x01)

	void *54123f40ad(); // Function Landscape.LandscapeProxy.*54123f40ad // None // @ game+0x55c01a4
	float *d761853308(float StartSideFalloff, float StartRoll, int32 NumSubdivisions, bool bLowerHeights); // Function Landscape.LandscapeProxy.*d761853308 // None // @ game+0x5c7b224
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x860 (Inherited: 0x840)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	struct ALandscape* LandscapeActor; // 0x840(0x1c)
	char pad_85C[0x4]; // 0x85c(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0xa20 (Inherited: 0x9f0)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x9e8(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x9f8(0x10)
	struct TArray<struct UMeshComponent*> *f336e4865a; // 0xa08(0x10)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb0 (Inherited: 0x28)
struct ULandscapeSplineSegment : UObject {
	struct F*ff3cf17aaa Connections[0x02]; // 0x28(0x30)
	struct FInterpCurveVector *f9cf80380d; // 0x58(0x18)
	struct TArray<struct F*aab78b57ff> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa0(0x10)
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0x98 (Inherited: 0x28)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x28(0x0c)
	struct FRotator Rotation; // 0x34(0x0c)
	float Width; // 0x40(0x04)
	float *88b343183c; // 0x44(0x04)
	float *62da52f83d; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct F*12c2108e79> *d1346f6404; // 0x50(0x10)
	struct TArray<struct F*aab78b57ff> Points; // 0x60(0x10)
	struct FBox Bounds; // 0x70(0x1c)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0x90(0x08)
};

// Class Landscape.*588bec6323
// Size: 0x1b0 (Inherited: 0x60)
struct U*588bec6323 : U*699123f0e5 {
	struct FExpressionInput UV; // 0x60(0x38)
	struct FExpressionInput DiffuseTexture; // 0x98(0x38)
	struct FExpressionInput NormalTexture; // 0xd0(0x38)
	struct FExpressionInput *f6b57af7ea; // 0x108(0x38)
	struct FExpressionInput *81913036a0; // 0x140(0x38)
	struct TArray<struct F*10f9d90122> Layers; // 0x178(0x10)
	uint32 *9d489d4a01; // 0x188(0x04)
	struct FGuid *eac668cb87; // 0x18c(0x10)
	char pad_19C[0x14]; // 0x19c(0x14)
};

// Class Landscape.*9d9e797a5e
// Size: 0x70 (Inherited: 0x60)
struct U*9d9e797a5e : U*c9284c4e3d {
	struct TArray<struct F*6dc22a33b8> *dc537abae5; // 0x60(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x80 (Inherited: 0x60)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct F*d753dc5f13> Layers; // 0x60(0x10)
	struct FGuid *eac668cb87; // 0x70(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x78 (Inherited: 0x60)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class *57a208675c *118377e594; // 0x60(0x01)
	enum class *61cb2cd339 *b8bc28864c; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	float *3852e1ff95; // 0x64(0x04)
	float *a9e3c79cb2; // 0x68(0x04)
	float *e2a463b92e; // 0x6c(0x04)
	float *aa4029ef51; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class Landscape.*9d8d53e578
// Size: 0x80 (Inherited: 0x60)
struct U*9d8d53e578 : UMaterialExpression {
	struct FName ParameterName; // 0x60(0x08)
	float *15508b18b6; // 0x68(0x04)
	struct FGuid *eac668cb87; // 0x6c(0x10)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0xf0 (Inherited: 0x60)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput *b483fcd824; // 0x60(0x38)
	struct FExpressionInput *b1dcb595a1; // 0x98(0x38)
	struct FName ParameterName; // 0xd0(0x08)
	char *d520e5faf7 : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	struct FGuid *eac668cb87; // 0xdc(0x10)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0xf8 (Inherited: 0x60)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x60(0x38)
	struct FExpressionInput Layer; // 0x98(0x38)
	struct FName ParameterName; // 0xd0(0x08)
	float *15508b18b6; // 0xd8(0x04)
	struct FVector *5f0ec7510f; // 0xdc(0x0c)
	struct FGuid *eac668cb87; // 0xe8(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x70 (Inherited: 0x60)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid *eac668cb87; // 0x60(0x10)
};


// Class Landscape.ControlPointMeshComponent
// Size: 0xb50 (Inherited: 0xb50)
struct UControlPointMeshComponent : UStaticMeshComponent {
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

// Class Landscape.LandscapeComponent
// Size: 0xb10 (Inherited: 0x9b0)
struct ULandscapeComponent : UPrimitiveComponent {
	int32 SectionBaseX; // 0x9a8(0x04)
	int32 SectionBaseY; // 0x9ac(0x04)
	int32 *d055000974; // 0x9b0(0x04)
	int32 *68e76b8922; // 0x9b4(0x04)
	int32 *19b1916189; // 0x9b8(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x9c0(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x9c8(0x08)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x9d0(0x10)
	struct TArray<struct F*9c6bf22dfd> *f936063513; // 0x9e0(0x10)
	struct TArray<struct UTexture2D*> *7561b02403; // 0x9f0(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0xa00(0x08)
	struct FIntPoint *fe9ce290d3; // 0xa08(0x08)
	struct FVector4 *ebfd171426; // 0xa10(0x10)
	float *59b0f2a591; // 0xa20(0x04)
	struct UTexture2D* HeightmapTexture; // 0xa28(0x08)
	struct UTexture2D* NormalmapTexture; // 0xa30(0x08)
	struct FBox *7f7379b79b; // 0xa38(0x1c)
	struct ULandscapeHeightfieldCollisionComponent* CollisionComponent; // 0xa54(0x1c)
	struct FGuid *e3f41cb182; // 0xa70(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0xa80(0x10)
	int32 CollisionMipLevel; // 0xa90(0x04)
	int32 *8ec627c2df; // 0xa94(0x04)
	float *4dfcc5462a; // 0xa98(0x04)
	float *b0b96a2019; // 0xa9c(0x04)
	float StaticLightingResolution; // 0xaa0(0x04)
	int32 ForcedLOD; // 0xaa4(0x04)
	int32 LODBias; // 0xaa8(0x04)
	struct FGuid *22e2843827; // 0xaac(0x10)
	struct FGuid *8f2091355b; // 0xabc(0x10)
	char pad_ACC[0x4]; // 0xacc(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0xad0(0x08)
	bool *22f2998e1c; // 0xad8(0x01)
	bool *210689fbd8; // 0xad9(0x01)
	char pad_ADA[0x6]; // 0xada(0x06)
	struct UMaterialInterface* *4b2a409967; // 0xae0(0x08)
	struct UTexture2D* *384751e576; // 0xae8(0x08)
	char pad_AF0[0x20]; // 0xaf0(0x20)
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x3f0 (Inherited: 0x3f0)
struct ALandscapeGizmoActor : AActor {
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

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x440 (Inherited: 0x3f0)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
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

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x9b0 (Inherited: 0x9b0)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
	float MinDrawDistance; // 0x470(0x04)
	float LDMaxDrawDistance; // 0x474(0x04)
	float CachedMaxDrawDistance; // 0x478(0x04)
	enum class *4c2c3fa7ba *eb729ee19c; // 0x47c(0x01)
	enum class *4c2c3fa7ba *4abdb2d2ee; // 0x47d(0x01)
	char pad_9BE_0 : 3; // 0x9be(0x01)
	char bAlwaysCreatePhysicsState : 1; // 0x480(0x01)
	char bGenerateOverlapEvents : 1; // 0x480(0x01)
	char bMultiBodyOverlap : 1; // 0x480(0x01)
	char bCheckAsyncSceneOnMove : 1; // 0x480(0x01)
	char bTraceComplexOnMove : 1; // 0x480(0x01)
	char bDisableForceFromCharacter : 1; // 0x481(0x01)
	char bReturnMaterialOnMove : 1; // 0x481(0x01)
	char *09f6c4c3d1 : 1; // 0x481(0x01)
	char bAllowCullDistanceVolume : 1; // 0x481(0x01)
	char bImportantMesh : 1; // 0x481(0x01)
	char bOverrideCullingDistances : 1; // 0x481(0x01)
	float HLODScreenSize; // 0x484(0x04)
	char *6d95e74c7f : 1; // 0x488(0x01)
	char bVisibleInReflectionCaptures : 1; // 0x488(0x01)
	char bRenderInMainPass : 1; // 0x488(0x01)
	char bRenderInMono : 1; // 0x488(0x01)
	char bOwnerNoSee : 1; // 0x488(0x01)
	char bOnlyOwnerSee : 1; // 0x488(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x488(0x01)
	char bUseAsOccluder : 1; // 0x488(0x01)
	char bForceAsOccluder : 1; // 0x489(0x01)
	char bForceOcclusionQuerying : 1; // 0x489(0x01)
	char bForceDisableOcclusionQuerying : 1; // 0x489(0x01)
	char *2ec0cf6207 : 1; // 0x489(0x01)
	char bForceMipStreaming : 1; // 0x489(0x01)
	char *105359d223 : 1; // 0x489(0x01)
	char CastShadow : 1; // 0x489(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x48a(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x48a(0x01)
	char bCastDynamicShadow : 1; // 0x48a(0x01)
	char bCastStaticShadow : 1; // 0x48a(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x48a(0x01)
	char bSelfShadowOnly : 1; // 0x48a(0x01)
	char bCastFarShadow : 1; // 0x48a(0x01)
	char bCastInsetShadow : 1; // 0x48a(0x01)
	char bCastCinematicShadow : 1; // 0x48b(0x01)
	char bCastHiddenShadow : 1; // 0x48b(0x01)
	char bCastShadowAsTwoSided : 1; // 0x48b(0x01)
	char bLightAsIfStatic : 1; // 0x48b(0x01)
	char bLightAttachmentsAsGroup : 1; // 0x48b(0x01)
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x48b(0x01)
	char bSingleSampleShadowFromStationaryLights : 1; // 0x48b(0x01)
	char bIgnoreRadialImpulse : 1; // 0x48b(0x01)
	char bIgnoreRadialForce : 1; // 0x48c(0x01)
	char bApplyImpulseOnDamage : 1; // 0x48c(0x01)
	char bSyncBodySleep : 1; // 0x48c(0x01)
	char *1e5038da00 : 1; // 0x48c(0x01)
	char *0f77398d5f : 1; // 0x48c(0x01)
	char *c1c03669ea : 1; // 0x48c(0x01)
	char bRenderCustomDepth : 1; // 0x48c(0x01)
	char *7ea77ae49c : 1; // 0x48d(0x01)
	char *d5b1d4efdd : 1; // 0x48e(0x01)
	char *634898d6e3 : 1; // 0x48e(0x01)
	enum class EDecalChannel DecalChannel; // 0x490(0x01)
	enum class *c276e29a27 IndoorOutdoorMask; // 0x491(0x01)
	struct FLightingChannels LightingChannels; // 0x492(0x03)
	enum class *5e872d5d99 IndirectLightingCacheQuality; // 0x495(0x01)
	bool CustomDepthStencilValue; // 0x496(0x01)
	enum class *e33f967072 CustomDepthStencilWriteMask; // 0x497(0x01)
	struct TArray<enum class ECollisionChannel> IgnoreCollisionMaskOnSweep; // 0x498(0x10)
	int32 TranslucencySortPriority; // 0x4a8(0x04)
	int32 *bc309c15af; // 0x4ac(0x04)
	float LpvBiasMultiplier; // 0x4b4(0x04)
	struct FBodyInstance BodyInstance; // 0x4c0(0x240)
	enum class EHasCustomNavigableGeometry *36f10e7fa8; // 0x708(0x01)
	float BoundsScale; // 0x744(0x04)
	float *990edc28ca; // 0x748(0x04)
	float *680d1c60d0; // 0x74c(0x04)
	float *ba01ced785; // 0x750(0x04)
	enum class *7235c251e5 CanBeCharacterBase; // 0x754(0x01)
	enum class *7235c251e5 CanCharacterStepUpOn; // 0x756(0x01)
	struct TArray<struct AActor*> *23831abfcf; // 0x758(0x10)
	struct TArray<struct UPrimitiveComponent*> *0c87b28730; // 0x768(0x10)
	struct FMulticastDelegate OnComponentHit; // 0x830(0x10)
	struct FMulticastDelegate OnComponentBeginOverlap; // 0x840(0x10)
	struct FMulticastDelegate OnComponentEndOverlap; // 0x850(0x10)
	struct FMulticastDelegate OnComponentWake; // 0x860(0x10)
	struct FMulticastDelegate OnComponentSleep; // 0x870(0x10)
	struct FMulticastDelegate OnBeginCursorOver; // 0x890(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x8a0(0x10)
	struct FMulticastDelegate OnClicked; // 0x8b0(0x10)
	struct FMulticastDelegate OnReleased; // 0x8c0(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x8d0(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x8e0(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x8f0(0x10)
	struct FMulticastDelegate OnInputTouchLeave; // 0x900(0x10)
	struct UPrimitiveComponent* *aef56929f8; // 0x938(0x08)
	struct UPrimitiveComponent* *0cf5ac713e; // 0x940(0x08)
	struct F*254b7d2b0f *162fbfca55; // 0x948(0x58)

	bool *e9db8211c2(); // Function Engine.PrimitiveComponent.*e9db8211c2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689efa0
	bool *5ba0e047ef(); // Function Engine.PrimitiveComponent.*5ba0e047ef // Native|Public|BlueprintCallable // @ game+0x68a6bcc
	struct TArray<struct AActor*> CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors // Final|Native|Public|BlueprintCallable // @ game+0x68916a0
	bool *83d2d5c58f(); // Function Engine.PrimitiveComponent.*83d2d5c58f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689baa4
	int32 *2355b14434(); // Function Engine.PrimitiveComponent.*2355b14434 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68991a8
	struct UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial // Native|Public|BlueprintCallable // @ game+0x6891854
	float *64501b49de(); // Function Engine.PrimitiveComponent.*64501b49de // Final|Native|Public|BlueprintCallable // @ game+0x68a7d90
	float *52312be303(); // Function Engine.PrimitiveComponent.*52312be303 // Final|Native|Public|BlueprintCallable // @ game+0x68a8cb8
	void *28aecd6f59(); // Function Engine.PrimitiveComponent.*28aecd6f59 // Final|Native|Public|BlueprintCallable // @ game+0x688eaf0
	float SetMassScale(); // Function Engine.PrimitiveComponent.SetMassScale // Native|Public|BlueprintCallable // @ game+0x68aa7b4
	struct FVector *523a890fe3(); // Function Engine.PrimitiveComponent.*523a890fe3 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6899c20
	struct FName AddForceAtLocation(); // Function Engine.PrimitiveComponent.AddForceAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x688c958
	struct FName *4696406aa4(); // Function Engine.PrimitiveComponent.*4696406aa4 // Final|Native|Public|BlueprintCallable // @ game+0x6896078
	bool *d97262aee0(); // Function Engine.PrimitiveComponent.*d97262aee0 // Native|Public|BlueprintCallable // @ game+0x68aae58
	bool AddImpulse(); // Function Engine.PrimitiveComponent.AddImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x688ceb8
	bool *d81824b167(); // Function Engine.PrimitiveComponent.*d81824b167 // Final|Native|Public|BlueprintCallable // @ game+0x689af54
	enum class ECollisionResponse *53ce351ab3(); // Function Engine.PrimitiveComponent.*53ce351ab3 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68960b0
	bool SetAllPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity // Native|Public|HasDefaults|BlueprintCallable // @ game+0x68a6acc
	bool SetPhysicsMaxAngularVelocity(struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity // Final|Native|Public|BlueprintCallable // @ game+0x68ab22c
	void *2457fa2026(struct TArray<struct F*0f151f07b7> ReturnValue); // Function Engine.PrimitiveComponent.*2457fa2026 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68992dc
	void *c547ccf43f(struct FName BoneName, struct FVector ReturnValue); // Function Engine.PrimitiveComponent.*c547ccf43f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6895bd4
	void *2a28a4ceb1(int32 Value); // Function Engine.PrimitiveComponent.*2a28a4ceb1 // Final|Native|Public|BlueprintCallable // @ game+0x68a8d50
	void *b8614f6ee8(int32 ElementIndex, struct UMaterialInterface* ReturnValue); // Function Engine.PrimitiveComponent.*b8614f6ee8 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689891c
	void GetPhysicsLinearVelocity(struct FName BoneName, struct FVector ReturnValue); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xd7db10
	void *c0fc59eca2(float InMassScale); // Function Engine.PrimitiveComponent.*c0fc59eca2 // Native|Public|BlueprintCallable // @ game+0x68a6938
	void *48b0674a6b(struct AActor* Actor, bool bShouldIgnore); // Function Engine.PrimitiveComponent.*48b0674a6b // Final|Native|Public|BlueprintCallable // @ game+0x689ae74
	void *2726371f61(bool InUseCCD, struct FName BoneName); // Function Engine.PrimitiveComponent.*2726371f61 // Native|Public|BlueprintCallable // @ game+0x68ac74c
	void *8e06d61cd2(enum class ECollisionEnabled NewType); // Function Engine.PrimitiveComponent.*8e06d61cd2 // Native|Public|BlueprintCallable // @ game+0xd049a8
	void *7d15f33df8(bool bSimulate); // Function Engine.PrimitiveComponent.*7d15f33df8 // Native|Public|BlueprintCallable // @ game+0xd844d0
	void *2fcd5dc4f1(struct UPrimitiveComponent* OtherComp, bool ReturnValue); // Function Engine.PrimitiveComponent.*2fcd5dc4f1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689bb44
	void *af2cc12a58(struct APawn* Pawn, bool ReturnValue); // Function Engine.PrimitiveComponent.*af2cc12a58 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x688e470
	void *6147859fcb(int32 FaceIndex, struct UMaterialInterface* ReturnValue); // Function Engine.PrimitiveComponent.*6147859fcb // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x68989c0
	void *b8cf4b4c35(bool bValue); // Function Engine.PrimitiveComponent.*b8cf4b4c35 // Final|Native|Public|BlueprintCallable // @ game+0x68ab990
	void *e13e475844(struct F*705bbdf923 ReturnValue); // Function Engine.PrimitiveComponent.*e13e475844 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689ad90
	void SetCollisionObjectType(enum class ECollisionChannel Channel); // Function Engine.PrimitiveComponent.SetCollisionObjectType // Native|Public|BlueprintCallable // @ game+0x68a8484
	void *c32c2b30ad(struct FVector Origin, float Radius, float Strength, enum class *cb41f937c0 Falloff, bool bVelChange); // Function Engine.PrimitiveComponent.*c32c2b30ad // Native|Public|HasDefaults|BlueprintCallable // @ game+0x688d8cc
	void *3a3aa0f9aa(enum class ECollisionResponse NewResponse); // Function Engine.PrimitiveComponent.*3a3aa0f9aa // Native|Public|BlueprintCallable // @ game+0x68a85b0
	void *7f0b02410b(enum class EDOFMode ConstraintMode); // Function Engine.PrimitiveComponent.*7f0b02410b // Native|Public|BlueprintCallable // @ game+0x68a8b20
	void *714e0a606e(enum class *e33f967072 WriteMaskBit); // Function Engine.PrimitiveComponent.*714e0a606e // Final|Native|Public|BlueprintCallable // @ game+0x68a8de0
	void *90432a4b88(struct UPhysicalMaterial* NewPhysMaterial); // Function Engine.PrimitiveComponent.*90432a4b88 // Native|Public|BlueprintCallable // @ game+0x68ab198
	void *b735fad47e(int32 NewTranslucentSortPriority); // Function Engine.PrimitiveComponent.*b735fad47e // Final|Native|Public|BlueprintCallable // @ game+0x68ac4a8
	void *4fedb1a6a3(enum class EDOFMode LockedAxis); // Function Engine.PrimitiveComponent.*4fedb1a6a3 // Native|Public|BlueprintCallable // @ game+0x68aa418
	void *e87bee575d(bool bNewOnlyOwnerSee); // Function Engine.PrimitiveComponent.*e87bee575d // Final|Native|Public|BlueprintCallable // @ game+0x68aaef0
	void *aaacbbdb6c(); // Function Engine.PrimitiveComponent.*aaacbbdb6c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5aa7820
	void *78d8a0af1f(); // Function Engine.PrimitiveComponent.*78d8a0af1f // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x68ace4c
	void SetCenterOfMass(); // Function Engine.PrimitiveComponent.SetCenterOfMass // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x68a8114
	void *19a69f011f(); // Function Engine.PrimitiveComponent.*19a69f011f // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6895ecc
	void *0de970a16f(); // Function Engine.PrimitiveComponent.*0de970a16f // Final|Native|Public|BlueprintCallable // @ game+0x68a2d38
	void SetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xd518b8
	void AddAngularImpulse(); // Function Engine.PrimitiveComponent.AddAngularImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x688bf44
	void AddImpulseAtLocation(); // Function Engine.PrimitiveComponent.AddImpulseAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x688cff8
	void SetMaterial(); // Function Engine.PrimitiveComponent.SetMaterial // Native|Public|BlueprintCallable // @ game+0xda7178
	void *74fc74b263(); // Function Engine.PrimitiveComponent.*74fc74b263 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689885c
	void *bd0ec46553(); // Function Engine.PrimitiveComponent.*bd0ec46553 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x68a69d4
	void SetAngularDamping(); // Function Engine.PrimitiveComponent.SetAngularDamping // Native|Public|BlueprintCallable // @ game+0x68a1810
	void *48305203f7(); // Function Engine.PrimitiveComponent.*48305203f7 // Native|Public|BlueprintCallable // @ game+0x68aa898
	void *d260a6c731(); // Function Engine.PrimitiveComponent.*d260a6c731 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6896050
	void *47ec021dd1(); // Function Engine.PrimitiveComponent.*47ec021dd1 // Native|Public|BlueprintCallable // @ game+0x68a32ac
	void *40b80e1f86(); // Function Engine.PrimitiveComponent.*40b80e1f86 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6894f54
	void *04a08b51bb(); // Function Engine.PrimitiveComponent.*04a08b51bb // Native|Public|BlueprintCallable // @ game+0x5b1f11c
	void CreateAndSetMaterialInstanceDynamic(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic // Native|Public|BlueprintCallable // @ game+0x68917b0
	void *7614d2f54e(); // Function Engine.PrimitiveComponent.*7614d2f54e // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689b6e4
	void *603b323c81(); // Function Engine.PrimitiveComponent.*603b323c81 // Final|Native|Public|BlueprintCallable // @ game+0x688eb0c
	void *448cf7e0f2(); // Function Engine.PrimitiveComponent.*448cf7e0f2 // Native|Public|BlueprintCallable // @ game+0x68ae3a0
	void *0f1b74141b(); // Function Engine.PrimitiveComponent.*0f1b74141b // Final|Native|Public|BlueprintCallable // @ game+0x68ab040
	void AddTorque(); // Function Engine.PrimitiveComponent.AddTorque // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x688dcf8
	void K2_LineTraceComponent(bool bShowTrace, struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, struct FHitResult OutHit, bool ReturnValue); // Function Engine.PrimitiveComponent.K2_LineTraceComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x689f030
	void *2e26aaaf30(struct FName InCollisionProfileName); // Function Engine.PrimitiveComponent.*2e26aaaf30 // Native|Public|BlueprintCallable // @ game+0x68a851c
	void GetPhysicsAngularVelocity(struct FName BoneName, struct FVector ReturnValue); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6899b70
	void GetOverlappingComponents(struct TArray<struct UPrimitiveComponent*> InOverlappingComponents); // Function Engine.PrimitiveComponent.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x689967c
	void GetMass(float ReturnValue); // Function Engine.PrimitiveComponent.GetMass // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6898830
	void *09ce12ba0b(struct FName BoneName, float MassInKg, bool bOverrideMass); // Function Engine.PrimitiveComponent.*09ce12ba0b // Native|Public|BlueprintCallable // @ game+0x68aa688
	void *85d8176587(bool ReturnValue); // Function Engine.PrimitiveComponent.*85d8176587 // Native|Public|BlueprintCallable // @ game+0x689b22c
	void *6cbdd1633c(bool bValue); // Function Engine.PrimitiveComponent.*6cbdd1633c // Final|Native|Public|BlueprintCallable // @ game+0x68aba24
	void *90cc3021c0(bool bValue); // Function Engine.PrimitiveComponent.*90cc3021c0 // Final|Native|Public|BlueprintCallable // @ game+0x68abab8
	void GetOverlappingActors(struct TArray<struct AActor*> OverlappingActors, struct UClass* ClassFilter); // Function Engine.PrimitiveComponent.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6899484
	void *083545280a(struct TArray<struct UPrimitiveComponent*> ReturnValue); // Function Engine.PrimitiveComponent.*083545280a // Final|Native|Public|BlueprintCallable // @ game+0x6891728
	void SetPhysicsAngularVelocity(struct FVector NewAngVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xd43d1c
	void *8022a6e53e(struct FVector Origin, float Radius, float Strength, enum class *cb41f937c0 Falloff, bool bAccelChange); // Function Engine.PrimitiveComponent.*8022a6e53e // Native|Public|HasDefaults|BlueprintCallable // @ game+0x688d6f8
	void *67e552295b(enum class ECollisionChannel Channel, enum class ECollisionResponse NewResponse); // Function Engine.PrimitiveComponent.*67e552295b // Native|Public|BlueprintCallable // @ game+0x68a8648
	void *f1e65a30d8(struct FVector InputVector, struct FName BoneName, struct FVector ReturnValue); // Function Engine.PrimitiveComponent.*f1e65a30d8 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68a37b8
	void AddForceAtLocationLocal(struct FVector force, struct FVector Location, struct FName BoneName); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal // Native|Public|HasDefaults|BlueprintCallable // @ game+0x688caa4
	void *6e71cecd23(struct FName BoneName, struct FVector ReturnValue); // Function Engine.PrimitiveComponent.*6e71cecd23 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x68978b4
	void CreateDynamicMaterialInstance(int32 ElementIndex, struct UMaterialInterface* SourceMaterial, struct UMaterialInstanceDynamic* ReturnValue); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x6891944
	void *95fc0388db(bool ReturnValue); // Function Engine.PrimitiveComponent.*95fc0388db // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689effc
	void AddForce(); // Function Engine.PrimitiveComponent.AddForce // Native|Public|HasDefaults|BlueprintCallable // @ game+0x688c818
	void *99eb55293a(); // Function Engine.PrimitiveComponent.*99eb55293a // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6896028
	void *419ebb4754(); // Function Engine.PrimitiveComponent.*419ebb4754 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x689efcc
	void *638da52b6d(); // Function Engine.PrimitiveComponent.*638da52b6d // Final|Native|Public|BlueprintCallable // @ game+0x68a7fe8
	void SetLinearDamping(); // Function Engine.PrimitiveComponent.SetLinearDamping // Native|Public|BlueprintCallable // @ game+0x68aa37c
};

// Class Landscape.*6e0e7da5cb
// Size: 0x60 (Inherited: 0x30)
struct U*6e0e7da5cb : UObject {
	struct TArray<struct F*cfabf56edb> *6c0db10ba0; // 0x30(0x10)
	struct UStaticMesh* GrassMesh; // 0x40(0x08)
	float GrassDensity; // 0x48(0x04)
	float PlacementJitter; // 0x4c(0x04)
	int32 StartCullDistance; // 0x50(0x04)
	int32 EndCullDistance; // 0x54(0x04)
	bool RandomRotation; // 0x58(0x01)
	bool AlignToSurface; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0xb10 (Inherited: 0x9b0)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> *00923c66f0; // 0x9a8(0x10)
	int32 *853fb5af27; // 0x9b8(0x04)
	int32 *55a90fcc51; // 0x9bc(0x04)
	int32 *42777cca9e; // 0x9c0(0x04)
	float *a1aaa7d3ee; // 0x9c4(0x04)
	int32 *06e312b842; // 0x9c8(0x04)
	int32 *00245dd1ff; // 0x9cc(0x04)
	struct TArray<bool> *df1c7a6f44; // 0x9d0(0x10)
	struct FGuid *564764486c; // 0x9e0(0x10)
	struct FBox *7f7379b79b; // 0x9f0(0x1c)
	struct ULandscapeComponent* RenderComponent; // 0xa0c(0x1c)
	char pad_A30[0x78]; // 0xa30(0x78)
	struct TArray<struct UPhysicalMaterial*> *b6a490c36e; // 0xaa8(0x10)
	char pad_AB8[0x58]; // 0xab8(0x58)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0xb30 (Inherited: 0xb10)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid *9d1beee753; // 0xb10(0x10)
	char pad_B20[0x10]; // 0xb20(0x10)
};

// Class Landscape.LandscapeInfo
// Size: 0x208 (Inherited: 0x30)
struct ULandscapeInfo : UObject {
	struct ALandscape* LandscapeActor; // 0x30(0x1c)
	struct FGuid *092efd01cf; // 0x4c(0x10)
	int32 *d055000974; // 0x5c(0x04)
	int32 *68e76b8922; // 0x60(0x04)
	int32 *b553abda4a; // 0x64(0x04)
	struct FVector *c617125585; // 0x68(0x0c)
	char pad_74[0x54]; // 0x74(0x54)
	SetProperty *8f1c552131; // 0xc8(0x50)
	char pad_118[0xf0]; // 0x118(0xf0)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x80 (Inherited: 0x30)
struct ULandscapeInfoMap : UObject {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x58 (Inherited: 0x30)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x30(0x08)
	struct UPhysicalMaterial* PhysMaterial; // 0x38(0x08)
	float Hardness; // 0x40(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x44(0x10)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x1f0 (Inherited: 0x1e8)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	char *38f0bd28e7 : 1; // 0x1e8(0x01)
	char *79a8acf0ce : 1; // 0x1e8(0x01)
	char pad_1E8_2 : 6; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
};

// Class Landscape.*10fa88636b
// Size: 0x240 (Inherited: 0x1f0)
struct U*10fa88636b : ULandscapeMaterialInstanceConstant {
	char *38f0bd28e7 : 1; // 0x1e8(0x01)
	char *79a8acf0ce : 1; // 0x1e8(0x01)
	char pad_1F0_2 : 6; // 0x1f0(0x01)
	char pad_1F1[0x4f]; // 0x1f1(0x4f)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x3f8 (Inherited: 0x3f0)
struct ALandscapeMeshProxyActor : AActor {
	struct U*d893ef6d59* LandscapeMeshProxyComponent; // 0x3f0(0x08)
};

// Class Landscape.*d893ef6d59
// Size: 0xb80 (Inherited: 0xb50)
struct U*d893ef6d59 : UStaticMeshComponent {
	struct FGuid *092efd01cf; // 0xb50(0x10)
	struct TArray<struct FIntPoint> *c284784497; // 0xb60(0x10)
	int8 *0455a4dc72; // 0xb70(0x01)
	char pad_B71[0xf]; // 0xb71(0x0f)
};

// Class Landscape.LandscapeProxy
// Size: 0x840 (Inherited: 0x3f0)
struct ALandscapeProxy : AActor {
	struct FGuid *092efd01cf; // 0x3f0(0x10)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x400(0x08)
	int32 *d055000974; // 0x408(0x04)
	int32 *68e76b8922; // 0x40c(0x04)
	int32 *19b1916189; // 0x410(0x04)
	struct FIntPoint *e5c0825f6f; // 0x414(0x08)
	int32 MaxLODLevel; // 0x41c(0x04)
	float LODDistanceFactor; // 0x420(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	int32 *893095ad1a; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x430(0x08)
	float StreamingDistanceMultiplier; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x440(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x448(0x08)
	float *4dfcc5462a; // 0x450(0x04)
	float *b0b96a2019; // 0x454(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x458(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> *77e13aa9d5; // 0x468(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> *b4b54b8bb1; // 0x478(0x10)
	char pad_488[0x60]; // 0x488(0x60)
	char *4ab3bbd3c9 : 1; // 0x4e8(0x01)
	char bCastStaticShadow : 1; // 0x4e8(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4e8(0x01)
	char bCastFarShadow : 1; // 0x4e8(0x01)
	char *a82f837c9a : 1; // 0x4e8(0x01)
	char bRenderCustomDepth : 1; // 0x4e8(0x01)
	char bGenerateOverlapEvents : 1; // 0x4e8(0x01)
	char *4e46c43eb9 : 1; // 0x4e8(0x01)
	char *1e953ca764 : 1; // 0x4e9(0x01)
	char *62265d5b98 : 1; // 0x4e9(0x01)
	char pad_4E9_2 : 6; // 0x4e9(0x01)
	char pad_4EA[0x2]; // 0x4ea(0x02)
	float StaticLightingResolution; // 0x4ec(0x04)
	struct FLightingChannels LightingChannels; // 0x4f0(0x03)
	char pad_4F3[0x1]; // 0x4f3(0x01)
	int32 CustomDepthStencilValue; // 0x4f4(0x04)
	struct F*2ca2c467d8 LightmassSettings; // 0x4f8(0x18)
	int32 CollisionMipLevel; // 0x510(0x04)
	int32 *8ec627c2df; // 0x514(0x04)
	float *5a7063e57a; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct FBodyInstance BodyInstance; // 0x520(0x240)
	enum class ENavDataGatheringMode *44a20f5dab; // 0x760(0x01)
	char pad_761[0xdf]; // 0x761(0xdf)

	struct ULandscapeLayerInfoObject* *1baf4ecef9(); // Function Landscape.LandscapeProxy.*1baf4ecef9 // Final|Native|Public|BlueprintCallable // @ game+0x6156f3c
	float *92781a162c(); // Function Landscape.LandscapeProxy.*92781a162c // Native|Public|BlueprintCallable // @ game+0x5aa8944
};

// Class Landscape.Landscape
// Size: 0x840 (Inherited: 0x840)
struct ALandscape : ALandscapeProxy {
	struct FGuid *092efd01cf; // 0x3f0(0x10)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x400(0x08)
	int32 *d055000974; // 0x408(0x04)
	int32 *68e76b8922; // 0x40c(0x04)
	int32 *19b1916189; // 0x410(0x04)
	struct FIntPoint *e5c0825f6f; // 0x414(0x08)
	int32 MaxLODLevel; // 0x41c(0x04)
	float LODDistanceFactor; // 0x420(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x424(0x01)
	int32 *893095ad1a; // 0x428(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x430(0x08)
	float StreamingDistanceMultiplier; // 0x438(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x440(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x448(0x08)
	float *4dfcc5462a; // 0x450(0x04)
	float *b0b96a2019; // 0x454(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x458(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> *77e13aa9d5; // 0x468(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> *b4b54b8bb1; // 0x478(0x10)
	char *4ab3bbd3c9 : 1; // 0x4e8(0x01)
	char bCastStaticShadow : 1; // 0x4e8(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4e8(0x01)
	char bCastFarShadow : 1; // 0x4e8(0x01)
	char *a82f837c9a : 1; // 0x4e8(0x01)
	char bRenderCustomDepth : 1; // 0x4e8(0x01)
	char bGenerateOverlapEvents : 1; // 0x4e8(0x01)
	char *4e46c43eb9 : 1; // 0x4e8(0x01)
	char *1e953ca764 : 1; // 0x4e9(0x01)
	char *62265d5b98 : 1; // 0x4e9(0x01)
	float StaticLightingResolution; // 0x4ec(0x04)
	struct FLightingChannels LightingChannels; // 0x4f0(0x03)
	int32 CustomDepthStencilValue; // 0x4f4(0x04)
	struct F*2ca2c467d8 LightmassSettings; // 0x4f8(0x18)
	int32 CollisionMipLevel; // 0x510(0x04)
	int32 *8ec627c2df; // 0x514(0x04)
	float *5a7063e57a; // 0x518(0x04)
	struct FBodyInstance BodyInstance; // 0x520(0x240)
	enum class ENavDataGatheringMode *44a20f5dab; // 0x760(0x01)

	struct ULandscapeLayerInfoObject* *1baf4ecef9(); // Function Landscape.LandscapeProxy.*1baf4ecef9 // Final|Native|Public|BlueprintCallable // @ game+0x6156f3c
	float *92781a162c(); // Function Landscape.LandscapeProxy.*92781a162c // Native|Public|BlueprintCallable // @ game+0x5aa8944
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x860 (Inherited: 0x840)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	struct ALandscape* LandscapeActor; // 0x840(0x1c)
	char pad_85C[0x4]; // 0x85c(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x9e0 (Inherited: 0x9b0)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x9a8(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x9b8(0x10)
	struct TArray<struct UMeshComponent*> *4e22c3e529; // 0x9c8(0x10)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb8 (Inherited: 0x30)
struct ULandscapeSplineSegment : UObject {
	struct F*5550df6677 Connections[0x02]; // 0x30(0x30)
	struct FInterpCurveVector *54b9075731; // 0x60(0x18)
	struct TArray<struct F*ab910f8a3a> Points; // 0x78(0x10)
	struct FBox Bounds; // 0x88(0x1c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa8(0x10)
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xa0 (Inherited: 0x30)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	float Width; // 0x48(0x04)
	float *ae77f36b15; // 0x4c(0x04)
	float *c93c986e18; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*bc59d0e956> *fa33a03449; // 0x58(0x10)
	struct TArray<struct F*ab910f8a3a> Points; // 0x68(0x10)
	struct FBox Bounds; // 0x78(0x1c)
	char pad_94[0x4]; // 0x94(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0x98(0x08)
};

// Class Landscape.*3cadeb0b69
// Size: 0x1b8 (Inherited: 0x68)
struct U*3cadeb0b69 : U*4eb614635f {
	struct FExpressionInput UV; // 0x68(0x38)
	struct FExpressionInput DiffuseTexture; // 0xa0(0x38)
	struct FExpressionInput NormalTexture; // 0xd8(0x38)
	struct FExpressionInput *ccc573c058; // 0x110(0x38)
	struct FExpressionInput *ff0a567e29; // 0x148(0x38)
	struct TArray<struct F*fea2a015d0> Layers; // 0x180(0x10)
	uint32 *f1a2401f68; // 0x190(0x04)
	struct FGuid *c328c6d3dd; // 0x194(0x10)
	char pad_1A4[0x14]; // 0x1a4(0x14)
};

// Class Landscape.*8834d12fb4
// Size: 0x78 (Inherited: 0x68)
struct U*8834d12fb4 : U*20b0f316ee {
	struct TArray<struct F*6afc48dff2> *5c9de64aba; // 0x68(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x88 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct F*6ced1ac491> Layers; // 0x68(0x10)
	struct FGuid *c328c6d3dd; // 0x78(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x80 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class *7278ab9647 *d18540ef26; // 0x68(0x01)
	enum class *403caef90c *638203995d; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	float *7078d1193f; // 0x6c(0x04)
	float *ddaaf801c1; // 0x70(0x04)
	float *0d2033a7e4; // 0x74(0x04)
	float *aeb480c6bc; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class Landscape.*ef3355b528
// Size: 0x88 (Inherited: 0x68)
struct U*ef3355b528 : UMaterialExpression {
	struct FName ParameterName; // 0x68(0x08)
	float *fc7d182679; // 0x70(0x04)
	struct FGuid *c328c6d3dd; // 0x74(0x10)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0xf8 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput *feeee00e3d; // 0x68(0x38)
	struct FExpressionInput *e96b55ea41; // 0xa0(0x38)
	struct FName ParameterName; // 0xd8(0x08)
	char *39a9230fc8 : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FGuid *c328c6d3dd; // 0xe4(0x10)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x100 (Inherited: 0x68)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x68(0x38)
	struct FExpressionInput Layer; // 0xa0(0x38)
	struct FName ParameterName; // 0xd8(0x08)
	float *fc7d182679; // 0xe0(0x04)
	struct FVector *6fb73d65ef; // 0xe4(0x0c)
	struct FGuid *c328c6d3dd; // 0xf0(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x78 (Inherited: 0x68)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid *c328c6d3dd; // 0x68(0x10)
};


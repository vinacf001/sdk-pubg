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

	int32 *11ee32cc52(); // Function Engine.StaticMeshComponent.*11ee32cc52 // Final|Native|Public|BlueprintCallable // @ game+0x6bc5794
	struct FVector *8243903fcf(); // Function Engine.StaticMeshComponent.*8243903fcf // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb4ad8
	bool SetStaticMesh(); // Function Engine.StaticMeshComponent.SetStaticMesh // Native|Public|BlueprintCallable // @ game+0x663ac24
	struct UStaticMesh* OnRep_StaticMesh(); // Function Engine.StaticMeshComponent.OnRep_StaticMesh // Final|Native|Public // @ game+0x6bbe00c
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
// Size: 0x3f8 (Inherited: 0x3f8)
struct ALandscapeGizmoActor : AActor {
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

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x448 (Inherited: 0x3f8)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
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

	bool *e9db8211c2(); // Function Engine.PrimitiveComponent.*e9db8211c2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bbb3e4
	bool *5ba0e047ef(); // Function Engine.PrimitiveComponent.*5ba0e047ef // Native|Public|BlueprintCallable // @ game+0x6bc308c
	struct TArray<struct AActor*> CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors // Final|Native|Public|BlueprintCallable // @ game+0x6bada30
	bool *83d2d5c58f(); // Function Engine.PrimitiveComponent.*83d2d5c58f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb7f28
	int32 *2355b14434(); // Function Engine.PrimitiveComponent.*2355b14434 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb5558
	struct UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial // Native|Public|BlueprintCallable // @ game+0x6badbe4
	float *64501b49de(); // Function Engine.PrimitiveComponent.*64501b49de // Final|Native|Public|BlueprintCallable // @ game+0x6bc4250
	float *52312be303(); // Function Engine.PrimitiveComponent.*52312be303 // Final|Native|Public|BlueprintCallable // @ game+0x6bc5178
	void *28aecd6f59(); // Function Engine.PrimitiveComponent.*28aecd6f59 // Final|Native|Public|BlueprintCallable // @ game+0x6baae80
	void SetMassScale(struct FName BoneName, float InMassScale); // Function Engine.PrimitiveComponent.SetMassScale // Native|Public|BlueprintCallable // @ game+0x6bc6c74
	void *523a890fe3(); // Function Engine.PrimitiveComponent.*523a890fe3 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bb606c
	void AddForceAtLocation(struct FVector force, struct FVector Location, struct FName BoneName); // Function Engine.PrimitiveComponent.AddForceAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6ba8c54
	void *4696406aa4(); // Function Engine.PrimitiveComponent.*4696406aa4 // Final|Native|Public|BlueprintCallable // @ game+0x6bb2428
	void *d97262aee0(); // Function Engine.PrimitiveComponent.*d97262aee0 // Native|Public|BlueprintCallable // @ game+0x6bc7318
	void AddImpulse(struct FVector Impulse, struct FName BoneName, bool bVelChange); // Function Engine.PrimitiveComponent.AddImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6ba91b4
	void *d81824b167(); // Function Engine.PrimitiveComponent.*d81824b167 // Final|Native|Public|BlueprintCallable // @ game+0x6bb73a0
	void *53ce351ab3(enum class ECollisionChannel Channel, enum class ECollisionResponse ReturnValue); // Function Engine.PrimitiveComponent.*53ce351ab3 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb2460
	void SetAllPhysicsLinearVelocity(struct FVector NewVel); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bc2f8c
	struct FName SetPhysicsMaxAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity // Final|Native|Public|BlueprintCallable // @ game+0x6bc76ec
	struct TArray<struct F*0f151f07b7> *2457fa2026(); // Function Engine.PrimitiveComponent.*2457fa2026 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb568c
	struct FVector *c547ccf43f(); // Function Engine.PrimitiveComponent.*c547ccf43f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bb1f7c
	int32 *2a28a4ceb1(); // Function Engine.PrimitiveComponent.*2a28a4ceb1 // Final|Native|Public|BlueprintCallable // @ game+0x6bc5210
	struct UMaterialInterface* *b8614f6ee8(); // Function Engine.PrimitiveComponent.*b8614f6ee8 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb4ccc
	struct FVector GetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xe2640c
	float *c0fc59eca2(); // Function Engine.PrimitiveComponent.*c0fc59eca2 // Native|Public|BlueprintCallable // @ game+0x6bc2df8
	bool *48b0674a6b(); // Function Engine.PrimitiveComponent.*48b0674a6b // Final|Native|Public|BlueprintCallable // @ game+0x6bb72c0
	struct FName *2726371f61(); // Function Engine.PrimitiveComponent.*2726371f61 // Native|Public|BlueprintCallable // @ game+0x6bc8c0c
	enum class ECollisionEnabled *8e06d61cd2(); // Function Engine.PrimitiveComponent.*8e06d61cd2 // Native|Public|BlueprintCallable // @ game+0xdab868
	bool *7d15f33df8(); // Function Engine.PrimitiveComponent.*7d15f33df8 // Native|Public|BlueprintCallable // @ game+0xe2de98
	bool *2fcd5dc4f1(); // Function Engine.PrimitiveComponent.*2fcd5dc4f1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb7fc8
	struct APawn* *af2cc12a58(bool ReturnValue); // Function Engine.PrimitiveComponent.*af2cc12a58 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6baa800
	void *6147859fcb(int32 FaceIndex, struct UMaterialInterface* ReturnValue); // Function Engine.PrimitiveComponent.*6147859fcb // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb4d70
	void *b8cf4b4c35(); // Function Engine.PrimitiveComponent.*b8cf4b4c35 // Final|Native|Public|BlueprintCallable // @ game+0x6bc7e50
	void *e13e475844(); // Function Engine.PrimitiveComponent.*e13e475844 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb71dc
	void SetCollisionObjectType(enum class ECollisionChannel Channel); // Function Engine.PrimitiveComponent.SetCollisionObjectType // Native|Public|BlueprintCallable // @ game+0x6bc4944
	void *c32c2b30ad(struct FVector Origin); // Function Engine.PrimitiveComponent.*c32c2b30ad // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6ba9bc8
	void *3a3aa0f9aa(enum class ECollisionResponse NewResponse); // Function Engine.PrimitiveComponent.*3a3aa0f9aa // Native|Public|BlueprintCallable // @ game+0x6bc4a70
	void *7f0b02410b(enum class EDOFMode ConstraintMode); // Function Engine.PrimitiveComponent.*7f0b02410b // Native|Public|BlueprintCallable // @ game+0x6bc4fe0
	void *714e0a606e(); // Function Engine.PrimitiveComponent.*714e0a606e // Final|Native|Public|BlueprintCallable // @ game+0x6bc52a0
	void *90432a4b88(struct UPhysicalMaterial* NewPhysMaterial); // Function Engine.PrimitiveComponent.*90432a4b88 // Native|Public|BlueprintCallable // @ game+0x6bc7658
	void *b735fad47e(int32 NewTranslucentSortPriority); // Function Engine.PrimitiveComponent.*b735fad47e // Final|Native|Public|BlueprintCallable // @ game+0x6bc8968
	void *4fedb1a6a3(); // Function Engine.PrimitiveComponent.*4fedb1a6a3 // Native|Public|BlueprintCallable // @ game+0x6bc68d8
	void *e87bee575d(); // Function Engine.PrimitiveComponent.*e87bee575d // Final|Native|Public|BlueprintCallable // @ game+0x6bc73b0
	float *aaacbbdb6c(); // Function Engine.PrimitiveComponent.*aaacbbdb6c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5da4b2c
	struct F*705bbdf923 *78d8a0af1f(); // Function Engine.PrimitiveComponent.*78d8a0af1f // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6bc930c
	struct FName SetCenterOfMass(); // Function Engine.PrimitiveComponent.SetCenterOfMass // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bc45d4
	float *19a69f011f(); // Function Engine.PrimitiveComponent.*19a69f011f // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb227c
	struct FName *0de970a16f(); // Function Engine.PrimitiveComponent.*0de970a16f // Final|Native|Public|BlueprintCallable // @ game+0x6bbf17c
	struct FName SetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xdf5f78
	bool AddAngularImpulse(); // Function Engine.PrimitiveComponent.AddAngularImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6ba8240
	struct FName AddImpulseAtLocation(); // Function Engine.PrimitiveComponent.AddImpulseAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6ba92f4
	struct UMaterialInterface* SetMaterial(); // Function Engine.PrimitiveComponent.SetMaterial // Native|Public|BlueprintCallable // @ game+0xe4e7cc
	float *74fc74b263(); // Function Engine.PrimitiveComponent.*74fc74b263 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb4c0c
	void *bd0ec46553(struct FVector NewAngVel, bool bAddToCurrent); // Function Engine.PrimitiveComponent.*bd0ec46553 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bc2e94
	void SetAngularDamping(float InDamping); // Function Engine.PrimitiveComponent.SetAngularDamping // Native|Public|BlueprintCallable // @ game+0x6bbdc54
	void *48305203f7(); // Function Engine.PrimitiveComponent.*48305203f7 // Native|Public|BlueprintCallable // @ game+0x6bc6d58
	void *d260a6c731(enum class ECollisionChannel ReturnValue); // Function Engine.PrimitiveComponent.*d260a6c731 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb2400
	void *47ec021dd1(); // Function Engine.PrimitiveComponent.*47ec021dd1 // Native|Public|BlueprintCallable // @ game+0x6bbf6f0
	void *40b80e1f86(float ReturnValue); // Function Engine.PrimitiveComponent.*40b80e1f86 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb12fc
	void *04a08b51bb(); // Function Engine.PrimitiveComponent.*04a08b51bb // Native|Public|BlueprintCallable // @ game+0x5e1c720
	void CreateAndSetMaterialInstanceDynamic(struct UMaterialInstanceDynamic* ReturnValue); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic // Native|Public|BlueprintCallable // @ game+0x6badb40
	void *7614d2f54e(bool ReturnValue); // Function Engine.PrimitiveComponent.*7614d2f54e // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb7b68
	void *603b323c81(); // Function Engine.PrimitiveComponent.*603b323c81 // Final|Native|Public|BlueprintCallable // @ game+0x6baae9c
	void *448cf7e0f2(); // Function Engine.PrimitiveComponent.*448cf7e0f2 // Native|Public|BlueprintCallable // @ game+0x6bca848
	void *0f1b74141b(); // Function Engine.PrimitiveComponent.*0f1b74141b // Final|Native|Public|BlueprintCallable // @ game+0x6bc7500
	void AddTorque(struct FVector Torque, struct FName BoneName, bool bAccelChange); // Function Engine.PrimitiveComponent.AddTorque // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6baa088
	bool K2_LineTraceComponent(); // Function Engine.PrimitiveComponent.K2_LineTraceComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6bbb474
	struct FName *2e26aaaf30(); // Function Engine.PrimitiveComponent.*2e26aaaf30 // Native|Public|BlueprintCallable // @ game+0x6bc49dc
	struct FVector GetPhysicsAngularVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bb5fbc
	struct TArray<struct UPrimitiveComponent*> GetOverlappingComponents(); // Function Engine.PrimitiveComponent.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb5a2c
	float GetMass(); // Function Engine.PrimitiveComponent.GetMass // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb4be0
	bool *09ce12ba0b(); // Function Engine.PrimitiveComponent.*09ce12ba0b // Native|Public|BlueprintCallable // @ game+0x6bc6b48
	bool *85d8176587(); // Function Engine.PrimitiveComponent.*85d8176587 // Native|Public|BlueprintCallable // @ game+0x6bb7678
	bool *6cbdd1633c(); // Function Engine.PrimitiveComponent.*6cbdd1633c // Final|Native|Public|BlueprintCallable // @ game+0x6bc7ee4
	bool *90cc3021c0(); // Function Engine.PrimitiveComponent.*90cc3021c0 // Final|Native|Public|BlueprintCallable // @ game+0x6bc7f78
	struct UClass* GetOverlappingActors(); // Function Engine.PrimitiveComponent.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb5834
	void *083545280a(struct TArray<struct UPrimitiveComponent*> ReturnValue); // Function Engine.PrimitiveComponent.*083545280a // Final|Native|Public|BlueprintCallable // @ game+0x6badab8
	void SetPhysicsAngularVelocity(struct FVector NewAngVel, bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xde91c4
	void *8022a6e53e(float Strength, enum class *cb41f937c0 Falloff, bool bAccelChange); // Function Engine.PrimitiveComponent.*8022a6e53e // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6ba99f4
	void *67e552295b(); // Function Engine.PrimitiveComponent.*67e552295b // Native|Public|BlueprintCallable // @ game+0x6bc4b08
	void *f1e65a30d8(struct FName BoneName, struct FVector ReturnValue); // Function Engine.PrimitiveComponent.*f1e65a30d8 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bbfbfc
	void AddForceAtLocationLocal(struct FVector force); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6ba8da0
	void *6e71cecd23(struct FVector ReturnValue); // Function Engine.PrimitiveComponent.*6e71cecd23 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb3c64
	void CreateDynamicMaterialInstance(int32 ElementIndex, struct UMaterialInterface* SourceMaterial); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x6badcd4
	void *95fc0388db(); // Function Engine.PrimitiveComponent.*95fc0388db // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bbb440
	bool AddForce(); // Function Engine.PrimitiveComponent.AddForce // Native|Public|HasDefaults|BlueprintCallable // @ game+0x6ba8b14
	enum class ECollisionEnabled *99eb55293a(); // Function Engine.PrimitiveComponent.*99eb55293a // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb23d8
	bool *419ebb4754(); // Function Engine.PrimitiveComponent.*419ebb4754 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6bbb410
	bool *638da52b6d(); // Function Engine.PrimitiveComponent.*638da52b6d // Final|Native|Public|BlueprintCallable // @ game+0x6bc44a8
	float SetLinearDamping(); // Function Engine.PrimitiveComponent.SetLinearDamping // Native|Public|BlueprintCallable // @ game+0x6bc683c
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
// Size: 0x400 (Inherited: 0x3f8)
struct ALandscapeMeshProxyActor : AActor {
	struct U*d893ef6d59* LandscapeMeshProxyComponent; // 0x3f8(0x08)
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
// Size: 0x850 (Inherited: 0x3f8)
struct ALandscapeProxy : AActor {
	struct FGuid *092efd01cf; // 0x3f8(0x10)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x408(0x08)
	int32 *d055000974; // 0x410(0x04)
	int32 *68e76b8922; // 0x414(0x04)
	int32 *19b1916189; // 0x418(0x04)
	struct FIntPoint *e5c0825f6f; // 0x41c(0x08)
	int32 MaxLODLevel; // 0x424(0x04)
	float LODDistanceFactor; // 0x428(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x42c(0x01)
	char pad_42D[0x3]; // 0x42d(0x03)
	int32 *893095ad1a; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x438(0x08)
	float StreamingDistanceMultiplier; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x448(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x450(0x08)
	float *4dfcc5462a; // 0x458(0x04)
	float *b0b96a2019; // 0x45c(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x460(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> *77e13aa9d5; // 0x470(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> *b4b54b8bb1; // 0x480(0x10)
	char pad_490[0x60]; // 0x490(0x60)
	char *4ab3bbd3c9 : 1; // 0x4f0(0x01)
	char bCastStaticShadow : 1; // 0x4f0(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4f0(0x01)
	char bCastFarShadow : 1; // 0x4f0(0x01)
	char *a82f837c9a : 1; // 0x4f0(0x01)
	char bRenderCustomDepth : 1; // 0x4f0(0x01)
	char bGenerateOverlapEvents : 1; // 0x4f0(0x01)
	char *4e46c43eb9 : 1; // 0x4f0(0x01)
	char *1e953ca764 : 1; // 0x4f1(0x01)
	char *62265d5b98 : 1; // 0x4f1(0x01)
	char pad_4F1_2 : 6; // 0x4f1(0x01)
	char pad_4F2[0x2]; // 0x4f2(0x02)
	float StaticLightingResolution; // 0x4f4(0x04)
	struct FLightingChannels LightingChannels; // 0x4f8(0x03)
	char pad_4FB[0x1]; // 0x4fb(0x01)
	int32 CustomDepthStencilValue; // 0x4fc(0x04)
	struct F*2ca2c467d8 LightmassSettings; // 0x500(0x18)
	int32 CollisionMipLevel; // 0x518(0x04)
	int32 *8ec627c2df; // 0x51c(0x04)
	float *5a7063e57a; // 0x520(0x04)
	char pad_524[0xc]; // 0x524(0x0c)
	struct FBodyInstance BodyInstance; // 0x530(0x240)
	enum class ENavDataGatheringMode *44a20f5dab; // 0x770(0x01)
	char pad_771[0xdf]; // 0x771(0xdf)

	struct ULandscapeLayerInfoObject* *1baf4ecef9(); // Function Landscape.LandscapeProxy.*1baf4ecef9 // Final|Native|Public|BlueprintCallable // @ game+0x6454da0
	float *92781a162c(); // Function Landscape.LandscapeProxy.*92781a162c // Native|Public|BlueprintCallable // @ game+0x5da5c50
};

// Class Landscape.Landscape
// Size: 0x850 (Inherited: 0x850)
struct ALandscape : ALandscapeProxy {
	struct FGuid *092efd01cf; // 0x3f8(0x10)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x408(0x08)
	int32 *d055000974; // 0x410(0x04)
	int32 *68e76b8922; // 0x414(0x04)
	int32 *19b1916189; // 0x418(0x04)
	struct FIntPoint *e5c0825f6f; // 0x41c(0x08)
	int32 MaxLODLevel; // 0x424(0x04)
	float LODDistanceFactor; // 0x428(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x42c(0x01)
	int32 *893095ad1a; // 0x430(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x438(0x08)
	float StreamingDistanceMultiplier; // 0x440(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x448(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x450(0x08)
	float *4dfcc5462a; // 0x458(0x04)
	float *b0b96a2019; // 0x45c(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x460(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> *77e13aa9d5; // 0x470(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> *b4b54b8bb1; // 0x480(0x10)
	char *4ab3bbd3c9 : 1; // 0x4f0(0x01)
	char bCastStaticShadow : 1; // 0x4f0(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4f0(0x01)
	char bCastFarShadow : 1; // 0x4f0(0x01)
	char *a82f837c9a : 1; // 0x4f0(0x01)
	char bRenderCustomDepth : 1; // 0x4f0(0x01)
	char bGenerateOverlapEvents : 1; // 0x4f0(0x01)
	char *4e46c43eb9 : 1; // 0x4f0(0x01)
	char *1e953ca764 : 1; // 0x4f1(0x01)
	char *62265d5b98 : 1; // 0x4f1(0x01)
	float StaticLightingResolution; // 0x4f4(0x04)
	struct FLightingChannels LightingChannels; // 0x4f8(0x03)
	int32 CustomDepthStencilValue; // 0x4fc(0x04)
	struct F*2ca2c467d8 LightmassSettings; // 0x500(0x18)
	int32 CollisionMipLevel; // 0x518(0x04)
	int32 *8ec627c2df; // 0x51c(0x04)
	float *5a7063e57a; // 0x520(0x04)
	struct FBodyInstance BodyInstance; // 0x530(0x240)
	enum class ENavDataGatheringMode *44a20f5dab; // 0x770(0x01)

	struct ULandscapeLayerInfoObject* *1baf4ecef9(); // Function Landscape.LandscapeProxy.*1baf4ecef9 // Final|Native|Public|BlueprintCallable // @ game+0x6454da0
	float *92781a162c(); // Function Landscape.LandscapeProxy.*92781a162c // Native|Public|BlueprintCallable // @ game+0x5da5c50
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x870 (Inherited: 0x850)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	struct ALandscape* LandscapeActor; // 0x850(0x1c)
	char pad_86C[0x4]; // 0x86c(0x04)
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


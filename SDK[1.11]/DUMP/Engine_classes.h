// Class Engine.Actor
// Size: 0x3e8 (Inherited: 0x28)
struct AActor : UObject {
	struct FMulticastDelegate OnActorEndOverlap[0x10]; // 0x28(0x10)
	char pad_38[0xc]; // 0x38(0x0c)
	float NetUpdateFrequency[0x04]; // 0x44(0x04)
	struct FMulticastDelegate OnEndCursorOver[0x10]; // 0x48(0x10)
	char pad_58_0 : 3; // 0x58(0x01)
	char *b8d59458c6 : 1; // 0x58(0x01)
	char pad_58_4 : 4; // 0x58(0x01)
	char pad_59_0 : 1; // 0x59(0x01)
	char *cf80e92dfd : 1; // 0x59(0x01)
	char bReplicates : 1; // 0x59(0x01)
	char pad_59_3 : 5; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct FName *ab64aa9b2c[0x08]; // 0x60(0x08)
	enum class ENetRole RemoteRole; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct AActor* Owner[0x08]; // 0x70(0x08)
	struct FRepMovement ReplicatedMovement[0x34]; // 0x78(0x34)
	char pad_AC[0x4]; // 0xac(0x04)
	struct F*f897083c18 *732a816970[0x40]; // 0xb0(0x40)
	float *7974797124[0x04]; // 0xf0(0x04)
	float NetCullDistanceSquared[0x04]; // 0xf4(0x04)
	float NetPriority[0x04]; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct TArray<struct FName> Layers[0x10]; // 0x100(0x10)
	enum class ENetRole Role; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FMulticastDelegate OnBeginCursorOver[0x10]; // 0x118(0x10)
	struct UChildActorComponent* *bcea33173e[0x08]; // 0x128(0x08)
	char pad_130[0x50]; // 0x130(0x50)
	char bAutoDestroyWhenFinished : 1; // 0x180(0x01)
	char bCanBeDamaged : 1; // 0x180(0x01)
	char *f9145fc180 : 1; // 0x180(0x01)
	char *f7e3b7cb03 : 1; // 0x180(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x180(0x01)
	char *c5217f0fba : 1; // 0x180(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x180(0x01)
	char *97257759e9 : 1; // 0x180(0x01)
	char *951e142077 : 1; // 0x181(0x01)
	char pad_181_1 : 7; // 0x181(0x01)
	char pad_182[0x6]; // 0x182(0x06)
	struct FMulticastDelegate OnReleased[0x10]; // 0x188(0x10)
	enum class EAutoReceiveInput *1b5d625838; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct FMulticastDelegate OnInputTouchBegin[0x10]; // 0x1a0(0x10)
	uint64 *5b976d7486[0x08]; // 0x1b0(0x08)
	struct APawn* Instigator[0x08]; // 0x1b8(0x08)
	int32 *024611cfc7[0x04]; // 0x1c0(0x04)
	char *62cc053e31 : 1; // 0x1c4(0x01)
	char pad_1C4_1 : 4; // 0x1c4(0x01)
	char *97c9e9d9d8 : 1; // 0x1c4(0x01)
	char *899333b5f1 : 1; // 0x1c4(0x01)
	char *251c0d9766 : 1; // 0x1c4(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x1c5(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x1c6(0x01)
	char pad_1C7[0x1]; // 0x1c7(0x01)
	struct FMulticastDelegate OnInputTouchEnter[0x10]; // 0x1c8(0x10)
	struct AActor* ParentComponentActor[0x08]; // 0x1d8(0x08)
	struct FMulticastDelegate OnTakeAnyDamage[0x10]; // 0x1e0(0x10)
	float CustomTimeDilation[0x04]; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct TArray<struct AMatineeActor*> *8a80c37de5[0x10]; // 0x1f8(0x10)
	char pad_208[0x58]; // 0x208(0x58)
	struct TArray<struct UActorComponent*> InstanceComponents[0x10]; // 0x260(0x10)
	struct FGuid DestructibleId[0x10]; // 0x270(0x10)
	bool bIsDestroyedVersion; // 0x280(0x01)
	bool RemoveFromLevelLOD; // 0x281(0x01)
	char pad_282[0x6]; // 0x282(0x06)
	struct F*82957ba793 PrimaryActorTick[0x58]; // 0x288(0x58)
	float MinNetUpdateFrequency[0x04]; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents[0x10]; // 0x2e8(0x10)
	struct TArray<struct FName> Tags[0x10]; // 0x2f8(0x10)
	struct FMulticastDelegate OnInputTouchEnd[0x10]; // 0x308(0x10)
	struct FMulticastDelegate OnTakePointDamage[0x10]; // 0x318(0x10)
	char pad_328[0x8]; // 0x328(0x08)
	struct FMulticastDelegate OnActorHit[0x10]; // 0x330(0x10)
	enum class *95c5f230f9 InputConsumeOption; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct U*4aa7f8d102* *4aa7f8d102[0x08]; // 0x348(0x08)
	struct FMulticastDelegate OnClicked[0x10]; // 0x350(0x10)
	int32 *16d0bb46bd[0x04]; // 0x360(0x04)
	char pad_364[0x1]; // 0x364(0x01)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x365(0x01)
	char bHidden : 1; // 0x366(0x01)
	char *dca4a04378 : 1; // 0x366(0x01)
	char *b3a4f52d88 : 1; // 0x366(0x01)
	char bOnlyRelevantToOwner : 1; // 0x366(0x01)
	char bAlwaysRelevant : 1; // 0x366(0x01)
	char *4b5ea83cba : 1; // 0x366(0x01)
	char *105e02f348 : 1; // 0x366(0x01)
	char *6980862dd6 : 1; // 0x366(0x01)
	char *ad303653fe : 1; // 0x367(0x01)
	char pad_367_1 : 1; // 0x367(0x01)
	char *f82bbe5644 : 1; // 0x367(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x367(0x01)
	char *e441233b38 : 1; // 0x367(0x01)
	char pad_367_5 : 1; // 0x367(0x01)
	char *b42f39270d : 1; // 0x367(0x01)
	char pad_367_7 : 1; // 0x367(0x01)
	struct USceneComponent* RootComponent[0x08]; // 0x368(0x08)
	struct FMulticastDelegate OnInputTouchLeave[0x10]; // 0x370(0x10)
	struct FMulticastDelegate OnActorBeginOverlap[0x10]; // 0x380(0x10)
	float InitialLifeSpan[0x04]; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct TArray<struct AActor*> Children[0x10]; // 0x398(0x10)
	struct FMulticastDelegate OnDestroyed[0x10]; // 0x3a8(0x10)
	struct FMulticastDelegate OnEndPlay[0x10]; // 0x3b8(0x10)
	char pad_3C8[0x20]; // 0x3c8(0x20)

	void ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct FHitResult K2_AddActorLocalTransform(struct FTransform* NewTransform); // Function Engine.Actor.K2_AddActorLocalTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65cd514
	void *00b640eb07(); // Function Engine.Actor.*00b640eb07 // Native|Public|BlueprintCallable // @ game+0x65be494
	void K2_SetActorRelativeTransform(struct FTransform* NewRelativeTransform, struct FHitResult* SweepHitResult); // Function Engine.Actor.K2_SetActorRelativeTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d1050
	void K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct UClass* *dfe7c31236(); // Function Engine.Actor.*dfe7c31236 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7374
	void ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void K2_AttachRootComponentTo(struct USceneComponent** InParent, enum class EAttachLocation AttachLocationType); // Function Engine.Actor.K2_AttachRootComponentTo // Final|Native|Public|BlueprintCallable // @ game+0x65cec6c
	void *5ef1f9adbd(); // Function Engine.Actor.*5ef1f9adbd // Native|Public|BlueprintCallable // @ game+0x65d47d8
	void *394d08df53(); // Function Engine.Actor.*394d08df53 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9714
	struct UPrimitiveComponent* ReceiveHit(struct AActor** Other, bool bSelfMoved, struct FVector* HitNormal); // Function Engine.Actor.ReceiveHit // Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x2cd4ac
	bool K2_SetActorTransform(); // Function Engine.Actor.K2_SetActorTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d137c
	void GetTransform(); // Function Engine.Actor.GetTransform // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cbabc
	void K2_AddActorLocalRotation(bool bSweep); // Function Engine.Actor.K2_AddActorLocalRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65cd33c
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65ca460
	void *3068ec2eb0(); // Function Engine.Actor.*3068ec2eb0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c5980
	void *23179b0761(struct UMaterialInterface** Parent); // Function Engine.Actor.*23179b0761 // Final|Native|Public|BlueprintCallable // @ game+0x65d2bf4
	void *bd60b203e7(); // Function Engine.Actor.*bd60b203e7 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d7d4c
	void *13d64425d8(); // Function Engine.Actor.*13d64425d8 // Final|Native|Public|BlueprintCallable // @ game+0x65d79b0
	void *9790e1fca0(); // Function Engine.Actor.*9790e1fca0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c8820
	void *45fd8a20ef(struct AActor** OtherActor); // Function Engine.Actor.*45fd8a20ef // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7b84
	struct AActor* *2d603aa95a(); // Function Engine.Actor.*2d603aa95a // Final|Native|Public|BlueprintCallable // @ game+0x65de7c4
	void *38cb59ce4e(); // Function Engine.Actor.*38cb59ce4e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c60d0
	void *4db2f11121(struct FVector* DestLocation); // Function Engine.Actor.*4db2f11121 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d25bc
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // Native|Public // @ game+0xc7d50c
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // Native|Public // @ game+0x29a800
	void *ce46fbd05d(); // Function Engine.Actor.*ce46fbd05d // Final|Native|Public|BlueprintCallable // @ game+0x65cb844
	struct FRotator K2_SetActorRelativeRotation(bool bSweep); // Function Engine.Actor.K2_SetActorRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d0e78
	void *b5dbf0fa4d(); // Function Engine.Actor.*b5dbf0fa4d // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c97dc
	enum class EAttachmentRule *3d6bef52db(enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*3d6bef52db // Final|Native|Public|BlueprintCallable // @ game+0x65cf0ec
	bool K2_SetActorLocation(bool bSweep); // Function Engine.Actor.K2_SetActorLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d0884
	struct AActor* *1e359ac376(); // Function Engine.Actor.*1e359ac376 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7c24
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // Native|Public|BlueprintCallable // @ game+0x65d7a48
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void *6f6c4999f4(); // Function Engine.Actor.*6f6c4999f4 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c5aac
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void *e1b7176d37(); // Function Engine.Actor.*e1b7176d37 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c5ae0
	void K2_AddActorWorldTransform(struct FTransform* DeltaTransform, struct FHitResult* SweepHitResult); // Function Engine.Actor.K2_AddActorWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65cdaf0
	void *70d0b60e57(); // Function Engine.Actor.*70d0b60e57 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c5820
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void *3730f5c729(); // Function Engine.Actor.*3730f5c729 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d01a8
	void K2_AddActorLocalOffset(struct FVector* DeltaLocation, struct FHitResult* SweepHitResult); // Function Engine.Actor.K2_AddActorLocalOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65cd164
	void *750dd6d1b4(); // Function Engine.Actor.*750dd6d1b4 // Final|Native|Public|BlueprintCallable // @ game+0x65dd664
	void K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void *07af7aee83(); // Function Engine.Actor.*07af7aee83 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c8ef0
	void *6dabfe76eb(); // Function Engine.Actor.*6dabfe76eb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc4a8
	void *4e5e8a5c04(); // Function Engine.Actor.*4e5e8a5c04 // Native|Public|BlueprintCallable // @ game+0x65c4da8
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // Native|Public // @ game+0xbfb42c
	void *0f4aed8ef9(); // Function Engine.Actor.*0f4aed8ef9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c594c
	void *0919a2c424(); // Function Engine.Actor.*0919a2c424 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ca914
	struct UObject* AddComponent(struct FName* TemplateName); // Function Engine.Actor.AddComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0xb8b6bc
	void *614fe47857(); // Function Engine.Actor.*614fe47857 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc48c
	void *6d7d5caa8e(); // Function Engine.Actor.*6d7d5caa8e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cb0b8
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // Native|Protected // @ game+0x86d5dc
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void *90b7b2cf4b(); // Function Engine.Actor.*90b7b2cf4b // Native|Public|BlueprintCallable // @ game+0xcc2cdc
	void GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65ca6c0
	void *a030dac26f(struct AActor** OtherActor); // Function Engine.Actor.*a030dac26f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cb578
	enum class *c67378b5c9 *df34dc9ee1(); // Function Engine.Actor.*df34dc9ee1 // Final|Native|Public|BlueprintCallable // @ game+0x65cf894
	void *be02dcd6c1(struct AActor** OtherActor); // Function Engine.Actor.*be02dcd6c1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c88c0
	void *eb97b78500(struct AActor** OtherActor); // Function Engine.Actor.*eb97b78500 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cbe54
	struct FVector GetActorBounds(); // Function Engine.Actor.GetActorBounds // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c5544
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void K2_SetActorRotation(struct FRotator* NewRotation); // Function Engine.Actor.K2_SetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d127c
	void *91c797133f(); // Function Engine.Actor.*91c797133f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c972c
	void DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // Final|Native|Public|BlueprintCallable // @ game+0x65c326c
	void *9bff12536a(struct UClass** ComponentClass, struct FName* Tag); // Function Engine.Actor.*9bff12536a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7464
	void *686ee8fadd(); // Function Engine.Actor.*686ee8fadd // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d7cac
	void *8c98ce177e(); // Function Engine.Actor.*8c98ce177e // Final|Native|Public|BlueprintCallable // @ game+0x65cf744
	struct FHitResult K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d0ca0
	void SetOwner(); // Function Engine.Actor.SetOwner // Native|Public|BlueprintCallable // @ game+0x582f2cc
	void *641423d1a4(); // Function Engine.Actor.*641423d1a4 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c5b08
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cfcd4
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // Native|Public|BlueprintCallable // @ game+0x65cf72c
	void *a14cb7b3ca(); // Function Engine.Actor.*a14cb7b3ca // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x65c5330
	void SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // Final|Native|Public|BlueprintCallable // @ game+0x65d7dec
	void *5d72d1d4c9(); // Function Engine.Actor.*5d72d1d4c9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ca8f0
	void AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x65be36c
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // Native|Public // @ game+0x6e6bbc
	void *9e37cb0e5c(struct TArray<struct AActor*>* ChildActors); // Function Engine.Actor.*9e37cb0e5c // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c5ebc
	void *1e3f4f9b76(); // Function Engine.Actor.*1e3f4f9b76 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc540
	void *613e01c62a(); // Function Engine.Actor.*613e01c62a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cfc04
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct FRotator K2_SetActorLocationAndRotation(bool bSweep, bool bTeleport); // Function Engine.Actor.K2_SetActorLocationAndRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d0a68
	void *d4ab759ea6(); // Function Engine.Actor.*d4ab759ea6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ca850
	struct FName ActorHasTag(); // Function Engine.Actor.ActorHasTag // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65bc6d4
	void *93d0f10bfb(); // Function Engine.Actor.*93d0f10bfb // Final|Native|Public|BlueprintCallable // @ game+0x65d7e80
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void *4d66259ce2(); // Function Engine.Actor.*4d66259ce2 // Native|Public|BlueprintCallable // @ game+0x65df4b4
	void *0014400b33(); // Function Engine.Actor.*0014400b33 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x65dd194
	struct FName ReceivePointDamage(struct FVector* ShotFromDirection, struct AActor** DamageCauser); // Function Engine.Actor.ReceivePointDamage // BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x2cd4ac
	void *d79c49c550(); // Function Engine.Actor.*d79c49c550 // Native|Public|BlueprintCallable // @ game+0x65dd0fc
	void ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void *5ad1d3c9a1(); // Function Engine.Actor.*5ad1d3c9a1 // Native|Public|BlueprintCallable // @ game+0x65d46b0
	void *4fc38b8595(struct FVector* OutLocation); // Function Engine.Actor.*4fc38b8595 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c5714
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x65c5344
	struct FHitResult K2_AddActorWorldOffset(); // Function Engine.Actor.K2_AddActorWorldOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65cd740
	void DisableInput(); // Function Engine.Actor.DisableInput // Native|Public|BlueprintCallable // @ game+0x65c3300
	void *ef2725e645(); // Function Engine.Actor.*ef2725e645 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c950c
	float *ab8b52a15b(); // Function Engine.Actor.*ab8b52a15b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65dfb94
	void *1092e5e400(); // Function Engine.Actor.*1092e5e400 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c6120
	void ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void *a4e857ec43(); // Function Engine.Actor.*a4e857ec43 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c60f4
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct AController* ReceiveRadialDamage(); // Function Engine.Actor.ReceiveRadialDamage // BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x2cd4ac
	void *2fb8c5686e(); // Function Engine.Actor.*2fb8c5686e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c727c
	enum class EAttachmentRule *f414cfd93b(enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*f414cfd93b // Final|Native|Public|BlueprintCallable // @ game+0x86c9e4
	void *fd96d57958(struct AActor** Other); // Function Engine.Actor.*fd96d57958 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ccc78
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // Native|Public // @ game+0xb83670
	void *49913882bb(); // Function Engine.Actor.*49913882bb // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cbe1c
	void *2aaaa32fa0(); // Function Engine.Actor.*2aaaa32fa0 // Final|Native|Public|BlueprintCallable // @ game+0x65dd77c
	void ReceiveAnyDamage(float* Damage, struct AController** InstigatedBy); // Function Engine.Actor.ReceiveAnyDamage // BlueprintAuthorityOnly|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct FHitResult K2_AddActorWorldRotation(); // Function Engine.Actor.K2_AddActorWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65cd918
	void *94feccb1e2(); // Function Engine.Actor.*94feccb1e2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c56ec
	void *c38f5475d6(); // Function Engine.Actor.*c38f5475d6 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x65c7dcc
	enum class EAttachLocation K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor // Final|Native|Public|BlueprintCallable // @ game+0x65cedec
	void HasAuthority(); // Function Engine.Actor.HasAuthority // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xac23a4
	void *48afe05568(struct FKey* InputAxisKey); // Function Engine.Actor.*48afe05568 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c8dfc
	void *ab7a656a16(); // Function Engine.Actor.*ab7a656a16 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x58cb538
	float MakeNoise(); // Function Engine.Actor.MakeNoise // Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d2c70
};

// Class Engine.AnimInstance
// Size: 0x398 (Inherited: 0x28)
struct UAnimInstance : UObject {
	float DeltaTime[0x04]; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct USkeleton* *ed667f4877[0x08]; // 0x30(0x08)
	enum class *f710213dc1 *11e7e042ca; // 0x38(0x01)
	bool bRunUpdatesInWorkerThreads; // 0x39(0x01)
	bool bCanUseParallelUpdateAnimation; // 0x3a(0x01)
	bool *6c5cd0fbcc; // 0x3b(0x01)
	bool bWarnAboutBlueprintUsage; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FMulticastDelegate OnMontageBlendingOut[0x10]; // 0x40(0x10)
	struct FMulticastDelegate OnMontageStarted[0x10]; // 0x50(0x10)
	struct FMulticastDelegate OnMontageEnded[0x10]; // 0x60(0x10)
	struct FMulticastDelegate OnMontageInterrupted[0x10]; // 0x70(0x10)
	struct FMulticastDelegate OnAllMontageInstancesEnded[0x10]; // 0x80(0x10)
	char pad_90[0x60]; // 0x90(0x60)
	bool *26e169fab8; // 0xf0(0x01)
	char pad_F1[0x9f]; // 0xf1(0x9f)
	struct TArray<struct FAnimNotifyEvent> *505b5151ee[0x10]; // 0x190(0x10)
	char pad_1A0[0x1f8]; // 0x1a0(0x1f8)

	void GetAnimAssetPlayerLength(); // Function Engine.AnimInstance.GetAnimAssetPlayerLength // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65fc8a8
	struct UAnimMontage* *da8b5dda0c(); // Function Engine.AnimInstance.*da8b5dda0c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66164d0
	void *f7028cf890(int32* MachineIndex); // Function Engine.AnimInstance.*f7028cf890 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x66015a0
	void *4e5ea7e426(); // Function Engine.AnimInstance.*4e5ea7e426 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc7a9a0
	struct UAnimMontage* *7ad988b653(); // Function Engine.AnimInstance.*7ad988b653 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66166ac
	struct UAnimMontage* *8222fd1c56(); // Function Engine.AnimInstance.*8222fd1c56 // Final|Native|Public|BlueprintCallable // @ game+0x6616ac8
	void *614f873041(); // Function Engine.AnimInstance.*614f873041 // Final|Native|Public|BlueprintCallable // @ game+0x65f129c
	void *7004794d0c(); // Function Engine.AnimInstance.*7004794d0c // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x66007a8
	float *460e32196d(); // Function Engine.AnimInstance.*460e32196d // Final|Native|Public|BlueprintCallable // @ game+0x6637458
	struct UAnimMontage* *333bc82610(); // Function Engine.AnimInstance.*333bc82610 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x661660c
	void *31b3be8143(); // Function Engine.AnimInstance.*31b3be8143 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x65fe524
	void GetAnimAssetPlayerTimeFraction(float* CurrentTime); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65fc93c
	struct FName *5c84548a1e(); // Function Engine.AnimInstance.*5c84548a1e // Final|Native|Public|BlueprintCallable // @ game+0x66167ec
	struct FName *7a4d3e2de7(struct FName* MarkerName); // Function Engine.AnimInstance.*7a4d3e2de7 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6606a5c
	void *b40d60a3ab(struct FRotator* BaseRotation); // Function Engine.AnimInstance.*b40d60a3ab // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65ee004
	void *9c286a1dd6(); // Function Engine.AnimInstance.*9c286a1dd6 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66391a0
	struct UAnimMontage* *8f5e8caa01(); // Function Engine.AnimInstance.*8f5e8caa01 // Final|Native|Public|BlueprintCallable // @ game+0x66169e8
	void *35d3016b0e(struct FName* SyncGroup); // Function Engine.AnimInstance.*35d3016b0e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6609f70
	int32 *a1cdf92d33(); // Function Engine.AnimInstance.*a1cdf92d33 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x66005e4
	int32 *7b1d412206(); // Function Engine.AnimInstance.*7b1d412206 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6600068
	void *50d1a575e9(); // Function Engine.AnimInstance.*50d1a575e9 // Native|Public|HasOutParms|BlueprintCallable // @ game+0x6632474
	void *9113d38401(struct UAnimMontage** Montage); // Function Engine.AnimInstance.*9113d38401 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6616430
	int32 *c6aa635ece(); // Function Engine.AnimInstance.*c6aa635ece // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6600c90
	struct FName *5ae2ffaa34(); // Function Engine.AnimInstance.*5ae2ffaa34 // Final|Native|Public|BlueprintCallable // @ game+0x662a674
	void *9f4159a1c0(int32* StateIndex); // Function Engine.AnimInstance.*9f4159a1c0 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x2f24f8
	void *516889ae6d(int32* MachineIndex); // Function Engine.AnimInstance.*516889ae6d // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x66045a8
	int32 *b71ba1b5fb(); // Function Engine.AnimInstance.*b71ba1b5fb // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6600244
	void *61c86306be(struct UAnimSequenceBase** Asset); // Function Engine.AnimInstance.*61c86306be // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x660c1a0
	void GetCurrentStateElapsedTime(); // Function Engine.AnimInstance.GetCurrentStateElapsedTime // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x65fe484
	int32 *e403a62386(); // Function Engine.AnimInstance.*e403a62386 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x660117c
	void BlueprintUpdateAnimation(); // Function Engine.AnimInstance.BlueprintUpdateAnimation // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void *cfc2a4c7e9(); // Function Engine.AnimInstance.*cfc2a4c7e9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65fe09c
	void *60dd5a4893(); // Function Engine.AnimInstance.*60dd5a4893 // Final|Native|Public|BlueprintCallable // @ game+0x662c538
	float GetAnimAssetPlayerTimeFromEnd(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x65fca1c
	struct FName *c1dab9bbb4(struct FName* NextSection); // Function Engine.AnimInstance.*c1dab9bbb4 // Native|Public|BlueprintCallable // @ game+0x58ec8dc
	void BlueprintInitializeAnimation(); // Function Engine.AnimInstance.BlueprintInitializeAnimation // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void GetAnimAssetPlayerTimeFromEndFraction(struct UAnimationAsset** AnimAsset); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65fcb20
	void *d764287b5e(); // Function Engine.AnimInstance.*d764287b5e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x660ba5c
	struct UAnimSequenceBase* PlaySlotAnimation(struct FName* SlotNodeName, float* BlendOutTime, int32* LoopCount); // Function Engine.AnimInstance.PlaySlotAnimation // Final|Native|Public|BlueprintCallable // @ game+0x661a48c
	void *9607422949(); // Function Engine.AnimInstance.*9607422949 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6603458
	int32 *504e9f6ebf(); // Function Engine.AnimInstance.*504e9f6ebf // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x977294
	void GetStateWeight(int32* StateIndex); // Function Engine.AnimInstance.GetStateWeight // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6605e84
	void *89bd946387(); // Function Engine.AnimInstance.*89bd946387 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6611fa4
	int32 *cc84762a5a(); // Function Engine.AnimInstance.*cc84762a5a // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6600420
	struct UAnimMontage* *dc552bfa63(); // Function Engine.AnimInstance.*dc552bfa63 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x661656c
	void *484b63942a(struct FName* InSyncGroupName, struct FName* NextMarker); // Function Engine.AnimInstance.*484b63942a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x660c728
	struct UAnimMontage* *7ddaa5c7cb(); // Function Engine.AnimInstance.*7ddaa5c7cb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x661674c
	float *63c56d3338(); // Function Engine.AnimInstance.*63c56d3338 // Native|Public|BlueprintCallable // @ game+0xbe27a8
	void *3e3e5841ae(int32* MachineIndex); // Function Engine.AnimInstance.*3e3e5841ae // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x976fe0
	bool *5b379fddd3(); // Function Engine.AnimInstance.*5b379fddd3 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6611fa4
	void *18cf7a25ea(); // Function Engine.AnimInstance.*18cf7a25ea // Final|Native|Public|BlueprintCallable // @ game+0x66168c8
	void BlueprintPostEvaluateAnimation(); // Function Engine.AnimInstance.BlueprintPostEvaluateAnimation // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void *feeeff43b3(); // Function Engine.AnimInstance.*feeeff43b3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xcc2d5c
	float Montage_Play(); // Function Engine.AnimInstance.Montage_Play // Native|Public|BlueprintCallable // @ game+0x776b48
	void *8e0d490c68(int32* MachineIndex); // Function Engine.AnimInstance.*8e0d490c68 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x660437c
	void *a370694256(int32* MachineIndex); // Function Engine.AnimInstance.*a370694256 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x660099c
	void *44662a9bc1(); // Function Engine.AnimInstance.*44662a9bc1 // Final|Native|Public|BlueprintCallable // @ game+0x6616958
	int32 *c4fc059f80(); // Function Engine.AnimInstance.*c4fc059f80 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6601390
	void *4f5ff7b06c(); // Function Engine.AnimInstance.*4f5ff7b06c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6606394
	void *9f48e4fa70(); // Function Engine.AnimInstance.*9f48e4fa70 // Native|Public|BlueprintCallable // @ game+0x58ec67c
	float PlaySlotAnimationAsDynamicMontage(int32* LoopCount, float* InTimeToStartMontageAt); // Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage // Final|Native|Public|BlueprintCallable // @ game+0x661a6b0
	int32 *97cd00756e(); // Function Engine.AnimInstance.*97cd00756e // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6604168
	void *41e1acbaff(); // Function Engine.AnimInstance.*41e1acbaff // Native|Public|BlueprintCallable // @ game+0x661f74c
	void *b538b022ef(struct FName* CurveName); // Function Engine.AnimInstance.*b538b022ef // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x776404
};

// Class Engine.ActorComponent
// Size: 0x1f0 (Inherited: 0x28)
struct UActorComponent : UObject {
	char pad_28[0xe8]; // 0x28(0xe8)
	struct F*0f0451e91e PrimaryComponentTick[0x58]; // 0x110(0x58)
	struct TArray<struct FName> ComponentTags[0x10]; // 0x168(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData[0x10]; // 0x178(0x10)
	char pad_188_0 : 3; // 0x188(0x01)
	char bReplicates : 1; // 0x188(0x01)
	char bNetAddressable : 1; // 0x188(0x01)
	char *eb9a7c0234 : 1; // 0x188(0x01)
	char pad_188_6 : 2; // 0x188(0x01)
	char pad_189[0x1]; // 0x189(0x01)
	char pad_18A_0 : 2; // 0x18a(0x01)
	char bCreatedByConstructionScript : 1; // 0x18a(0x01)
	char bInstanceComponent : 1; // 0x18a(0x01)
	char bAutoActivate : 1; // 0x18a(0x01)
	char *a0e3b46900 : 1; // 0x18a(0x01)
	char *f5528674d0 : 1; // 0x18a(0x01)
	char pad_18A_7 : 1; // 0x18a(0x01)
	char pad_18B[0x1]; // 0x18b(0x01)
	struct FGuid DestructibleId[0x10]; // 0x18c(0x10)
	bool bIsDestroyedVersion; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	char *4104c47be9 : 1; // 0x1a0(0x01)
	char pad_1A0_1 : 2; // 0x1a0(0x01)
	char bIsEditorOnly : 1; // 0x1a0(0x01)
	char pad_1A0_4 : 4; // 0x1a0(0x01)
	char pad_1A1[0x4]; // 0x1a1(0x04)
	enum class EComponentCreationMethod CreationMethod; // 0x1a5(0x01)
	enum class EPendingCreationType *b5609ab139; // 0x1a6(0x01)
	char pad_1A7[0x9]; // 0x1a7(0x09)
	struct TArray<struct FSimpleMemberReference> *146dc34f04[0x10]; // 0x1b0(0x10)
	struct FMulticastDelegate OnComponentActivated[0x10]; // 0x1c0(0x10)
	struct FMulticastDelegate OnComponentDeactivated[0x10]; // 0x1d0(0x10)
	char pad_1E0[0x9]; // 0x1e0(0x09)
	char *cf80e92dfd : 1; // 0x1e9(0x01)
	char pad_1E9_1 : 7; // 0x1e9(0x01)
	char pad_1EA[0x6]; // 0x1ea(0x06)

	void *8c98ce177e(); // Function Engine.ActorComponent.*8c98ce177e // Final|Native|Public|BlueprintCallable // @ game+0x65cf7dc
	void *1f22ea7014(); // Function Engine.ActorComponent.*1f22ea7014 // Native|Public|BlueprintCallable // @ game+0x6079ae8
	void *785b4984be(); // Function Engine.ActorComponent.*785b4984be // Native|Public|BlueprintCallable // @ game+0x65da068
	void IsActive(); // Function Engine.ActorComponent.IsActive // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x58ccedc
	void ReceiveBeginPlay(); // Function Engine.ActorComponent.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void *1a019a9e51(); // Function Engine.ActorComponent.*1a019a9e51 // Native|Public|BlueprintCallable // @ game+0x65d84b4
	void *da68cb3372(); // Function Engine.ActorComponent.*da68cb3372 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7324
	void *0d8e3f17b7(); // Function Engine.ActorComponent.*0d8e3f17b7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc524
	void AddTickPrerequisiteActor(); // Function Engine.ActorComponent.AddTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x65be400
	void *d4ab759ea6(); // Function Engine.ActorComponent.*d4ab759ea6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc858cc
	void *00b640eb07(); // Function Engine.ActorComponent.*00b640eb07 // Native|Public|BlueprintCallable // @ game+0x65be528
	void OnRep_IsActive(); // Function Engine.ActorComponent.OnRep_IsActive // Final|Native|Public // @ game+0x65d31d0
	void Deactivate(); // Function Engine.ActorComponent.Deactivate // Native|Public|BlueprintCallable // @ game+0x6b9194
	void *5ef1f9adbd(); // Function Engine.ActorComponent.*5ef1f9adbd // Native|Public|BlueprintCallable // @ game+0x65d486c
	void *5ad1d3c9a1(); // Function Engine.ActorComponent.*5ad1d3c9a1 // Native|Public|BlueprintCallable // @ game+0x65d4744
	void *ea49bd0d03(); // Function Engine.ActorComponent.*ea49bd0d03 // Final|Native|Public|BlueprintCallable // @ game+0x65da100
	void *2aaaa32fa0(); // Function Engine.ActorComponent.*2aaaa32fa0 // Final|Native|Public|BlueprintCallable // @ game+0x65dd814
	void ReceiveEndPlay(); // Function Engine.ActorComponent.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct FName *8a0aedbeac(); // Function Engine.ActorComponent.*8a0aedbeac // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c229c
	void ReceiveTick(); // Function Engine.ActorComponent.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void *750dd6d1b4(); // Function Engine.ActorComponent.*750dd6d1b4 // Final|Native|Public|BlueprintCallable // @ game+0x65dd6f0
	void Activate(); // Function Engine.ActorComponent.Activate // Native|Public|BlueprintCallable // @ game+0xda134c
	void *8ebaaa3f1c(); // Function Engine.ActorComponent.*8ebaaa3f1c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc65c
	void *daf95a6d0f(); // Function Engine.ActorComponent.*daf95a6d0f // Final|Native|Public|BlueprintCallable // @ game+0x65db5c0
	void *d16a426ed5(); // Function Engine.ActorComponent.*d16a426ed5 // Native|Public|BlueprintCallable // @ game+0x65d78bc
};

// Class Engine.Pawn
// Size: 0x448 (Inherited: 0x3e8)
struct APawn : AActor {
	char pad_3E8[0x8]; // 0x3e8(0x08)
	char bUseControllerRotationPitch : 1; // 0x3f0(0x01)
	char bUseControllerRotationYaw : 1; // 0x3f0(0x01)
	char bUseControllerRotationRoll : 1; // 0x3f0(0x01)
	char bCanAffectNavigationGeneration : 1; // 0x3f0(0x01)
	char pad_3F0_4 : 4; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	float BaseEyeHeight[0x04]; // 0x3f4(0x04)
	enum class EAutoReceiveInput AutoPossessPlayer; // 0x3f8(0x01)
	enum class EAutoPossessAI *637d6226e2; // 0x3f9(0x01)
	char pad_3FA[0x6]; // 0x3fa(0x06)
	struct UClass* AIControllerClass[0x08]; // 0x400(0x08)
	struct AController* *ae51997ba6[0x08]; // 0x408(0x08)
	struct APlayerState* PlayerState[0x08]; // 0x410(0x08)
	char pad_418[0x8]; // 0x418(0x08)
	struct AController* Controller[0x08]; // 0x420(0x08)
	uint16 *b10f56f1ec[0x02]; // 0x428(0x02)
	char pad_42A[0x6]; // 0x42a(0x06)
	struct FVector *814ccd4912[0x0c]; // 0x430(0x0c)
	struct FVector *3f76097423[0x0c]; // 0x43c(0x0c)

	void *32c30cb7ba(); // Function Engine.Pawn.*32c30cb7ba // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65c26b4
	void OnRep_PlayerState(); // Function Engine.Pawn.OnRep_PlayerState // Native|Public // @ game+0xa5db94
	void *e0a9fcbfb7(); // Function Engine.Pawn.*e0a9fcbfb7 // Native|Public|BlueprintCallable // @ game+0x5875394
	void AddControllerPitchInput(); // Function Engine.Pawn.AddControllerPitchInput // Native|Public|BlueprintCallable // @ game+0x65bc95c
	void *acf54802ff(bool bNewValue); // Function Engine.Pawn.*acf54802ff // Final|Native|Public|BlueprintCallable // @ game+0x65d9544
	void GetController(); // Function Engine.Pawn.GetController // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7610
	void *daec38650f(); // Function Engine.Pawn.*daec38650f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cabfc
	void *cd2880c3b9(); // Function Engine.Pawn.*cd2880c3b9 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc06cb4
	void *ce2d089123(); // Function Engine.Pawn.*ce2d089123 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5879b74
	void ReceiveUnpossessed(); // Function Engine.Pawn.ReceiveUnpossessed // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	bool *36a58cc031(); // Function Engine.Pawn.*36a58cc031 // Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d342c
	void K2_GetMovementInputVector(); // Function Engine.Pawn.K2_GetMovementInputVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cabfc
	void GetControlRotation(); // Function Engine.Pawn.GetControlRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c75dc
	bool *ecf94bc62e(); // Function Engine.Pawn.*ecf94bc62e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d2814
	struct APawn* *f4052479f6(); // Function Engine.Pawn.*f4052479f6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65c9f38
	void AddControllerYawInput(); // Function Engine.Pawn.AddControllerYawInput // Native|Public|BlueprintCallable // @ game+0x65bca94
	void *c4dd205927(); // Function Engine.Pawn.*c4dd205927 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c97b4
	void ReceivePossessed(); // Function Engine.Pawn.ReceivePossessed // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void *c2917ac77a(); // Function Engine.Pawn.*c2917ac77a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc688
	void OnRep_Controller(); // Function Engine.Pawn.OnRep_Controller // Native|Public // @ game+0x58f036c
	void *7f9978cc5d(); // Function Engine.Pawn.*7f9978cc5d // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c6208
	void *5169d06c8f(); // Function Engine.Pawn.*5169d06c8f // Native|Public|BlueprintCallable // @ game+0x65de9a8
	float *8abf75d769(); // Function Engine.Pawn.*8abf75d769 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65bdb88
	void AddControllerRollInput(); // Function Engine.Pawn.AddControllerRollInput // Native|Public|BlueprintCallable // @ game+0x65bc9f8
	void *c6dcfd395c(); // Function Engine.Pawn.*c6dcfd395c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x58ab078
	void *796d6f386f(); // Function Engine.Pawn.*796d6f386f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ccc00
	void *8bf01eefd9(); // Function Engine.Pawn.*8bf01eefd9 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65ca070
};

// Class Engine.DataAsset
// Size: 0x30 (Inherited: 0x28)
struct UDataAsset : UObject {
	struct UClass* *10becfdadd[0x08]; // 0x28(0x08)
};

// Class Engine.SceneComponent
// Size: 0x4d0 (Inherited: 0x1f0)
struct USceneComponent : UActorComponent {
	char pad_1F0[0x8]; // 0x1f0(0x08)
	struct FVector *9a43cb5eb0[0x0c]; // 0x1f8(0x0c)
	enum class EComponentMobility Mobility; // 0x204(0x01)
	char pad_205[0xb]; // 0x205(0x0b)
	char pad_210_0 : 1; // 0x210(0x01)
	char bReplicatesAttachmentReference : 1; // 0x210(0x01)
	char bReplicatesAttachment : 1; // 0x210(0x01)
	char *7edcd61a27 : 1; // 0x210(0x01)
	char pad_210_4 : 1; // 0x210(0x01)
	char bAbsoluteLocation : 1; // 0x210(0x01)
	char bAbsoluteRotation : 1; // 0x210(0x01)
	char bAbsoluteScale : 1; // 0x210(0x01)
	char bVisible : 1; // 0x211(0x01)
	char bHiddenInGame : 1; // 0x211(0x01)
	char bShouldUpdatePhysicsVolume : 1; // 0x211(0x01)
	char *24ea2d2db6 : 1; // 0x211(0x01)
	char bUseAttachParentBound : 1; // 0x211(0x01)
	char bEnableInsensitiveUpdate : 1; // 0x211(0x01)
	char pad_211_6 : 2; // 0x211(0x01)
	char pad_212[0x2e]; // 0x212(0x2e)
	char bAbsoluteTranslation : 1; // 0x240(0x01)
	char pad_240_1 : 7; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	struct APhysicsVolume* PhysicsVolume[0x08]; // 0x244(0x08)
	char pad_24C[0x20]; // 0x24c(0x20)
	struct FVector RelativeLocation[0x0c]; // 0x26c(0x0c)
	char pad_278[0x28]; // 0x278(0x28)
	enum class *8d98cbd81d DetailMode; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	SetProperty *e5b54241ae[0x50]; // 0x2a8(0x50)
	char pad_2F8[0x28]; // 0x2f8(0x28)
	struct TArray<struct USceneComponent*> AttachChildren[0x10]; // 0x320(0x10)
	char pad_330[0x40]; // 0x330(0x40)
	struct FVector RelativeTranslation[0x0c]; // 0x370(0x0c)
	struct FVector RelativeScale3D[0x0c]; // 0x37c(0x0c)
	struct FRotator RelativeRotation[0x0c]; // 0x388(0x0c)
	char pad_394[0x4]; // 0x394(0x04)
	struct FName *d373ab65c0[0x08]; // 0x398(0x08)
	struct USceneComponent* AttachParent[0x08]; // 0x3a0(0x08)
	struct FMulticastDelegate PhysicsVolumeChangedDelegate[0x10]; // 0x3a8(0x10)
	struct FMulticastDelegate AttachmentChangedDelegate[0x10]; // 0x3b8(0x10)
	char pad_3C8[0x108]; // 0x3c8(0x108)

	void *13433cbc36(); // Function Engine.SceneComponent.*13433cbc36 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c5fec
	int32 *b37ee9a628(); // Function Engine.SceneComponent.*b37ee9a628 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c6e1c
	void *3042ae5482(); // Function Engine.SceneComponent.*3042ae5482 // Final|Native|Public|BlueprintCallable // @ game+0x65db488
	struct FHitResult K2_SetWorldLocation(); // Function Engine.SceneComponent.K2_SetWorldLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d1db0
	void *9880b8ac03(); // Function Engine.SceneComponent.*9880b8ac03 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x59258e8
	void *616a4bc95d(); // Function Engine.SceneComponent.*616a4bc95d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xc2f560
	void *d1e160453f(struct FName* InSocketName); // Function Engine.SceneComponent.*d1e160453f // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cb448
	void OnRep_AttachSocketName(); // Function Engine.SceneComponent.OnRep_AttachSocketName // Final|Native|Private // @ game+0xb023a4
	void *00805e15a0(); // Function Engine.SceneComponent.*00805e15a0 // Final|Native|Public|BlueprintCallable // @ game+0x65d4930
	void *b65feeef3f(); // Function Engine.SceneComponent.*b65feeef3f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cfe68
	void ToggleVisibility(); // Function Engine.SceneComponent.ToggleVisibility // Final|Native|Public|BlueprintCallable // @ game+0x65df618
	void K2_AddRelativeRotation(bool bSweep); // Function Engine.SceneComponent.K2_AddRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65ce4c4
	struct FHitResult K2_SetRelativeRotation(); // Function Engine.SceneComponent.K2_SetRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d19ac
	void K2_GetComponentToWorld(); // Function Engine.SceneComponent.K2_GetComponentToWorld // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cfeac
	void *acf5999592(); // Function Engine.SceneComponent.*acf5999592 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cb390
	void *3c6ecb02cb(); // Function Engine.SceneComponent.*3c6ecb02cb // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cb0cc
	struct FHitResult K2_AddWorldTransform(); // Function Engine.SceneComponent.K2_AddWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65cea40
	void *b7202f79f2(); // Function Engine.SceneComponent.*b7202f79f2 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65caaec
	struct FHitResult K2_SetRelativeLocation(); // Function Engine.SceneComponent.K2_SetRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d15b0
	bool K2_AddWorldOffset(struct FHitResult* SweepHitResult); // Function Engine.SceneComponent.K2_AddWorldOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65ce690
	void *6948fa2e48(); // Function Engine.SceneComponent.*6948fa2e48 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7d28
	void *50da2f3057(); // Function Engine.SceneComponent.*50da2f3057 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cfde4
	bool *f6d44887dc(); // Function Engine.SceneComponent.*f6d44887dc // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c6ebc
	void IsVisible(); // Function Engine.SceneComponent.IsVisible // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cd04c
	void SetVisibility(bool bNewVisibility); // Function Engine.SceneComponent.SetVisibility // Final|Native|Public|BlueprintCallable // @ game+0xc7cd64
	struct FHitResult K2_AddRelativeLocation(); // Function Engine.SceneComponent.K2_AddRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65ce2f8
	struct FRotator K2_AddWorldRotation(bool bSweep); // Function Engine.SceneComponent.K2_AddWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65ce868
	void *ed9b4c17e2(); // Function Engine.SceneComponent.*ed9b4c17e2 // Final|Native|Public|BlueprintCallable // @ game+0x65db524
	void *38d51f9159(); // Function Engine.SceneComponent.*38d51f9159 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ca27c
	struct FName *f414cfd93b(enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, bool bWeldSimulatedBodies); // Function Engine.SceneComponent.*f414cfd93b // Final|Native|Public|BlueprintCallable // @ game+0x65cf30c
	bool K2_AttachTo(); // Function Engine.SceneComponent.K2_AttachTo // Final|Native|Public|BlueprintCallable // @ game+0x65cef6c
	void *efd3807eb2(struct FName* InSocketName); // Function Engine.SceneComponent.*efd3807eb2 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c33ac
	void *438a5949ee(struct FName* BoneName); // Function Engine.SceneComponent.*438a5949ee // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x59072f4
	struct FHitResult K2_AddLocalRotation(); // Function Engine.SceneComponent.K2_AddLocalRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65cdef4
	void *444c1212e4(); // Function Engine.SceneComponent.*444c1212e4 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc4fc
	void OnRep_AttachParent(); // Function Engine.SceneComponent.OnRep_AttachParent // Final|Native|Private // @ game+0xb023a4
	void *e779c0903a(); // Function Engine.SceneComponent.*e779c0903a // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cb228
	void OnRep_Visibility(); // Function Engine.SceneComponent.OnRep_Visibility // Final|Native|Private // @ game+0x65d32c4
	bool DetachFromParent(); // Function Engine.SceneComponent.DetachFromParent // Native|Public|BlueprintCallable // @ game+0x65c3178
	void *21f58f1be6(); // Function Engine.SceneComponent.*21f58f1be6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xcffed8
	void *64a21ee5e3(struct FVector* NewLocation, bool bSweep); // Function Engine.SceneComponent.*64a21ee5e3 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d177c
	struct FName *e13883b81c(); // Function Engine.SceneComponent.*e13883b81c // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cb2e0
	void *4b5116dfbb(); // Function Engine.SceneComponent.*4b5116dfbb // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c733c
	void *5ce6cd6a9b(); // Function Engine.SceneComponent.*5ce6cd6a9b // Native|Public|HasDefaults|BlueprintCallable // @ game+0xc3b0c8
	void *b0520f213c(); // Function Engine.SceneComponent.*b0520f213c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cb060
	struct FHitResult K2_SetRelativeTransform(); // Function Engine.SceneComponent.K2_SetRelativeTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d1b84
	void *56cf68d820(bool bNewAbsoluteRotation); // Function Engine.SceneComponent.*56cf68d820 // Final|Native|Public|BlueprintCallable // @ game+0x65d7778
	enum class *c67378b5c9 *9917bfece4(); // Function Engine.SceneComponent.*9917bfece4 // Final|Native|Public|BlueprintCallable // @ game+0x725820
	void OnRep_AttachChildren(); // Function Engine.SceneComponent.OnRep_AttachChildren // Final|Native|Private // @ game+0xb57df8
	void K2_SetWorldRotation(struct FRotator* NewRotation, struct FHitResult* SweepHitResult); // Function Engine.SceneComponent.K2_SetWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d21b8
	void *f6dcf1f073(); // Function Engine.SceneComponent.*f6dcf1f073 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65de4ac
	bool *5822caec90(); // Function Engine.SceneComponent.*5822caec90 // Final|Native|Public|BlueprintCallable // @ game+0x65db1b0
	void *d0e066f51a(struct FVector* NewLocation, bool bSweep); // Function Engine.SceneComponent.*d0e066f51a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d1f88
	void *17ae5231cf(); // Function Engine.SceneComponent.*17ae5231cf // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cbc4c
	struct FName *5196502450(); // Function Engine.SceneComponent.*5196502450 // Final|Native|Public|BlueprintCallable // @ game+0x65de8a0
	void OnRep_Transform(); // Function Engine.SceneComponent.OnRep_Transform // Final|Native|Private // @ game+0xab1624
	void K2_AddLocalTransform(bool bSweep); // Function Engine.SceneComponent.K2_AddLocalTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65ce0cc
	void *0f7e9a03af(); // Function Engine.SceneComponent.*0f7e9a03af // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cae58
	struct FHitResult K2_AddLocalOffset(); // Function Engine.SceneComponent.K2_AddLocalOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65cdd1c
	void K2_SetWorldTransform(bool bSweep); // Function Engine.SceneComponent.K2_SetWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d2390
};

// Class Engine.PrimitiveComponent
// Size: 0xa00 (Inherited: 0x4d0)
struct UPrimitiveComponent : USceneComponent {
	char pad_4D0[0x8]; // 0x4d0(0x08)
	float MinDrawDistance[0x04]; // 0x4d8(0x04)
	float LDMaxDrawDistance[0x04]; // 0x4dc(0x04)
	float CachedMaxDrawDistance[0x04]; // 0x4e0(0x04)
	enum class *aa5951ad16 *beac6f3512; // 0x4e4(0x01)
	enum class *aa5951ad16 *c05f331378; // 0x4e5(0x01)
	char pad_4E6[0x2]; // 0x4e6(0x02)
	char pad_4E8_0 : 3; // 0x4e8(0x01)
	char bAlwaysCreatePhysicsState : 1; // 0x4e8(0x01)
	char bGenerateOverlapEvents : 1; // 0x4e8(0x01)
	char bMultiBodyOverlap : 1; // 0x4e8(0x01)
	char bCheckAsyncSceneOnMove : 1; // 0x4e8(0x01)
	char bTraceComplexOnMove : 1; // 0x4e8(0x01)
	char bDisableForceFromCharacter : 1; // 0x4e9(0x01)
	char bReturnMaterialOnMove : 1; // 0x4e9(0x01)
	char *7d72c87c3b : 1; // 0x4e9(0x01)
	char bAllowCullDistanceVolume : 1; // 0x4e9(0x01)
	char bImportantMesh : 1; // 0x4e9(0x01)
	char bOverrideCullingDistances : 1; // 0x4e9(0x01)
	char pad_4E9_6 : 2; // 0x4e9(0x01)
	char pad_4EA[0x2]; // 0x4ea(0x02)
	float HLODScreenSize[0x04]; // 0x4ec(0x04)
	char *5e4ce749ad : 1; // 0x4f0(0x01)
	char bVisibleInReflectionCaptures : 1; // 0x4f0(0x01)
	char bRenderInMainPass : 1; // 0x4f0(0x01)
	char bRenderInMono : 1; // 0x4f0(0x01)
	char bOwnerNoSee : 1; // 0x4f0(0x01)
	char bOnlyOwnerSee : 1; // 0x4f0(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x4f0(0x01)
	char bUseAsOccluder : 1; // 0x4f0(0x01)
	char bForceAsOccluder : 1; // 0x4f1(0x01)
	char bForceOcclusionQuerying : 1; // 0x4f1(0x01)
	char bForceDisableOcclusionQuerying : 1; // 0x4f1(0x01)
	char *5be8cbe28b : 1; // 0x4f1(0x01)
	char bForceMipStreaming : 1; // 0x4f1(0x01)
	char *df83a74442 : 1; // 0x4f1(0x01)
	char pad_4F1_6 : 1; // 0x4f1(0x01)
	char CastShadow : 1; // 0x4f1(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x4f2(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x4f2(0x01)
	char bCastDynamicShadow : 1; // 0x4f2(0x01)
	char bCastStaticShadow : 1; // 0x4f2(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x4f2(0x01)
	char bSelfShadowOnly : 1; // 0x4f2(0x01)
	char bCastFarShadow : 1; // 0x4f2(0x01)
	char bCastInsetShadow : 1; // 0x4f2(0x01)
	char bCastCinematicShadow : 1; // 0x4f3(0x01)
	char bCastHiddenShadow : 1; // 0x4f3(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4f3(0x01)
	char bLightAsIfStatic : 1; // 0x4f3(0x01)
	char bLightAttachmentsAsGroup : 1; // 0x4f3(0x01)
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x4f3(0x01)
	char bSingleSampleShadowFromStationaryLights : 1; // 0x4f3(0x01)
	char bIgnoreRadialImpulse : 1; // 0x4f3(0x01)
	char bIgnoreRadialForce : 1; // 0x4f4(0x01)
	char bApplyImpulseOnDamage : 1; // 0x4f4(0x01)
	char bSyncBodySleep : 1; // 0x4f4(0x01)
	char *c4dba7907d : 1; // 0x4f4(0x01)
	char *9a602298e0 : 1; // 0x4f4(0x01)
	char *8a825352a8 : 1; // 0x4f4(0x01)
	char bRenderCustomDepth : 1; // 0x4f4(0x01)
	char pad_4F4_7 : 1; // 0x4f4(0x01)
	char pad_4F5_0 : 7; // 0x4f5(0x01)
	char *f0ec410b1c : 1; // 0x4f5(0x01)
	char *e465b784ab : 1; // 0x4f6(0x01)
	char *0566bc7293 : 1; // 0x4f6(0x01)
	char pad_4F6_2 : 6; // 0x4f6(0x01)
	char pad_4F7[0x1]; // 0x4f7(0x01)
	enum class EDecalChannel DecalChannel; // 0x4f8(0x01)
	enum class *a6cf5bae1a IndoorOutdoorMask; // 0x4f9(0x01)
	struct FLightingChannels LightingChannels[0x03]; // 0x4fa(0x03)
	enum class *8421afef2f IndirectLightingCacheQuality; // 0x4fd(0x01)
	bool CustomDepthStencilValue; // 0x4fe(0x01)
	enum class *dc75936d4b CustomDepthStencilWriteMask; // 0x4ff(0x01)
	struct TArray<enum class ECollisionChannel> IgnoreCollisionMaskOnSweep[0x10]; // 0x500(0x10)
	int32 TranslucencySortPriority[0x04]; // 0x510(0x04)
	int32 *9de4760b7d[0x04]; // 0x514(0x04)
	char pad_518[0x4]; // 0x518(0x04)
	float LpvBiasMultiplier[0x04]; // 0x51c(0x04)
	struct FBodyInstance BodyInstance[0x230]; // 0x520(0x230)
	char pad_750[0x8]; // 0x750(0x08)
	enum class EHasCustomNavigableGeometry *8df498730b; // 0x758(0x01)
	char pad_759[0x3b]; // 0x759(0x3b)
	float BoundsScale[0x04]; // 0x794(0x04)
	float *8e81fad5fc[0x04]; // 0x798(0x04)
	float *c058bd94eb[0x04]; // 0x79c(0x04)
	float *02253285d4[0x04]; // 0x7a0(0x04)
	enum class *2cf50fcfdf CanBeCharacterBase; // 0x7a4(0x01)
	char pad_7A5[0x1]; // 0x7a5(0x01)
	enum class *2cf50fcfdf CanCharacterStepUpOn; // 0x7a6(0x01)
	char pad_7A7[0x1]; // 0x7a7(0x01)
	struct TArray<struct AActor*> *2588299a27[0x10]; // 0x7a8(0x10)
	struct TArray<struct UPrimitiveComponent*> *67a415eac1[0x10]; // 0x7b8(0x10)
	char pad_7C8[0xb8]; // 0x7c8(0xb8)
	struct FMulticastDelegate OnComponentHit[0x10]; // 0x880(0x10)
	struct FMulticastDelegate OnComponentBeginOverlap[0x10]; // 0x890(0x10)
	struct FMulticastDelegate OnComponentEndOverlap[0x10]; // 0x8a0(0x10)
	struct FMulticastDelegate OnComponentWake[0x10]; // 0x8b0(0x10)
	struct FMulticastDelegate OnComponentSleep[0x10]; // 0x8c0(0x10)
	char pad_8D0[0x10]; // 0x8d0(0x10)
	struct FMulticastDelegate OnBeginCursorOver[0x10]; // 0x8e0(0x10)
	struct FMulticastDelegate OnEndCursorOver[0x10]; // 0x8f0(0x10)
	struct FMulticastDelegate OnClicked[0x10]; // 0x900(0x10)
	struct FMulticastDelegate OnReleased[0x10]; // 0x910(0x10)
	struct FMulticastDelegate OnInputTouchBegin[0x10]; // 0x920(0x10)
	struct FMulticastDelegate OnInputTouchEnd[0x10]; // 0x930(0x10)
	struct FMulticastDelegate OnInputTouchEnter[0x10]; // 0x940(0x10)
	struct FMulticastDelegate OnInputTouchLeave[0x10]; // 0x950(0x10)
	char pad_960[0x28]; // 0x960(0x28)
	struct UPrimitiveComponent* *e6a95e2ca0[0x08]; // 0x988(0x08)
	struct UPrimitiveComponent* *7982e5317b[0x08]; // 0x990(0x08)
	struct F*3a1b9f6b9c *601e25c40b[0x58]; // 0x998(0x58)
	char pad_9F0[0x10]; // 0x9f0(0x10)

	void SetAngularDamping(); // Function Engine.PrimitiveComponent.SetAngularDamping // Native|Public|BlueprintCallable // @ game+0x65d8240
	void *dfbae66789(struct FName* BoneName); // Function Engine.PrimitiveComponent.*dfbae66789 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c89c0
	void *0a6204477c(); // Function Engine.PrimitiveComponent.*0a6204477c // Final|Native|Public|BlueprintCallable // @ game+0x65dd044
	void *eb52f532a5(); // Function Engine.PrimitiveComponent.*eb52f532a5 // Final|Native|Public|BlueprintCallable // @ game+0x65c2814
	void *ea3f9e2cf3(); // Function Engine.PrimitiveComponent.*ea3f9e2cf3 // Native|Public|BlueprintCallable // @ game+0xc3d89c
	void *c074a79845(); // Function Engine.PrimitiveComponent.*c074a79845 // Final|Native|Public|BlueprintCallable // @ game+0x65da3c8
	void *6ee3451862(); // Function Engine.PrimitiveComponent.*6ee3451862 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c714c
	void *44a43b0322(); // Function Engine.PrimitiveComponent.*44a43b0322 // Final|Native|Public|BlueprintCallable // @ game+0x65da330
	struct UMaterialInterface* SetMaterial(); // Function Engine.PrimitiveComponent.SetMaterial // Native|Public|BlueprintCallable // @ game+0x65dbcf8
	void *e9ee2ab3a1(); // Function Engine.PrimitiveComponent.*e9ee2ab3a1 // Final|Native|Public|BlueprintCallable // @ game+0x65da458
	void *4e7d139cf0(); // Function Engine.PrimitiveComponent.*4e7d139cf0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d0268
	struct APawn* *5cb343a96e(); // Function Engine.PrimitiveComponent.*5cb343a96e // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65bed34
	void *f94dd47839(); // Function Engine.PrimitiveComponent.*f94dd47839 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d023c
	void *13b1364c95(); // Function Engine.PrimitiveComponent.*13b1364c95 // Native|Public|BlueprintCallable // @ game+0x65cc4d4
	void *b87315fc50(int32* ElementIndex); // Function Engine.PrimitiveComponent.*b87315fc50 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9a54
	struct FName GetPhysicsAngularVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65cac70
	struct UPrimitiveComponent* *2a4abc706a(); // Function Engine.PrimitiveComponent.*2a4abc706a // Final|Native|Public|BlueprintCallable // @ game+0x65cc1e4
	void CreateDynamicMaterialInstance(struct UMaterialInterface** SourceMaterial); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x65c2a7c
	struct FVector AddImpulseAtLocation(); // Function Engine.PrimitiveComponent.AddImpulseAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65bd828
	struct FName *93488147e1(); // Function Engine.PrimitiveComponent.*93488147e1 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65c6cf0
	void SetPhysicsLinearVelocity(struct FVector* NewVel); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xbb3958
	struct FName SetMassScale(); // Function Engine.PrimitiveComponent.SetMassScale // Native|Public|BlueprintCallable // @ game+0x58ece78
	void *30938d503c(); // Function Engine.PrimitiveComponent.*30938d503c // Final|Native|Public|BlueprintCallable // @ game+0x65dda34
	void *379b1e37e1(); // Function Engine.PrimitiveComponent.*379b1e37e1 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65de3d8
	void *21a20b6c62(); // Function Engine.PrimitiveComponent.*21a20b6c62 // Native|Public|BlueprintCallable // @ game+0x65d9cc0
	struct FName AddForce(); // Function Engine.PrimitiveComponent.AddForce // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65bd048
	float *ccd28ea01f(enum class *0baddcb8e4 Falloff); // Function Engine.PrimitiveComponent.*ccd28ea01f // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65bdf28
	void *5b987becac(); // Function Engine.PrimitiveComponent.*5b987becac // Native|Public|BlueprintCallable // @ game+0x7257a4
	struct FName *b8234e2743(); // Function Engine.PrimitiveComponent.*b8234e2743 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65d4e0c
	float *bea52685d2(); // Function Engine.PrimitiveComponent.*bea52685d2 // Native|Public|BlueprintCallable // @ game+0x65dbbcc
	void *30924b231e(); // Function Engine.PrimitiveComponent.*30924b231e // Final|Native|Public|BlueprintCallable // @ game+0x65dc474
	void AddImpulse(struct FVector* Impulse); // Function Engine.PrimitiveComponent.AddImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65bd6e8
	struct FVector AddForceAtLocationLocal(); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65bd2d4
	void GetOverlappingActors(); // Function Engine.PrimitiveComponent.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65ca590
	void SetPhysicsAngularVelocity(struct FVector* NewAngVel); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xc22c24
	enum class ECollisionChannel *465dde8592(); // Function Engine.PrimitiveComponent.*465dde8592 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c71d4
	void *dbe4b0a4e1(); // Function Engine.PrimitiveComponent.*dbe4b0a4e1 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7174
	void *d2ee8cd4c7(); // Function Engine.PrimitiveComponent.*d2ee8cd4c7 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9994
	void *736adad895(); // Function Engine.PrimitiveComponent.*736adad895 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ca3e8
	void CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors // Final|Native|Public|BlueprintCallable // @ game+0x65c278c
	void *fcf556dc5a(); // Function Engine.PrimitiveComponent.*fcf556dc5a // Final|Native|Public|BlueprintCallable // @ game+0x65bf35c
	void *090f50e275(); // Function Engine.PrimitiveComponent.*090f50e275 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c608c
	struct FHitResult K2_LineTraceComponent(struct FVector* TraceStart); // Function Engine.PrimitiveComponent.K2_LineTraceComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d02cc
	void *6071051144(); // Function Engine.PrimitiveComponent.*6071051144 // Native|Public|BlueprintCallable // @ game+0x65ddcd8
	void AddAngularImpulse(struct FVector* Impulse); // Function Engine.PrimitiveComponent.AddAngularImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65bc774
	struct AActor* *fd96d57958(); // Function Engine.PrimitiveComponent.*fd96d57958 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ccd18
	int32 *b3a3c00bbd(); // Function Engine.PrimitiveComponent.*b3a3c00bbd // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9af8
	void *c851d0aa12(); // Function Engine.PrimitiveComponent.*c851d0aa12 // Native|Public|BlueprintCallable // @ game+0x65db95c
	void *3292c0b7df(); // Function Engine.PrimitiveComponent.*3292c0b7df // Native|Public|BlueprintCallable // @ game+0x65d9b94
	void *70595e1cd6(); // Function Engine.PrimitiveComponent.*70595e1cd6 // Final|Native|Public|BlueprintCallable // @ game+0x65bf378
	void SetCollisionObjectType(); // Function Engine.PrimitiveComponent.SetCollisionObjectType // Native|Public|BlueprintCallable // @ game+0x65d9afc
	void *e5ffb56c9a(); // Function Engine.PrimitiveComponent.*e5ffb56c9a // Native|Public|BlueprintCallable // @ game+0x65d9c28
	void *7b7fd27d02(struct FVector* NewAngVel); // Function Engine.PrimitiveComponent.*7b7fd27d02 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d7fb0
	void *256ba244cc(); // Function Engine.PrimitiveComponent.*256ba244cc // Native|Public|BlueprintCallable // @ game+0x65dc3dc
	bool SetPhysicsMaxAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity // Final|Native|Public|BlueprintCallable // @ game+0x65dc7b8
	void *7923455fa2(); // Function Engine.PrimitiveComponent.*7923455fa2 // Final|Native|Public|BlueprintCallable // @ game+0x65dc5c8
	void CreateAndSetMaterialInstanceDynamic(int32* ElementIndex); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic // Native|Public|BlueprintCallable // @ game+0x65c289c
	void *44661dddcf(); // Function Engine.PrimitiveComponent.*44661dddcf // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9834
	void *a652adf220(); // Function Engine.PrimitiveComponent.*a652adf220 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc980
	void *c8a9007ebc(); // Function Engine.PrimitiveComponent.*c8a9007ebc // Final|Native|Public|BlueprintCallable // @ game+0x65d9408
	void *b92ee3b9c0(); // Function Engine.PrimitiveComponent.*b92ee3b9c0 // Native|Public|BlueprintCallable // @ game+0x65df918
	struct UMaterialInterface* CreateAndSetMaterialInstanceDynamicFromMaterial(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial // Native|Public|BlueprintCallable // @ game+0x65c298c
	void GetOverlappingComponents(); // Function Engine.PrimitiveComponent.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65ca788
	void *d4294e3947(); // Function Engine.PrimitiveComponent.*d4294e3947 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ca2b4
	void *009c0f2a1d(); // Function Engine.PrimitiveComponent.*009c0f2a1d // Final|Native|Public|BlueprintCallable // @ game+0x65dcfb0
	struct FName *cdfb4b1220(); // Function Engine.PrimitiveComponent.*cdfb4b1220 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c6ff0
	void SetLinearDamping(); // Function Engine.PrimitiveComponent.SetLinearDamping // Native|Public|BlueprintCallable // @ game+0x65bc9f8
	void AddTorque(struct FName* BoneName); // Function Engine.PrimitiveComponent.AddTorque // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65be5bc
	void *ebf54e58f9(); // Function Engine.PrimitiveComponent.*ebf54e58f9 // Native|Public|BlueprintCallable // @ game+0x65da198
	void *6dba8b25b2(); // Function Engine.PrimitiveComponent.*6dba8b25b2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc020
	void *fc6fe4c940(); // Function Engine.PrimitiveComponent.*fc6fe4c940 // Final|Native|Public|BlueprintCallable // @ game+0x65c719c
	void *3d4f5f6da1(); // Function Engine.PrimitiveComponent.*3d4f5f6da1 // Final|Native|Public|BlueprintCallable // @ game+0x65cc104
	void *794ecded84(); // Function Engine.PrimitiveComponent.*794ecded84 // Native|Public|BlueprintCallable // @ game+0x65dc724
	void *e83e82c836(); // Function Engine.PrimitiveComponent.*e83e82c836 // Native|Public|BlueprintCallable // @ game+0x65df900
	struct FName *fb3c2a98a1(); // Function Engine.PrimitiveComponent.*fb3c2a98a1 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65cad20
	void *e336185bf8(); // Function Engine.PrimitiveComponent.*e336185bf8 // Final|Native|Public|BlueprintCallable // @ game+0x65d438c
	void *da08b8ba8d(); // Function Engine.PrimitiveComponent.*da08b8ba8d // Native|Public|BlueprintCallable // @ game+0x65da708
	void *473e1da61e(); // Function Engine.PrimitiveComponent.*473e1da61e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ccdb8
	struct FVector SetCenterOfMass(); // Function Engine.PrimitiveComponent.SetCenterOfMass // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d978c
	void GetMass(); // Function Engine.PrimitiveComponent.GetMass // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9968
	void *78f7d5ad87(float* Radius, enum class *0baddcb8e4 Falloff); // Function Engine.PrimitiveComponent.*78f7d5ad87 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65be0fc
	void *e2737e7e29(); // Function Engine.PrimitiveComponent.*e2737e7e29 // Final|Native|Public|BlueprintCallable // @ game+0x65d9660
	struct FVector SetAllPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d80a8
	void *9594116b12(); // Function Engine.PrimitiveComponent.*9594116b12 // Final|Native|Public|BlueprintCallable // @ game+0x65dcf1c
	void *bf796448cc(struct FName* MaterialSlotName); // Function Engine.PrimitiveComponent.*bf796448cc // Native|Public|BlueprintCallable // @ game+0x65dbe1c
	void *5aa27e0388(); // Function Engine.PrimitiveComponent.*5aa27e0388 // Native|Public|BlueprintCallable // @ game+0x65d2f88
	void *b9d962ff83(); // Function Engine.PrimitiveComponent.*b9d962ff83 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d0298
	void AddForceAtLocation(struct FVector* Location); // Function Engine.PrimitiveComponent.AddForceAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65bd188
	void GetPhysicsLinearVelocity(struct FName* BoneName); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xc81138
	void *84914014a9(); // Function Engine.PrimitiveComponent.*84914014a9 // Native|Public|BlueprintCallable // @ game+0x65d81a8
};

// Class Engine.MeshComponent
// Size: 0xb00 (Inherited: 0xa00)
struct UMeshComponent : UPrimitiveComponent {
	struct TArray<struct UMaterialInterface*> OverrideMaterials[0x10]; // 0x9f8(0x10)
	char pad_A10[0xf0]; // 0xa10(0xf0)

	void *489b9cbe67(); // Function Engine.MeshComponent.*489b9cbe67 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9c44
	void *0b87d25dc2(); // Function Engine.MeshComponent.*0b87d25dc2 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9cd0
	struct FName *b78c042dcb(); // Function Engine.MeshComponent.*b78c042dcb // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xb8e0c0
	struct FName *199deabfb3(); // Function Engine.MeshComponent.*199deabfb3 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9b9c
	void *1aad846c30(struct FName* ParameterName); // Function Engine.MeshComponent.*1aad846c30 // Final|Native|Public|BlueprintCallable // @ game+0x7762b8
	struct FName *84436b1e1a(); // Function Engine.MeshComponent.*84436b1e1a // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ccb30
};

// Class Engine.StaticMeshComponent
// Size: 0xba0 (Inherited: 0xb00)
struct UStaticMeshComponent : UMeshComponent {
	int32 ForcedLodModel[0x04]; // 0xb00(0x04)
	int32 *90bd71ffae[0x04]; // 0xb04(0x04)
	bool bOverrideMinLOD; // 0xb08(0x01)
	char pad_B09[0x3]; // 0xb09(0x03)
	int32 MinLOD[0x04]; // 0xb0c(0x04)
	struct UStaticMesh* StaticMesh[0x08]; // 0xb10(0x08)
	bool bOverrideWireframeColor; // 0xb18(0x01)
	char pad_B19[0x3]; // 0xb19(0x03)
	struct FColor WireframeColorOverride[0x04]; // 0xb1c(0x04)
	struct FLinearColor PerInstanceCustomData[0x10]; // 0xb20(0x10)
	char *7e2d9548d8 : 1; // 0xb30(0x01)
	char *8338f52a12 : 1; // 0xb30(0x01)
	char bDisallowMeshPaintPerInstance : 1; // 0xb30(0x01)
	char *1ee48c2b08 : 1; // 0xb30(0x01)
	char bIgnoreInstanceForTextureStreaming : 1; // 0xb30(0x01)
	char bOverrideLightMapRes : 1; // 0xb30(0x01)
	char pad_B30_6 : 2; // 0xb30(0x01)
	char pad_B31[0x3]; // 0xb31(0x03)
	int32 OverriddenLightMapRes[0x04]; // 0xb34(0x04)
	char bCastDistanceFieldIndirectShadow : 1; // 0xb38(0x01)
	char pad_B38_1 : 7; // 0xb38(0x01)
	char pad_B39[0x3]; // 0xb39(0x03)
	float DistanceFieldIndirectShadowMinVisibility[0x04]; // 0xb3c(0x04)
	float StreamingDistanceMultiplier[0x04]; // 0xb40(0x04)
	int32 *af073d6e42[0x04]; // 0xb44(0x04)
	char *3af970e567 : 1; // 0xb48(0x01)
	char pad_B48_1 : 7; // 0xb48(0x01)
	char pad_B49[0x7]; // 0xb49(0x07)
	struct TArray<struct FGuid> IrrelevantLights[0x10]; // 0xb50(0x10)
	struct TArray<struct F*36c5fc3da1> *a09dd6c691[0x10]; // 0xb60(0x10)
	struct TArray<struct F*110531103f> *ba85d1c43d[0x10]; // 0xb70(0x10)
	bool *51bf197520; // 0xb80(0x01)
	char pad_B81[0x3]; // 0xb81(0x03)
	struct F*25888ccc71 LightmassSettings[0x18]; // 0xb84(0x18)
	char pad_B9C[0x4]; // 0xb9c(0x04)

	void SetStaticMesh(); // Function Engine.StaticMeshComponent.SetStaticMesh // Native|Public|BlueprintCallable // @ game+0x608a4a4
	void OnRep_StaticMesh(); // Function Engine.StaticMeshComponent.OnRep_StaticMesh // Final|Native|Public // @ game+0x65d321c
	void *f07c990051(); // Function Engine.StaticMeshComponent.*f07c990051 // Final|Native|Public|BlueprintCallable // @ game+0x65da9e8
	struct FVector *bd3a17aa7c(); // Function Engine.StaticMeshComponent.*bd3a17aa7c // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9860
};

// Class Engine.SkinnedMeshComponent
// Size: 0xca0 (Inherited: 0xb00)
struct USkinnedMeshComponent : UMeshComponent {
	struct USkeletalMesh* SkeletalMesh[0x08]; // 0xb00(0x08)
	struct USkinnedMeshComponent* MasterPoseComponent[0x08]; // 0xb08(0x08)
	char pad_B10[0x60]; // 0xb10(0x60)
	char bUseBoundsFromMasterPoseComponent : 1; // 0xb70(0x01)
	char pad_B70_1 : 7; // 0xb70(0x01)
	char pad_B71[0x7]; // 0xb71(0x07)
	struct TArray<struct FBoxSphereBounds> *3dbfb27017[0x10]; // 0xb78(0x10)
	char pad_B88[0x20]; // 0xb88(0x20)
	struct UPhysicsAsset* PhysicsAssetOverride[0x08]; // 0xba8(0x08)
	int32 ForcedLodModel[0x04]; // 0xbb0(0x04)
	int32 MinLodModel[0x04]; // 0xbb4(0x04)
	char pad_BB8[0x10]; // 0xbb8(0x10)
	struct TArray<struct F*30fe3c2ae3> LODInfo[0x10]; // 0xbc8(0x10)
	float StreamingDistanceMultiplier[0x04]; // 0xbd8(0x04)
	struct FColor WireframeColor[0x04]; // 0xbdc(0x04)
	char *659560d097 : 1; // 0xbe0(0x01)
	char *475e008585 : 1; // 0xbe0(0x01)
	char bDisableMorphTarget : 1; // 0xbe0(0x01)
	char *47c3b74fa9 : 1; // 0xbe0(0x01)
	char pad_BE0_4 : 4; // 0xbe0(0x01)
	char pad_BE1[0x17]; // 0xbe1(0x17)
	char bPerBoneMotionBlur : 1; // 0xbf8(0x01)
	char bComponentUseFixedSkelBounds : 1; // 0xbf8(0x01)
	char bConsiderAllBodiesForBounds : 1; // 0xbf8(0x01)
	char bSyncAttachParentLOD : 1; // 0xbf8(0x01)
	char pad_BF8_4 : 4; // 0xbf8(0x01)
	char pad_BF9[0x3]; // 0xbf9(0x03)
	enum class EMeshComponentUpdateFlag MeshComponentUpdateFlag; // 0xbfc(0x01)
	char pad_BFD[0x3]; // 0xbfd(0x03)
	char *ed8b7c0cd1 : 1; // 0xc00(0x01)
	char *2dec0d4b3d : 1; // 0xc00(0x01)
	char *d7ee5beccf : 1; // 0xc00(0x01)
	char pad_C00_3 : 5; // 0xc00(0x01)
	char pad_C01[0x3]; // 0xc01(0x03)
	bool *7205949c98; // 0xc04(0x01)
	char pad_C05[0x3]; // 0xc05(0x03)
	char bCastCapsuleDirectShadow : 1; // 0xc08(0x01)
	char bCastCapsuleIndirectShadow : 1; // 0xc08(0x01)
	char pad_C08_2 : 6; // 0xc08(0x01)
	char pad_C09[0x3]; // 0xc09(0x03)
	char bRenderStatic : 1; // 0xc0c(0x01)
	char pad_C0C_1 : 7; // 0xc0c(0x01)
	char pad_C0D[0x3]; // 0xc0d(0x03)
	float CapsuleIndirectShadowMinVisibility[0x04]; // 0xc10(0x04)
	char *5d608d2726 : 1; // 0xc14(0x01)
	char pad_C14_1 : 7; // 0xc14(0x01)
	char pad_C15[0xf]; // 0xc15(0x0f)
	struct FBoxSphereBounds *e8aa361390[0x1c]; // 0xc24(0x1c)
	bool *3db651bce3; // 0xc40(0x01)
	bool bEnableUpdateRateOptimizations; // 0xc41(0x01)
	bool bDisplayDebugUpdateRateOptimizations; // 0xc42(0x01)
	char pad_C43[0x4e]; // 0xc43(0x4e)
	bool *c6d2b441e6; // 0xc91(0x01)
	bool *2b84848e75; // 0xc92(0x01)
	char pad_C93[0xd]; // 0xc93(0x0d)

	void *a9b796c1d6(struct FVector* InPosition, struct FVector* OutPosition); // Function Engine.SkinnedMeshComponent.*a9b796c1d6 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6638f90
	struct FName GetBoneIndex(); // Function Engine.SkinnedMeshComponent.GetBoneIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65fd35c
	void SetSkinWeightOverride(int32* LODIndex); // Function Engine.SkinnedMeshComponent.SetSkinWeightOverride // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x662c904
	void *7a5bcec032(int32* BoneIndex); // Function Engine.SkinnedMeshComponent.*7a5bcec032 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65fd618
	int32 *bb2cf533fa(); // Function Engine.SkinnedMeshComponent.*bb2cf533fa // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x662fa94
	struct FName *9b95cbd08f(); // Function Engine.SkinnedMeshComponent.*9b95cbd08f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6605b64
	void *ec630a3bd7(struct FName* BoneName); // Function Engine.SkinnedMeshComponent.*ec630a3bd7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ea188
	struct UPhysicsAsset* *b420fb9e25(); // Function Engine.SkinnedMeshComponent.*b420fb9e25 // Native|Public|BlueprintCallable // @ game+0x662b3c0
	bool *81bb09f3f1(); // Function Engine.SkinnedMeshComponent.*81bb09f3f1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65fa068
	void *422993eabc(); // Function Engine.SkinnedMeshComponent.*422993eabc // Final|Native|Public|BlueprintCallable // @ game+0x6627750
	void *c29b32cdeb(); // Function Engine.SkinnedMeshComponent.*c29b32cdeb // Final|Native|Public|BlueprintCallable // @ game+0x660a4a0
	void *cfda61cd72(); // Function Engine.SkinnedMeshComponent.*cfda61cd72 // Final|Native|Public|BlueprintCallable // @ game+0x662a488
	void *572be15f1a(); // Function Engine.SkinnedMeshComponent.*572be15f1a // Final|Native|Public|BlueprintCallable // @ game+0x66239dc
	void *0a10b2cd0f(struct FName* BoneName); // Function Engine.SkinnedMeshComponent.*0a10b2cd0f // Final|Native|Public|BlueprintCallable // @ game+0x660bb28
	void *7468ce33f2(); // Function Engine.SkinnedMeshComponent.*7468ce33f2 // Final|Native|Public|BlueprintCallable // @ game+0x66391c8
	void *ebab473a5d(); // Function Engine.SkinnedMeshComponent.*ebab473a5d // Final|Native|Public|BlueprintCallable // @ game+0x662a358
	struct USkeletalMesh* SetSkeletalMesh(); // Function Engine.SkinnedMeshComponent.SetSkeletalMesh // Native|Public|BlueprintCallable // @ game+0x662c790
	void *fc7b44b1d1(); // Function Engine.SkinnedMeshComponent.*fc7b44b1d1 // Final|Native|Public|BlueprintCallable // @ game+0x65f16c8
	void *92816e14f0(); // Function Engine.SkinnedMeshComponent.*92816e14f0 // Final|Native|Public|BlueprintCallable // @ game+0x6623e8c
	void *2a5d8e52d6(); // Function Engine.SkinnedMeshComponent.*2a5d8e52d6 // Final|Native|Public|BlueprintCallable // @ game+0x662c2f0
	struct FVector *64cb181e22(); // Function Engine.SkinnedMeshComponent.*64cb181e22 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6638bbc
	void *381741b6ee(); // Function Engine.SkinnedMeshComponent.*381741b6ee // Final|Native|Public|BlueprintCallable // @ game+0x6623f3c
	void *9f5953896a(); // Function Engine.SkinnedMeshComponent.*9f5953896a // Final|Native|Public|BlueprintCallable // @ game+0x65f1360
	struct FName *27a259593c(); // Function Engine.SkinnedMeshComponent.*27a259593c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66034b0
	void *03205eb86e(); // Function Engine.SkinnedMeshComponent.*03205eb86e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6602d50
};

// Class Engine.SkeletalMeshComponent
// Size: 0x1190 (Inherited: 0xca0)
struct USkeletalMeshComponent : USkinnedMeshComponent {
	struct UAnimBlueprintGeneratedClass* AnimBlueprintGeneratedClass[0x08]; // 0xca0(0x08)
	struct UClass* AnimClass[0x08]; // 0xca8(0x08)
	struct UAnimInstance* AnimScriptInstance[0x08]; // 0xcb0(0x08)
	struct TArray<struct UAnimInstance*> *cac389782e[0x10]; // 0xcb8(0x10)
	struct UAnimInstance* *0f41b41bc6[0x08]; // 0xcc8(0x08)
	struct F*795231f53f AnimationData[0x18]; // 0xcd0(0x18)
	char pad_CE8[0x30]; // 0xce8(0x30)
	struct TArray<struct FTransform> *30c04377c4[0x10]; // 0xd18(0x10)
	struct TArray<struct FTransform> *48246de69f[0x10]; // 0xd28(0x10)
	char pad_D38[0x20]; // 0xd38(0x20)
	float GlobalAnimRateScale[0x04]; // 0xd58(0x04)
	enum class EKinematicBonesUpdateToPhysics KinematicBonesUpdateType; // 0xd5c(0x01)
	enum class *6b7dd1323d PhysicsTransformUpdateMode; // 0xd5d(0x01)
	char pad_D5E[0x1]; // 0xd5e(0x01)
	enum class EAnimationMode AnimationMode; // 0xd5f(0x01)
	char pad_D60[0x4]; // 0xd60(0x04)
	char pad_D64_0 : 1; // 0xd64(0x01)
	char *cd629f2904 : 1; // 0xd64(0x01)
	char pad_D64_2 : 1; // 0xd64(0x01)
	char *368f830df6 : 1; // 0xd64(0x01)
	char pad_D64_4 : 2; // 0xd64(0x01)
	char bEnablePhysicsOnDedicatedServer : 1; // 0xd64(0x01)
	char bUpdateJointsFromAnimation : 1; // 0xd64(0x01)
	char bDisableClothSimulation : 1; // 0xd65(0x01)
	char pad_D65_1 : 2; // 0xd65(0x01)
	char bCollideWithEnvironment : 1; // 0xd65(0x01)
	char bCollideWithAttachedChildren : 1; // 0xd65(0x01)
	char bLocalSpaceSimulation : 1; // 0xd65(0x01)
	char *9d5f911249 : 1; // 0xd65(0x01)
	char bResetAfterTeleport : 1; // 0xd65(0x01)
	char pad_D66_0 : 1; // 0xd66(0x01)
	char bNoSkeletonUpdate : 1; // 0xd66(0x01)
	char bPauseAnims : 1; // 0xd66(0x01)
	char *5576a9afdf : 1; // 0xd66(0x01)
	char bEnablePerPolyCollision : 1; // 0xd66(0x01)
	char *e60af2509a : 1; // 0xd66(0x01)
	char *1dcbaec13b : 1; // 0xd66(0x01)
	char *639b831db9 : 1; // 0xd66(0x01)
	char *a5d9754d88 : 1; // 0xd67(0x01)
	char *31549101df : 1; // 0xd67(0x01)
	char *dfe8dc6b1c : 1; // 0xd67(0x01)
	char *ec824e2227 : 1; // 0xd67(0x01)
	char bIncludeComponentLocationIntoBounds : 1; // 0xd67(0x01)
	char *3f60233fd2 : 1; // 0xd67(0x01)
	char pad_D67_6 : 2; // 0xd67(0x01)
	char *de7a769060 : 1; // 0xd68(0x01)
	char pad_D68_1 : 7; // 0xd68(0x01)
	char pad_D69_0 : 2; // 0xd69(0x01)
	char bDefaultLooping : 1; // 0xd69(0x01)
	char bDefaultPlaying : 1; // 0xd69(0x01)
	char pad_D69_4 : 4; // 0xd69(0x01)
	uint16 *4f3e8a52f4[0x02]; // 0xd6a(0x02)
	float ClothBlendWeight[0x04]; // 0xd6c(0x04)
	struct FVector *a7427fc46d[0x0c]; // 0xd70(0x0c)
	char pad_D7C[0x4]; // 0xd7c(0x04)
	struct UBodySetup* BodySetup[0x08]; // 0xd80(0x08)
	float TeleportDistanceThreshold[0x04]; // 0xd88(0x04)
	float TeleportRotationThreshold[0x04]; // 0xd8c(0x04)
	struct FVector *769ee627e3[0x0c]; // 0xd90(0x0c)
	char pad_D9C[0x4]; // 0xd9c(0x04)
	struct FMulticastDelegate OnConstraintBroken[0x10]; // 0xda0(0x10)
	char pad_DB0[0xe0]; // 0xdb0(0xe0)
	struct UClass* *aefcf253a9[0x08]; // 0xe90(0x08)
	char pad_E98[0x1e8]; // 0xe98(0x1e8)
	struct UAnimSequence* SequenceToPlay[0x08]; // 0x1080(0x08)
	struct UAnimationAsset* AnimToPlay[0x08]; // 0x1088(0x08)
	float DefaultPosition[0x04]; // 0x1090(0x04)
	float DefaultPlayRate[0x04]; // 0x1094(0x04)
	uint32 *95fd69c2cb[0x04]; // 0x1098(0x04)
	float *b5cc14a665[0x04]; // 0x109c(0x04)
	char pad_10A0[0xf0]; // 0x10a0(0xf0)

	bool *c56b07f144(); // Function Engine.SkeletalMeshComponent.*c56b07f144 // Final|Native|Public|BlueprintCallable // @ game+0x66261a8
	void *a9bd8ab703(); // Function Engine.SkeletalMeshComponent.*a9bd8ab703 // Final|Native|Public|BlueprintCallable // @ game+0xc24528
	void *9dddf56a91(); // Function Engine.SkeletalMeshComponent.*9dddf56a91 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x660a358
	void *50d1a575e9(); // Function Engine.SkeletalMeshComponent.*50d1a575e9 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x663256c
	bool *d3ad1def60(); // Function Engine.SkeletalMeshComponent.*d3ad1def60 // Native|Public|BlueprintCallable // @ game+0x6622a90
	void *f6964fda19(struct UAnimationAsset** InAnimToPlay, bool bIsPlaying); // Function Engine.SkeletalMeshComponent.*f6964fda19 // Final|Native|Public|BlueprintCallable // @ game+0x66192b0
	float *021885e3b0(); // Function Engine.SkeletalMeshComponent.*021885e3b0 // Final|Native|Public|BlueprintCallable // @ game+0x6621248
	bool *e433eef528(); // Function Engine.SkeletalMeshComponent.*e433eef528 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65fd52c
	void Stop(); // Function Engine.SkeletalMeshComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x675b00
	void *930fde712a(); // Function Engine.SkeletalMeshComponent.*930fde712a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc8c840
	bool *24e946edb2(); // Function Engine.SkeletalMeshComponent.*24e946edb2 // Final|Native|Public|BlueprintCallable // @ game+0x6620c84
	void *614f873041(); // Function Engine.SkeletalMeshComponent.*614f873041 // Final|Native|Public|BlueprintCallable // @ game+0x65f12b0
	void *ad01a8f0e8(struct FName* BoneName); // Function Engine.SkeletalMeshComponent.*ad01a8f0e8 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65e4244
	void *0f98d962fe(); // Function Engine.SkeletalMeshComponent.*0f98d962fe // Final|Native|Public|BlueprintCallable // @ game+0x65e8ed4
	float *40da40db84(); // Function Engine.SkeletalMeshComponent.*40da40db84 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65e392c
	void *6365012393(); // Function Engine.SkeletalMeshComponent.*6365012393 // Final|Native|Public|BlueprintCallable // @ game+0x6639258
	void *3e29b8164e(struct FName* BoneName); // Function Engine.SkeletalMeshComponent.*3e29b8164e // Final|Native|Public|BlueprintCallable // @ game+0x660ba78
	void *29dcd8040f(); // Function Engine.SkeletalMeshComponent.*29dcd8040f // Final|Native|Public|BlueprintCallable // @ game+0x23b3fc
	struct FName *6a167b3650(); // Function Engine.SkeletalMeshComponent.*6a167b3650 // Final|Native|Public|BlueprintCallable // @ game+0x66249bc
	void *41e4010056(); // Function Engine.SkeletalMeshComponent.*41e4010056 // Final|Native|Public|BlueprintCallable // @ game+0x65fdc48
	void *69cff9aed5(); // Function Engine.SkeletalMeshComponent.*69cff9aed5 // Final|Native|Public|BlueprintCallable // @ game+0x660bbf4
	void *d434eea481(); // Function Engine.SkeletalMeshComponent.*d434eea481 // Final|Native|Public|BlueprintCallable // @ game+0x65fba40
	void *c03f41b0aa(); // Function Engine.SkeletalMeshComponent.*c03f41b0aa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6603fa8
	void *3462fbfb5c(); // Function Engine.SkeletalMeshComponent.*3462fbfb5c // Final|Native|Public|BlueprintCallable // @ game+0x661ee44
	struct FVector *d9e7603b72(); // Function Engine.SkeletalMeshComponent.*d9e7603b72 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65ece80
	void SetPosition(float* InPos); // Function Engine.SkeletalMeshComponent.SetPosition // Final|Native|Public|BlueprintCallable // @ game+0x662ba8c
	float *5ae2ffaa34(); // Function Engine.SkeletalMeshComponent.*5ae2ffaa34 // Final|Native|Public|BlueprintCallable // @ game+0x662a754
	struct FName *f74f280075(); // Function Engine.SkeletalMeshComponent.*f74f280075 // Final|Native|Public|BlueprintCallable // @ game+0x6626294
	void SetAnimInstanceClass(); // Function Engine.SkeletalMeshComponent.SetAnimInstanceClass // Final|Native|Public|BlueprintCallable // @ game+0x6621ca8
	void *1d57b1bb52(); // Function Engine.SkeletalMeshComponent.*1d57b1bb52 // Final|Native|Public|BlueprintCallable // @ game+0x65fba28
	void *23d2ba5196(); // Function Engine.SkeletalMeshComponent.*23d2ba5196 // Final|Native|Public|BlueprintCallable // @ game+0x662455c
	float *6e1429b48f(); // Function Engine.SkeletalMeshComponent.*6e1429b48f // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65fe0c0
	void *c1767223e2(); // Function Engine.SkeletalMeshComponent.*c1767223e2 // Final|Native|Public|BlueprintCallable // @ game+0x5875e0c
	void *cbc612e27a(); // Function Engine.SkeletalMeshComponent.*cbc612e27a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6605b30
	struct FName *9f9a8070a6(); // Function Engine.SkeletalMeshComponent.*9f9a8070a6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6602c54
	bool *7f135ecfd6(); // Function Engine.SkeletalMeshComponent.*7f135ecfd6 // Final|Native|Public|BlueprintCallable // @ game+0x6620dc8
	void *de6402c79a(); // Function Engine.SkeletalMeshComponent.*de6402c79a // Final|Native|Public|BlueprintCallable // @ game+0x6626558
	void *40e7e573ca(bool bNewNotifyRigidBodyCollision); // Function Engine.SkeletalMeshComponent.*40e7e573ca // Native|Public|BlueprintCallable // @ game+0x662abe0
	void GetPosition(); // Function Engine.SkeletalMeshComponent.GetPosition // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6603c64
	void Play(); // Function Engine.SkeletalMeshComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x675d28
	void *71482262f9(float* InSpring, float* InForceLimit); // Function Engine.SkeletalMeshComponent.*71482262f9 // Final|Native|Public|BlueprintCallable // @ game+0x6620b04
	bool *84cfacb4c2(); // Function Engine.SkeletalMeshComponent.*84cfacb4c2 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66208cc
	struct FName *c5a6bc927d(); // Function Engine.SkeletalMeshComponent.*c5a6bc927d // Final|Native|Public|BlueprintCallable // @ game+0x6624aec
	void *185f746e31(); // Function Engine.SkeletalMeshComponent.*185f746e31 // Final|Native|Public|BlueprintCallable // @ game+0x662b4a4
	void *dc39210b5a(); // Function Engine.SkeletalMeshComponent.*dc39210b5a // Final|Native|Public|BlueprintCallable // @ game+0x661f118
	void SetAnimation(); // Function Engine.SkeletalMeshComponent.SetAnimation // Final|Native|Public|BlueprintCallable // @ game+0x675cb4
	void SetPlayRate(); // Function Engine.SkeletalMeshComponent.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x675ba0
	void GetPlayRate(); // Function Engine.SkeletalMeshComponent.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x660370c
	void *96095d2473(struct FVector* ClosestWorldPosition, struct FName* BoneName); // Function Engine.SkeletalMeshComponent.*96095d2473 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x660cc5c
	void *a330220722(); // Function Engine.SkeletalMeshComponent.*a330220722 // Final|Native|Public|BlueprintCallable // @ game+0x6620a70
	struct UAnimationAsset* PlayAnimation(); // Function Engine.SkeletalMeshComponent.PlayAnimation // Final|Native|Public|BlueprintCallable // @ game+0x6619df0
	void IsPlaying(); // Function Engine.SkeletalMeshComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x660c160
	void *3033d50dc7(); // Function Engine.SkeletalMeshComponent.*3033d50dc7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65fcc00
	bool *51412c4656(); // Function Engine.SkeletalMeshComponent.*51412c4656 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x72528c
	void *37329cc52f(); // Function Engine.SkeletalMeshComponent.*37329cc52f // Final|Native|Public|BlueprintCallable // @ game+0x6637f04
	void *a26539e1ba(); // Function Engine.SkeletalMeshComponent.*a26539e1ba // Final|Native|Public|BlueprintCallable // @ game+0x661eda0
	void *e7aa7d7da3(struct FVector* force, bool bAccelChange); // Function Engine.SkeletalMeshComponent.*e7aa7d7da3 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65e40b0
	int32 *6e324d9bce(); // Function Engine.SkeletalMeshComponent.*6e324d9bce // Final|Native|Public|BlueprintCallable // @ game+0x65fa670
};

// Class Engine.*3ea9fa89b4
// Size: 0x30 (Inherited: 0x28)
struct U*3ea9fa89b4 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class Engine.*468963f0bd
// Size: 0x30 (Inherited: 0x30)
struct U*468963f0bd : U*3ea9fa89b4 {
};

// Class Engine.*6273c6b474
// Size: 0x28 (Inherited: 0x28)
struct U*6273c6b474 : UObject {
};

// Class Engine.*271a14efcc
// Size: 0x40 (Inherited: 0x28)
struct U*271a14efcc : UObject {
	char bCausedByWorld : 1; // 0x28(0x01)
	char bScaleMomentumByMass : 1; // 0x28(0x01)
	char bRadialDamageVelChange : 1; // 0x28(0x01)
	char pad_28_3 : 5; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float DamageImpulse[0x04]; // 0x2c(0x04)
	float DestructibleImpulse[0x04]; // 0x30(0x04)
	float DestructibleDamageSpreadScale[0x04]; // 0x34(0x04)
	float DamageFalloff[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.MovementComponent
// Size: 0x240 (Inherited: 0x1f0)
struct UMovementComponent : UActorComponent {
	struct USceneComponent* UpdatedComponent[0x08]; // 0x1f0(0x08)
	struct UPrimitiveComponent* UpdatedPrimitive[0x08]; // 0x1f8(0x08)
	char pad_200[0x4]; // 0x200(0x04)
	struct FVector Velocity[0x0c]; // 0x204(0x0c)
	char bConstrainToPlane : 1; // 0x210(0x01)
	char bSnapToPlaneAtStart : 1; // 0x210(0x01)
	char pad_210_2 : 6; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	enum class EPlaneConstraintAxisSetting *7ab4b5f3c1; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
	struct FVector PlaneConstraintNormal[0x0c]; // 0x218(0x0c)
	struct FVector PlaneConstraintOrigin[0x0c]; // 0x224(0x0c)
	char bUpdateOnlyIfRendered : 1; // 0x230(0x01)
	char bAutoUpdateTickRegistration : 1; // 0x230(0x01)
	char bTickBeforeOwner : 1; // 0x230(0x01)
	char bAutoRegisterUpdatedComponent : 1; // 0x230(0x01)
	char pad_230_4 : 4; // 0x230(0x01)
	char pad_231[0xf]; // 0x231(0x0f)

	void *804d12d910(); // Function Engine.MovementComponent.*804d12d910 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cae94
	void PhysicsVolumeChanged(); // Function Engine.MovementComponent.PhysicsVolumeChanged // Native|Public // @ game+0xa77e0c
	void *d248a1aaae(); // Function Engine.MovementComponent.*d248a1aaae // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc884
	void *c1398b37a6(); // Function Engine.MovementComponent.*c1398b37a6 // Native|Public|BlueprintCallable // @ game+0x65df2e0
	void *053425dd63(); // Function Engine.MovementComponent.*053425dd63 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9de0
	void *92a97de1ad(); // Function Engine.MovementComponent.*92a97de1ad // Native|Public|BlueprintCallable // @ game+0x65ddc44
	void *833d7039fe(); // Function Engine.MovementComponent.*833d7039fe // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c2424
	struct FVector *0332c73f2c(); // Function Engine.MovementComponent.*0332c73f2c // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65dca18
	void *2fea06ffbc(); // Function Engine.MovementComponent.*2fea06ffbc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cae7c
	void *878acd980b(struct FVector* Delta, struct FHitResult* OutHit, bool bTeleport); // Function Engine.MovementComponent.*878acd980b // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d0638
	struct FVector ConstrainLocationToPlane(); // Function Engine.MovementComponent.ConstrainLocationToPlane // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c24ec
	void *1c513777e4(); // Function Engine.MovementComponent.*1c513777e4 // Native|Public|BlueprintCallable // @ game+0x65de990
	void *9f3eaf5b59(); // Function Engine.MovementComponent.*9f3eaf5b59 // Native|Public|BlueprintCallable // @ game+0x65dc8ec
	void K2_GetMaxSpeedModifier(); // Function Engine.MovementComponent.K2_GetMaxSpeedModifier // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cff14
	struct FVector *052621d1b5(); // Function Engine.MovementComponent.*052621d1b5 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c25b4
	void *70244a322f(); // Function Engine.MovementComponent.*70244a322f // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65dcbc8
	void *6e8e2e686e(); // Function Engine.MovementComponent.*6e8e2e686e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65caebc
	void *fd2eb42e11(); // Function Engine.MovementComponent.*fd2eb42e11 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65dcb24
	void *2607cf7854(); // Function Engine.MovementComponent.*2607cf7854 // Native|Public|BlueprintCallable // @ game+0x65dc980
	void *0f7e9a03af(); // Function Engine.MovementComponent.*0f7e9a03af // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cae30
	void K2_GetModifiedMaxSpeed(); // Function Engine.MovementComponent.K2_GetModifiedMaxSpeed // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cff6c
	void *25a4009423(); // Function Engine.MovementComponent.*25a4009423 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7df4
};

// Class Engine.NavMovementComponent
// Size: 0x270 (Inherited: 0x240)
struct UNavMovementComponent : UMovementComponent {
	struct F*4093962ce1 NavAgentProps[0x20]; // 0x238(0x20)
	float *4bbf1eb9ad[0x04]; // 0x258(0x04)
	char *90ca0dcfa9 : 1; // 0x25c(0x01)
	char bUseAccelerationForPaths : 1; // 0x25c(0x01)
	char bUseFixedBrakingDistanceForPaths : 1; // 0x25c(0x01)
	struct F*9f1f98e668 *af58b59ba5[0x04]; // 0x260(0x04)
	char pad_268_3 : 5; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)

	void IsFalling(); // Function Engine.NavMovementComponent.IsFalling // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc930
	void StopActiveMovement(); // Function Engine.NavMovementComponent.StopActiveMovement // Native|Public|BlueprintCallable // @ game+0x65decac
	void *b22af963f4(); // Function Engine.NavMovementComponent.*b22af963f4 // Final|Native|Public|BlueprintCallable // @ game+0x65df2f8
	void *e1ac14f9ef(); // Function Engine.NavMovementComponent.*e1ac14f9ef // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc82c
	void *3b5df87a4f(); // Function Engine.NavMovementComponent.*3b5df87a4f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc958
	void *89ecc9aaac(); // Function Engine.NavMovementComponent.*89ecc9aaac // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ccc50
	void *e7adbe771e(); // Function Engine.NavMovementComponent.*e7adbe771e // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cd024
};

// Class Engine.PawnMovementComponent
// Size: 0x280 (Inherited: 0x270)
struct UPawnMovementComponent : UNavMovementComponent {
	struct APawn* *9376ef64fb[0x08]; // 0x270(0x08)
	char pad_278[0x8]; // 0x278(0x08)

	void *3d81af3a18(); // Function Engine.PawnMovementComponent.*3d81af3a18 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65c267c
	struct FVector *6dd846560b(); // Function Engine.PawnMovementComponent.*6dd846560b // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65bd974
	void *d8b516cdf6(); // Function Engine.PawnMovementComponent.*d8b516cdf6 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cabcc
	void *b2a08a6a1d(); // Function Engine.PawnMovementComponent.*b2a08a6a1d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9754
	void K2_GetInputVector(); // Function Engine.PawnMovementComponent.K2_GetInputVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cfee0
	void *796d6f386f(); // Function Engine.PawnMovementComponent.*796d6f386f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ccc28
	void *015cf4862c(); // Function Engine.PawnMovementComponent.*015cf4862c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cabb4
};

// Class Engine.CharacterMovementComponent
// Size: 0x920 (Inherited: 0x280)
struct UCharacterMovementComponent : UPawnMovementComponent {
	char pad_280[0x8]; // 0x280(0x08)
	struct ACharacter* *4938c83d2a[0x08]; // 0x288(0x08)
	char bApplyGravityWhileJumping : 1; // 0x290(0x01)
	char pad_290_1 : 7; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float GravityScale[0x04]; // 0x294(0x04)
	float MaxStepHeight[0x04]; // 0x298(0x04)
	float JumpZVelocity[0x04]; // 0x29c(0x04)
	float JumpOffJumpZFactor[0x04]; // 0x2a0(0x04)
	float *dd15910807[0x04]; // 0x2a4(0x04)
	float *5071bbe841[0x04]; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	float *1aeeb67342[0x04]; // 0x2b0(0x04)
	float *d1c2ea1058[0x04]; // 0x2b4(0x04)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	enum class EMovementMode MovementMode; // 0x2c0(0x01)
	bool CustomMovementMode; // 0x2c1(0x01)
	char pad_2C2[0x1e]; // 0x2c2(0x1e)
	float GroundFriction[0x04]; // 0x2e0(0x04)
	float MaxWalkSpeed[0x04]; // 0x2e4(0x04)
	float MaxWalkSpeedCrouched[0x04]; // 0x2e8(0x04)
	float MaxSwimSpeed[0x04]; // 0x2ec(0x04)
	float MaxFlySpeed[0x04]; // 0x2f0(0x04)
	float MaxCustomMovementSpeed[0x04]; // 0x2f4(0x04)
	float MaxAcceleration[0x04]; // 0x2f8(0x04)
	float BrakingFrictionFactor[0x04]; // 0x2fc(0x04)
	float BrakingFriction[0x04]; // 0x300(0x04)
	char bUseSeparateBrakingFriction : 1; // 0x304(0x01)
	char pad_304_1 : 7; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	float BrakingDecelerationWalking[0x04]; // 0x308(0x04)
	float BrakingDecelerationFalling[0x04]; // 0x30c(0x04)
	float BrakingDecelerationSwimming[0x04]; // 0x310(0x04)
	float BrakingDecelerationFlying[0x04]; // 0x314(0x04)
	float AirControl[0x04]; // 0x318(0x04)
	float AirControlBoostMultiplier[0x04]; // 0x31c(0x04)
	float AirControlBoostVelocityThreshold[0x04]; // 0x320(0x04)
	float FallingLateralFriction[0x04]; // 0x324(0x04)
	float CrouchedHalfHeight[0x04]; // 0x328(0x04)
	float PronedHalfHeight[0x04]; // 0x32c(0x04)
	float PronedRadius[0x04]; // 0x330(0x04)
	float Buoyancy[0x04]; // 0x334(0x04)
	float PerchRadiusThreshold[0x04]; // 0x338(0x04)
	float PerchAdditionalHeight[0x04]; // 0x33c(0x04)
	struct FRotator RotationRate[0x0c]; // 0x340(0x0c)
	char bUseControllerDesiredRotation : 1; // 0x34c(0x01)
	char bOrientRotationToMovement : 1; // 0x34c(0x01)
	char bSweepWhileNavWalking : 1; // 0x34c(0x01)
	char pad_34C_3 : 2; // 0x34c(0x01)
	char *377367ad67 : 1; // 0x34c(0x01)
	char *d391fd96a8 : 1; // 0x34c(0x01)
	char bForceMaxAccel : 1; // 0x34c(0x01)
	char bRunPhysicsWithNoController : 1; // 0x34d(0x01)
	char bForceNextFloorCheck : 1; // 0x34d(0x01)
	char *114aa72bfd : 1; // 0x34d(0x01)
	char bCanWalkOffLedges : 1; // 0x34d(0x01)
	char bCanWalkOffLedgesWhenCrouching : 1; // 0x34d(0x01)
	char pad_34D_5 : 2; // 0x34d(0x01)
	char *c2abb2c6d4 : 1; // 0x34d(0x01)
	char *cb30edb4d5 : 1; // 0x34e(0x01)
	char pad_34E_1 : 7; // 0x34e(0x01)
	char pad_34F[0x1]; // 0x34f(0x01)
	struct USceneComponent* *e932784708[0x08]; // 0x350(0x08)
	float MaxOutOfWaterStepHeight[0x04]; // 0x358(0x04)
	float OutofWaterZ[0x04]; // 0x35c(0x04)
	float Mass[0x04]; // 0x360(0x04)
	bool bEnablePhysicsInteraction; // 0x364(0x01)
	bool bTouchForceScaledToMass; // 0x365(0x01)
	bool bPushForceScaledToMass; // 0x366(0x01)
	bool bPushForceUsingZOffset; // 0x367(0x01)
	bool bScalePushForceToVelocity; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	float StandingDownwardForceScale[0x04]; // 0x36c(0x04)
	float InitialPushForceFactor[0x04]; // 0x370(0x04)
	float PushForceFactor[0x04]; // 0x374(0x04)
	float PushForcePointZOffsetFactor[0x04]; // 0x378(0x04)
	float TouchForceFactor[0x04]; // 0x37c(0x04)
	float MinTouchForce[0x04]; // 0x380(0x04)
	float MaxTouchForce[0x04]; // 0x384(0x04)
	float RepulsionForce[0x04]; // 0x388(0x04)
	char bForceBraking : 1; // 0x38c(0x01)
	char pad_38C_1 : 7; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	float CrouchedSpeedMultiplier[0x04]; // 0x390(0x04)
	float UpperImpactNormalScale[0x04]; // 0x394(0x04)
	struct FVector Acceleration[0x0c]; // 0x398(0x0c)
	struct FVector *f2cdf36f17[0x0c]; // 0x3a4(0x0c)
	struct FQuat *2344f9b1ba[0x10]; // 0x3b0(0x10)
	struct FVector *3d5bc6c8e3[0x0c]; // 0x3c0(0x0c)
	float *1379983bf5[0x04]; // 0x3cc(0x04)
	float *9b713bace2[0x04]; // 0x3d0(0x04)
	float *32f74edb4a[0x04]; // 0x3d4(0x04)
	struct FVector *53684725eb[0x0c]; // 0x3d8(0x0c)
	struct FVector *83c3dcb84b[0x0c]; // 0x3e4(0x0c)
	float *18b0dcf7ea[0x04]; // 0x3f0(0x04)
	char pad_3F4[0x8]; // 0x3f4(0x08)
	float MaxSimulationTimeStep[0x04]; // 0x3fc(0x04)
	int32 MaxSimulationIterations[0x04]; // 0x400(0x04)
	float MaxDepenetrationWithGeometry[0x04]; // 0x404(0x04)
	float MaxDepenetrationWithGeometryAsProxy[0x04]; // 0x408(0x04)
	float MaxDepenetrationWithPawn[0x04]; // 0x40c(0x04)
	float MaxDepenetrationWithPawnAsProxy[0x04]; // 0x410(0x04)
	float *bc7a9107d9[0x04]; // 0x414(0x04)
	float *f468814d86[0x04]; // 0x418(0x04)
	float *396f8361b7[0x04]; // 0x41c(0x04)
	float *58c123bfd6[0x04]; // 0x420(0x04)
	float *95b5d33d2f[0x04]; // 0x424(0x04)
	float *1a782b9ac2[0x04]; // 0x428(0x04)
	float *f5bbe755ef[0x04]; // 0x42c(0x04)
	float *48231160a6[0x04]; // 0x430(0x04)
	enum class ENetworkSmoothingMode NetworkSmoothingMode; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	float *dfc538dd63[0x04]; // 0x438(0x04)
	float *6a6d42d7f4[0x04]; // 0x43c(0x04)
	float *afadae7855[0x04]; // 0x440(0x04)
	float *33d9b4fb8b[0x04]; // 0x444(0x04)
	float LedgeCheckThreshold[0x04]; // 0x448(0x04)
	float JumpOutOfWaterPitch[0x04]; // 0x44c(0x04)
	struct F*3718d46421 CurrentFloor[0x98]; // 0x450(0x98)
	enum class EMovementMode DefaultLandMovementMode; // 0x4e8(0x01)
	enum class EMovementMode DefaultWaterMovementMode; // 0x4e9(0x01)
	enum class EMovementMode *64d9549867; // 0x4ea(0x01)
	char pad_4EB[0x1]; // 0x4eb(0x01)
	char bMaintainHorizontalGroundVelocity : 1; // 0x4ec(0x01)
	char bImpartBaseVelocityX : 1; // 0x4ec(0x01)
	char bImpartBaseVelocityY : 1; // 0x4ec(0x01)
	char bImpartBaseVelocityZ : 1; // 0x4ec(0x01)
	char bImpartBaseAngularVelocity : 1; // 0x4ec(0x01)
	char bJustTeleported : 1; // 0x4ec(0x01)
	char *1f2fb81ea2 : 1; // 0x4ec(0x01)
	char *1f30f54ae9 : 1; // 0x4ec(0x01)
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x4ed(0x01)
	char bNotifyApex : 1; // 0x4ed(0x01)
	char *f36ca33c0e : 1; // 0x4ed(0x01)
	char bWantsToCrouch : 1; // 0x4ed(0x01)
	char bCrouchMaintainsBaseLocation : 1; // 0x4ed(0x01)
	char pad_4ED_5 : 3; // 0x4ed(0x01)
	char pad_4EE[0x2]; // 0x4ee(0x02)
	enum class EStanceMode StanceMode; // 0x4f0(0x01)
	enum class EStanceMode WantsToStanceMode; // 0x4f1(0x01)
	char pad_4F2[0x2]; // 0x4f2(0x02)
	char bIgnoreBaseRotation : 1; // 0x4f4(0x01)
	char *e1b9431844 : 1; // 0x4f4(0x01)
	char bAlwaysCheckFloor : 1; // 0x4f4(0x01)
	char bUseFlatBaseForFloorChecks : 1; // 0x4f4(0x01)
	char *eaba1e724f : 1; // 0x4f4(0x01)
	char *74c4a6681c : 1; // 0x4f4(0x01)
	char bUseRVOAvoidance : 1; // 0x4f4(0x01)
	char bRequestedMoveUseAcceleration : 1; // 0x4f4(0x01)
	char pad_4F5[0xf]; // 0x4f5(0x0f)
	char *64a1cb3dd6 : 1; // 0x504(0x01)
	char *cd0f91380a : 1; // 0x504(0x01)
	char *fbcb4f7122 : 1; // 0x504(0x01)
	char pad_504_3 : 2; // 0x504(0x01)
	char bProjectNavMeshWalking : 1; // 0x504(0x01)
	char bProjectNavMeshOnBothWorldChannels : 1; // 0x504(0x01)
	char pad_504_7 : 1; // 0x504(0x01)
	char pad_505[0x13]; // 0x505(0x13)
	float AvoidanceConsiderationRadius[0x04]; // 0x518(0x04)
	struct FVector *71a3c5f6d6[0x0c]; // 0x51c(0x0c)
	int32 AvoidanceUID[0x04]; // 0x528(0x04)
	struct F*f2710e04b9 AvoidanceGroup[0x04]; // 0x52c(0x04)
	struct F*f2710e04b9 GroupsToAvoid[0x04]; // 0x530(0x04)
	struct F*f2710e04b9 GroupsToIgnore[0x04]; // 0x534(0x04)
	float AvoidanceWeight[0x04]; // 0x538(0x04)
	struct FVector *e29a3efc6f[0x0c]; // 0x53c(0x0c)
	char pad_548[0xa8]; // 0x548(0xa8)
	float NavMeshProjectionInterval[0x04]; // 0x5f0(0x04)
	float *7a0e85f2f7[0x04]; // 0x5f4(0x04)
	float NavMeshProjectionInterpSpeed[0x04]; // 0x5f8(0x04)
	float NavMeshProjectionHeightScaleUp[0x04]; // 0x5fc(0x04)
	float NavMeshProjectionHeightScaleDown[0x04]; // 0x600(0x04)
	float NavWalkingFloorDistTolerance[0x04]; // 0x604(0x04)
	char pad_608[0xb0]; // 0x608(0xb0)
	struct F*7d36dc8762 *f4c4231f71[0x58]; // 0x6b8(0x58)
	char pad_710[0x10]; // 0x710(0x10)
	float *4df95f3c1b[0x04]; // 0x720(0x04)
	char pad_724[0x4]; // 0x724(0x04)
	struct FRootMotionSourceGroup *d26ef8f08d[0x100]; // 0x728(0x100)
	char pad_828[0x98]; // 0x828(0x98)
	struct F*77ba1cb021 *67f0cdfabe[0x40]; // 0x8c0(0x40)
	struct FVector *45e1cf143e[0x0c]; // 0x900(0x0c)
	bool *a27368222e; // 0x90c(0x01)
	char pad_90D[0x3]; // 0x90d(0x03)
	char bAllowPhysicsRotationDuringAnimRootMotion : 1; // 0x910(0x01)
	char pad_910_1 : 7; // 0x910(0x01)
	char pad_911[0xf]; // 0x911(0x0f)

	struct FHitResult *f2e8aa35e0(); // Function Engine.CharacterMovementComponent.*f2e8aa35e0 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65cd074
	void *c70f537a0a(); // Function Engine.CharacterMovementComponent.*c70f537a0a // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65daebc
	void *e553325af3(); // Function Engine.CharacterMovementComponent.*e553325af3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c6da0
	void *bc6abdde9a(); // Function Engine.CharacterMovementComponent.*bc6abdde9a // Net|Native|Event|Protected|NetServer|HasDefaults|NetValidate // @ game+0x65de54c
	void *e501ac931e(); // Function Engine.CharacterMovementComponent.*e501ac931e // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9d88
	enum class EMovementMode *a38eeeca9f(); // Function Engine.CharacterMovementComponent.*a38eeeca9f // Native|Public|BlueprintCallable // @ game+0x65dc238
	void *14f1b49e8a(); // Function Engine.CharacterMovementComponent.*14f1b49e8a // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cff40
	void AddImpulse(struct FVector* Impulse); // Function Engine.CharacterMovementComponent.AddImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65bd5e8
	void *581baeac28(); // Function Engine.CharacterMovementComponent.*581baeac28 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c8960
	void *b7442b5506(); // Function Engine.CharacterMovementComponent.*b7442b5506 // Final|Native|Public|BlueprintCallable // @ game+0x65de2a8
	void *c4b8270fb7(); // Function Engine.CharacterMovementComponent.*c4b8270fb7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cbcf0
	void *8b32685714(); // Function Engine.CharacterMovementComponent.*8b32685714 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7a30
	void *e6a8435a7d(); // Function Engine.CharacterMovementComponent.*e6a8435a7d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ccc50
	void *e9b207e0ce(); // Function Engine.CharacterMovementComponent.*e9b207e0ce // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9db4
	void *4c989de930(); // Function Engine.CharacterMovementComponent.*4c989de930 // Final|Native|Public|BlueprintCallable // @ game+0x65d8908
	void *43b516a96e(); // Function Engine.CharacterMovementComponent.*43b516a96e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d0224
	void *cd6e07bf02(); // Function Engine.CharacterMovementComponent.*cd6e07bf02 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9f14
	void AddForce(); // Function Engine.CharacterMovementComponent.AddForce // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65bcfa4
	void *2e43ceda7f(); // Function Engine.CharacterMovementComponent.*2e43ceda7f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cac24
	struct FVector *04ec90a9d8(); // Function Engine.CharacterMovementComponent.*04ec90a9d8 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cf9d0
	void *208a65c218(float* DeltaTime, bool bFluid); // Function Engine.CharacterMovementComponent.*208a65c218 // Native|Public|BlueprintCallable // @ game+0x65beb14
	void *35735c5cd3(); // Function Engine.CharacterMovementComponent.*35735c5cd3 // Native|Public|BlueprintCallable // @ game+0x583cd44
	void *ae7f14da74(); // Function Engine.CharacterMovementComponent.*ae7f14da74 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65dafe4
	void *087f6c73d3(); // Function Engine.CharacterMovementComponent.*087f6c73d3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x58ea3e8
	void *fbab99523c(); // Function Engine.CharacterMovementComponent.*fbab99523c // Final|Native|Public|BlueprintCallable // @ game+0x65de340
	void DisableMovement(); // Function Engine.CharacterMovementComponent.DisableMovement // Native|Public|BlueprintCallable // @ game+0x65c3394
	void *18e1c80ce6(); // Function Engine.CharacterMovementComponent.*18e1c80ce6 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65d8994
	void *7a61a19a27(); // Function Engine.CharacterMovementComponent.*7a61a19a27 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c6074
	void *284edf62e0(); // Function Engine.CharacterMovementComponent.*284edf62e0 // Final|Native|Public|BlueprintCallable // @ game+0x65d8874
	void *e2309bf902(); // Function Engine.CharacterMovementComponent.*e2309bf902 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x58a6ab0
	void *cf126f0075(float* LineDistance, float* SweepRadius); // Function Engine.CharacterMovementComponent.*cf126f0075 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65cf52c
	void *34f9057aac(); // Function Engine.CharacterMovementComponent.*34f9057aac // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9d5c
	void *a946e888d9(); // Function Engine.CharacterMovementComponent.*a946e888d9 // Final|Native|Public|BlueprintCallable // @ game+0x65dcde8
	void CapsuleTouched(struct AActor** Param1, int32* Param3); // Function Engine.CharacterMovementComponent.CapsuleTouched // Native|Protected|HasOutParms // @ game+0x65beef0
	void *c686538277(); // Function Engine.CharacterMovementComponent.*c686538277 // Final|Native|Public|BlueprintCallable // @ game+0x65dae30
	void *a4ebf22dc8(); // Function Engine.CharacterMovementComponent.*a4ebf22dc8 // Final|Native|Public|BlueprintCallable // @ game+0x65daf58
};

// Class Engine.BlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintFunctionLibrary : UObject {

	struct FString MakeStringAssetReference(); // Function Engine.BlueprintFunctionLibrary.MakeStringAssetReference // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6613ea0
};

// Class Engine.StaticMeshActor
// Size: 0x3f8 (Inherited: 0x3e8)
struct AStaticMeshActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent[0x08]; // 0x3e8(0x08)
	bool bStaticMeshReplicateMovement; // 0x3f0(0x01)
	enum class ENavDataGatheringMode *470c9f1b83; // 0x3f1(0x01)
	char pad_3F2[0x6]; // 0x3f2(0x06)
};

// Class Engine.HUD
// Size: 0x4d0 (Inherited: 0x3e8)
struct AHUD : AActor {
	struct APlayerController* PlayerOwner[0x08]; // 0x3e8(0x08)
	char bLostFocusPaused : 1; // 0x3f0(0x01)
	char bShowHUD : 1; // 0x3f0(0x01)
	char bShowDebugInfo : 1; // 0x3f0(0x01)
	char bShowHitBoxDebugInfo : 1; // 0x3f0(0x01)
	char bShowOverlays : 1; // 0x3f0(0x01)
	char bEnableDebugTextShadow : 1; // 0x3f0(0x01)
	char pad_3F0_6 : 2; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct TArray<struct AActor*> *5e3e96ddc9[0x10]; // 0x3f8(0x10)
	char pad_408[0x8]; // 0x408(0x08)
	struct TArray<struct FName> DebugDisplay[0x10]; // 0x410(0x10)
	struct TArray<struct FName> ToggledDebugCategories[0x10]; // 0x420(0x10)
	struct UCanvas* Canvas[0x08]; // 0x430(0x08)
	struct UCanvas* *4e5d7ebf6f[0x08]; // 0x438(0x08)
	struct TArray<struct F*56b1f6ab8b> *71494f9592[0x10]; // 0x440(0x10)
	struct UClass* *87c7d0deab[0x08]; // 0x450(0x08)
	struct AActor* *a812f78775[0x08]; // 0x458(0x08)
	char pad_460[0x70]; // 0x460(0x70)

	struct FVector2D *57c786c3b7(struct FLinearColor* V0_Color); // Function Engine.HUD.*57c786c3b7 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65c3d60
	void ReceiveDrawHUD(); // Function Engine.HUD.ReceiveDrawHUD // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	float *090b07aebe(); // Function Engine.HUD.*090b07aebe // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65c40d0
	void Project(); // Function Engine.HUD.Project // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65d4174
	void ReceiveHitBoxClick(); // Function Engine.HUD.ReceiveHitBoxClick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	bool *2ac1731934(bool Param8, float* Param10); // Function Engine.HUD.*2ac1731934 // Final|Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x65bcb30
	float *842d883d63(float* Scale, float* Rotation); // Function Engine.HUD.*842d883d63 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65c3680
	struct UFont* *e23130372f(struct FString* Text); // Function Engine.HUD.*e23130372f // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65cb618
	void ShowHUD(); // Function Engine.HUD.ShowHUD // Exec|Native|Public // @ game+0x5823324
	void ReceiveHitBoxEndCursorOver(); // Function Engine.HUD.ReceiveHitBoxEndCursorOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ShowDebug(); // Function Engine.HUD.ShowDebug // Exec|Native|Public // @ game+0x65de5f8
	void *9e3bd21f17(); // Function Engine.HUD.*9e3bd21f17 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x65ca8cc
	void *9cedc41b81(); // Function Engine.HUD.*9cedc41b81 // Final|Net|NetReliableNative|Event|Public|NetClient // @ game+0x65d441c
	void *596dfaadd8(); // Function Engine.HUD.*596dfaadd8 // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x590a940
	void ShowDebugToggleSubCategory(); // Function Engine.HUD.ShowDebugToggleSubCategory // Final|Exec|Native|Public // @ game+0x65de734
	void Deproject(float* ScreenY); // Function Engine.HUD.Deproject // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c2d40
	float *669fd7d092(); // Function Engine.HUD.*669fd7d092 // Final|Native|Public|BlueprintCallable // @ game+0x65c3ae8
	void ReceiveHitBoxBeginCursorOver(); // Function Engine.HUD.ReceiveHitBoxBeginCursorOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ShowDebugForReticleTargetToggle(); // Function Engine.HUD.ShowDebugForReticleTargetToggle // Final|Exec|Native|Public // @ game+0x65de68c
	struct AActor* *d7c730a3af(); // Function Engine.HUD.*d7c730a3af // Final|Net|NetReliableNative|Event|Public|NetClient // @ game+0x65d45d0
	float *2d1c2faf12(float* EndScreenX, struct FLinearColor* LineColor); // Function Engine.HUD.*2d1c2faf12 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65c3454
	float DrawTexture(struct FLinearColor* TintColor, float* Scale, float* Rotation); // Function Engine.HUD.DrawTexture // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65c4564
	float *014b6abad2(); // Function Engine.HUD.*014b6abad2 // Final|Native|Public|BlueprintCallable // @ game+0x65c4a74
	struct UClass* *2e092f08e4(struct FVector2D* FirstPoint, struct FVector2D* SecondPoint, bool bIncludeNonCollidingComponents); // Function Engine.HUD.*2e092f08e4 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65c5c34
	float *376229bab6(); // Function Engine.HUD.*376229bab6 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65c42ac
	void AddHitBox(struct FVector2D* Position, struct FName* InName); // Function Engine.HUD.AddHitBox // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65bd420
	void ReceiveHitBoxRelease(); // Function Engine.HUD.ReceiveHitBoxRelease // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x2cd4ac
};

// Class Engine.Brush
// Size: 0x420 (Inherited: 0x3e8)
struct ABrush : AActor {
	enum class *98ccb57006 *07bf3e561c; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	struct FColor BrushColor[0x04]; // 0x3ec(0x04)
	int32 PolyFlags[0x04]; // 0x3f0(0x04)
	char *fb6ef6a222 : 1; // 0x3f4(0x01)
	char *7676895afc : 1; // 0x3f4(0x01)
	char *fc9b5395c4 : 1; // 0x3f4(0x01)
	char *dcc8979d15 : 1; // 0x3f4(0x01)
	char pad_3F4_4 : 4; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)
	struct UModel* Brush[0x08]; // 0x3f8(0x08)
	struct UBrushComponent* BrushComponent[0x08]; // 0x400(0x08)
	char *77a48e7c2a : 1; // 0x408(0x01)
	char pad_408_1 : 7; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct TArray<struct F*5bb08df245> *9d01312ac4[0x10]; // 0x410(0x10)
};

// Class Engine.Volume
// Size: 0x420 (Inherited: 0x420)
struct AVolume : ABrush {
};

// Class Engine.AnimNotify
// Size: 0x38 (Inherited: 0x28)
struct UAnimNotify : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	void Received_Notify(struct USkeletalMeshComponent** MeshComp); // Function Engine.AnimNotify.Received_Notify // Event|Public|BlueprintEvent|Const // @ game+0x2cd4ac
	void GetNotifyName(); // Function Engine.AnimNotify.GetNotifyName // Native|Event|Public|BlueprintEvent|Const // @ game+0x65ca184
};

// Class Engine.AnimNotify_PlayParticleEffect
// Size: 0x80 (Inherited: 0x38)
struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	struct UParticleSystem* PSTemplate[0x08]; // 0x38(0x08)
	struct FVector LocationOffset[0x0c]; // 0x40(0x0c)
	struct FRotator RotationOffset[0x0c]; // 0x4c(0x0c)
	char pad_58[0x18]; // 0x58(0x18)
	char Attached : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FName SocketName[0x08]; // 0x78(0x08)
};

// Class Engine.AnimNotifyState
// Size: 0x30 (Inherited: 0x28)
struct UAnimNotifyState : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	float Received_NotifyBegin(); // Function Engine.AnimNotifyState.Received_NotifyBegin // Event|Public|BlueprintEvent|Const // @ game+0x2cd4ac
	void GetNotifyName(); // Function Engine.AnimNotifyState.GetNotifyName // Native|Event|Public|BlueprintEvent|Const // @ game+0x65ca184
	void Received_NotifyTick(struct UAnimSequenceBase** Animation); // Function Engine.AnimNotifyState.Received_NotifyTick // Event|Public|BlueprintEvent|Const // @ game+0x2cd4ac
	struct UAnimSequenceBase* Received_NotifyEnd(); // Function Engine.AnimNotifyState.Received_NotifyEnd // Event|Public|BlueprintEvent|Const // @ game+0x2cd4ac
};

// Class Engine.DataTable
// Size: 0x80 (Inherited: 0x28)
struct UDataTable : UObject {
	struct UScriptStruct* *ead82841b2[0x08]; // 0x28(0x08)
	char pad_30[0x50]; // 0x30(0x50)
};

// Class Engine.Character
// Size: 0x860 (Inherited: 0x448)
struct ACharacter : APawn {
	char bPressedJump : 1; // 0x448(0x01)
	char *4eb88c8a38 : 1; // 0x448(0x01)
	char *22d1b18b88 : 1; // 0x448(0x01)
	char *9dd8ada685 : 1; // 0x448(0x01)
	char *1cdec1f898 : 1; // 0x448(0x01)
	char *34ade2fed5 : 1; // 0x448(0x01)
	char *88e7d0a925 : 1; // 0x448(0x01)
	char *f60ec74df2 : 1; // 0x448(0x01)
	char bWasJumping : 1; // 0x449(0x01)
	char pad_449_1 : 7; // 0x449(0x01)
	char pad_44A[0x2]; // 0x44a(0x02)
	int32 JumpCurrentCount[0x04]; // 0x44c(0x04)
	float *1f829a81a5[0x04]; // 0x450(0x04)
	float JumpMaxHoldTime[0x04]; // 0x454(0x04)
	struct UCapsuleComponent* ProneCapsuleComponent[0x08]; // 0x458(0x08)
	bool *1d64cd16dd; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	float *fdceab32c3[0x04]; // 0x464(0x04)
	bool *47ce0f5314; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct UCharacterMovementComponent* CharacterMovement[0x08]; // 0x470(0x08)
	float JumpKeyHoldTime[0x04]; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct F*6e7b288381 *fde57a2c96[0x48]; // 0x480(0x48)
	char pad_4C8[0x8]; // 0x4c8(0x08)
	struct FQuat *e5f2932677[0x10]; // 0x4d0(0x10)
	float CrouchedEyeHeight[0x04]; // 0x4e0(0x04)
	char bIsCrouched : 1; // 0x4e4(0x01)
	char pad_4E4_1 : 7; // 0x4e4(0x01)
	char pad_4E5[0x3]; // 0x4e5(0x03)
	struct FVector *fa08663006[0x0c]; // 0x4e8(0x0c)
	char pad_4F4[0x4]; // 0x4f4(0x04)
	struct F*6e7b288381 *950fafca74[0x48]; // 0x4f8(0x48)
	struct UCapsuleComponent* CapsuleComponent[0x08]; // 0x540(0x08)
	int32 JumpMaxCount[0x04]; // 0x548(0x04)
	char pad_54C[0x4]; // 0x54c(0x04)
	struct USkeletalMeshComponent* Mesh[0x08]; // 0x550(0x08)
	struct FMulticastDelegate OnReachedJumpApex[0x10]; // 0x558(0x10)
	char pad_568[0x10]; // 0x568(0x10)
	struct FMulticastDelegate MovementModeChangedDelegate[0x10]; // 0x578(0x10)
	struct FMulticastDelegate OnCharacterMovementUpdated[0x10]; // 0x588(0x10)
	struct FRootMotionSourceGroup *795892ac52[0x100]; // 0x598(0x100)
	char pad_698[0x8]; // 0x698(0x08)
	struct F*77ba1cb021 *efe800db11[0x40]; // 0x6a0(0x40)
	struct TArray<struct F*bb18ec9648> *7b1f597c0d[0x10]; // 0x6e0(0x10)
	struct F*05d7763b32 *bec31ce030[0x160]; // 0x6f0(0x160)
	char pad_850[0x10]; // 0x850(0x10)

	void *b23f868331(); // Function Engine.Character.*b23f868331 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x5818354
	void K2_OnMovementModeChanged(enum class EMovementMode NewMovementMode); // Function Engine.Character.K2_OnMovementModeChanged // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	bool *540037a5a4(bool Param7); // Function Engine.Character.*540037a5a4 // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x60d358
	void OnJumped(); // Function Engine.Character.OnJumped // Native|Event|Public|BlueprintEvent // @ game+0xd1ac78
	void *b4b8a67d69(); // Function Engine.Character.*b4b8a67d69 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c6268
	void OnRep_IsCrouched(); // Function Engine.Character.OnRep_IsCrouched // Native|Public // @ game+0x5881f50
	float *5ff84accd4(struct UPrimitiveComponent** Param3, bool Param5); // Function Engine.Character.*5ff84accd4 // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0xc5cb14
	bool *c669440a6a(uint32* Param9); // Function Engine.Character.*c669440a6a // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x65d6114
	void Jump(); // Function Engine.Character.Jump // Native|Public|BlueprintCallable // @ game+0x65cd14c
	void *5a940b9732(); // Function Engine.Character.*5a940b9732 // Native|Public|BlueprintCallable // @ game+0x65df2b0
	void Crouch(); // Function Engine.Character.Crouch // Native|Public|BlueprintCallable // @ game+0x65c2c5c
	void ClientAckGoodMove(); // Function Engine.Character.ClientAckGoodMove // Net|Native|Event|Public|NetClient // @ game+0x60e0b8
	void *836cb3ba33(struct FVector_NetQuantize10* Param1, bool Param3, uint32* Param5); // Function Engine.Character.*836cb3ba33 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x65d65dc
	void *bd798b0484(); // Function Engine.Character.*bd798b0484 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cce98
	void CanJumpInternal(); // Function Engine.Character.CanJumpInternal // Native|Event|Protected|BlueprintEvent|Const // @ game+0xbd1154
	void *4aff9effe3(); // Function Engine.Character.*4aff9effe3 // Native|Public|BlueprintCallable // @ game+0x65defbc
	struct UPrimitiveComponent* *5e1e8b0a9d(struct FVector_NetQuantize10* Param1, struct FName* Param11); // Function Engine.Character.*5e1e8b0a9d // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x65d5b94
	void *c5401cd2d9(); // Function Engine.Character.*c5401cd2d9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c62b0
	float *5cc3a54e3d(struct UPrimitiveComponent** Param7, bool Param9); // Function Engine.Character.*5cc3a54e3d // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x65bf880
	void OnRep_RootMotion(); // Function Engine.Character.OnRep_RootMotion // Final|Native|Public // @ game+0x65d3208
	void K2_UpdateCustomMovement(); // Function Engine.Character.K2_UpdateCustomMovement // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct FVector OnWalkingOffLedge(); // Function Engine.Character.OnWalkingOffLedge // Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0xbed14c
	void *8e99d6a8ee(); // Function Engine.Character.*8e99d6a8ee // Final|Native|Public|BlueprintCallable // @ game+0x65c7a58
	void *af1cfdadf5(); // Function Engine.Character.*af1cfdadf5 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x5911910
	void *d79c49c550(); // Function Engine.Character.*d79c49c550 // Native|Public|BlueprintCallable // @ game+0x65dd0fc
	struct FVector *df1f1f38a8(); // Function Engine.Character.*df1f1f38a8 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65bea08
	void *918328595d(float* InPlayRate); // Function Engine.Character.*918328595d // Native|Public|BlueprintCallable // @ game+0x65d381c
	float K2_OnStartCrouch(); // Function Engine.Character.K2_OnStartCrouch // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	bool OnLaunched(); // Function Engine.Character.OnLaunched // Event|Public|HasDefaults|BlueprintEvent // @ game+0x2cd4ac
	void OnLanded(); // Function Engine.Character.OnLanded // Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void *41035236aa(); // Function Engine.Character.*41035236aa // Net|NetReliableNative|Event|Public|NetClient // @ game+0x5911d68
	bool *cc71faddc9(); // Function Engine.Character.*cc71faddc9 // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x65bf4ec
	void OnRep_ReplicatedBasedMovement(); // Function Engine.Character.OnRep_ReplicatedBasedMovement // Native|Public // @ game+0x9c76c4
	void IsJumpProvidingForce(); // Function Engine.Character.IsJumpProvidingForce // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc4d4
	void *07fd890b66(); // Function Engine.Character.*07fd890b66 // Native|Public|BlueprintCallable // @ game+0x65df754
	void *53934c922e(); // Function Engine.Character.*53934c922e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cce74
	void K2_OnEndCrouch(float* HalfHeightAdjust); // Function Engine.Character.K2_OnEndCrouch // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void *03d7ad404f(float* Param0); // Function Engine.Character.*03d7ad404f // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x65d6920
	void *5380e4b081(); // Function Engine.Character.*5380e4b081 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c60b8
	bool LaunchCharacter(); // Function Engine.Character.LaunchCharacter // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d26d0
	bool ServerMove(float* Param0, struct FVector_NetQuantize100* Param2, bool Param4); // Function Engine.Character.ServerMove // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x65d5218
	bool *3bfd75b1a3(struct FVector_NetQuantize10* Param1, uint32* Param3, struct FVector_NetQuantize10* Param5, bool Param7); // Function Engine.Character.*3bfd75b1a3 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x65d5614
	void CanJump(); // Function Engine.Character.CanJump // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65beddc
};

// Class Engine.Controller
// Size: 0x470 (Inherited: 0x3e8)
struct AController : AActor {
	char pad_3E8[0x18]; // 0x3e8(0x18)
	struct USceneComponent* TransformComponent[0x08]; // 0x400(0x08)
	char pad_408[0xc]; // 0x408(0x0c)
	struct FRotator *c58941edc9[0x0c]; // 0x414(0x0c)
	char pad_420[0x8]; // 0x420(0x08)
	struct ACharacter* Character[0x08]; // 0x428(0x08)
	char pad_430[0x10]; // 0x430(0x10)
	char *a4b6e8f562 : 1; // 0x440(0x01)
	char *e0bc488814 : 1; // 0x440(0x01)
	char pad_440_2 : 6; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct FName StateName[0x08]; // 0x448(0x08)
	struct APlayerState* PlayerState[0x08]; // 0x450(0x08)
	struct APawn* Pawn[0x08]; // 0x458(0x08)
	struct FMulticastDelegate OnInstigatedAnyDamage[0x10]; // 0x460(0x10)

	void *fe617afbe6(); // Function Engine.Controller.*fe617afbe6 // Native|Public|BlueprintCallable // @ game+0x65d4918
	void OnRep_PlayerState(); // Function Engine.Controller.OnRep_PlayerState // Native|Public // @ game+0x583cd98
	void Possess(); // Function Engine.Controller.Possess // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x585ece8
	bool *08ab1c5256(struct AActor** Other); // Function Engine.Controller.*08ab1c5256 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65d2954
	void *5d83ffddec(); // Function Engine.Controller.*5d83ffddec // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ccac4
	void *05bca2745b(); // Function Engine.Controller.*05bca2745b // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cbef4
	void *8da1de78a6(); // Function Engine.Controller.*8da1de78a6 // Native|Public|BlueprintCallable // @ game+0x65db2a4
	void GetControlRotation(); // Function Engine.Controller.GetControlRotation // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c75a4
	void *25604da1d8(); // Function Engine.Controller.*25604da1d8 // Native|Public|BlueprintCallable // @ game+0x58abe1c
	struct FVector *047360b192(); // Function Engine.Controller.*047360b192 // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x65c14b4
	void *dcb26b0e9a(); // Function Engine.Controller.*dcb26b0e9a // Native|Public|BlueprintCallable // @ game+0x586e5d4
	void *2e5b1c76bd(); // Function Engine.Controller.*2e5b1c76bd // Final|Native|Public|BlueprintCallable // @ game+0x65bf144
	void *12f9777c6b(); // Function Engine.Controller.*12f9777c6b // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65da230
	void *2dd8068e51(); // Function Engine.Controller.*2dd8068e51 // Native|Public|BlueprintCallable // @ game+0x65d4900
	void *2c664b8b49(); // Function Engine.Controller.*2c664b8b49 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc980
	void StopMovement(); // Function Engine.Controller.StopMovement // Native|Public|BlueprintCallable // @ game+0x65df2c8
	void *a51dacc819(); // Function Engine.Controller.*a51dacc819 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7b4c
	void *9955fb3f45(); // Function Engine.Controller.*9955fb3f45 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cca9c
	struct FRotator *32780b0e26(); // Function Engine.Controller.*32780b0e26 // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0xacf898
	struct U*271a14efcc* ReceiveInstigatedAnyDamage(struct AActor** DamagedActor); // Function Engine.Controller.ReceiveInstigatedAnyDamage // BlueprintAuthorityOnly|Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void *796d6f386f(); // Function Engine.Controller.*796d6f386f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ccbd8
	void K2_GetPawn(); // Function Engine.Controller.K2_GetPawn // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cff98
	void *7d0cb6afd9(); // Function Engine.Controller.*7d0cb6afd9 // Native|Public|BlueprintCallable // @ game+0x65df7ec
	void *3d893e1812(); // Function Engine.Controller.*3d893e1812 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cce58
	void OnRep_Pawn(); // Function Engine.Controller.OnRep_Pawn // Native|Public // @ game+0x580f068
};

// Class Engine.SpringArmComponent
// Size: 0x560 (Inherited: 0x4d0)
struct USpringArmComponent : USceneComponent {
	float TargetArmLength[0x04]; // 0x4d0(0x04)
	struct FVector SocketOffset[0x0c]; // 0x4d4(0x0c)
	struct FVector TargetOffset[0x0c]; // 0x4e0(0x0c)
	float ProbeSize[0x04]; // 0x4ec(0x04)
	enum class ECollisionChannel ProbeChannel; // 0x4f0(0x01)
	char pad_4F1[0x3]; // 0x4f1(0x03)
	char bDoCollisionTest : 1; // 0x4f4(0x01)
	char bUsePawnControlRotation : 1; // 0x4f4(0x01)
	char bInheritPitch : 1; // 0x4f4(0x01)
	char bInheritYaw : 1; // 0x4f4(0x01)
	char bInheritRoll : 1; // 0x4f4(0x01)
	char bLockPitchLag : 1; // 0x4f4(0x01)
	char bLockYawLag : 1; // 0x4f4(0x01)
	char bLockRollLag : 1; // 0x4f4(0x01)
	char bEnableCameraLag : 1; // 0x4f5(0x01)
	char bEnableCameraRotationLag : 1; // 0x4f5(0x01)
	char bUseCameraLagSubstepping : 1; // 0x4f5(0x01)
	char bDrawDebugLagMarkers : 1; // 0x4f5(0x01)
	char pad_4F5_4 : 4; // 0x4f5(0x01)
	char pad_4F6[0x2]; // 0x4f6(0x02)
	float CameraLagSpeed[0x04]; // 0x4f8(0x04)
	float CameraRotationLagSpeed[0x04]; // 0x4fc(0x04)
	float CameraLagMaxTimeStep[0x04]; // 0x500(0x04)
	float CameraLagMaxDistance[0x04]; // 0x504(0x04)
	char pad_508[0x58]; // 0x508(0x58)
};

// Class Engine.PlayerController
// Size: 0x7a0 (Inherited: 0x470)
struct APlayerController : AController {
	struct UPlayer* Player[0x08]; // 0x470(0x08)
	char pad_478[0x8]; // 0x478(0x08)
	struct APawn* *5355705fb6[0x08]; // 0x480(0x08)
	struct U*7f392fdd20* *53da961471[0x08]; // 0x488(0x08)
	char pad_490[0x8]; // 0x490(0x08)
	struct AHUD* *09f6cda326[0x08]; // 0x498(0x08)
	struct APlayerCameraManager* PlayerCameraManager[0x08]; // 0x4a0(0x08)
	struct UClass* PlayerCameraManagerClass[0x08]; // 0x4a8(0x08)
	bool *c935c04b6a; // 0x4b0(0x01)
	char pad_4B1[0x3]; // 0x4b1(0x03)
	struct FRotator TargetViewRotation[0x0c]; // 0x4b4(0x0c)
	char pad_4C0[0xc]; // 0x4c0(0x0c)
	float SmoothTargetViewRotationSpeed[0x04]; // 0x4cc(0x04)
	struct TArray<struct AActor*> *62de05ec1f[0x10]; // 0x4d0(0x10)
	char pad_4E0[0x4]; // 0x4e0(0x04)
	float *7127c3b7ef[0x04]; // 0x4e4(0x04)
	struct FVector *1c94c6d466[0x0c]; // 0x4e8(0x0c)
	struct FRotator *104047d191[0x0c]; // 0x4f4(0x0c)
	int32 *0b2013c943[0x04]; // 0x500(0x04)
	char pad_504[0x4]; // 0x504(0x04)
	struct UCheatManager* CheatManager[0x08]; // 0x508(0x08)
	struct UClass* CheatClass[0x08]; // 0x510(0x08)
	struct UPlayerInput* PlayerInput[0x08]; // 0x518(0x08)
	struct TArray<struct F*dfbef80de6> *6f0ea30984[0x10]; // 0x520(0x10)
	char pad_530[0x90]; // 0x530(0x90)
	char pad_5C0_0 : 3; // 0x5c0(0x01)
	char bPlayerIsWaiting : 1; // 0x5c0(0x01)
	char pad_5C0_4 : 4; // 0x5c0(0x01)
	char pad_5C1[0x3]; // 0x5c1(0x03)
	bool *348e8c60ad; // 0x5c4(0x01)
	char pad_5C5[0x3b]; // 0x5c5(0x3b)
	struct UNetConnection* *ef8b6622cb[0x08]; // 0x600(0x08)
	struct UNetConnection* NetConnection[0x08]; // 0x608(0x08)
	char pad_610[0xc]; // 0x610(0x0c)
	float InputYawScale[0x04]; // 0x61c(0x04)
	float InputPitchScale[0x04]; // 0x620(0x04)
	float InputRollScale[0x04]; // 0x624(0x04)
	char bShowMouseCursor : 1; // 0x628(0x01)
	char bEnableClickEvents : 1; // 0x628(0x01)
	char bEnableTouchEvents : 1; // 0x628(0x01)
	char bEnableMouseOverEvents : 1; // 0x628(0x01)
	char bEnableTouchOverEvents : 1; // 0x628(0x01)
	char bForceFeedbackEnabled : 1; // 0x628(0x01)
	char pad_628_6 : 2; // 0x628(0x01)
	char pad_629[0x7]; // 0x629(0x07)
	struct TArray<struct FKey> ClickEventKeys[0x10]; // 0x630(0x10)
	enum class EMouseCursor DefaultMouseCursor; // 0x640(0x01)
	enum class EMouseCursor CurrentMouseCursor; // 0x641(0x01)
	enum class ECollisionChannel DefaultClickTraceChannel; // 0x642(0x01)
	enum class ECollisionChannel CurrentClickTraceChannel; // 0x643(0x01)
	float HitResultTraceDistance[0x04]; // 0x644(0x04)
	char pad_648[0x80]; // 0x648(0x80)
	struct U*4aa7f8d102* *3836f05d7e[0x08]; // 0x6c8(0x08)
	char pad_6D0_0 : 3; // 0x6d0(0x01)
	char bShouldPerformFullTickWhenPaused : 1; // 0x6d0(0x01)
	char pad_6D0_4 : 4; // 0x6d0(0x01)
	char pad_6D1[0x17]; // 0x6d1(0x17)
	struct UTouchInterface* *8722c902fc[0x08]; // 0x6e8(0x08)
	char pad_6F0[0x40]; // 0x6f0(0x40)
	struct ASpectatorPawn* SpectatorPawn[0x08]; // 0x730(0x08)
	struct FVector SpawnLocation[0x0c]; // 0x738(0x0c)
	char pad_744[0x4]; // 0x744(0x04)
	bool *3375ec9f26; // 0x748(0x01)
	char pad_749[0x1]; // 0x749(0x01)
	uint16 *d9a44bb2ce[0x02]; // 0x74a(0x02)
	uint16 *31f30dbdc2[0x02]; // 0x74c(0x02)
	char pad_74E[0x2]; // 0x74e(0x02)
	struct AActor* *a15f7f3a93[0x08]; // 0x750(0x08)
	struct AActor* *7cf934aa32[0x08]; // 0x758(0x08)
	char pad_760[0x40]; // 0x760(0x40)

	void *b9986a0d77(); // Function Engine.PlayerController.*b9986a0d77 // Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x65d7478
	void *ca18aae7b1(); // Function Engine.PlayerController.*ca18aae7b1 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x65d51cc
	void ConsoleKey(); // Function Engine.PlayerController.ConsoleKey // Exec|Native|Public // @ game+0x65c233c
	void DecDISPSharpness(); // Function Engine.PlayerController.DecDISPSharpness // Exec|Native|Public // @ game+0x65c2d28
	void EnableCheats(); // Function Engine.PlayerController.EnableCheats // Exec|Native|Public // @ game+0x65c4c48
	void *8828e60900(); // Function Engine.PlayerController.*8828e60900 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c0f98
	void *6aa0cf84c3(); // Function Engine.PlayerController.*6aa0cf84c3 // Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x65d6be8
	void RestartLevel(); // Function Engine.PlayerController.RestartLevel // Exec|Native|Public // @ game+0x65d495c
	void *562fffde91(); // Function Engine.PlayerController.*562fffde91 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c15c0
	void ClientRestart(); // Function Engine.PlayerController.ClientRestart // Net|NetReliableNative|Event|Public|NetClient // @ game+0x6db4d4
	void *8b2a8ba05e(); // Function Engine.PlayerController.*8b2a8ba05e // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x65d6f00
	void *ccea1e8dcd(); // Function Engine.PlayerController.*ccea1e8dcd // Final|Net|NetReliableNative|Event|Public|NetClient // @ game+0x65bfdac
	void *b9a5b90052(); // Function Engine.PlayerController.*b9a5b90052 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x65d6f4c
	float *7aff3172b7(); // Function Engine.PlayerController.*7aff3172b7 // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x65c1120
	void *f341da3823(); // Function Engine.PlayerController.*f341da3823 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65bfd94
	void Camera(); // Function Engine.PlayerController.Camera // Exec|Native|Public // @ game+0x65beca0
	enum class ECameraAnimPlaySpace *7efee3e988(); // Function Engine.PlayerController.*7efee3e988 // Net|Native|Event|Public|HasDefaults|NetClient|BlueprintCallable // @ game+0x60d9fc
	struct FVector2D *64e09ff94c(bool bPlayerViewportRelative); // Function Engine.PlayerController.*64e09ff94c // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65d4234
	void *109ed542bf(); // Function Engine.PlayerController.*109ed542bf // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65bfd64
	struct FName *5cb6d00d4d(); // Function Engine.PlayerController.*5cb6d00d4d // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c00ec
	void *09b6a398ff(); // Function Engine.PlayerController.*09b6a398ff // Net|Native|Event|Public|NetClient|BlueprintCallable // @ game+0x65c1784
	void *6cfe3183e5(); // Function Engine.PlayerController.*6cfe3183e5 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0xdd86dc
	void *eaa37b6d9f(); // Function Engine.PlayerController.*eaa37b6d9f // Final|Native|Public|BlueprintCallable // @ game+0x65df218
	struct FHitResult *11cd5a1cd2(); // Function Engine.PlayerController.*11cd5a1cd2 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c8100
	float *3229537f4b(enum class *ab22144e19 BlendFunc); // Function Engine.PlayerController.*3229537f4b // Native|Public|BlueprintCallable // @ game+0x65de048
	void *61ab21bf09(); // Function Engine.PlayerController.*61ab21bf09 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c8a78
	struct FHitResult *7d402319f6(); // Function Engine.PlayerController.*7d402319f6 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7f90
	void *0b5b086a5a(); // Function Engine.PlayerController.*0b5b086a5a // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x65d75bc
	void ServerUpdateLevelVisibility(struct FName* Param0); // Function Engine.PlayerController.ServerUpdateLevelVisibility // Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0xbf1b4c
	void *aa5dd0a8e7(); // Function Engine.PlayerController.*aa5dd0a8e7 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c12f8
	void *9a1480ca0e(); // Function Engine.PlayerController.*9a1480ca0e // Net|NetReliableNative|Event|Public|NetClient // @ game+0xcbfa28
	struct FHitResult *b891a072c6(); // Function Engine.PlayerController.*b891a072c6 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7e20
	void *c6b3360e80(struct FKey* Key); // Function Engine.PlayerController.*c6b3360e80 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9610
	void SwitchLevel(); // Function Engine.PlayerController.SwitchLevel // Exec|Native|Public // @ game+0x65df3f0
	float *0c46468f00(); // Function Engine.PlayerController.*0c46468f00 // Final|Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x65bf3a8
	void *223c7f5c7b(); // Function Engine.PlayerController.*223c7f5c7b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xde04d0
	void *22f1694b2b(bool bInCinematicMode, bool bAffectsHUD); // Function Engine.PlayerController.*22f1694b2b // Native|Public|BlueprintCallable // @ game+0x65d990c
	void IncDISPSharpness(); // Function Engine.PlayerController.IncDISPSharpness // Exec|Native|Public // @ game+0x65cc2c4
	void *ca36ac1db5(); // Function Engine.PlayerController.*ca36ac1db5 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c1044
	void *4444f6dc2e(enum class ECollisionChannel TraceChannel, struct FHitResult* HitResult); // Function Engine.PlayerController.*4444f6dc2e // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c82b8
	struct FVector DeprojectMousePositionToWorld(); // Function Engine.PlayerController.DeprojectMousePositionToWorld // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c2ed4
	void AddRollInput(); // Function Engine.PlayerController.AddRollInput // Native|Public|BlueprintCallable // @ game+0x65be2d0
	void *45a7bb797b(); // Function Engine.PlayerController.*45a7bb797b // Native|Public|BlueprintCallable // @ game+0x65bc640
	void *cff048ac18(); // Function Engine.PlayerController.*cff048ac18 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x65d4fe4
	struct FVector_NetQuantize ServerUpdateCamera(); // Function Engine.PlayerController.ServerUpdateCamera // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x65d734c
	float *4feca51654(); // Function Engine.PlayerController.*4feca51654 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c8b6c
	void *a7dc80b0cb(); // Function Engine.PlayerController.*a7dc80b0cb // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65d337c
	void *91e5ce2a61(struct FVector* RotationRate); // Function Engine.PlayerController.*91e5ce2a61 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c908c
	void *f595309bb8(); // Function Engine.PlayerController.*f595309bb8 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xcd82b4
	void ToggleSpeaking(); // Function Engine.PlayerController.ToggleSpeaking // Exec|Native|Public // @ game+0x65df580
	void *128ad6584b(); // Function Engine.PlayerController.*128ad6584b // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x65bfd7c
	void *7d9f70de59(); // Function Engine.PlayerController.*7d9f70de59 // Net|Native|Event|Public|NetServer|HasDefaults|NetValidate // @ game+0x65d6f98
	void *87d4bd0ed1(); // Function Engine.PlayerController.*87d4bd0ed1 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c1830
	void *1bf2c0fa15(); // Function Engine.PlayerController.*1bf2c0fa15 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65bfe2c
	struct FKey *b46560c95f(); // Function Engine.PlayerController.*b46560c95f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c8f98
	void *9333fe086e(enum class EControllerHand Hand); // Function Engine.PlayerController.*9333fe086e // Final|Native|Public|BlueprintCallable // @ game+0x65d3ff0
	void OnRep_TargetViewRotation(); // Function Engine.PlayerController.OnRep_TargetViewRotation // Native|Public // @ game+0x5882380
	void *054ae698aa(); // Function Engine.PlayerController.*054ae698aa // Net|NetReliableNative|Event|Public|NetClient // @ game+0x5908f20
	void *0a767a728b(); // Function Engine.PlayerController.*0a767a728b // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x65d7608
	void *527867814b(); // Function Engine.PlayerController.*527867814b // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0xcb2ff4
	void Pause(); // Function Engine.PlayerController.Pause // Exec|Native|Public // @ game+0x65d3414
	float *f42971a4a8(); // Function Engine.PlayerController.*f42971a4a8 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c138c
	void *d34ced269f(); // Function Engine.PlayerController.*d34ced269f // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x65d71ec
	void *d32f54be22(); // Function Engine.PlayerController.*d32f54be22 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x65d7654
	void *488be087b5(struct AActor** Param0); // Function Engine.PlayerController.*488be087b5 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65bfe44
	void *bdb5e8e311(); // Function Engine.PlayerController.*bdb5e8e311 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65bff28
	void *3bd9a426f4(); // Function Engine.PlayerController.*3bd9a426f4 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c210c
	void ClientRetryClientRestart(); // Function Engine.PlayerController.ClientRetryClientRestart // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c0fb0
	void *ca6345be4e(); // Function Engine.PlayerController.*ca6345be4e // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c0054
	void *bcb4c91970(); // Function Engine.PlayerController.*bcb4c91970 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65bffbc
	struct AActor* *bc7ee5fe98(); // Function Engine.PlayerController.*bc7ee5fe98 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c1658
	float *31dade5ead(float* ScreenY, struct FVector* WorldDirection); // Function Engine.PlayerController.*31dade5ead // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c2fdc
	void *3f9771d56c(); // Function Engine.PlayerController.*3f9771d56c // Net|NetReliableNative|Event|Public|NetClient // @ game+0xddfeec
	void *ac56631480(); // Function Engine.PlayerController.*ac56631480 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x65d6a88
	void LocalTravel(); // Function Engine.PlayerController.LocalTravel // Exec|Native|Public // @ game+0x65d2a98
	void *a1c104b477(); // Function Engine.PlayerController.*a1c104b477 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x65d5098
	void *04dcc60588(struct UForceFeedbackEffect** ForceFeedbackEffect); // Function Engine.PlayerController.*04dcc60588 // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x65c19a8
	void FOV(); // Function Engine.PlayerController.FOV // Exec|Native|Public // @ game+0x65c4e68
	void *085d1b29e4(); // Function Engine.PlayerController.*085d1b29e4 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x65d7570
	float *7ee32fbf1d(); // Function Engine.PlayerController.*7ee32fbf1d // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9e0c
	void *e155e1afc0(float* Frequency, float* Amplitude); // Function Engine.PlayerController.*e155e1afc0 // Final|Native|Public|BlueprintCallable // @ game+0x65db080
	struct APlayerState* *7efa7d97f8(); // Function Engine.PlayerController.*7efa7d97f8 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c0d3c
	void *121dfd5443(struct FKey* Key); // Function Engine.PlayerController.*121dfd5443 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65df9ac
	void *bd26ba1bdf(struct FKey* Key); // Function Engine.PlayerController.*bd26ba1bdf // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65dfaa0
	void *1c6382db08(); // Function Engine.PlayerController.*1c6382db08 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7cf0
	bool *81cd11cd3f(); // Function Engine.PlayerController.*81cd11cd3f // Net|NetReliableNative|Event|Public|NetClient // @ game+0x6a94ac
	void *94bb7e21d2(); // Function Engine.PlayerController.*94bb7e21d2 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x65d71a0
	void AddPitchInput(); // Function Engine.PlayerController.AddPitchInput // Native|Public|BlueprintCallable // @ game+0x65bde8c
	void *2bffd3dab0(); // Function Engine.PlayerController.*2bffd3dab0 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x65d5180
	struct UClass* *ab766b338c(); // Function Engine.PlayerController.*ab766b338c // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x65c18c4
	void *bbef2bccc4(struct FString* Param0, bool Param2); // Function Engine.PlayerController.*bbef2bccc4 // Final|Native|Public|HasDefaults // @ game+0x65c1c44
	void *81a50ace3a(int32* SizeX); // Function Engine.PlayerController.*81a50ace3a // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65cbf1c
	void *11160db8c7(); // Function Engine.PlayerController.*11160db8c7 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c1818
	float *b0e0e5c0d2(float* BlendInTime, bool bLoop, enum class ECameraAnimPlaySpace Space); // Function Engine.PlayerController.*b0e0e5c0d2 // Net|Native|Event|Public|HasDefaults|NetClient|BlueprintCallable // @ game+0x65c0370
	int32 *fd0afdf5cf(); // Function Engine.PlayerController.*fd0afdf5cf // Final|Native|Public|BlueprintCallable // @ game+0x65dc0c8
	float *b8942aeaa0(); // Function Engine.PlayerController.*b8942aeaa0 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9358
	void *50182b7bf6(); // Function Engine.PlayerController.*50182b7bf6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cb560
	void SendToConsole(); // Function Engine.PlayerController.SendToConsole // Exec|Native|Public // @ game+0x65d4f20
	float *bdfb436ed1(); // Function Engine.PlayerController.*bdfb436ed1 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9254
	void AddYawInput(); // Function Engine.PlayerController.AddYawInput // Native|Public|BlueprintCallable // @ game+0x65be6f8
	void *dc76996ac2(); // Function Engine.PlayerController.*dc76996ac2 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c1ff0
	void SetName(); // Function Engine.PlayerController.SetName // Exec|Native|Public // @ game+0x65dc318
	void *0a4900b11d(); // Function Engine.PlayerController.*0a4900b11d // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c1108
	void *16e7b3d651(); // Function Engine.PlayerController.*16e7b3d651 // Native|Public|BlueprintCallable // @ game+0x65de210
	void EnableTAA(); // Function Engine.PlayerController.EnableTAA // Exec|Native|Public // @ game+0x5874fb0
	void *2263f81ded(enum class *ae68ab384e Param1); // Function Engine.PlayerController.*2263f81ded // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x65c1e18
	struct FHitResult *246c55ff62(); // Function Engine.PlayerController.*246c55ff62 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c8618
	void *6e76f35baa(); // Function Engine.PlayerController.*6e76f35baa // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x65d70e0
	void *79d2f47e0a(); // Function Engine.PlayerController.*79d2f47e0a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc9a8
	void *1000a8c5db(); // Function Engine.PlayerController.*1000a8c5db // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c0f04
	void EnableDLSS(); // Function Engine.PlayerController.EnableDLSS // Exec|Native|Public // @ game+0x58af250
	struct FName *e351dac2e0(); // Function Engine.PlayerController.*e351dac2e0 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c1a88
	void *5f3e718776(); // Function Engine.PlayerController.*5f3e718776 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65da2a4
	float *bfa37ce532(); // Function Engine.PlayerController.*bfa37ce532 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c8cb4
	bool *ccb0abfa15(); // Function Engine.PlayerController.*ccb0abfa15 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c0bb0
	void *25613f28fc(struct FName* Param0); // Function Engine.PlayerController.*25613f28fc // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c0a78
	struct FHitResult *7e6c398dc3(); // Function Engine.PlayerController.*7e6c398dc3 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c8468
	float *83351c4d17(float* Duration, bool bAffectsLeftSmall, bool bAffectsRightSmall); // Function Engine.PlayerController.*83351c4d17 // Final|Native|Public|BlueprintCallable // @ game+0x65d3ce4
	struct FVector *1c20c798e9(); // Function Engine.PlayerController.*1c20c798e9 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d836c
	void *61c1973156(); // Function Engine.PlayerController.*61c1973156 // Final|Native|Public|BlueprintCallable // @ game+0x65bf338
	void *d3c7c3f095(bool bLooping); // Function Engine.PlayerController.*d3c7c3f095 // Net|Native|Event|Public|NetClient|BlueprintCallable // @ game+0x65c069c
	bool *e1ee59f3bc(); // Function Engine.PlayerController.*e1ee59f3bc // Net|NetReliableNative|Event|Public|NetClient // @ game+0x724908
	void *beec12a508(); // Function Engine.PlayerController.*beec12a508 // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0xa36eec
	void *dcb445d84f(struct USoundBase** Param0); // Function Engine.PlayerController.*dcb445d84f // Net|Native|Event|Public|NetClient // @ game+0x65c07d0
	float *370ce3ebac(struct USoundBase** Param0); // Function Engine.PlayerController.*370ce3ebac // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x65c08f4
	void StartFire(); // Function Engine.PlayerController.StartFire // Exec|Native|Public // @ game+0x65debec
	void *056bb0b803(); // Function Engine.PlayerController.*056bb0b803 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c21c8
	void *e2fc8aa029(); // Function Engine.PlayerController.*e2fc8aa029 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x65c0254
};

// Class Engine.Info
// Size: 0x3e8 (Inherited: 0x3e8)
struct AInfo : AActor {
};

// Class Engine.GameModeBase
// Size: 0x488 (Inherited: 0x3e8)
struct AGameModeBase : AInfo {
	struct FString OptionsString[0x10]; // 0x3e8(0x10)
	struct UClass* GameSessionClass[0x08]; // 0x3f8(0x08)
	struct UClass* GameStateClass[0x08]; // 0x400(0x08)
	struct UClass* PlayerControllerClass[0x08]; // 0x408(0x08)
	struct UClass* PlayerStateClass[0x08]; // 0x410(0x08)
	struct FStringClassReference HUDClass[0x10]; // 0x418(0x10)
	struct UClass* DefaultPawnClass[0x08]; // 0x428(0x08)
	struct FStringClassReference SpectatorClass[0x10]; // 0x430(0x10)
	struct UClass* ReplaySpectatorPlayerControllerClass[0x08]; // 0x440(0x08)
	struct AGameSession* GameSession[0x08]; // 0x448(0x08)
	struct AGameStateBase* GameState[0x08]; // 0x450(0x08)
	struct FText *638604ca81[0x18]; // 0x458(0x18)
	char bUseSeamlessTravel : 1; // 0x470(0x01)
	char bStartPlayersAsSpectators : 1; // 0x470(0x01)
	char bPauseable : 1; // 0x470(0x01)
	char pad_470_3 : 5; // 0x470(0x01)
	char pad_471[0x17]; // 0x471(0x17)

	struct AController* RestartPlayerAtTransform(); // Function Engine.GameModeBase.RestartPlayerAtTransform // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65d4b84
	void *e97d812c21(); // Function Engine.GameModeBase.*e97d812c21 // Native|Public|BlueprintCallable // @ game+0xa94e5c
	void *58faa59de5(); // Function Engine.GameModeBase.*58faa59de5 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x58ab078
	void SpawnDefaultPawnFor(struct AActor** StartSpot); // Function Engine.GameModeBase.SpawnDefaultPawnFor // Native|Event|Public|BlueprintEvent // @ game+0xcb17e0
	void K2_PostLogin(); // Function Engine.GameModeBase.K2_PostLogin // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct FString K2_OnChangeName(); // Function Engine.GameModeBase.K2_OnChangeName // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void RestartPlayer(); // Function Engine.GameModeBase.RestartPlayer // Native|Public|BlueprintCallable // @ game+0x65d4a10
	void StartPlay(); // Function Engine.GameModeBase.StartPlay // Native|Public|BlueprintCallable // @ game+0xbce874
	void *1d6a714d9c(); // Function Engine.GameModeBase.*1d6a714d9c // Native|Public|BlueprintCallable // @ game+0x65ca3c0
	struct AController* RestartPlayerAtPlayerStart(); // Function Engine.GameModeBase.RestartPlayerAtPlayerStart // Native|Public|BlueprintCallable // @ game+0x65d4aa4
	void FindPlayerStart(struct FString* IncomingName); // Function Engine.GameModeBase.FindPlayerStart // Native|Event|Public|BlueprintEvent // @ game+0xc66768
	void K2_OnRestartPlayer(); // Function Engine.GameModeBase.K2_OnRestartPlayer // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct APlayerState* CanSpectate(); // Function Engine.GameModeBase.CanSpectate // Native|Event|Public|BlueprintEvent // @ game+0x65bee00
	void InitializeHUDForPlayer(); // Function Engine.GameModeBase.InitializeHUDForPlayer // Native|Event|Protected|BlueprintEvent // @ game+0xdb2118
	void *95ac877b57(struct AController** Player); // Function Engine.GameModeBase.*95ac877b57 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x65cfae8
	void *8a2f9ba8dd(); // Function Engine.GameModeBase.*8a2f9ba8dd // Native|Public|BlueprintCallable // @ game+0x65ca2dc
	void ResetLevel(); // Function Engine.GameModeBase.ResetLevel // Native|Public|BlueprintCallable // @ game+0x5911a38
	void HandleStartingNewPlayer(); // Function Engine.GameModeBase.HandleStartingNewPlayer // Native|Event|Public|BlueprintEvent // @ game+0xb7bee4
	void ChoosePlayerStart(); // Function Engine.GameModeBase.ChoosePlayerStart // Native|Event|Public|BlueprintEvent // @ game+0xcb7c88
	void ShouldReset(); // Function Engine.GameModeBase.ShouldReset // Native|Event|Public|BlueprintEvent // @ game+0x65d4528
	struct APlayerController* MustSpectate(); // Function Engine.GameModeBase.MustSpectate // Native|Event|Public|BlueprintEvent|Const // @ game+0xca49c0
	struct APlayerController* K2_OnSwapPlayerControllers(); // Function Engine.GameModeBase.K2_OnSwapPlayerControllers // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void PlayerCanRestart(struct APlayerController** Player); // Function Engine.GameModeBase.PlayerCanRestart // Native|Event|Public|BlueprintEvent // @ game+0xb7be24
	void InitStartSpot(struct AActor** StartSpot); // Function Engine.GameModeBase.InitStartSpot // Native|Event|Public|BlueprintEvent // @ game+0xda5024
	struct FString *3577785442(); // Function Engine.GameModeBase.*3577785442 // Native|Public|BlueprintCallable // @ game+0x65bf1d4
	void K2_OnLogout(); // Function Engine.GameModeBase.K2_OnLogout // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void SpawnDefaultPawnAtTransform(struct AController** NewPlayer); // Function Engine.GameModeBase.SpawnDefaultPawnAtTransform // Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0xd001f0
	struct AController* GetDefaultPawnClassForController(); // Function Engine.GameModeBase.GetDefaultPawnClassForController // Native|Event|Public|BlueprintEvent // @ game+0xcd3350
};

// Class Engine.GameMode
// Size: 0x4c8 (Inherited: 0x488)
struct AGameMode : AGameModeBase {
	struct FName *59acc54cb2[0x08]; // 0x488(0x08)
	char bDelayedStart : 1; // 0x490(0x01)
	char pad_490_1 : 7; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	int32 NumSpectators[0x04]; // 0x494(0x04)
	int32 NumPlayers[0x04]; // 0x498(0x04)
	int32 NumBots[0x04]; // 0x49c(0x04)
	float MinRespawnDelay[0x04]; // 0x4a0(0x04)
	int32 NumTravellingPlayers[0x04]; // 0x4a4(0x04)
	struct UClass* *aa08ae227e[0x08]; // 0x4a8(0x08)
	struct TArray<struct APlayerState*> *ea842fe704[0x10]; // 0x4b0(0x10)
	float *40f6dab750[0x04]; // 0x4c0(0x04)
	bool bHandleDedicatedServerReplays; // 0x4c4(0x01)
	char pad_4C5[0x3]; // 0x4c5(0x03)

	void *a7a9250f62(); // Function Engine.GameMode.*a7a9250f62 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc088
	void *73ab7fb69b(); // Function Engine.GameMode.*73ab7fb69b // Native|Public|BlueprintCallable // @ game+0x65c4e3c
	void K2_OnSetMatchState(); // Function Engine.GameMode.K2_OnSetMatchState // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void ReadyToEndMatch(); // Function Engine.GameMode.ReadyToEndMatch // Native|Event|Protected|BlueprintEvent // @ game+0xb67268
	void *97d9a6b98e(); // Function Engine.GameMode.*97d9a6b98e // Native|Public|BlueprintCallable // @ game+0x65d4944
	void *f826cabf6b(); // Function Engine.GameMode.*f826cabf6b // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ccb08
	void ReadyToStartMatch(); // Function Engine.GameMode.ReadyToStartMatch // Native|Event|Protected|BlueprintEvent // @ game+0xd0bab0
	void *d7b5e87aef(); // Function Engine.GameMode.*d7b5e87aef // Native|Public|BlueprintCallable // @ game+0x58aa0dc
	void Say(); // Function Engine.GameMode.Say // Exec|Native|Public|BlueprintCallable // @ game+0x65d4d48
	void *b8de88dd31(); // Function Engine.GameMode.*b8de88dd31 // Native|Public|BlueprintCallable // @ game+0x65bc5f0
	void *9ecd3b7aa4(); // Function Engine.GameMode.*9ecd3b7aa4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9a3c
	void SetBandwidthLimit(); // Function Engine.GameMode.SetBandwidthLimit // Exec|Native|Public // @ game+0x65d8a30
};

// Class Engine.PlayerState
// Size: 0x478 (Inherited: 0x3e8)
struct APlayerState : AInfo {
	char pad_3E8[0x8]; // 0x3e8(0x08)
	int32 PlayerId[0x04]; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct UClass* *aa08ae227e[0x08]; // 0x3f8(0x08)
	struct FString PlayerName[0x10]; // 0x400(0x10)
	bool Ping; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	int32 StartTime[0x04]; // 0x414(0x04)
	struct FUniqueNetIdRepl UniqueId[0x18]; // 0x418(0x18)
	struct FString *fef21e2df7[0x10]; // 0x430(0x10)
	char pad_440[0x4]; // 0x440(0x04)
	char bIsSpectator : 1; // 0x444(0x01)
	char *b94898b1bc : 1; // 0x444(0x01)
	char bIsABot : 1; // 0x444(0x01)
	char pad_444_3 : 1; // 0x444(0x01)
	char *9a7d67065f : 1; // 0x444(0x01)
	char *50f72176d9 : 1; // 0x444(0x01)
	char pad_444_6 : 2; // 0x444(0x01)
	char pad_445[0x13]; // 0x445(0x13)
	float Score[0x04]; // 0x458(0x04)
	char pad_45C[0x18]; // 0x45c(0x18)
	bool *d43bf3f659; // 0x474(0x01)
	char pad_475[0x3]; // 0x475(0x03)

	void OnRep_bIsInactive(); // Function Engine.PlayerState.OnRep_bIsInactive // Native|Public // @ game+0x5907f08
	void OnRep_Score(); // Function Engine.PlayerState.OnRep_Score // Native|Public // @ game+0x5823324
	void ReceiveCopyProperties(); // Function Engine.PlayerState.ReceiveCopyProperties // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void OnRep_PlayerName(); // Function Engine.PlayerState.OnRep_PlayerName // Native|Public // @ game+0x58ce3b4
	void ReceiveOverrideWith(); // Function Engine.PlayerState.ReceiveOverrideWith // Event|Protected|BlueprintEvent // @ game+0x2cd4ac
	void OnRep_UniqueId(); // Function Engine.PlayerState.OnRep_UniqueId // Native|Public // @ game+0x5907f20
};

// Class Engine.SkeletalMeshActor
// Size: 0x470 (Inherited: 0x3e8)
struct ASkeletalMeshActor : AActor {
	char pad_3E8[0x8]; // 0x3e8(0x08)
	char bShouldDoAnimNotifies : 1; // 0x3f0(0x01)
	char bWakeOnLevelStart : 1; // 0x3f0(0x01)
	char pad_3F0_2 : 6; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct USkeletalMeshComponent* SkeletalMeshComponent[0x08]; // 0x3f8(0x08)
	struct USkeletalMesh* *573ace7b5a[0x08]; // 0x400(0x08)
	struct UPhysicsAsset* *12e34c7fa2[0x08]; // 0x408(0x08)
	struct UMaterialInterface* *4da1d1f3fd[0x08]; // 0x410(0x08)
	struct UMaterialInterface* *77466e8dca[0x08]; // 0x418(0x08)
	char pad_420[0x50]; // 0x420(0x50)

	void OnRep_ReplicatedPhysAsset(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset // Native|Public // @ game+0x58ce3b4
	void OnRep_ReplicatedMesh(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMesh // Native|Public // @ game+0x5823324
	void OnRep_ReplicatedMaterial0(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0 // Native|Public // @ game+0x5907f08
	void OnRep_ReplicatedMaterial1(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1 // Native|Public // @ game+0x5907f20
};

// Class Engine.DestructibleComponent
// Size: 0xd60 (Inherited: 0xca0)
struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0xc98(0x01)
	struct TArray<struct F*53a1c74b57> FractureEffects[0x10]; // 0xca0(0x10)
	bool bEnableHardSleeping; // 0xcb0(0x01)
	char pad_CB1_1 : 7; // 0xcb1(0x01)
	char pad_CB2[0x2]; // 0xcb2(0x02)
	float LargeChunkThreshold[0x04]; // 0xcb4(0x04)
	char pad_CB8[0x10]; // 0xcb8(0x10)
	struct FMulticastDelegate OnComponentFracture[0x10]; // 0xcc8(0x10)
	char pad_CD8[0x88]; // 0xcd8(0x88)

	void *89d8555bbf(struct FVector* HurtOrigin, float* ImpulseStrength); // Function Engine.DestructibleComponent.*89d8555bbf // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e71d8
	struct FVector *b96360052d(); // Function Engine.DestructibleComponent.*b96360052d // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e5fdc
	void *247917c7eb(); // Function Engine.DestructibleComponent.*247917c7eb // Final|Native|Public|BlueprintCallable // @ game+0x6625890
	void *efeced8efa(); // Function Engine.DestructibleComponent.*efeced8efa // Final|Native|Public|BlueprintCallable // @ game+0x65fefc4
};

// Class Engine.SaveGame
// Size: 0x28 (Inherited: 0x28)
struct USaveGame : UObject {
};

// Class Engine.*18316965f0
// Size: 0xa20 (Inherited: 0xa00)
struct U*18316965f0 : UPrimitiveComponent {
	struct FColor ShapeColor[0x04]; // 0x9f8(0x04)
	struct UBodySetup* *2847596841[0x08]; // 0xa00(0x08)
	char *2cbfa4e18b : 1; // 0xa08(0x01)
	char *15d93fcb44 : 1; // 0xa08(0x01)
	char *27dd7eb1bd : 1; // 0xa08(0x01)
	char pad_A0C_3 : 5; // 0xa0c(0x01)
	char pad_A0D[0x3]; // 0xa0d(0x03)
	struct UClass* AreaClass[0x08]; // 0xa10(0x08)
	char pad_A18[0x8]; // 0xa18(0x08)
};

// Class Engine.TargetPoint
// Size: 0x3e8 (Inherited: 0x3e8)
struct ATargetPoint : AActor {
};

// Class Engine.GameStateBase
// Size: 0x428 (Inherited: 0x3e8)
struct AGameStateBase : AInfo {
	struct UClass* GameModeClass[0x08]; // 0x3e8(0x08)
	struct AGameModeBase* AuthorityGameMode[0x08]; // 0x3f0(0x08)
	struct UClass* SpectatorClass[0x08]; // 0x3f8(0x08)
	struct TArray<struct APlayerState*> PlayerArray[0x10]; // 0x400(0x10)
	bool *8642766d5b; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	float *b9ef543610[0x04]; // 0x414(0x04)
	float *9c9ecdea9a[0x04]; // 0x418(0x04)
	float *f4a4fb2240[0x04]; // 0x41c(0x04)
	char pad_420[0x8]; // 0x420(0x08)

	void *6971957481(struct AController** Controller); // Function Engine.GameStateBase.*6971957481 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cafb8
	void *8432ff603b(); // Function Engine.GameStateBase.*8432ff603b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x581d400
	void OnRep_GameModeClass(); // Function Engine.GameStateBase.OnRep_GameModeClass // Native|Protected // @ game+0x58d14fc
	void OnRep_SpectatorClass(); // Function Engine.GameStateBase.OnRep_SpectatorClass // Native|Protected // @ game+0x583cd44
	void OnRep_ReplicatedHasBegunPlay(); // Function Engine.GameStateBase.OnRep_ReplicatedHasBegunPlay // Native|Protected // @ game+0xb125a8
	void *880a119fd9(); // Function Engine.GameStateBase.*880a119fd9 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9d5c
	void *05f73d26c1(); // Function Engine.GameStateBase.*05f73d26c1 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc060
	void OnRep_ReplicatedWorldTimeSeconds(); // Function Engine.GameStateBase.OnRep_ReplicatedWorldTimeSeconds // Native|Protected // @ game+0xbce874
	void *e6ac5dc660(); // Function Engine.GameStateBase.*e6ac5dc660 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x58a7ec8
	void *fae00bc477(struct AController** Controller); // Function Engine.GameStateBase.*fae00bc477 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65caf10
	void *58faa59de5(); // Function Engine.GameStateBase.*58faa59de5 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc0b0
};

// Class Engine.GameState
// Size: 0x448 (Inherited: 0x428)
struct AGameState : AGameStateBase {
	struct FName MatchState[0x08]; // 0x428(0x08)
	struct FName PreviousMatchState[0x08]; // 0x430(0x08)
	int32 ElapsedTime[0x04]; // 0x438(0x04)
	char pad_43C[0xc]; // 0x43c(0x0c)

	void OnRep_ElapsedTime(); // Function Engine.GameState.OnRep_ElapsedTime // Native|Public // @ game+0x5875394
	void OnRep_MatchState(); // Function Engine.GameState.OnRep_MatchState // Native|Public // @ game+0xa94e5c
};

// Class Engine.BoxComponent
// Size: 0xa30 (Inherited: 0xa20)
struct UBoxComponent : U*18316965f0 {
	struct FVector BoxExtent[0x0c]; // 0xa18(0x0c)
	char pad_A2C[0x4]; // 0xa2c(0x04)

	void *e2d2b6102b(); // Function Engine.BoxComponent.*e2d2b6102b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66079ec
	void *375f6933d7(); // Function Engine.BoxComponent.*375f6933d7 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x660563c
	void *4b28c59cdc(); // Function Engine.BoxComponent.*4b28c59cdc // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66236dc
};

// Class Engine.ProjectileMovementComponent
// Size: 0x300 (Inherited: 0x240)
struct UProjectileMovementComponent : UMovementComponent {
	float InitialSpeed[0x04]; // 0x238(0x04)
	float MaxSpeed[0x04]; // 0x23c(0x04)
	char bRotationFollowsVelocity : 1; // 0x240(0x01)
	char bShouldBounce : 1; // 0x240(0x01)
	char bInitialVelocityInLocalSpace : 1; // 0x240(0x01)
	char bForceSubStepping : 1; // 0x240(0x01)
	char bSimulationEnabled : 1; // 0x240(0x01)
	char bSweepCollision : 1; // 0x240(0x01)
	char bIsHomingProjectile : 1; // 0x240(0x01)
	char bBounceAngleAffectsFriction : 1; // 0x240(0x01)
	char bIsSliding : 1; // 0x241(0x01)
	char bInterpMovement : 1; // 0x241(0x01)
	char bInterpRotation : 1; // 0x241(0x01)
	float PreviousHitTime[0x04]; // 0x244(0x04)
	struct FVector PreviousHitNormal[0x0c]; // 0x248(0x0c)
	float ProjectileGravityScale[0x04]; // 0x254(0x04)
	float *1aff06e174[0x04]; // 0x258(0x04)
	float Bounciness[0x04]; // 0x25c(0x04)
	float Friction[0x04]; // 0x260(0x04)
	float BounceVelocityStopSimulatingThreshold[0x04]; // 0x264(0x04)
	float MinFrictionFraction[0x04]; // 0x268(0x04)
	struct FMulticastDelegate OnProjectileBounce[0x10]; // 0x270(0x10)
	struct FMulticastDelegate OnProjectileStop[0x10]; // 0x280(0x10)
	float HomingAccelerationMagnitude[0x04]; // 0x290(0x04)
	struct USceneComponent* HomingTargetComponent[0x08]; // 0x294(0x08)
	float MaxSimulationTimeStep[0x04]; // 0x29c(0x04)
	int32 MaxSimulationIterations[0x04]; // 0x2a0(0x04)
	int32 BounceAdditionalIterations[0x04]; // 0x2a4(0x04)
	float InterpLocationTime[0x04]; // 0x2a8(0x04)
	float InterpRotationTime[0x04]; // 0x2ac(0x04)
	float InterpLocationMaxLagDistance[0x04]; // 0x2b0(0x04)
	float InterpLocationSnapToTargetDistance[0x04]; // 0x2b4(0x04)
	char pad_2B9[0x47]; // 0x2b9(0x47)

	void OnProjectileStopDelegate__DelegateSignature(); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileStopDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x2cd4ac
	void *c41aa9c805(); // Function Engine.ProjectileMovementComponent.*c41aa9c805 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x660beb4
	struct FVector *544ce7c588(); // Function Engine.ProjectileMovementComponent.*544ce7c588 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6616f10
	void StopSimulating(); // Function Engine.ProjectileMovementComponent.StopSimulating // Native|Public|HasOutParms|BlueprintCallable // @ game+0x6637390
	void LimitVelocity(struct FVector* NewVelocity); // Function Engine.ProjectileMovementComponent.LimitVelocity // Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x660f388
	void *c4dbbca7a5(); // Function Engine.ProjectileMovementComponent.*c4dbbca7a5 // Native|Public|BlueprintCallable // @ game+0x587b83c
	void *65ea89a3fb(); // Function Engine.ProjectileMovementComponent.*65ea89a3fb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x660c950
	void *6998c735d5(); // Function Engine.ProjectileMovementComponent.*6998c735d5 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x662f950
	struct FHitResult OnProjectileBounceDelegate__DelegateSignature(); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileBounceDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults // @ game+0x2cd4ac
	void *fa0688bcbd(); // Function Engine.ProjectileMovementComponent.*fa0688bcbd // Native|Public|BlueprintCallable // @ game+0x6628da0
};

// Class Engine.CurveBase
// Size: 0x30 (Inherited: 0x28)
struct UCurveBase : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	float *b1bcc037e3(); // Function Engine.CurveBase.*b1bcc037e3 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65cbd18
	void *684cbb9b81(float* MinTime); // Function Engine.CurveBase.*684cbb9b81 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65cb860
};

// Class Engine.GameUserSettings
// Size: 0x110 (Inherited: 0x28)
struct UGameUserSettings : UObject {
	bool bUseVSync; // 0x28(0x01)
	bool bUseDynamicResolution; // 0x29(0x01)
	char pad_2A[0x4e]; // 0x2a(0x4e)
	uint32 ResolutionSizeX[0x04]; // 0x78(0x04)
	uint32 ResolutionSizeY[0x04]; // 0x7c(0x04)
	uint32 LastUserConfirmedResolutionSizeX[0x04]; // 0x80(0x04)
	uint32 LastUserConfirmedResolutionSizeY[0x04]; // 0x84(0x04)
	int32 WindowPosX[0x04]; // 0x88(0x04)
	int32 WindowPosY[0x04]; // 0x8c(0x04)
	int32 FullscreenMode[0x04]; // 0x90(0x04)
	int32 LastConfirmedFullscreenMode[0x04]; // 0x94(0x04)
	int32 PreferredFullscreenMode[0x04]; // 0x98(0x04)
	uint32 Version[0x04]; // 0x9c(0x04)
	int32 AudioQualityLevel[0x04]; // 0xa0(0x04)
	float FrameRateLimit[0x04]; // 0xa4(0x04)
	char pad_A8[0x4]; // 0xa8(0x04)
	int32 DesiredScreenWidth[0x04]; // 0xac(0x04)
	bool bUseDesiredScreenHeight; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	int32 DesiredScreenHeight[0x04]; // 0xb4(0x04)
	float LastRecommendedScreenWidth[0x04]; // 0xb8(0x04)
	float LastRecommendedScreenHeight[0x04]; // 0xbc(0x04)
	float LastCPUBenchmarkResult[0x04]; // 0xc0(0x04)
	float LastGPUBenchmarkResult[0x04]; // 0xc4(0x04)
	struct TArray<float> LastCPUBenchmarkSteps[0x10]; // 0xc8(0x10)
	struct TArray<float> LastGPUBenchmarkSteps[0x10]; // 0xd8(0x10)
	float LastGPUBenchmarkMultiplier[0x04]; // 0xe8(0x04)
	bool bUseHDRDisplayOutput; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	int32 HDRDisplayOutputNits[0x04]; // 0xf0(0x04)
	enum class EGraphicsAPIType GraphicsAPI; // 0xf4(0x01)
	bool bGPUDebug; // 0xf5(0x01)
	char pad_F6[0x2]; // 0xf6(0x02)
	struct FDateTime GPUDebugActiveDateTime[0x08]; // 0xf8(0x08)
	struct FMulticastDelegate OnGameUserSettingsUINeedsUpdate[0x10]; // 0x100(0x10)

	void LoadSettings(); // Function Engine.GameUserSettings.LoadSettings // Native|Public|BlueprintCallable // @ game+0x6648750
	void *8965889365(); // Function Engine.GameUserSettings.*8965889365 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x664b1d0
	void *35bd157cef(); // Function Engine.GameUserSettings.*35bd157cef // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664d150
	void *bcb8f08616(); // Function Engine.GameUserSettings.*bcb8f08616 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x664c654
	void *7a8928fa14(); // Function Engine.GameUserSettings.*7a8928fa14 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x664a6b4
	void *821eaa3a9c(); // Function Engine.GameUserSettings.*821eaa3a9c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664acbc
	void *877cecaacd(); // Function Engine.GameUserSettings.*877cecaacd // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x664a700
	void *b317a49994(); // Function Engine.GameUserSettings.*b317a49994 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664c670
	void *c3c793a1af(); // Function Engine.GameUserSettings.*c3c793a1af // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664bc58
	int32 GetResolutionScaleInformation(); // Function Engine.GameUserSettings.GetResolutionScaleInformation // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x664c27c
	void *a913e4d760(); // Function Engine.GameUserSettings.*a913e4d760 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664d66c
	void *c1f35611fa(); // Function Engine.GameUserSettings.*c1f35611fa // Final|Native|Public|BlueprintCallable // @ game+0x6654740
	void *1af20eacd3(); // Function Engine.GameUserSettings.*1af20eacd3 // Final|Native|Public|BlueprintCallable // @ game+0x6653a90
	void *83b979d1ed(); // Function Engine.GameUserSettings.*83b979d1ed // Final|Native|Public|BlueprintCallable // @ game+0x6648ad4
	void *0e4dc47720(); // Function Engine.GameUserSettings.*0e4dc47720 // Final|Native|Public|BlueprintCallable // @ game+0x58b340c
	void *a4c56a10e8(); // Function Engine.GameUserSettings.*a4c56a10e8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664a26c
	void *e003595b99(); // Function Engine.GameUserSettings.*e003595b99 // Native|Public|BlueprintCallable // @ game+0x6079ae8
	void *39acf58d60(float* CurrentScaleValue); // Function Engine.GameUserSettings.*39acf58d60 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x664c474
	void *b1719dcbd3(); // Function Engine.GameUserSettings.*b1719dcbd3 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6655544
	void *1f9b042806(); // Function Engine.GameUserSettings.*1f9b042806 // Final|Native|Public|BlueprintCallable // @ game+0x6653f5c
	void *70c5a018bc(); // Function Engine.GameUserSettings.*70c5a018bc // Native|Public|BlueprintCallable // @ game+0xb1e1e4
	void *19d9f88411(); // Function Engine.GameUserSettings.*19d9f88411 // Native|Public|BlueprintCallable // @ game+0x6653cf8
	void *c5db66ecf0(); // Function Engine.GameUserSettings.*c5db66ecf0 // Final|Native|Public|BlueprintCallable // @ game+0x6653708
	void *fb3ecc5f8a(); // Function Engine.GameUserSettings.*fb3ecc5f8a // Final|Native|Static|Public|BlueprintCallable // @ game+0xc91d1c
	void *01750178be(); // Function Engine.GameUserSettings.*01750178be // Final|Native|Public|BlueprintCallable // @ game+0x66538d0
	void *253ceb23cd(); // Function Engine.GameUserSettings.*253ceb23cd // Final|Native|Public|BlueprintCallable // @ game+0x6653794
	void *2b0d9d2a79(); // Function Engine.GameUserSettings.*2b0d9d2a79 // Native|Public|BlueprintCallable // @ game+0x664a6d4
	float *2762cf8a23(); // Function Engine.GameUserSettings.*2762cf8a23 // Native|Public|BlueprintCallable // @ game+0x6653598
	void *7c9471f86f(); // Function Engine.GameUserSettings.*7c9471f86f // Native|Public|BlueprintCallable // @ game+0x58b8ff8
	void *462455abf2(); // Function Engine.GameUserSettings.*462455abf2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664a498
	void *8fb8bbfe8c(); // Function Engine.GameUserSettings.*8fb8bbfe8c // Final|Native|Public|BlueprintCallable // @ game+0x6654520
	void SetResolutionScaleValue(); // Function Engine.GameUserSettings.SetResolutionScaleValue // Final|Native|Public|BlueprintCallable // @ game+0x6653ec8
	void *18aa570765(); // Function Engine.GameUserSettings.*18aa570765 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6654168
	void *cbbc450a67(); // Function Engine.GameUserSettings.*cbbc450a67 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664d634
	void SaveSettings(); // Function Engine.GameUserSettings.SaveSettings // Native|Public|BlueprintCallable // @ game+0x58dcf7c
	void *98fe66b47d(); // Function Engine.GameUserSettings.*98fe66b47d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664bc44
	void *c2ac335ef2(); // Function Engine.GameUserSettings.*c2ac335ef2 // Native|Public|BlueprintCallable // @ game+0x66545ac
	void *1417bc70d8(); // Function Engine.GameUserSettings.*1417bc70d8 // Final|Native|Public|BlueprintCallable // @ game+0x66545c4
	void *4bfc82e40c(); // Function Engine.GameUserSettings.*4bfc82e40c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664a258
	void *0ea0655862(); // Function Engine.GameUserSettings.*0ea0655862 // Final|Native|Public|BlueprintCallable // @ game+0x66541f4
	void *6f801f756b(); // Function Engine.GameUserSettings.*6f801f756b // Final|Native|Public|BlueprintCallable // @ game+0x6653d8c
	void *96792ea9be(); // Function Engine.GameUserSettings.*96792ea9be // Native|Public|BlueprintCallable // @ game+0x664c16c
	void *30d98f1383(); // Function Engine.GameUserSettings.*30d98f1383 // Native|Public|BlueprintCallable // @ game+0x6641f40
	void *f52b5d8c43(); // Function Engine.GameUserSettings.*f52b5d8c43 // Final|Native|Public|BlueprintCallable // @ game+0x6641f58
	void *f7e8ffca10(); // Function Engine.GameUserSettings.*f7e8ffca10 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664d648
	void *9d1ceffc6e(); // Function Engine.GameUserSettings.*9d1ceffc6e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664acd4
	void *09cbb06d9b(); // Function Engine.GameUserSettings.*09cbb06d9b // Native|Public|BlueprintCallable // @ game+0x58b8f48
	void *abd7b80fbb(); // Function Engine.GameUserSettings.*abd7b80fbb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664db98
	void *d9253d9e28(); // Function Engine.GameUserSettings.*d9253d9e28 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x664a718
	void *3a4644ef87(); // Function Engine.GameUserSettings.*3a4644ef87 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664db74
	void *0d786d6dde(); // Function Engine.GameUserSettings.*0d786d6dde // Final|Native|Public|BlueprintCallable // @ game+0x6645a5c
	void *c52ab52f73(); // Function Engine.GameUserSettings.*c52ab52f73 // Final|Native|Static|Public|BlueprintCallable // @ game+0x664add4
	void *04b3937605(); // Function Engine.GameUserSettings.*04b3937605 // Final|Native|Public|BlueprintCallable // @ game+0x6653820
	void *bb4ea235c8(); // Function Engine.GameUserSettings.*bb4ea235c8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664d610
	void *ef9cfc0dd7(); // Function Engine.GameUserSettings.*ef9cfc0dd7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xaca7dc
	void *e4deeee6a7(); // Function Engine.GameUserSettings.*e4deeee6a7 // Final|Native|Public|BlueprintCallable // @ game+0x6653e18
	void *d3b2ed12c4(); // Function Engine.GameUserSettings.*d3b2ed12c4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664db30
	void *ff43f20d88(); // Function Engine.GameUserSettings.*ff43f20d88 // Final|Native|Public|BlueprintCallable // @ game+0x665395c
	void *948dbc9289(); // Function Engine.GameUserSettings.*948dbc9289 // Final|Native|Public|BlueprintCallable // @ game+0x665302c
	void *e27f582866(); // Function Engine.GameUserSettings.*e27f582866 // Final|Native|Public|BlueprintCallable // @ game+0x66539f8
	void *311788f411(); // Function Engine.GameUserSettings.*311788f411 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664b6d0
	void *44533d5b92(); // Function Engine.GameUserSettings.*44533d5b92 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664d13c
	void *679f5c0b66(); // Function Engine.GameUserSettings.*679f5c0b66 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664b1ac
	void *3e2e37d8ce(); // Function Engine.GameUserSettings.*3e2e37d8ce // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664aca8
	void *25f609df00(); // Function Engine.GameUserSettings.*25f609df00 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x58ccc9c
	void *209c135f63(); // Function Engine.GameUserSettings.*209c135f63 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664cdf8
};

// Class Engine.GameInstance
// Size: 0x1f0 (Inherited: 0x28)
struct UGameInstance : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct U*ff4b8fbd53* *ff4b8fbd53[0x08]; // 0x40(0x08)
	char pad_48[0xa8]; // 0x48(0xa8)
	struct U*07115daa65* *07115daa65[0x08]; // 0xf0(0x08)
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMulticastDelegate OnKillcamLoadingFinished[0x10]; // 0x100(0x10)
	char pad_110[0xe0]; // 0x110(0xe0)

	void DebugCreatePlayer(); // Function Engine.GameInstance.DebugCreatePlayer // Exec|Native|Public // @ game+0x65f4bf0
	void KillcamLoadingFinishedDelegate__DelegateSignature(); // DelegateFunction Engine.GameInstance.KillcamLoadingFinishedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void ReceiveShutdown(); // Function Engine.GameInstance.ReceiveShutdown // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void HandleTravelError(); // Function Engine.GameInstance.HandleTravelError // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void DebugRemovePlayer(); // Function Engine.GameInstance.DebugRemovePlayer // Exec|Native|Public // @ game+0x65f4c84
	void ReceiveInit(); // Function Engine.GameInstance.ReceiveInit // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	enum class ENetworkFailure HandleNetworkError(); // Function Engine.GameInstance.HandleNetworkError // Event|Public|BlueprintEvent // @ game+0x2cd4ac
};

// Class Engine.TriggerBase
// Size: 0x3f0 (Inherited: 0x3e8)
struct ATriggerBase : AActor {
	struct U*18316965f0* CollisionComponent[0x08]; // 0x3e8(0x08)
};

// Class Engine.TriggerBox
// Size: 0x3f0 (Inherited: 0x3f0)
struct ATriggerBox : ATriggerBase {
};

// Class Engine.CapsuleComponent
// Size: 0xa30 (Inherited: 0xa20)
struct UCapsuleComponent : U*18316965f0 {
	float CapsuleHalfHeight[0x04]; // 0xa18(0x04)
	float CapsuleRadius[0x04]; // 0xa1c(0x04)
	float CapsuleHeight[0x04]; // 0xa20(0x04)
	char pad_A2C[0x4]; // 0xa2c(0x04)

	void *8581b57d25(); // Function Engine.CapsuleComponent.*8581b57d25 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6605738
	void *22d813c561(float* Radius); // Function Engine.CapsuleComponent.*22d813c561 // Final|Native|Public|BlueprintCallable // @ game+0x6623a88
	void *9c532adaa0(); // Function Engine.CapsuleComponent.*9c532adaa0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6607a50
	float *31f97e3a3d(); // Function Engine.CapsuleComponent.*31f97e3a3d // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6607b70
	void *0733f827b9(); // Function Engine.CapsuleComponent.*0733f827b9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6607a14
	void *8a4d91c968(); // Function Engine.CapsuleComponent.*8a4d91c968 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6605784
	void *7b5e58ae13(); // Function Engine.CapsuleComponent.*7b5e58ae13 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66056e4
	void *b69a96696e(); // Function Engine.CapsuleComponent.*b69a96696e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6605698
	void *ab5f12a9c7(float* OutRadius); // Function Engine.CapsuleComponent.*ab5f12a9c7 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6607a68
	void *980989f2cc(); // Function Engine.CapsuleComponent.*980989f2cc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6605aec
	void *3292c0b7df(); // Function Engine.CapsuleComponent.*3292c0b7df // Native|Public|BlueprintCallable // @ game+0x65d9b94
	void *194972df68(); // Function Engine.CapsuleComponent.*194972df68 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6607a2c
	void *e5ffb56c9a(); // Function Engine.CapsuleComponent.*e5ffb56c9a // Native|Public|BlueprintCallable // @ game+0x65d9c28
	void *21a20b6c62(enum class ECollisionChannel Channel); // Function Engine.CapsuleComponent.*21a20b6c62 // Native|Public|BlueprintCallable // @ game+0x65d9cc0
	float *3b43bcc845(); // Function Engine.CapsuleComponent.*3b43bcc845 // Final|Native|Public|BlueprintCallable // @ game+0x6623b74
	float *39a2e64c25(); // Function Engine.CapsuleComponent.*39a2e64c25 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66058b8
	void *190066363c(float* HalfHeight); // Function Engine.CapsuleComponent.*190066363c // Final|Native|Public|BlueprintCallable // @ game+0x66238f0
};

// Class Engine.PhysicsVolume
// Size: 0x438 (Inherited: 0x420)
struct APhysicsVolume : AVolume {
	float TerminalVelocity[0x04]; // 0x420(0x04)
	int32 Priority[0x04]; // 0x424(0x04)
	float FluidFriction[0x04]; // 0x428(0x04)
	char bWaterVolume : 1; // 0x42c(0x01)
	char bPhysicsOnContact : 1; // 0x42c(0x01)
	char pad_42C_2 : 6; // 0x42c(0x01)
	char pad_42D[0x3]; // 0x42d(0x03)
	bool *1c6bffdd5f; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
};

// Class Engine.DebugCameraController
// Size: 0x7f0 (Inherited: 0x7a0)
struct ADebugCameraController : APlayerController {
	char bShowSelectedInfo : 1; // 0x7a0(0x01)
	char *b3d628f82e : 1; // 0x7a0(0x01)
	char pad_7A0_2 : 6; // 0x7a0(0x01)
	char pad_7A1[0x7]; // 0x7a1(0x07)
	struct U*4d37f15df7* *42bf489806[0x08]; // 0x7a8(0x08)
	char pad_7B0[0x20]; // 0x7b0(0x20)
	float SpeedScale[0x04]; // 0x7d0(0x04)
	float InitialMaxSpeed[0x04]; // 0x7d4(0x04)
	float InitialAccel[0x04]; // 0x7d8(0x04)
	float InitialDecel[0x04]; // 0x7dc(0x04)
	char pad_7E0[0x10]; // 0x7e0(0x10)

	void *662fc7afd6(); // Function Engine.DebugCameraController.*662fc7afd6 // Final|Native|Public|BlueprintCallable // @ game+0x65dc680
	void ShowDebugSelectedInfo(); // Function Engine.DebugCameraController.ShowDebugSelectedInfo // Exec|Native|Public // @ game+0x58844dc
	void *f8260a0915(); // Function Engine.DebugCameraController.*f8260a0915 // Final|Native|Public|BlueprintCallable // @ game+0x65df51c
	void *b3cfc5896b(); // Function Engine.DebugCameraController.*b3cfc5896b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cb170
	void ReceiveOnActorSelected(struct FVector* SelectHitLocation); // Function Engine.DebugCameraController.ReceiveOnActorSelected // Event|Protected|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveOnActivate(); // Function Engine.DebugCameraController.ReceiveOnActivate // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveOnDeactivate(); // Function Engine.DebugCameraController.ReceiveOnDeactivate // Event|Public|BlueprintEvent // @ game+0x2cd4ac
};

// Class Engine.Channel
// Size: 0x68 (Inherited: 0x28)
struct UChannel : UObject {
	struct UNetConnection* Connection[0x08]; // 0x28(0x08)
	char pad_30[0x38]; // 0x30(0x38)
};

// Class Engine.ActorChannel
// Size: 0x370 (Inherited: 0x68)
struct UActorChannel : UChannel {
	struct AActor* Actor[0x08]; // 0x68(0x08)
	char pad_70[0x300]; // 0x70(0x300)
};

// Class Engine.DemoActorChannel
// Size: 0x390 (Inherited: 0x370)
struct UDemoActorChannel : UActorChannel {
	char pad_370[0x20]; // 0x370(0x20)
};

// Class Engine.NavigationObjectBase
// Size: 0x410 (Inherited: 0x3e8)
struct ANavigationObjectBase : AActor {
	char pad_3E8[0x8]; // 0x3e8(0x08)
	struct UCapsuleComponent* CapsuleComponent[0x08]; // 0x3f0(0x08)
	struct UBillboardComponent* *b6f12a9063[0x08]; // 0x3f8(0x08)
	struct UBillboardComponent* *a948621fe9[0x08]; // 0x400(0x08)
	char *e5dc707706 : 1; // 0x408(0x01)
	char pad_408_1 : 7; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
};

// Class Engine.PlayerStart
// Size: 0x418 (Inherited: 0x410)
struct APlayerStart : ANavigationObjectBase {
	struct FName PlayerStartTag[0x08]; // 0x410(0x08)
};

// Class Engine.CheatManager
// Size: 0x78 (Inherited: 0x28)
struct UCheatManager : UObject {
	struct ADebugCameraController* *d00d1e9c98[0x08]; // 0x28(0x08)
	struct UClass* DebugCameraControllerClass[0x08]; // 0x30(0x08)
	char pad_38[0x40]; // 0x38(0x40)

	void DestroyPawns(); // Function Engine.CheatManager.DestroyPawns // Exec|Native|Public // @ game+0x5f8e95c
	struct FString BugItStringCreator(); // Function Engine.CheatManager.BugItStringCreator // Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x6643d54
	void Fly(); // Function Engine.CheatManager.Fly // Exec|Native|Public|BlueprintCallable // @ game+0x58dcf94
	void ViewPlayer(); // Function Engine.CheatManager.ViewPlayer // Exec|Native|Public // @ game+0x6656b90
	void DebugCapsuleSweepComplex(); // Function Engine.CheatManager.DebugCapsuleSweepComplex // Exec|Native|Public // @ game+0x664852c
	void ViewSelf(); // Function Engine.CheatManager.ViewSelf // Exec|Native|Public // @ game+0x6656c54
	void DumpOnlineSessionState(); // Function Engine.CheatManager.DumpOnlineSessionState // Exec|Native|Public // @ game+0x585eab4
	void RebuildNavigation(); // Function Engine.CheatManager.RebuildNavigation // Exec|Native|Public // @ game+0x6652890
	void DamageTarget(); // Function Engine.CheatManager.DamageTarget // Exec|Native|Public|BlueprintCallable // @ game+0x66483e0
	void InvertMouse(); // Function Engine.CheatManager.InvertMouse // Final|Exec|Native|Public // @ game+0x664d5a4
	void DumpChatState(); // Function Engine.CheatManager.DumpChatState // Exec|Native|Public // @ game+0x6648900
	void *b86a954d75(); // Function Engine.CheatManager.*b86a954d75 // Native|Protected|BlueprintCallable // @ game+0xcbaad4
	void Teleport(); // Function Engine.CheatManager.Teleport // Exec|Native|Public|BlueprintCallable // @ game+0x58dcf3c
	void DestroyTarget(); // Function Engine.CheatManager.DestroyTarget // Exec|Native|Public|BlueprintCallable // @ game+0x6e6bbc
	void SetNavDrawDistance(); // Function Engine.CheatManager.SetNavDrawDistance // Final|Exec|Native|Public // @ game+0x6653c60
	void DebugCapsuleSweepClear(); // Function Engine.CheatManager.DebugCapsuleSweepClear // Exec|Native|Public // @ game+0x65df4b4
	void StreamLevelIn(); // Function Engine.CheatManager.StreamLevelIn // Exec|Native|Public // @ game+0x6655130
	void Ghost(); // Function Engine.CheatManager.Ghost // Exec|Native|Public|BlueprintCallable // @ game+0x58b8f48
	void OnlyLoadLevel(); // Function Engine.CheatManager.OnlyLoadLevel // Exec|Native|Public // @ game+0x6652100
	void DestroyAll(); // Function Engine.CheatManager.DestroyAll // Exec|Native|Public // @ game+0x66486a4
	void ToggleDebugCamera(); // Function Engine.CheatManager.ToggleDebugCamera // Exec|Native|Public // @ game+0x6656330
	void DebugCapsuleSweepChannel(); // Function Engine.CheatManager.DebugCapsuleSweepChannel // Exec|Native|Public // @ game+0x6648494
	void DebugCapsuleSweepCapture(); // Function Engine.CheatManager.DebugCapsuleSweepCapture // Exec|Native|Public // @ game+0x65cf72c
	void FreezeFrame(); // Function Engine.CheatManager.FreezeFrame // Exec|Native|Public|BlueprintCallable // @ game+0x664a0c8
	void PlayersOnly(); // Function Engine.CheatManager.PlayersOnly // Exec|Native|Public|BlueprintCallable // @ game+0x6652680
	void DestroyAllPawnsExceptTarget(); // Function Engine.CheatManager.DestroyAllPawnsExceptTarget // Exec|Native|Public // @ game+0x6648738
	void *94bb7e21d2(); // Function Engine.CheatManager.*94bb7e21d2 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x66536bc
	void *2d2ff9b3aa(); // Function Engine.CheatManager.*2d2ff9b3aa // Native|Protected|BlueprintCallable // @ game+0x66489c8
	void DumpVoiceMutingState(); // Function Engine.CheatManager.DumpVoiceMutingState // Exec|Native|Public // @ game+0x6648930
	void ReceiveInitCheatManager(); // Function Engine.CheatManager.ReceiveInitCheatManager // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void LogLoc(); // Function Engine.CheatManager.LogLoc // Exec|Native|Public // @ game+0x6650c78
	void ViewClass(); // Function Engine.CheatManager.ViewClass // Exec|Native|Public // @ game+0x6656afc
	void DebugCapsuleSweepPawn(); // Function Engine.CheatManager.DebugCapsuleSweepPawn // Exec|Native|Public // @ game+0xbfb42c
	void ChangeSize(); // Function Engine.CheatManager.ChangeSize // Exec|Native|Public|BlueprintCallable // @ game+0x6645640
	void BugIt(); // Function Engine.CheatManager.BugIt // Exec|Native|Public // @ game+0x6643a74
	void ReceiveEndPlay(); // Function Engine.CheatManager.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void SetWorldOrigin(); // Function Engine.CheatManager.SetWorldOrigin // Final|Exec|Native|Public // @ game+0x66547cc
	void Walk(); // Function Engine.CheatManager.Walk // Exec|Native|Public|BlueprintCallable // @ game+0x58dcf7c
	void ToggleAILogging(); // Function Engine.CheatManager.ToggleAILogging // Exec|Native|Public // @ game+0x6656318
	void SetMouseSensitivityToDefault(); // Function Engine.CheatManager.SetMouseSensitivityToDefault // Final|Exec|Native|Public // @ game+0x6653c4c
	void TestCollisionDistance(); // Function Engine.CheatManager.TestCollisionDistance // Exec|Native|Public // @ game+0x665556c
	void FlushLog(); // Function Engine.CheatManager.FlushLog // Exec|Native|Public // @ game+0x664a0b0
	void Summon(); // Function Engine.CheatManager.Summon // Exec|Native|Public // @ game+0x6655480
	void CheatScript(); // Function Engine.CheatManager.CheatScript // Final|Exec|Native|Public // @ game+0x66456dc
	void DebugCapsuleSweep(); // Function Engine.CheatManager.DebugCapsuleSweep // Exec|Native|Public // @ game+0x664847c
	void Slomo(); // Function Engine.CheatManager.Slomo // Exec|Native|Public|BlueprintCallable // @ game+0x6654b98
	float DebugCapsuleSweepSize(); // Function Engine.CheatManager.DebugCapsuleSweepSize // Exec|Native|Public // @ game+0x66485c4
	void God(); // Function Engine.CheatManager.God // Exec|Native|Public|BlueprintCallable // @ game+0x58dcefc
	void DumpPartyState(); // Function Engine.CheatManager.DumpPartyState // Exec|Native|Public // @ game+0x6648918
	void ViewActor(); // Function Engine.CheatManager.ViewActor // Exec|Native|Public // @ game+0x6656a68
	void StreamLevelOut(); // Function Engine.CheatManager.StreamLevelOut // Exec|Native|Public // @ game+0x66551c4
	float BugItGo(); // Function Engine.CheatManager.BugItGo // Exec|Native|Public // @ game+0x6643b38
};

// Class Engine.*1dc0463579
// Size: 0xa10 (Inherited: 0xa00)
struct U*1dc0463579 : UPrimitiveComponent {
	struct TArray<struct FNavigationLink> Links[0x10]; // 0xa00(0x10)
};

// Class Engine.NavArea
// Size: 0x40 (Inherited: 0x28)
struct UNavArea : UObject {
	float DefaultCost[0x04]; // 0x28(0x04)
	float FixedAreaEnteringCost[0x04]; // 0x2c(0x04)
	struct FColor DrawColor[0x04]; // 0x30(0x04)
	struct FNavAgentSelector SupportedAgents[0x04]; // 0x34(0x04)
	char bSupportsAgent0 : 1; // 0x38(0x01)
	char bSupportsAgent1 : 1; // 0x38(0x01)
	char bSupportsAgent2 : 1; // 0x38(0x01)
	char bSupportsAgent3 : 1; // 0x38(0x01)
	char bSupportsAgent4 : 1; // 0x38(0x01)
	char bSupportsAgent5 : 1; // 0x38(0x01)
	char bSupportsAgent6 : 1; // 0x38(0x01)
	char bSupportsAgent7 : 1; // 0x38(0x01)
	char bSupportsAgent8 : 1; // 0x39(0x01)
	char bSupportsAgent9 : 1; // 0x39(0x01)
	char bSupportsAgent10 : 1; // 0x39(0x01)
	char bSupportsAgent11 : 1; // 0x39(0x01)
	char bSupportsAgent12 : 1; // 0x39(0x01)
	char bSupportsAgent13 : 1; // 0x39(0x01)
	char bSupportsAgent14 : 1; // 0x39(0x01)
	char bSupportsAgent15 : 1; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// Class Engine.LevelScriptActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ALevelScriptActor : AActor {
	char *73f286284f : 1; // 0x3e8(0x01)
	char pad_3E8_1 : 7; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)

	bool *22f1694b2b(); // Function Engine.LevelScriptActor.*22f1694b2b // Native|Public|BlueprintCallable // @ game+0x7267ac
	struct FName *9b041afb0b(); // Function Engine.LevelScriptActor.*9b041afb0b // Native|Public|BlueprintCallable // @ game+0x58e323c
	void LevelReset(); // Function Engine.LevelScriptActor.LevelReset // BlueprintAuthorityOnly|Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void WorldOriginLocationChanged(struct FIntVector* OldOriginLocation); // Function Engine.LevelScriptActor.WorldOriginLocationChanged // Event|Public|HasDefaults|BlueprintEvent // @ game+0x2cd4ac
};

// Class Engine.ChildActorComponent
// Size: 0x500 (Inherited: 0x4d0)
struct UChildActorComponent : USceneComponent {
	struct UClass* ChildActorClass[0x08]; // 0x4d0(0x08)
	struct AActor* ChildActor[0x08]; // 0x4d8(0x08)
	struct AActor* ChildActorTemplate[0x08]; // 0x4e0(0x08)
	char pad_4E8[0x18]; // 0x4e8(0x18)

	void *ce4ff9f46d(); // Function Engine.ChildActorComponent.*ce4ff9f46d // Final|Native|Public|BlueprintCallable // @ game+0x65d987c
};

// Class Engine.CameraComponent
// Size: 0xac0 (Inherited: 0x4d0)
struct UCameraComponent : USceneComponent {
	float FieldOfView[0x04]; // 0x4d0(0x04)
	float OrthoWidth[0x04]; // 0x4d4(0x04)
	float OrthoNearClipPlane[0x04]; // 0x4d8(0x04)
	float OrthoFarClipPlane[0x04]; // 0x4dc(0x04)
	float AspectRatio[0x04]; // 0x4e0(0x04)
	char bConstrainAspectRatio : 1; // 0x4e4(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x4e4(0x01)
	char bLockToHmd : 1; // 0x4e4(0x01)
	char bUsePawnControlRotation : 1; // 0x4e4(0x01)
	char pad_4E4_4 : 4; // 0x4e4(0x01)
	char pad_4E5[0x3]; // 0x4e5(0x03)
	enum class ECameraProjectionMode ProjectionMode; // 0x4e8(0x01)
	char pad_4E9[0x3]; // 0x4e9(0x03)
	float PostProcessBlendWeight[0x04]; // 0x4ec(0x04)
	struct FPostProcessSettings PostProcessSettings[0x570]; // 0x4f0(0x570)
	char pad_A60[0x58]; // 0xa60(0x58)
	char bUseControllerViewRotation : 1; // 0xab8(0x01)
	char pad_AB8_1 : 7; // 0xab8(0x01)
	char pad_AB9[0x7]; // 0xab9(0x07)

	void *51ae0236f3(); // Function Engine.CameraComponent.*51ae0236f3 // Final|Native|Public|BlueprintCallable // @ game+0x6622108
	void *e8609babef(); // Function Engine.CameraComponent.*e8609babef // Final|Native|Public|BlueprintCallable // @ game+0x662b1fc
	void *da2c35fd6a(); // Function Engine.CameraComponent.*da2c35fd6a // Final|Native|Public|BlueprintCallable // @ game+0x662c030
	void *f9e81d2a53(); // Function Engine.CameraComponent.*f9e81d2a53 // Final|Native|Public|BlueprintCallable // @ game+0x662bca4
	void *246cb05f09(); // Function Engine.CameraComponent.*246cb05f09 // Native|Public|HasOutParms|BlueprintCallable // @ game+0x65fda24
	void *cb101c76b1(); // Function Engine.CameraComponent.*cb101c76b1 // Final|Native|Public|BlueprintCallable // @ game+0x662f408
	void *44f5458990(); // Function Engine.CameraComponent.*44f5458990 // Final|Native|Public|BlueprintCallable // @ game+0x662b164
	TScriptInterface<struct UBlendableInterface> *8480288ca6(); // Function Engine.CameraComponent.*8480288ca6 // Final|Native|Public|BlueprintCallable // @ game+0x65e4cfc
	void *f96592d2aa(); // Function Engine.CameraComponent.*f96592d2aa // Final|Native|Public|BlueprintCallable // @ game+0x6626f78
	void *5bc288c41d(); // Function Engine.CameraComponent.*5bc288c41d // Final|Native|Public|BlueprintCallable // @ game+0x6624924
	void *f01ddbe3ef(); // Function Engine.CameraComponent.*f01ddbe3ef // Final|Native|Public|BlueprintCallable // @ game+0x6628be0
};

// Class Engine.Engine
// Size: 0xf50 (Inherited: 0x28)
struct UEngine : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UFont* TinyFont[0x08]; // 0x30(0x08)
	struct FStringAssetReference TinyFontName[0x10]; // 0x38(0x10)
	struct UFont* SmallFont[0x08]; // 0x48(0x08)
	struct FStringAssetReference SmallFontName[0x10]; // 0x50(0x10)
	struct UFont* *43105ceb99[0x08]; // 0x60(0x08)
	struct FStringAssetReference MediumFontName[0x10]; // 0x68(0x10)
	struct UFont* LargeFont[0x08]; // 0x78(0x08)
	struct FStringAssetReference LargeFontName[0x10]; // 0x80(0x10)
	struct UFont* *529be18812[0x08]; // 0x90(0x08)
	struct FStringAssetReference SubtitleFontName[0x10]; // 0x98(0x10)
	struct TArray<struct UFont*> *df25b95969[0x10]; // 0xa8(0x10)
	struct UTexture2D* *2dbaebc744[0x08]; // 0xb8(0x08)
	struct UClass* *174a7c81db[0x08]; // 0xc0(0x08)
	struct UMaterialInstanceDynamic* *2119402b4a[0x08]; // 0xc8(0x08)
	struct UTexture2D* MiniFontTexture[0x08]; // 0xd0(0x08)
	struct UMaterial* WireframeMaterial[0x08]; // 0xd8(0x08)
	float MinDesiredFrameRate[0x04]; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FStringClassReference AIControllerClassName[0x10]; // 0xe8(0x10)
	struct FString *5e1c88c287[0x10]; // 0xf8(0x10)
	struct UClass* *86fb8d6a19[0x08]; // 0x108(0x08)
	struct UMaterial* *dd5db1982c[0x08]; // 0x110(0x08)
	struct FStringClassReference GameUserSettingsClassName[0x10]; // 0x118(0x10)
	struct TArray<struct FLinearColor> HLODColorationColors[0x10]; // 0x128(0x10)
	struct UTexture* DefaultDiffuseTexture[0x08]; // 0x138(0x08)
	struct UClass* *6ab1c3b78a[0x08]; // 0x140(0x08)
	struct FColor *30bc7575f3[0x04]; // 0x148(0x04)
	struct FColor *c1f4779d2d[0x04]; // 0x14c(0x04)
	struct UClass* *c79d88195f[0x08]; // 0x150(0x08)
	float *25fcb3b672[0x04]; // 0x158(0x04)
	float FixedFrameRate[0x04]; // 0x15c(0x04)
	struct FStringAssetReference DefaultBloomKernelTextureName[0x10]; // 0x160(0x10)
	struct UTexture2D* *e051d30398[0x08]; // 0x170(0x08)
	struct FStringAssetReference ArrowMaterialName[0x10]; // 0x178(0x10)
	struct FString ShadedLevelColorationUnlitMaterialName[0x10]; // 0x188(0x10)
	struct FStringAssetReference DefaultPhysMaterialName[0x10]; // 0x198(0x10)
	char bRenderLightMapDensityGrayscale : 1; // 0x1a8(0x01)
	char pad_1A8_1 : 7; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct TArray<struct F*ce85c43b15> ActivePluginRedirects[0x10]; // 0x1b0(0x10)
	struct FLinearColor LightMapDensitySelectedColor[0x10]; // 0x1c0(0x10)
	char bSubtitlesForcedOff : 1; // 0x1d0(0x01)
	char pad_1D0_1 : 7; // 0x1d0(0x01)
	char pad_1D1[0x7]; // 0x1d1(0x07)
	struct UMaterialInstanceDynamic* *5459d9699e[0x08]; // 0x1d8(0x08)
	struct FColor *8778089533[0x04]; // 0x1e0(0x04)
	struct FFloatRange SmoothedFrameRateRange[0x10]; // 0x1e4(0x10)
	struct FColor *50e4ab95e6[0x04]; // 0x1f4(0x04)
	char bHardwareSurveyEnabled : 1; // 0x1f8(0x01)
	char pad_1F8_1 : 7; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct FStringClassReference DefaultBlueprintBaseClassName[0x10]; // 0x200(0x10)
	struct TArray<struct F*a72ab554af> ActiveStructRedirects[0x10]; // 0x210(0x10)
	char bSubtitlesEnabled : 1; // 0x220(0x01)
	char pad_220_1 : 7; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct FStringClassReference LocalPlayerClassName[0x10]; // 0x228(0x10)
	struct UMaterial* DebugMeshMaterial[0x08]; // 0x238(0x08)
	struct UTexture2D* *16c3f7b8ed[0x08]; // 0x240(0x08)
	struct TArray<struct FLinearColor> StreamingAccuracyColors[0x10]; // 0x248(0x10)
	struct UMaterial* *1f9f176dd8[0x08]; // 0x258(0x08)
	struct FColor *c944d746ad[0x04]; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct FStringClassReference LevelScriptActorClassName[0x10]; // 0x268(0x10)
	float MaxES2PixelShaderAdditiveComplexityCount[0x04]; // 0x278(0x04)
	int32 *1b556eb405[0x04]; // 0x27c(0x04)
	struct FStringAssetReference RemoveSurfaceMaterialName[0x10]; // 0x280(0x10)
	float RenderLightMapDensityColorScale[0x04]; // 0x290(0x04)
	struct FColor *feb2694aca[0x04]; // 0x294(0x04)
	struct FStringAssetReference PreIntegratedSkinBRDFTextureName[0x10]; // 0x298(0x10)
	struct TArray<struct FString> *bae10a5147[0x10]; // 0x2a8(0x10)
	char pad_2B8[0x18]; // 0x2b8(0x18)
	struct FStringClassReference AvoidanceManagerClassName[0x10]; // 0x2d0(0x10)
	struct FString LightingTexelDensityName[0x10]; // 0x2e0(0x10)
	struct FString LevelColorationUnlitMaterialName[0x10]; // 0x2f0(0x10)
	struct UMaterial* LevelColorationLitMaterial[0x08]; // 0x300(0x08)
	struct FStringAssetReference DefaultDiffuseTextureName[0x10]; // 0x308(0x10)
	struct FStringClassReference AssetManagerClassName[0x10]; // 0x318(0x10)
	float MaxOcclusionPixelsFraction[0x04]; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct FStringAssetReference HighFrequencyNoiseTextureName[0x10]; // 0x330(0x10)
	struct TArray<struct FLinearColor> LightComplexityColors[0x10]; // 0x340(0x10)
	struct UClass* *fe1481b5c8[0x08]; // 0x350(0x08)
	struct UTexture* WeightMapPlaceholderTexture[0x08]; // 0x358(0x08)
	struct UAssetManager* AssetManager[0x08]; // 0x360(0x08)
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0x368(0x01)
	char pad_368_1 : 7; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	int32 NumPawnsAllowedToBeSpawnedInAFrame[0x04]; // 0x36c(0x04)
	char bShouldGenerateLowQualityLightmaps : 1; // 0x370(0x01)
	char pad_370_1 : 7; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct UTexture2D* DefaultTexture[0x08]; // 0x378(0x08)
	struct FLinearColor LightingOnlyBrightness[0x10]; // 0x380(0x10)
	struct FLinearColor LightingOnlySpecular[0x10]; // 0x390(0x10)
	struct UMaterial* *e68fc694c0[0x08]; // 0x3a0(0x08)
	struct FLinearColor LightMapDensityVertexMappedColor[0x10]; // 0x3a8(0x10)
	struct UMaterial* *85c25c83f5[0x08]; // 0x3b8(0x08)
	char bCanBlueprintsTickByDefault : 1; // 0x3c0(0x01)
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0x3c0(0x01)
	char bAllowMultiThreadedAnimationUpdate : 1; // 0x3c0(0x01)
	char bEnableEditorPSysRealtimeLOD : 1; // 0x3c0(0x01)
	char pad_3C0_4 : 1; // 0x3c0(0x01)
	char bSmoothFrameRate : 1; // 0x3c0(0x01)
	char bUseFixedFrameRate : 1; // 0x3c0(0x01)
	char pad_3C0_7 : 1; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct FString VertexColorViewModeMaterialName_ColorOnly[0x10]; // 0x3c8(0x10)
	struct UMaterial* VertexColorMaterial[0x08]; // 0x3d8(0x08)
	struct UPhysicalMaterial* DefaultPhysMaterial[0x08]; // 0x3e0(0x08)
	struct FString *89fb77e73a[0x10]; // 0x3e8(0x10)
	struct TArray<struct FString> AdditionalFontNames[0x10]; // 0x3f8(0x10)
	struct FStringClassReference PhysicsCollisionHandlerClassName[0x10]; // 0x408(0x10)
	char bAllowMatureLanguage : 1; // 0x418(0x01)
	char pad_418_1 : 7; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	float CameraRotationThreshold[0x04]; // 0x41c(0x04)
	char pad_420[0x50]; // 0x420(0x50)
	struct TArray<struct FLinearColor> StationaryLightOverlapColors[0x10]; // 0x470(0x10)
	struct TArray<struct FLinearColor> LODColorationColors[0x10]; // 0x480(0x10)
	struct FColor *891c4f69de[0x04]; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct UMaterial* *46fcb09c9b[0x08]; // 0x498(0x08)
	struct FStringAssetReference MiniFontTextureName[0x10]; // 0x4a0(0x10)
	struct UMaterial* ShadedLevelColorationLitMaterial[0x08]; // 0x4b0(0x08)
	struct UClass* *36300cd617[0x08]; // 0x4b8(0x08)
	float IdealLightMapDensity[0x04]; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct TArray<struct F*6b88783d53> ActiveGameNameRedirects[0x10]; // 0x4c8(0x10)
	struct FStringAssetReference InvalidLightmapSettingsMaterialName[0x10]; // 0x4d8(0x10)
	struct TArray<struct FLinearColor> QuadComplexityColors[0x10]; // 0x4e8(0x10)
	struct UMaterial* *31885943df[0x08]; // 0x4f8(0x08)
	struct FStringAssetReference DefaultBSPVertexTextureName[0x10]; // 0x500(0x10)
	struct FString VertexColorViewModeMaterialName_RedOnly[0x10]; // 0x510(0x10)
	struct FStringAssetReference DebugMeshMaterialName[0x10]; // 0x520(0x10)
	enum class *a483700a66 *3c98a1a7dd; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct UTexture2D* *98f6787349[0x08]; // 0x538(0x08)
	struct UClass* *2d50dcfa17[0x08]; // 0x540(0x08)
	struct TArray<struct FLinearColor> ShaderComplexityColors[0x10]; // 0x548(0x10)
	struct UMaterial* LevelColorationUnlitMaterial[0x08]; // 0x558(0x08)
	float NetClientTicksPerSecond[0x04]; // 0x560(0x04)
	int32 *a344514e05[0x04]; // 0x564(0x04)
	struct FStringAssetReference DefaultTextureName[0x10]; // 0x568(0x10)
	struct UGameViewportClient* GameViewport[0x08]; // 0x578(0x08)
	float RenderLightMapDensityGrayscaleScale[0x04]; // 0x580(0x04)
	char pad_584[0x4]; // 0x584(0x04)
	struct FStringClassReference NavigationSystemClassName[0x10]; // 0x588(0x10)
	int32 *83ecc6816b[0x04]; // 0x598(0x04)
	float MeshLODRange[0x04]; // 0x59c(0x04)
	struct UMaterial* *ba4b02b533[0x08]; // 0x5a0(0x08)
	struct FStringClassReference WorldSettingsClassName[0x10]; // 0x5a8(0x10)
	struct FStringAssetReference WeightMapPlaceholderTextureName[0x10]; // 0x5b8(0x10)
	struct FString WireframeMaterialName[0x10]; // 0x5c8(0x10)
	struct UMaterialInstanceDynamic* *498d4ec4e1[0x08]; // 0x5d8(0x08)
	struct UClass* *9cf85956b5[0x08]; // 0x5e0(0x08)
	struct UMaterial* *22bea6dbb2[0x08]; // 0x5e8(0x08)
	struct FStringClassReference GameViewportClientClassName[0x10]; // 0x5f0(0x10)
	struct FStringAssetReference PreviewShadowsIndicatorMaterialName[0x10]; // 0x600(0x10)
	struct UGameUserSettings* GameUserSettings[0x08]; // 0x610(0x08)
	struct UTextureCube* *019d032e90[0x08]; // 0x618(0x08)
	float CameraTranslationThreshold[0x04]; // 0x620(0x04)
	char pad_624[0x4]; // 0x624(0x04)
	struct UTexture2D* *6487bfa9fa[0x08]; // 0x628(0x08)
	struct FColor *c7c24b22f6[0x04]; // 0x630(0x04)
	float NearClipPlane[0x04]; // 0x634(0x04)
	struct TArray<struct F*73d1c21239> StatColorMappings[0x10]; // 0x638(0x10)
	struct FString ShadedLevelColorationLitMaterialName[0x10]; // 0x648(0x10)
	struct FStringAssetReference LightMapDensityTextureName[0x10]; // 0x658(0x10)
	struct FColor *192e526923[0x04]; // 0x668(0x04)
	struct FColor *7011171afe[0x04]; // 0x66c(0x04)
	float MinLightMapDensity[0x04]; // 0x670(0x04)
	char pad_674[0x4]; // 0x674(0x04)
	struct UMaterial* RemoveSurfaceMaterial[0x08]; // 0x678(0x08)
	int32 MaxParticleResizeWarn[0x04]; // 0x680(0x04)
	struct F*28687cc503 PhysicErrorCorrection[0x1c]; // 0x684(0x1c)
	struct UMaterial* *62fa611f80[0x08]; // 0x6a0(0x08)
	float MaxLightMapDensity[0x04]; // 0x6a8(0x04)
	char pad_6AC[0x4]; // 0x6ac(0x04)
	struct FStringClassReference ConsoleClassName[0x10]; // 0x6b0(0x10)
	struct TArray<struct F*2f5df3d7dc> ActiveClassRedirects[0x10]; // 0x6c0(0x10)
	struct UObject* *efb601c0d7[0x08]; // 0x6d0(0x08)
	char pad_6D8[0x8]; // 0x6d8(0x08)
	struct FLinearColor DefaultSelectedMaterialColor[0x10]; // 0x6e0(0x10)
	struct FLinearColor *71a3192718[0x10]; // 0x6f0(0x10)
	struct FLinearColor *d45033e7a6[0x10]; // 0x700(0x10)
	struct FLinearColor *ffccd8fd1b[0x10]; // 0x710(0x10)
	struct FLinearColor *ca5c8cbcd4[0x10]; // 0x720(0x10)
	bool *793423ca81; // 0x730(0x01)
	char pad_731[0x3]; // 0x731(0x03)
	char bEnableOnScreenDebugMessages : 1; // 0x734(0x01)
	char *ddd8bea2f1 : 1; // 0x734(0x01)
	char bSuppressMapWarnings : 1; // 0x734(0x01)
	char bDisableAILogging : 1; // 0x734(0x01)
	char pad_734_4 : 4; // 0x734(0x01)
	char pad_735[0x3]; // 0x735(0x03)
	uint32 bEnableVisualLogRecordingOnStart[0x04]; // 0x738(0x04)
	struct FBox *fa997dc2ce[0x1c]; // 0x73c(0x1c)
	char pad_758[0x4]; // 0x758(0x04)
	int32 *a4ea644295[0x04]; // 0x75c(0x04)
	char *5f4234ebf6 : 1; // 0x760(0x01)
	char pad_760_1 : 7; // 0x760(0x01)
	char pad_761[0x7]; // 0x761(0x07)
	struct FString ParticleEventManagerClassPath[0x10]; // 0x768(0x10)
	char pad_778[0x28]; // 0x778(0x28)
	float SelectionHighlightIntensity[0x04]; // 0x7a0(0x04)
	float *4ad7031367[0x04]; // 0x7a4(0x04)
	float BSPSelectionHighlightIntensity[0x04]; // 0x7a8(0x04)
	float HoverHighlightIntensity[0x04]; // 0x7ac(0x04)
	float *c96df757a0[0x04]; // 0x7b0(0x04)
	float PrimitiveBaseIntensity[0x04]; // 0x7b4(0x04)
	float PrimitiveSelectedIntensity[0x04]; // 0x7b8(0x04)
	float PrimitiveHoverIntensity[0x04]; // 0x7bc(0x04)
	char pad_7C0[0x290]; // 0x7c0(0x290)
	struct UMaterial* *167d4506be[0x08]; // 0xa50(0x08)
	struct FColor *4709a765b0[0x04]; // 0xa58(0x04)
	char pad_A5C[0x4]; // 0xa5c(0x04)
	struct FString LevelColorationLitMaterialName[0x10]; // 0xa60(0x10)
	struct UMaterial* *c6ef933beb[0x08]; // 0xa70(0x08)
	struct FString VertexColorViewModeMaterialName_AlphaAsColor[0x10]; // 0xa78(0x10)
	float PrimitiveProbablyVisibleTime[0x04]; // 0xa88(0x04)
	char pad_A8C[0x4]; // 0xa8c(0x04)
	struct FString VertexColorViewModeMaterialName_BlueOnly[0x10]; // 0xa90(0x10)
	struct FColor *0edfcd2d1b[0x04]; // 0xaa0(0x04)
	char pad_AA4[0x1dc]; // 0xaa4(0x1dc)
	struct TArray<struct F*e13e3afa12> NetDriverDefinitions[0x10]; // 0xc80(0x10)
	struct TArray<struct FString> ServerActors[0x10]; // 0xc90(0x10)
	struct TArray<struct FString> *585229a891[0x10]; // 0xca0(0x10)
	char *07609786a3 : 1; // 0xcb0(0x01)
	char pad_CB0_1 : 7; // 0xcb0(0x01)
	char pad_CB1[0x7]; // 0xcb1(0x07)
	struct UTexture2D* *c594b99558[0x08]; // 0xcb8(0x08)
	struct TArray<struct F*7c4552fed2> *74257aa68c[0x10]; // 0xcc0(0x10)
	int32 MaximumLoopIterationCount[0x04]; // 0xcd0(0x04)
	char pad_CD4[0x4]; // 0xcd4(0x04)
	struct FStringAssetReference DefaultBokehTextureName[0x10]; // 0xcd8(0x10)
	char bPauseOnLossOfFocus : 1; // 0xce8(0x01)
	char pad_CE8_1 : 7; // 0xce8(0x01)
	char pad_CE9[0x3]; // 0xce9(0x03)
	int32 MaxParticleResize[0x04]; // 0xcec(0x04)
	float MaxPixelShaderAdditiveComplexityCount[0x04]; // 0xcf0(0x04)
	char pad_CF4[0x4]; // 0xcf4(0x04)
	struct FString PlayOnConsoleSaveDir[0x10]; // 0xcf8(0x10)
	struct UMaterialInstanceDynamic* *dd5dd57e60[0x08]; // 0xd08(0x08)
	struct FString VertexColorViewModeMaterialName_GreenOnly[0x10]; // 0xd10(0x10)
	struct FStringClassReference GameSingletonClassName[0x10]; // 0xd20(0x10)
	float DisplayGamma[0x04]; // 0xd30(0x04)
	char pad_D34[0x4]; // 0xd34(0x04)
	struct UMaterialInstanceDynamic* *cba3a24030[0x08]; // 0xd38(0x08)
	struct UMaterialInstanceDynamic* *c546a776e0[0x08]; // 0xd40(0x08)
	struct UClass* *939ce45cf3[0x08]; // 0xd48(0x08)
	struct FStringAssetReference DefaultReflectionCaptureTextureName[0x10]; // 0xd50(0x10)
	char pad_D60[0x8]; // 0xd60(0x08)
	struct UMaterialInstanceDynamic* *d52bb2e916[0x08]; // 0xd68(0x08)
	struct FColor *3a3f396815[0x04]; // 0xd70(0x04)
	char pad_D74[0x4]; // 0xd74(0x04)
	struct FString VertexColorMaterialName[0x10]; // 0xd78(0x10)
	char pad_D88[0x18]; // 0xd88(0x18)
	int32 *7bf7828cff[0x04]; // 0xda0(0x04)
	char pad_DA4[0x1ac]; // 0xda4(0x1ac)
};

// Class Engine.*267b167105
// Size: 0x38 (Inherited: 0x28)
struct U*267b167105 : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Engine.GameViewportClient
// Size: 0x680 (Inherited: 0x38)
struct UGameViewportClient : U*267b167105 {
	char pad_38[0x398]; // 0x38(0x398)
	struct TArray<struct F*943c6d0e82> *7fc15348f4[0x10]; // 0x3d0(0x10)
	char pad_3E0[0x108]; // 0x3e0(0x108)
	struct UGameInstance* GameInstance[0x08]; // 0x4e8(0x08)
	char pad_4F0[0x180]; // 0x4f0(0x180)
	struct UConsole* *0577cd079b[0x08]; // 0x670(0x08)
	char pad_678[0x8]; // 0x678(0x08)

	void SetConsoleTarget(); // Function Engine.GameViewportClient.SetConsoleTarget // Exec|Native|Public // @ game+0x6624710
	void SSSwapControllers(); // Function Engine.GameViewportClient.SSSwapControllers // Exec|Native|Public // @ game+0xb1e1e4
	void ShowTitleSafeArea(); // Function Engine.GameViewportClient.ShowTitleSafeArea // Exec|Native|Public // @ game+0x58d1c6c
};

// Class Engine.Console
// Size: 0x108 (Inherited: 0x28)
struct UConsole : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct ULocalPlayer* *8cb17d72a2[0x08]; // 0x38(0x08)
	struct UTexture2D* *d7075ad4d7[0x08]; // 0x40(0x08)
	struct UTexture2D* *c697d5ef94[0x08]; // 0x48(0x08)
	char pad_50[0x18]; // 0x50(0x18)
	struct TArray<struct FString> HistoryBuffer[0x10]; // 0x68(0x10)
	char pad_78[0x90]; // 0x78(0x90)
};

// Class Engine.NetDriver
// Size: 0x4c0 (Inherited: 0x28)
struct UNetDriver : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FString NetConnectionClassName[0x10]; // 0x30(0x10)
	int32 MaxDownloadSize[0x04]; // 0x40(0x04)
	char bClampListenServerTickRate : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32 NetServerMaxTickRate[0x04]; // 0x48(0x04)
	int32 MaxInternetClientRate[0x04]; // 0x4c(0x04)
	int32 MaxClientRate[0x04]; // 0x50(0x04)
	float ServerTravelPause[0x04]; // 0x54(0x04)
	float SpawnPrioritySeconds[0x04]; // 0x58(0x04)
	float RelevantTimeout[0x04]; // 0x5c(0x04)
	float KeepAliveTime[0x04]; // 0x60(0x04)
	float InitialConnectTimeout[0x04]; // 0x64(0x04)
	float ConnectionTimeout[0x04]; // 0x68(0x04)
	float TimeoutMultiplierForUnoptimizedBuilds[0x04]; // 0x6c(0x04)
	bool bNoTimeouts; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct UNetConnection* *b95efedb68[0x08]; // 0x78(0x08)
	struct TArray<struct UNetConnection*> *5caadb491a[0x10]; // 0x80(0x10)
	char pad_90[0x28]; // 0x90(0x28)
	struct UWorld* World[0x08]; // 0xb8(0x08)
	struct UPackage* *7ce0584c32[0x08]; // 0xc0(0x08)
	char pad_C8[0x20]; // 0xc8(0x20)
	struct UClass* *6125afc26a[0x08]; // 0xe8(0x08)
	struct UProperty* *08fb2db1ef[0x08]; // 0xf0(0x08)
	struct UProperty* *169c3cf1e7[0x08]; // 0xf8(0x08)
	struct FName NetDriverName[0x08]; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)
	float Time[0x04]; // 0x110(0x04)
	char pad_114[0x3ac]; // 0x114(0x3ac)
};

// Class Engine.DemoNetDriver
// Size: 0xc60 (Inherited: 0x4c0)
struct UDemoNetDriver : UNetDriver {
	char pad_4C0[0xf8]; // 0x4c0(0xf8)
	struct TMap<struct FString, struct F*bd2d09f136> *bb20b5ac02[0x50]; // 0x5b8(0x50)
	char pad_608[0x438]; // 0x608(0x438)
	bool *583fbfe7b8; // 0xa40(0x01)
	char pad_A41[0x21f]; // 0xa41(0x21f)
};

// Class Engine.GameEngine
// Size: 0xfb0 (Inherited: 0xf50)
struct UGameEngine : UEngine {
	float MaxDeltaTime[0x04]; // 0xf48(0x04)
	float ServerFlushLogInterval[0x04]; // 0xf4c(0x04)
	struct UGameInstance* GameInstance[0x08]; // 0xf50(0x08)
	char pad_F60[0x38]; // 0xf60(0x38)
	struct TArray<struct UWorld*> *30f0e73cd5[0x10]; // 0xf98(0x10)
	char pad_FA8[0x8]; // 0xfa8(0x08)
};

// Class Engine.Player
// Size: 0x48 (Inherited: 0x28)
struct UPlayer : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	int32 *43861e1339[0x04]; // 0x38(0x04)
	int32 ConfiguredInternetSpeed[0x04]; // 0x3c(0x04)
	int32 ConfiguredLanSpeed[0x04]; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.NetConnection
// Size: 0x65848 (Inherited: 0x48)
struct UNetConnection : UPlayer {
	struct TArray<struct UChildConnection*> Children[0x10]; // 0x48(0x10)
	struct UNetDriver* Driver[0x08]; // 0x58(0x08)
	struct UClass* *c9a07c0e0e[0x08]; // 0x60(0x08)
	struct UPackageMap* PackageMap[0x08]; // 0x68(0x08)
	struct TArray<struct UChannel*> *969e2f926f[0x10]; // 0x70(0x10)
	struct TArray<struct AActor*> *450acb6ca0[0x10]; // 0x80(0x10)
	struct AActor* ViewTarget[0x08]; // 0x90(0x08)
	struct AActor* *c907380c05[0x08]; // 0x98(0x08)
	int32 *95374739ae[0x04]; // 0xa0(0x04)
	char *9c3073c60b : 1; // 0xa4(0x01)
	char pad_A4_1 : 1; // 0xa4(0x01)
	char *7e187ea680 : 1; // 0xa4(0x01)
	char pad_A4_3 : 5; // 0xa4(0x01)
	char pad_A5[0x8b]; // 0xa5(0x8b)
	struct TArray<struct UChannel*> *15c176d85f[0x10]; // 0x130(0x10)
	char pad_140[0x28]; // 0x140(0x28)
	struct FUniqueNetIdRepl PlayerId[0x18]; // 0x168(0x18)
	char pad_180[0x68]; // 0x180(0x68)
	double *1217438028[0x08]; // 0x1e8(0x08)
	char pad_1F0[0x65538]; // 0x1f0(0x65538)
	struct TArray<struct UChannel*> *8d7214ce79[0x10]; // 0x65728(0x10)
	char pad_65738[0x110]; // 0x65738(0x110)
};

// Class Engine.ForceFeedbackEffect
// Size: 0x40 (Inherited: 0x28)
struct UForceFeedbackEffect : UObject {
	struct TArray<struct F*8172d5eac2> ChannelDetails[0x10]; // 0x28(0x10)
	float Duration[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.GameSession
// Size: 0x400 (Inherited: 0x3e8)
struct AGameSession : AInfo {
	int32 MaxSpectators[0x04]; // 0x3e8(0x04)
	int32 MaxPlayers[0x04]; // 0x3ec(0x04)
	int32 *6dce3bcc33[0x04]; // 0x3f0(0x04)
	bool MaxSplitscreensPerConnection; // 0x3f4(0x01)
	bool bRequiresPushToTalk; // 0x3f5(0x01)
	char pad_3F6[0x2]; // 0x3f6(0x02)
	struct FName SessionName[0x08]; // 0x3f8(0x08)
};

// Class Engine.InstancedStaticMeshComponent
// Size: 0xc80 (Inherited: 0xba0)
struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	struct TArray<struct F*4f3c2d44a1> PerInstanceSMData[0x10]; // 0xba0(0x10)
	int32 InstancingRandomSeed[0x04]; // 0xbb0(0x04)
	int32 InstanceStartCullDistance[0x04]; // 0xbb4(0x04)
	int32 InstanceEndCullDistance[0x04]; // 0xbb8(0x04)
	char pad_BBC[0x4]; // 0xbbc(0x04)
	struct TArray<int32> *754184d020[0x10]; // 0xbc0(0x10)
	struct TArray<int32> *c10d91a000[0x10]; // 0xbd0(0x10)
	char pad_BE0[0x78]; // 0xbe0(0x78)
	struct UPhysicsSerializer* PhysicsSerializer[0x08]; // 0xc58(0x08)
	bool *977852e8ca; // 0xc60(0x01)
	char pad_C61[0x3]; // 0xc61(0x03)
	int32 *3cb8f168ab[0x04]; // 0xc64(0x04)
	struct TArray<struct F*707001a8dd> *9da75a2d5b[0x10]; // 0xc68(0x10)
	char pad_C78[0x8]; // 0xc78(0x08)

	void *e5295d5ef3(struct FTransform* OutInstanceTransform); // Function Engine.InstancedStaticMeshComponent.*e5295d5ef3 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6601000
	struct FVector4 *67da154cb1(); // Function Engine.InstancedStaticMeshComponent.*67da154cb1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66286f0
	void *552630dc35(); // Function Engine.InstancedStaticMeshComponent.*552630dc35 // Native|Public|BlueprintCallable // @ game+0xcf814c
	int32 *e4e17343d9(); // Function Engine.InstancedStaticMeshComponent.*e4e17343d9 // Final|Native|Public|BlueprintCallable // @ game+0x66252c0
	bool *7459db3257(int32* InstanceIndex, bool bWorldSpace); // Function Engine.InstancedStaticMeshComponent.*7459db3257 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6639420
	struct FVector4 *82167e78cb(); // Function Engine.InstancedStaticMeshComponent.*82167e78cb // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e4b08
	void *1ff5154222(); // Function Engine.InstancedStaticMeshComponent.*1ff5154222 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6600984
	void *7799271b12(struct FVector4* OutPerInstanceCustomData); // Function Engine.InstancedStaticMeshComponent.*7799271b12 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6600b70
	bool *561b0d5362(); // Function Engine.InstancedStaticMeshComponent.*561b0d5362 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x660191c
	void *4981f52ac4(); // Function Engine.InstancedStaticMeshComponent.*4981f52ac4 // Native|Public|BlueprintCallable // @ game+0x661e8a4
	void *01fde74119(struct FTransform* InstanceTransform); // Function Engine.InstancedStaticMeshComponent.*01fde74119 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e46c8
	bool *a409ec8533(); // Function Engine.InstancedStaticMeshComponent.*a409ec8533 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66017b4
};

// Class Engine.HierarchicalInstancedStaticMeshComponent
// Size: 0xdb0 (Inherited: 0xc80)
struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	char pad_C80[0x68]; // 0xc80(0x68)
	struct TArray<int32> *c35c6933db[0x10]; // 0xce8(0x10)
	int32 *995034b1b2[0x04]; // 0xcf8(0x04)
	char pad_CFC[0x4]; // 0xcfc(0x04)
	struct FBox *9ce4a0f35c[0x1c]; // 0xd00(0x1c)
	struct FBox *eeb6f14d03[0x1c]; // 0xd1c(0x1c)
	struct TArray<struct FBox> *7c7ca05821[0x10]; // 0xd38(0x10)
	char pad_D48[0x20]; // 0xd48(0x20)
	int32 *18bd8b16a3[0x04]; // 0xd68(0x04)
	struct FBoxSphereBounds *d45c6ff2a1[0x1c]; // 0xd6c(0x1c)
	char *09c59fbf3c : 1; // 0xd88(0x01)
	char *dac8477fb6 : 1; // 0xd88(0x01)
	char pad_D88_2 : 6; // 0xd88(0x01)
	char pad_D89[0x27]; // 0xd89(0x27)

	struct TArray<int32> *c4d2b25a72(); // Function Engine.HierarchicalInstancedStaticMeshComponent.*c4d2b25a72 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x661e948
};

// Class Engine.*5d118ed8c5
// Size: 0xdb0 (Inherited: 0xdb0)
struct U*5d118ed8c5 : UHierarchicalInstancedStaticMeshComponent {
	int32 MinVertsToSplitNodeForGrid[0x04]; // 0xda8(0x04)
};

// Class Engine.NavLinkProxy
// Size: 0x438 (Inherited: 0x3e8)
struct ANavLinkProxy : AActor {
	char pad_3E8[0x10]; // 0x3e8(0x10)
	struct TArray<struct FNavigationLink> PointLinks[0x10]; // 0x3f8(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks[0x10]; // 0x408(0x10)
	struct UNavLinkCustomComponent* SmartLinkComp[0x08]; // 0x418(0x08)
	bool *c69861c740; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct FMulticastDelegate OnSmartLinkReached[0x10]; // 0x428(0x10)

	void *b60053683c(); // Function Engine.NavLinkProxy.*b60053683c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cd000
	void ReceiveSmartLinkReached(struct AActor** Agent); // Function Engine.NavLinkProxy.ReceiveSmartLinkReached // Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x2cd4ac
	void *d9d695d546(); // Function Engine.NavLinkProxy.*d9d695d546 // Final|Native|Public // @ game+0xbf00fc
	void *774b5e08a9(); // Function Engine.NavLinkProxy.*774b5e08a9 // Final|Native|Public|BlueprintCallable // @ game+0x65d4cb8
	void *2058e6a129(); // Function Engine.NavLinkProxy.*2058e6a129 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc0d8
	void *49e92ce488(); // Function Engine.NavLinkProxy.*49e92ce488 // Final|Native|Public|BlueprintCallable // @ game+0x65dd2e8
};

// Class Engine.LocalPlayer
// Size: 0x288 (Inherited: 0x48)
struct ULocalPlayer : UPlayer {
	char pad_48[0x10]; // 0x48(0x10)
	char *9b12f4d6bd : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x17]; // 0x59(0x17)
	struct UClass* *ff1a8deac9[0x08]; // 0x70(0x08)
	char pad_78[0x210]; // 0x78(0x210)
};

// Class Engine.*df0ac3a39d
// Size: 0x28 (Inherited: 0x28)
struct U*df0ac3a39d : UObject {
};

// Class Engine.PlayerCameraManager
// Size: 0x1d00 (Inherited: 0x3e8)
struct APlayerCameraManager : AActor {
	struct APlayerController* *e9fdc891fb[0x08]; // 0x3e8(0x08)
	struct USceneComponent* TransformComponent[0x08]; // 0x3f0(0x08)
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct F*ccdcf600a2 *0c01e7dd74[0x5e0]; // 0x400(0x5e0)
	float FreeCamDistance[0x04]; // 0x9e0(0x04)
	char pad_9E4[0xc]; // 0x9e4(0x0c)
	struct F*6432761ee7 *c63c0ee2d5[0x5d0]; // 0x9f0(0x5d0)
	char pad_FC0[0x4]; // 0xfc0(0x04)
	float DefaultOrthoWidth[0x04]; // 0xfc4(0x04)
	char pad_FC8[0x28]; // 0xfc8(0x28)
	struct F*ccdcf600a2 ViewTarget[0x5e0]; // 0xff0(0x5e0)
	char pad_15D0[0x20]; // 0x15d0(0x20)
	struct F*6432761ee7 *2eaebbc30c[0x5d0]; // 0x15f0(0x5d0)
	float ViewPitchMax[0x04]; // 0x1bc0(0x04)
	float ViewYawMin[0x04]; // 0x1bc4(0x04)
	float ViewRollMin[0x04]; // 0x1bc8(0x04)
	float DefaultFOV[0x04]; // 0x1bcc(0x04)
	char pad_1BD0[0x10]; // 0x1bd0(0x10)
	struct TArray<struct U*d265edd002*> *e5a975db74[0x10]; // 0x1be0(0x10)
	struct FVector ViewTargetOffset[0x0c]; // 0x1bf0(0x0c)
	float ViewRollMax[0x04]; // 0x1bfc(0x04)
	char pad_1C00[0x18]; // 0x1c00(0x18)
	struct FVector FreeCamOffset[0x0c]; // 0x1c18(0x0c)
	char pad_1C24[0x4]; // 0x1c24(0x04)
	struct TArray<struct AEmitterCameraLensEffectBase*> *23527db694[0x10]; // 0x1c28(0x10)
	struct U*50a4472fea* *a616bea493[0x08]; // 0x1c38(0x08)
	struct U*faef588082* *949f36d826[0x08]; // 0x1c40(0x40)
	struct TArray<struct FPostProcessSettings> *129b64c87e[0x10]; // 0x1c80(0x10)
	char pad_1C90[0x10]; // 0x1c90(0x10)
	struct TArray<struct U*faef588082*> *6e10f27828[0x10]; // 0x1ca0(0x10)
	struct TArray<struct U*faef588082*> *08f08cc15c[0x10]; // 0x1cb0(0x10)
	struct ACameraActor* *71a037b5ab[0x08]; // 0x1cc0(0x08)
	char bIsOrthographic : 1; // 0x1cc8(0x01)
	char bDefaultConstrainAspectRatio : 1; // 0x1cc8(0x01)
	char pad_1CC8_2 : 5; // 0x1cc8(0x01)
	char bUseClientSideCameraUpdates : 1; // 0x1cc8(0x01)
	char pad_1CC9[0x3]; // 0x1cc9(0x03)
	float DefaultAspectRatio[0x04]; // 0x1ccc(0x04)
	float ViewPitchMin[0x04]; // 0x1cd0(0x04)
	float ViewYawMax[0x04]; // 0x1cd4(0x04)
	char pad_1CD8[0x8]; // 0x1cd8(0x08)
	struct TArray<struct UClass*> DefaultModifiers[0x10]; // 0x1ce0(0x10)
	char pad_1CF0[0x10]; // 0x1cf0(0x10)

	bool *4b26d3d746(float* FromAlpha, float* Duration); // Function Engine.PlayerCameraManager.*4b26d3d746 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65de9c0
	struct UClass* *0b6e473a67(); // Function Engine.PlayerCameraManager.*0b6e473a67 // Native|Public|BlueprintCallable // @ game+0x65bdcd0
	void *ddd5440b92(); // Function Engine.PlayerCameraManager.*ddd5440b92 // Native|Public|BlueprintCallable // @ game+0x586e5ec
	void *b9872cbb46(); // Function Engine.PlayerCameraManager.*b9872cbb46 // Native|Public|BlueprintCallable // @ game+0x5909980
	void *f956aeed26(struct UClass** ModifierClass); // Function Engine.PlayerCameraManager.*f956aeed26 // Native|Public|BlueprintCallable // @ game+0x65c50f8
	void OnPhotographyMultiPartCaptureEnd(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureEnd // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x5823324
	struct UClass* *30c87708fc(); // Function Engine.PlayerCameraManager.*30c87708fc // Native|Public|BlueprintCallable // @ game+0x65deed8
	void *83651ba534(); // Function Engine.PlayerCameraManager.*83651ba534 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xab0e24
	void PhotographyCameraModify(struct FVector* PreviousCameraLocation); // Function Engine.PlayerCameraManager.PhotographyCameraModify // BlueprintCosmetic|Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x65d35c0
	void *8b89fd6520(); // Function Engine.PlayerCameraManager.*8b89fd6520 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c6cc8
	void OnPhotographySessionStart(); // Function Engine.PlayerCameraManager.OnPhotographySessionStart // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x5907f20
	void *526e73aebb(); // Function Engine.PlayerCameraManager.*526e73aebb // Native|Public|BlueprintCallable // @ game+0x65decc4
	void BlueprintUpdateCamera(struct AActor** CameraTarget, struct FRotator* NewCameraRotation); // Function Engine.PlayerCameraManager.BlueprintUpdateCamera // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x2cd4ac
	struct U*faef588082* *df4de4472e(); // Function Engine.PlayerCameraManager.*df4de4472e // Native|Public|BlueprintCallable // @ game+0x65df050
	void OnPhotographySessionEnd(); // Function Engine.PlayerCameraManager.OnPhotographySessionEnd // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x5907f08
	void *3d38e01887(float* InFadeAmount); // Function Engine.PlayerCameraManager.*3d38e01887 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65dba8c
	void *6b65651478(); // Function Engine.PlayerCameraManager.*6b65651478 // Native|Public|BlueprintCallable // @ game+0x65ded5c
	void *739422debf(); // Function Engine.PlayerCameraManager.*739422debf // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7cc4
	void OnPhotographyMultiPartCaptureStart(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureStart // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x58ce3b4
	void *596dfaadd8(); // Function Engine.PlayerCameraManager.*596dfaadd8 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x58cb110
	void *16e171ab9f(); // Function Engine.PlayerCameraManager.*16e171ab9f // Native|Public|BlueprintCallable // @ game+0x65d4494
	struct FRotator *0673dfc389(); // Function Engine.PlayerCameraManager.*0673dfc389 // Native|Public|HasDefaults|BlueprintCallable // @ game+0xbcd8f4
	struct UCameraShake* *da8f8503b0(); // Function Engine.PlayerCameraManager.*da8f8503b0 // Native|Public|BlueprintCallable // @ game+0x65df134
	struct FRotator *245befce61(struct UCameraAnim** Anim, float* Scale); // Function Engine.PlayerCameraManager.*245befce61 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d3954
	void *9dc5c269a0(); // Function Engine.PlayerCameraManager.*9dc5c269a0 // Native|Public|BlueprintCallable // @ game+0x65bc8b4
	void *2a6bfee86c(); // Function Engine.PlayerCameraManager.*2a6bfee86c // Native|Public|BlueprintCallable // @ game+0x65dedf4
	struct U*d265edd002* *36ef9f712e(); // Function Engine.PlayerCameraManager.*36ef9f712e // Native|Public|BlueprintCallable // @ game+0x65d4528
};

// Class Engine.PlayerInput
// Size: 0x488 (Inherited: 0x28)
struct UPlayerInput : UObject {
	char pad_28[0xf8]; // 0x28(0xf8)
	struct TArray<struct F*61c810cf0e> DebugExecBindings[0x10]; // 0x120(0x10)
	char pad_130[0x30]; // 0x130(0x30)
	struct TArray<struct FName> InvertedAxis[0x10]; // 0x160(0x10)
	char pad_170[0x318]; // 0x170(0x318)

	void SetGamePadSensitivity(); // Function Engine.PlayerInput.SetGamePadSensitivity // Final|Exec|Native|Public // @ game+0x65dac5c
	void ClearSmoothing(); // Function Engine.PlayerInput.ClearSmoothing // Final|Exec|Native|Public // @ game+0x65bf394
	void SetBind(struct FName* Param0); // Function Engine.PlayerInput.SetBind // Final|Exec|Native|Public // @ game+0x65d9308
	void SetGamePadSensitivityOf(struct FKey* Param0); // Function Engine.PlayerInput.SetGamePadSensitivityOf // Final|Exec|Native|Public // @ game+0x65dacf4
	struct FKey SetGamePadDeadZoneOf(); // Function Engine.PlayerInput.SetGamePadDeadZoneOf // Final|Exec|Native|Public // @ game+0x65dab20
	void InvertAxisKey(); // Function Engine.PlayerInput.InvertAxisKey // Final|Exec|Native|Public // @ game+0x65cc36c
	void SetMouseSensitivity(); // Function Engine.PlayerInput.SetMouseSensitivity // Final|Exec|Native|Public // @ game+0x65dc1a0
	void SetGamePadDeadZone(); // Function Engine.PlayerInput.SetGamePadDeadZone // Final|Exec|Native|Public // @ game+0x65daa88
	void InvertAxis(); // Function Engine.PlayerInput.InvertAxis // Final|Exec|Native|Public // @ game+0x65cc2dc
};

// Class Engine.NavigationData
// Size: 0x590 (Inherited: 0x3e8)
struct ANavigationData : AActor {
	struct UPrimitiveComponent* RenderingComp[0x08]; // 0x3e8(0x08)
	struct F*dbc2be8864 *dbc2be8864[0x50]; // 0x3f0(0x50)
	char *bf6d21a228 : 1; // 0x440(0x01)
	char bForceRebuildOnLoad : 1; // 0x440(0x01)
	char bCanBeMainNavData : 1; // 0x440(0x01)
	char bCanSpawnOnRebuild : 1; // 0x440(0x01)
	char bRebuildAtRuntime : 1; // 0x440(0x01)
	char pad_440_5 : 3; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	float ObservedPathsTickInterval[0x04]; // 0x448(0x04)
	char *5450a494ed : 1; // 0x44c(0x01)
	char pad_44C_1 : 7; // 0x44c(0x01)
	char pad_44D[0x3]; // 0x44d(0x03)
	uint32 DataVersion[0x04]; // 0x450(0x04)
	char pad_454[0xd4]; // 0x454(0xd4)
	struct TArray<struct F*a098f5a73b> *efbca435e7[0x10]; // 0x528(0x10)
	char pad_538[0x58]; // 0x538(0x58)
};

// Class Engine.RecastNavMesh
// Size: 0x6a0 (Inherited: 0x590)
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x590(0x01)
	char bDrawPolyEdges : 1; // 0x590(0x01)
	char bDrawFilledPolys : 1; // 0x590(0x01)
	char bDrawNavMeshEdges : 1; // 0x590(0x01)
	char *afbdbd43dd : 1; // 0x590(0x01)
	char *2b90e490d1 : 1; // 0x590(0x01)
	char *5a07d7cafb : 1; // 0x590(0x01)
	char *c82954ac6b : 1; // 0x590(0x01)
	char *9898141409 : 1; // 0x591(0x01)
	char *34275df68e : 1; // 0x591(0x01)
	char *1d0f9691e4 : 1; // 0x591(0x01)
	char *6256b34fc7 : 1; // 0x591(0x01)
	char *484c9504d8 : 1; // 0x591(0x01)
	char *e3d71e5fe2 : 1; // 0x591(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x591(0x01)
	char *d60bce4234 : 1; // 0x591(0x01)
	char pad_592[0x2]; // 0x592(0x02)
	float DrawOffset[0x04]; // 0x594(0x04)
	char bFixedTilePoolSize : 1; // 0x598(0x01)
	char pad_598_1 : 7; // 0x598(0x01)
	char pad_599[0x3]; // 0x599(0x03)
	int32 TilePoolSize[0x04]; // 0x59c(0x04)
	float TileSizeUU[0x04]; // 0x5a0(0x04)
	float CellSize[0x04]; // 0x5a4(0x04)
	float CellHeight[0x04]; // 0x5a8(0x04)
	float AgentRadius[0x04]; // 0x5ac(0x04)
	float AgentHeight[0x04]; // 0x5b0(0x04)
	float AgentMaxHeight[0x04]; // 0x5b4(0x04)
	float AgentMaxSlope[0x04]; // 0x5b8(0x04)
	float AgentMaxStepHeight[0x04]; // 0x5bc(0x04)
	float MinRegionArea[0x04]; // 0x5c0(0x04)
	float MergeRegionSize[0x04]; // 0x5c4(0x04)
	float MaxSimplificationError[0x04]; // 0x5c8(0x04)
	int32 MaxSimultaneousTileGenerationJobsCount[0x04]; // 0x5cc(0x04)
	int32 TileNumberHardLimit[0x04]; // 0x5d0(0x04)
	int32 *f0177cc714[0x04]; // 0x5d4(0x04)
	int32 *42bcf443d9[0x04]; // 0x5d8(0x04)
	int32 *a68c5c4820[0x04]; // 0x5dc(0x04)
	float DefaultDrawDistance[0x04]; // 0x5e0(0x04)
	float DefaultMaxSearchNodes[0x04]; // 0x5e4(0x04)
	float DefaultMaxHierarchicalSearchNodes[0x04]; // 0x5e8(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x5ec(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x5ed(0x01)
	char pad_5EE[0x2]; // 0x5ee(0x02)
	int32 RegionChunkSplits[0x04]; // 0x5f0(0x04)
	int32 LayerChunkSplits[0x04]; // 0x5f4(0x04)
	char bSortNavigationAreasByCost : 1; // 0x5f8(0x01)
	char bPerformVoxelFiltering : 1; // 0x5f8(0x01)
	char bMarkLowHeightAreas : 1; // 0x5f8(0x01)
	char bDoFullyAsyncNavDataGathering : 1; // 0x5f8(0x01)
	char bUseBetterOffsetsFromCorners : 1; // 0x5f8(0x01)
	char bStoreEmptyTileLayers : 1; // 0x5f8(0x01)
	char bUseVirtualFilters : 1; // 0x5f8(0x01)
	char bAllowNavLinkAsPathEnd : 1; // 0x5f8(0x01)
	char pad_5F9[0x3]; // 0x5f9(0x03)
	bool bOnlySavedOnDS; // 0x5fc(0x01)
	char pad_5FD[0x3]; // 0x5fd(0x03)
	char bUseVoxelCache : 1; // 0x600(0x01)
	char pad_600_1 : 7; // 0x600(0x01)
	char pad_601[0x3]; // 0x601(0x03)
	float TileSetUpdateInterval[0x04]; // 0x604(0x04)
	float HeuristicScale[0x04]; // 0x608(0x04)
	float VerticalDeviationFromGroundCompensation[0x04]; // 0x60c(0x04)
	char pad_610[0x90]; // 0x610(0x90)
};

// Class Engine.*ff4b8fbd53
// Size: 0x38 (Inherited: 0x28)
struct U*ff4b8fbd53 : UObject {
	struct TArray<struct F*7f68d80531> *9763e0c01a[0x10]; // 0x28(0x10)
};

// Class Engine.SceneCaptureComponent
// Size: 0x550 (Inherited: 0x4d0)
struct USceneCaptureComponent : USceneComponent {
	struct TArray<struct UPrimitiveComponent*> *181c8efbcd[0x10]; // 0x4d0(0x10)
	struct TArray<struct AActor*> HiddenActors[0x10]; // 0x4e0(0x10)
	struct TArray<struct UPrimitiveComponent*> *276acdd225[0x10]; // 0x4f0(0x10)
	struct TArray<struct AActor*> ShowOnlyActors[0x10]; // 0x500(0x10)
	bool bIsLobbyCapture; // 0x510(0x01)
	bool bCaptureEveryFrame; // 0x511(0x01)
	bool bCaptureOnMovement; // 0x512(0x01)
	char pad_513[0x1]; // 0x513(0x01)
	float LODDistanceFactor[0x04]; // 0x514(0x04)
	float MaxViewDistanceOverride[0x04]; // 0x518(0x04)
	int32 CaptureSortPriority[0x04]; // 0x51c(0x04)
	struct TArray<struct F*2e7d0bf04d> ShowFlagSettings[0x10]; // 0x520(0x10)
	char pad_530[0x20]; // 0x530(0x20)

	void *7e905b4b64(); // Function Engine.SceneCaptureComponent.*7e905b4b64 // Final|Native|Public|BlueprintCallable // @ game+0x6623ca8
	void *8f98e781db(); // Function Engine.SceneCaptureComponent.*8f98e781db // Final|Native|Public|BlueprintCallable // @ game+0x660a57c
	void *4ec409b2bc(); // Function Engine.SceneCaptureComponent.*4ec409b2bc // Final|Native|Public|BlueprintCallable // @ game+0x661eb94
	void *30080cc8fb(); // Function Engine.SceneCaptureComponent.*30080cc8fb // Final|Native|Public|BlueprintCallable // @ game+0x6632090
	void *0106912d1f(); // Function Engine.SceneCaptureComponent.*0106912d1f // Final|Native|Public|BlueprintCallable // @ game+0x661ec24
	void *d263019945(); // Function Engine.SceneCaptureComponent.*d263019945 // Final|Native|Public|BlueprintCallable // @ game+0x660a3dc
	void *43f5e14905(); // Function Engine.SceneCaptureComponent.*43f5e14905 // Final|Native|Public|BlueprintCallable // @ game+0x65f12cc
	void *621d8e09f7(); // Function Engine.SceneCaptureComponent.*621d8e09f7 // Final|Native|Public|BlueprintCallable // @ game+0x6632000
};

// Class Engine.SceneCaptureComponent2D
// Size: 0xb90 (Inherited: 0x550)
struct USceneCaptureComponent2D : USceneCaptureComponent {
	enum class ECameraProjectionMode ProjectionType; // 0x550(0x01)
	char pad_551[0x3]; // 0x551(0x03)
	float FOVAngle[0x04]; // 0x554(0x04)
	bool *53c2030bce; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	float *29ce5cea98[0x04]; // 0x55c(0x04)
	float OrthoWidth[0x04]; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
	struct UTextureRenderTarget2D* TextureTarget[0x08]; // 0x568(0x08)
	enum class *bf5d45bad1 CaptureSource; // 0x570(0x01)
	enum class *1749cfde27 CompositeMode; // 0x571(0x01)
	char pad_572[0x2]; // 0x572(0x02)
	struct FLinearColor LightingOnlyBrightness[0x10]; // 0x574(0x10)
	struct FLinearColor LightingOnlySpecular[0x10]; // 0x584(0x10)
	struct FLinearColor LightingOnlyCustomData[0x10]; // 0x594(0x10)
	float LightingOnlyCustomDataAlpha[0x04]; // 0x5a4(0x04)
	char pad_5A8[0x8]; // 0x5a8(0x08)
	struct FPostProcessSettings PostProcessSettings[0x570]; // 0x5b0(0x570)
	float PostProcessBlendWeight[0x04]; // 0xb20(0x04)
	bool bUseCustomProjectionMatrix; // 0xb24(0x01)
	char pad_B25[0xb]; // 0xb25(0x0b)
	struct FMatrix CustomProjectionMatrix[0x40]; // 0xb30(0x40)
	char *8a9a073e7b : 1; // 0xb70(0x01)
	char pad_B70_1 : 7; // 0xb70(0x01)
	char pad_B71[0x3]; // 0xb71(0x03)
	bool bEnableClipPlane; // 0xb74(0x01)
	char pad_B75[0x3]; // 0xb75(0x03)
	struct FVector ClipPlaneBase[0x0c]; // 0xb78(0x0c)
	struct FVector ClipPlaneNormal[0x0c]; // 0xb84(0x0c)

	void CaptureScene(); // Function Engine.SceneCaptureComponent2D.CaptureScene // Final|Native|Public|BlueprintCallable // @ game+0x65f0bd0
	TScriptInterface<struct UBlendableInterface> *8480288ca6(); // Function Engine.SceneCaptureComponent2D.*8480288ca6 // Final|Native|Public|BlueprintCallable // @ game+0x65e4f24
};

// Class Engine.ArrowComponent
// Size: 0xa10 (Inherited: 0xa00)
struct UArrowComponent : UPrimitiveComponent {
	struct FColor ArrowColor[0x04]; // 0x9f8(0x04)
	float ArrowSize[0x04]; // 0x9fc(0x04)
	bool bIsScreenSizeScaled; // 0xa00(0x01)
	float ScreenSize[0x04]; // 0xa04(0x04)
	char bTreatAsASprite : 1; // 0xa08(0x01)
	char pad_A0D_1 : 7; // 0xa0d(0x01)
	char pad_A0E[0x2]; // 0xa0e(0x02)

	void SetArrowColor(); // Function Engine.ArrowComponent.SetArrowColor // Native|Public|HasDefaults|BlueprintCallable // @ game+0x662206c
};

// Class Engine.NavModifierVolume
// Size: 0x430 (Inherited: 0x420)
struct ANavModifierVolume : AVolume {
	char pad_420[0x8]; // 0x420(0x08)
	struct UClass* AreaClass[0x08]; // 0x428(0x08)

	void *7aaad5527c(); // Function Engine.NavModifierVolume.*7aaad5527c // Final|Native|Public|BlueprintCallable // @ game+0x65d82dc
};

// Class Engine.ParticleSystemComponent
// Size: 0xc60 (Inherited: 0xa00)
struct UParticleSystemComponent : UPrimitiveComponent {
	struct UParticleSystem* Template[0x08]; // 0x9f8(0x08)
	struct TArray<struct UMaterialInterface*> *0264e057b3[0x10]; // 0xa00(0x10)
	struct TArray<struct USkeletalMeshComponent*> *d2e13ff94a[0x10]; // 0xa10(0x10)
	char pad_A28_0 : 7; // 0xa28(0x01)
	char bResetOnDetach : 1; // 0xa20(0x01)
	char *b0c579f1b2 : 1; // 0xa21(0x01)
	char bAllowRecycling : 1; // 0xa21(0x01)
	char bAutoManageAttachment : 1; // 0xa21(0x01)
	char *6a0dc6332d : 1; // 0xa21(0x01)
	char bOverrideLODMethod : 1; // 0xa22(0x01)
	char *a9eb83c3f5 : 1; // 0xa22(0x01)
	char *f4ab1f1a19 : 1; // 0xa22(0x01)
	struct TArray<struct FParticleSysParam> InstanceParameters[0x10]; // 0xa28(0x10)
	struct FMulticastDelegate OnParticleSpawn[0x10]; // 0xa38(0x10)
	struct FMulticastDelegate OnParticleBurst[0x10]; // 0xa48(0x10)
	struct FMulticastDelegate OnParticleDeath[0x10]; // 0xa58(0x10)
	struct FMulticastDelegate OnParticleCollide[0x10]; // 0xa68(0x10)
	struct FVector *6d3adcbc3b[0x0c]; // 0xa78(0x0c)
	struct FVector *1d968f1f5c[0x0c]; // 0xa84(0x0c)
	float WarmupTime[0x04]; // 0xa90(0x04)
	float *f276ed8749[0x04]; // 0xa94(0x04)
	char pad_A99[0x3]; // 0xa99(0x03)
	float SecondsBeforeInactive[0x04]; // 0xa9c(0x04)
	char pad_AA0[0x4]; // 0xaa0(0x04)
	float *86558fc266[0x04]; // 0xaa4(0x04)
	char pad_AA8[0x8]; // 0xaa8(0x08)
	enum class *4460aee05d LODMethod; // 0xab0(0x01)
	enum class EParticleSignificanceLevel RequiredSignificance; // 0xab1(0x01)
	char pad_AB2[0x16]; // 0xab2(0x16)
	struct TArray<struct U*7130a8ded7*> *7f880bcb72[0x10]; // 0xac8(0x10)
	char pad_AD8[0x60]; // 0xad8(0x60)
	float CustomTimeDilation[0x04]; // 0xb38(0x04)
	char pad_B3C[0x4]; // 0xb3c(0x04)
	struct FMulticastDelegate OnSystemFinished[0x10]; // 0xb40(0x10)
	struct USceneComponent* AutoAttachParent[0x08]; // 0xb50(0x08)
	struct FName AutoAttachSocketName[0x08]; // 0xb58(0x08)
	enum class EAttachLocation AutoAttachLocationType; // 0xb60(0x01)
	enum class EAttachmentRule AutoAttachLocationRule; // 0xb61(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0xb62(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0xb63(0x01)
	char pad_B64[0xfc]; // 0xb64(0xfc)

	void *3eb6223e6f(); // Function Engine.ParticleSystemComponent.*3eb6223e6f // Final|Native|Public|BlueprintCallable // @ game+0x65dd5d4
	struct FVector *3967cdee21(); // Function Engine.ParticleSystemComponent.*3967cdee21 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d91cc
	void *1e3c290f5c(struct FName* ParameterName); // Function Engine.ParticleSystemComponent.*1e3c290f5c // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d9f78
	float *ae89bc7fe9(); // Function Engine.ParticleSystemComponent.*ae89bc7fe9 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c68dc
	float *33bad8c16d(); // Function Engine.ParticleSystemComponent.*33bad8c16d // Native|Public|BlueprintCallable // @ game+0x65d90a4
	void SetFloatParameter(struct FName* ParameterName); // Function Engine.ParticleSystemComponent.SetFloatParameter // Final|Native|Public|BlueprintCallable // @ game+0xcdb25c
	void *33a48ef273(); // Function Engine.ParticleSystemComponent.*33a48ef273 // Final|Native|Public|BlueprintCallable // @ game+0x65d7bd0
	void *2f88032a60(); // Function Engine.ParticleSystemComponent.*2f88032a60 // Final|Native|Public|BlueprintCallable // @ game+0x65c4e54
	struct FName *43b5fa91da(); // Function Engine.ParticleSystemComponent.*43b5fa91da // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65ddf58
	void *f78f4b8261(int32* emitterIndex); // Function Engine.ParticleSystemComponent.*f78f4b8261 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c62d8
	void *77b1620434(); // Function Engine.ParticleSystemComponent.*77b1620434 // Final|Native|Public|BlueprintCallable // @ game+0x65dbfec
	struct FVector *2b287676da(); // Function Engine.ParticleSystemComponent.*2b287676da // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d8e2c
	void *803b3191e2(struct UMaterialInterface** SourceMaterial); // Function Engine.ParticleSystemComponent.*803b3191e2 // Native|Public|BlueprintCallable // @ game+0x65c2b6c
	struct FVector *efcfc3e16f(int32* emitterIndex); // Function Engine.ParticleSystemComponent.*efcfc3e16f // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c6a1c
	int32 *652895e7b7(); // Function Engine.ParticleSystemComponent.*652895e7b7 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d8acc
	void *35fb56820d(); // Function Engine.ParticleSystemComponent.*35fb56820d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ca210
	void *a9b1891267(struct FName* SocketName); // Function Engine.ParticleSystemComponent.*a9b1891267 // Final|Native|Public|BlueprintCallable // @ game+0x65d854c
	struct FVector *93a6d9a36e(); // Function Engine.ParticleSystemComponent.*93a6d9a36e // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c6654
	void *e6536d8bf2(struct FName* EmitterName); // Function Engine.ParticleSystemComponent.*e6536d8bf2 // Native|Public|BlueprintCallable // @ game+0x65da624
	void *e90585bf5a(); // Function Engine.ParticleSystemComponent.*e90585bf5a // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9fc8
	float *69ad17cf8e(); // Function Engine.ParticleSystemComponent.*69ad17cf8e // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c6514
	int32 *4e1843a089(struct FVector* NewTargetPoint); // Function Engine.ParticleSystemComponent.*4e1843a089 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d8f68
	enum class EAttachmentRule *833271b79f(); // Function Engine.ParticleSystemComponent.*833271b79f // Final|Native|Public|BlueprintCallable // @ game+0x65d8694
	void *bbe8833323(struct FName* InFirstSocketName, enum class *a1588812a5 InWidthMode); // Function Engine.ParticleSystemComponent.*bbe8833323 // Final|Native|Public|BlueprintCallable // @ game+0x65dd8ac
	struct FVector *ac3de6ecfd(int32* emitterIndex); // Function Engine.ParticleSystemComponent.*ac3de6ecfd // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c6798
	float *f1e9447b17(); // Function Engine.ParticleSystemComponent.*f1e9447b17 // Native|Public|BlueprintCallable // @ game+0x65d8d04
	void *37b5286932(struct FName* InFirstSocketName, enum class *a1588812a5 InWidthMode); // Function Engine.ParticleSystemComponent.*37b5286932 // Final|Native|Public|BlueprintCallable // @ game+0x65be880
	struct FVector *545a9d9058(); // Function Engine.ParticleSystemComponent.*545a9d9058 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c63d0
	float *840fc18676(struct FVector* InLocation); // Function Engine.ParticleSystemComponent.*840fc18676 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65c535c
	void *865335f835(int32* emitterIndex); // Function Engine.ParticleSystemComponent.*865335f835 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d8bc8
};

// Class Engine.DefaultPawn
// Size: 0x470 (Inherited: 0x448)
struct ADefaultPawn : APawn {
	float BaseTurnRate[0x04]; // 0x448(0x04)
	float BaseLookUpRate[0x04]; // 0x44c(0x04)
	struct UPawnMovementComponent* MovementComponent[0x08]; // 0x450(0x08)
	struct USphereComponent* CollisionComponent[0x08]; // 0x458(0x08)
	struct UStaticMeshComponent* MeshComponent[0x08]; // 0x460(0x08)
	char bAddDefaultMovementBindings : 1; // 0x468(0x01)
	char pad_468_1 : 7; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)

	void *4b0eecc634(); // Function Engine.DefaultPawn.*4b0eecc634 // Native|Public|BlueprintCallable // @ game+0x65d2f88
	void MoveForward(); // Function Engine.DefaultPawn.MoveForward // Native|Public|BlueprintCallable // @ game+0x65d2e50
	void *d93a5f2923(); // Function Engine.DefaultPawn.*d93a5f2923 // Final|Native|Public|BlueprintCallable // @ game+0x65d2b5c
	void *2502c41576(); // Function Engine.DefaultPawn.*2502c41576 // Final|Native|Public|BlueprintCallable // @ game+0x65df6bc
	void MoveRight(); // Function Engine.DefaultPawn.MoveRight // Native|Public|BlueprintCallable // @ game+0x65d2eec
};

// Class Engine.SpectatorPawn
// Size: 0x470 (Inherited: 0x470)
struct ASpectatorPawn : ADefaultPawn {
};

// Class Engine.FloatingPawnMovement
// Size: 0x290 (Inherited: 0x280)
struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed[0x04]; // 0x278(0x04)
	float Acceleration[0x04]; // 0x27c(0x04)
	float Deceleration[0x04]; // 0x280(0x04)
	float TurningBoost[0x04]; // 0x284(0x04)
	char *a96f552028 : 1; // 0x288(0x01)
};

// Class Engine.SpectatorPawnMovement
// Size: 0x2a0 (Inherited: 0x290)
struct USpectatorPawnMovement : UFloatingPawnMovement {
	char *cea07ee5d4 : 1; // 0x290(0x01)
	char pad_290_1 : 7; // 0x290(0x01)
	char pad_291[0xf]; // 0x291(0x0f)
};

// Class Engine.SplineComponent
// Size: 0xaf0 (Inherited: 0xa00)
struct USplineComponent : UPrimitiveComponent {
	struct FSplineCurves *e4855893fe[0x60]; // 0x9f8(0x60)
	struct FInterpCurveVector SplineInfo[0x18]; // 0xa58(0x18)
	struct FInterpCurveQuat SplineRotInfo[0x18]; // 0xa70(0x18)
	struct FInterpCurveVector SplineScaleInfo[0x18]; // 0xa88(0x18)
	struct FInterpCurveFloat SplineReparamTable[0x18]; // 0xaa0(0x18)
	bool bAllowSplineEditingPerInstance; // 0xab8(0x01)
	int32 *b2fc378f11[0x04]; // 0xabc(0x04)
	bool *f0eb9457f6; // 0xac0(0x01)
	bool *d026b2a624; // 0xac1(0x01)
	float *9b43bd053e[0x04]; // 0xac4(0x04)
	float Duration[0x04]; // 0xac8(0x04)
	bool bStationaryEndpoints; // 0xacc(0x01)
	bool *bbd66348f8; // 0xacd(0x01)
	bool *567f48a68a; // 0xace(0x01)
	bool bInputSplinePointsToConstructionScript; // 0xacf(0x01)
	bool bDrawDebug; // 0xad0(0x01)
	bool *46cb7b878f; // 0xad1(0x01)
	bool bLoopPositionOverride; // 0xad2(0x01)
	float *2784a51576[0x04]; // 0xad4(0x04)
	struct FVector DefaultUpVector[0x0c]; // 0xad8(0x0c)
	char pad_AE6[0xa]; // 0xae6(0x0a)

	enum class ESplineCoordinateSpace *7b4c9d031b(); // Function Engine.SplineComponent.*7b4c9d031b // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65fa734
	int32 *6d1df59408(); // Function Engine.SplineComponent.*6d1df59408 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ff684
	void *976eb1cdf1(float* Distance); // Function Engine.SplineComponent.*976eb1cdf1 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6604f48
	void *cdebe3cfc2(bool bInClosedLoop); // Function Engine.SplineComponent.*cdebe3cfc2 // Final|Native|Public|BlueprintCallable // @ game+0x6624320
	enum class ESplineCoordinateSpace *fdbdd3d158(); // Function Engine.SplineComponent.*fdbdd3d158 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65fef10
	int32 *c43d5d98a0(); // Function Engine.SplineComponent.*c43d5d98a0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6608880
	void *e319c53179(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*e319c53179 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66048b4
	enum class ESplineCoordinateSpace *caf3ef8e09(); // Function Engine.SplineComponent.*caf3ef8e09 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6601fa0
	struct FSplinePoint *e33656ec55(); // Function Engine.SplineComponent.*e33656ec55 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65e5038
	void *3b676ec63f(int32* PointIndex); // Function Engine.SplineComponent.*3b676ec63f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66049b4
	void *c0b3ba04bb(); // Function Engine.SplineComponent.*c0b3ba04bb // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66053ac
	bool *d0306b7540(); // Function Engine.SplineComponent.*d0306b7540 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65fb31c
	void *86965b948e(float* Distance); // Function Engine.SplineComponent.*86965b948e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6604c30
	struct FVector *cccfa56147(); // Function Engine.SplineComponent.*cccfa56147 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6625644
	float *444c49960a(); // Function Engine.SplineComponent.*444c49960a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66085f0
	void *89f33ae457(); // Function Engine.SplineComponent.*89f33ae457 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x662d058
	void *7674abbac0(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*7674abbac0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65fcc18
	int32 *68eb0ba76e(); // Function Engine.SplineComponent.*68eb0ba76e // Final|Native|Public|BlueprintCallable // @ game+0x661ecc4
	enum class ESplineCoordinateSpace *ed3e2a0190(); // Function Engine.SplineComponent.*ed3e2a0190 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6607e34
	void *8d4fda68ab(struct FVector* WorldLocation); // Function Engine.SplineComponent.*8d4fda68ab // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65fb000
	enum class ESplineCoordinateSpace *4a52b59c2e(); // Function Engine.SplineComponent.*4a52b59c2e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65ff14c
	int32 *be88f7346a(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*be88f7346a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6601fa0
	void *2cd2c878c1(); // Function Engine.SplineComponent.*2cd2c878c1 // Final|Native|Public|BlueprintCallable // @ game+0x663969c
	bool *8db1b83179(float* Time); // Function Engine.SplineComponent.*8db1b83179 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6604ae8
	float *ab63d040ff(); // Function Engine.SplineComponent.*ab63d040ff // Final|Native|Public|BlueprintCallable // @ game+0x6624418
	void *62d46629cc(); // Function Engine.SplineComponent.*62d46629cc // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65da230
	void SetSplinePointType(enum class ESplinePointType Type); // Function Engine.SplineComponent.SetSplinePointType // Final|Native|Public|BlueprintCallable // @ game+0x662d124
	enum class ESplineCoordinateSpace *302ea2dab2(); // Function Engine.SplineComponent.*302ea2dab2 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x662e3a0
	void *4ea785482c(bool bUseConstantVelocity); // Function Engine.SplineComponent.*4ea785482c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6608938
	enum class ESplineCoordinateSpace *d41700f03e(); // Function Engine.SplineComponent.*d41700f03e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6605048
	enum class ESplineCoordinateSpace *91767e1a30(); // Function Engine.SplineComponent.*91767e1a30 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6607d34
	void *738416c2ad(bool bUseConstantVelocity); // Function Engine.SplineComponent.*738416c2ad // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6608ba8
	enum class ESplineCoordinateSpace *fc9e685ffb(); // Function Engine.SplineComponent.*fc9e685ffb // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65ff24c
	enum class ESplineCoordinateSpace *df19cb0db6(); // Function Engine.SplineComponent.*df19cb0db6 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6602588
	void *0f131f0c6d(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*0f131f0c6d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6604e10
	struct FVector *32321cedbf(); // Function Engine.SplineComponent.*32321cedbf // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65fa858
	enum class ESplineCoordinateSpace *2a39fcaf9d(); // Function Engine.SplineComponent.*2a39fcaf9d // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x662a0a0
	void *bccf821cd7(struct FVector* LocalLocation); // Function Engine.SplineComponent.*bccf821cd7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6602290
	bool *d95b6f672a(); // Function Engine.SplineComponent.*d95b6f672a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6607354
	enum class ESplineCoordinateSpace *4f4cd5b2fd(); // Function Engine.SplineComponent.*4f4cd5b2fd // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65fadd8
	void *395084cc78(float* Distance); // Function Engine.SplineComponent.*395084cc78 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6608ae8
	bool *904cfd2f2e(); // Function Engine.SplineComponent.*904cfd2f2e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6607f68
	enum class ESplineCoordinateSpace *c60d6edf0f(); // Function Engine.SplineComponent.*c60d6edf0f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6606460
	void *5a71db2e37(int32* StartIndex); // Function Engine.SplineComponent.*5a71db2e37 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66020c4
	void GetNumberOfSplinePoints(); // Function Engine.SplineComponent.GetNumberOfSplinePoints // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6602dbc
	void *bc154fa11e(); // Function Engine.SplineComponent.*bc154fa11e // Final|Native|Public|BlueprintCallable // @ game+0x65f1634
	void *112769234e(); // Function Engine.SplineComponent.*112769234e // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e55f8
	void *14b50377fd(); // Function Engine.SplineComponent.*14b50377fd // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66087c0
	enum class ESplineCoordinateSpace *d22dfdbd7c(); // Function Engine.SplineComponent.*d22dfdbd7c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6602688
	float *9f717ab45b(); // Function Engine.SplineComponent.*9f717ab45b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6608cb8
	void *93d0ee66fc(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*93d0ee66fc // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65fb1f8
	enum class ESplineCoordinateSpace *39bea93356(); // Function Engine.SplineComponent.*39bea93356 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65fa904
	enum class ESplineCoordinateSpace *9326e47479(); // Function Engine.SplineComponent.*9326e47479 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e546c
	void *6bd9bbc712(); // Function Engine.SplineComponent.*6bd9bbc712 // Final|Native|Public|BlueprintCallable // @ game+0x6625e30
	void *23f898d882(struct FVector* WorldLocation); // Function Engine.SplineComponent.*23f898d882 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65fb4a4
	enum class ESplineCoordinateSpace *fd0c91139e(); // Function Engine.SplineComponent.*fd0c91139e // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x662f27c
	void *2aef1bb91c(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*2aef1bb91c // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x662d254
	int32 *a83c9914b5(); // Function Engine.SplineComponent.*a83c9914b5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6605c28
	bool *96dd4d52b9(); // Function Engine.SplineComponent.*96dd4d52b9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66086b0
	void *e55d35b53f(); // Function Engine.SplineComponent.*e55d35b53f // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e5284
	void *af9dccd68a(); // Function Engine.SplineComponent.*af9dccd68a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x660bbdc
	enum class ESplineCoordinateSpace *1e7b8c34a0(); // Function Engine.SplineComponent.*1e7b8c34a0 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65faefc
	enum class ESplineCoordinateSpace *1ed04e89f0(bool bUseConstantVelocity); // Function Engine.SplineComponent.*1ed04e89f0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6606560
	void *cf23ea2e13(float* Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.*cf23ea2e13 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6605144
	void *75d675f16c(); // Function Engine.SplineComponent.*75d675f16c // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x662d4bc
	int32 *59903796c9(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*59903796c9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6604d24
	void *e91d19565f(float* Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.*e91d19565f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6602784
	struct TArray<struct FSplinePoint> *5cbd31cdd2(); // Function Engine.SplineComponent.*5cbd31cdd2 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65e5154
	void *36f7fb5f70(int32* PointIndex, bool bUseScale); // Function Engine.SplineComponent.*36f7fb5f70 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66074c8
	bool *2d2944af94(); // Function Engine.SplineComponent.*2d2944af94 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6605538
	struct FVector *68745033d7(); // Function Engine.SplineComponent.*68745033d7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66023e8
	void *2a125ecadf(struct FVector* WorldLocation); // Function Engine.SplineComponent.*2a125ecadf // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65fb130
	enum class ESplineCoordinateSpace AddSplinePoint(); // Function Engine.SplineComponent.AddSplinePoint // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e5324
	bool *31010fa750(); // Function Engine.SplineComponent.*31010fa750 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65ff348
	void *08e1e9ebdd(); // Function Engine.SplineComponent.*08e1e9ebdd // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65da230
	void *acc78471c0(int32* PointIndex); // Function Engine.SplineComponent.*acc78471c0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6605464
	void *898b520d62(); // Function Engine.SplineComponent.*898b520d62 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6605c00
	struct FVector *c308954174(struct FVector* InLeaveTangent); // Function Engine.SplineComponent.*c308954174 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x662e52c
	void *205c2e17a2(); // Function Engine.SplineComponent.*205c2e17a2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65fffc0
	bool *85f2ef909e(); // Function Engine.SplineComponent.*85f2ef909e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6607674
	void *dfab37a503(); // Function Engine.SplineComponent.*dfab37a503 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6630494
};

// Class Engine.MaterialInterface
// Size: 0x70 (Inherited: 0x28)
struct UMaterialInterface : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct USubsurfaceProfile* SubsurfaceProfile[0x08]; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct F*31693f5ae2 LightmassSettings[0x14]; // 0x40(0x14)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*8f67b6e0e6> *f16f190461[0x10]; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)

	void *47cf8f9bb6(); // Function Engine.MaterialInterface.*47cf8f9bb6 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cac48
	void *c3924ed2b7(); // Function Engine.MaterialInterface.*c3924ed2b7 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x65c6240
};

// Class Engine.MaterialInstance
// Size: 0x1e0 (Inherited: 0x70)
struct UMaterialInstance : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial[0x08]; // 0x70(0x08)
	struct UMaterialInterface* Parent[0x08]; // 0x78(0x08)
	char *b4fdeda5cd : 1; // 0x80(0x01)
	char *6c011e6df7 : 1; // 0x80(0x01)
	char pad_80_2 : 1; // 0x80(0x01)
	char bOverrideSubsurfaceProfile : 1; // 0x80(0x01)
	char pad_80_4 : 4; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<struct F*a7bbc83ffe> FontParameterValues[0x10]; // 0x88(0x10)
	struct TArray<struct F*4ce84ba02f> ScalarParameterValues[0x10]; // 0x98(0x10)
	struct TArray<struct F*8a4a1d286a> TextureParameterValues[0x10]; // 0xa8(0x10)
	struct TArray<struct F*c2d53d1c03> VectorParameterValues[0x10]; // 0xb8(0x10)
	bool bOverrideBaseProperties; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	struct FMaterialInstanceBasePropertyOverrides BasePropertyOverrides[0x24]; // 0xcc(0x24)
	char pad_F0[0xf0]; // 0xf0(0xf0)
};

// Class Engine.MaterialInstanceConstant
// Size: 0x1e0 (Inherited: 0x1e0)
struct UMaterialInstanceConstant : UMaterialInstance {
};

// Class Engine.MaterialExpression
// Size: 0x60 (Inherited: 0x28)
struct UMaterialExpression : UObject {
	struct UMaterial* Material[0x08]; // 0x28(0x08)
	struct UMaterialFunction* Function[0x08]; // 0x30(0x08)
	struct FString Desc[0x10]; // 0x38(0x10)
	struct FColor BorderColor[0x04]; // 0x48(0x04)
	char *3a783ccbfb : 1; // 0x4c(0x01)
	char *a5da7c9fbf : 1; // 0x4c(0x01)
	char *46c0074c5d : 1; // 0x4c(0x01)
	char *2ed4c5fd64 : 1; // 0x4c(0x01)
	char *e676174cee : 1; // 0x4c(0x01)
	char *222a5b7244 : 1; // 0x4c(0x01)
	char *6ae63981e1 : 1; // 0x4c(0x01)
	char *d3a59df4e9 : 1; // 0x4c(0x01)
	char *e872c9d323 : 1; // 0x4d(0x01)
	char *9929d6a9bc : 1; // 0x4d(0x01)
	char *e975043135 : 1; // 0x4d(0x01)
	char pad_4D_3 : 5; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct TArray<struct FExpressionOutput> Outputs[0x10]; // 0x50(0x10)
};

// Class Engine.*9cae02a0c8
// Size: 0x60 (Inherited: 0x60)
struct U*9cae02a0c8 : UMaterialExpression {
};

// Class Engine.*6a03f15cb4
// Size: 0x60 (Inherited: 0x60)
struct U*6a03f15cb4 : UMaterialExpression {
};

// Class Engine.*0dbf8eac01
// Size: 0x28 (Inherited: 0x28)
struct U*0dbf8eac01 : UObject {

	void Activate(); // Function Engine.*0dbf8eac01.Activate // Native|Public|BlueprintCallable // @ game+0x58d1c6c
};

// Class Engine.BlueprintGeneratedClass
// Size: 0x3b8 (Inherited: 0x2b0)
struct UBlueprintGeneratedClass : UClass {
	int32 NumReplicatedProperties[0x04]; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct TArray<struct U*3df69eb1ab*> *d50407421b[0x10]; // 0x2b8(0x10)
	struct TArray<struct UActorComponent*> *2618d515c0[0x10]; // 0x2c8(0x10)
	struct TArray<struct U*12776be9f9*> *7a479ec104[0x10]; // 0x2d8(0x10)
	struct USimpleConstructionScript* SimpleConstructionScript[0x08]; // 0x2e8(0x08)
	struct UInheritableComponentHandler* InheritableComponentHandler[0x08]; // 0x2f0(0x08)
	struct UStructProperty* *e92387d3dd[0x08]; // 0x2f8(0x08)
	struct UFunction* *33c45f144f[0x08]; // 0x300(0x08)
	struct TArray<struct F*f871fdbfe8> FastCallPairs[0x10]; // 0x308(0x10)
	bool *b1de85ca98; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct TMap<struct FName, struct F*76eff26226> *8d069c690c[0x50]; // 0x320(0x50)
	bool *f13a1e87a4; // 0x370(0x01)
	char pad_371[0x47]; // 0x371(0x47)
};

// Class Engine.CameraActor
// Size: 0x990 (Inherited: 0x3e8)
struct ACameraActor : AActor {
	enum class EAutoReceiveInput *ed863f85b0; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct UCameraComponent* CameraComponent[0x08]; // 0x3f0(0x08)
	struct USceneComponent* SceneComponent[0x08]; // 0x3f8(0x08)
	char pad_400[0x8]; // 0x400(0x08)
	char bConstrainAspectRatio : 1; // 0x408(0x01)
	char pad_408_1 : 7; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	float AspectRatio[0x04]; // 0x40c(0x04)
	float FOVAngle[0x04]; // 0x410(0x04)
	float PostProcessBlendWeight[0x04]; // 0x414(0x04)
	char pad_418[0x8]; // 0x418(0x08)
	struct FPostProcessSettings PostProcessSettings[0x570]; // 0x420(0x570)

	void *f3e4e78431(); // Function Engine.CameraActor.*f3e4e78431 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c61e8
};

// Class Engine.UserDefinedStruct
// Size: 0x100 (Inherited: 0xf0)
struct UUserDefinedStruct : UScriptStruct {
	struct FGuid Guid[0x10]; // 0xf0(0x10)
};

// Class Engine.AISystemBase
// Size: 0x48 (Inherited: 0x28)
struct UAISystemBase : UObject {
	struct FStringClassReference AISystemClassName[0x10]; // 0x28(0x10)
	struct FName AISystemModuleName[0x08]; // 0x38(0x08)
	bool bInstantiateAISystemOnClient; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.*1a2c4a78a0
// Size: 0x48 (Inherited: 0x28)
struct U*1a2c4a78a0 : UObject {
	struct TArray<struct F*32e4d16215> Areas[0x10]; // 0x28(0x10)
	struct F*85f602d0b9 IncludeFlags[0x04]; // 0x38(0x04)
	struct F*85f602d0b9 ExcludeFlags[0x04]; // 0x3c(0x04)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class Engine.*6c389a598a
// Size: 0x38 (Inherited: 0x28)
struct U*6c389a598a : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Engine.Model
// Size: 0x560 (Inherited: 0x28)
struct UModel : UObject {
	char pad_28[0x538]; // 0x28(0x538)
};

// Class Engine.*cfd78a8c42
// Size: 0x28 (Inherited: 0x28)
struct U*cfd78a8c42 : UObject {
};

// Class Engine.*9e86854228
// Size: 0x28 (Inherited: 0x28)
struct U*9e86854228 : UObject {
};

// Class Engine.EdGraphNode
// Size: 0xa0 (Inherited: 0x28)
struct UEdGraphNode : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> DeprecatedPins[0x10]; // 0x38(0x10)
	int32 *61c5fd1f45[0x04]; // 0x48(0x04)
	int32 *957dc8ede2[0x04]; // 0x4c(0x04)
	int32 *1bc9527dfd[0x04]; // 0x50(0x04)
	int32 *99c349eabe[0x04]; // 0x54(0x04)
	char *017d7cfcfa : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString NodeComment[0x10]; // 0x60(0x10)
	bool *865c9c538c; // 0x70(0x01)
	bool *2ed4c5fd64; // 0x71(0x01)
	bool *310f58853a; // 0x72(0x01)
	char pad_73[0x1]; // 0x73(0x01)
	int32 *fbe5696df8[0x04]; // 0x74(0x04)
	struct FString *7beb49606d[0x10]; // 0x78(0x10)
	struct FGuid NodeGuid[0x10]; // 0x88(0x10)
	enum class ENodeAdvancedPins *2ec0f2d5a5; // 0x98(0x01)
	enum class ENodeEnabledState *1b089cec93; // 0x99(0x01)
	bool *a15c4f5c1f; // 0x9a(0x01)
	bool bIsNodeEnabled; // 0x9b(0x01)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Engine.EdGraphPin_Deprecated
// Size: 0x140 (Inherited: 0x28)
struct UEdGraphPin_Deprecated : UObject {
	struct FString PinName[0x10]; // 0x28(0x10)
	struct FString PinToolTip[0x10]; // 0x38(0x10)
	enum class EEdGraphPinDirection Direction; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct F*4342bfc443 PinType[0x80]; // 0x50(0x80)
	struct FString DefaultValue[0x10]; // 0xd0(0x10)
	struct FString *e7ac6b2bb0[0x10]; // 0xe0(0x10)
	struct UObject* *78be025fbb[0x08]; // 0xf0(0x08)
	struct FText *9f02b52b4e[0x18]; // 0xf8(0x18)
	struct TArray<struct UEdGraphPin_Deprecated*> *571292af4d[0x10]; // 0x110(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> *42fc9067df[0x10]; // 0x120(0x10)
	struct UEdGraphPin_Deprecated* *de5ae33e93[0x08]; // 0x130(0x08)
	struct UEdGraphPin_Deprecated* *3af63fd44c[0x08]; // 0x138(0x08)
};

// Class Engine.*44ca1cef30
// Size: 0x28 (Inherited: 0x28)
struct U*44ca1cef30 : UInterface {
};

// Class Engine.Level
// Size: 0x330 (Inherited: 0x28)
struct ULevel : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct U*cfe9bd80c3*> *0545d7fd4e[0x10]; // 0x30(0x10)
	struct TArray<struct FGuid> *2dafba22fe[0x10]; // 0x40(0x10)
	struct ALevelScriptActor* LevelScriptActor[0x08]; // 0x50(0x08)
	float *31c716180a[0x04]; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UWorld* *654b8d1763[0x08]; // 0x60(0x08)
	struct ANavigationObjectBase* *a2165f48c4[0x08]; // 0x68(0x08)
	char pad_70[0x40]; // 0x70(0x40)
	struct U*33266603e2* ActorCluster[0x08]; // 0xb0(0x08)
	char pad_B8[0x38]; // 0xb8(0x38)
	struct ANavigationObjectBase* *81b2bad029[0x08]; // 0xf0(0x08)
	char pad_F8[0x78]; // 0xf8(0x78)
	struct FGuid *3d8a333984[0x10]; // 0x170(0x10)
	char pad_180[0x8]; // 0x180(0x08)
	struct UMapBuildDataRegistry* *7c9be48b22[0x08]; // 0x188(0x08)
	char pad_190_0 : 2; // 0x190(0x01)
	char *9f59dfe013 : 1; // 0x190(0x01)
	char bIsVisible : 1; // 0x190(0x01)
	char bLocked : 1; // 0x190(0x01)
	char *02e9790014 : 1; // 0x190(0x01)
	char pad_190_6 : 2; // 0x190(0x01)
	char pad_191[0x1f]; // 0x191(0x1f)
	float *c1eaeb8397[0x04]; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct TArray<struct U*b5dde59565*> *575b76f3d9[0x10]; // 0x1b8(0x10)
	char pad_1C8[0x10]; // 0x1c8(0x10)
	int32 *e9b2c9a902[0x04]; // 0x1d8(0x04)
	int32 *ef7f2cdc37[0x04]; // 0x1dc(0x04)
	struct UModel* Model[0x08]; // 0x1e0(0x08)
	char pad_1E8[0x8]; // 0x1e8(0x08)
	bool *11f6bfbd58; // 0x1f0(0x01)
	char pad_1F1[0x3]; // 0x1f1(0x03)
	struct FIntVector *edcaca8239[0x0c]; // 0x1f4(0x0c)
	char pad_200[0x8]; // 0x200(0x08)
	struct TArray<struct FVector> *71279b0e2d[0x10]; // 0x208(0x10)
	char pad_218[0xe8]; // 0x218(0xe8)
	struct AWorldSettings* WorldSettings[0x08]; // 0x300(0x08)
	char pad_308[0x8]; // 0x308(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData[0x10]; // 0x310(0x10)
	char pad_320[0x10]; // 0x320(0x10)
};

// Class Engine.*3a93198c95
// Size: 0x28 (Inherited: 0x28)
struct U*3a93198c95 : UInterface {
};

// Class Engine.AmbientSound
// Size: 0x3f0 (Inherited: 0x3e8)
struct AAmbientSound : AActor {
	struct UAudioComponent* AudioComponent[0x08]; // 0x3e8(0x08)

	float AdjustVolume(); // Function Engine.AmbientSound.AdjustVolume // Final|Native|Public|BlueprintCallable // @ game+0x65be794
	float *a2584d7220(); // Function Engine.AmbientSound.*a2584d7220 // Final|Native|Public|BlueprintCallable // @ game+0x65c4f04
	void Stop(); // Function Engine.AmbientSound.Stop // Final|Native|Public|BlueprintCallable // @ game+0x65dec80
	void Play(); // Function Engine.AmbientSound.Play // Final|Native|Public|BlueprintCallable // @ game+0x65d3784
	float FadeOut(); // Function Engine.AmbientSound.FadeOut // Final|Native|Public|BlueprintCallable // @ game+0x65c4ff4
};

// Class Engine.AutoBenchSettings
// Size: 0x40 (Inherited: 0x28)
struct UAutoBenchSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct F*3fd7aec64b> Settings[0x10]; // 0x30(0x10)
};

// Class Engine.AutoBenchControlActor
// Size: 0x3e8 (Inherited: 0x3e8)
struct AAutoBenchControlActor : AActor {
};

// Class Engine.*d1d2b8698a
// Size: 0x28 (Inherited: 0x28)
struct U*d1d2b8698a : UObject {
};

// Class Engine.*9c3aeb490a
// Size: 0x28 (Inherited: 0x28)
struct U*9c3aeb490a : UInterface {
};

// Class Engine.BillboardComponent
// Size: 0xa20 (Inherited: 0xa00)
struct UBillboardComponent : UPrimitiveComponent {
	struct UTexture2D* Sprite[0x08]; // 0x9f8(0x08)
	char bIsScreenSizeScaled : 1; // 0xa00(0x01)
	float ScreenSize[0x04]; // 0xa04(0x04)
	float U[0x04]; // 0xa08(0x04)
	float UL[0x04]; // 0xa0c(0x04)
	float V[0x04]; // 0xa10(0x04)
	float VL[0x04]; // 0xa14(0x04)
	struct FColor Color[0x04]; // 0xa18(0x04)

	void *fe62714d9b(int32* NewU, int32* NewV); // Function Engine.BillboardComponent.*fe62714d9b // Native|Public|BlueprintCallable // @ game+0x65ddad4
	void *6a7a2b4bb4(); // Function Engine.BillboardComponent.*6a7a2b4bb4 // Native|Public|BlueprintCallable // @ game+0x65dd380
	int32 *26dee22cc2(); // Function Engine.BillboardComponent.*26dee22cc2 // Native|Public|BlueprintCallable // @ game+0x65dd414
	void SetColor(); // Function Engine.BillboardComponent.SetColor // Final|Native|Public|HasDefaults // @ game+0x65d9da0
};

// Class Engine.*8db539420c
// Size: 0x28 (Inherited: 0x28)
struct U*8db539420c : UInterface {
};

// Class Engine.StaticMesh
// Size: 0x170 (Inherited: 0x28)
struct UStaticMesh : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	int32 MinLOD[0x04]; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct UMaterialInterface*> Materials[0x10]; // 0x48(0x10)
	struct TArray<struct F*534d06babb> StaticMaterials[0x10]; // 0x58(0x10)
	float *23cf50e234[0x04]; // 0x68(0x04)
	int32 LightMapResolution[0x04]; // 0x6c(0x04)
	int32 *be31f80f30[0x04]; // 0x70(0x04)
	float *722c540fe9[0x04]; // 0x74(0x04)
	struct UBodySetup* BodySetup[0x08]; // 0x78(0x08)
	int32 *f2ad808c42[0x04]; // 0x80(0x04)
	char *7c9cde204d : 1; // 0x84(0x01)
	char *122eb607ef : 1; // 0x84(0x01)
	char bStripComplexCollisionForConsole : 1; // 0x84(0x01)
	char *33a7a5f335 : 1; // 0x84(0x01)
	char bRequiresAreaWeightedSampling : 1; // 0x84(0x01)
	char pad_84_5 : 3; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float LpvBiasMultiplier[0x04]; // 0x88(0x04)
	bool *198183bc1f; // 0x8c(0x01)
	char pad_8D[0x33]; // 0x8d(0x33)
	struct TArray<struct U*2ee8b8c92f*> Sockets[0x10]; // 0xc0(0x10)
	char pad_D0[0x10]; // 0xd0(0x10)
	struct FVector *10c1bdc006[0x0c]; // 0xe0(0x0c)
	struct FVector *609721a3eb[0x0c]; // 0xec(0x0c)
	struct FBoxSphereBounds *b31255077e[0x1c]; // 0xf8(0x1c)
	bool *2c12e476e1; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	int32 *618491fca8[0x04]; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<struct UAssetUserData*> AssetUserData[0x10]; // 0x120(0x10)
	struct UNavCollision* NavCollision[0x08]; // 0x130(0x08)
	struct F*795e425430 *b27fae7125[0x28]; // 0x138(0x28)
	struct TArray<struct UMaterialInstanceConstant*> *1891538393[0x10]; // 0x160(0x10)

	void *c579dd6c1d(); // Function Engine.StaticMesh.*c579dd6c1d // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c6c68
	void *db9c4dbc4e(); // Function Engine.StaticMesh.*db9c4dbc4e // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ca294
	void *7a6b970ee0(); // Function Engine.StaticMesh.*7a6b970ee0 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c6b60
	void *edfa89fbf9(int32* InLOD); // Function Engine.StaticMesh.*edfa89fbf9 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ca304
};

// Class Engine.*d152ab6626
// Size: 0x5f0 (Inherited: 0x4d0)
struct U*d152ab6626 : USceneComponent {
	struct FVector Extents[0x0c]; // 0x4d0(0x0c)
	struct FVector FadeExtents_Neg[0x0c]; // 0x4dc(0x0c)
	struct FVector FadeExtents_Pos[0x0c]; // 0x4e8(0x0c)
	bool bOutdoorTransition; // 0x4f4(0x01)
	char pad_4F5[0x3]; // 0x4f5(0x03)
	float VolumeAlpha[0x04]; // 0x4f8(0x04)
	float Brightness[0x04]; // 0x4fc(0x04)
	float SkyIntensity[0x04]; // 0x500(0x04)
	int32 Priority[0x04]; // 0x504(0x04)
	struct F*944fc9bb94 AmbientCube2[0xc8]; // 0x508(0xc8)
	char pad_5D0[0x20]; // 0x5d0(0x20)

	void *fc50369d15(); // Function Engine.*d152ab6626.*fc50369d15 // Final|Native|Public // @ game+0xbf00fc
};

// Class Engine.GIVolumesContainerComponent
// Size: 0x4f0 (Inherited: 0x4d0)
struct UGIVolumesContainerComponent : USceneComponent {
	char pad_4D0[0x20]; // 0x4d0(0x20)
};

// Class Engine.BoxGIVolume
// Size: 0x3f0 (Inherited: 0x3e8)
struct ABoxGIVolume : AActor {
	struct U*d152ab6626* VolumeComponent[0x08]; // 0x3e8(0x08)
};

// Class Engine.BrushShape
// Size: 0x420 (Inherited: 0x420)
struct ABrushShape : ABrush {
};

// Class Engine.AudioVolume
// Size: 0x468 (Inherited: 0x420)
struct AAudioVolume : AVolume {
	float Priority[0x04]; // 0x420(0x04)
	char bEnabled : 1; // 0x424(0x01)
	char pad_424_1 : 7; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	struct FReverbSettings Settings[0x18]; // 0x428(0x18)
	struct F*3e305a18ce AmbientZoneSettings[0x24]; // 0x440(0x24)
	char pad_464[0x4]; // 0x464(0x04)

	void SetReverbSettings(); // Function Engine.AudioVolume.SetReverbSettings // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65dd228
	void SetPriority(); // Function Engine.AudioVolume.SetPriority // Final|Native|Public|BlueprintCallable // @ game+0x65dcd50
	void OnRep_bEnabled(); // Function Engine.AudioVolume.OnRep_bEnabled // Final|Native|Private // @ game+0x58aed64
	void *97d87abcd2(); // Function Engine.AudioVolume.*97d87abcd2 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65db3d8
	void *61153ffc78(); // Function Engine.AudioVolume.*61153ffc78 // Final|Native|Public|BlueprintCallable // @ game+0x65da7a0
};

// Class Engine.BlockingVolume
// Size: 0x420 (Inherited: 0x420)
struct ABlockingVolume : AVolume {
};

// Class Engine.CameraBlockingVolume
// Size: 0x420 (Inherited: 0x420)
struct ACameraBlockingVolume : AVolume {
};

// Class Engine.CullDistanceVolume
// Size: 0x448 (Inherited: 0x420)
struct ACullDistanceVolume : AVolume {
	struct TArray<struct F*1eaa6792c3> CullDistances[0x10]; // 0x420(0x10)
	char bEnabled : 1; // 0x430(0x01)
	char pad_430_1 : 7; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	float CullDistanceForLODActor[0x04]; // 0x434(0x04)
	float CullDistanceForLODActorTooFar[0x04]; // 0x438(0x04)
	bool bUseActorBound; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	float IgnoreActorBoundSize[0x04]; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
};

// Class Engine.LevelStreamingVolume
// Size: 0x438 (Inherited: 0x420)
struct ALevelStreamingVolume : AVolume {
	struct TArray<struct FName> StreamingLevelNames[0x10]; // 0x420(0x10)
	char bEditorPreVisOnly : 1; // 0x430(0x01)
	char bDisabled : 1; // 0x430(0x01)
	char pad_430_2 : 6; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	enum class *8d2645b9ee StreamingUsage; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
};

// Class Engine.LightmassCharacterIndirectDetailVolume
// Size: 0x420 (Inherited: 0x420)
struct ALightmassCharacterIndirectDetailVolume : AVolume {
};

// Class Engine.LightmassImportanceVolume
// Size: 0x420 (Inherited: 0x420)
struct ALightmassImportanceVolume : AVolume {
};

// Class Engine.MeshMergeCullingVolume
// Size: 0x420 (Inherited: 0x420)
struct AMeshMergeCullingVolume : AVolume {
};

// Class Engine.NavMeshBoundsVolume
// Size: 0x428 (Inherited: 0x420)
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents[0x04]; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
};

// Class Engine.DefaultPhysicsVolume
// Size: 0x438 (Inherited: 0x438)
struct ADefaultPhysicsVolume : APhysicsVolume {
};

// Class Engine.KillZVolume
// Size: 0x438 (Inherited: 0x438)
struct AKillZVolume : APhysicsVolume {
};

// Class Engine.PainCausingVolume
// Size: 0x460 (Inherited: 0x438)
struct APainCausingVolume : APhysicsVolume {
	char bPainCausing : 1; // 0x438(0x01)
	char pad_438_1 : 7; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	float DamagePerSec[0x04]; // 0x43c(0x04)
	struct UClass* DamageType[0x08]; // 0x440(0x08)
	float PainInterval[0x04]; // 0x448(0x04)
	char bEntryPain : 1; // 0x44c(0x01)
	char *b3a1603483 : 1; // 0x44c(0x01)
	char pad_44C_2 : 6; // 0x44c(0x01)
	char pad_44D[0x3]; // 0x44d(0x03)
	struct AController* *38f615a2ac[0x08]; // 0x450(0x08)
	char pad_458[0x8]; // 0x458(0x08)
};

// Class Engine.BlendableInterface
// Size: 0x28 (Inherited: 0x28)
struct UBlendableInterface : UInterface {
};

// Class Engine.Scene
// Size: 0x28 (Inherited: 0x28)
struct UScene : UObject {
};

// Class Engine.*9e9b893e41
// Size: 0x28 (Inherited: 0x28)
struct U*9e9b893e41 : UInterface {
};

// Class Engine.PostProcessVolume
// Size: 0x9b0 (Inherited: 0x420)
struct APostProcessVolume : AVolume {
	char pad_420[0x10]; // 0x420(0x10)
	struct FPostProcessSettings Settings[0x570]; // 0x430(0x570)
	float Priority[0x04]; // 0x9a0(0x04)
	float BlendRadius[0x04]; // 0x9a4(0x04)
	float BlendWeight[0x04]; // 0x9a8(0x04)
	char bEnabled : 1; // 0x9ac(0x01)
	char bUnbound : 1; // 0x9ac(0x01)
	char pad_9AC_2 : 6; // 0x9ac(0x01)
	char pad_9AD[0x3]; // 0x9ad(0x03)

	int32 *0e74a7afd5(); // Function Engine.PostProcessVolume.*0e74a7afd5 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x65df804
	void *8480288ca6(TScriptInterface<struct UBlendableInterface>* InBlendableObject); // Function Engine.PostProcessVolume.*8480288ca6 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x65bdd78
};

// Class Engine.PrecomputedVisibilityOverrideVolume
// Size: 0x450 (Inherited: 0x420)
struct APrecomputedVisibilityOverrideVolume : AVolume {
	struct TArray<struct AActor*> OverrideVisibleActors[0x10]; // 0x420(0x10)
	struct TArray<struct AActor*> OverrideInvisibleActors[0x10]; // 0x430(0x10)
	struct TArray<struct FName> OverrideInvisibleLevels[0x10]; // 0x440(0x10)
};

// Class Engine.PrecomputedVisibilityVolume
// Size: 0x420 (Inherited: 0x420)
struct APrecomputedVisibilityVolume : AVolume {
};

// Class Engine.TriggerVolume
// Size: 0x420 (Inherited: 0x420)
struct ATriggerVolume : AVolume {
};

// Class Engine.*bd81404a65
// Size: 0x28 (Inherited: 0x28)
struct U*bd81404a65 : UInterface {
};

// Class Engine.CameraShake
// Size: 0x160 (Inherited: 0x28)
struct UCameraShake : UObject {
	char *d6b1d28607 : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *58a60c3cf3[0x04]; // 0x2c(0x04)
	float *206d2da50d[0x04]; // 0x30(0x04)
	float *9d30b8d5d3[0x04]; // 0x34(0x04)
	struct F*d2c9ed4b21 *52c4287450[0x24]; // 0x38(0x24)
	struct F*426dfcc594 *4eb97f3a4f[0x24]; // 0x5c(0x24)
	struct F*f15493e17b *fc4c873000[0x0c]; // 0x80(0x0c)
	float AnimPlayRate[0x04]; // 0x8c(0x04)
	float *3d02c9cb75[0x04]; // 0x90(0x04)
	float *6cb2d05aec[0x04]; // 0x94(0x04)
	float *49b90e2efd[0x04]; // 0x98(0x04)
	float *edc22e7546[0x04]; // 0x9c(0x04)
	struct UCameraAnim* Anim[0x08]; // 0xa0(0x08)
	char bRandomAnimSegment : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x17]; // 0xa9(0x17)
	struct APlayerCameraManager* CameraOwner[0x08]; // 0xc0(0x08)
	char pad_C8[0x80]; // 0xc8(0x80)
	float ShakeScale[0x04]; // 0x148(0x04)
	float OscillatorTimeRemaining[0x04]; // 0x14c(0x04)
	struct U*faef588082* AnimInst[0x08]; // 0x150(0x08)
	char pad_158[0x8]; // 0x158(0x08)

	void ReceivePlayShake(); // Function Engine.CameraShake.ReceivePlayShake // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	struct F*6d0e0b2cc1 BlueprintUpdateCameraShake(float* DeltaTime); // Function Engine.CameraShake.BlueprintUpdateCameraShake // Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void ReceiveIsFinished(); // Function Engine.CameraShake.ReceiveIsFinished // Native|Event|Public|BlueprintEvent|Const // @ game+0xbe69fc
	void ReceiveStopShake(); // Function Engine.CameraShake.ReceiveStopShake // Event|Public|BlueprintEvent // @ game+0x2cd4ac
};

// Class Engine.*4aa7f8d102
// Size: 0x280 (Inherited: 0x1f0)
struct U*4aa7f8d102 : UActorComponent {
	char pad_1F0[0x70]; // 0x1f0(0x70)
	struct TArray<struct F*0319448750> *0319448750[0x10]; // 0x260(0x10)
	char pad_270[0x10]; // 0x270(0x10)

	void *959bc0574c(struct FKey* Key); // Function Engine.*4aa7f8d102.*959bc0574c // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc724
	void *6ae4690b4c(float* DeltaX); // Function Engine.*4aa7f8d102.*6ae4690b4c // Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7848
	float *6ddf54aba4(); // Function Engine.*4aa7f8d102.*6ddf54aba4 // Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65cb964
	void *afbff81a88(); // Function Engine.*4aa7f8d102.*afbff81a88 // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7628
	void *29387b94aa(enum class *36b6c769f4 WhichStick); // Function Engine.*4aa7f8d102.*29387b94aa // Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7730
	struct FKey *b27ae3d7c1(); // Function Engine.*4aa7f8d102.*b27ae3d7c1 // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7628
	struct FKey *20b3744d00(); // Function Engine.*4aa7f8d102.*20b3744d00 // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc724
	void *f67ffad4ef(struct FKey* Key); // Function Engine.*4aa7f8d102.*f67ffad4ef // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc724
	struct AActor* OnInputOwnerEndPlayed(); // Function Engine.*4aa7f8d102.OnInputOwnerEndPlayed // Final|Native|Private // @ game+0x65d3044
	struct FKey *2a6055ccd7(); // Function Engine.*4aa7f8d102.*2a6055ccd7 // Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7918
};

// Class Engine.CurveFloat
// Size: 0xa8 (Inherited: 0x30)
struct UCurveFloat : UCurveBase {
	struct FRichCurve *e7fc2b8ab7[0x70]; // 0x30(0x70)
	bool *5e02225e13; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	void *d28bc60b37(); // Function Engine.CurveFloat.*d28bc60b37 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7aa4
	float *e5df789493(); // Function Engine.CurveFloat.*e5df789493 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xb0c3a8
};

// Class Engine.DecalActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ADecalActor : AActor {
	struct UDecalComponent* Decal[0x08]; // 0x3e8(0x08)

	void CreateDynamicMaterialInstance(); // Function Engine.DecalActor.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x5879b74
	void *37dea3cfb9(); // Function Engine.DecalActor.*37dea3cfb9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c7a7c
	void *1ba43ce700(); // Function Engine.DecalActor.*1ba43ce700 // Final|Native|Public|BlueprintCallable // @ game+0x65da4f8
};

// Class Engine.DestructibleActor
// Size: 0x408 (Inherited: 0x3e8)
struct ADestructibleActor : AActor {
	struct UDestructibleComponent* DestructibleComponent[0x08]; // 0x3e8(0x08)
	char bAffectNavigation : 1; // 0x3f0(0x01)
	char pad_3F0_1 : 7; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct FMulticastDelegate OnActorFracture[0x10]; // 0x3f8(0x10)
};

// Class Engine.DistanceFieldCapture
// Size: 0x3f0 (Inherited: 0x3e8)
struct ADistanceFieldCapture : AActor {
	struct U*5eded02585* CaptureComponent[0x08]; // 0x3e8(0x08)
};

// Class Engine.DocumentationActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ADocumentationActor : AActor {
	char pad_3E8[0x8]; // 0x3e8(0x08)
};

// Class Engine.Emitter
// Size: 0x438 (Inherited: 0x3e8)
struct AEmitter : AActor {
	struct UParticleSystemComponent* ParticleSystemComponent[0x08]; // 0x3e8(0x08)
	char *38c7be7858 : 1; // 0x3f0(0x01)
	char bPostUpdateTickGroup : 1; // 0x3f0(0x01)
	char *e11534c854 : 1; // 0x3f0(0x01)
	char pad_3F0_3 : 5; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct FMulticastDelegate OnParticleSpawn[0x10]; // 0x3f8(0x10)
	struct FMulticastDelegate OnParticleBurst[0x10]; // 0x408(0x10)
	struct FMulticastDelegate OnParticleDeath[0x10]; // 0x418(0x10)
	struct FMulticastDelegate OnParticleCollide[0x10]; // 0x428(0x10)

	void Activate(); // Function Engine.Emitter.Activate // Final|Native|Public|BlueprintCallable // @ game+0x65bc608
	void *1f22ea7014(); // Function Engine.Emitter.*1f22ea7014 // Final|Native|Public|BlueprintCallable // @ game+0x65df4cc
	void SetFloatParameter(); // Function Engine.Emitter.SetFloatParameter // Final|Native|Public|BlueprintCallable // @ game+0x65da8f4
	void *1e3c290f5c(struct FName* ParameterName); // Function Engine.Emitter.*1e3c290f5c // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65d9e84
	void IsActive(); // Function Engine.Emitter.IsActive // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc450
	void OnRep_bCurrentlyActive(); // Function Engine.Emitter.OnRep_bCurrentlyActive // Native|Public // @ game+0x58ce3b4
	void *43b5fa91da(struct FName* ParameterName); // Function Engine.Emitter.*43b5fa91da // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65dde58
	void Deactivate(); // Function Engine.Emitter.Deactivate // Final|Native|Public|BlueprintCallable // @ game+0x65c2cf4
	void *33a48ef273(); // Function Engine.Emitter.*33a48ef273 // Final|Native|Public|BlueprintCallable // @ game+0x65d7ae0
	void *3eb6223e6f(); // Function Engine.Emitter.*3eb6223e6f // Native|Public|BlueprintCallable // @ game+0x590f070
	void OnParticleSystemFinished(); // Function Engine.Emitter.OnParticleSystemFinished // Native|Public // @ game+0x5825304
	void *77b1620434(struct FName* ParameterName); // Function Engine.Emitter.*77b1620434 // Final|Native|Public|BlueprintCallable // @ game+0x65dbefc
};

// Class Engine.EmitterCameraLensEffectBase
// Size: 0x4a0 (Inherited: 0x438)
struct AEmitterCameraLensEffectBase : AEmitter {
	struct UParticleSystem* *bcdbb5c461[0x08]; // 0x438(0x08)
	struct UParticleSystem* PS_CameraEffectNonExtremeContent[0x08]; // 0x440(0x08)
	struct APlayerCameraManager* *f06030882d[0x08]; // 0x448(0x08)
	struct FTransform RelativeTransform[0x30]; // 0x450(0x30)
	float *cbcf82ab38[0x04]; // 0x480(0x04)
	char *d678521c33 : 1; // 0x484(0x01)
	char *6652e63f2e : 1; // 0x484(0x01)
	char pad_484_2 : 6; // 0x484(0x01)
	char pad_485[0x3]; // 0x485(0x03)
	struct TArray<struct UClass*> *0732d67b55[0x10]; // 0x488(0x10)
	float DistFromCamera[0x04]; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
};

// Class Engine.FoliageBlockingVolumeActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct AFoliageBlockingVolumeActor : AActor {
	struct U*f7a1ed2b6f* FoliageBlockingVolumeComponent[0x08]; // 0x3e8(0x08)
};

// Class Engine.DebugCameraHUD
// Size: 0x4d0 (Inherited: 0x4d0)
struct ADebugCameraHUD : AHUD {
};

// Class Engine.AtmosphericFog
// Size: 0x3f0 (Inherited: 0x3e8)
struct AAtmosphericFog : AInfo {
	struct UAtmosphericFogComponent* AtmosphericFogComponent[0x08]; // 0x3e8(0x08)
};

// Class Engine.ExponentialHeightFog
// Size: 0x3f8 (Inherited: 0x3e8)
struct AExponentialHeightFog : AInfo {
	struct UExponentialHeightFogComponent* Component[0x08]; // 0x3e8(0x08)
	char bEnabled : 1; // 0x3f0(0x01)
	char pad_3F0_1 : 7; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)

	void OnRep_bEnabled(); // Function Engine.ExponentialHeightFog.OnRep_bEnabled // Native|Public // @ game+0x5823324
};

// Class Engine.GameNetworkManager
// Size: 0x470 (Inherited: 0x3e8)
struct AGameNetworkManager : AInfo {
	int32 *15c1977abc[0x04]; // 0x3e8(0x04)
	float *09cbaefa8a[0x04]; // 0x3ec(0x04)
	int32 TotalNetBandwidth[0x04]; // 0x3f0(0x04)
	int32 MinDynamicBandwidth[0x04]; // 0x3f4(0x04)
	int32 MaxDynamicBandwidth[0x04]; // 0x3f8(0x04)
	char bIsStandbyCheckingEnabled : 1; // 0x3fc(0x01)
	char *9a23fe54b7 : 1; // 0x3fc(0x01)
	char pad_3FC_2 : 6; // 0x3fc(0x01)
	char pad_3FD[0x3]; // 0x3fd(0x03)
	float StandbyRxCheatTime[0x04]; // 0x400(0x04)
	float StandbyTxCheatTime[0x04]; // 0x404(0x04)
	int32 BadPingThreshold[0x04]; // 0x408(0x04)
	float PercentMissingForRxStandby[0x04]; // 0x40c(0x04)
	float PercentMissingForTxStandby[0x04]; // 0x410(0x04)
	float PercentForBadPing[0x04]; // 0x414(0x04)
	float JoinInProgressStandbyWaitTime[0x04]; // 0x418(0x04)
	float MoveRepSize[0x04]; // 0x41c(0x04)
	float MAXPOSITIONERRORSQUARED[0x04]; // 0x420(0x04)
	float MAXNEARZEROVELOCITYSQUARED[0x04]; // 0x424(0x04)
	float CLIENTADJUSTUPDATECOST[0x04]; // 0x428(0x04)
	float MAXCLIENTUPDATEINTERVAL[0x04]; // 0x42c(0x04)
	float MaxMoveDeltaTime[0x04]; // 0x430(0x04)
	float ClientNetSendMoveDeltaTime[0x04]; // 0x434(0x04)
	float ClientNetSendMoveDeltaTimeThrottled[0x04]; // 0x438(0x04)
	int32 ClientNetSendMoveThrottleAtNetSpeed[0x04]; // 0x43c(0x04)
	int32 ClientNetSendMoveThrottleOverPlayerCount[0x04]; // 0x440(0x04)
	bool ClientAuthorativePosition; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	float ClientErrorUpdateRateLimit[0x04]; // 0x448(0x04)
	bool bMovementTimeDiscrepancyDetection; // 0x44c(0x01)
	bool bMovementTimeDiscrepancyResolution; // 0x44d(0x01)
	char pad_44E[0x2]; // 0x44e(0x02)
	float MovementTimeDiscrepancyResolutionMinFPS[0x04]; // 0x450(0x04)
	float MovementTimeDiscrepancyMaxTimeMargin[0x04]; // 0x454(0x04)
	float MovementTimeDiscrepancyMinTimeMargin[0x04]; // 0x458(0x04)
	float MovementTimeDiscrepancyResolutionRate[0x04]; // 0x45c(0x04)
	float MovementTimeDiscrepancyDriftAllowance[0x04]; // 0x460(0x04)
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x464(0x01)
	bool bUseDistanceBasedRelevancy; // 0x465(0x01)
	char pad_466[0xa]; // 0x466(0x0a)
};

// Class Engine.SkyLight
// Size: 0x3f8 (Inherited: 0x3e8)
struct ASkyLight : AInfo {
	struct USkyLightComponent* LightComponent[0x08]; // 0x3e8(0x08)
	char bEnabled : 1; // 0x3f0(0x01)
	char pad_3F0_1 : 7; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)

	void OnRep_bEnabled(); // Function Engine.SkyLight.OnRep_bEnabled // Native|Public // @ game+0x5823324
};

// Class Engine.WindDirectionalSource
// Size: 0x3f0 (Inherited: 0x3e8)
struct AWindDirectionalSource : AInfo {
	struct U*baafa9a332* Component[0x08]; // 0x3e8(0x08)
};

// Class Engine.WorldSettings
// Size: 0x5d0 (Inherited: 0x3e8)
struct AWorldSettings : AInfo {
	char pad_3E8[0x8]; // 0x3e8(0x08)
	char bEnableWorldBoundsChecks : 1; // 0x3f0(0x01)
	char bEnableNavigationSystem : 1; // 0x3f0(0x01)
	char bEnableAISystem : 1; // 0x3f0(0x01)
	char bEnableWorldComposition : 1; // 0x3f0(0x01)
	char bUseClientSideLevelStreamingVolumes : 1; // 0x3f0(0x01)
	char bEnableWorldOriginRebasing : 1; // 0x3f0(0x01)
	char *e335bcecfc : 1; // 0x3f0(0x01)
	char bGlobalGravitySet : 1; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	float KillZ[0x04]; // 0x3f4(0x04)
	struct AInfo* LevelAttribute[0x08]; // 0x3f8(0x08)
	struct UClass* KillZDamageType[0x08]; // 0x400(0x08)
	float *47ce12b434[0x04]; // 0x408(0x04)
	float GlobalGravityZ[0x04]; // 0x40c(0x04)
	struct UClass* DefaultPhysicsVolumeClass[0x08]; // 0x410(0x08)
	struct UClass* PhysicsCollisionHandlerClass[0x08]; // 0x418(0x08)
	struct UClass* DefaultGameMode[0x08]; // 0x420(0x08)
	struct UClass* *febf2c1a50[0x08]; // 0x428(0x08)
	int32 *cb125d3c42[0x04]; // 0x430(0x04)
	char *67eecee4b5 : 1; // 0x434(0x01)
	char pad_434_1 : 7; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	struct FVector DefaultColorScale[0x0c]; // 0x438(0x0c)
	float *5512846d61[0x04]; // 0x444(0x04)
	float *e1b73380ff[0x04]; // 0x448(0x04)
	float *a04fc8d785[0x04]; // 0x44c(0x04)
	char *f8e74f604a : 1; // 0x450(0x01)
	char *27c8d4a5e8 : 1; // 0x450(0x01)
	char pad_450_2 : 6; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	int32 *42f66dd343[0x04]; // 0x454(0x04)
	enum class *eec63e9e4c *1ac9739b1b; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	char *4f629443a8 : 1; // 0x45c(0x01)
	char pad_45C_1 : 7; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	struct FLightmassWorldInfoSettings LightmassSettings[0x44]; // 0x460(0x44)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FReverbSettings DefaultReverbSettings[0x18]; // 0x4a8(0x18)
	struct F*3e305a18ce DefaultAmbientZoneSettings[0x24]; // 0x4c0(0x24)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct USoundMix* *c3960e9a1c[0x08]; // 0x4e8(0x08)
	float WorldToMeters[0x04]; // 0x4f0(0x04)
	float MonoCullingDistance[0x04]; // 0x4f4(0x04)
	struct U*91203b4189* BookMarks[0x08]; // 0x4f8(0x50)
	float TimeDilation[0x04]; // 0x548(0x04)
	float *4a0b860420[0x04]; // 0x54c(0x04)
	float DemoPlayTimeDilation[0x04]; // 0x550(0x04)
	float MinGlobalTimeDilation[0x04]; // 0x554(0x04)
	float MaxGlobalTimeDilation[0x04]; // 0x558(0x04)
	char pad_55C[0x8]; // 0x55c(0x08)
	struct FBox MBPBounds[0x1c]; // 0x564(0x1c)
	char bOverrideDefaultBroadphaseSettings : 1; // 0x580(0x01)
	char pad_580_1 : 7; // 0x580(0x01)
	char pad_581[0x3]; // 0x581(0x03)
	char *650c5eced7 : 1; // 0x584(0x01)
	char *bf89be6de8 : 1; // 0x584(0x01)
	char pad_584_2 : 6; // 0x584(0x01)
	char pad_585[0x3]; // 0x585(0x03)
	struct TArray<struct F*f9b760e032> *e3cbfb681b[0x10]; // 0x588(0x10)
	struct FMulticastDelegate *4d725b192a[0x10]; // 0x598(0x10)
	struct FMulticastDelegate *9f4a3923b5[0x10]; // 0x5a8(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData[0x10]; // 0x5b8(0x10)
	struct APlayerState* *d0c7c65fe4[0x08]; // 0x5c8(0x08)

	void TakeMBPBounds(); // Function Engine.WorldSettings.TakeMBPBounds // Native|Event|Public|BlueprintEvent // @ game+0x5823324
	void OnRep_WorldGravityZ(); // Function Engine.WorldSettings.OnRep_WorldGravityZ // Native|Public // @ game+0x58ce3b4
};

// Class Engine.InstancedDeferredDecalActor
// Size: 0x420 (Inherited: 0x3e8)
struct AInstancedDeferredDecalActor : AActor {
	bool bUseInstancePool; // 0x3e8(0x01)
	bool bUseDynamicInstance; // 0x3e9(0x01)
	char pad_3EA[0x6]; // 0x3ea(0x06)
	struct UMaterialInterface* SharedMaterial[0x08]; // 0x3f0(0x08)
	struct U*d6fbc0688d* RootDecalComponent[0x08]; // 0x3f8(0x08)
	struct TArray<struct U*d6fbc0688d*> decals[0x10]; // 0x400(0x10)
	char pad_410[0x10]; // 0x410(0x10)

	void *8c715d22f7(); // Function Engine.InstancedDeferredDecalActor.*8c715d22f7 // Final|Native|Public|BlueprintCallable // @ game+0x582da3c
	void *1ba43ce700(); // Function Engine.InstancedDeferredDecalActor.*1ba43ce700 // Final|Native|Public|BlueprintCallable // @ game+0x65da594
	void *ab1b34ad0c(); // Function Engine.InstancedDeferredDecalActor.*ab1b34ad0c // Final|Native|Public|BlueprintCallable // @ game+0x65dddc8
	void CreateDynamicMaterialInstance(); // Function Engine.InstancedDeferredDecalActor.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x5879b74
	void *064e0593fb(); // Function Engine.InstancedDeferredDecalActor.*064e0593fb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x581b6b4
	void *37dea3cfb9(); // Function Engine.InstancedDeferredDecalActor.*37dea3cfb9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x58a7240
	void *9d399a374d(); // Function Engine.InstancedDeferredDecalActor.*9d399a374d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x581b6f0
	struct FVector4 *01fde74119(); // Function Engine.InstancedDeferredDecalActor.*01fde74119 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65bda74
};

// Class Engine.InstancedSplineDecalActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct AInstancedSplineDecalActor : AActor {
	struct U*ef97bd0f41* InstancedSplineDecalComponent[0x08]; // 0x3e8(0x08)
};

// Class Engine.LevelBlockLandscapeGizmoActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ALevelBlockLandscapeGizmoActor : AActor {
	struct U*cf9e21c072* LandscapeGizmoComponent[0x08]; // 0x3e8(0x08)
};

// Class Engine.LevelBlocksDataActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ALevelBlocksDataActor : AActor {
	struct U*6821ee5d79* LevelBlocksDataComponent[0x08]; // 0x3e8(0x08)
};

// Class Engine.LevelBlockSpawnedActor
// Size: 0x3e8 (Inherited: 0x3e8)
struct ALevelBlockSpawnedActor : AActor {
};

// Class Engine.LevelBlockSpawnPointActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ALevelBlockSpawnPointActor : AActor {
	struct U*5346184155* SpawnPointComponent[0x08]; // 0x3e8(0x08)
};

// Class Engine.LevelBounds
// Size: 0x3f0 (Inherited: 0x3e8)
struct ALevelBounds : AActor {
	bool *922b4c18c0; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
};

// Class Engine.Light
// Size: 0x3f8 (Inherited: 0x3e8)
struct ALight : AActor {
	struct ULightComponent* LightComponent[0x08]; // 0x3e8(0x08)
	char bEnabled : 1; // 0x3f0(0x01)
	char pad_3F0_1 : 7; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)

	void SetBrightness(); // Function Engine.Light.SetBrightness // Final|Native|Public|BlueprintCallable // @ game+0x65d94b0
	void *e23055f8d8(); // Function Engine.Light.*e23055f8d8 // Final|Native|Public|BlueprintCallable // @ game+0x65db788
	void *3ae05c869f(); // Function Engine.Light.*3ae05c869f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65db654
	void *f6d83a4d6a(); // Function Engine.Light.*f6d83a4d6a // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65db8b8
	void *7bd92f85c8(); // Function Engine.Light.*7bd92f85c8 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65c9808
	void OnRep_bEnabled(); // Function Engine.Light.OnRep_bEnabled // Native|Public // @ game+0x5823324
	void IsEnabled(); // Function Engine.Light.IsEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cc854
	void *99031a05c6(); // Function Engine.Light.*99031a05c6 // Final|Native|Public|BlueprintCallable // @ game+0x65df548
	void *9d1fc8b0ef(); // Function Engine.Light.*9d1fc8b0ef // Final|Native|Public|BlueprintCallable // @ game+0x65db824
	void *90703c3381(); // Function Engine.Light.*90703c3381 // Final|Native|Public|BlueprintCallable // @ game+0x65d96f4
	void *c500aa2bb8(); // Function Engine.Light.*c500aa2bb8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c6c9c
	void *bd20a9e06c(); // Function Engine.Light.*bd20a9e06c // Final|Native|Public|BlueprintCallable // @ game+0x65d7f18
	void *61153ffc78(); // Function Engine.Light.*61153ffc78 // Final|Native|Public|BlueprintCallable // @ game+0x65da85c
};

// Class Engine.DirectionalLight
// Size: 0x3f8 (Inherited: 0x3f8)
struct ADirectionalLight : ALight {
};

// Class Engine.PointLight
// Size: 0x400 (Inherited: 0x3f8)
struct APointLight : ALight {
	struct UPointLightComponent* PointLightComponent[0x08]; // 0x3f8(0x08)

	void *22fb9fc0a4(); // Function Engine.PointLight.*22fb9fc0a4 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x65db6ec
	void SetRadius(); // Function Engine.PointLight.SetRadius // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x65dce80
};

// Class Engine.spotlight
// Size: 0x400 (Inherited: 0x3f8)
struct Aspotlight : ALight {
	struct USpotLightComponent* SpotLightComponent[0x08]; // 0x3f8(0x08)

	void *ec34a6659e(); // Function Engine.spotlight.*ec34a6659e // Final|Native|Public|BlueprintCallable // @ game+0x65dc52c
	void *f6168804ed(); // Function Engine.spotlight.*f6168804ed // Final|Native|Public|BlueprintCallable // @ game+0x65db33c
};

// Class Engine.GeneratedMeshAreaLight
// Size: 0x400 (Inherited: 0x400)
struct AGeneratedMeshAreaLight : Aspotlight {
};

// Class Engine.LightmassPortal
// Size: 0x3f0 (Inherited: 0x3e8)
struct ALightmassPortal : AActor {
	struct U*b6b8d1a87d* PortalComponent[0x08]; // 0x3e8(0x08)
};

// Class Engine.LODActor
// Size: 0x420 (Inherited: 0x3e8)
struct ALODActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent[0x08]; // 0x3e8(0x08)
	struct TArray<struct AActor*> SubActors[0x10]; // 0x3f0(0x10)
	float LODDrawDistance[0x04]; // 0x400(0x04)
	int32 LODLevel[0x04]; // 0x404(0x04)
	struct TArray<struct UObject*> SubObjects[0x10]; // 0x408(0x10)
	char pad_418[0x8]; // 0x418(0x08)
};

// Class Engine.MaterialInstanceActor
// Size: 0x3f8 (Inherited: 0x3e8)
struct AMaterialInstanceActor : AActor {
	struct TArray<struct AActor*> TargetActors[0x10]; // 0x3e8(0x10)
};

// Class Engine.MatineeActor
// Size: 0x490 (Inherited: 0x3e8)
struct AMatineeActor : AActor {
	struct UInterpData* MatineeData[0x08]; // 0x3e8(0x08)
	struct FName *69e3ea0ec7[0x08]; // 0x3f0(0x08)
	float PlayRate[0x04]; // 0x3f8(0x04)
	char bPlayOnLevelLoad : 1; // 0x3fc(0x01)
	char bForceStartPos : 1; // 0x3fc(0x01)
	char pad_3FC_2 : 6; // 0x3fc(0x01)
	char pad_3FD[0x3]; // 0x3fd(0x03)
	float ForceStartPosition[0x04]; // 0x400(0x04)
	char bLooping : 1; // 0x404(0x01)
	char bRewindOnPlay : 1; // 0x404(0x01)
	char bNoResetOnRewind : 1; // 0x404(0x01)
	char bRewindIfAlreadyPlaying : 1; // 0x404(0x01)
	char bDisableRadioFilter : 1; // 0x404(0x01)
	char bClientSideOnly : 1; // 0x404(0x01)
	char bSkipUpdateIfNotVisible : 1; // 0x404(0x01)
	char bIsSkippable : 1; // 0x404(0x01)
	char pad_405[0x3]; // 0x405(0x03)
	int32 PreferredSplitScreenNum[0x04]; // 0x408(0x04)
	char bDisableMovementInput : 1; // 0x40c(0x01)
	char bDisableLookAtInput : 1; // 0x40c(0x01)
	char bHidePlayer : 1; // 0x40c(0x01)
	char bHideHud : 1; // 0x40c(0x01)
	char pad_40C_4 : 4; // 0x40c(0x01)
	char pad_40D[0x3]; // 0x40d(0x03)
	struct TArray<struct F*d2ef71db5b> GroupActorInfos[0x10]; // 0x410(0x10)
	char *b30b3d641a : 1; // 0x420(0x01)
	char pad_420_1 : 7; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct TArray<struct U*c8e2f74187*> *ac64d10fc9[0x10]; // 0x428(0x10)
	struct TArray<struct F*a706765c04> CameraCuts[0x10]; // 0x438(0x10)
	char bIsPlaying : 1; // 0x448(0x01)
	char *79e73cc39d : 1; // 0x448(0x01)
	char *ecaaabd6ea : 1; // 0x448(0x01)
	char *93c27cfb70 : 1; // 0x448(0x01)
	char pad_448_4 : 4; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	float InterpPosition[0x04]; // 0x44c(0x04)
	char pad_450[0x4]; // 0x450(0x04)
	bool *ecd688987e; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	struct FMulticastDelegate OnPlay[0x10]; // 0x458(0x10)
	struct FMulticastDelegate OnStop[0x10]; // 0x468(0x10)
	struct FMulticastDelegate OnPause[0x10]; // 0x478(0x10)
	char pad_488[0x8]; // 0x488(0x08)

	struct FString *b370ac3d95(); // Function Engine.MatineeActor.*b370ac3d95 // Final|Native|Public|BlueprintCallable // @ game+0x65c4c60
	void Play(); // Function Engine.MatineeActor.Play // Native|Public|BlueprintCallable // @ game+0x58ce3b4
	void *f976cf8725(); // Function Engine.MatineeActor.*f976cf8725 // Native|Public|BlueprintCallable // @ game+0x58aed64
	void Reverse(); // Function Engine.MatineeActor.Reverse // Native|Public|BlueprintCallable // @ game+0x5907f20
	float SetPosition(); // Function Engine.MatineeActor.SetPosition // Final|Native|Public|BlueprintCallable // @ game+0x65dcc6c
	void Stop(); // Function Engine.MatineeActor.Stop // Native|Public|BlueprintCallable // @ game+0x5907f08
	void *8bb5bcde3e(); // Function Engine.MatineeActor.*8bb5bcde3e // Native|Public|BlueprintCallable // @ game+0x65db9f4
	void Pause(); // Function Engine.MatineeActor.Pause // Native|Public|BlueprintCallable // @ game+0x58c2cd8
};

// Class Engine.MatineeActorCameraAnim
// Size: 0x498 (Inherited: 0x490)
struct AMatineeActorCameraAnim : AMatineeActor {
	struct UCameraAnim* CameraAnim[0x08]; // 0x490(0x08)
};

// Class Engine.MinimapLabelActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct AMinimapLabelActor : AActor {
	struct U*662cfb94cd* MinimapLabelComponent[0x08]; // 0x3e8(0x08)
};

// Class Engine.MinimapObjectActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct AMinimapObjectActor : AActor {
	struct U*443f059e60* MinimapObjectComponent[0x08]; // 0x3e8(0x08)
};

// Class Engine.AbstractNavData
// Size: 0x590 (Inherited: 0x590)
struct AAbstractNavData : ANavigationData {
};

// Class Engine.NavigationGraph
// Size: 0x590 (Inherited: 0x590)
struct ANavigationGraph : ANavigationData {
};

// Class Engine.NavigationGraphNode
// Size: 0x3e8 (Inherited: 0x3e8)
struct ANavigationGraphNode : AActor {
};

// Class Engine.PlayerStartPIE
// Size: 0x418 (Inherited: 0x418)
struct APlayerStartPIE : APlayerStart {
};

// Class Engine.*a527622728
// Size: 0x28 (Inherited: 0x28)
struct U*a527622728 : UInterface {
};

// Class Engine.NavigationTestingActor
// Size: 0x4f0 (Inherited: 0x3e8)
struct ANavigationTestingActor : AActor {
	char pad_3E8[0x10]; // 0x3e8(0x10)
	struct UCapsuleComponent* CapsuleComponent[0x08]; // 0x3f8(0x08)
	struct U*dde4b794bb* InvokerComponent[0x08]; // 0x400(0x08)
	char bActAsNavigationInvoker : 1; // 0x408(0x01)
	char pad_408_1 : 7; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct F*4093962ce1 *27d5813359[0x20]; // 0x410(0x20)
	struct FVector *9e90339915[0x0c]; // 0x430(0x0c)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct ANavigationData* *eac456cf29[0x08]; // 0x440(0x08)
	struct FVector ProjectedLocation[0x0c]; // 0x448(0x0c)
	char bProjectedLocationValid : 1; // 0x454(0x01)
	char *f49bed9cfc : 1; // 0x454(0x01)
	char *80f65a5b75 : 1; // 0x454(0x01)
	char *efbe718960 : 1; // 0x454(0x01)
	char *77824e8bc3 : 1; // 0x454(0x01)
	char *06675fc406 : 1; // 0x454(0x01)
	char *a54797f088 : 1; // 0x454(0x01)
	char *4ba4af2b6f : 1; // 0x454(0x01)
	char *b2711dc29b : 1; // 0x455(0x01)
	char pad_455_1 : 7; // 0x455(0x01)
	char pad_456[0x2]; // 0x456(0x02)
	enum class *f76d87cbca *f6647fa8a1; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	struct FVector2D *341985f1da[0x08]; // 0x45c(0x08)
	char bPathExist : 1; // 0x464(0x01)
	char bPathIsPartial : 1; // 0x464(0x01)
	char bPathSearchOutOfNodes : 1; // 0x464(0x01)
	char pad_464_3 : 5; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	float PathfindingTime[0x04]; // 0x468(0x04)
	float PathCost[0x04]; // 0x46c(0x04)
	int32 PathfindingSteps[0x04]; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct ANavigationTestingActor* OtherActor[0x08]; // 0x478(0x08)
	struct UClass* *b5456fcb59[0x08]; // 0x480(0x08)
	int32 *4bc890dcec[0x04]; // 0x488(0x04)
	float *47275a0019[0x04]; // 0x48c(0x04)
	char pad_490[0x60]; // 0x490(0x60)
};

// Class Engine.*75c8520f7f
// Size: 0x50 (Inherited: 0x28)
struct U*75c8520f7f : UObject {
	struct TArray<struct FNavigationLink> Links[0x10]; // 0x28(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks[0x10]; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class Engine.*b2fd1c325f
// Size: 0x28 (Inherited: 0x28)
struct U*b2fd1c325f : UInterface {
};

// Class Engine.Note
// Size: 0x3e8 (Inherited: 0x3e8)
struct ANote : AActor {
};

// Class Engine.ParticleSystem
// Size: 0x138 (Inherited: 0x28)
struct UParticleSystem : UObject {
	enum class *1a3d53a2a5 *982dcc4dea; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float UpdateTime_FPS[0x04]; // 0x2c(0x04)
	float *8e358cbd14[0x04]; // 0x30(0x04)
	float WarmupTime[0x04]; // 0x34(0x04)
	float *f276ed8749[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct UParticleEmitter*> Emitters[0x10]; // 0x40(0x10)
	struct UParticleSystemComponent* PreviewComponent[0x08]; // 0x50(0x08)
	struct UInterpCurveEdSetup* *2ac5360815[0x08]; // 0x58(0x08)
	char *d936c1297b : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float *f06b75059a[0x04]; // 0x64(0x04)
	enum class *4460aee05d LODMethod; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<float> *374a76d918[0x10]; // 0x70(0x10)
	char *f5310de9c3 : 1; // 0x80(0x01)
	char *09edfe8706 : 1; // 0x80(0x01)
	char pad_80_2 : 6; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<struct F*9efdc030dc> LODSettings[0x10]; // 0x88(0x10)
	char *c9c003bd56 : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct FBox *45b0b6eec9[0x1c]; // 0x9c(0x1c)
	float *57a612c054[0x04]; // 0xb8(0x04)
	char *299d3d78bf : 1; // 0xbc(0x01)
	char *3f79bf3ddd : 1; // 0xbc(0x01)
	char *edad4824c1 : 1; // 0xbc(0x01)
	char *204afac75c : 1; // 0xbc(0x01)
	char pad_BC_4 : 4; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float Delay[0x04]; // 0xc0(0x04)
	float *0f80293038[0x04]; // 0xc4(0x04)
	char *9d579f0d2b : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	bool *3059d553de; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	uint32 *f07c7913f9[0x04]; // 0xd0(0x04)
	enum class EParticleSystemInsignificanceReaction *0877cdf916; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	float *3c4e8ab096[0x04]; // 0xd8(0x04)
	enum class EParticleSignificanceLevel *13fcb55e50; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct FVector MacroUVPosition[0x0c]; // 0xe0(0x0c)
	float MacroUVRadius[0x04]; // 0xec(0x04)
	enum class *fecf2ec050 *4c8c67b445; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FBox *112b153859[0x1c]; // 0xf4(0x1c)
	struct TArray<struct F*046b07cf81> *ca8d98fe72[0x10]; // 0x110(0x10)
	struct TArray<struct F*ed51ac9799> *b39d579fc1[0x10]; // 0x120(0x10)
	char pad_130[0x8]; // 0x130(0x08)

	void *847d25c31c(); // Function Engine.ParticleSystem.*847d25c31c // Final|Native|Public|BlueprintCallable // @ game+0x65c26ec
};

// Class Engine.ParticleEventManager
// Size: 0x3e8 (Inherited: 0x3e8)
struct AParticleEventManager : AActor {
};

// Class Engine.SkeletalMesh
// Size: 0x2e8 (Inherited: 0x28)
struct USkeletalMesh : UObject {
	char pad_28[0x20]; // 0x28(0x20)
	struct USkeleton* Skeleton[0x08]; // 0x48(0x08)
	struct FBoxSphereBounds *c204d6493a[0x1c]; // 0x50(0x1c)
	struct FBoxSphereBounds *b31255077e[0x1c]; // 0x6c(0x1c)
	struct FVector PositiveBoundsExtension[0x0c]; // 0x88(0x0c)
	struct FVector NegativeBoundsExtension[0x0c]; // 0x94(0x0c)
	struct TArray<struct F*e47777f630> Materials[0x10]; // 0xa0(0x10)
	struct TArray<struct F*fb8e6c99a0> *a10abc343e[0x10]; // 0xb0(0x10)
	enum class EAxis *751c4ca226; // 0xc0(0x01)
	enum class EAxis *b59afa847f; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
	struct TArray<struct FSkeletalMeshLODInfo> LODInfo[0x10]; // 0xc8(0x10)
	char bUseFullPrecisionUVs : 1; // 0xd8(0x01)
	char *367e2e4ebd : 1; // 0xd8(0x01)
	char *797208d149 : 1; // 0xd8(0x01)
	char bEnablePerPolyCollision : 1; // 0xd8(0x01)
	char pad_D8_4 : 4; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UBodySetup* BodySetup[0x08]; // 0xe0(0x08)
	struct UPhysicsAsset* PhysicsAsset[0x08]; // 0xe8(0x08)
	struct UPhysicsAsset* ShadowPhysicsAsset[0x08]; // 0xf0(0x08)
	struct TArray<struct U*98a08b4821*> NodeMappingData[0x10]; // 0xf8(0x10)
	struct TArray<struct UMorphTarget*> MorphTargets[0x10]; // 0x108(0x10)
	char pad_118[0x168]; // 0x118(0x168)
	struct TArray<struct FClothingAssetData_Legacy> ClothingAssets[0x10]; // 0x280(0x10)
	struct UClass* PostProcessAnimBlueprint[0x08]; // 0x290(0x08)
	struct TArray<struct U*ac42304f2a*> MeshClothingAssets[0x10]; // 0x298(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData[0x10]; // 0x2a8(0x10)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct TArray<struct USkeletalMeshSocket*> Sockets[0x10]; // 0x2c0(0x10)
	char pad_2D0[0x18]; // 0x2d0(0x18)

	bool *de29526034(); // Function Engine.SkeletalMesh.*de29526034 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ccebc
	void *c579dd6c1d(); // Function Engine.SkeletalMesh.*c579dd6c1d // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65c6c3c
	void *82b3b98a8a(); // Function Engine.SkeletalMesh.*82b3b98a8a // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65d3024
	void *948a0aab2d(); // Function Engine.SkeletalMesh.*948a0aab2d // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ca0ac
	int32 *7180b87b2d(); // Function Engine.SkeletalMesh.*7180b87b2d // Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65c5238
	void *d48324738f(); // Function Engine.SkeletalMesh.*d48324738f // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65c8998
	void *3082c52f21(int32* Index); // Function Engine.SkeletalMesh.*3082c52f21 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65cb188
	void *dd71f815f9(); // Function Engine.SkeletalMesh.*dd71f815f9 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65c51a0
};

// Class Engine.AnimationAsset
// Size: 0x78 (Inherited: 0x28)
struct UAnimationAsset : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct USkeleton* Skeleton[0x08]; // 0x30(0x08)
	char pad_38[0x20]; // 0x38(0x20)
	struct TArray<struct U*7db4928023*> MetaData[0x10]; // 0x58(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData[0x10]; // 0x68(0x10)
};

// Class Engine.ReflectionCapture
// Size: 0x3f0 (Inherited: 0x3e8)
struct AReflectionCapture : AActor {
	struct UReflectionCaptureComponent* CaptureComponent[0x08]; // 0x3e8(0x08)
};

// Class Engine.BoxReflectionCapture
// Size: 0x3f0 (Inherited: 0x3f0)
struct ABoxReflectionCapture : AReflectionCapture {
};

// Class Engine.PlaneReflectionCapture
// Size: 0x3f0 (Inherited: 0x3f0)
struct APlaneReflectionCapture : AReflectionCapture {
};

// Class Engine.SphereReflectionCapture
// Size: 0x3f8 (Inherited: 0x3f0)
struct ASphereReflectionCapture : AReflectionCapture {
	struct U*d44a97c4a0* *0d106c4035[0x08]; // 0x3f0(0x08)
};

// Class Engine.RigidBodyBase
// Size: 0x3e8 (Inherited: 0x3e8)
struct ARigidBodyBase : AActor {
};

// Class Engine.PhysicsConstraintActor
// Size: 0x408 (Inherited: 0x3e8)
struct APhysicsConstraintActor : ARigidBodyBase {
	struct UPhysicsConstraintComponent* ConstraintComp[0x08]; // 0x3e8(0x08)
	struct AActor* ConstraintActor1[0x08]; // 0x3f0(0x08)
	struct AActor* ConstraintActor2[0x08]; // 0x3f8(0x08)
	char bDisableCollision : 1; // 0x400(0x01)
	char pad_400_1 : 7; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
};

// Class Engine.PhysicsThruster
// Size: 0x3f0 (Inherited: 0x3e8)
struct APhysicsThruster : ARigidBodyBase {
	struct UPhysicsThrusterComponent* ThrusterComponent[0x08]; // 0x3e8(0x08)
};

// Class Engine.RadialForceActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ARadialForceActor : ARigidBodyBase {
	struct URadialForceComponent* ForceComponent[0x08]; // 0x3e8(0x08)

	void *6a7075e8a1(); // Function Engine.RadialForceActor.*6a7075e8a1 // Native|Public|BlueprintCallable // @ game+0x58ce3b4
	void *3ab0712ed4(); // Function Engine.RadialForceActor.*3ab0712ed4 // Native|Public|BlueprintCallable // @ game+0x5823324
	void *61d3dc4735(); // Function Engine.RadialForceActor.*61d3dc4735 // Native|Public|BlueprintCallable // @ game+0x5907f08
	void *d3e83cce24(); // Function Engine.RadialForceActor.*d3e83cce24 // Native|Public|BlueprintCallable // @ game+0x5907f20
};

// Class Engine.SceneCapture
// Size: 0x3f0 (Inherited: 0x3e8)
struct ASceneCapture : AActor {
	struct UStaticMeshComponent* MeshComp[0x08]; // 0x3e8(0x08)
};

// Class Engine.PlanarReflection
// Size: 0x400 (Inherited: 0x3f0)
struct APlanarReflection : ASceneCapture {
	struct U*f4dc70db73* PlanarReflectionComponent[0x08]; // 0x3f0(0x08)
	bool *05d523e11c; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)

	void OnInterpToggle(); // Function Engine.PlanarReflection.OnInterpToggle // Final|Native|Public|BlueprintCallable // @ game+0x65d3120
};

// Class Engine.SceneCapture2D
// Size: 0x400 (Inherited: 0x3f0)
struct ASceneCapture2D : ASceneCapture {
	struct USceneCaptureComponent2D* CaptureComponent2D[0x08]; // 0x3f0(0x08)
	struct U*4d37f15df7* *42bf489806[0x08]; // 0x3f8(0x08)

	void OnInterpToggle(); // Function Engine.SceneCapture2D.OnInterpToggle // Final|Native|Public|BlueprintCallable // @ game+0x65d3120
};

// Class Engine.SceneCaptureCube
// Size: 0x400 (Inherited: 0x3f0)
struct ASceneCaptureCube : ASceneCapture {
	struct USceneCaptureComponentCube* CaptureComponentCube[0x08]; // 0x3f0(0x08)
	struct U*4d37f15df7* *42bf489806[0x08]; // 0x3f8(0x08)

	void OnInterpToggle(); // Function Engine.SceneCaptureCube.OnInterpToggle // Final|Native|Public|BlueprintCallable // @ game+0x65d3120
};

// Class Engine.*1ee7fb7927
// Size: 0x28 (Inherited: 0x28)
struct U*1ee7fb7927 : UInterface {
};

// Class Engine.SplineMeshActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ASplineMeshActor : AActor {
	struct USplineMeshComponent* SplineMeshComponent[0x08]; // 0x3e8(0x08)
};

// Class Engine.StaticMeshIndoorVolumeComponent
// Size: 0x530 (Inherited: 0x4d0)
struct UStaticMeshIndoorVolumeComponent : USceneComponent {
	struct UStaticMesh* StaticMesh[0x08]; // 0x4d0(0x08)
	char pad_4D8[0x58]; // 0x4d8(0x58)
};

// Class Engine.StaticMeshIndoorVolumeContainerComponent
// Size: 0x510 (Inherited: 0x4d0)
struct UStaticMeshIndoorVolumeContainerComponent : USceneComponent {
	struct TArray<struct UStaticMesh*> StaticMeshes[0x10]; // 0x4d0(0x10)
	struct TArray<struct F*6aa01837a2> *81d61d57ce[0x10]; // 0x4e0(0x10)
	char pad_4F0[0x20]; // 0x4f0(0x20)
};

// Class Engine.StaticMeshIndoorVolume
// Size: 0x3f0 (Inherited: 0x3e8)
struct AStaticMeshIndoorVolume : AActor {
	struct UStaticMeshIndoorVolumeComponent* VolumeComponent[0x08]; // 0x3e8(0x08)
};

// Class Engine.TextRenderActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ATextRenderActor : AActor {
	struct UTextRenderComponent* TextRender[0x08]; // 0x3e8(0x08)
};

// Class Engine.TriggerCapsule
// Size: 0x3f0 (Inherited: 0x3f0)
struct ATriggerCapsule : ATriggerBase {
};

// Class Engine.TriggerSphere
// Size: 0x3f0 (Inherited: 0x3f0)
struct ATriggerSphere : ATriggerBase {
};

// Class Engine.VectorFieldVolume
// Size: 0x3f0 (Inherited: 0x3e8)
struct AVectorFieldVolume : AActor {
	struct UVectorFieldComponent* VectorFieldComponent[0x08]; // 0x3e8(0x08)
};

// Class Engine.ApplicationLifecycleComponent
// Size: 0x240 (Inherited: 0x1f0)
struct UApplicationLifecycleComponent : UActorComponent {
	struct FMulticastDelegate ApplicationWillDeactivateDelegate[0x10]; // 0x1f0(0x10)
	struct FMulticastDelegate ApplicationHasReactivatedDelegate[0x10]; // 0x200(0x10)
	struct FMulticastDelegate ApplicationWillEnterBackgroundDelegate[0x10]; // 0x210(0x10)
	struct FMulticastDelegate ApplicationHasEnteredForegroundDelegate[0x10]; // 0x220(0x10)
	struct FMulticastDelegate ApplicationWillTerminateDelegate[0x10]; // 0x230(0x10)

	void ApplicationLifetimeDelegate__DelegateSignature(); // DelegateFunction Engine.ApplicationLifecycleComponent.ApplicationLifetimeDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
};

// Class Engine.LevelBlocksData
// Size: 0x38 (Inherited: 0x28)
struct ULevelBlocksData : UObject {
	struct TArray<struct U*6273c6b474*> *22b5f5a112[0x10]; // 0x28(0x10)
};

// Class Engine.*6821ee5d79
// Size: 0x2b0 (Inherited: 0x1f0)
struct U*6821ee5d79 : UActorComponent {
	char pad_1F0[0x8]; // 0x1f0(0x08)
	struct ULevelBlocksData* LevelBlocksData[0x08]; // 0x1f8(0x08)
	char pad_200[0x18]; // 0x200(0x18)
	int32 RandomSeed[0x04]; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct TArray<struct AActor*> *e5538ac4f3[0x10]; // 0x220(0x10)
	char pad_230[0x80]; // 0x230(0x80)

	void OnKillcamLoadingFinished(); // Function Engine.*6821ee5d79.OnKillcamLoadingFinished // Final|Native|Private // @ game+0x65d31bc
	void OnRep_RandomSeed(); // Function Engine.*6821ee5d79.OnRep_RandomSeed // Final|Native|Private // @ game+0x65d31f4
};

// Class Engine.*5a32adf371
// Size: 0x2e0 (Inherited: 0x240)
struct U*5a32adf371 : UMovementComponent {
	float Duration[0x04]; // 0x238(0x04)
	char bPauseOnImpact : 1; // 0x23c(0x01)
	enum class EInterpToBehaviourType BehaviourType; // 0x240(0x01)
	char bForceSubStepping : 1; // 0x244(0x01)
	char pad_245_2 : 6; // 0x245(0x01)
	char pad_246[0x2]; // 0x246(0x02)
	struct FMulticastDelegate OnInterpToReverse[0x10]; // 0x248(0x10)
	struct FMulticastDelegate OnInterpToStop[0x10]; // 0x258(0x10)
	struct FMulticastDelegate OnWaitBeginDelegate[0x10]; // 0x268(0x10)
	struct FMulticastDelegate OnWaitEndDelegate[0x10]; // 0x278(0x10)
	struct FMulticastDelegate OnResetDelegate[0x10]; // 0x288(0x10)
	float MaxSimulationTimeStep[0x04]; // 0x298(0x04)
	int32 MaxSimulationIterations[0x04]; // 0x29c(0x04)
	struct TArray<struct F*3875950e73> ControlPoints[0x10]; // 0x2a0(0x10)
	char pad_2B0[0x30]; // 0x2b0(0x30)

	void *3707a465dd(); // Function Engine.*5a32adf371.*3707a465dd // Final|Native|Public|BlueprintCallable // @ game+0x65c50e4
	void OnInterpToReverseDelegate__DelegateSignature(); // DelegateFunction Engine.*5a32adf371.OnInterpToReverseDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x2cd4ac
	void StopSimulating(); // Function Engine.*5a32adf371.StopSimulating // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65df32c
	struct FHitResult OnInterpToWaitBeginDelegate__DelegateSignature(); // DelegateFunction Engine.*5a32adf371.OnInterpToWaitBeginDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x2cd4ac
	void OnInterpToResetDelegate__DelegateSignature(); // DelegateFunction Engine.*5a32adf371.OnInterpToResetDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x2cd4ac
	void OnInterpToStopDelegate__DelegateSignature(); // DelegateFunction Engine.*5a32adf371.OnInterpToStopDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x2cd4ac
	void *b9dcac8f93(); // Function Engine.*5a32adf371.*b9dcac8f93 // Final|Native|Public|BlueprintCallable // @ game+0x65d4974
	struct FHitResult OnInterpToWaitEndDelegate__DelegateSignature(); // DelegateFunction Engine.*5a32adf371.OnInterpToWaitEndDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x2cd4ac
};

// Class Engine.AssetUserData
// Size: 0x28 (Inherited: 0x28)
struct UAssetUserData : UObject {
};

// Class Engine.Skeleton
// Size: 0x3a0 (Inherited: 0x28)
struct USkeleton : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct F*fe6a9a6fdd> *342e95a478[0x10]; // 0x30(0x10)
	struct TArray<struct FTransform> RefLocalPoses[0x10]; // 0x40(0x10)
	char pad_50[0x110]; // 0x50(0x110)
	struct FGuid *fc962fd86a[0x10]; // 0x160(0x10)
	struct TArray<struct F*eab2f13d1e> *fa52a95a66[0x10]; // 0x170(0x10)
	struct TArray<struct F*dfe9cf8a88> *3504ed20fb[0x10]; // 0x180(0x10)
	struct TArray<struct USkeletalMeshSocket*> Sockets[0x10]; // 0x190(0x10)
	char pad_1A0[0x50]; // 0x1a0(0x50)
	struct F*41665359e6 *b5edcbbf92[0x50]; // 0x1f0(0x50)
	char pad_240[0x18]; // 0x240(0x18)
	struct TArray<struct UBlendProfile*> *f28211b573[0x10]; // 0x258(0x10)
	struct TArray<struct F*fe8cadf04c> *80c7f6ed2d[0x10]; // 0x268(0x10)
	char pad_278[0x118]; // 0x278(0x118)
	struct TArray<struct UAssetUserData*> AssetUserData[0x10]; // 0x390(0x10)
};

// Class Engine.AnimSequenceBase
// Size: 0xa0 (Inherited: 0x78)
struct UAnimSequenceBase : UAnimationAsset {
	struct TArray<struct FAnimNotifyEvent> Notifies[0x10]; // 0x78(0x10)
	float SequenceLength[0x04]; // 0x88(0x04)
	float *63b5605c53[0x04]; // 0x8c(0x04)
	struct F*6ea1b55ea3 *109bb426e4[0x10]; // 0x90(0x10)

	void *213efeee53(); // Function Engine.AnimSequenceBase.*213efeee53 // RequiredAPI|Native|Public|BlueprintCallable // @ game+0x65caee4
};

// Class Engine.*e429980132
// Size: 0xa0 (Inherited: 0xa0)
struct U*e429980132 : UAnimSequenceBase {
};

// Class Engine.AnimMontage
// Size: 0x1a8 (Inherited: 0xa0)
struct UAnimMontage : U*e429980132 {
	struct FAlphaBlend *f0cd8bf840[0x38]; // 0xa0(0x38)
	float BlendInTime[0x04]; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FAlphaBlend *2c0e4747fd[0x38]; // 0xe0(0x38)
	float BlendOutTime[0x04]; // 0x118(0x04)
	float *2104e13cd5[0x04]; // 0x11c(0x04)
	struct FName SyncGroup[0x08]; // 0x120(0x08)
	int32 *172117ab82[0x04]; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct F*1e7b9a312d *a31acbe57a[0x20]; // 0x130(0x20)
	struct TArray<struct F*950c263671> *f7f06b062f[0x10]; // 0x150(0x10)
	struct TArray<struct F*14ee813809> *40d7260160[0x10]; // 0x160(0x10)
	struct TArray<struct FBranchingPoint> BranchingPoints[0x10]; // 0x170(0x10)
	bool *d571ae2f5a; // 0x180(0x01)
	bool *8b3af21053; // 0x181(0x01)
	enum class ERootMotionRootLock *7c0636d645; // 0x182(0x01)
	char pad_183[0x5]; // 0x183(0x05)
	struct TArray<struct F*6e4e2ec99e> *4a32e2fd2f[0x10]; // 0x188(0x10)
	struct TArray<int32> *ebb891a609[0x10]; // 0x198(0x10)

	void OnMontageClosedMulticaster__DelegateSignature(); // DelegateFunction Engine.AnimMontage.OnMontageClosedMulticaster__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
};

// Class Engine.*a58f036cf1
// Size: 0x28 (Inherited: 0x28)
struct U*a58f036cf1 : UInterface {
};

// Class Engine.*8700433fd6
// Size: 0x28 (Inherited: 0x28)
struct U*8700433fd6 : UInterface {
};

// Class Engine.RotatingMovementComponent
// Size: 0x260 (Inherited: 0x240)
struct URotatingMovementComponent : UMovementComponent {
	struct FRotator RotationRate[0x0c]; // 0x238(0x0c)
	struct FVector PivotTranslation[0x0c]; // 0x244(0x0c)
	char bRotationInLocalSpace : 1; // 0x250(0x01)
	char pad_258_1 : 7; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
};

// Class Engine.*dde4b794bb
// Size: 0x200 (Inherited: 0x1f0)
struct U*dde4b794bb : UActorComponent {
	float *f4b7022996[0x04]; // 0x1f0(0x04)
	float *b676c5c497[0x04]; // 0x1f4(0x04)
	char pad_1F8[0x8]; // 0x1f8(0x08)
};

// Class Engine.*943f0bf3f9
// Size: 0x220 (Inherited: 0x1f0)
struct U*943f0bf3f9 : UActorComponent {
	char pad_1F0[0x24]; // 0x1f0(0x24)
	char *9318ae6d3d : 1; // 0x214(0x01)
	char pad_214_1 : 7; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
	struct UObject* *3d6ce67ea4[0x08]; // 0x218(0x08)

	void *96e997cbeb(); // Function Engine.*943f0bf3f9.*96e997cbeb // Final|Native|Public|BlueprintCallable // @ game+0x662aa04
};

// Class Engine.*9376b52ffa
// Size: 0x28 (Inherited: 0x28)
struct U*9376b52ffa : UInterface {
};

// Class Engine.NavLinkCustomComponent
// Size: 0x330 (Inherited: 0x220)
struct UNavLinkCustomComponent : U*943f0bf3f9 {
	char pad_220[0x8]; // 0x220(0x08)
	uint32 *d875907568[0x04]; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct UClass* *53a448b497[0x08]; // 0x230(0x08)
	struct UClass* *1b09787d75[0x08]; // 0x238(0x08)
	struct FVector *751a36f211[0x0c]; // 0x240(0x0c)
	struct FVector *32f146a6e8[0x0c]; // 0x24c(0x0c)
	enum class ENavLinkDirection *cbd3451489; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	char *dcac4418fd : 1; // 0x25c(0x01)
	char *d8310b693b : 1; // 0x25c(0x01)
	char *5e562cbce8 : 1; // 0x25c(0x01)
	char *6b64296719 : 1; // 0x25c(0x01)
	char pad_25C_4 : 4; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct FVector *ca14d78e1e[0x0c]; // 0x260(0x0c)
	struct FVector *8ea9b52fd4[0x0c]; // 0x26c(0x0c)
	struct UClass* *10a2c1c80f[0x08]; // 0x278(0x08)
	float *a5e2186e74[0x04]; // 0x280(0x04)
	float *3df6c58979[0x04]; // 0x284(0x04)
	enum class ECollisionChannel *dda17782a3; // 0x288(0x01)
	char pad_289[0xa7]; // 0x289(0xa7)
};

// Class Engine.NavModifierComponent
// Size: 0x250 (Inherited: 0x220)
struct UNavModifierComponent : U*943f0bf3f9 {
	struct UClass* AreaClass[0x08]; // 0x220(0x08)
	struct FVector *c22b29a3f8[0x0c]; // 0x228(0x0c)
	char pad_234[0x1c]; // 0x234(0x1c)

	void *7aaad5527c(); // Function Engine.NavModifierComponent.*7aaad5527c // Final|Native|Public|BlueprintCallable // @ game+0x6621e70
};

// Class Engine.PawnNoiseEmitterComponent
// Size: 0x220 (Inherited: 0x1f0)
struct UPawnNoiseEmitterComponent : UActorComponent {
	char *782f1142de : 1; // 0x1f0(0x01)
	char pad_1F0_1 : 7; // 0x1f0(0x01)
	char pad_1F1[0x3]; // 0x1f1(0x03)
	struct FVector *39c89baaec[0x0c]; // 0x1f4(0x0c)
	float NoiseLifetime[0x04]; // 0x200(0x04)
	float *82e51227e6[0x04]; // 0x204(0x04)
	float *298432ca82[0x04]; // 0x208(0x04)
	float *1dbf65ed2b[0x04]; // 0x20c(0x04)
	float *d7354fdf53[0x04]; // 0x210(0x04)
	char pad_214[0xc]; // 0x214(0x0c)

	float MakeNoise(); // Function Engine.PawnNoiseEmitterComponent.MakeNoise // BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6612f94
};

// Class Engine.*20dfbb6474
// Size: 0x230 (Inherited: 0x1f0)
struct U*20dfbb6474 : UActorComponent {
	float StrengthMultiplyer[0x04]; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct USkeletalMeshComponent* SkeletalMeshComponent[0x08]; // 0x1f8(0x08)
	char pad_200[0x30]; // 0x200(0x30)

	void *d4240fead5(struct FName* BodyName); // Function Engine.*20dfbb6474.*d4240fead5 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65e65c8
	void *fa8221aff6(); // Function Engine.*20dfbb6474.*fa8221aff6 // Final|Native|Public|BlueprintCallable // @ game+0x662c874
	struct FName *c02af333a6(); // Function Engine.*20dfbb6474.*c02af333a6 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65fd294
	void *d5cfb6cadf(); // Function Engine.*20dfbb6474.*d5cfb6cadf // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65e64c4
	bool *a49429226e(); // Function Engine.*20dfbb6474.*a49429226e // Final|Native|Public|BlueprintCallable // @ game+0x65e6344
	void *fd3270f767(); // Function Engine.*20dfbb6474.*fd3270f767 // Final|Native|Public|BlueprintCallable // @ game+0x662df24
};

// Class Engine.PhysicsHandleComponent
// Size: 0x2a0 (Inherited: 0x1f0)
struct UPhysicsHandleComponent : UActorComponent {
	struct UPrimitiveComponent* *52184f172a[0x08]; // 0x1f0(0x08)
	char pad_1F8[0xc]; // 0x1f8(0x0c)
	char pad_204_0 : 1; // 0x204(0x01)
	char bSoftAngularConstraint : 1; // 0x204(0x01)
	char bSoftLinearConstraint : 1; // 0x204(0x01)
	char bInterpolateTarget : 1; // 0x204(0x01)
	char pad_204_4 : 4; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	float LinearDamping[0x04]; // 0x208(0x04)
	float LinearStiffness[0x04]; // 0x20c(0x04)
	float AngularDamping[0x04]; // 0x210(0x04)
	float AngularStiffness[0x04]; // 0x214(0x04)
	char pad_218[0x68]; // 0x218(0x68)
	float InterpolationSpeed[0x04]; // 0x280(0x04)
	char pad_284[0x1c]; // 0x284(0x1c)

	void *35b1b146d4(); // Function Engine.PhysicsHandleComponent.*35b1b146d4 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ffde8
	void SetAngularDamping(); // Function Engine.PhysicsHandleComponent.SetAngularDamping // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6620fb8
	void *b5a41042f5(struct FVector* TargetLocation); // Function Engine.PhysicsHandleComponent.*b5a41042f5 // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66066a8
	void *45d728dc76(); // Function Engine.PhysicsHandleComponent.*45d728dc76 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6629ad4
	struct FVector *3aa5743455(); // Function Engine.PhysicsHandleComponent.*3aa5743455 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x662e7c0
	void *9912b63b4d(); // Function Engine.PhysicsHandleComponent.*9912b63b4d // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x662e8c8
	void *9094a5407b(struct UPrimitiveComponent** Component, struct FVector* Location); // Function Engine.PhysicsHandleComponent.*9094a5407b // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66092bc
	void *4023da8f97(); // Function Engine.PhysicsHandleComponent.*4023da8f97 // RequiredAPI|Native|Public|BlueprintCallable // @ game+0xda893c
	void SetLinearDamping(); // Function Engine.PhysicsHandleComponent.SetLinearDamping // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66296c0
	void *97843c62cb(); // Function Engine.PhysicsHandleComponent.*97843c62cb // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6621558
	void *397f5fb3bf(); // Function Engine.PhysicsHandleComponent.*397f5fb3bf // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x662e71c
	void *bf46d83f13(); // Function Engine.PhysicsHandleComponent.*bf46d83f13 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6628e34
	struct FVector *5025cced65(); // Function Engine.PhysicsHandleComponent.*5025cced65 // RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6608ff0
	struct FName *6f7f2607e0(); // Function Engine.PhysicsHandleComponent.*6f7f2607e0 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6609170
};

// Class Engine.*2875ddd868
// Size: 0x210 (Inherited: 0x1f0)
struct U*2875ddd868 : UActorComponent {
	struct FMulticastDelegate PlatformChangedToLaptopModeDelegate[0x10]; // 0x1f0(0x10)
	struct FMulticastDelegate PlatformChangedToTabletModeDelegate[0x10]; // 0x200(0x10)

	void *f4c8c2d98f(); // Function Engine.*2875ddd868.*f4c8c2d98f // Final|Native|Public|BlueprintCallable // @ game+0x660be88
	void *0d53f3b8a7(); // Function Engine.*2875ddd868.*0d53f3b8a7 // Final|Native|Public|BlueprintCallable // @ game+0x660be5c
	void *4a6dd6c7cf(); // Function Engine.*2875ddd868.*4a6dd6c7cf // Final|Native|Public|BlueprintCallable // @ game+0x6637edc
	void PlatformEventDelegate__DelegateSignature(); // DelegateFunction Engine.*2875ddd868.PlatformEventDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
};

// Class Engine.AtmosphericFogComponent
// Size: 0x6f0 (Inherited: 0x4d0)
struct UAtmosphericFogComponent : USceneComponent {
	float SunMultiplier[0x04]; // 0x4d0(0x04)
	float FogMultiplier[0x04]; // 0x4d4(0x04)
	float DensityMultiplier[0x04]; // 0x4d8(0x04)
	float DensityOffset[0x04]; // 0x4dc(0x04)
	float DistanceScale[0x04]; // 0x4e0(0x04)
	float AltitudeScale[0x04]; // 0x4e4(0x04)
	float DistanceOffset[0x04]; // 0x4e8(0x04)
	float GroundOffset[0x04]; // 0x4ec(0x04)
	float StartDistance[0x04]; // 0x4f0(0x04)
	float SunDiscScale[0x04]; // 0x4f4(0x04)
	struct TArray<struct F*6c9f3db3c3> HeightDensityLayers[0x10]; // 0x4f8(0x10)
	float DefaultBrightness[0x04]; // 0x508(0x04)
	struct FColor DefaultLightColor[0x04]; // 0x50c(0x04)
	char bDisableSunDisk : 1; // 0x510(0x01)
	char bDisableGroundScattering : 1; // 0x510(0x01)
	char pad_510_2 : 6; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	struct F*b560ea03a2 PrecomputeParams[0x2c]; // 0x514(0x2c)
	struct UTexture2D* TransmittanceTexture[0x08]; // 0x540(0x08)
	struct UTexture2D* IrradianceTexture[0x08]; // 0x548(0x08)
	char pad_550[0x1a0]; // 0x550(0x1a0)

	void *7fe22c3aaf(); // Function Engine.AtmosphericFogComponent.*7fe22c3aaf // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6625738
	void *bc524ffe4d(); // Function Engine.AtmosphericFogComponent.*bc524ffe4d // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x65f54cc
	void *1bf21ccae6(); // Function Engine.AtmosphericFogComponent.*1bf21ccae6 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x662d798
	void *2a34a3cfef(); // Function Engine.AtmosphericFogComponent.*2a34a3cfef // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x65f5584
	void *3ea28b16cd(); // Function Engine.AtmosphericFogComponent.*3ea28b16cd // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6620f0c
	void *dd1604a4f5(); // Function Engine.AtmosphericFogComponent.*dd1604a4f5 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6625cd8
	void *75b5996db7(); // Function Engine.AtmosphericFogComponent.*75b5996db7 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66272c0
	void *daf9573c74(); // Function Engine.AtmosphericFogComponent.*daf9573c74 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x662755c
	void *39cd214eb7(); // Function Engine.AtmosphericFogComponent.*39cd214eb7 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6625c2c
	void *93ab62696e(int32* MaxScatteringOrder); // Function Engine.AtmosphericFogComponent.*93ab62696e // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x662bd3c
	void *0009e4f1a9(); // Function Engine.AtmosphericFogComponent.*0009e4f1a9 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66257e4
	void *ec36090e36(); // Function Engine.AtmosphericFogComponent.*ec36090e36 // Final|Native|Public|BlueprintCallable // @ game+0xbf00fc
	void *7172b686d5(); // Function Engine.AtmosphericFogComponent.*7172b686d5 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66254e0
	void *b79a6f8e7a(); // Function Engine.AtmosphericFogComponent.*b79a6f8e7a // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x662558c
};

// Class Engine.*3c6d1fe531
// Size: 0x28 (Inherited: 0x28)
struct U*3c6d1fe531 : UObject {
};

// Class Engine.*7271e52195
// Size: 0x28 (Inherited: 0x28)
struct U*7271e52195 : UObject {
};

// Class Engine.*0f6f7c0dee
// Size: 0x28 (Inherited: 0x28)
struct U*0f6f7c0dee : UObject {
};

// Class Engine.SoundAttenuation
// Size: 0x158 (Inherited: 0x28)
struct USoundAttenuation : UObject {
	struct FSoundAttenuationSettings Attenuation[0x130]; // 0x28(0x130)
};

// Class Engine.AudioComponent
// Size: 0x7a0 (Inherited: 0x4d0)
struct UAudioComponent : USceneComponent {
	struct USoundBase* Sound[0x08]; // 0x4d0(0x08)
	struct TArray<struct F*0be550698a> InstanceParameters[0x10]; // 0x4d8(0x10)
	struct USoundClass* *e2444a5810[0x08]; // 0x4e8(0x08)
	char *a63857a36e : 1; // 0x4f0(0x01)
	char *0c4faa0861 : 1; // 0x4f0(0x01)
	char *4f1813926c : 1; // 0x4f0(0x01)
	char bAllowSpatialization : 1; // 0x4f0(0x01)
	char bOverrideAttenuation : 1; // 0x4f0(0x01)
	char pad_4F0_5 : 3; // 0x4f0(0x01)
	char pad_4F1[0x3]; // 0x4f1(0x03)
	char bOverrideSubtitlePriority : 1; // 0x4f4(0x01)
	char pad_4F4_1 : 7; // 0x4f4(0x01)
	char pad_4F5[0x3]; // 0x4f5(0x03)
	char bIsUISound : 1; // 0x4f8(0x01)
	char bEnableLowPassFilter : 1; // 0x4f8(0x01)
	char bOverridePriority : 1; // 0x4f8(0x01)
	char bSuppressSubtitles : 1; // 0x4f8(0x01)
	char pad_4F8_4 : 4; // 0x4f8(0x01)
	char pad_4F9[0x7]; // 0x4f9(0x07)
	struct FName *0b3f0c9907[0x08]; // 0x500(0x08)
	float PitchModulationMin[0x04]; // 0x508(0x04)
	float PitchModulationMax[0x04]; // 0x50c(0x04)
	float VolumeModulationMin[0x04]; // 0x510(0x04)
	float VolumeModulationMax[0x04]; // 0x514(0x04)
	float VolumeMultiplier[0x04]; // 0x518(0x04)
	float Priority[0x04]; // 0x51c(0x04)
	float SubtitlePriority[0x04]; // 0x520(0x04)
	float VolumeWeightedPriorityScale[0x04]; // 0x524(0x04)
	float PitchMultiplier[0x04]; // 0x528(0x04)
	float HighFrequencyGainMultiplier[0x04]; // 0x52c(0x04)
	float LowPassFilterFrequency[0x04]; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	struct USoundAttenuation* AttenuationSettings[0x08]; // 0x538(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides[0x130]; // 0x540(0x130)
	struct USoundConcurrency* ConcurrencySettings[0x08]; // 0x670(0x08)
	char pad_678[0x8]; // 0x678(0x08)
	struct FMulticastDelegate OnAudioFinished[0x10]; // 0x680(0x10)
	char pad_690[0x70]; // 0x690(0x70)
	struct FMulticastDelegate OnAudioPlaybackPercent[0x10]; // 0x700(0x10)
	char pad_710[0x70]; // 0x710(0x70)
	DelegateProperty *2b3f413ec8[0x10]; // 0x780(0x10)
	char pad_790[0x10]; // 0x790(0x10)

	void Play(); // Function Engine.AudioComponent.Play // Native|Public|BlueprintCallable // @ game+0x6619b74
	void AdjustAttenuation(); // Function Engine.AudioComponent.AdjustAttenuation // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65e5c20
	struct FName SetFloatParameter(); // Function Engine.AudioComponent.SetFloatParameter // Final|Native|Public|BlueprintCallable // @ game+0x6627134
	void FadeOut(float* FadeOutDuration); // Function Engine.AudioComponent.FadeOut // Native|Public|BlueprintCallable // @ game+0x65f9df4
	struct FName SetWaveParameter(); // Function Engine.AudioComponent.SetWaveParameter // Final|Native|Public|BlueprintCallable // @ game+0x6630244
	void IsPlaying(); // Function Engine.AudioComponent.IsPlaying // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ccc50
	void *41c9351128(); // Function Engine.AudioComponent.*41c9351128 // Final|Native|Public|BlueprintCallable // @ game+0x662cabc
	void Stop(); // Function Engine.AudioComponent.Stop // Native|Public|BlueprintCallable // @ game+0x6637334
	void SetIntParameter(); // Function Engine.AudioComponent.SetIntParameter // Final|Native|Public|BlueprintCallable // @ game+0x6628810
	void *8581ff2462(); // Function Engine.AudioComponent.*8581ff2462 // Final|Native|Public|BlueprintCallable // @ game+0x662f02c
	void *786f2707e4(); // Function Engine.AudioComponent.*786f2707e4 // Final|Native|Public|BlueprintCallable // @ game+0x662b32c
	void *a2584d7220(float* FadeVolumeLevel); // Function Engine.AudioComponent.*a2584d7220 // Native|Public|BlueprintCallable // @ game+0x65f9cd0
	void SetBoolParameter(struct FName* InName); // Function Engine.AudioComponent.SetBoolParameter // Final|Native|Public|BlueprintCallable // @ game+0x6623100
	struct USoundSubmix* *b7948a68ed(); // Function Engine.AudioComponent.*b7948a68ed // Final|Native|Public|BlueprintCallable // @ game+0x662e158
	struct FSoundAttenuationSettings *b59717a56f(); // Function Engine.AudioComponent.*b59717a56f // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65e88a0
	void AdjustVolume(); // Function Engine.AudioComponent.AdjustVolume // Final|Native|Public|BlueprintCallable // @ game+0x65e5e30
	void SetVolumeMultiplier(); // Function Engine.AudioComponent.SetVolumeMultiplier // Final|Native|Public|BlueprintCallable // @ game+0x662fc4c
	void SetPitchMultiplier(); // Function Engine.AudioComponent.SetPitchMultiplier // Final|Native|Public|BlueprintCallable // @ game+0x662b53c
};

// Class Engine.DecalComponent
// Size: 0x560 (Inherited: 0x4d0)
struct UDecalComponent : USceneComponent {
	struct UMaterialInterface* DecalMaterial[0x08]; // 0x4d0(0x08)
	int32 SortOrder[0x04]; // 0x4d8(0x04)
	float FadeScreenSize[0x04]; // 0x4dc(0x04)
	float FadeStartDelay[0x04]; // 0x4e0(0x04)
	float FadeDuration[0x04]; // 0x4e4(0x04)
	char bDestroyOwnerAfterFade : 1; // 0x4e8(0x01)
	char pad_4E8_1 : 7; // 0x4e8(0x01)
	struct F*71b70dd01c DecalChannels; // 0x4e9(0x01)
	char pad_4EA[0x2]; // 0x4ea(0x02)
	struct FVector DecalSize[0x0c]; // 0x4ec(0x0c)
	float NormalFadeStart[0x04]; // 0x4f8(0x04)
	float NormalFadeEnd[0x04]; // 0x4fc(0x04)
	char pad_500[0x60]; // 0x500(0x60)

	void *c283f05e4b(); // Function Engine.DecalComponent.*c283f05e4b // Final|Native|Public|BlueprintCallable // @ game+0x662ca24
	void *cd9e72977c(); // Function Engine.DecalComponent.*cd9e72977c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ff8f8
	void *d371deb8d5(); // Function Engine.DecalComponent.*d371deb8d5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ff8e0
	float *4fdf92639d(); // Function Engine.DecalComponent.*4fdf92639d // Final|Native|Public|BlueprintCallable // @ game+0x6626e44
	void CreateDynamicMaterialInstance(); // Function Engine.DecalComponent.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x65f3cd8
	void *1ba43ce700(); // Function Engine.DecalComponent.*1ba43ce700 // Final|Native|Public|BlueprintCallable // @ game+0x66253a8
	void *37dea3cfb9(); // Function Engine.DecalComponent.*37dea3cfb9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65fee54
};

// Class Engine.*5eded02585
// Size: 0x4e0 (Inherited: 0x4d0)
struct U*5eded02585 : USceneComponent {
	char pad_4D0[0x10]; // 0x4d0(0x10)
};

// Class Engine.ExponentialHeightFogComponent
// Size: 0x590 (Inherited: 0x4d0)
struct UExponentialHeightFogComponent : USceneComponent {
	float FogDensity[0x04]; // 0x4d0(0x04)
	struct FLinearColor FogInscatteringColor[0x10]; // 0x4d4(0x10)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct TArray<struct F*54237e0926> HeightDensityLayers[0x10]; // 0x4e8(0x10)
	struct UTextureCube* InscatteringColorCubemap[0x08]; // 0x4f8(0x08)
	float InscatteringColorCubemapAngle[0x04]; // 0x500(0x04)
	struct FLinearColor InscatteringTextureTint[0x10]; // 0x504(0x10)
	float FullyDirectionalInscatteringColorDistance[0x04]; // 0x514(0x04)
	float NonDirectionalInscatteringColorDistance[0x04]; // 0x518(0x04)
	float DirectionalInscatteringExponent[0x04]; // 0x51c(0x04)
	float DirectionalInscatteringStartDistance[0x04]; // 0x520(0x04)
	struct FLinearColor DirectionalInscatteringColor[0x10]; // 0x524(0x10)
	float FogHeightFalloff[0x04]; // 0x534(0x04)
	float FogMaxOpacity[0x04]; // 0x538(0x04)
	float StartDistance[0x04]; // 0x53c(0x04)
	float FogCutoffDistance[0x04]; // 0x540(0x04)
	bool bEnableVolumetricFog; // 0x544(0x01)
	char pad_545[0x3]; // 0x545(0x03)
	float VolumetricFogScatteringDistribution[0x04]; // 0x548(0x04)
	struct FColor VolumetricFogAlbedo[0x04]; // 0x54c(0x04)
	struct FLinearColor VolumetricFogEmissive[0x10]; // 0x550(0x10)
	float VolumetricFogExtinctionScale[0x04]; // 0x560(0x04)
	float VolumetricFogDistance[0x04]; // 0x564(0x04)
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x568(0x01)
	bool bUseExtendedFog; // 0x569(0x01)
	char pad_56A[0x2]; // 0x56a(0x02)
	float ExtendedFogStartDistance[0x04]; // 0x56c(0x04)
	float ExtendedFogStartFalloffDistance[0x04]; // 0x570(0x04)
	float ExtendedHeight[0x04]; // 0x574(0x04)
	float ExtendedFallOff[0x04]; // 0x578(0x04)
	float ExtendedFogDensity[0x04]; // 0x57c(0x04)
	float UpDensity[0x04]; // 0x580(0x04)
	float DownDensity[0x04]; // 0x584(0x04)
	float Intensity[0x04]; // 0x588(0x04)
	bool bUseAtmosphereScattering; // 0x58c(0x01)
	char pad_58D[0x3]; // 0x58d(0x03)

	void *ec47bf8abc(); // Function Engine.ExponentialHeightFogComponent.*ec47bf8abc // Final|Native|Public|BlueprintCallable // @ game+0x6626c40
	void *de502f5abe(); // Function Engine.ExponentialHeightFogComponent.*de502f5abe // Final|Native|Public|BlueprintCallable // @ game+0x6625a0c
	void *4b03aff47b(); // Function Engine.ExponentialHeightFogComponent.*4b03aff47b // Final|Native|Public|BlueprintCallable // @ game+0x66279c0
	void *694bf6aa45(); // Function Engine.ExponentialHeightFogComponent.*694bf6aa45 // Final|Native|Public|BlueprintCallable // @ game+0x6626cec
	void *7e45bc9be8(); // Function Engine.ExponentialHeightFogComponent.*7e45bc9be8 // Final|Native|Public|BlueprintCallable // @ game+0x6625ab8
	void *20ebb690ce(); // Function Engine.ExponentialHeightFogComponent.*20ebb690ce // Final|Native|Public|BlueprintCallable // @ game+0x662fce4
	void *c2032db7d2(); // Function Engine.ExponentialHeightFogComponent.*c2032db7d2 // Final|Native|Public|BlueprintCallable // @ game+0x662fe24
	void *61ce58d61a(); // Function Engine.ExponentialHeightFogComponent.*61ce58d61a // Final|Native|Public|BlueprintCallable // @ game+0x6628558
	void *8ade5ea82b(); // Function Engine.ExponentialHeightFogComponent.*8ade5ea82b // Final|Native|Public|BlueprintCallable // @ game+0x66284b4
	void *63db22cfd0(); // Function Engine.ExponentialHeightFogComponent.*63db22cfd0 // Final|Native|Public|BlueprintCallable // @ game+0x6626b94
	void *e53af9fcce(); // Function Engine.ExponentialHeightFogComponent.*e53af9fcce // Final|Native|Public|BlueprintCallable // @ game+0x662ffbc
	void *a8e458b306(); // Function Engine.ExponentialHeightFogComponent.*a8e458b306 // Final|Native|Public|BlueprintCallable // @ game+0x662f1d0
	void *1bf21ccae6(); // Function Engine.ExponentialHeightFogComponent.*1bf21ccae6 // Final|Native|Public|BlueprintCallable // @ game+0x662d844
	void *28be4b3e8f(); // Function Engine.ExponentialHeightFogComponent.*28be4b3e8f // Final|Native|Public|BlueprintCallable // @ game+0x6625d84
	void *e862f47d1a(); // Function Engine.ExponentialHeightFogComponent.*e862f47d1a // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x662fd88
	void *1c54404e27(); // Function Engine.ExponentialHeightFogComponent.*1c54404e27 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6627418
	void *73d6c7ac39(); // Function Engine.ExponentialHeightFogComponent.*73d6c7ac39 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6628604
	void *67638fb6e8(); // Function Engine.ExponentialHeightFogComponent.*67638fb6e8 // Final|Native|Public|BlueprintCallable // @ game+0x662736c
	void *352b2fba7f(); // Function Engine.ExponentialHeightFogComponent.*352b2fba7f // Final|Native|Public|BlueprintCallable // @ game+0x6630068
	void *f53544542e(); // Function Engine.ExponentialHeightFogComponent.*f53544542e // Final|Native|Public|BlueprintCallable // @ game+0x662ab34
	void *e5ad0fbf43(); // Function Engine.ExponentialHeightFogComponent.*e5ad0fbf43 // Final|Native|Public|BlueprintCallable // @ game+0x66274b0
	void SetIntensity(); // Function Engine.ExponentialHeightFogComponent.SetIntensity // Final|Native|Public|BlueprintCallable // @ game+0x6628a04
	void *beb3789796(); // Function Engine.ExponentialHeightFogComponent.*beb3789796 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x662fed0
	void *4ac51038ef(); // Function Engine.ExponentialHeightFogComponent.*4ac51038ef // Final|Native|Public|BlueprintCallable // @ game+0x6626ae8
	void *2405f653d4(); // Function Engine.ExponentialHeightFogComponent.*2405f653d4 // Final|Native|Public|BlueprintCallable // @ game+0x6627214
	void *0a78e55b0f(); // Function Engine.ExponentialHeightFogComponent.*0a78e55b0f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6625920
	void *5b04174fb1(); // Function Engine.ExponentialHeightFogComponent.*5b04174fb1 // Final|Native|Public|BlueprintCallable // @ game+0x6626d98
	void *b8c9b39cd4(); // Function Engine.ExponentialHeightFogComponent.*b8c9b39cd4 // Final|Native|Public|BlueprintCallable // @ game+0x66272c0
};

// Class Engine.*b886eb1be7
// Size: 0xd0 (Inherited: 0x28)
struct U*b886eb1be7 : UObject {
	struct FForceFeedbackAttenuationSettings Attenuation[0xa8]; // 0x28(0xa8)
};

// Class Engine.ForceFeedbackComponent
// Size: 0x5b0 (Inherited: 0x4d0)
struct UForceFeedbackComponent : USceneComponent {
	struct UForceFeedbackEffect* ForceFeedbackEffect[0x08]; // 0x4d0(0x08)
	char *a63857a36e : 1; // 0x4d8(0x01)
	char *0c4faa0861 : 1; // 0x4d8(0x01)
	char bLooping : 1; // 0x4d8(0x01)
	char bOverrideAttenuation : 1; // 0x4d8(0x01)
	char pad_4D8_4 : 4; // 0x4d8(0x01)
	char pad_4D9[0x3]; // 0x4d9(0x03)
	float IntensityMultiplier[0x04]; // 0x4dc(0x04)
	struct U*b886eb1be7* AttenuationSettings[0x08]; // 0x4e0(0x08)
	struct FForceFeedbackAttenuationSettings AttenuationOverrides[0xa8]; // 0x4e8(0xa8)
	struct FMulticastDelegate OnForceFeedbackFinished[0x10]; // 0x590(0x10)
	char pad_5A0[0x10]; // 0x5a0(0x10)

	void Stop(); // Function Engine.ForceFeedbackComponent.Stop // Native|Public|BlueprintCallable // @ game+0x663734c
	void *5e6c3472a4(); // Function Engine.ForceFeedbackComponent.*5e6c3472a4 // Final|Native|Public|BlueprintCallable // @ game+0x66276c0
	void *b59717a56f(struct FForceFeedbackAttenuationSettings* OutAttenuationSettings); // Function Engine.ForceFeedbackComponent.*b59717a56f // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x65e89ac
	void Play(); // Function Engine.ForceFeedbackComponent.Play // Native|Public|BlueprintCallable // @ game+0x6619c10
	void AdjustAttenuation(); // Function Engine.ForceFeedbackComponent.AdjustAttenuation // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x65e5d1c
	void *7b422e1552(); // Function Engine.ForceFeedbackComponent.*7b422e1552 // Final|Native|Public|BlueprintCallable // @ game+0x6628be0
};

// Class Engine.*d6fbc0688d
// Size: 0x570 (Inherited: 0x4d0)
struct U*d6fbc0688d : USceneComponent {
	struct UMaterialInterface* DecalMaterial[0x08]; // 0x4d0(0x08)
	bool KeepInstanceBufferCPUAccess; // 0x4d8(0x01)
	struct F*71b70dd01c DecalChannels; // 0x4d9(0x01)
	char pad_4DA[0x96]; // 0x4da(0x96)

	void CreateDynamicMaterialInstance(); // Function Engine.*d6fbc0688d.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x65f3cd8
	void *37dea3cfb9(); // Function Engine.*d6fbc0688d.*37dea3cfb9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65fee54
	void *1ba43ce700(); // Function Engine.*d6fbc0688d.*1ba43ce700 // Final|Native|Public|BlueprintCallable // @ game+0x66253a8
};

// Class Engine.*ef97bd0f41
// Size: 0x540 (Inherited: 0x4d0)
struct U*ef97bd0f41 : USceneComponent {
	bool UseDynamicInstanceBuffer; // 0x4d0(0x01)
	bool KeepInstanceBufferCPUAccess; // 0x4d1(0x01)
	char pad_4D2[0x6]; // 0x4d2(0x06)
	struct TArray<struct F*565423b023> PerInstanceDecalData[0x10]; // 0x4d8(0x10)
	struct UStaticMesh* StaticMesh[0x08]; // 0x4e8(0x08)
	struct UMaterialInterface* DecalMaterial[0x08]; // 0x4f0(0x08)
	char pad_4F8[0x48]; // 0x4f8(0x48)

	void *82167e78cb(struct FSplineParams* SplineParams); // Function Engine.*ef97bd0f41.*82167e78cb // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e4820
	void OnRep_StaticMesh(); // Function Engine.*ef97bd0f41.OnRep_StaticMesh // Final|Native|Public // @ game+0x6618f20
	void *37dea3cfb9(); // Function Engine.*ef97bd0f41.*37dea3cfb9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65fee6c
	void *1ff5154222(); // Function Engine.*ef97bd0f41.*1ff5154222 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ff8f8
	void SetStaticMesh(); // Function Engine.*ef97bd0f41.SetStaticMesh // Final|Native|Public|BlueprintCallable // @ game+0x662dde4
	void CreateDynamicMaterialInstance(); // Function Engine.*ef97bd0f41.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x65f3d00
	int32 *4981f52ac4(); // Function Engine.*ef97bd0f41.*4981f52ac4 // Native|Public|BlueprintCallable // @ game+0x661e710
	void *552630dc35(); // Function Engine.*ef97bd0f41.*552630dc35 // Native|Public|BlueprintCallable // @ game+0x587b83c
	void *01fde74119(struct FSplineParams* SplineParams); // Function Engine.*ef97bd0f41.*01fde74119 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e43d8
	void *1ba43ce700(); // Function Engine.*ef97bd0f41.*1ba43ce700 // Final|Native|Public|BlueprintCallable // @ game+0x6625444
};

// Class Engine.*b7b5fc361e
// Size: 0x30 (Inherited: 0x30)
struct U*b7b5fc361e : UDataAsset {
};

// Class Engine.LevelBlockType
// Size: 0x58 (Inherited: 0x30)
struct ULevelBlockType : UDataAsset {
	enum class ESpawnPointRollType *25109e3105; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct F*517447b731> Variants[0x10]; // 0x38(0x10)
	struct TArray<struct F*8bfa60c108> *fd288f2662[0x10]; // 0x48(0x10)
};

// Class Engine.*5346184155
// Size: 0x4e0 (Inherited: 0x4d0)
struct U*5346184155 : USceneComponent {
	struct ULevelBlockType* LevelBlockType[0x08]; // 0x4d0(0x08)
	bool *57b2ff5b6d; // 0x4d8(0x01)
	enum class EPreviewIndexType *ecb03a77e5; // 0x4d9(0x01)
	char pad_4DA[0x2]; // 0x4da(0x02)
	int32 *f49345ab6d[0x04]; // 0x4dc(0x04)
};

// Class Engine.LightComponentBase
// Size: 0x500 (Inherited: 0x4d0)
struct ULightComponentBase : USceneComponent {
	struct FGuid *e46ebe2d1f[0x10]; // 0x4d0(0x10)
	float Brightness[0x04]; // 0x4e0(0x04)
	float Intensity[0x04]; // 0x4e4(0x04)
	struct FColor LightColor[0x04]; // 0x4e8(0x04)
	char bAffectsWorld : 1; // 0x4ec(0x01)
	char CastShadows : 1; // 0x4ec(0x01)
	char CastStaticShadows : 1; // 0x4ec(0x01)
	char CastDynamicShadows : 1; // 0x4ec(0x01)
	char bAffectTranslucentLighting : 1; // 0x4ec(0x01)
	char bCastVolumetricShadow : 1; // 0x4ec(0x01)
	char pad_4EC_6 : 2; // 0x4ec(0x01)
	char pad_4ED[0x3]; // 0x4ed(0x03)
	float IndirectLightingIntensity[0x04]; // 0x4f0(0x04)
	float VolumetricScatteringIntensity[0x04]; // 0x4f4(0x04)
	bool *bbb8e98bf1; // 0x4f8(0x01)
	char pad_4F9[0x7]; // 0x4f9(0x07)

	void *76fb84d718(); // Function Engine.LightComponentBase.*76fb84d718 // Final|Native|Public|BlueprintCallable // @ game+0x6624088
	void *7bd92f85c8(); // Function Engine.LightComponentBase.*7bd92f85c8 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66021ac
	void *90703c3381(); // Function Engine.LightComponentBase.*90703c3381 // Final|Native|Public|BlueprintCallable // @ game+0x6623ff4
};

// Class Engine.LightComponent
// Size: 0x5f0 (Inherited: 0x500)
struct ULightComponent : ULightComponentBase {
	float Temperature[0x04]; // 0x500(0x04)
	float MaxDrawDistance[0x04]; // 0x504(0x04)
	float *e05b544017[0x04]; // 0x508(0x04)
	char bUseTemperature : 1; // 0x50c(0x01)
	char pad_50C_1 : 7; // 0x50c(0x01)
	char pad_50D[0x3]; // 0x50d(0x03)
	int32 ShadowMapChannel[0x04]; // 0x510(0x04)
	char pad_514[0x4]; // 0x514(0x04)
	float MinRoughness[0x04]; // 0x518(0x04)
	float ShadowResolutionScale[0x04]; // 0x51c(0x04)
	float ShadowBias[0x04]; // 0x520(0x04)
	float ShadowSharpen[0x04]; // 0x524(0x04)
	float ContactShadowLength[0x04]; // 0x528(0x04)
	char InverseSquaredFalloff : 1; // 0x52c(0x01)
	char CastTranslucentShadows : 1; // 0x52c(0x01)
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x52c(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x52c(0x01)
	char pad_52C_4 : 4; // 0x52c(0x01)
	char pad_52D[0x3]; // 0x52d(0x03)
	struct FLightingChannels LightingChannels[0x03]; // 0x530(0x03)
	char pad_533[0x5]; // 0x533(0x05)
	struct UMaterialInterface* LightFunctionMaterial[0x08]; // 0x538(0x08)
	struct FVector LightFunctionScale[0x0c]; // 0x540(0x0c)
	char pad_54C[0x4]; // 0x54c(0x04)
	struct U*eafb25fbf7* IESTexture[0x08]; // 0x550(0x08)
	char bUseIESBrightness : 1; // 0x558(0x01)
	char pad_558_1 : 7; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	float IESBrightnessScale[0x04]; // 0x55c(0x04)
	float LightFunctionFadeDistance[0x04]; // 0x560(0x04)
	float DisabledBrightness[0x04]; // 0x564(0x04)
	char bEnableLightShaftBloom : 1; // 0x568(0x01)
	char pad_568_1 : 7; // 0x568(0x01)
	char pad_569[0x3]; // 0x569(0x03)
	float BloomScale[0x04]; // 0x56c(0x04)
	float BloomThreshold[0x04]; // 0x570(0x04)
	struct FColor BloomTint[0x04]; // 0x574(0x04)
	bool bUseRayTracedDistanceFieldShadows; // 0x578(0x01)
	char pad_579[0x3]; // 0x579(0x03)
	float RayStartOffsetDepthScale[0x04]; // 0x57c(0x04)
	char pad_580[0x70]; // 0x580(0x70)

	void *3ae05c869f(struct FLinearColor* NewLightColor); // Function Engine.LightComponent.*3ae05c869f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6628ecc
	void *868d475353(); // Function Engine.LightComponent.*868d475353 // Final|Native|Public|BlueprintCallable // @ game+0x662294c
	void *8679d2d356(); // Function Engine.LightComponent.*8679d2d356 // Final|Native|Public|BlueprintCallable // @ game+0x662e974
	void *fc075437c2(); // Function Engine.LightComponent.*fc075437c2 // Final|Native|Public|BlueprintCallable // @ game+0x66228b4
	void *6599cd1990(); // Function Engine.LightComponent.*6599cd1990 // Final|Native|Public|BlueprintCallable // @ game+0x6629120
	void *f6d83a4d6a(); // Function Engine.LightComponent.*f6d83a4d6a // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66292e0
	void *cf13058ac5(); // Function Engine.LightComponent.*cf13058ac5 // Final|Native|Public|BlueprintCallable // @ game+0x6620768
	void SetIntensity(); // Function Engine.LightComponent.SetIntensity // Final|Native|Public|BlueprintCallable // @ game+0x6628ab0
	void *bd20a9e06c(); // Function Engine.LightComponent.*bd20a9e06c // Final|Native|Public|BlueprintCallable // @ game+0x6620838
	void *9de45acbe1(); // Function Engine.LightComponent.*9de45acbe1 // Final|Native|Public|BlueprintCallable // @ game+0x6630114
	void *c2b67b17df(); // Function Engine.LightComponent.*c2b67b17df // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66229e4
	void *691096e42e(); // Function Engine.LightComponent.*691096e42e // Final|Native|Public|BlueprintCallable // @ game+0x66282ec
	void *d291a7547b(); // Function Engine.LightComponent.*d291a7547b // Final|Native|Public|BlueprintCallable // @ game+0x66281a0
	void *9d1fc8b0ef(); // Function Engine.LightComponent.*9d1fc8b0ef // Final|Native|Public|BlueprintCallable // @ game+0x6629250
	void *00c561ca96(); // Function Engine.LightComponent.*00c561ca96 // Final|Native|Public|BlueprintCallable // @ game+0x66263c8
	void *e23055f8d8(); // Function Engine.LightComponent.*e23055f8d8 // Final|Native|Public|BlueprintCallable // @ game+0x66291b8
};

// Class Engine.DirectionalLightComponent
// Size: 0x670 (Inherited: 0x5f0)
struct UDirectionalLightComponent : ULightComponent {
	char bEnableLightShaftOcclusion : 1; // 0x5f0(0x01)
	char pad_5F0_1 : 7; // 0x5f0(0x01)
	char pad_5F1[0x3]; // 0x5f1(0x03)
	float OcclusionMaskDarkness[0x04]; // 0x5f4(0x04)
	float OcclusionDepthRange[0x04]; // 0x5f8(0x04)
	struct FVector LightShaftOverrideDirection[0x0c]; // 0x5fc(0x0c)
	float WholeSceneDynamicShadowRadius[0x04]; // 0x608(0x04)
	float DynamicShadowDistanceMovableLight[0x04]; // 0x60c(0x04)
	float DynamicShadowDistanceStationaryLight[0x04]; // 0x610(0x04)
	int32 DynamicShadowCascades[0x04]; // 0x614(0x04)
	float CascadeDistributionExponent[0x04]; // 0x618(0x04)
	float CascadeTransitionFraction[0x04]; // 0x61c(0x04)
	float ShadowDistanceFadeoutFraction[0x04]; // 0x620(0x04)
	char bUseInsetShadowsForMovableObjects : 1; // 0x624(0x01)
	char pad_624_1 : 7; // 0x624(0x01)
	char pad_625[0x3]; // 0x625(0x03)
	int32 FarShadowCascadeCount[0x04]; // 0x628(0x04)
	float FarShadowDistance[0x04]; // 0x62c(0x04)
	float DistanceFieldShadowDistance[0x04]; // 0x630(0x04)
	float LightSourceAngle[0x04]; // 0x634(0x04)
	float TraceDistance[0x04]; // 0x638(0x04)
	struct F*f6ce8630d2 LightmassSettings[0x10]; // 0x63c(0x10)
	char bCastModulatedShadows : 1; // 0x64c(0x01)
	char pad_64C_1 : 7; // 0x64c(0x01)
	char pad_64D[0x3]; // 0x64d(0x03)
	struct FColor ModulatedShadowColor[0x04]; // 0x650(0x04)
	char bUsedAsAtmosphereSunLight : 1; // 0x654(0x01)
	char bUseGridShadow : 1; // 0x654(0x01)
	char pad_654_2 : 6; // 0x654(0x01)
	char pad_655[0x3]; // 0x655(0x03)
	struct TArray<struct F*6cf238dc5d> GridShadowSplitSettings[0x10]; // 0x658(0x10)
	char pad_668[0x8]; // 0x668(0x08)

	void *4031da260d(); // Function Engine.DirectionalLightComponent.*4031da260d // Final|Native|Public|BlueprintCallable // @ game+0x6626018
	void *2749863f5e(); // Function Engine.DirectionalLightComponent.*2749863f5e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6629380
	void *f7046d6f65(); // Function Engine.DirectionalLightComponent.*f7046d6f65 // Final|Native|Public|BlueprintCallable // @ game+0x662c6e4
	void *95e8f6b6af(); // Function Engine.DirectionalLightComponent.*95e8f6b6af // Final|Native|Public|BlueprintCallable // @ game+0x6625ecc
	void *3978b8bd7d(); // Function Engine.DirectionalLightComponent.*3978b8bd7d // Final|Native|Public|BlueprintCallable // @ game+0x6623de0
	void *ed0488d7a3(); // Function Engine.DirectionalLightComponent.*ed0488d7a3 // Final|Native|Public|BlueprintCallable // @ game+0x6626490
	void *118185690d(); // Function Engine.DirectionalLightComponent.*118185690d // Final|Native|Public|BlueprintCallable // @ game+0x6625f6c
	void *b43f432a14(); // Function Engine.DirectionalLightComponent.*b43f432a14 // Final|Native|Public|BlueprintCallable // @ game+0x6623d34
	void *788ab0e4e6(); // Function Engine.DirectionalLightComponent.*788ab0e4e6 // Final|Native|Public|BlueprintCallable // @ game+0x662ae48
};

// Class Engine.PointLightComponent
// Size: 0x620 (Inherited: 0x5f0)
struct UPointLightComponent : ULightComponent {
	float Radius[0x04]; // 0x5f0(0x04)
	float AttenuationRadius[0x04]; // 0x5f4(0x04)
	char bUseInverseSquaredFalloff : 1; // 0x5f8(0x01)
	char pad_5F8_1 : 7; // 0x5f8(0x01)
	char pad_5F9[0x3]; // 0x5f9(0x03)
	float LightFalloffExponent[0x04]; // 0x5fc(0x04)
	float SourceRadius[0x04]; // 0x600(0x04)
	float SourceLength[0x04]; // 0x604(0x04)
	struct F*d88ff4a89c LightmassSettings[0x0c]; // 0x608(0x0c)
	char pad_614[0xc]; // 0x614(0x0c)

	void *22fb9fc0a4(); // Function Engine.PointLightComponent.*22fb9fc0a4 // Final|Native|Public|BlueprintCallable // @ game+0x6629088
	void SetAttenuationRadius(); // Function Engine.PointLightComponent.SetAttenuationRadius // Final|Native|Public|BlueprintCallable // @ game+0x6622568
	void *d8f041b412(); // Function Engine.PointLightComponent.*d8f041b412 // Final|Native|Public|BlueprintCallable // @ game+0x662ce3c
	void *c140e10cfb(); // Function Engine.PointLightComponent.*c140e10cfb // Final|Native|Public|BlueprintCallable // @ game+0x662cda4
};

// Class Engine.SpotLightComponent
// Size: 0x630 (Inherited: 0x620)
struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle[0x04]; // 0x618(0x04)
	float OuterConeAngle[0x04]; // 0x61c(0x04)
	float *5bfe3d221f[0x04]; // 0x620(0x04)
	char pad_62C[0x4]; // 0x62c(0x04)

	void *ec34a6659e(); // Function Engine.SpotLightComponent.*ec34a6659e // Final|Native|Public|BlueprintCallable // @ game+0x662b294
	void *f6168804ed(); // Function Engine.SpotLightComponent.*f6168804ed // Final|Native|Public|BlueprintCallable // @ game+0x662841c
};

// Class Engine.SkyLightComponent
// Size: 0x6b0 (Inherited: 0x500)
struct USkyLightComponent : ULightComponentBase {
	enum class *b8c75a7ff8 SourceType; // 0x500(0x01)
	char pad_501[0x7]; // 0x501(0x07)
	struct UTextureCube* Cubemap[0x08]; // 0x508(0x08)
	float SourceCubemapAngle[0x04]; // 0x510(0x04)
	int32 CubemapResolution[0x04]; // 0x514(0x04)
	float SkyDistanceThreshold[0x04]; // 0x518(0x04)
	bool bCaptureEmissiveOnly; // 0x51c(0x01)
	bool bLowerHemisphereIsBlack; // 0x51d(0x01)
	char pad_51E[0x2]; // 0x51e(0x02)
	struct FLinearColor LowerHemisphereColor[0x10]; // 0x520(0x10)
	float OcclusionMaxDistance[0x04]; // 0x530(0x04)
	float Contrast[0x04]; // 0x534(0x04)
	float OcclusionExponent[0x04]; // 0x538(0x04)
	float MinOcclusion[0x04]; // 0x53c(0x04)
	struct FColor OcclusionTint[0x04]; // 0x540(0x04)
	enum class *b509d46bab OcclusionCombineMode; // 0x544(0x01)
	char pad_545[0xa3]; // 0x545(0xa3)
	struct UTextureCube* *d91e5e875c[0x08]; // 0x5e8(0x08)
	char pad_5F0[0xc0]; // 0x5f0(0xc0)

	void *b127fe2659(); // Function Engine.SkyLightComponent.*b127fe2659 // Final|Native|Public|BlueprintCallable // @ game+0x6624f9c
	void *691096e42e(); // Function Engine.SkyLightComponent.*691096e42e // Final|Native|Public|BlueprintCallable // @ game+0x6628384
	void *d4901ecb5d(); // Function Engine.SkyLightComponent.*d4901ecb5d // Final|Native|Public|BlueprintCallable // @ game+0x662ad18
	void *bb45bef29d(); // Function Engine.SkyLightComponent.*bb45bef29d // Final|Native|Public|BlueprintCallable // @ game+0x662adb0
	void *d714490dfd(); // Function Engine.SkyLightComponent.*d714490dfd // Final|Native|Public|BlueprintCallable // @ game+0x662a53c
	void *944b58f606(); // Function Engine.SkyLightComponent.*944b58f606 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x662aee0
	void *9de45acbe1(); // Function Engine.SkyLightComponent.*9de45acbe1 // Final|Native|Public|BlueprintCallable // @ game+0x66301ac
	void *1ab14363aa(); // Function Engine.SkyLightComponent.*1ab14363aa // Final|Native|Public|BlueprintCallable // @ game+0x661e60c
	void SetIntensity(); // Function Engine.SkyLightComponent.SetIntensity // Final|Native|Public|BlueprintCallable // @ game+0x6628b48
	struct UTextureCube* *8cb89e598b(); // Function Engine.SkyLightComponent.*8cb89e598b // Final|Native|Public|BlueprintCallable // @ game+0x6625058
	void *3ae05c869f(); // Function Engine.SkyLightComponent.*3ae05c869f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6628fc0
};

// Class Engine.*b6b8d1a87d
// Size: 0x4e0 (Inherited: 0x4d0)
struct U*b6b8d1a87d : USceneComponent {
	struct UBoxComponent* *7f1b15fd50[0x08]; // 0x4d0(0x08)
	char pad_4D8[0x8]; // 0x4d8(0x08)
};

// Class Engine.*a8620f93ee
// Size: 0x500 (Inherited: 0x4d0)
struct U*a8620f93ee : USceneComponent {
	struct F*5743cf513c Node[0x18]; // 0x4d0(0x18)
	struct U*a8620f93ee* *8c6acd02dd[0x08]; // 0x4e8(0x08)
	struct U*a8620f93ee* *a6de6d861c[0x08]; // 0x4f0(0x08)
	char pad_4F8[0x8]; // 0x4f8(0x08)
};

// Class Engine.PhysicsConstraintComponent
// Size: 0x710 (Inherited: 0x4d0)
struct UPhysicsConstraintComponent : USceneComponent {
	struct AActor* *a87374cdb7[0x08]; // 0x4d0(0x08)
	struct F*e5dcca1adb *535e2f0bd4[0x08]; // 0x4d8(0x08)
	struct AActor* *03e393dba5[0x08]; // 0x4e0(0x08)
	struct F*e5dcca1adb *d3c70b7432[0x08]; // 0x4e8(0x08)
	char pad_4F0[0x10]; // 0x4f0(0x10)
	struct UPhysicsConstraintTemplate* ConstraintSetup[0x08]; // 0x500(0x08)
	struct FMulticastDelegate OnConstraintBroken[0x10]; // 0x508(0x10)
	char pad_518[0x8]; // 0x518(0x08)
	struct FConstraintInstance ConstraintInstance[0x1f0]; // 0x520(0x1f0)

	void *d199aa6c76(); // Function Engine.PhysicsConstraintComponent.*d199aa6c76 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65fe624
	bool *3bae443b37(); // Function Engine.PhysicsConstraintComponent.*3bae443b37 // Final|Native|Public|BlueprintCallable // @ game+0x6629b78
	void *884bb41a1c(); // Function Engine.PhysicsConstraintComponent.*884bb41a1c // Final|Native|Public|BlueprintCallable // @ game+0x66218d8
	void *67aa790742(); // Function Engine.PhysicsConstraintComponent.*67aa790742 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6621b94
	bool *dcfbba44b4(); // Function Engine.PhysicsConstraintComponent.*dcfbba44b4 // Final|Native|Public|BlueprintCallable // @ game+0x6621aa0
	bool *d95c8fa483(); // Function Engine.PhysicsConstraintComponent.*d95c8fa483 // Final|Native|Public|BlueprintCallable // @ game+0x66213c8
	void *845292f6b4(enum class *24096ec337 MotionType); // Function Engine.PhysicsConstraintComponent.*845292f6b4 // Final|Native|Public|BlueprintCallable // @ game+0x66216f0
	void *495e5a54a3(enum class *24096ec337 MotionType); // Function Engine.PhysicsConstraintComponent.*495e5a54a3 // Final|Native|Public|BlueprintCallable // @ game+0x66215fc
	enum class *c0b35c19fa *ee82f0a22d(); // Function Engine.PhysicsConstraintComponent.*ee82f0a22d // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6624bcc
	enum class *57312135a8 *9aa0ac3383(); // Function Engine.PhysicsConstraintComponent.*9aa0ac3383 // Final|Native|Public|BlueprintCallable // @ game+0x6629eb8
	void *ba9e244613(bool bEnableDriveY); // Function Engine.PhysicsConstraintComponent.*ba9e244613 // Final|Native|Public|BlueprintCallable // @ game+0x6629888
	float *a47d368dc3(); // Function Engine.PhysicsConstraintComponent.*a47d368dc3 // Final|Native|Public|BlueprintCallable // @ game+0x6621124
	struct FName *a969a6a43f(struct UPrimitiveComponent** Component2); // Function Engine.PhysicsConstraintComponent.*a969a6a43f // Final|Native|Public|BlueprintCallable // @ game+0x66247a4
	void *4316c99862(); // Function Engine.PhysicsConstraintComponent.*4316c99862 // Final|Native|Public|BlueprintCallable // @ game+0x6625b64
	void *29a2d28776(); // Function Engine.PhysicsConstraintComponent.*29a2d28776 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66214bc
	void *3c052707ec(); // Function Engine.PhysicsConstraintComponent.*3c052707ec // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65fe5bc
	struct FVector *fddfbf4441(); // Function Engine.PhysicsConstraintComponent.*fddfbf4441 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65fde80
	void *cbb0473e6b(); // Function Engine.PhysicsConstraintComponent.*cbb0473e6b // Final|Native|Public|BlueprintCallable // @ game+0x662105c
	void *1d655b55d9(float* PositionStrength); // Function Engine.PhysicsConstraintComponent.*1d655b55d9 // Final|Native|Public|BlueprintCallable // @ game+0x6629764
	enum class *57312135a8 *b44e54963e(); // Function Engine.PhysicsConstraintComponent.*b44e54963e // Final|Native|Public|BlueprintCallable // @ game+0x6629fac
	void *00f7312c4d(enum class *24096ec337 ConstraintType); // Function Engine.PhysicsConstraintComponent.*00f7312c4d // Final|Native|Public|BlueprintCallable // @ game+0x66217e4
	void *2e814d517c(); // Function Engine.PhysicsConstraintComponent.*2e814d517c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65fe5f0
	void *fc79f3ea57(); // Function Engine.PhysicsConstraintComponent.*fc79f3ea57 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66299c0
	struct FVector *9be04bf3ee(); // Function Engine.PhysicsConstraintComponent.*9be04bf3ee // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6624d00
	void *dc7c84adba(); // Function Engine.PhysicsConstraintComponent.*dc7c84adba // Final|Native|Public|BlueprintCallable // @ game+0x66219cc
	void *1f15ebd334(bool bEnableTwistDrive); // Function Engine.PhysicsConstraintComponent.*1f15ebd334 // Final|Native|Public|BlueprintCallable // @ game+0x662b070
	void *d9e7603b72(); // Function Engine.PhysicsConstraintComponent.*d9e7603b72 // Final|Native|Public|BlueprintCallable // @ game+0x65ece64
	void *234627824a(); // Function Engine.PhysicsConstraintComponent.*234627824a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6629cb0
	enum class *c0b35c19fa *bf3b671f96(); // Function Engine.PhysicsConstraintComponent.*bf3b671f96 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6624e50
	void *b9a506cca8(enum class *57312135a8 ConstraintType); // Function Engine.PhysicsConstraintComponent.*b9a506cca8 // Final|Native|Public|BlueprintCallable // @ game+0x6629dc4
	void *64360f1059(); // Function Engine.PhysicsConstraintComponent.*64360f1059 // Final|Native|Public|BlueprintCallable // @ game+0x662afa0
};

// Class Engine.*5e6e9dbb30
// Size: 0x500 (Inherited: 0x4d0)
struct U*5e6e9dbb30 : USceneComponent {
	float SpringStiffness[0x04]; // 0x4d0(0x04)
	float SpringDamping[0x04]; // 0x4d4(0x04)
	float SpringLengthAtRest[0x04]; // 0x4d8(0x04)
	float SpringRadius[0x04]; // 0x4dc(0x04)
	enum class ECollisionChannel SpringChannel; // 0x4e0(0x01)
	bool bIgnoreSelf; // 0x4e1(0x01)
	char pad_4E2[0x2]; // 0x4e2(0x02)
	float SpringCompression[0x04]; // 0x4e4(0x04)
	char pad_4E8[0x18]; // 0x4e8(0x18)

	void *630260583c(); // Function Engine.*5e6e9dbb30.*630260583c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6605da4
	void *6a05449e8f(); // Function Engine.*5e6e9dbb30.*6a05449e8f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6602d18
	void *3d701f7845(); // Function Engine.*5e6e9dbb30.*3d701f7845 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6605d40
	void *5eb131ba88(); // Function Engine.*5e6e9dbb30.*5eb131ba88 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6605d74
};

// Class Engine.PhysicsThrusterComponent
// Size: 0x4e0 (Inherited: 0x4d0)
struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength[0x04]; // 0x4d0(0x04)
	char pad_4D4[0xc]; // 0x4d4(0x0c)
};

// Class Engine.PostProcessComponent
// Size: 0xa60 (Inherited: 0x4d0)
struct UPostProcessComponent : USceneComponent {
	char pad_4D0[0x10]; // 0x4d0(0x10)
	struct FPostProcessSettings Settings[0x570]; // 0x4e0(0x570)
	float Priority[0x04]; // 0xa50(0x04)
	float BlendRadius[0x04]; // 0xa54(0x04)
	float BlendWeight[0x04]; // 0xa58(0x04)
	char bEnabled : 1; // 0xa5c(0x01)
	char bUnbound : 1; // 0xa5c(0x01)
	char pad_A5C_2 : 6; // 0xa5c(0x01)
	char pad_A5D[0x3]; // 0xa5d(0x03)

	TScriptInterface<struct UBlendableInterface> *8480288ca6(); // Function Engine.PostProcessComponent.*8480288ca6 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x65e4e10
};

// Class Engine.BrushComponent
// Size: 0xa20 (Inherited: 0xa00)
struct UBrushComponent : UPrimitiveComponent {
	struct UModel* Brush[0x08]; // 0x9f8(0x08)
	struct UBodySetup* BrushBodySetup[0x08]; // 0xa00(0x08)
	struct FVector PrePivot[0x0c]; // 0xa08(0x0c)
	char pad_A1C[0x4]; // 0xa1c(0x04)
};

// Class Engine.*553c10f440
// Size: 0xa30 (Inherited: 0xa00)
struct U*553c10f440 : UPrimitiveComponent {
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials[0x10]; // 0xa00(0x10)
	struct TArray<struct F*198aa9067f> *a88ca1f9f2[0x10]; // 0xa10(0x10)
	struct UBodySetup* BodySetup[0x08]; // 0xa20(0x08)
	char pad_A28[0x8]; // 0xa28(0x08)
};

// Class Engine.*4d37f15df7
// Size: 0xa20 (Inherited: 0xa00)
struct U*4d37f15df7 : UPrimitiveComponent {
	struct FColor FrustumColor[0x04]; // 0x9f8(0x04)
	float FrustumAngle[0x04]; // 0x9fc(0x04)
	float FrustumAspectRatio[0x04]; // 0xa00(0x04)
	float FrustumStartDist[0x04]; // 0xa04(0x04)
	float FrustumEndDist[0x04]; // 0xa08(0x04)
	struct UTexture* Texture[0x08]; // 0xa10(0x08)
	char pad_A1C[0x4]; // 0xa1c(0x04)
};

// Class Engine.*f7a1ed2b6f
// Size: 0xa10 (Inherited: 0xa00)
struct U*f7a1ed2b6f : UPrimitiveComponent {
	struct TArray<struct FVector2D> Points[0x10]; // 0x9f8(0x10)
};

// Class Engine.GrassVolumeComponent
// Size: 0xa30 (Inherited: 0xa30)
struct UGrassVolumeComponent : UBoxComponent {
};

// Class Engine.GrassVolumesContainerComponent
// Size: 0xa10 (Inherited: 0xa00)
struct UGrassVolumesContainerComponent : UPrimitiveComponent {
	struct TArray<struct F*bd5307dec7> *8f5ff23a1e[0x10]; // 0x9f8(0x10)
};

// Class Engine.*cf9e21c072
// Size: 0xa50 (Inherited: 0xa00)
struct U*cf9e21c072 : UPrimitiveComponent {
	struct ALandscape* *d1e42a94ee[0x1c]; // 0x9f8(0x1c)
	struct ALandscape* *e3516c06b6[0x1c]; // 0xa14(0x1c)
	struct UTexture2D* *619ed7e884[0x08]; // 0xa30(0x08)
	struct FVector2D Extent[0x08]; // 0xa38(0x08)
	struct FIntPoint *c0f1b47900[0x08]; // 0xa40(0x08)
	char *b6abf7a155 : 1; // 0xa48(0x01)
	char *6df48ec429 : 1; // 0xa48(0x01)
	char *99f08aeeb4 : 1; // 0xa48(0x01)
	char *7f802f5da5 : 1; // 0xa48(0x01)
};

// Class Engine.*21d3a5fd2a
// Size: 0xa40 (Inherited: 0xa00)
struct U*21d3a5fd2a : UPrimitiveComponent {
	char pad_A00[0x40]; // 0xa00(0x40)
};

// Class Engine.MaterialBillboardComponent
// Size: 0xa10 (Inherited: 0xa00)
struct UMaterialBillboardComponent : UPrimitiveComponent {
	struct TArray<struct F*b2c650cd74> Elements[0x10]; // 0x9f8(0x10)

	float *23d22a159d(); // Function Engine.MaterialBillboardComponent.*23d22a159d // Final|Native|Public|BlueprintCallable // @ game+0x65e3d24
	void *83129beb88(); // Function Engine.MaterialBillboardComponent.*83129beb88 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66260c4
};

// Class Engine.*5a56f33609
// Size: 0xd80 (Inherited: 0xca0)
struct U*5a56f33609 : USkinnedMeshComponent {
	char pad_CA0[0xe0]; // 0xca0(0xe0)

	void *49d6bdc963(struct FName* BoneName); // Function Engine.*5a56f33609.*49d6bdc963 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6622b80
	void *98d8955f07(); // Function Engine.*5a56f33609.*98d8955f07 // Final|Native|Public|BlueprintCallable // @ game+0x661edb4
	struct FName *281bc23f3c(enum class EBoneSpaces BoneSpace); // Function Engine.*5a56f33609.*281bc23f3c // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65fd6b0
	void *590d557955(struct FName* BoneName); // Function Engine.*5a56f33609.*590d557955 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65fd910
	void *70af42806d(); // Function Engine.*5a56f33609.*70af42806d // Final|Native|Public|BlueprintCallable // @ game+0x65f3b30
	enum class EBoneSpaces *da19df2aa7(); // Function Engine.*5a56f33609.*da19df2aa7 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65fd7e0
	void *807d364239(struct FName* BoneName); // Function Engine.*5a56f33609.*807d364239 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6622cbc
	struct FVector *2343c04171(); // Function Engine.*5a56f33609.*2343c04171 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6622e48
	struct FTransform *82de5bdc85(); // Function Engine.*5a56f33609.*82de5bdc85 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6622f84
	void *47a6712309(struct FName* BoneName); // Function Engine.*5a56f33609.*47a6712309 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65fd3fc
};

// Class Engine.SplineMeshComponent
// Size: 0xc40 (Inherited: 0xba0)
struct USplineMeshComponent : UStaticMeshComponent {
	char pad_BA0[0x8]; // 0xba0(0x08)
	struct F*17fabde441 SplineParams[0x58]; // 0xba8(0x58)
	struct FVector SplineUpDir[0x0c]; // 0xc00(0x0c)
	char *38957584f2 : 1; // 0xc0c(0x01)
	char *b35174f1fd : 1; // 0xc0c(0x01)
	char pad_C0C_2 : 6; // 0xc0c(0x01)
	char pad_C0D[0x3]; // 0xc0d(0x03)
	enum class ESplineMeshAxis *4b56af8107; // 0xc10(0x01)
	char pad_C11[0x3]; // 0xc11(0x03)
	float *290d653bf6[0x04]; // 0xc14(0x04)
	float *ab7152a024[0x04]; // 0xc18(0x04)
	char pad_C1C[0x4]; // 0xc1c(0x04)
	struct UBodySetup* BodySetup[0x08]; // 0xc20(0x08)
	struct FGuid *7f9d552bfc[0x10]; // 0xc28(0x10)
	char *bc66eed25b : 1; // 0xc38(0x01)
	char pad_C38_1 : 7; // 0xc38(0x01)
	char pad_C39[0x7]; // 0xc39(0x07)

	void *d7d47798c9(); // Function Engine.SplineMeshComponent.*d7d47798c9 // Final|Native|Public|BlueprintCallable // @ game+0x66278cc
	void *c2c849ba9e(); // Function Engine.SplineMeshComponent.*c2c849ba9e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6605e5c
	void *08ddeb4250(); // Function Engine.SplineMeshComponent.*08ddeb4250 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65ff820
	void *675f4b0da8(); // Function Engine.SplineMeshComponent.*675f4b0da8 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x662d8f0
	void *e30b178ab0(); // Function Engine.SplineMeshComponent.*e30b178ab0 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66269ec
	struct FVector *605dd16acc(); // Function Engine.SplineMeshComponent.*605dd16acc // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x662dce8
	struct FVector2D *2857ab6126(); // Function Engine.SplineMeshComponent.*2857ab6126 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66265f4
	void *96a7b9fa22(); // Function Engine.SplineMeshComponent.*96a7b9fa22 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65ff7a8
	void *716957a742(); // Function Engine.SplineMeshComponent.*716957a742 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x587643c
	void *7883ca4072(); // Function Engine.SplineMeshComponent.*7883ca4072 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5876554
	struct FVector *121c3e7b23(); // Function Engine.SplineMeshComponent.*121c3e7b23 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x662d9f0
	void *7524a81f33(); // Function Engine.SplineMeshComponent.*7524a81f33 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65ff7f8
	void *810420ada6(); // Function Engine.SplineMeshComponent.*810420ada6 // Final|Native|Public|BlueprintCallable // @ game+0x6639678
	void *b44ce596c4(float* InBoundaryMax); // Function Engine.SplineMeshComponent.*b44ce596c4 // Final|Native|Public|BlueprintCallable // @ game+0x66233f0
	void *7e0834bd0d(); // Function Engine.SplineMeshComponent.*7e0834bd0d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6605de4
	void *3aa01276a0(); // Function Engine.SplineMeshComponent.*3aa01276a0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6605d18
	void *e51c630c89(struct USplineComponent** UpSplineComponent); // Function Engine.SplineMeshComponent.*e51c630c89 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65ee10c
	void *ce9d913c2e(); // Function Engine.SplineMeshComponent.*ce9d913c2e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6605e34
	float *fc83d89711(); // Function Engine.SplineMeshComponent.*fc83d89711 // Final|Native|Public|BlueprintCallable // @ game+0x662daec
	void *3bccd62198(float* EndRoll); // Function Engine.SplineMeshComponent.*3bccd62198 // Final|Native|Public|BlueprintCallable // @ game+0x66267f0
	void *fa49d52868(); // Function Engine.SplineMeshComponent.*fa49d52868 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ffa04
	struct FVector *cda1f8fbb8(); // Function Engine.SplineMeshComponent.*cda1f8fbb8 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x662d3c8
	void *70f07cf397(struct FVector2D* StartScale); // Function Engine.SplineMeshComponent.*70f07cf397 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x662dbe8
	void *edf1cae332(); // Function Engine.SplineMeshComponent.*edf1cae332 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5876454
	struct FVector *20d7d25c75(); // Function Engine.SplineMeshComponent.*20d7d25c75 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x662d58c
	void *aa50a71360(); // Function Engine.SplineMeshComponent.*aa50a71360 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x65ff7d0
	void *86cc164a35(); // Function Engine.SplineMeshComponent.*86cc164a35 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6605e0c
	void *a84e55c2bc(); // Function Engine.SplineMeshComponent.*a84e55c2bc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x58787e4
	float *7d0b9d4594(); // Function Engine.SplineMeshComponent.*7d0b9d4594 // Final|Native|Public|BlueprintCallable // @ game+0x66235e0
	struct FVector2D *78f4eda6bc(); // Function Engine.SplineMeshComponent.*78f4eda6bc // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66268ec
	void *69de4b7cd6(struct FVector* EndPos); // Function Engine.SplineMeshComponent.*69de4b7cd6 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66266f4
};

// Class Engine.*c6e5c261f5
// Size: 0xc20 (Inherited: 0xba0)
struct U*c6e5c261f5 : UStaticMeshComponent {
	char pad_BA0[0x8]; // 0xba0(0x08)
	struct TArray<struct F*da4dd21212> PerInstanceSMData[0x10]; // 0xba8(0x10)
	struct FVector SplineUpDir[0x0c]; // 0xbb8(0x0c)
	char *b35174f1fd : 1; // 0xbc4(0x01)
	char pad_BC4_1 : 7; // 0xbc4(0x01)
	char pad_BC5[0x3]; // 0xbc5(0x03)
	enum class ESplineMeshAxis *4b56af8107; // 0xbc8(0x01)
	char pad_BC9[0x3]; // 0xbc9(0x03)
	float *290d653bf6[0x04]; // 0xbcc(0x04)
	float *ab7152a024[0x04]; // 0xbd0(0x04)
	struct FVector *c87016c7a6[0x0c]; // 0xbd4(0x0c)
	int32 InstanceStartCullDistance[0x04]; // 0xbe0(0x04)
	int32 InstanceEndCullDistance[0x04]; // 0xbe4(0x04)
	char pad_BE8[0x18]; // 0xbe8(0x18)
	struct UBodySetup* BodySetup[0x08]; // 0xc00(0x08)
	struct FGuid *7f9d552bfc[0x10]; // 0xc08(0x10)
	uint32 *dd8cbd9a85[0x04]; // 0xc18(0x04)
	char pad_C1C[0x4]; // 0xc1c(0x04)

	void *552630dc35(); // Function Engine.*c6e5c261f5.*552630dc35 // Native|Public|BlueprintCallable // @ game+0x65f1204
	void *7d0b9d4594(float* InBoundaryMin); // Function Engine.*c6e5c261f5.*7d0b9d4594 // Final|Native|Public|BlueprintCallable // @ game+0x66234ec
	void *716957a742(); // Function Engine.*c6e5c261f5.*716957a742 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5878898
	void *d7d47798c9(); // Function Engine.*c6e5c261f5.*d7d47798c9 // Final|Native|Public|BlueprintCallable // @ game+0x66277e0
	void *fa49d52868(); // Function Engine.*c6e5c261f5.*fa49d52868 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65ff9ec
	int32 *e4e17343d9(int32* EndCullDistance); // Function Engine.*c6e5c261f5.*e4e17343d9 // Final|Native|Public|BlueprintCallable // @ game+0x662518c
	void *dc662a2289(int32* InstanceIndex, struct FVector* InSplineUpDir); // Function Engine.*c6e5c261f5.*dc662a2289 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6600e54
	bool *4981f52ac4(); // Function Engine.*c6e5c261f5.*4981f52ac4 // Native|Public|BlueprintCallable // @ game+0x661e7b4
	void *edf1cae332(); // Function Engine.*c6e5c261f5.*edf1cae332 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x58788b0
	void *b44ce596c4(); // Function Engine.*c6e5c261f5.*b44ce596c4 // Final|Native|Public|BlueprintCallable // @ game+0x66232fc
	void *1ff5154222(); // Function Engine.*c6e5c261f5.*1ff5154222 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x660096c
	void *810420ada6(); // Function Engine.*c6e5c261f5.*810420ada6 // Final|Native|Public|BlueprintCallable // @ game+0x6639664
	struct F*17fabde441 *01fde74119(struct FVector* InSplineUpDir); // Function Engine.*c6e5c261f5.*01fde74119 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e4554
	void *82167e78cb(struct FVector* InSplineUpDir); // Function Engine.*c6e5c261f5.*82167e78cb // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e4998
};

// Class Engine.*7593155b31
// Size: 0xba0 (Inherited: 0xba0)
struct U*7593155b31 : UStaticMeshComponent {
};

// Class Engine.Texture
// Size: 0x170 (Inherited: 0x28)
struct UTexture : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FGuid *183c967999[0x10]; // 0x30(0x10)
	int32 LODBias[0x04]; // 0x40(0x04)
	int32 NumCinematicMipLevels[0x04]; // 0x44(0x04)
	int32 GlobalLODBias[0x04]; // 0x48(0x04)
	char SRGB : 1; // 0x4c(0x01)
	char NeverStream : 1; // 0x4c(0x01)
	char *0909ec352d : 1; // 0x4c(0x01)
	char *19c0060f28 : 1; // 0x4c(0x01)
	char *49fa79e20a : 1; // 0x4c(0x01)
	char pad_4C_5 : 3; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32 *400fdb88c8[0x04]; // 0x50(0x04)
	enum class TextureCompressionSettings CompressionSettings; // 0x54(0x01)
	enum class TextureFilter Filter; // 0x55(0x01)
	enum class TextureGroup LODGroup; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct FPerPlatformFloat *a4fd11200d[0x04]; // 0x58(0x04)
	enum class ETextureDownscaleOptions *661cf7b608; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<struct UAssetUserData*> AssetUserData[0x10]; // 0x60(0x10)
	char pad_70[0x100]; // 0x70(0x100)
};

// Class Engine.Texture2D
// Size: 0x260 (Inherited: 0x170)
struct UTexture2D : UTexture {
	int32 *da937aa08b[0x04]; // 0x170(0x04)
	int32 *5f73d3fef5[0x04]; // 0x174(0x04)
	int32 *2429cadece[0x04]; // 0x178(0x04)
	struct FIntPoint *619c8d7688[0x08]; // 0x17c(0x08)
	char pad_184[0x4]; // 0x184(0x04)
	double *426fe36d0f[0x08]; // 0x188(0x08)
	char *7f74237d49 : 1; // 0x190(0x01)
	char *73b1ce0893 : 1; // 0x190(0x01)
	char *cc6b1ee70a : 1; // 0x190(0x01)
	char *7d77e1394c : 1; // 0x190(0x01)
	char *eb1755a62d : 1; // 0x190(0x01)
	char bGlobalForceMipLevelsToBeResident : 1; // 0x190(0x01)
	char *0559d19e79 : 1; // 0x190(0x01)
	char pad_190_7 : 1; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	enum class *8e17248832 AddressX; // 0x194(0x01)
	enum class *8e17248832 AddressY; // 0x195(0x01)
	char pad_196[0xca]; // 0x196(0xca)

	void *81f12d25f2(); // Function Engine.Texture2D.*81f12d25f2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65e9298
	void *6f96b07e02(); // Function Engine.Texture2D.*6f96b07e02 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65e9270
	float *ee937429e4(); // Function Engine.Texture2D.*ee937429e4 // Native|Public|BlueprintCallable // @ game+0xd01600
};

// Class Engine.*d5389daf00
// Size: 0x50 (Inherited: 0x30)
struct U*d5389daf00 : UDataAsset {
	struct UTexture2D* Color[0x20]; // 0x30(0x20)
};

// Class Engine.*662cfb94cd
// Size: 0xa10 (Inherited: 0xa00)
struct U*662cfb94cd : UPrimitiveComponent {
	struct U*d5389daf00* LabelData[0x08]; // 0x9f8(0x08)
	struct FVector2D Offset[0x08]; // 0xa00(0x08)
};

// Class Engine.*b1a1661ef4
// Size: 0xf0 (Inherited: 0x30)
struct U*b1a1661ef4 : UDataAsset {
	struct UTexture2D* Color[0x20]; // 0x30(0x20)
	struct UTexture2D* Normal[0x20]; // 0x50(0x20)
	float Height[0x04]; // 0x70(0x04)
	char pad_74[0x7c]; // 0x74(0x7c)
};

// Class Engine.*443f059e60
// Size: 0xa00 (Inherited: 0xa00)
struct U*443f059e60 : UPrimitiveComponent {
	struct U*b1a1661ef4* ObjectData[0x08]; // 0x9f8(0x08)
};

// Class Engine.*b5dde59565
// Size: 0xa40 (Inherited: 0xa00)
struct U*b5dde59565 : UPrimitiveComponent {
	char pad_A00[0x10]; // 0xa00(0x10)
	struct UBodySetup* *97e3b77ab3[0x08]; // 0xa10(0x08)
	char pad_A18[0x28]; // 0xa18(0x28)
};

// Class Engine.*60819a3369
// Size: 0xa00 (Inherited: 0xa00)
struct U*60819a3369 : UPrimitiveComponent {
};

// Class Engine.NavMeshRenderingComponent
// Size: 0xa10 (Inherited: 0xa00)
struct UNavMeshRenderingComponent : UPrimitiveComponent {
	char pad_A00[0x10]; // 0xa00(0x10)
};

// Class Engine.*bd36eb4837
// Size: 0xa00 (Inherited: 0xa00)
struct U*bd36eb4837 : UPrimitiveComponent {
};

// Class Engine.MeshClippingUnderwaterComponent
// Size: 0xa60 (Inherited: 0xa30)
struct UMeshClippingUnderwaterComponent : UBoxComponent {
	bool bEnabled; // 0xa28(0x01)
	bool bUseParentBounds; // 0xa29(0x01)
	float ExtendUpwards[0x04]; // 0xa2c(0x04)
	float ExtendDownwards[0x04]; // 0xa30(0x04)
	char pad_A3A[0x26]; // 0xa3a(0x26)

	struct FTransform *7b4057a006(); // Function Engine.MeshClippingUnderwaterComponent.*7b4057a006 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6603340
};

// Class Engine.SphereComponent
// Size: 0xa20 (Inherited: 0xa20)
struct USphereComponent : U*18316965f0 {
	float SphereRadius[0x04]; // 0xa18(0x04)

	void *c1adccca50(); // Function Engine.SphereComponent.*c1adccca50 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6605698
	float *c374d8e1b0(); // Function Engine.SphereComponent.*c374d8e1b0 // Final|Native|Public|BlueprintCallable // @ game+0x662cf74
	void *379933b5c6(); // Function Engine.SphereComponent.*379933b5c6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6607a14
	void *980989f2cc(); // Function Engine.SphereComponent.*980989f2cc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6605aec
};

// Class Engine.*d44a97c4a0
// Size: 0xa20 (Inherited: 0xa20)
struct U*d44a97c4a0 : USphereComponent {
};

// Class Engine.TextRenderComponent
// Size: 0xa50 (Inherited: 0xa00)
struct UTextRenderComponent : UPrimitiveComponent {
	struct FText Text[0x18]; // 0x9f8(0x18)
	struct UMaterialInterface* TextMaterial[0x08]; // 0xa10(0x08)
	struct UFont* Font[0x08]; // 0xa18(0x08)
	enum class *0bf9d95cc1 HorizontalAlignment; // 0xa20(0x01)
	enum class *2b9299c64b VerticalAlignment; // 0xa21(0x01)
	struct FColor TextRenderColor[0x04]; // 0xa24(0x04)
	float XScale[0x04]; // 0xa28(0x04)
	float YScale[0x04]; // 0xa2c(0x04)
	float WorldSize[0x04]; // 0xa30(0x04)
	float *28456dbcb8[0x04]; // 0xa34(0x04)
	float HorizSpacingAdjust[0x04]; // 0xa38(0x04)
	float VertSpacingAdjust[0x04]; // 0xa3c(0x04)
	char bAlwaysRenderAsText : 1; // 0xa40(0x01)
	char pad_A46_1 : 7; // 0xa46(0x01)
	char pad_A47[0x9]; // 0xa47(0x09)

	void *b1301de7ad(); // Function Engine.TextRenderComponent.*b1301de7ad // Final|Native|Public|BlueprintCallable // @ game+0x6628108
	void *00d2e1c389(); // Function Engine.TextRenderComponent.*00d2e1c389 // Final|Native|Public|BlueprintCallable // @ game+0x663068c
	void *c4c8cbddcb(); // Function Engine.TextRenderComponent.*c4c8cbddcb // Final|Native|Public|BlueprintCallable // @ game+0x66308a8
	void *05a409fabc(); // Function Engine.TextRenderComponent.*05a409fabc // Final|Native|Public|BlueprintCallable // @ game+0x662f9f4
	void *969301c0cd(); // Function Engine.TextRenderComponent.*969301c0cd // Final|Native|Public|BlueprintCallable // @ game+0x6630808
	void *838091a3af(); // Function Engine.TextRenderComponent.*838091a3af // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x662eba8
	void *ee15d909e6(); // Function Engine.TextRenderComponent.*ee15d909e6 // Final|Native|Public|BlueprintCallable // @ game+0x662eb0c
	void *9b1b54c49f(); // Function Engine.TextRenderComponent.*9b1b54c49f // Final|Native|Public|BlueprintCallable // @ game+0x6627608
	void *6d60402404(); // Function Engine.TextRenderComponent.*6d60402404 // Final|Native|Public|BlueprintCallable // @ game+0x6628068
	void *db4e14c8c3(); // Function Engine.TextRenderComponent.*db4e14c8c3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66067f8
	void *1c2a2f074c(); // Function Engine.TextRenderComponent.*1c2a2f074c // Final|Native|Public|BlueprintCallable // @ game+0x662fbb4
	void *b40e53e851(); // Function Engine.TextRenderComponent.*b40e53e851 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x660688c
	void SetText(); // Function Engine.TextRenderComponent.SetText // Final|Native|Public|BlueprintCallable // @ game+0x662ea0c
	void *22626356ec(); // Function Engine.TextRenderComponent.*22626356ec // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x660de44
};

// Class Engine.VectorFieldComponent
// Size: 0xa20 (Inherited: 0xa00)
struct UVectorFieldComponent : UPrimitiveComponent {
	struct UVectorField* VectorField[0x08]; // 0x9f8(0x08)
	float Intensity[0x04]; // 0xa00(0x04)
	float Tightness[0x04]; // 0xa04(0x04)
	char *1e05733b48 : 1; // 0xa08(0x01)
	char pad_A10_1 : 7; // 0xa10(0x01)
	char pad_A11[0xf]; // 0xa11(0x0f)

	void SetIntensity(); // Function Engine.VectorFieldComponent.SetIntensity // Native|Public|BlueprintCallable // @ game+0x58d9594
};

// Class Engine.RadialForceComponent
// Size: 0x500 (Inherited: 0x4d0)
struct URadialForceComponent : USceneComponent {
	float Radius[0x04]; // 0x4d0(0x04)
	enum class *0baddcb8e4 Falloff; // 0x4d4(0x01)
	char pad_4D5[0x3]; // 0x4d5(0x03)
	float ImpulseStrength[0x04]; // 0x4d8(0x04)
	char bImpulseVelChange : 1; // 0x4dc(0x01)
	char bIgnoreOwningActor : 1; // 0x4dc(0x01)
	char pad_4DC_2 : 6; // 0x4dc(0x01)
	char pad_4DD[0x3]; // 0x4dd(0x03)
	float ForceStrength[0x04]; // 0x4e0(0x04)
	float DestructibleDamage[0x04]; // 0x4e4(0x04)
	struct TArray<enum class EObjectTypeQuery> ObjectTypesToAffect[0x10]; // 0x4e8(0x10)
	char pad_4F8[0x8]; // 0x4f8(0x08)

	void *6bca967b3e(); // Function Engine.RadialForceComponent.*6bca967b3e // Native|Public|BlueprintCallable // @ game+0x661ea1c
	void *cc9e984a17(); // Function Engine.RadialForceComponent.*cc9e984a17 // Native|Public|BlueprintCallable // @ game+0x65e4c5c
	void *3ab0712ed4(); // Function Engine.RadialForceComponent.*3ab0712ed4 // Native|Public|BlueprintCallable // @ game+0x58ce1d0
};

// Class Engine.TextureCube
// Size: 0x2c0 (Inherited: 0x170)
struct UTextureCube : UTexture {
	bool *037ac221f1; // 0x170(0x01)
	char pad_171[0x14f]; // 0x171(0x14f)
};

// Class Engine.ReflectionCaptureComponent
// Size: 0x520 (Inherited: 0x4d0)
struct UReflectionCaptureComponent : USceneComponent {
	struct UBillboardComponent* *b386f3a142[0x08]; // 0x4d0(0x08)
	enum class *d945ee9e5d ReflectionSourceType; // 0x4d8(0x01)
	bool bOverrideCullDistance; // 0x4d9(0x01)
	enum class *a6cf5bae1a IndoorOutdoorMask; // 0x4da(0x01)
	char pad_4DB[0x5]; // 0x4db(0x05)
	struct UTextureCube* Cubemap[0x08]; // 0x4e0(0x08)
	struct UTextureCube* *c636da1c73[0x08]; // 0x4e8(0x08)
	float SourceCubemapAngle[0x04]; // 0x4f0(0x04)
	float Brightness[0x04]; // 0x4f4(0x04)
	struct FVector CaptureOffset[0x0c]; // 0x4f8(0x0c)
	float CullDistance[0x04]; // 0x504(0x04)
	char pad_508[0x18]; // 0x508(0x18)
};

// Class Engine.BoxReflectionCaptureComponent
// Size: 0x520 (Inherited: 0x520)
struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance[0x04]; // 0x518(0x04)
};

// Class Engine.BoxReflectionCaptureSAComponent
// Size: 0x520 (Inherited: 0x520)
struct UBoxReflectionCaptureSAComponent : UBoxReflectionCaptureComponent {
};

// Class Engine.*0ad5a28ca4
// Size: 0x530 (Inherited: 0x520)
struct U*0ad5a28ca4 : UReflectionCaptureComponent {
	float InfluenceRadiusScale[0x04]; // 0x518(0x04)
	struct U*d44a97c4a0* *23fdcff6fa[0x08]; // 0x520(0x08)
	struct UBoxComponent* PreviewCaptureBox[0x08]; // 0x528(0x08)
};

// Class Engine.*d9a0e0a4e9
// Size: 0x530 (Inherited: 0x520)
struct U*d9a0e0a4e9 : UReflectionCaptureComponent {
	float InfluenceRadius[0x04]; // 0x518(0x04)
	float *757bfab2c2[0x04]; // 0x51c(0x04)
	struct U*d44a97c4a0* *23fdcff6fa[0x08]; // 0x520(0x08)
};

// Class Engine.*f4dc70db73
// Size: 0x630 (Inherited: 0x550)
struct U*f4dc70db73 : USceneCaptureComponent {
	struct UBoxComponent* *7f1b15fd50[0x08]; // 0x550(0x08)
	float *691627301e[0x04]; // 0x558(0x04)
	float *043ad828b8[0x04]; // 0x55c(0x04)
	float *6810fe8c09[0x04]; // 0x560(0x04)
	int32 ScreenPercentage[0x04]; // 0x564(0x04)
	float *4427fc8a50[0x04]; // 0x568(0x04)
	float DistanceFromPlaneFadeStart[0x04]; // 0x56c(0x04)
	float DistanceFromPlaneFadeEnd[0x04]; // 0x570(0x04)
	float *e627f56a5f[0x04]; // 0x574(0x04)
	float *befd782ae9[0x04]; // 0x578(0x04)
	float *7d3a2fdb40[0x04]; // 0x57c(0x04)
	float *85a77c131e[0x04]; // 0x580(0x04)
	bool *fc04c24b23; // 0x584(0x01)
	char pad_585[0xab]; // 0x585(0xab)
};

// Class Engine.SceneCaptureComponentCube
// Size: 0x560 (Inherited: 0x550)
struct USceneCaptureComponentCube : USceneCaptureComponent {
	struct UTextureRenderTargetCube* TextureTarget[0x08]; // 0x550(0x08)
	char pad_558[0x8]; // 0x558(0x08)

	void CaptureScene(); // Function Engine.SceneCaptureComponentCube.CaptureScene // Final|Native|Public|BlueprintCallable // @ game+0x65f0be4
};

// Class Engine.*0616d8b0d9
// Size: 0x570 (Inherited: 0x4d0)
struct U*0616d8b0d9 : USceneComponent {
	char bLiveTexture : 1; // 0x4d0(0x01)
	char bSupportsDepth : 1; // 0x4d0(0x01)
	char bNoAlphaChannel : 1; // 0x4d0(0x01)
	char pad_4D0_3 : 5; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct UTexture* Texture[0x08]; // 0x4d8(0x08)
	struct UTexture* LeftTexture[0x08]; // 0x4e0(0x08)
	char bQuadPreserveTextureRatio : 1; // 0x4e8(0x01)
	char pad_4E8_1 : 7; // 0x4e8(0x01)
	char pad_4E9[0x3]; // 0x4e9(0x03)
	struct FVector2D QuadSize[0x08]; // 0x4ec(0x08)
	struct FBox2D UVRect[0x14]; // 0x4f4(0x14)
	float CylinderRadius[0x04]; // 0x508(0x04)
	float CylinderOverlayArc[0x04]; // 0x50c(0x04)
	int32 CylinderHeight[0x04]; // 0x510(0x04)
	enum class EStereoLayerType StereoLayerType; // 0x514(0x01)
	enum class *2e63c9ae86 StereoLayerShape; // 0x515(0x01)
	char pad_516[0x2]; // 0x516(0x02)
	int32 Priority[0x04]; // 0x518(0x04)
	char pad_51C[0x54]; // 0x51c(0x54)

	void *521bac072e(); // Function Engine.*0616d8b0d9.*521bac072e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6606920
	void *019b78c150(); // Function Engine.*0616d8b0d9.*019b78c150 // Final|Native|Public|BlueprintCallable // @ game+0x6615440
	void *777be49706(); // Function Engine.*0616d8b0d9.*777be49706 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6607838
	void *c338b7ba58(); // Function Engine.*0616d8b0d9.*c338b7ba58 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x662c0bc
	void *6d1f4ae454(); // Function Engine.*0616d8b0d9.*6d1f4ae454 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x662f124
	void SetPriority(); // Function Engine.*0616d8b0d9.SetPriority // Final|Native|Public|BlueprintCallable // @ game+0x662bf94
	void *b6c228dc86(); // Function Engine.*0616d8b0d9.*b6c228dc86 // Final|Native|Public|BlueprintCallable // @ game+0x662ec3c
	void *3f3f1bb861(); // Function Engine.*0616d8b0d9.*3f3f1bb861 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6604028
	void *e8b48a5405(); // Function Engine.*0616d8b0d9.*e8b48a5405 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6604010
};

// Class Engine.*baafa9a332
// Size: 0x4f0 (Inherited: 0x4d0)
struct U*baafa9a332 : USceneComponent {
	float Strength[0x04]; // 0x4d0(0x04)
	float Speed[0x04]; // 0x4d4(0x04)
	float MinGustAmount[0x04]; // 0x4d8(0x04)
	float MaxGustAmount[0x04]; // 0x4dc(0x04)
	float Radius[0x04]; // 0x4e0(0x04)
	char bPointWind : 1; // 0x4e4(0x01)
	char pad_4E4_1 : 7; // 0x4e4(0x01)
	char pad_4E5[0xb]; // 0x4e5(0x0b)

	void *92073b3e8e(); // Function Engine.*baafa9a332.*92073b3e8e // Final|Native|Public|BlueprintCallable // @ game+0x662a5d4
	void *a081c8594e(); // Function Engine.*baafa9a332.*a081c8594e // Final|Native|Public|BlueprintCallable // @ game+0x662de84
	void *a1b693240e(); // Function Engine.*baafa9a332.*a1b693240e // Final|Native|Public|BlueprintCallable // @ game+0x6630320
	void SetSpeed(); // Function Engine.*baafa9a332.SetSpeed // Final|Native|Public|BlueprintCallable // @ game+0x662ced4
	void SetRadius(); // Function Engine.*baafa9a332.SetRadius // Final|Native|Public|BlueprintCallable // @ game+0x662c170
	void *dc0a8011b8(); // Function Engine.*baafa9a332.*dc0a8011b8 // Final|Native|Public|BlueprintCallable // @ game+0x662a3e8
};

// Class Engine.TimelineComponent
// Size: 0x2e0 (Inherited: 0x1f0)
struct UTimelineComponent : UActorComponent {
	struct FTimeline *db39d74abd[0xe0]; // 0x1f0(0xe0)
	char *cea07ee5d4 : 1; // 0x2d0(0x01)
	char pad_2D0_1 : 7; // 0x2d0(0x01)
	char pad_2D1[0xf]; // 0x2d1(0x0f)

	void *1821cb7fcf(); // Function Engine.TimelineComponent.*1821cb7fcf // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6628254
	bool SetPlaybackPosition(); // Function Engine.TimelineComponent.SetPlaybackPosition // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x662b704
	void *bbf462126c(); // Function Engine.TimelineComponent.*bbf462126c // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x660c5bc
	void IsPlaying(); // Function Engine.TimelineComponent.IsPlaying // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x660c184
	void Play(); // Function Engine.TimelineComponent.Play // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6619cac
	void *3dc22f4f13(); // Function Engine.TimelineComponent.*3dc22f4f13 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x660374c
	void PlayFromStart(); // Function Engine.TimelineComponent.PlayFromStart // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0xdd5894
	struct U*59a0aeaef9* SetVectorCurve(); // Function Engine.TimelineComponent.SetVectorCurve // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x662f5a0
	void Stop(); // Function Engine.TimelineComponent.Stop // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6637364
	void SetNewTime(); // Function Engine.TimelineComponent.SetNewTime // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x662aa98
	struct UCurveFloat* SetFloatCurve(); // Function Engine.TimelineComponent.SetFloatCurve // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6627010
	void OnRep_Timeline(); // Function Engine.TimelineComponent.OnRep_Timeline // Final|Native|Public // @ game+0x6618fb8
	void SetPlayRate(); // Function Engine.TimelineComponent.SetPlayRate // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x662b66c
	void SetLinearColorCurve(); // Function Engine.TimelineComponent.SetLinearColorCurve // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x662947c
	void Reverse(); // Function Engine.TimelineComponent.Reverse // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x661f274
	void *f934ffde97(); // Function Engine.TimelineComponent.*f934ffde97 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6606b9c
	void *ebe9f90259(); // Function Engine.TimelineComponent.*ebe9f90259 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x65fffa4
	void GetPlayRate(); // Function Engine.TimelineComponent.GetPlayRate // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6603734
	void *b546cc0868(); // Function Engine.TimelineComponent.*b546cc0868 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x662ecdc
	void *daac1d6664(); // Function Engine.TimelineComponent.*daac1d6664 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x662ed8c
	void ReverseFromEnd(); // Function Engine.TimelineComponent.ReverseFromEnd // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x661f2a4
	void SetLooping(); // Function Engine.TimelineComponent.SetLooping // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x662a2c0
	void IsLooping(); // Function Engine.TimelineComponent.IsLooping // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x660c080
};

// Class Engine.AnimComposite
// Size: 0xb0 (Inherited: 0xa0)
struct UAnimComposite : U*e429980132 {
	struct FAnimTrack *7be9827d31[0x10]; // 0xa0(0x10)
};

// Class Engine.AnimSequence
// Size: 0x1a0 (Inherited: 0xa0)
struct UAnimSequence : UAnimSequenceBase {
	int32 NumFrames[0x04]; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct F*42613e53dd> *fb8e69baed[0x10]; // 0xa8(0x10)
	char pad_B8[0x98]; // 0xb8(0x98)
	enum class EAdditiveAnimationType *cfdaedface; // 0x150(0x01)
	enum class *eea974b4e5 *9ee46c9c1f; // 0x151(0x01)
	char pad_152[0x6]; // 0x152(0x06)
	struct UAnimSequence* *0886e2d122[0x08]; // 0x158(0x08)
	int32 *ea732044b1[0x04]; // 0x160(0x04)
	int32 *96a4653477[0x04]; // 0x164(0x04)
	struct FName RetargetSource[0x08]; // 0x168(0x08)
	enum class EAnimInterpolationType Interpolation; // 0x170(0x01)
	bool *61f95916fb; // 0x171(0x01)
	bool *1d791dc941; // 0x172(0x01)
	enum class ERootMotionRootLock *7c0636d645; // 0x173(0x01)
	bool *9ebae18894; // 0x174(0x01)
	bool *157bf43837; // 0x175(0x01)
	char pad_176[0x2]; // 0x176(0x02)
	struct TArray<struct F*900dd2f72b> AuthoredSyncMarkers[0x10]; // 0x178(0x10)
	char pad_188[0x18]; // 0x188(0x18)
};

// Class Engine.BlendSpaceBase
// Size: 0x140 (Inherited: 0x78)
struct UBlendSpaceBase : UAnimationAsset {
	char pad_78[0x8]; // 0x78(0x08)
	bool *5e083004a1; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float AnimLength[0x04]; // 0x84(0x04)
	struct TArray<struct F*3960a065b0> *b3294e5e3f[0x10]; // 0x88(0x10)
	struct FInterpolationParameter *d53c75848e[0x08]; // 0x98(0x18)
	float *db93e45de3[0x04]; // 0xb0(0x04)
	enum class ENotifyTriggerMode *79616e8146; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	int32 *9b786ef582[0x04]; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<struct FBlendSample> SampleData[0x10]; // 0xc0(0x10)
	struct TArray<struct F*db5e6e7b5e> *46e974698b[0x10]; // 0xd0(0x10)
	struct FBlendParameter *46504f53b2[0x20]; // 0xe0(0x60)
};

// Class Engine.BlendSpace
// Size: 0x148 (Inherited: 0x140)
struct UBlendSpace : UBlendSpaceBase {
	enum class *87c6b2e60b *a3d7f85340; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// Class Engine.AimOffsetBlendSpace
// Size: 0x148 (Inherited: 0x148)
struct UAimOffsetBlendSpace : UBlendSpace {
};

// Class Engine.BlendSpace1D
// Size: 0x148 (Inherited: 0x140)
struct UBlendSpace1D : UBlendSpaceBase {
	bool *9c83a7179a; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// Class Engine.AimOffsetBlendSpace1D
// Size: 0x148 (Inherited: 0x148)
struct UAimOffsetBlendSpace1D : UBlendSpace1D {
};

// Class Engine.PoseAsset
// Size: 0x190 (Inherited: 0x78)
struct UPoseAsset : UAnimationAsset {
	struct F*48a73d20ed *d32caa814e[0x90]; // 0x78(0x90)
	bool *3c7d7edde5; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	int32 *e83602c12e[0x04]; // 0x10c(0x04)
	struct FName RetargetSource[0x08]; // 0x110(0x08)
	char pad_118[0x78]; // 0x118(0x78)
};

// Class Engine.*27106dccd0
// Size: 0x28 (Inherited: 0x28)
struct U*27106dccd0 : UObject {
};

// Class Engine.*7c63a65206
// Size: 0x28 (Inherited: 0x28)
struct U*7c63a65206 : UInterface {
};

// Class Engine.AnimClassData
// Size: 0x98 (Inherited: 0x28)
struct UAnimClassData : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct F*3e8db83ef8> *87f8836c42[0x10]; // 0x30(0x10)
	struct USkeleton* TargetSkeleton[0x08]; // 0x40(0x08)
	struct TArray<struct FAnimNotifyEvent> *2f35a73a78[0x10]; // 0x48(0x10)
	int32 *1130675760[0x04]; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<int32> *59b46154cb[0x10]; // 0x60(0x10)
	struct UStructProperty* *2b665f423d[0x08]; // 0x70(0x08)
	struct TArray<struct UStructProperty*> *c33ca243bb[0x10]; // 0x78(0x10)
	struct TArray<struct FName> *5f9fa98dff[0x10]; // 0x88(0x10)
};

// Class Engine.AnimCompress
// Size: 0x48 (Inherited: 0x28)
struct UAnimCompress : UObject {
	struct FString Description[0x10]; // 0x28(0x10)
	char *bdf216690b : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	enum class AnimationCompressionFormat *20cd32ae63; // 0x3c(0x01)
	enum class AnimationCompressionFormat *426c4f6a96; // 0x3d(0x01)
	enum class AnimationCompressionFormat *7598a6f10c; // 0x3e(0x01)
	char pad_3F[0x1]; // 0x3f(0x01)
	float *d86b136b69[0x04]; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.AnimCompress_Automatic
// Size: 0x50 (Inherited: 0x48)
struct UAnimCompress_Automatic : UAnimCompress {
	float *6d9b675b0b[0x04]; // 0x48(0x04)
	char *5cac07cc16 : 1; // 0x4c(0x01)
	char *0cee5d5cc1 : 1; // 0x4c(0x01)
	char *15d1c773ad : 1; // 0x4c(0x01)
	char *32b5eba15b : 1; // 0x4c(0x01)
	char *84172d943c : 1; // 0x4c(0x01)
	char *3dd5f69eef : 1; // 0x4c(0x01)
	char *94c9e3f48c : 1; // 0x4c(0x01)
	char pad_4C_7 : 1; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.AnimCompress_BitwiseCompressOnly
// Size: 0x48 (Inherited: 0x48)
struct UAnimCompress_BitwiseCompressOnly : UAnimCompress {
};

// Class Engine.AnimCompress_LeastDestructive
// Size: 0x48 (Inherited: 0x48)
struct UAnimCompress_LeastDestructive : UAnimCompress {
};

// Class Engine.AnimCompress_RemoveEverySecondKey
// Size: 0x50 (Inherited: 0x48)
struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32 *78459cd3a0[0x04]; // 0x48(0x04)
	char *9675febc5c : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.AnimCompress_RemoveLinearKeys
// Size: 0x68 (Inherited: 0x48)
struct UAnimCompress_RemoveLinearKeys : UAnimCompress {
	float *bde3a89ea6[0x04]; // 0x48(0x04)
	float *e155976c67[0x04]; // 0x4c(0x04)
	float *a995ad9cf7[0x04]; // 0x50(0x04)
	float *372e1dce1b[0x04]; // 0x54(0x04)
	float *a06965e073[0x04]; // 0x58(0x04)
	float *f24ae08784[0x04]; // 0x5c(0x04)
	float *af249d8003[0x04]; // 0x60(0x04)
	char *b0eb6fd961 : 1; // 0x64(0x01)
	char *7b5a119eec : 1; // 0x64(0x01)
	char pad_64_2 : 6; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class Engine.AnimCompress_PerTrackCompression
// Size: 0xe8 (Inherited: 0x68)
struct UAnimCompress_PerTrackCompression : UAnimCompress_RemoveLinearKeys {
	float *2344c2cade[0x04]; // 0x68(0x04)
	float *bc0abedcb4[0x04]; // 0x6c(0x04)
	float *7b982819d9[0x04]; // 0x70(0x04)
	float *99de0a02d7[0x04]; // 0x74(0x04)
	struct TArray<enum class AnimationCompressionFormat> *0b14225f39[0x10]; // 0x78(0x10)
	struct TArray<enum class AnimationCompressionFormat> *fc6104d08f[0x10]; // 0x88(0x10)
	struct TArray<enum class AnimationCompressionFormat> *4365d0fa02[0x10]; // 0x98(0x10)
	char bResampleAnimation : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float *e54b97909c[0x04]; // 0xac(0x04)
	int32 *2bb3e65189[0x04]; // 0xb0(0x04)
	char *e505893db6 : 1; // 0xb4(0x01)
	char *aff7b5faa3 : 1; // 0xb4(0x01)
	char pad_B4_2 : 6; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	int32 *16fd1cd60f[0x04]; // 0xb8(0x04)
	float *7888aab103[0x04]; // 0xbc(0x04)
	float *f5e2fb7ce6[0x04]; // 0xc0(0x04)
	char *14f5f2db55 : 1; // 0xc4(0x01)
	char pad_C4_1 : 7; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float *53a7fb9546[0x04]; // 0xc8(0x04)
	float *0158f6fdbb[0x04]; // 0xcc(0x04)
	float *1ebaffcd05[0x04]; // 0xd0(0x04)
	float *cbf199c18a[0x04]; // 0xd4(0x04)
	float *d34780542f[0x04]; // 0xd8(0x04)
	char pad_DC[0xc]; // 0xdc(0x0c)
};

// Class Engine.AnimCompress_RemoveTrivialKeys
// Size: 0x58 (Inherited: 0x48)
struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float *bde3a89ea6[0x04]; // 0x48(0x04)
	float *e155976c67[0x04]; // 0x4c(0x04)
	float *a995ad9cf7[0x04]; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.*fd11263f10
// Size: 0x3b0 (Inherited: 0x398)
struct U*fd11263f10 : UAnimInstance {
	struct UAnimationAsset* *837629d9f7[0x08]; // 0x398(0x08)
	DelegateProperty *5f1a83de4b[0x10]; // 0x3a0(0x10)

	void *794d7f6f9e(); // Function Engine.*fd11263f10.*794d7f6f9e // Final|Native|Public|BlueprintCallable // @ game+0x662c3a0
	void *442e18727b(float* InPreviousTime); // Function Engine.*fd11263f10.*442e18727b // Final|Native|Public|BlueprintCallable // @ game+0x662bb70
	void *9548ae7454(); // Function Engine.*fd11263f10.*9548ae7454 // Final|Native|Public|BlueprintCallable // @ game+0x660209c
	void *01b29f7683(); // Function Engine.*fd11263f10.*01b29f7683 // Final|Native|Public|BlueprintCallable // @ game+0x663737c
	void *cd17dc91ab(); // Function Engine.*fd11263f10.*cd17dc91ab // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x662271c
	void SetPlayRate(); // Function Engine.*fd11263f10.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x662b5d4
	void *fc1f396bf1(float* InPlayRate); // Function Engine.*fd11263f10.*fc1f396bf1 // Final|Native|Public|BlueprintCallable // @ game+0x6619cc0
	float SetPosition(); // Function Engine.*fd11263f10.SetPosition // Final|Native|Public|BlueprintCallable // @ game+0x662b9a8
	bool *515b5ab8f1(); // Function Engine.*fd11263f10.*515b5ab8f1 // Native|Public|BlueprintCallable // @ game+0x6621d38
	void *2b598dd977(); // Function Engine.*fd11263f10.*2b598dd977 // Final|Native|Public|BlueprintCallable // @ game+0x662b914
	void SetLooping(); // Function Engine.*fd11263f10.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x662a22c
	float *c48dc5ef58(); // Function Engine.*fd11263f10.*c48dc5ef58 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x662be50
};

// Class Engine.*7db4928023
// Size: 0x28 (Inherited: 0x28)
struct U*7db4928023 : UObject {
};

// Class Engine.AnimNotify_PlaySound
// Size: 0x58 (Inherited: 0x38)
struct UAnimNotify_PlaySound : UAnimNotify {
	struct USoundBase* Sound[0x08]; // 0x38(0x08)
	float VolumeMultiplier[0x04]; // 0x40(0x04)
	float PitchMultiplier[0x04]; // 0x44(0x04)
	char bFollow : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FName AttachName[0x08]; // 0x50(0x08)
};

// Class Engine.*3b91982df6
// Size: 0x38 (Inherited: 0x38)
struct U*3b91982df6 : UAnimNotify {
};

// Class Engine.*3f88e49a07
// Size: 0x30 (Inherited: 0x30)
struct U*3f88e49a07 : UAnimNotifyState {
};

// Class Engine.AnimNotifyState_TimedParticleEffect
// Size: 0x60 (Inherited: 0x30)
struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	struct UParticleSystem* PSTemplate[0x08]; // 0x30(0x08)
	struct FName SocketName[0x08]; // 0x38(0x08)
	struct FVector LocationOffset[0x0c]; // 0x40(0x0c)
	struct FRotator RotationOffset[0x0c]; // 0x4c(0x0c)
	bool bDestroyAtEnd; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class Engine.AnimNotifyState_Trail
// Size: 0x60 (Inherited: 0x30)
struct UAnimNotifyState_Trail : UAnimNotifyState {
	struct UParticleSystem* PSTemplate[0x08]; // 0x30(0x08)
	struct FName FirstSocketName[0x08]; // 0x38(0x08)
	struct FName SecondSocketName[0x08]; // 0x40(0x08)
	enum class *a1588812a5 WidthScaleMode; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FName WidthScaleCurve[0x08]; // 0x50(0x08)
	char bRecycleSpawnedSystems : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	struct UAnimSequenceBase* OverridePSTemplate(); // Function Engine.AnimNotifyState_Trail.OverridePSTemplate // Event|Public|BlueprintEvent|Const // @ game+0x2cd4ac
};

// Class Engine.AnimSet
// Size: 0xf0 (Inherited: 0x28)
struct UAnimSet : UObject {
	char *9eed9f9e63 : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FName> *fb0706db87[0x10]; // 0x30(0x10)
	struct TArray<struct F*edbd0ddf47> *3504ed20fb[0x10]; // 0x40(0x10)
	struct TArray<bool> *d719029061[0x10]; // 0x50(0x10)
	struct TArray<bool> *482e919fc5[0x10]; // 0x60(0x10)
	struct TArray<struct FName> *14a740f598[0x10]; // 0x70(0x10)
	struct TArray<struct FName> *bea0a3ad1a[0x10]; // 0x80(0x10)
	struct FName *5e1a66f963[0x08]; // 0x90(0x08)
	struct FName *0cc2e13e34[0x08]; // 0x98(0x08)
	char pad_A0[0x50]; // 0xa0(0x50)
};

// Class Engine.AssetImportData
// Size: 0x28 (Inherited: 0x28)
struct UAssetImportData : UObject {
};

// Class Engine.AssetManager
// Size: 0x3a0 (Inherited: 0x28)
struct UAssetManager : UObject {
	char pad_28[0x260]; // 0x28(0x260)
	struct TArray<struct UObject*> *1ac34e1a5e[0x10]; // 0x288(0x10)
	bool *2b8120a48a; // 0x298(0x01)
	bool *0613cfc5c6; // 0x299(0x01)
	bool *54288d0940; // 0x29a(0x01)
	bool *1020eff83d; // 0x29b(0x01)
	bool *6b86c1d43c; // 0x29c(0x01)
	bool *aed1171b3e; // 0x29d(0x01)
	bool *30c94bf7a4; // 0x29e(0x01)
	char pad_29F[0x101]; // 0x29f(0x101)
};

// Class Engine.AssetMappingTable
// Size: 0x38 (Inherited: 0x28)
struct UAssetMappingTable : UObject {
	struct TArray<struct F*b6eb9ac2dd> *5ce9d0e83e[0x10]; // 0x28(0x10)
};

// Class Engine.AutomationTestSettings
// Size: 0x320 (Inherited: 0x28)
struct UAutomationTestSettings : UObject {
	struct TArray<struct FString> EngineTestModules[0x10]; // 0x28(0x10)
	struct TArray<struct FString> EditorTestModules[0x10]; // 0x38(0x10)
	struct FStringAssetReference AutomationTestmap[0x10]; // 0x48(0x10)
	struct TArray<struct F*858afdee7d> EditorPerformanceTestMaps[0x10]; // 0x58(0x10)
	struct TArray<struct FStringAssetReference> AssetsToOpen[0x10]; // 0x68(0x10)
	struct F*c9fef354c4 BuildPromotionTest[0x1f0]; // 0x78(0x1f0)
	struct F*bb96164374 MaterialEditorPromotionTest[0x30]; // 0x268(0x30)
	struct F*28015cd648 ParticleEditorPromotionTest[0x10]; // 0x298(0x10)
	struct F*04983e2c04 BlueprintEditorPromotionTest[0x30]; // 0x2a8(0x30)
	struct TArray<struct FString> TestLevelFolders[0x10]; // 0x2d8(0x10)
	struct TArray<struct F*155f881747> ExternalTools[0x10]; // 0x2e8(0x10)
	struct TArray<struct F*de76861de8> ImportExportTestDefinitions[0x10]; // 0x2f8(0x10)
	struct TArray<struct F*fb9a986504> LaunchOnSettings[0x10]; // 0x308(0x10)
	struct FIntPoint DefaultScreenshotResolution[0x08]; // 0x318(0x08)
};

// Class Engine.AvoidanceManager
// Size: 0xe0 (Inherited: 0x28)
struct UAvoidanceManager : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	float DefaultTimeToLive[0x04]; // 0x30(0x04)
	float LockTimeAfterAvoid[0x04]; // 0x34(0x04)
	float LockTimeAfterClean[0x04]; // 0x38(0x04)
	float DeltaTimeToPredict[0x04]; // 0x3c(0x04)
	float ArtificialRadiusExpansion[0x04]; // 0x40(0x04)
	float TestHeightDifference[0x04]; // 0x44(0x04)
	float HeightCheckMargin[0x04]; // 0x48(0x04)
	char pad_4C[0x94]; // 0x4c(0x94)

	float *79cb9f51ef(); // Function Engine.AvoidanceManager.*79cb9f51ef // Final|Native|Public|BlueprintCallable // @ game+0x661e620
	void *34c3a35f64(); // Function Engine.AvoidanceManager.*34c3a35f64 // Final|Native|Public|BlueprintCallable // @ game+0x6602e90
	void *1c16d7500c(float* DeltaTime); // Function Engine.AvoidanceManager.*1c16d7500c // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65fcdb0
	void *304c97ace1(); // Function Engine.AvoidanceManager.*304c97ace1 // Final|Native|Public|BlueprintCallable // @ game+0x6602cf4
	int32 *f12baa5858(); // Function Engine.AvoidanceManager.*f12baa5858 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65fcf88
	void *72b79789b4(struct UMovementComponent** MovementComp); // Function Engine.AvoidanceManager.*72b79789b4 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x65fced8
};

// Class Engine.BlendProfile
// Size: 0x48 (Inherited: 0x28)
struct UBlendProfile : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct USkeleton* *585b925421[0x08]; // 0x30(0x08)
	struct TArray<struct F*b195a56239> *d9fcccff9f[0x10]; // 0x38(0x10)
};

// Class Engine.BlueprintCore
// Size: 0x50 (Inherited: 0x28)
struct UBlueprintCore : UObject {
	struct UClass* *86b7b4ad7a[0x08]; // 0x28(0x08)
	struct UClass* GeneratedClass[0x08]; // 0x30(0x08)
	bool *3a0932d248; // 0x38(0x01)
	bool *44068eab41; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FGuid *15519d2316[0x10]; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.Blueprint
// Size: 0x1a0 (Inherited: 0x50)
struct UBlueprint : UBlueprintCore {
	char bRecompileOnLoad : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UClass* ParentClass[0x08]; // 0x58(0x08)
	struct UObject* *6b119a64cf[0x08]; // 0x60(0x08)
	char *3a23537233 : 1; // 0x68(0x01)
	char *e492949f50 : 1; // 0x68(0x01)
	char pad_68_2 : 6; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct USimpleConstructionScript* SimpleConstructionScript[0x08]; // 0x70(0x08)
	struct TArray<struct UActorComponent*> *2618d515c0[0x10]; // 0x78(0x10)
	struct TArray<struct U*12776be9f9*> *7a479ec104[0x10]; // 0x88(0x10)
	struct UInheritableComponentHandler* InheritableComponentHandler[0x08]; // 0x98(0x08)
	enum class EBlueprintType BlueprintType; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32 *93a3e6d841[0x04]; // 0xa4(0x04)
	char pad_A8[0xe8]; // 0xa8(0xe8)
	bool bNativize; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)
};

// Class Engine.AnimBlueprint
// Size: 0x1c0 (Inherited: 0x1a0)
struct UAnimBlueprint : UBlueprint {
	struct USkeleton* TargetSkeleton[0x08]; // 0x198(0x08)
	struct TArray<struct F*6c17146d97> Groups[0x10]; // 0x1a0(0x10)
	bool *6c5cd0fbcc; // 0x1b0(0x01)
	bool *5aba6a0ce8; // 0x1b1(0x01)
	char pad_1BA[0x6]; // 0x1ba(0x06)
};

// Class Engine.LevelScriptBlueprint
// Size: 0x1a0 (Inherited: 0x1a0)
struct ULevelScriptBlueprint : UBlueprint {
};

// Class Engine.*c4350fcda4
// Size: 0x28 (Inherited: 0x28)
struct U*c4350fcda4 : UBlueprintFunctionLibrary {

	void *ae19ca5b22(); // Function Engine.*c4350fcda4.*ae19ca5b22 // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x6614708
	void *241f779060(int32* Key); // Function Engine.*c4350fcda4.*241f779060 // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x6614410
	struct TMap<int32, int32> *553d91c443(); // Function Engine.*c4350fcda4.*553d91c443 // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x6615278
	void *ab6a1e0a79(int32* Key); // Function Engine.*c4350fcda4.*ab6a1e0a79 // Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6614a34
	struct TMap<int32, int32> *08432e3d5c(); // Function Engine.*c4350fcda4.*08432e3d5c // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x6614d74
	void *fa13f98229(struct TMap<int32, int32>* TargetMap); // Function Engine.*c4350fcda4.*fa13f98229 // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x661505c
	struct TMap<int32, int32> *6d0b50e82e(); // Function Engine.*c4350fcda4.*6d0b50e82e // Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6614f3c
	void *08752bcbc8(struct TMap<int32, int32>* TargetMap); // Function Engine.*c4350fcda4.*08752bcbc8 // Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6614814
};

// Class Engine.*dd0f750ac4
// Size: 0x30 (Inherited: 0x30)
struct U*dd0f750ac4 : U*3ea9fa89b4 {
};

// Class Engine.*45d34b4e48
// Size: 0x30 (Inherited: 0x30)
struct U*45d34b4e48 : U*3ea9fa89b4 {
};

// Class Engine.*cf6dc47353
// Size: 0x2a0 (Inherited: 0x1f0)
struct U*cf6dc47353 : UGameInstance {
	struct FMulticastDelegate ApplicationWillDeactivateDelegate[0x10]; // 0x1e8(0x10)
	struct FMulticastDelegate ApplicationHasReactivatedDelegate[0x10]; // 0x1f8(0x10)
	struct FMulticastDelegate ApplicationWillEnterBackgroundDelegate[0x10]; // 0x208(0x10)
	struct FMulticastDelegate ApplicationHasEnteredForegroundDelegate[0x10]; // 0x218(0x10)
	struct FMulticastDelegate ApplicationWillTerminateDelegate[0x10]; // 0x228(0x10)
	struct FMulticastDelegate ApplicationRegisteredForRemoteNotificationsDelegate[0x10]; // 0x238(0x10)
	struct FMulticastDelegate ApplicationRegisteredForUserNotificationsDelegate[0x10]; // 0x248(0x10)
	struct FMulticastDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate[0x10]; // 0x258(0x10)
	struct FMulticastDelegate ApplicationReceivedRemoteNotificationDelegate[0x10]; // 0x268(0x10)
	struct FMulticastDelegate ApplicationReceivedLocalNotificationDelegate[0x10]; // 0x278(0x10)
	struct FMulticastDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate[0x10]; // 0x288(0x10)

	void PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*cf6dc47353.PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void PlatformDelegate__DelegateSignature(); // DelegateFunction Engine.*cf6dc47353.PlatformDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*cf6dc47353.PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x2cd4ac
	void PlatformRegisteredForUserNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*cf6dc47353.PlatformRegisteredForUserNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void PlatformScreenOrientationChangedDelegate__DelegateSignature(); // DelegateFunction Engine.*cf6dc47353.PlatformScreenOrientationChangedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	void PlatformReceivedRemoteNotificationDelegate__DelegateSignature(); // DelegateFunction Engine.*cf6dc47353.PlatformReceivedRemoteNotificationDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
	struct FString PlatformReceivedLocalNotificationDelegate__DelegateSignature(); // DelegateFunction Engine.*cf6dc47353.PlatformReceivedLocalNotificationDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x2cd4ac
};

// Class Engine.*2a24ee69ed
// Size: 0x28 (Inherited: 0x28)
struct U*2a24ee69ed : UBlueprintFunctionLibrary {

	void *998be914fc(int32* inSecondsFromNow, struct FText* Body); // Function Engine.*2a24ee69ed.*998be914fc // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x661fb1c
	void ClearAllLocalNotifications(); // Function Engine.*2a24ee69ed.ClearAllLocalNotifications // Final|Native|Static|Public|BlueprintCallable // @ game+0x65f11dc
	struct FString GetLaunchNotification(); // Function Engine.*2a24ee69ed.GetLaunchNotification // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6601e14
	void CancelLocalNotification(); // Function Engine.*2a24ee69ed.CancelLocalNotification // Final|Native|Static|Public|BlueprintCallable // @ game+0x65ee490
	void ScheduleLocalNotificationAtTime(struct FDateTime* FireDateTime, struct FText* Title, struct FText* Action); // Function Engine.*2a24ee69ed.ScheduleLocalNotificationAtTime // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x661f7e0
};

// Class Engine.*fd7754a266
// Size: 0x28 (Inherited: 0x28)
struct U*fd7754a266 : UBlueprintFunctionLibrary {

	void *cd0220e98f(); // Function Engine.*fd7754a266.*cd0220e98f // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6631a80
	SetProperty *d9a8012010(); // Function Engine.*fd7754a266.*d9a8012010 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6630b64
	void *9c66f2df00(int32* ItemToFind); // Function Engine.*fd7754a266.*9c66f2df00 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6630e38
	SetProperty *1260f0ce46(); // Function Engine.*fd7754a266.*1260f0ce46 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66312e8
	void *3f4f50919b(SetProperty* A, SetProperty* B); // Function Engine.*fd7754a266.*3f4f50919b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6631c48
	SetProperty *257efcb671(); // Function Engine.*fd7754a266.*257efcb671 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x663157c
	void *5164758ec5(SetProperty* TargetSet); // Function Engine.*fd7754a266.*5164758ec5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x663169c
	SetProperty *1904985b71(); // Function Engine.*fd7754a266.*1904985b71 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6631054
	SetProperty *e71645ddbd(int32* NewItem); // Function Engine.*fd7754a266.*e71645ddbd // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6630948
	void *2961254382(); // Function Engine.*fd7754a266.*2961254382 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6630d2c
	SetProperty *b7142502e6(); // Function Engine.*fd7754a266.*b7142502e6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66318b8
};

// Class Engine.*977edba350
// Size: 0x28 (Inherited: 0x28)
struct U*977edba350 : UBlueprintFunctionLibrary {

	struct FName *f35f7cd5e7(struct FTableRowBase* OutRow); // Function Engine.*977edba350.*f35f7cd5e7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65fe658
	void *c8502a5964(struct UDataTable** Table); // Function Engine.*977edba350.*c8502a5964 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65fea84
	float *58bcbc3229(); // Function Engine.*977edba350.*58bcbc3229 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65f9158
};

// Class Engine.*22a2faebd7
// Size: 0x28 (Inherited: 0x28)
struct U*22a2faebd7 : UBlueprintFunctionLibrary {
};

// Class Engine.CollisionProfile
// Size: 0x158 (Inherited: 0x38)
struct UCollisionProfile : U*6c389a598a {
	struct TArray<struct F*ae13dbf557> Profiles[0x10]; // 0x38(0x10)
	struct TArray<struct F*58d8e1f999> DefaultChannelResponses[0x10]; // 0x48(0x10)
	struct TArray<struct FCustomProfile> EditProfiles[0x10]; // 0x58(0x10)
	struct TArray<struct FRedirector> ProfileRedirects[0x10]; // 0x68(0x10)
	struct TArray<struct FRedirector> CollisionChannelRedirects[0x10]; // 0x78(0x10)
	char pad_88[0xd0]; // 0x88(0xd0)
};

// Class Engine.KismetSystemLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetSystemLibrary : UBlueprintFunctionLibrary {

	struct FLinearColor DrawDebugPlane(); // Function Engine.KismetSystemLibrary.DrawDebugPlane // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65f7a54
	void *a06147c193(struct UObject** Object); // Function Engine.KismetSystemLibrary.*a06147c193 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660d4bc
	struct TArray<struct AActor*> BoxOverlapComponents(struct TArray<struct UPrimitiveComponent*>* OutComponents); // Function Engine.KismetSystemLibrary.BoxOverlapComponents // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65ea8a4
	void *e6410184b4(); // Function Engine.KismetSystemLibrary.*e6410184b4 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66303c8
	struct TArray<struct AActor*> LineTraceMulti(enum class EDrawDebugTrace DrawDebugType, bool bIgnoreSelf, struct FLinearColor* TraceHitColor); // Function Engine.KismetSystemLibrary.LineTraceMulti // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x660f8fc
	struct FString *2a96381f4d(); // Function Engine.KismetSystemLibrary.*2a96381f4d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660ce80
	float *6d8f337be7(); // Function Engine.KismetSystemLibrary.*6d8f337be7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x776c58
	void *4b509ac611(); // Function Engine.KismetSystemLibrary.*4b509ac611 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6602224
	void *02c79f4aaf(); // Function Engine.KismetSystemLibrary.*02c79f4aaf // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6603684
	struct FName *6d358191de(); // Function Engine.KismetSystemLibrary.*6d358191de // Final|Native|Static|Public|BlueprintCallable // @ game+0x662411c
	void *dc6c2bef71(struct UObject** WorldContextObject, struct FRotator* AxisRot, float* Duration); // Function Engine.KismetSystemLibrary.*dc6c2bef71 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65f6dd0
	struct FName *a0202f3898(); // Function Engine.KismetSystemLibrary.*a0202f3898 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x662eeb4
	void *dd43af91e0(); // Function Engine.KismetSystemLibrary.*dd43af91e0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6602ad8
	void *ec74dc961e(); // Function Engine.KismetSystemLibrary.*ec74dc961e // Final|Native|Static|Public|BlueprintCallable // @ game+0x6602224
	struct FName *bd6b2bced5(struct UObject** Object); // Function Engine.KismetSystemLibrary.*bd6b2bced5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66245f4
	struct FDebugFloatHistory *e4428f3d2a(); // Function Engine.KismetSystemLibrary.*e4428f3d2a // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65e3f4c
	void *03366d4d09(struct UObject** Object); // Function Engine.KismetSystemLibrary.*03366d4d09 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x662c5c4
	struct FLinearColor *718c523ccb(); // Function Engine.KismetSystemLibrary.*718c523ccb // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x661bdc8
	struct UObject* *2bd5988fd1(); // Function Engine.KismetSystemLibrary.*2bd5988fd1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660c684
	void *d11fc32e82(struct UObject** Object); // Function Engine.KismetSystemLibrary.*d11fc32e82 // Final|Native|Static|Public|BlueprintCallable // @ game+0x662dfbc
	struct F*da672abddc *df511ef631(); // Function Engine.KismetSystemLibrary.*df511ef631 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660e2fc
	struct UObject* *d8e48d0ec4(struct FName* PropertyName); // Function Engine.KismetSystemLibrary.*d8e48d0ec4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66237d8
	float *4a1c5b95af(struct UObject** WorldContextObject, float* HalfHeight); // Function Engine.KismetSystemLibrary.*4a1c5b95af // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65f65a0
	void HideAdBanner(); // Function Engine.KismetSystemLibrary.HideAdBanner // Final|Native|Static|Public|BlueprintCallable // @ game+0x660a46c
	void *4f72bd118c(); // Function Engine.KismetSystemLibrary.*4f72bd118c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660bc10
	void *f49d1a0e58(); // Function Engine.KismetSystemLibrary.*f49d1a0e58 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65ff848
	bool *e3bf8a676f(); // Function Engine.KismetSystemLibrary.*e3bf8a676f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6612bcc
	float BoxTraceMultiByProfile(struct FVector* HalfSize, struct FName* ProfileName, bool bTraceComplex); // Function Engine.KismetSystemLibrary.BoxTraceMultiByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65eb134
	void *112349cab0(); // Function Engine.KismetSystemLibrary.*112349cab0 // Final|Native|Static|Public|BlueprintCallable // @ game+0x660cae0
	void *1e73509585(DelegateProperty* Delegate); // Function Engine.KismetSystemLibrary.*1e73509585 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660d298
	struct FName *50379bd8c1(); // Function Engine.KismetSystemLibrary.*50379bd8c1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66231e0
	struct UObject* *ec5336672a(); // Function Engine.KismetSystemLibrary.*ec5336672a // Final|Native|Static|Public|BlueprintCallable // @ game+0x660cb84
	void *8a0a49db71(struct UClass** Class); // Function Engine.KismetSystemLibrary.*8a0a49db71 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65fdb68
	void *99a9647d89(DelegateProperty* Delegate); // Function Engine.KismetSystemLibrary.*99a9647d89 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660cfc4
	struct F*da672abddc *ba61eb810c(); // Function Engine.KismetSystemLibrary.*ba61eb810c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660dacc
	float BoxTraceSingleForObjects(struct FVector* Start, struct FVector* HalfSize, struct FRotator* Orientation); // Function Engine.KismetSystemLibrary.BoxTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65ec6d8
	void *dadedefd82(); // Function Engine.KismetSystemLibrary.*dadedefd82 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65ffa1c
	void *2f9b0eb309(); // Function Engine.KismetSystemLibrary.*2f9b0eb309 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc91d1c
	struct UObject* GetPathName(); // Function Engine.KismetSystemLibrary.GetPathName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660354c
	TScriptInterface<struct UInterface> *944241d4e7(); // Function Engine.KismetSystemLibrary.*944241d4e7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65f34a4
	struct FLinearColor BoxTraceSingleByProfile(struct UObject** WorldContextObject, struct FVector* End, struct FRotator* Orientation, float* DrawTime); // Function Engine.KismetSystemLibrary.BoxTraceSingleByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65ec178
	void *f9caf560f8(struct UObject** WorldContextObject); // Function Engine.KismetSystemLibrary.*f9caf560f8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660d6b0
	struct FString *207b2d530f(); // Function Engine.KismetSystemLibrary.*207b2d530f // Final|Native|Static|Public|BlueprintCallable // @ game+0x65ee3c8
	struct UObject* GetDisplayName(); // Function Engine.KismetSystemLibrary.GetDisplayName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65ff5a4
	struct FVector *ebde7291ea(struct UObject** WorldContextObject, float* Radius, struct FLinearColor* LineColor); // Function Engine.KismetSystemLibrary.*ebde7291ea // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65f67fc
	float BoxTraceMultiForObjects(struct FVector* Start, struct FVector* HalfSize, struct FRotator* Orientation); // Function Engine.KismetSystemLibrary.BoxTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65eb688
	void *c08d28dee2(); // Function Engine.KismetSystemLibrary.*c08d28dee2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5875e0c
	struct TArray<struct AActor*> CapsuleTraceMulti(struct UObject** WorldContextObject, enum class EDrawDebugTrace DrawDebugType, bool bIgnoreSelf, struct FLinearColor* TraceHitColor); // Function Engine.KismetSystemLibrary.CapsuleTraceMulti // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65eec04
	DelegateProperty *5137ea5bf2(); // Function Engine.KismetSystemLibrary.*5137ea5bf2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66119f0
	struct TArray<struct AActor*> BoxOverlapActors(struct UObject** WorldContextObject, struct TArray<enum class EObjectTypeQuery>* ObjectTypes, struct UClass** ActorClassFilter); // Function Engine.KismetSystemLibrary.BoxOverlapActors // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65ea57c
	struct TArray<struct AActor*> CapsuleOverlapActors(float* Radius, float* HalfHeight); // Function Engine.KismetSystemLibrary.CapsuleOverlapActors // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65ee54c
	struct APlayerController* *ac942871e4(); // Function Engine.KismetSystemLibrary.*ac942871e4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660bff0
	void *d41c9bbecf(); // Function Engine.KismetSystemLibrary.*d41c9bbecf // Final|Native|Static|Public|BlueprintCallable // @ game+0x660e5ec
	void *0ce4358f85(); // Function Engine.KismetSystemLibrary.*0ce4358f85 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65fdc60
	void *d326525ea0(); // Function Engine.KismetSystemLibrary.*d326525ea0 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6603fc0
	void *aea4618dbe(); // Function Engine.KismetSystemLibrary.*aea4618dbe // Final|Native|Static|Public|BlueprintCallable // @ game+0x660e548
	void *b707073bb1(struct F*da672abddc* Handle); // Function Engine.KismetSystemLibrary.*b707073bb1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x660d428
	void Delay(float* Duration); // Function Engine.KismetSystemLibrary.Delay // Final|Native|Static|Public|BlueprintCallable // @ game+0x6aa8a0
	struct FLinearColor *6e33b3f302(); // Function Engine.KismetSystemLibrary.*6e33b3f302 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65f7420
	void *fa1441028c(); // Function Engine.KismetSystemLibrary.*fa1441028c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65fc4d0
	void *3701f4e539(struct UObject** Object); // Function Engine.KismetSystemLibrary.*3701f4e539 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66288ec
	float CapsuleOverlapComponents(struct TArray<enum class EObjectTypeQuery>* ObjectTypes, struct UClass** ComponentClassFilter, struct TArray<struct AActor*>* ActorsToIgnore); // Function Engine.KismetSystemLibrary.CapsuleOverlapComponents // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65ee8a8
	struct APlayerController* *9a1043fe3c(); // Function Engine.KismetSystemLibrary.*9a1043fe3c // Final|Native|Static|Public|BlueprintCallable // @ game+0x661c684
	float SphereTraceMultiForObjects(struct UObject** WorldContextObject, struct FVector* End, float* Radius); // Function Engine.KismetSystemLibrary.SphereTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6635d80
	float *7e73092e2b(struct FVector* LineStart, float* ArrowSize); // Function Engine.KismetSystemLibrary.*7e73092e2b // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65f6064
	float CapsuleTraceMultiForObjects(float* Radius, float* HalfHeight, struct TArray<struct AActor*>* ActorsToIgnore); // Function Engine.KismetSystemLibrary.CapsuleTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65ef660
	void *cc9a60e507(); // Function Engine.KismetSystemLibrary.*cc9a60e507 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660785c
	float *07884ff06e(struct UObject** WorldContextObject, struct FVector* Extent); // Function Engine.KismetSystemLibrary.*07884ff06e // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65f627c
	struct FLinearColor *a961c574af(struct UObject** WorldContextObject); // Function Engine.KismetSystemLibrary.*a961c574af // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65f71fc
	struct FName *bebfd32043(); // Function Engine.KismetSystemLibrary.*bebfd32043 // Final|Native|Static|Public|BlueprintCallable // @ game+0xbf1a6c
	void *fda1887410(); // Function Engine.KismetSystemLibrary.*fda1887410 // Final|Native|Static|Public|BlueprintCallable // @ game+0x660c9a0
	struct FName *969f451922(); // Function Engine.KismetSystemLibrary.*969f451922 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6628c78
	struct FString PrintString(bool bPrintToScreen, struct FLinearColor* TextColor); // Function Engine.KismetSystemLibrary.PrintString // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x726af8
	struct FVector *9dcaf4fc10(struct USceneComponent** Component); // Function Engine.KismetSystemLibrary.*9dcaf4fc10 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65fdce8
	float LineTraceSingleForObjects(struct FVector* End, struct TArray<struct AActor*>* ActorsToIgnore, struct FHitResult* OutHit); // Function Engine.KismetSystemLibrary.LineTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x661102c
	float *a1f38c3428(bool bLooping); // Function Engine.KismetSystemLibrary.*a1f38c3428 // Final|Native|Static|Public|BlueprintCallable // @ game+0xaa5d7c
	struct TArray<struct FHitResult> LineTraceMultiForObjects(struct FVector* Start, bool bIgnoreSelf, struct FLinearColor* TraceHitColor); // Function Engine.KismetSystemLibrary.LineTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6610210
	struct FString *0f3700b67a(); // Function Engine.KismetSystemLibrary.*0f3700b67a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660d154
	void *78672b555a(); // Function Engine.KismetSystemLibrary.*78672b555a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65fee84
	void *9dba13b9c6(); // Function Engine.KismetSystemLibrary.*9dba13b9c6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6611d20
	enum class EMoveComponentAction *14c4a5bf4e(struct FVector* TargetRelativeLocation, bool bEaseOut); // Function Engine.KismetSystemLibrary.*14c4a5bf4e // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6616ba8
	void *094b388fe9(struct TArray<struct FIntPoint>* Resolutions); // Function Engine.KismetSystemLibrary.*094b388fe9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6606048
	void *89de09de65(); // Function Engine.KismetSystemLibrary.*89de09de65 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6602ab8
	void *81c43d9f23(); // Function Engine.KismetSystemLibrary.*81c43d9f23 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66047e0
	float SphereOverlapActors(struct TArray<enum class EObjectTypeQuery>* ObjectTypes, struct UClass** ActorClassFilter, struct TArray<struct AActor*>* ActorsToIgnore); // Function Engine.KismetSystemLibrary.SphereOverlapActors // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6634dac
	void FlushPersistentDebugLines(); // Function Engine.KismetSystemLibrary.FlushPersistentDebugLines // Final|Native|Static|Public|BlueprintCallable // @ game+0x583c5a8
	float BoxTraceMulti(struct FRotator* Orientation, struct TArray<struct AActor*>* ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType); // Function Engine.KismetSystemLibrary.BoxTraceMulti // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65eabcc
	void *8be2fb989b(); // Function Engine.KismetSystemLibrary.*8be2fb989b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66047bc
	void OnAssetLoaded__DelegateSignature(); // DelegateFunction Engine.KismetSystemLibrary.OnAssetLoaded__DelegateSignature // Public|Delegate // @ game+0x2cd4ac
	void *f8a4ae9066(struct FString* FunctionName); // Function Engine.KismetSystemLibrary.*f8a4ae9066 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660e108
	struct FName *f06867ab8a(); // Function Engine.KismetSystemLibrary.*f06867ab8a // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x7b84ec
	struct F*da672abddc *1ab32ee6f5(); // Function Engine.KismetSystemLibrary.*1ab32ee6f5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660d34c
	void *df7ae2cbe6(); // Function Engine.KismetSystemLibrary.*df7ae2cbe6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660d904
	struct UObject* *dabb6a0020(); // Function Engine.KismetSystemLibrary.*dabb6a0020 // Final|Native|Static|Public|BlueprintCallable // @ game+0x660db50
	struct FName *a99c786ac3(); // Function Engine.KismetSystemLibrary.*a99c786ac3 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66295a0
	void *9d08bee59a(struct FName* PropertyName); // Function Engine.KismetSystemLibrary.*9d08bee59a // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x662a88c
	bool K2_SetTimer(); // Function Engine.KismetSystemLibrary.K2_SetTimer // Final|Native|Static|Public|BlueprintCallable // @ game+0x660df20
	struct UObject* *eba6909dac(); // Function Engine.KismetSystemLibrary.*eba6909dac // Final|Native|Static|Public|BlueprintCallable // @ game+0x660e408
	void *5f095b5001(struct UObject** WorldContextObject, float* Radius, struct FLinearColor* LineColor); // Function Engine.KismetSystemLibrary.*5f095b5001 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65f7db4
	void *e9820c9d64(); // Function Engine.KismetSystemLibrary.*e9820c9d64 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6632150
	float CapsuleTraceMultiByProfile(struct FVector* Start, float* Radius, struct FName* ProfileName, bool bTraceComplex); // Function Engine.KismetSystemLibrary.CapsuleTraceMultiByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65ef134
	void *287481693e(); // Function Engine.KismetSystemLibrary.*287481693e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660c5dc
	void *ff61e203e9(); // Function Engine.KismetSystemLibrary.*ff61e203e9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x660dd34
	void *2a203ee725(); // Function Engine.KismetSystemLibrary.*2a203ee725 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc91d1c
	void *19c7bc693a(); // Function Engine.KismetSystemLibrary.*19c7bc693a // Final|Native|Static|Public|BlueprintCallable // @ game+0xbf00fc
	void *667b9a2210(); // Function Engine.KismetSystemLibrary.*667b9a2210 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6602eac
	void ShowPlatformSpecificLeaderboardScreen(); // Function Engine.KismetSystemLibrary.ShowPlatformSpecificLeaderboardScreen // Final|Native|Static|Public|BlueprintCallable // @ game+0x66321d0
	struct UClass* ComponentOverlapComponents(struct TArray<struct AActor*>* ActorsToIgnore); // Function Engine.KismetSystemLibrary.ComponentOverlapComponents // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65f1aa4
	void *04ccf0f043(); // Function Engine.KismetSystemLibrary.*04ccf0f043 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xa1f530
	struct FName *c24855ea13(); // Function Engine.KismetSystemLibrary.*c24855ea13 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x662f830
	struct UObject* *c66046971d(struct F*da672abddc* Handle); // Function Engine.KismetSystemLibrary.*c66046971d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660d9b8
	struct FHitResult BoxTraceSingle(struct FVector* Start, bool bIgnoreSelf, struct FLinearColor* TraceHitColor); // Function Engine.KismetSystemLibrary.BoxTraceSingle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65ebc14
	struct F*da672abddc *34def02d86(); // Function Engine.KismetSystemLibrary.*34def02d86 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660d078
	struct FLinearColor *4df8de41f8(float* Duration); // Function Engine.KismetSystemLibrary.*4df8de41f8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65f7884
	void *c2f69187f8(); // Function Engine.KismetSystemLibrary.*c2f69187f8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xce5ed8
	float *9b01fb77f6(); // Function Engine.KismetSystemLibrary.*9b01fb77f6 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65f7698
	void *951da7978b(struct UObject** Object, struct FName* PropertyName); // Function Engine.KismetSystemLibrary.*951da7978b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66221a0
	void *decd3f36e1(); // Function Engine.KismetSystemLibrary.*decd3f36e1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x660bed4
	int32 *f1afd8a6a3(); // Function Engine.KismetSystemLibrary.*f1afd8a6a3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6612c54
	bool *81305aa064(); // Function Engine.KismetSystemLibrary.*81305aa064 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f2de8
	float LineTraceSingleByProfile(struct UObject** WorldContextObject, struct FVector* End); // Function Engine.KismetSystemLibrary.LineTraceSingleByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6610b7c
	void OnAssetClassLoaded__DelegateSignature(); // DelegateFunction Engine.KismetSystemLibrary.OnAssetClassLoaded__DelegateSignature // Public|Delegate // @ game+0x2cd4ac
	bool LineTraceSingle(struct UObject** WorldContextObject, struct FLinearColor* TraceColor, float* DrawTime); // Function Engine.KismetSystemLibrary.LineTraceSingle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66106cc
	void IsValid(struct UObject** Object); // Function Engine.KismetSystemLibrary.IsValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xa1f530
	struct FString *20571d6a48(); // Function Engine.KismetSystemLibrary.*20571d6a48 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660d7c4
	void *161665975c(DelegateProperty* Delegate); // Function Engine.KismetSystemLibrary.*161665975c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660d5fc
	void *98eb6ca627(); // Function Engine.KismetSystemLibrary.*98eb6ca627 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65f1778
	void *2a7e2a921f(); // Function Engine.KismetSystemLibrary.*2a7e2a921f // Final|Native|Static|Public|BlueprintCallable // @ game+0x5875e0c
	struct FName *c518dd1480(); // Function Engine.KismetSystemLibrary.*c518dd1480 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6622384
	void StackTrace(); // Function Engine.KismetSystemLibrary.StackTrace // Final|Native|Static|Public|BlueprintCallable // @ game+0x66372e8
	void ForceCloseAdBanner(); // Function Engine.KismetSystemLibrary.ForceCloseAdBanner // Final|Native|Static|Public|BlueprintCallable // @ game+0x65fb9f4
	void *7b53bf6cf0(); // Function Engine.KismetSystemLibrary.*7b53bf6cf0 // Final|Native|Static|Public|BlueprintCallable // @ game+0x660bf1c
	bool SphereTraceSingleForObjects(struct TArray<struct AActor*>* ActorsToIgnore, struct FHitResult* OutHit, struct FLinearColor* TraceColor, float* DrawTime); // Function Engine.KismetSystemLibrary.SphereTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6636c74
	struct UObject* *e17fe62040(); // Function Engine.KismetSystemLibrary.*e17fe62040 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65f2974
	struct FString *e0a369cb20(); // Function Engine.KismetSystemLibrary.*e0a369cb20 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65f93bc
	void *bc9a8fd8e4(struct UObject** WorldContextObject); // Function Engine.KismetSystemLibrary.*bc9a8fd8e4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x661f134
	bool SphereTraceSingleByProfile(struct TArray<struct AActor*>* ActorsToIgnore, struct FHitResult* OutHit, struct FLinearColor* TraceColor, float* DrawTime); // Function Engine.KismetSystemLibrary.SphereTraceSingleByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x663677c
	struct FName *5b7a1324b3(); // Function Engine.KismetSystemLibrary.*5b7a1324b3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66245f4
	void *d532e99e84(); // Function Engine.KismetSystemLibrary.*d532e99e84 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6612e1c
	void *c5ba6a16bd(); // Function Engine.KismetSystemLibrary.*c5ba6a16bd // Final|Native|Static|Public|BlueprintCallable // @ game+0x65f3c58
	struct TArray<enum class EObjectTypeQuery> ComponentOverlapActors(struct UClass** ActorClassFilter, struct TArray<struct AActor*>* ActorsToIgnore); // Function Engine.KismetSystemLibrary.ComponentOverlapActors // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65f178c
	void PrintWarning(); // Function Engine.KismetSystemLibrary.PrintWarning // Final|Native|Static|Public|BlueprintCallable // @ game+0x5893f40
	int32 ShowAdBanner(); // Function Engine.KismetSystemLibrary.ShowAdBanner // Final|Native|Static|Public|BlueprintCallable // @ game+0x6631edc
	float CapsuleTraceSingle(struct FVector* Start, float* Radius, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex); // Function Engine.KismetSystemLibrary.CapsuleTraceSingle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65efbd0
	void *8d876947c6(); // Function Engine.KismetSystemLibrary.*8d876947c6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x660dc90
	float *ea4b5523b1(struct FVector* Origin); // Function Engine.KismetSystemLibrary.*ea4b5523b1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65f6ae8
	void *28befb73a1(struct TArray<struct FIntPoint>* Resolutions); // Function Engine.KismetSystemLibrary.*28befb73a1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65fdfd8
	struct FHitResult SphereTraceSingle(struct UObject** WorldContextObject, bool bIgnoreSelf, struct FLinearColor* TraceHitColor); // Function Engine.KismetSystemLibrary.SphereTraceSingle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6636284
	void *6c78d42173(); // Function Engine.KismetSystemLibrary.*6c78d42173 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65ff058
	struct FLinearColor *41c9272ac9(); // Function Engine.KismetSystemLibrary.*41c9272ac9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65f7c28
	void *183018b5d7(); // Function Engine.KismetSystemLibrary.*183018b5d7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5875e0c
	enum class EDrawDebugTrace CapsuleTraceSingleByProfile(struct UObject** WorldContextObject, struct FHitResult* OutHit, struct FLinearColor* TraceColor, float* DrawTime); // Function Engine.KismetSystemLibrary.CapsuleTraceSingleByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65f0120
	struct UClass* SphereOverlapComponents(struct TArray<struct AActor*>* ActorsToIgnore); // Function Engine.KismetSystemLibrary.SphereOverlapComponents // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66350bc
	void *30f8026b03(); // Function Engine.KismetSystemLibrary.*30f8026b03 // Final|Native|Static|Public|BlueprintCallable // @ game+0x583c5a8
	void *e4a35b5951(); // Function Engine.KismetSystemLibrary.*e4a35b5951 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x662f4a4
	struct UObject* *fc82f37268(struct FName* PropertyName); // Function Engine.KismetSystemLibrary.*fc82f37268 // Final|Native|Static|Public|BlueprintCallable // @ game+0xb86edc
	void *2c2c7de7a9(); // Function Engine.KismetSystemLibrary.*2c2c7de7a9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6631fcc
	struct UClass* *4d86403552(); // Function Engine.KismetSystemLibrary.*4d86403552 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65fc33c
	float SphereTraceMulti(struct FVector* Start, float* Radius, struct TArray<struct AActor*>* ActorsToIgnore); // Function Engine.KismetSystemLibrary.SphereTraceMulti // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66353cc
	void *bc42125aca(); // Function Engine.KismetSystemLibrary.*bc42125aca // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65ffbc0
	void *97b4c3728b(); // Function Engine.KismetSystemLibrary.*97b4c3728b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660bc94
	bool LineTraceMultiByProfile(struct TArray<struct AActor*>* ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, bool bIgnoreSelf, struct FLinearColor* TraceHitColor); // Function Engine.KismetSystemLibrary.LineTraceMultiByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x660fd80
	struct UObject* SetSuppressViewportTransitionMessage(); // Function Engine.KismetSystemLibrary.SetSuppressViewportTransitionMessage // Final|Native|Static|Public|BlueprintCallable // @ game+0x662e2c8
	float SphereTraceMultiByProfile(struct FVector* Start, float* Radius, struct TArray<struct AActor*>* ActorsToIgnore); // Function Engine.KismetSystemLibrary.SphereTraceMultiByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66358a4
	void *a6adf9ba27(struct UObject** WorldContextObject); // Function Engine.KismetSystemLibrary.*a6adf9ba27 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65ffcbc
	struct FLinearColor *9618025b24(struct UObject** WorldContextObject); // Function Engine.KismetSystemLibrary.*9618025b24 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65f7fcc
	void LaunchURL(); // Function Engine.KismetSystemLibrary.LaunchURL // Final|Native|Static|Public|BlueprintCallable // @ game+0x660ec8c
	void *cebe33a114(DelegateProperty* Delegate); // Function Engine.KismetSystemLibrary.*cebe33a114 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660e248
	float DrawDebugCone(struct UObject** WorldContextObject); // Function Engine.KismetSystemLibrary.DrawDebugCone // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65f6ae8
	void *fb030c815b(struct UObject** WorldContextObject); // Function Engine.KismetSystemLibrary.*fb030c815b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xc10aa4
	struct FString *31a4c33dbf(); // Function Engine.KismetSystemLibrary.*31a4c33dbf // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6612cdc
	struct AActor* GetActorBounds(struct FVector* Origin); // Function Engine.KismetSystemLibrary.GetActorBounds // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65fc1f8
	struct TArray<struct AActor*> CapsuleTraceSingleForObjects(struct FVector* Start, enum class EDrawDebugTrace DrawDebugType, bool bIgnoreSelf, struct FLinearColor* TraceHitColor); // Function Engine.KismetSystemLibrary.CapsuleTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65f066c
	struct FLinearColor *9aa6ae5df3(float* Duration); // Function Engine.KismetSystemLibrary.*9aa6ae5df3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65f6fa0
	void *35a77b3207(struct UObject** TestObject); // Function Engine.KismetSystemLibrary.*35a77b3207 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f5d6c
	void *d627f9034d(); // Function Engine.KismetSystemLibrary.*d627f9034d // Final|Native|Static|Public|BlueprintCallable // @ game+0xbf00fc
	struct FLinearColor *6a8f4ae366(); // Function Engine.KismetSystemLibrary.*6a8f4ae366 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65f6490
	DelegateProperty *726e245487(struct UObject** Asset); // Function Engine.KismetSystemLibrary.*726e245487 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66117d4
	void *44abf6bf24(struct UClass** AssetClass); // Function Engine.KismetSystemLibrary.*44abf6bf24 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65f2874
};

// Class Engine.GameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UGameplayStatics : UBlueprintFunctionLibrary {

	int32 *1e93fcf94d(); // Function Engine.GameplayStatics.*1e93fcf94d // Final|Native|Static|Public|BlueprintCallable // @ game+0x6611c04
	void *c21e4f6c10(struct UObject** WorldContextObject); // Function Engine.GameplayStatics.*c21e4f6c10 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6608a48
	void *4f415ee07f(struct UObject** WorldContextObject); // Function Engine.GameplayStatics.*4f415ee07f // Final|Native|Static|Public|BlueprintCallable // @ game+0x65fe3b0
	struct TArray<struct AActor*> *52400f2fd3(); // Function Engine.GameplayStatics.*52400f2fd3 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65fbf4c
	void *290efe9a28(); // Function Engine.GameplayStatics.*290efe9a28 // Final|Native|Static|Public|BlueprintCallable // @ game+0x662e238
	bool SpawnEmitterAttached(struct UParticleSystem** EmitterTemplate, struct FName* AttachPointName); // Function Engine.GameplayStatics.SpawnEmitterAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x663385c
	struct FString *8dba477f5c(int32* DefaultValue); // Function Engine.GameplayStatics.*8dba477f5c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6601ac8
	int32 MakeHitResult(bool bBlockingHit, float* Time, int32* FaceIndex, struct FVector* TraceEnd); // Function Engine.GameplayStatics.MakeHitResult // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6612648
	float Blueprint_PredictProjectilePath_ByObjectType(float* ProjectileRadius, struct TArray<struct AActor*>* ActorsToIgnore, float* DrawDebugTime); // Function Engine.GameplayStatics.Blueprint_PredictProjectilePath_ByObjectType // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e948c
	struct UObject* *06497b5b84(); // Function Engine.GameplayStatics.*06497b5b84 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65fcd14
	void GetPlayerCameraManager(int32* PlayerIndex); // Function Engine.GameplayStatics.GetPlayerCameraManager // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x74d5b4
	float *418d031656(float* StartTime, bool bAutoDestroy); // Function Engine.GameplayStatics.*418d031656 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6633e08
	void *4b18db3482(struct FHitResult* Hit); // Function Engine.GameplayStatics.*4b18db3482 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660610c
	struct FVector *51985747a5(); // Function Engine.GameplayStatics.*51985747a5 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f5328
	void *f36a40c6fe(struct UObject** WorldContextObject, struct FName* TagName, float* Volume); // Function Engine.GameplayStatics.*f36a40c6fe // Final|Native|Static|Public|BlueprintCallable // @ game+0x65e3b20
	struct UClass* CreateSaveGameObject(); // Function Engine.GameplayStatics.CreateSaveGameObject // Final|Native|Static|Public|BlueprintCallable // @ game+0x65f3f24
	void ClearSoundMixModifiers(); // Function Engine.GameplayStatics.ClearSoundMixModifiers // Final|Native|Static|Public|BlueprintCallable // @ game+0x65f1578
	void *88e89167df(struct UObject** WorldContextObject); // Function Engine.GameplayStatics.*88e89167df // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6630590
	void *a38b6056e2(); // Function Engine.GameplayStatics.*a38b6056e2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65ffd58
	struct FRotator SpawnSoundAttached(enum class EAttachLocation LocationType, float* VolumeMultiplier, float* StartTime, struct USoundConcurrency** ConcurrencySettings); // Function Engine.GameplayStatics.SpawnSoundAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6634938
	float ApplyRadialDamage(struct UClass** DamageTypeClass, struct AActor** DamageCauser, bool bDoFullDamage); // Function Engine.GameplayStatics.ApplyRadialDamage // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e69cc
	float SetGlobalPitchModulation(); // Function Engine.GameplayStatics.SetGlobalPitchModulation // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6627e74
	struct UObject* *deb5dd14c5(struct USoundBase** Sound, float* PitchMultiplier, struct USoundConcurrency** ConcurrencySettings, bool bAutoDestroy); // Function Engine.GameplayStatics.*deb5dd14c5 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x65f4044
	struct F*9c587af3e5 *5c65ad1df7(); // Function Engine.GameplayStatics.*5c65ad1df7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65e92c0
	void *05d2957cfe(); // Function Engine.GameplayStatics.*05d2957cfe // Final|Native|Static|Public|BlueprintCallable // @ game+0x65fb974
	void CreateSaveGameObjectFromBlueprint(struct UBlueprint** SaveGameBlueprint); // Function Engine.GameplayStatics.CreateSaveGameObjectFromBlueprint // Final|Native|Static|Public|BlueprintCallable // @ game+0x65f3fb4
	bool *73068e84ab(); // Function Engine.GameplayStatics.*73068e84ab // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661c3d4
	void *ab758b3813(struct UObject** Object); // Function Engine.GameplayStatics.*ab758b3813 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6602dd4
	void *b70c6ddb2b(int32* UserIndex); // Function Engine.GameplayStatics.*b70c6ddb2b // Final|Native|Static|Public|BlueprintCallable // @ game+0x65f51e4
	struct AActor* BeginSpawningActorFromClass(); // Function Engine.GameplayStatics.BeginSpawningActorFromClass // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e8c9c
	int32 BreakHitResult(struct FHitResult* Hit, bool bInitialOverlap, struct FVector* Location, struct FVector* TraceStart); // Function Engine.GameplayStatics.BreakHitResult // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65ed2e4
	void SetGlobalTimeDilation(); // Function Engine.GameplayStatics.SetGlobalTimeDilation // Final|Native|Static|Public|BlueprintCallable // @ game+0x6627f8c
	float *12397c8524(float* StartTime); // Function Engine.GameplayStatics.*12397c8524 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x661a124
	void *8714469c83(struct FName* PackageName); // Function Engine.GameplayStatics.*8714469c83 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6605f6c
	struct FName UnloadStreamLevel(); // Function Engine.GameplayStatics.UnloadStreamLevel // Final|Native|Static|Public|BlueprintCallable // @ game+0x66392e4
	struct UObject* *5c09821ac0(struct FVector* WorldLocation); // Function Engine.GameplayStatics.*5c09821ac0 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661e3f4
	void *81d730fd91(); // Function Engine.GameplayStatics.*81d730fd91 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x74d540
	struct UClass* *2285494da1(); // Function Engine.GameplayStatics.*2285494da1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65ff910
	struct UObject* *cc977ddc21(); // Function Engine.GameplayStatics.*cc977ddc21 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65fc678
	float SetGlobalListenerFocusParameters(float* FocusAzimuthScale); // Function Engine.GameplayStatics.SetGlobalListenerFocusParameters // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6627b78
	void *cdcc748d2e(struct UObject** WorldContextObject, struct FVector* DecalSize, struct FRotator* Rotation); // Function Engine.GameplayStatics.*cdcc748d2e // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6632660
	int32 *81606fcc59(); // Function Engine.GameplayStatics.*81606fcc59 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6603764
	struct UObject* *de30ff6d5d(); // Function Engine.GameplayStatics.*de30ff6d5d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660bd24
	void *d8be069179(struct FString* SlotName); // Function Engine.GameplayStatics.*d8be069179 // Final|Native|Static|Public|BlueprintCallable // @ game+0x661f5f8
	bool OpenLevel(); // Function Engine.GameplayStatics.OpenLevel // Final|Native|Static|Public|BlueprintCallable // @ game+0x6618ffc
	void *4b3fd92ab9(bool bOnlyCollidingComponents); // Function Engine.GameplayStatics.*4b3fd92ab9 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65fc020
	void *e49eda3d65(); // Function Engine.GameplayStatics.*e49eda3d65 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65ee47c
	float SetSoundMixClassOverride(); // Function Engine.GameplayStatics.SetSoundMixClassOverride // Final|Native|Static|Public|BlueprintCallable // @ game+0x662cb4c
	struct TArray<struct AActor*> *a9adf05817(struct TArray<struct FVector>* OutPathPositions, enum class EDrawDebugTrace DrawDebugType, float* SimFrequency, float* OverrideGravityZ); // Function Engine.GameplayStatics.*a9adf05817 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e9b20
	float *c89049c8dd(struct USoundAttenuation** AttenuationSettings); // Function Engine.GameplayStatics.*c89049c8dd // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x661ab7c
	struct USoundAttenuation* SpawnDialogueAttached(struct UDialogueWave** Dialogue, struct USceneComponent** AttachToComponent, bool bAutoDestroy); // Function Engine.GameplayStatics.SpawnDialogueAttached // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66331d8
	void *596807c57c(struct FString* Options); // Function Engine.GameplayStatics.*596807c57c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6619498
	struct APlayerController* *744520caf0(); // Function Engine.GameplayStatics.*744520caf0 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6603914
	int32 GetPlayerPawn(); // Function Engine.GameplayStatics.GetPlayerPawn // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc89a9c
	void *3def385924(struct APlayerController** Player); // Function Engine.GameplayStatics.*3def385924 // Final|Native|Static|Public|BlueprintCallable // @ game+0x662b840
	bool *8e8a750320(); // Function Engine.GameplayStatics.*8e8a750320 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6634304
	void *daba6b1326(); // Function Engine.GameplayStatics.*daba6b1326 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6609e9c
	struct FString *61c50d4e40(); // Function Engine.GameplayStatics.*61c50d4e40 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6601c58
	struct UObject* *dc6bc4ad84(); // Function Engine.GameplayStatics.*dc6bc4ad84 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66069cc
	void BeginSpawningActorFromBlueprint(struct UBlueprint** Blueprint, bool bNoCollisionFail); // Function Engine.GameplayStatics.BeginSpawningActorFromBlueprint // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e8acc
	int32 *8b280aebf2(); // Function Engine.GameplayStatics.*8b280aebf2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65fbe0c
	struct FName LoadStreamLevel(bool bMakeVisibleAfterLoad); // Function Engine.GameplayStatics.LoadStreamLevel // Final|Native|Static|Public|BlueprintCallable // @ game+0x6611db0
	float *f29f0150d6(struct UObject** WorldContextObject); // Function Engine.GameplayStatics.*f29f0150d6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x661ae94
	struct UObject* *a9a1339d58(bool bRemovePrefixString); // Function Engine.GameplayStatics.*a9a1339d58 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65fe274
	bool *ae2651618f(struct UObject** WorldContextObject, struct FVector* Location); // Function Engine.GameplayStatics.*ae2651618f // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6633688
	int32 *d16dbecb58(); // Function Engine.GameplayStatics.*d16dbecb58 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660383c
	void SetBaseSoundMix(struct UObject** WorldContextObject); // Function Engine.GameplayStatics.SetBaseSoundMix // Final|Native|Static|Public|BlueprintCallable // @ game+0x6622600
	struct USoundClass* ClearSoundMixClassOverride(); // Function Engine.GameplayStatics.ClearSoundMixClassOverride // Final|Native|Static|Public|BlueprintCallable // @ game+0x65f1410
	struct UClass* GetAllActorsOfClass(); // Function Engine.GameplayStatics.GetAllActorsOfClass // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xca604c
	void *1a59627d4e(struct FVector* WorldLocation); // Function Engine.GameplayStatics.*1a59627d4e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661e500
	struct UObject* PopSoundMixModifier(); // Function Engine.GameplayStatics.PopSoundMixModifier // Final|Native|Static|Public|BlueprintCallable // @ game+0x661bca8
	struct UClass* *6e3d67b9ba(struct FTransform* SpawnTransform, struct AActor** Owner); // Function Engine.GameplayStatics.*6e3d67b9ba // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x383894
	struct UClass* *b96360052d(); // Function Engine.GameplayStatics.*b96360052d // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x65e6184
	struct AActor* *bc9ce05f1b(float* BaseDamage, struct FHitResult* HitInfo, struct AActor** DamageCauser); // Function Engine.GameplayStatics.*bc9ce05f1b // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e6718
	float *909f898eae(); // Function Engine.GameplayStatics.*909f898eae // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6619ed0
	enum class ECollisionChannel *bb0f714fc6(struct UObject** WorldContextObject, float* MinimumDamage, float* DamageInnerRadius); // Function Engine.GameplayStatics.*bb0f714fc6 // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e6d8c
	float SpawnDecalAttached(struct FVector* DecalSize, struct FName* AttachPointName); // Function Engine.GameplayStatics.SpawnDecalAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x66328a0
	struct USoundBase* *50483527cf(struct FVector* Location, float* VolumeMultiplier, float* StartTime, struct USoundConcurrency** ConcurrencySettings); // Function Engine.GameplayStatics.*50483527cf // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x66345c4
	struct UObject* *d682985400(); // Function Engine.GameplayStatics.*d682985400 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6634228
	void *1a6deb3f38(struct FVector* OutLaunchVelocity, struct FVector* EndPos, float* ArcParam); // Function Engine.GameplayStatics.*1a6deb3f38 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6637c94
	float *56b14a1f48(bool bAutoDestroy); // Function Engine.GameplayStatics.*56b14a1f48 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6632b80
	void *a31fc339ab(); // Function Engine.GameplayStatics.*a31fc339ab // Final|Native|Static|Public|BlueprintCallable // @ game+0x65f4ac0
	enum class ESuggestProjVelocityTraceOption *acf4f0f0dc(float* CollisionRadius, bool bDrawDebug); // Function Engine.GameplayStatics.*acf4f0f0dc // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x65e8ee8
	void *254c0ee437(); // Function Engine.GameplayStatics.*254c0ee437 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65f84d0
	struct UObject* *5f89e8cd71(); // Function Engine.GameplayStatics.*5f89e8cd71 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6607950
	struct UObject* GetGameState(); // Function Engine.GameplayStatics.GetGameState // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xda6e8c
	void *9abaedd55d(struct UStaticMesh** StaticMesh, float* Radius); // Function Engine.GameplayStatics.*9abaedd55d // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6609460
	float *5ffe8affd8(); // Function Engine.GameplayStatics.*5ffe8affd8 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x661a978
	void *acba2e24f8(struct UObject** WorldContextObject, bool bSpawnPawn); // Function Engine.GameplayStatics.*acba2e24f8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65f3e04
	struct UObject* *0d055350c8(); // Function Engine.GameplayStatics.*0d055350c8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65ffaa0
	struct FTransform FinishSpawningActor(); // Function Engine.GameplayStatics.FinishSpawningActor // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0xc293ec
	void *23a8ae7d21(struct FString* SlotName); // Function Engine.GameplayStatics.*23a8ae7d21 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65f5e44
	struct UObject* GetGameMode(); // Function Engine.GameplayStatics.GetGameMode // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65ffb30
	struct UObject* PushSoundMixModifier(); // Function Engine.GameplayStatics.PushSoundMixModifier // Final|Native|Static|Public|BlueprintCallable // @ game+0x661c560
	void *027d6ef4e2(struct FVector* Location); // Function Engine.GameplayStatics.*027d6ef4e2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x65e73bc
	void RemovePlayer(); // Function Engine.GameplayStatics.RemovePlayer // Final|Native|Static|Public|BlueprintCallable // @ game+0x661eabc
	struct UObject* *cbdb0e953d(); // Function Engine.GameplayStatics.*cbdb0e953d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6608560
	bool *2ec9cd3fa9(struct UObject** WorldContextObject, struct FDialogueContext* Context, struct FRotator* Rotation, float* PitchMultiplier); // Function Engine.GameplayStatics.*2ec9cd3fa9 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6632e24
	void *4cf979fd4a(); // Function Engine.GameplayStatics.*4cf979fd4a // Final|Native|Static|Public|BlueprintCallable // @ game+0x65e74f8
	void *9acaf12c66(struct UObject** WorldContextObject); // Function Engine.GameplayStatics.*9acaf12c66 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6627a6c
	struct FVector2D *75f63dee5f(struct FHitResult* Hit); // Function Engine.GameplayStatics.*75f63dee5f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65fa508
	struct UClass* *44bcc077b5(); // Function Engine.GameplayStatics.*44bcc077b5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65fc518
	bool *397189e76f(struct UForceFeedbackEffect** ForceFeedbackEffect, struct FRotator* Rotation); // Function Engine.GameplayStatics.*397189e76f // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6633ad8
	struct FString *e3bef91633(struct FString* InKey); // Function Engine.GameplayStatics.*e3bef91633 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660a1e0
};

// Class Engine.HeadMountedDisplayFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary {

	void *1df48cdd45(); // Function Engine.HeadMountedDisplayFunctionLibrary.*1df48cdd45 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65ffe00
	void *37f63aa8b6(); // Function Engine.HeadMountedDisplayFunctionLibrary.*37f63aa8b6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660bdc8
	float *f65398ca98(float* CameraDistance); // Function Engine.HeadMountedDisplayFunctionLibrary.*f65398ca98 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6603c8c
	void *6164700c34(bool bEnable); // Function Engine.HeadMountedDisplayFunctionLibrary.*6164700c34 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65f83f0
	void *4081271a01(); // Function Engine.HeadMountedDisplayFunctionLibrary.*4081271a01 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5875e0c
	float *6e168b27ae(); // Function Engine.HeadMountedDisplayFunctionLibrary.*6e168b27ae // Final|Native|Static|Public|BlueprintCallable // @ game+0x661eee8
	void *74f45acb76(); // Function Engine.HeadMountedDisplayFunctionLibrary.*74f45acb76 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66059f8
	void SetTrackingOrigin(); // Function Engine.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin // Final|Native|Static|Public|BlueprintCallable // @ game+0x662ee18
	void *4ed5ee1b0b(); // Function Engine.HeadMountedDisplayFunctionLibrary.*4ed5ee1b0b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xaca7dc
	float *b99c6b2e91(); // Function Engine.HeadMountedDisplayFunctionLibrary.*b99c6b2e91 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6624234
	void *a3f993a856(); // Function Engine.HeadMountedDisplayFunctionLibrary.*a3f993a856 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6602d78
	void *e93e62a833(bool bUseFocus); // Function Engine.HeadMountedDisplayFunctionLibrary.*e93e62a833 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x66081cc
	void *92b2fe5787(); // Function Engine.HeadMountedDisplayFunctionLibrary.*92b2fe5787 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660be10
	void GetTrackingOrigin(); // Function Engine.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6606ec0
	struct FRotator *53161607a0(); // Function Engine.HeadMountedDisplayFunctionLibrary.*53161607a0 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6603248
	void *418536f38a(); // Function Engine.HeadMountedDisplayFunctionLibrary.*418536f38a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660a378
	void *162db17148(); // Function Engine.HeadMountedDisplayFunctionLibrary.*162db17148 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6608d78
	struct UObject* *9a9880bb37(); // Function Engine.HeadMountedDisplayFunctionLibrary.*9a9880bb37 // Final|Native|Static|Public|BlueprintCallable // @ game+0x663072c
	bool *2f90f4b532(struct FRotator* Rotation, float* RightFOV, float* BottomFOV, float* NearPlane); // Function Engine.HeadMountedDisplayFunctionLibrary.*2f90f4b532 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6606f04
};

// Class Engine.KismetArrayLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetArrayLibrary : UBlueprintFunctionLibrary {

	struct TArray<int32> *3e0cae27ee(); // Function Engine.KismetArrayLibrary.*3e0cae27ee // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xbaaf88
	void *bd23358a61(struct TArray<struct AActor*>* TargetArray, struct UClass** FilterClass); // Function Engine.KismetArrayLibrary.*bd23358a61 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65f9ed4
	struct TArray<int32> *4e0831cbb7(); // Function Engine.KismetArrayLibrary.*4e0831cbb7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65e8260
	void *3d4c52de5d(); // Function Engine.KismetArrayLibrary.*3d4c52de5d // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65e83b8
	void *edb1454eaf(); // Function Engine.KismetArrayLibrary.*edb1454eaf // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xc3d720
	int32 *00d985f0ac(); // Function Engine.KismetArrayLibrary.*00d985f0ac // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65e8038
	int32 Array_Add(); // Function Engine.KismetArrayLibrary.Array_Add // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xbaad64
	void *c7e496d0f1(int32* NewItem); // Function Engine.KismetArrayLibrary.*c7e496d0f1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65e79b0
	int32 Array_Get(); // Function Engine.KismetArrayLibrary.Array_Get // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xbf6940
	void *a189c9ba0e(struct TArray<int32>* TargetArray); // Function Engine.KismetArrayLibrary.*a189c9ba0e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xc29908
	void *6fe3d569ed(); // Function Engine.KismetArrayLibrary.*6fe3d569ed // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65e7ee0
	int32 *0474e70011(); // Function Engine.KismetArrayLibrary.*0474e70011 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65e7520
	void *a680fb998f(struct TArray<int32>* TargetArray); // Function Engine.KismetArrayLibrary.*a680fb998f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65e7dc8
	struct FName *b17182140b(); // Function Engine.KismetArrayLibrary.*b17182140b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6621f00
	int32 *9be185fcee(); // Function Engine.KismetArrayLibrary.*9be185fcee // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65e7c5c
	void Array_Clear(); // Function Engine.KismetArrayLibrary.Array_Clear // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xb99fd0
	int32 *b6799d17e7(); // Function Engine.KismetArrayLibrary.*b6799d17e7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x3a7938
	void *670167ba2c(struct TArray<int32>* TargetArray); // Function Engine.KismetArrayLibrary.*670167ba2c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65e7788
};

// Class Engine.*5db0dd8e7c
// Size: 0x28 (Inherited: 0x28)
struct U*5db0dd8e7c : UBlueprintFunctionLibrary {

	void *e3e6ff7cca(); // Function Engine.*5db0dd8e7c.*e3e6ff7cca // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x660b1e0
	struct FGuid *6afb14f2ae(); // Function Engine.*5db0dd8e7c.*6afb14f2ae // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f863c
	void *abe7452303(struct FGuid* A); // Function Engine.*5db0dd8e7c.*abe7452303 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66188dc
	void *5789de7033(); // Function Engine.*5db0dd8e7c.*5789de7033 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x660c8a8
	struct FGuid *0ac8a53f84(); // Function Engine.*5db0dd8e7c.*0ac8a53f84 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6619648
	void *59d7374302(); // Function Engine.*5db0dd8e7c.*59d7374302 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6617fbc
	void *b407398bdb(struct FGuid* InGuid); // Function Engine.*5db0dd8e7c.*b407398bdb // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f30a4
};

// Class Engine.KismetInputLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetInputLibrary : UBlueprintFunctionLibrary {

	struct F*174cd056c7 *d5cac75fd3(); // Function Engine.KismetInputLibrary.*d5cac75fd3 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661b350
	struct F*174cd056c7 *ac097c6099(); // Function Engine.KismetInputLibrary.*ac097c6099 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x7b81ec
	void *b310ed1f9c(struct FKey* Key); // Function Engine.KismetInputLibrary.*b310ed1f9c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660e6f0
	void *9d0ecefa36(struct F*7bb599ef25* Input); // Function Engine.KismetInputLibrary.*9d0ecefa36 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65fc7c4
	struct FKey *edfdb221bb(); // Function Engine.KismetInputLibrary.*edfdb221bb // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660eac4
	struct F*9ffd49d3c3 *6e5b366b83(); // Function Engine.KismetInputLibrary.*6e5b366b83 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660ab4c
	void *8a67fee2e5(); // Function Engine.KismetInputLibrary.*8a67fee2e5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660eba8
	struct FKey *d3a3fdf6d0(); // Function Engine.KismetInputLibrary.*d3a3fdf6d0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xb8c5b8
	struct F*174cd056c7 *5c1afa8ef3(); // Function Engine.KismetInputLibrary.*5c1afa8ef3 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661b448
	void *19d10fbfe8(struct F*9ffd49d3c3* Input); // Function Engine.KismetInputLibrary.*19d10fbfe8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660a728
	void *d638971a29(); // Function Engine.KismetInputLibrary.*d638971a29 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660acf0
	struct FKeyEvent GetKey(); // Function Engine.KismetInputLibrary.GetKey // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xba4e5c
	struct FKey *bfe0ac15fc(); // Function Engine.KismetInputLibrary.*bfe0ac15fc // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660e8b8
	void *27749d5a67(struct F*9ffd49d3c3* Input); // Function Engine.KismetInputLibrary.*27749d5a67 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660a7fc
	void *0d314d1a4b(struct F*4396e9090b* A); // Function Engine.KismetInputLibrary.*0d314d1a4b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f876c
	struct F*9ffd49d3c3 *e5dc0f1b2e(); // Function Engine.KismetInputLibrary.*e5dc0f1b2e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660b038
	void *25dae1824f(struct F*9ffd49d3c3* Input); // Function Engine.KismetInputLibrary.*25dae1824f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660ac20
	void *8da893eb4e(struct FKey* Key); // Function Engine.KismetInputLibrary.*8da893eb4e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660e9e0
	struct F*9ffd49d3c3 *790699f65c(); // Function Engine.KismetInputLibrary.*790699f65c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660a8d0
	struct FControllerEvent *a2507ed776(); // Function Engine.KismetInputLibrary.*a2507ed776 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65f255c
	void *852b2751c9(struct FControllerEvent* Input); // Function Engine.KismetInputLibrary.*852b2751c9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65f263c
	void *d0bd0c8697(struct F*9ffd49d3c3* Input); // Function Engine.KismetInputLibrary.*d0bd0c8697 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660ae90
	struct FKey *69bae67b24(); // Function Engine.KismetInputLibrary.*69bae67b24 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660e7d4
	struct F*174cd056c7 *9e06e4b15f(); // Function Engine.KismetInputLibrary.*9e06e4b15f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x661b724
	void *675afc6e4f(); // Function Engine.KismetInputLibrary.*675afc6e4f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x65f2794
	void *c12b9acf4e(); // Function Engine.KismetInputLibrary.*c12b9acf4e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x661b540
	struct FKeyEvent GetUserIndex(); // Function Engine.KismetInputLibrary.GetUserIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66080b0
	void *ddf18f9768(struct F*174cd056c7* Input); // Function Engine.KismetInputLibrary.*ddf18f9768 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x661b810
	void *816d98b422(); // Function Engine.KismetInputLibrary.*816d98b422 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661b62c
	struct F*174cd056c7 *48fdad9d8b(); // Function Engine.KismetInputLibrary.*48fdad9d8b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661b100
	struct F*9ffd49d3c3 *6fba217004(); // Function Engine.KismetInputLibrary.*6fba217004 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660aa78
	void *9788bc88fa(struct F*9ffd49d3c3* Input); // Function Engine.KismetInputLibrary.*9788bc88fa // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660a9a4
	void *83c0abc753(); // Function Engine.KismetInputLibrary.*83c0abc753 // Final|Native|Static|Public|BlueprintCallable // @ game+0x65ee390
	struct F*9ffd49d3c3 *85c5a36a04(); // Function Engine.KismetInputLibrary.*85c5a36a04 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660b10c
	struct FKey *a6bfc09b0a(); // Function Engine.KismetInputLibrary.*a6bfc09b0a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f89e0
	void *b4efd2e7c6(struct F*9ffd49d3c3* Input); // Function Engine.KismetInputLibrary.*b4efd2e7c6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660adbc
	void *cb762f1b43(); // Function Engine.KismetInputLibrary.*cb762f1b43 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x661b1f8
	struct F*9ffd49d3c3 *e963051df8(); // Function Engine.KismetInputLibrary.*e963051df8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x660af64
	struct F*174cd056c7 *5665175d83(struct FKey* MouseButton); // Function Engine.KismetInputLibrary.*5665175d83 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x661b8fc
	void *b739c68c33(); // Function Engine.KismetInputLibrary.*b739c68c33 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x661ba8c
};

// Class Engine.KismetMaterialLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetMaterialLibrary : UBlueprintFunctionLibrary {

	struct FName GetScalarParameterValue(); // Function Engine.KismetMaterialLibrary.GetScalarParameterValue // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x660528c
	void SetScalarParameterValue(struct UMaterialParameterCollection** Collection); // Function Engine.KismetMaterialLibrary.SetScalarParameterValue // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x7754a4
	struct UMaterialInterface* CreateDynamicMaterialInstance(); // Function Engine.KismetMaterialLibrary.CreateDynamicMaterialInstance // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x65f3d28
	struct FName GetVectorParameterValue(); // Function Engine.KismetMaterialLibrary.GetVectorParameterValue // Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6608438
	void SetVectorParameterValue(struct UMaterialParameterCollection** Collection); // Function Engine.KismetMaterialLibrary.SetVectorParameterValue // Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x662f6c4
};

// Class Engine.KismetMathLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetMathLibrary : UBlueprintFunctionLibrary {

	void *6b615bb834(struct FVector* A, bool bPickA); // Function Engine.KismetMathLibrary.*6b615bb834 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x662023c
	float MakeColor(); // Function Engine.KismetMathLibrary.MakeColor // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x777168
	void *4a9ed3ecb7(struct FVector2D* A); // Function Engine.KismetMathLibrary.*4a9ed3ecb7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6637890
	void GetDay(); // Function Engine.KismetMathLibrary.GetDay // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65fec94
	float MultiplyMultiply_FloatFloat(); // Function Engine.KismetMathLibrary.MultiplyMultiply_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66170b4
	void *385747d36b(); // Function Engine.KismetMathLibrary.*385747d36b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6606448
	void *d1c7cadeb4(float* InCurrentTime, float* InPhase); // Function Engine.KismetMathLibrary.*d1c7cadeb4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66131e0
	void *53c5199267(); // Function Engine.KismetMathLibrary.*53c5199267 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x58dbd44
	float *9dafb328d9(); // Function Engine.KismetMathLibrary.*9dafb328d9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x777314
	void IsMorning(struct FDateTime* A); // Function Engine.KismetMathLibrary.IsMorning // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x660c09c
	struct UClass* *41e3019efb(); // Function Engine.KismetMathLibrary.*41e3019efb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbb3ba8
	struct FTransform *56c6306bcc(struct FVector* BoxExtent); // Function Engine.KismetMathLibrary.*56c6306bcc // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x660c420
	void *8e84eb4d85(struct FVector* InVec); // Function Engine.KismetMathLibrary.*8e84eb4d85 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f36e4
	float *30013e7182(); // Function Engine.KismetMathLibrary.*30013e7182 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x661701c
	struct FTimespan GetTotalDays(); // Function Engine.KismetMathLibrary.GetTotalDays // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6606bc8
	void VEase(struct FVector* B, enum class EEasingFunc EasingFunc, int32* Steps); // Function Engine.KismetMathLibrary.VEase // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66396e0
	float *e61bc5a129(); // Function Engine.KismetMathLibrary.*e61bc5a129 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f5954
	void *ad42f7dae6(struct FVector* A); // Function Engine.KismetMathLibrary.*ad42f7dae6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x663796c
	void *2d309dad6b(); // Function Engine.KismetMathLibrary.*2d309dad6b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6632290
	int32 *5fca6901bf(); // Function Engine.KismetMathLibrary.*5fca6901bf // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661772c
	struct FVector *aff740ba34(float* B); // Function Engine.KismetMathLibrary.*aff740ba34 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65e5a00
	void *19a201b755(struct FVector* Point, struct FVector* SegmentEnd); // Function Engine.KismetMathLibrary.*19a201b755 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6603b04
	int32 DaysInYear(); // Function Engine.KismetMathLibrary.DaysInYear // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f4a28
	struct FDateTime GetHour12(); // Function Engine.KismetMathLibrary.GetHour12 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65ffe50
	void MakeTimespan(int32* Hours, int32* Seconds); // Function Engine.KismetMathLibrary.MakeTimespan // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6613f8c
	struct FVector TransformLocation(); // Function Engine.KismetMathLibrary.TransformLocation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6638dcc
	void *2586ac3519(bool B); // Function Engine.KismetMathLibrary.*2586ac3519 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66095dc
	void Today(); // Function Engine.KismetMathLibrary.Today // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66389bc
	float *91df805ef8(); // Function Engine.KismetMathLibrary.*91df805ef8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xb068ec
	struct FDateTime GetHour(); // Function Engine.KismetMathLibrary.GetHour // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65ffee4
	void *b25add2130(); // Function Engine.KismetMathLibrary.*b25add2130 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f3230
	void *1330b3eb06(); // Function Engine.KismetMathLibrary.*1330b3eb06 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f50ac
	bool *d297a7fc89(); // Function Engine.KismetMathLibrary.*d297a7fc89 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65e87c4
	void *aed2cdacd6(float* B); // Function Engine.KismetMathLibrary.*aed2cdacd6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x77758c
	void *6f5825fc98(float* A); // Function Engine.KismetMathLibrary.*6f5825fc98 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f4dd0
	bool *3e9fa54b0a(); // Function Engine.KismetMathLibrary.*3e9fa54b0a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661d0c8
	void *def3a59b68(int32* inInt); // Function Engine.KismetMathLibrary.*def3a59b68 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f31ac
	void Normal(struct FVector* A); // Function Engine.KismetMathLibrary.Normal // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6618130
	struct FRotator *514480e957(); // Function Engine.KismetMathLibrary.*514480e957 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f3544
	struct FDateTime GetSecond(); // Function Engine.KismetMathLibrary.GetSecond // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6605a20
	void BreakRotator(float* Roll); // Function Engine.KismetMathLibrary.BreakRotator // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x9dbadc
	bool *d8d58e564f(); // Function Engine.KismetMathLibrary.*d8d58e564f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x662023c
	void *4e9af027f1(float* Current, float* DeltaTime); // Function Engine.KismetMathLibrary.*4e9af027f1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f98c0
	float *c825a024e7(); // Function Engine.KismetMathLibrary.*c825a024e7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6618bcc
	float *c42b90d35c(); // Function Engine.KismetMathLibrary.*c42b90d35c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x661d27c
	void InverseTransformLocation(struct FTransform* T); // Function Engine.KismetMathLibrary.InverseTransformLocation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x660b55c
	struct FVector *c33c3612ca(); // Function Engine.KismetMathLibrary.*c33c3612ca // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x660b398
	struct FTransform ConvertTransformToRelative(); // Function Engine.KismetMathLibrary.ConvertTransformToRelative // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f39a4
	void *129efa9c19(int32* A); // Function Engine.KismetMathLibrary.*129efa9c19 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660effc
	float Acos(); // Function Engine.KismetMathLibrary.Acos // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65e3a70
	struct FDateTime *cb15e6e252(); // Function Engine.KismetMathLibrary.*cb15e6e252 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x660ef30
	void *fbfe139727(struct FLinearColor* InLinearColor); // Function Engine.KismetMathLibrary.*fbfe139727 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xaf95d0
	void *7251d91d5f(struct FVector* A); // Function Engine.KismetMathLibrary.*7251d91d5f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x7778a0
	struct FRotator *17ae5231cf(); // Function Engine.KismetMathLibrary.*17ae5231cf // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6607c84
	void *6b14de1e08(float* Location); // Function Engine.KismetMathLibrary.*6b14de1e08 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6609b08
	void *dee403cf7f(); // Function Engine.KismetMathLibrary.*dee403cf7f // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x661ee5c
	int32 *bb91fc8c37(); // Function Engine.KismetMathLibrary.*bb91fc8c37 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f5aa8
	float *38b081bf30(); // Function Engine.KismetMathLibrary.*38b081bf30 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f4d18
	void GetMonth(struct FDateTime* A); // Function Engine.KismetMathLibrary.GetMonth // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6602bbc
	struct FVector *03b0c48d92(); // Function Engine.KismetMathLibrary.*03b0c48d92 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65fab6c
	bool *a863e37e47(bool B); // Function Engine.KismetMathLibrary.*a863e37e47 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6637538
	void *16f7eab57f(int32* IndexOfMaxValue); // Function Engine.KismetMathLibrary.*16f7eab57f // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x66158dc
	struct FRandomStream BreakRandomStream(); // Function Engine.KismetMathLibrary.BreakRandomStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65ed96c
	float *b8ec7d148f(); // Function Engine.KismetMathLibrary.*b8ec7d148f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6612150
	void *50123d6f33(struct FVector* BoxExtent); // Function Engine.KismetMathLibrary.*50123d6f33 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661dd98
	float *f74438cf06(); // Function Engine.KismetMathLibrary.*f74438cf06 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6618800
	float *66e134c9d3(float* ErrorTolerance); // Function Engine.KismetMathLibrary.*66e134c9d3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbab6b0
	void *1fa883f443(); // Function Engine.KismetMathLibrary.*1fa883f443 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f95ac
	struct FVector *d23ec93446(); // Function Engine.KismetMathLibrary.*d23ec93446 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6602a24
	struct FVector *53490ccfe5(); // Function Engine.KismetMathLibrary.*53490ccfe5 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66039a4
	int32 BreakTimespan(struct FTimespan* InTimespan, int32* Hours); // Function Engine.KismetMathLibrary.BreakTimespan // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65edc0c
	float *846c340432(); // Function Engine.KismetMathLibrary.*846c340432 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xa92be8
	void *dfff1ee124(); // Function Engine.KismetMathLibrary.*dfff1ee124 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6603498
	void *2374fd4369(bool B); // Function Engine.KismetMathLibrary.*2374fd4369 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6609968
	bool *2d7a3ff1a3(); // Function Engine.KismetMathLibrary.*2d7a3ff1a3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660f1e8
	void *e6799c73ad(float* A); // Function Engine.KismetMathLibrary.*e6799c73ad // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f4e88
	void *5fb599f3e8(struct FRotator* B); // Function Engine.KismetMathLibrary.*5fb599f3e8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66184d8
	bool *c367850dec(); // Function Engine.KismetMathLibrary.*c367850dec // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xba7bdc
	void RandomBool(); // Function Engine.KismetMathLibrary.RandomBool // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x661d314
	void MakeVector2D(float* X); // Function Engine.KismetMathLibrary.MakeVector2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6614160
	void *95fc38bb6c(); // Function Engine.KismetMathLibrary.*95fc38bb6c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f2e74
	struct UObject* *0d2b358e02(); // Function Engine.KismetMathLibrary.*0d2b358e02 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff02f8
	void *cf0aa0508e(struct FVector* Right); // Function Engine.KismetMathLibrary.*cf0aa0508e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6613d2c
	bool *76851c9cd6(); // Function Engine.KismetMathLibrary.*76851c9cd6 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6620590
	float *547b79ef3a(float* S); // Function Engine.KismetMathLibrary.*547b79ef3a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661ca4c
	void *ecbe0e1687(int32* B); // Function Engine.KismetMathLibrary.*ecbe0e1687 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6637a7c
	void *ba8817608a(); // Function Engine.KismetMathLibrary.*ba8817608a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x58dbd44
	struct FLinearColor *8719421307(); // Function Engine.KismetMathLibrary.*8719421307 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6609da8
	void *1213e604c5(int32* IndexOfMinValue); // Function Engine.KismetMathLibrary.*1213e604c5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6615d48
	struct FVector *b745c5a3ce(); // Function Engine.KismetMathLibrary.*b745c5a3ce // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6604050
	struct FRotator REase(float* Alpha, enum class EEasingFunc EasingFunc, int32* Steps); // Function Engine.KismetMathLibrary.REase // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661c7a4
	struct FDateTime *ca1217bedb(); // Function Engine.KismetMathLibrary.*ca1217bedb // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x660f2bc
	struct FDateTime GetTimeOfDay(); // Function Engine.KismetMathLibrary.GetTimeOfDay // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6606938
	void *6f1a0294f9(int32* A); // Function Engine.KismetMathLibrary.*6f1a0294f9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6618e68
	float *9920b1c120(); // Function Engine.KismetMathLibrary.*9920b1c120 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66183b8
	bool *044feeab24(); // Function Engine.KismetMathLibrary.*044feeab24 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x661864c
	void *c6e4ac3169(struct FVector* Z); // Function Engine.KismetMathLibrary.*c6e4ac3169 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6613a0c
	struct FDateTime *7b8b8e018f(); // Function Engine.KismetMathLibrary.*7b8b8e018f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6609a3c
	struct FTransform *e6c3ab03d6(); // Function Engine.KismetMathLibrary.*e6c3ab03d6 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x660b798
	void *3c6ecb02cb(); // Function Engine.KismetMathLibrary.*3c6ecb02cb // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6604804
	void *ba4763100f(struct UObject** B); // Function Engine.KismetMathLibrary.*ba4763100f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x661feb4
	bool *cc5c3c20b7(); // Function Engine.KismetMathLibrary.*cc5c3c20b7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66197d0
	void *43787c8a99(float* B); // Function Engine.KismetMathLibrary.*43787c8a99 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x777454
	void *b0da180b3f(struct FTimespan* A); // Function Engine.KismetMathLibrary.*b0da180b3f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66096b0
	struct FTimespan GetTotalHours(); // Function Engine.KismetMathLibrary.GetTotalHours // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6606c60
	void *2cf061f05f(bool InByte); // Function Engine.KismetMathLibrary.*2cf061f05f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc2b380
	void *17ec25c80f(bool A); // Function Engine.KismetMathLibrary.*17ec25c80f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660ee5c
	int32 *b4b8f538e2(); // Function Engine.KismetMathLibrary.*b4b8f538e2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x66156f8
	void *283c248548(float* Current, float* DeltaTime); // Function Engine.KismetMathLibrary.*283c248548 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f9a2c
	struct FDateTime *2bd8f7f9d2(); // Function Engine.KismetMathLibrary.*2bd8f7f9d2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6618734
	struct FRotator *ccec8d7589(); // Function Engine.KismetMathLibrary.*ccec8d7589 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x660f0d0
	void IsLeapYear(int32* Year); // Function Engine.KismetMathLibrary.IsLeapYear // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660bf64
	void *3d182b442e(float* A); // Function Engine.KismetMathLibrary.*3d182b442e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x777278
	float Sin(); // Function Engine.KismetMathLibrary.Sin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66323dc
	void *7220e03866(struct FRotator* A, struct FVector* Y); // Function Engine.KismetMathLibrary.*7220e03866 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65fd0e8
	struct FRandomStream RandomRotatorFromStream(); // Function Engine.KismetMathLibrary.RandomRotatorFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661dfa4
	float NotEqual_VectorVector(); // Function Engine.KismetMathLibrary.NotEqual_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6618d08
	void TEase(struct FTransform* A, float* Alpha, float* BlendExp); // Function Engine.KismetMathLibrary.TEase // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6637f1c
	void *9c6b76b5ee(); // Function Engine.KismetMathLibrary.*9c6b76b5ee // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x661f050
	float Atan2(float* B); // Function Engine.KismetMathLibrary.Atan2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65e8574
	void TimespanRatio(struct FTimespan* A); // Function Engine.KismetMathLibrary.TimespanRatio // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66388d8
	float *af9d348cda(); // Function Engine.KismetMathLibrary.*af9d348cda // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661168c
	void *75a72b07ab(struct FVector* A, float* Alpha); // Function Engine.KismetMathLibrary.*75a72b07ab // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6639c7c
	void *facc1624ab(); // Function Engine.KismetMathLibrary.*facc1624ab // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f9b98
	struct FVector Dot_VectorVector(); // Function Engine.KismetMathLibrary.Dot_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xadda0c
	void RandomFloatFromStream(struct FRandomStream* Stream); // Function Engine.KismetMathLibrary.RandomFloatFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661d5f4
	void FMin(float* B); // Function Engine.KismetMathLibrary.FMin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xcb06e0
	bool *1b2ae7d70b(); // Function Engine.KismetMathLibrary.*1b2ae7d70b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb7e538
	void GetMillisecond(struct FDateTime* A); // Function Engine.KismetMathLibrary.GetMillisecond // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6602960
	void *ecb3db7722(); // Function Engine.KismetMathLibrary.*ecb3db7722 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb0df90
	struct FTransform *c9be0ac8ef(); // Function Engine.KismetMathLibrary.*c9be0ac8ef // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f1ed0
	void *0640eaf5f0(struct FTransform* B); // Function Engine.KismetMathLibrary.*0640eaf5f0 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f8d38
	void Cos(float* A); // Function Engine.KismetMathLibrary.Cos // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f3bc0
	struct FVector2D *a60419e0c5(); // Function Engine.KismetMathLibrary.*a60419e0c5 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6639de4
	struct FVector *8788fcb6af(); // Function Engine.KismetMathLibrary.*8788fcb6af // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66133cc
	void *567b1b87ac(struct FTransform* Target, float* InterpSpeed); // Function Engine.KismetMathLibrary.*567b1b87ac // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6638208
	struct FVector *1e094e54da(); // Function Engine.KismetMathLibrary.*1e094e54da // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66135bc
	void *c5149ec7fa(struct FTimespan* A); // Function Engine.KismetMathLibrary.*c5149ec7fa // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6618734
	void FromMilliseconds(); // Function Engine.KismetMathLibrary.FromMilliseconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65fbc38
	int32 MakeRandomStream(); // Function Engine.KismetMathLibrary.MakeRandomStream // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6613334
	struct TArray<int32> *255ca11856(int32* IndexOfMinValue); // Function Engine.KismetMathLibrary.*255ca11856 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6615f2c
	void *a05a0a2a93(int32* inInt); // Function Engine.KismetMathLibrary.*a05a0a2a93 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f3348
	struct FVector2D MakeBox2D(); // Function Engine.KismetMathLibrary.MakeBox2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66121e8
	bool *0ebbfc38ce(); // Function Engine.KismetMathLibrary.*0ebbfc38ce // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x9d70bc
	void *3a8dc469c2(struct FVector* ConeDir); // Function Engine.KismetMathLibrary.*3a8dc469c2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661e194
	struct FVector *f5c61dd95a(); // Function Engine.KismetMathLibrary.*f5c61dd95a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f5c08
	struct FTimespan GetTotalSeconds(); // Function Engine.KismetMathLibrary.GetTotalSeconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6606e28
	void *b3c41ded89(int32* IndexOfMinValue); // Function Engine.KismetMathLibrary.*b3c41ded89 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6615b7c
	struct FDateTime GetDate(); // Function Engine.KismetMathLibrary.GetDate // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65febf8
	int32 *023654c437(); // Function Engine.KismetMathLibrary.*023654c437 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66376d8
	void *746c4580ae(struct FDateTime* A); // Function Engine.KismetMathLibrary.*746c4580ae // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x663760c
	void *5b2e89249d(); // Function Engine.KismetMathLibrary.*5b2e89249d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f3914
	float *19746d0616(); // Function Engine.KismetMathLibrary.*19746d0616 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f0d14
	void *81baa8954d(struct FLinearColor* A); // Function Engine.KismetMathLibrary.*81baa8954d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6617500
	float *a62d385575(); // Function Engine.KismetMathLibrary.*a62d385575 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65fb5c8
	struct FVector2D *07e5b29a08(float* DeltaTime); // Function Engine.KismetMathLibrary.*07e5b29a08 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x663a200
	void *88f0fee2eb(float* B); // Function Engine.KismetMathLibrary.*88f0fee2eb // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661791c
	struct FTimespan GetMilliseconds(); // Function Engine.KismetMathLibrary.GetMilliseconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6602960
	struct FTimespan GetHours(); // Function Engine.KismetMathLibrary.GetHours // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65ffee4
	void *e148b11c7c(); // Function Engine.KismetMathLibrary.*e148b11c7c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f0e34
	void *27640450ea(); // Function Engine.KismetMathLibrary.*27640450ea // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661cc74
	struct FTimespan *a14431c94a(); // Function Engine.KismetMathLibrary.*a14431c94a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65e5770
	void *d5f6fca98b(float* Min); // Function Engine.KismetMathLibrary.*d5f6fca98b // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f0f10
	bool RandomRotator(); // Function Engine.KismetMathLibrary.RandomRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661deb0
	float FromHours(); // Function Engine.KismetMathLibrary.FromHours // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65fbb98
	void Abs(float* A); // Function Engine.KismetMathLibrary.Abs // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xa8bb34
	void *3f97fce48f(bool B); // Function Engine.KismetMathLibrary.*3f97fce48f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65ea3a4
	float Round(); // Function Engine.KismetMathLibrary.Round // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x661f554
	float *de7cd54444(); // Function Engine.KismetMathLibrary.*de7cd54444 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661f450
	void NotEqual_IntInt(int32* A); // Function Engine.KismetMathLibrary.NotEqual_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbd5b74
	struct FVector *3118601575(); // Function Engine.KismetMathLibrary.*3118601575 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661f2f4
	void *fb5c0bec3f(struct FVector2D* A); // Function Engine.KismetMathLibrary.*fb5c0bec3f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6617a04
	void MakeRotator(float* Pitch); // Function Engine.KismetMathLibrary.MakeRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x777978
	float Exp(); // Function Engine.KismetMathLibrary.Exp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f9514
	void *0cb372d01a(struct FVector2D* A); // Function Engine.KismetMathLibrary.*0cb372d01a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6639e84
	void *5a633f1453(struct FVector* InVect); // Function Engine.KismetMathLibrary.*5a633f1453 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6604050
	int32 *565d15749e(); // Function Engine.KismetMathLibrary.*565d15749e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6619a80
	bool *860b32acc0(bool B); // Function Engine.KismetMathLibrary.*860b32acc0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x776eb0
	void *a5a60a7d62(struct FVector* Z); // Function Engine.KismetMathLibrary.*a5a60a7d62 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6613bfc
	struct FTimespan GetTotalMinutes(); // Function Engine.KismetMathLibrary.GetTotalMinutes // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6606d90
	struct UObject* *b0a0fe274b(); // Function Engine.KismetMathLibrary.*b0a0fe274b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff1f7c
	void *179f43e287(struct FRotator* B); // Function Engine.KismetMathLibrary.*179f43e287 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f1dbc
	struct FVector Conv_VectorToTransform(); // Function Engine.KismetMathLibrary.Conv_VectorToTransform // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f3850
	struct FRotator *6948fa2e48(); // Function Engine.KismetMathLibrary.*6948fa2e48 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f3544
	void GetMinutes(); // Function Engine.KismetMathLibrary.GetMinutes // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6602af8
	void *a292d18b01(struct UClass** TestClass); // Function Engine.KismetMathLibrary.*a292d18b01 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f1104
	float *a97581d244(); // Function Engine.KismetMathLibrary.*a97581d244 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661761c
	void *684a5532f0(int32* B); // Function Engine.KismetMathLibrary.*684a5532f0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65e5f0c
	void GetYear(struct FDateTime* A); // Function Engine.KismetMathLibrary.GetYear // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6608f58
	float *80ffc6fb82(float* DeltaTime); // Function Engine.KismetMathLibrary.*80ffc6fb82 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x65fb6e8
	void NotEqual_NameName(struct FName* B); // Function Engine.KismetMathLibrary.NotEqual_NameName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff1f7c
	float EqualEqual_RotatorRotator(); // Function Engine.KismetMathLibrary.EqualEqual_RotatorRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f8b78
	void *297f8eb9a7(struct FTimespan* B); // Function Engine.KismetMathLibrary.*297f8eb9a7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x663760c
	void *8a95afae77(struct FDateTime* A); // Function Engine.KismetMathLibrary.*8a95afae77 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x663760c
	bool *8613af674a(); // Function Engine.KismetMathLibrary.*8613af674a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x725efc
	void *f06b44f30d(struct FDateTime* B); // Function Engine.KismetMathLibrary.*f06b44f30d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66096b0
	struct FRotator BreakTransform(struct FTransform* InTransform); // Function Engine.KismetMathLibrary.BreakTransform // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xa50430
	float *222bc18f4f(); // Function Engine.KismetMathLibrary.*222bc18f4f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65e583c
	void *d335f77aed(int32* A); // Function Engine.KismetMathLibrary.*d335f77aed // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f5730
	struct FVector *5631d92e96(); // Function Engine.KismetMathLibrary.*5631d92e96 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x952158
	struct FTimespan *26d4ae06c5(); // Function Engine.KismetMathLibrary.*26d4ae06c5 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x663872c
	void GetTotalMilliseconds(struct FTimespan* A); // Function Engine.KismetMathLibrary.GetTotalMilliseconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6606cf8
	enum class *b60e8a0645 *6a30f52b87(struct FTransform* A); // Function Engine.KismetMathLibrary.*6a30f52b87 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6638448
	float *56186420ac(float* InRangeB, float* OutRangeB); // Function Engine.KismetMathLibrary.*56186420ac // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x777c58
	void MakeBox(struct FVector* Min); // Function Engine.KismetMathLibrary.MakeBox // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66122e0
	struct FTimespan *5f046fc622(); // Function Engine.KismetMathLibrary.*5f046fc622 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x660ef30
	void *19d38c244f(float* B); // Function Engine.KismetMathLibrary.*19d38c244f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x7773b8
	void *5f9621789e(struct FVector* V); // Function Engine.KismetMathLibrary.*5f9621789e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661c1a8
	int32 *00cb8b354c(); // Function Engine.KismetMathLibrary.*00cb8b354c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661772c
	void RandomUnitVector(); // Function Engine.KismetMathLibrary.RandomUnitVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661e0ac
	void *99c846894a(int32* inInt); // Function Engine.KismetMathLibrary.*99c846894a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f32b8
	struct FVector *4ff6560131(); // Function Engine.KismetMathLibrary.*4ff6560131 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66136ec
	float *02d568c685(float* InterpSpeed); // Function Engine.KismetMathLibrary.*02d568c685 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6639acc
	void *08cdfaa5e4(struct FLinearColor* B); // Function Engine.KismetMathLibrary.*08cdfaa5e4 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6611508
	struct FName *9214b7f60f(); // Function Engine.KismetMathLibrary.*9214b7f60f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff02f8
	void Sqrt(float* A); // Function Engine.KismetMathLibrary.Sqrt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6637198
	void *b3d4578ba5(bool B); // Function Engine.KismetMathLibrary.*b3d4578ba5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65ea2b4
	float Square(); // Function Engine.KismetMathLibrary.Square // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6637254
	struct FDateTime GetDayOfYear(); // Function Engine.KismetMathLibrary.GetDayOfYear // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65fed2c
	int32 Ease(float* B, enum class EEasingFunc EasingFunc); // Function Engine.KismetMathLibrary.Ease // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f81e4
	int32 Max(); // Function Engine.KismetMathLibrary.Max // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6615458
	void *89a711fd53(float* A); // Function Engine.KismetMathLibrary.*89a711fd53 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f9658
	void *7b3a609081(struct FVector2D* A); // Function Engine.KismetMathLibrary.*7b3a609081 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f5f84
	float RandomFloatInRange(); // Function Engine.KismetMathLibrary.RandomFloatInRange // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x661d6c0
	void RandomIntegerFromStream(struct FRandomStream* Stream); // Function Engine.KismetMathLibrary.RandomIntegerFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661d9e4
	struct FVector *962a9e0ed5(struct FRotator* InRot); // Function Engine.KismetMathLibrary.*962a9e0ed5 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65eda58
	float Lerp(); // Function Engine.KismetMathLibrary.Lerp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660ed3c
	void *88b9f0813d(struct FVector2D* Target, float* InterpSpeed); // Function Engine.KismetMathLibrary.*88b9f0813d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x663a078
	struct FVector2D *dc3e8a2967(); // Function Engine.KismetMathLibrary.*dc3e8a2967 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65e5924
	void *f9f1be06ef(struct FVector* A); // Function Engine.KismetMathLibrary.*f9f1be06ef // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6639fd0
	void GetDuration(struct FTimespan* A); // Function Engine.KismetMathLibrary.GetDuration // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65ff724
	struct FVector *c9383510a8(); // Function Engine.KismetMathLibrary.*c9383510a8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6638a00
	float BreakVector2D(); // Function Engine.KismetMathLibrary.BreakVector2D // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xb0f890
	void *25609fc859(float* S, float* A); // Function Engine.KismetMathLibrary.*25609fc859 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6609c1c
	bool *ce6778bc55(); // Function Engine.KismetMathLibrary.*ce6778bc55 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x661feb4
	void *bc75d8ae3c(bool B); // Function Engine.KismetMathLibrary.*bc75d8ae3c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65e569c
	void IsAfternoon(); // Function Engine.KismetMathLibrary.IsAfternoon // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x660b998
	struct FVector *21968a8fba(); // Function Engine.KismetMathLibrary.*21968a8fba // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66130d0
	void BreakVector(struct FVector* InVec, float* Y); // Function Engine.KismetMathLibrary.BreakVector // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x9626ec
	bool *2e702cd268(); // Function Engine.KismetMathLibrary.*2e702cd268 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x777dbc
	struct FTimespan *f8ac540d57(); // Function Engine.KismetMathLibrary.*f8ac540d57 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65e5770
	void *20e5f453d7(float* inFloat); // Function Engine.KismetMathLibrary.*20e5f453d7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f2fec
	void *9be7730afb(); // Function Engine.KismetMathLibrary.*9be7730afb // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6617fec
	float *f46ef0cde6(); // Function Engine.KismetMathLibrary.*f46ef0cde6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66198cc
	void Log(float* Base); // Function Engine.KismetMathLibrary.Log // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6612074
	void *bb5aca395e(struct FVector* A); // Function Engine.KismetMathLibrary.*bb5aca395e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6637b8c
	int32 *cef1f9344e(); // Function Engine.KismetMathLibrary.*cef1f9344e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66191e0
	void *733ee259fa(float* B); // Function Engine.KismetMathLibrary.*733ee259fa // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x777a4c
	void *4c9805c9fc(struct FVector* A); // Function Engine.KismetMathLibrary.*4c9805c9fc // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6617f04
	int32 *7034a95ca7(); // Function Engine.KismetMathLibrary.*7034a95ca7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6617348
	void *b01b635726(int32* A); // Function Engine.KismetMathLibrary.*b01b635726 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65e38a0
	void *c88545f613(struct FVector* Point, struct FVector* LineDirection); // Function Engine.KismetMathLibrary.*c88545f613 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65fa224
	bool *ca72b8035d(); // Function Engine.KismetMathLibrary.*ca72b8035d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f5634
	void RandomBoolFromStream(struct FRandomStream* Stream); // Function Engine.KismetMathLibrary.RandomBoolFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661d360
	void *8a1e7c6dba(struct FRotator* A); // Function Engine.KismetMathLibrary.*8a1e7c6dba // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6617e50
	bool *3f8c06e18a(); // Function Engine.KismetMathLibrary.*3f8c06e18a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f2de8
	int32 *786bc556c1(); // Function Engine.KismetMathLibrary.*786bc556c1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65e5b10
	void Now(); // Function Engine.KismetMathLibrary.Now // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6618ef0
	float *0ed9443c86(struct FVector* Current); // Function Engine.KismetMathLibrary.*0ed9443c86 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6639924
	struct FDateTime *33778674c2(); // Function Engine.KismetMathLibrary.*33778674c2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f8570
	void RandomIntegerInRangeFromStream(int32* Max); // Function Engine.KismetMathLibrary.RandomIntegerInRangeFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661dc20
	struct FVector *16b2a109bf(); // Function Engine.KismetMathLibrary.*16b2a109bf // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66028cc
	float *6ff18338f9(); // Function Engine.KismetMathLibrary.*6ff18338f9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f35f8
	void *9401a0c808(bool B); // Function Engine.KismetMathLibrary.*9401a0c808 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6617190
	float *1fd151e25e(); // Function Engine.KismetMathLibrary.*1fd151e25e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661783c
	float *d1a765a11c(); // Function Engine.KismetMathLibrary.*d1a765a11c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661e298
	void RandomFloat(); // Function Engine.KismetMathLibrary.RandomFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x661d5bc
	int32 RandomIntegerInRange(); // Function Engine.KismetMathLibrary.RandomIntegerInRange // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x661db14
	float *2a4b35ae28(); // Function Engine.KismetMathLibrary.*2a4b35ae28 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f42f8
	void *6db1113e9a(); // Function Engine.KismetMathLibrary.*6db1113e9a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66388bc
	void NotEqual_ByteByte(bool A); // Function Engine.KismetMathLibrary.NotEqual_ByteByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x776d60
	struct FTimespan GetDays(); // Function Engine.KismetMathLibrary.GetDays // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65fedc0
	void *5c3e0fb941(struct FRotator* Current, float* DeltaTime); // Function Engine.KismetMathLibrary.*5c3e0fb941 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661cf18
	void *e60ba9478e(); // Function Engine.KismetMathLibrary.*e60ba9478e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66182d0
	int32 *b471150e0d(); // Function Engine.KismetMathLibrary.*b471150e0d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xd0bb08
	void *25fb9d0a2f(); // Function Engine.KismetMathLibrary.*25fb9d0a2f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6639f20
	void *8db4e01708(struct UClass** A); // Function Engine.KismetMathLibrary.*8db4e01708 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff1f7c
	struct FTimespan *c674e13804(); // Function Engine.KismetMathLibrary.*c674e13804 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x660f2bc
	void *350caa70d2(struct FVector* LineEnd, float* T); // Function Engine.KismetMathLibrary.*350caa70d2 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x660f450
	float *040d3de2e2(); // Function Engine.KismetMathLibrary.*040d3de2e2 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x663a388
	void *457a3d96a1(float* R, float* B); // Function Engine.KismetMathLibrary.*457a3d96a1 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65ecc50
	struct FVector *4ddad7aca2(); // Function Engine.KismetMathLibrary.*4ddad7aca2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661c038
	void *b103c42677(int32* B); // Function Engine.KismetMathLibrary.*b103c42677 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x663a660
	void *097fa9192a(struct FRandomStream* Stream); // Function Engine.KismetMathLibrary.*097fa9192a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x662c210
	bool *bd4c6bb346(); // Function Engine.KismetMathLibrary.*bd4c6bb346 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6620394
	void GetMinute(); // Function Engine.KismetMathLibrary.GetMinute // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6602af8
	void Asin(float* A); // Function Engine.KismetMathLibrary.Asin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65e84c4
	void *c7fa266f8c(); // Function Engine.KismetMathLibrary.*c7fa266f8c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66388a0
	float *b255d853c0(); // Function Engine.KismetMathLibrary.*b255d853c0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660a61c
	void *d19ceca68c(); // Function Engine.KismetMathLibrary.*d19ceca68c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x661fe18
	void *0a7d37713d(struct FVector2D* A); // Function Engine.KismetMathLibrary.*0a7d37713d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f5824
	struct FDateTime *35547e2e1d(); // Function Engine.KismetMathLibrary.*35547e2e1d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f47a0
	void Not_PreBool(); // Function Engine.KismetMathLibrary.Not_PreBool // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x8c3970
	void BooleanXOR(bool B); // Function Engine.KismetMathLibrary.BooleanXOR // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65ea494
	struct FRotator *87939399c9(); // Function Engine.KismetMathLibrary.*87939399c9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6609850
	void Clamp(int32* Value, int32* Max); // Function Engine.KismetMathLibrary.Clamp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f0bf8
	struct FVector *ea21f0028a(struct FVector* Point); // Function Engine.KismetMathLibrary.*ea21f0028a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65fa398
	float MakeVector(); // Function Engine.KismetMathLibrary.MakeVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x777b84
	void *3669829a77(struct FVector* Z); // Function Engine.KismetMathLibrary.*3669829a77 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66138dc
	float *ca99294168(); // Function Engine.KismetMathLibrary.*ca99294168 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x661bb78
	struct FVector *53fa7d8478(struct FVector* LineEnd, struct FVector* PlaneNormal, struct FVector* Intersection); // Function Engine.KismetMathLibrary.*53fa7d8478 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x660f674
	struct FVector *f370717735(); // Function Engine.KismetMathLibrary.*f370717735 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f9c28
	float MapRangeUnclamped(float* OutRangeA); // Function Engine.KismetMathLibrary.MapRangeUnclamped // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x661423c
	void DaysInMonth(int32* Month); // Function Engine.KismetMathLibrary.DaysInMonth // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f4930
	float *0cce985181(); // Function Engine.KismetMathLibrary.*0cce985181 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660b278
	void *5a9e45cb2c(struct FLinearColor* B); // Function Engine.KismetMathLibrary.*5a9e45cb2c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661ffd8
	void FromSeconds(); // Function Engine.KismetMathLibrary.FromSeconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65fbd70
	struct FTimespan *685fa49e9a(); // Function Engine.KismetMathLibrary.*685fa49e9a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f8570
	void *fe3fec8bbf(struct FTransform* B, float* RotationTolerance); // Function Engine.KismetMathLibrary.*fe3fec8bbf // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6617be8
	struct FLinearColor *729a8d9845(); // Function Engine.KismetMathLibrary.*729a8d9845 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xc0751c
	struct FRotator MakeTransform(struct FVector* Scale); // Function Engine.KismetMathLibrary.MakeTransform // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xbd8930
	int32 MakeDateTime(int32* Year, int32* Day); // Function Engine.KismetMathLibrary.MakeDateTime // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66123f0
	float *90953f8c98(); // Function Engine.KismetMathLibrary.*90953f8c98 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x661d43c
	void RandomFloatInRangeFromStream(float* Max); // Function Engine.KismetMathLibrary.RandomFloatInRangeFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661d7cc
	float *1579e330b3(); // Function Engine.KismetMathLibrary.*1579e330b3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66377a8
	struct FVector EqualEqual_VectorVector(float* ErrorTolerance); // Function Engine.KismetMathLibrary.EqualEqual_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f8ff8
	void *f06618275b(struct FVector* B); // Function Engine.KismetMathLibrary.*f06618275b // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6617ae0
	struct FTimespan GetSeconds(); // Function Engine.KismetMathLibrary.GetSeconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6605a20
	struct FColor *056e8d8b76(); // Function Engine.KismetMathLibrary.*056e8d8b76 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f2efc
	void FromMinutes(); // Function Engine.KismetMathLibrary.FromMinutes // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65fbcd4
	void UtcNow(); // Function Engine.KismetMathLibrary.UtcNow // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66396b0
	float Atan(); // Function Engine.KismetMathLibrary.Atan // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65e8650
	float FMod(float* Divisor); // Function Engine.KismetMathLibrary.FMod // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x777008
	void BooleanAND(bool B); // Function Engine.KismetMathLibrary.BooleanAND // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x838724
	struct FVector *8180ce582d(); // Function Engine.KismetMathLibrary.*8180ce582d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66137ac
	void *a5165312cf(struct FVector* Z); // Function Engine.KismetMathLibrary.*a5165312cf // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6613acc
	float *7aa38d232c(); // Function Engine.KismetMathLibrary.*7aa38d232c // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66160f8
	void *a11dc8f9d6(int32* B); // Function Engine.KismetMathLibrary.*a11dc8f9d6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x660977c
	void *41b5e14877(struct FString* IsoString); // Function Engine.KismetMathLibrary.*41b5e14877 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f4634
	int32 *e88db27c20(); // Function Engine.KismetMathLibrary.*e88db27c20 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f890c
	void *7568e83a38(struct FVector2D* B); // Function Engine.KismetMathLibrary.*7568e83a38 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f8ebc
	void Tan(); // Function Engine.KismetMathLibrary.Tan // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6638694
	bool BooleanOR(); // Function Engine.KismetMathLibrary.BooleanOR // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x87c9bc
	void *760634479e(struct FRandomStream* RandomStream); // Function Engine.KismetMathLibrary.*760634479e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661d4d0
	struct FVector GetDirectionUnitVector(); // Function Engine.KismetMathLibrary.GetDirectionUnitVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65ff490
	int32 BreakDateTime(int32* Hour, int32* second); // Function Engine.KismetMathLibrary.BreakDateTime // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65ecfc8
	void FromDays(float* Days); // Function Engine.KismetMathLibrary.FromDays // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65fbaf8
	struct FVector ProjectVectorOnToVector(); // Function Engine.KismetMathLibrary.ProjectVectorOnToVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661c2c0
	void *614d6a70cc(bool A); // Function Engine.KismetMathLibrary.*614d6a70cc // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65e86e8
	void *bfa829d0ef(float* B); // Function Engine.KismetMathLibrary.*bfa829d0ef // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x777804
	float *50e19e036f(); // Function Engine.KismetMathLibrary.*50e19e036f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65ede70
	void *a4aaa02f48(struct FVector* Start); // Function Engine.KismetMathLibrary.*a4aaa02f48 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65faa18
	int32 Min(); // Function Engine.KismetMathLibrary.Min // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6615aa8
	float NotEqual_RotatorRotator(); // Function Engine.KismetMathLibrary.NotEqual_RotatorRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6618a0c
	void RandomUnitVectorFromStream(); // Function Engine.KismetMathLibrary.RandomUnitVectorFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661e0e4
	void *11ea015eee(); // Function Engine.KismetMathLibrary.*11ea015eee // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x661efc4
	float Fraction(); // Function Engine.KismetMathLibrary.Fraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65fba58
	void *6844cb673f(); // Function Engine.KismetMathLibrary.*6844cb673f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f4914
	void *18fb9375ec(float* Yaw); // Function Engine.KismetMathLibrary.*18fb9375ec // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6608e08
	float *e2fd5e9d6e(); // Function Engine.KismetMathLibrary.*e2fd5e9d6e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f4f6c
	float FMax(); // Function Engine.KismetMathLibrary.FMax // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x7774f0
	void *5f5e211957(struct FVector* Point, struct FVector* BoxExtent); // Function Engine.KismetMathLibrary.*5f5e211957 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x660c290
	float *6c7e74bee5(); // Function Engine.KismetMathLibrary.*6c7e74bee5 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6617418
	float *f907b55d86(); // Function Engine.KismetMathLibrary.*f907b55d86 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6617268
	void *449286a277(float* B); // Function Engine.KismetMathLibrary.*449286a277 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x777ae8
	int32 *f7ce1e8c08(); // Function Engine.KismetMathLibrary.*f7ce1e8c08 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6632344
	bool *382f038f3e(); // Function Engine.KismetMathLibrary.*382f038f3e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x662011c
	void *6e09df2746(); // Function Engine.KismetMathLibrary.*6e09df2746 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f379c
	float *a9b75c1bf3(); // Function Engine.KismetMathLibrary.*a9b75c1bf3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661cd68
	void *809a8e809c(struct TArray<bool>* ByteArray); // Function Engine.KismetMathLibrary.*809a8e809c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x661552c
	void Cross_VectorVector(struct FVector* B); // Function Engine.KismetMathLibrary.Cross_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f4508
	int32 RandomInteger(); // Function Engine.KismetMathLibrary.RandomInteger // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x661d930
	struct FIntVector *1a91eb968d(); // Function Engine.KismetMathLibrary.*1a91eb968d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f33d4
	void *349b05588d(struct FVector* Y); // Function Engine.KismetMathLibrary.*349b05588d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x661348c
	struct TArray<struct FVector> *baf7b21682(); // Function Engine.KismetMathLibrary.*baf7b21682 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66082fc
	float *5eb01f8514(); // Function Engine.KismetMathLibrary.*5eb01f8514 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f514c
	void *8941df8d2e(); // Function Engine.KismetMathLibrary.*8941df8d2e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f500c
	float *f9c0c3cced(); // Function Engine.KismetMathLibrary.*f9c0c3cced // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x65f96fc
	int32 *e93d5a86a0(); // Function Engine.KismetMathLibrary.*e93d5a86a0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc9d878
	void FClamp(float* Value, float* Max); // Function Engine.KismetMathLibrary.FClamp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x777628
	int32 *249bb33a55(); // Function Engine.KismetMathLibrary.*249bb33a55 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc55bf8
	struct FTimespan *2f8a7d5cd4(struct FTimespan* B); // Function Engine.KismetMathLibrary.*2f8a7d5cd4 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6609a3c
	void *d497357ec2(struct FVector2D* B); // Function Engine.KismetMathLibrary.*d497357ec2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x65f4428
};

// Class Engine.*2f24bac723
// Size: 0x28 (Inherited: 0x28)
struct U*2f24bac723 : UBlueprintFunctionLibrary {

	int32 *2aadd15aa4(); // Function Engine.*2f24bac723.*2aadd15aa4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x664d358
	void *d915794dba(struct UEnum** Enum); // Function Engine.*2f24bac723.*d915794dba // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664a96c
	bool *fee0543b03(); // Function Engine.*2f24bac723.*fee0543b03 // Final|Native|Static|Public|BlueprintCallable // @ game+0x664ce0c
	void *d06f957860(struct UEnum** Enum); // Function Engine.*2f24bac723.*d06f957860 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664a878
	int32 *5cac801871(int32* Data); // Function Engine.*2f24bac723.*5cac801871 // Final|Native|Static|Public|BlueprintCallable // @ game+0x664c054
	int32 *5a951dfbc8(); // Function Engine.*2f24bac723.*5a951dfbc8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66435d8
	void *5b1c106d65(int32* Data); // Function Engine.*2f24bac723.*5b1c106d65 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x664585c
	void *bd1e6f3cc8(); // Function Engine.*2f24bac723.*bd1e6f3cc8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66457d8
	int32 *dadc0b0d68(); // Function Engine.*2f24bac723.*dadc0b0d68 // Final|Native|Static|Public|BlueprintCallable // @ game+0x664ab90
	void *ad48aea972(struct UEnum** Enum); // Function Engine.*2f24bac723.*ad48aea972 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664cf84
	void *69e3124898(int32* NumBits); // Function Engine.*2f24bac723.*69e3124898 // Final|Native|Static|Public|BlueprintCallable // @ game+0x664d258
	bool *fcdb9bccda(); // Function Engine.*2f24bac723.*fcdb9bccda // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664aaa4
	void *e79d3e821b(int32* Data); // Function Engine.*2f24bac723.*e79d3e821b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6651348
};

// Class Engine.KismetRenderingLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetRenderingLibrary : UBlueprintFunctionLibrary {

	int32 *b72e066aa4(); // Function Engine.KismetRenderingLibrary.*b72e066aa4 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6648168
	int32 MakeSkinWeightInfo(bool Weight0, bool Weight1, bool Weight2, bool Weight3); // Function Engine.KismetRenderingLibrary.MakeSkinWeightInfo // Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6651084
	struct FVector2D BeginDrawCanvasToRenderTarget(); // Function Engine.KismetRenderingLibrary.BeginDrawCanvasToRenderTarget // Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66433e8
	void ExportRenderTarget(struct UObject** WorldContextObject, struct FString* FilePath); // Function Engine.KismetRenderingLibrary.ExportRenderTarget // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6649524
	int32 BreakSkinWeightInfo(); // Function Engine.KismetRenderingLibrary.BreakSkinWeightInfo // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x66436ac
	void EndDrawCanvasToRenderTarget(); // Function Engine.KismetRenderingLibrary.EndDrawCanvasToRenderTarget // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6648c80
	struct UTextureRenderTarget2D* DrawMaterialToRenderTarget(); // Function Engine.KismetRenderingLibrary.DrawMaterialToRenderTarget // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x66487e8
	struct UTextureRenderTarget2D* *9cb125de36(); // Function Engine.KismetRenderingLibrary.*9cb125de36 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6647cc0
	void *fb16ed273c(struct UTextureRenderTarget2D** TextureRenderTarget); // Function Engine.KismetRenderingLibrary.*fb16ed273c // Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6645940
	struct FString ExportTexture2D(); // Function Engine.KismetRenderingLibrary.ExportTexture2D // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x66496ec
};

// Class Engine.*979f12ab94
// Size: 0x28 (Inherited: 0x28)
struct U*979f12ab94 : UBlueprintFunctionLibrary {

	void StartsWith(struct FString* InPrefix); // Function Engine.*979f12ab94.StartsWith // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6654f08
	int32 *cfb992dc66(); // Function Engine.*979f12ab94.*cfb992dc66 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6649cbc
	void *61c52f1e68(struct FString* Separator); // Function Engine.*979f12ab94.*61c52f1e68 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x664dbc4
	int32 *fb11dac981(); // Function Engine.*979f12ab94.*fb11dac981 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664a368
	struct FString *3521ad340b(enum class *929650006a SearchCase); // Function Engine.*979f12ab94.*3521ad340b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6652cb8
	struct FString *2ef1a32913(struct FString* Prefix); // Function Engine.*979f12ab94.*2ef1a32913 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66451b4
	struct FString Split(enum class *929650006a SearchCase); // Function Engine.*979f12ab94.Split // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6654c34
	void Len(struct FString* S); // Function Engine.*979f12ab94.Len // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x665077c
	struct UObject* *6b91f9c2e5(); // Function Engine.*979f12ab94.*6b91f9c2e5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664692c
	struct FString *45a7e8e349(struct UObject** InObj); // Function Engine.*979f12ab94.*45a7e8e349 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6644d24
	void *0ac76082d9(struct FString* inString); // Function Engine.*979f12ab94.*0ac76082d9 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66472a4
	enum class *929650006a *aca5ed584c(); // Function Engine.*979f12ab94.*aca5ed584c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x665142c
	void *56d8e45929(struct FRotator* OutConvertedRotator); // Function Engine.*979f12ab94.*56d8e45929 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66470c8
	int32 Right(); // Function Engine.*979f12ab94.Right // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6653058
	int32 Left(); // Function Engine.*979f12ab94.Left // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6650258
	void EndsWith(struct FString* SourceString, enum class *929650006a SearchCase); // Function Engine.*979f12ab94.EndsWith // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6648d68
	struct FString *390858a7fc(); // Function Engine.*979f12ab94.*390858a7fc // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb6a7c8
	int32 Mid(); // Function Engine.*979f12ab94.Mid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66515c0
	void *400ccce678(struct FString* A); // Function Engine.*979f12ab94.*400ccce678 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6649208
	struct FString NotEqual_StriStri(); // Function Engine.*979f12ab94.NotEqual_StriStri // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6651d54
	struct FString *0f3dc5594c(int32* inInt); // Function Engine.*979f12ab94.*0f3dc5594c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6644658
	struct FString *9c00b565d9(struct FString* AppendTo); // Function Engine.*979f12ab94.*9c00b565d9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6644f60
	int32 *28a7fb952c(); // Function Engine.*979f12ab94.*28a7fb952c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664c850
	void Replace(struct FString* SourceString, struct FString* to); // Function Engine.*979f12ab94.Replace // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6652a64
	struct FIntVector *4d2b92ce95(); // Function Engine.*979f12ab94.*4d2b92ce95 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6646748
	struct FString *5398d31e82(); // Function Engine.*979f12ab94.*5398d31e82 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664d848
	void *6adb1e69c3(struct FString* inString); // Function Engine.*979f12ab94.*6adb1e69c3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6646f1c
	struct FName *e5f8036030(); // Function Engine.*979f12ab94.*e5f8036030 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x5ff0750
	struct FString *c027d1013f(); // Function Engine.*979f12ab94.*c027d1013f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6646e48
	void *cd461e8475(struct FString* Prefix, struct FString* Suffix); // Function Engine.*979f12ab94.*cd461e8475 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66453ec
	struct FString ToUpper(); // Function Engine.*979f12ab94.ToUpper // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6656200
	struct FLinearColor *fd8d13356a(); // Function Engine.*979f12ab94.*fd8d13356a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6646ccc
	void *4f2bb00bec(struct FString* A); // Function Engine.*979f12ab94.*4f2bb00bec // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6649090
	void *79188456fa(); // Function Engine.*979f12ab94.*79188456fa // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6646498
	struct FVector2D *2d5c1f8dba(); // Function Engine.*979f12ab94.*2d5c1f8dba // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66478fc
	void *3f6c7b066d(struct FString* AppendTo, struct FIntVector* InIntVector); // Function Engine.*979f12ab94.*3f6c7b066d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6644894
	struct FString *3a78dc4458(); // Function Engine.*979f12ab94.*3a78dc4458 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6644418
	struct FString *47200834fb(int32* Count); // Function Engine.*979f12ab94.*47200834fb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x665323c
	void *77fe083419(struct FString* SourceString); // Function Engine.*979f12ab94.*77fe083419 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6653428
	float *9d57634d3d(); // Function Engine.*979f12ab94.*9d57634d3d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc4f160
	struct FString *db2a97ec18(); // Function Engine.*979f12ab94.*db2a97ec18 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664a284
	void *599fb86df0(struct FString* SourceString); // Function Engine.*979f12ab94.*599fb86df0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6648284
	int32 *4984cff6b8(); // Function Engine.*979f12ab94.*4984cff6b8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6650430
	struct FString NotEqual_StrStr(struct FString* B); // Function Engine.*979f12ab94.NotEqual_StrStr // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6651bdc
	void *2d4df68d4d(struct FString* SourceString); // Function Engine.*979f12ab94.*2d4df68d4d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66564d8
	struct FString Reverse(); // Function Engine.*979f12ab94.Reverse // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6652ee0
	struct FTransform *d078930861(); // Function Engine.*979f12ab94.*d078930861 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x664762c
	void Trim(struct FString* SourceString); // Function Engine.*979f12ab94.Trim // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6656348
	void ToLower(struct FString* SourceString); // Function Engine.*979f12ab94.ToLower // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66560e8
	struct FString *86264e3014(); // Function Engine.*979f12ab94.*86264e3014 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6646fe8
	bool *d1475b9739(); // Function Engine.*979f12ab94.*d1475b9739 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6645e38
	void *e985ad3e2a(struct FString* Prefix, struct FString* Suffix); // Function Engine.*979f12ab94.*e985ad3e2a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6643f80
	struct FString *1850dd5e0d(); // Function Engine.*979f12ab94.*1850dd5e0d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6644ae8
	void *9df79d2e28(struct FLinearColor* InColor); // Function Engine.*979f12ab94.*9df79d2e28 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6646004
	void *37e945e439(struct FString* SourceString); // Function Engine.*979f12ab94.*37e945e439 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x665060c
	struct FRotator *9c442e179f(); // Function Engine.*979f12ab94.*9c442e179f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6646ae4
	void *d1869e1222(struct FString* inString); // Function Engine.*979f12ab94.*d1869e1222 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6647450
	bool *09bb698759(struct FString* Delimiter); // Function Engine.*979f12ab94.*09bb698759 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66524a0
	float *431aadf5c9(); // Function Engine.*979f12ab94.*431aadf5c9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6656000
	void *865b76fd2f(struct FString* Prefix, struct FString* Suffix); // Function Engine.*979f12ab94.*865b76fd2f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66441cc
	bool Contains(); // Function Engine.*979f12ab94.Contains // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6645a88
	void *5ec0656f7c(struct FVector* InVec); // Function Engine.*979f12ab94.*5ec0656f7c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6647ad8
	void *42f7b10ca4(bool InBool); // Function Engine.*979f12ab94.*42f7b10ca4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6645c78
};

// Class Engine.*f8cf725be6
// Size: 0x28 (Inherited: 0x28)
struct U*f8cf725be6 : UBlueprintFunctionLibrary {

	struct FString *432e4acc62(); // Function Engine.*f8cf725be6.*432e4acc62 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664b484
	struct FName *a3c87f6b90(); // Function Engine.*f8cf725be6.*a3c87f6b90 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664da4c
	void *06e58ad597(); // Function Engine.*f8cf725be6.*06e58ad597 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664c198
	struct FName *ec6f44d018(); // Function Engine.*f8cf725be6.*ec6f44d018 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664cd14
	struct FName *7a5e46eba5(); // Function Engine.*f8cf725be6.*7a5e46eba5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664c9f8
	void *f41b3f48ff(struct FString* Key); // Function Engine.*f8cf725be6.*f41b3f48ff // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664d930
	struct FName *42bc83276a(); // Function Engine.*f8cf725be6.*42bc83276a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664b0ec
	struct FString *6726473cc4(); // Function Engine.*f8cf725be6.*6726473cc4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664cba8
};

// Class Engine.*4ed38c6d35
// Size: 0x28 (Inherited: 0x28)
struct U*4ed38c6d35 : UBlueprintFunctionLibrary {

	void *0cabfdcbb8(struct FText* A); // Function Engine.*4ed38c6d35.*0cabfdcbb8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6651a48
	struct FDateTime *1d5ad1892e(); // Function Engine.*4ed38c6d35.*1d5ad1892e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6642834
	void *5bf4bc8552(struct FString* inString); // Function Engine.*4ed38c6d35.*5bf4bc8552 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc249e8
	void *89ef3c6eaa(int32* BaseValue); // Function Engine.*4ed38c6d35.*89ef3c6eaa // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6641fec
	struct FText *6c15d2ced1(); // Function Engine.*4ed38c6d35.*6c15d2ced1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6655ee0
	struct FText *f0562e6604(); // Function Engine.*4ed38c6d35.*f0562e6604 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6655dc0
	void *c4a3fd78d9(struct FName* InName); // Function Engine.*4ed38c6d35.*c4a3fd78d9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6646848
	void *9a81b14b58(); // Function Engine.*4ed38c6d35.*9a81b14b58 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x664776c
	struct FText *60bcb80fc2(); // Function Engine.*4ed38c6d35.*60bcb80fc2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x66557c4
	void *bae4330a9d(); // Function Engine.*4ed38c6d35.*bae4330a9d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664a748
	void *3f42fc1839(); // Function Engine.*4ed38c6d35.*3f42fc1839 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6655a60
	struct FString *ba605007a7(); // Function Engine.*4ed38c6d35.*ba605007a7 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6642cb4
	struct FText *1f01808331(); // Function Engine.*4ed38c6d35.*1f01808331 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xbac004
	void *f0e954741b(struct FText* B); // Function Engine.*4ed38c6d35.*f0e954741b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6648efc
	int32 *fb3375bcdc(float* Value); // Function Engine.*4ed38c6d35.*fb3375bcdc // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66461d8
	void *880f76d257(); // Function Engine.*4ed38c6d35.*880f76d257 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66460f8
	void *9f12ce8e27(); // Function Engine.*4ed38c6d35.*9f12ce8e27 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66432c0
	struct FRotator *d0f0e0c846(); // Function Engine.*4ed38c6d35.*d0f0e0c846 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6646be4
	struct FText *289aed18c6(); // Function Engine.*4ed38c6d35.*289aed18c6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6655984
	void *3b1bde06f4(struct FText* InText); // Function Engine.*4ed38c6d35.*3b1bde06f4 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6655ca0
	void *a397f1fe93(); // Function Engine.*4ed38c6d35.*a397f1fe93 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x66558a8
	int32 *16c51753ec(int32* MinimumFractionalDigits, struct FString* CurrencyCode); // Function Engine.*4ed38c6d35.*16c51753ec // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66424f8
	void *acad8d1876(struct UObject** InObj); // Function Engine.*4ed38c6d35.*acad8d1876 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6646a0c
	struct FString *c4a3c39639(); // Function Engine.*4ed38c6d35.*c4a3c39639 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6643028
	void *58ba83364c(struct FName* TableId); // Function Engine.*4ed38c6d35.*58ba83364c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6655584
	void *9c34ded135(struct FText* InText); // Function Engine.*4ed38c6d35.*9c34ded135 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x66556e8
	struct FVector2D *685f6f5af2(); // Function Engine.*4ed38c6d35.*685f6f5af2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6647a04
	bool *16d114dde8(); // Function Engine.*4ed38c6d35.*16d114dde8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6645f2c
	void *3499e25506(struct FString* InTimeZone); // Function Engine.*4ed38c6d35.*3499e25506 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6642e70
	struct FString *6bf74ce99c(); // Function Engine.*4ed38c6d35.*6bf74ce99c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66421b8
	void Format(struct FText* InPattern); // Function Engine.*4ed38c6d35.Format // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6aa3f8
	struct FText *dc74ebebf2(); // Function Engine.*4ed38c6d35.*dc74ebebf2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6649ed8
	void *342d1138f7(float* Value, bool bUseGrouping, int32* MaximumIntegralDigits, int32* MaximumFractionalDigits); // Function Engine.*4ed38c6d35.*342d1138f7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66429f4
	struct FText *6a6f540afe(); // Function Engine.*4ed38c6d35.*6a6f540afe // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6655b80
	int32 *ab1c7734d8(bool bUseGrouping, int32* MaximumIntegralDigits); // Function Engine.*4ed38c6d35.*ab1c7734d8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664658c
	void *77dcdab9c6(struct FText* A); // Function Engine.*4ed38c6d35.*77dcdab9c6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6649394
	struct FDateTime *26b787af25(); // Function Engine.*4ed38c6d35.*26b787af25 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6642914
	void *b113ca0dae(bool InBool); // Function Engine.*4ed38c6d35.*b113ca0dae // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6645d5c
	void *fc6296c28d(struct FVector* InVec); // Function Engine.*4ed38c6d35.*fc6296c28d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6647bd8
	struct FDateTime *bd318b4a1d(); // Function Engine.*4ed38c6d35.*bd318b4a1d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66431e0
	struct FText *67a865cd7a(); // Function Engine.*4ed38c6d35.*67a865cd7a // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6651ee0
	void *b527fed1a9(struct FName* OutTableId); // Function Engine.*4ed38c6d35.*b527fed1a9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6655258
};

// Class Engine.*210c07397c
// Size: 0x28 (Inherited: 0x28)
struct U*210c07397c : UBlueprintFunctionLibrary {

	void *1f4d17b584(); // Function Engine.*210c07397c.*1f4d17b584 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66529d0
	enum class EVertexPaintAxis *fbb1573b80(); // Function Engine.*210c07397c.*fbb1573b80 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6652194
	void *f8aa4ee339(struct FLinearColor* FillColor); // Function Engine.*210c07397c.*f8aa4ee339 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6652370
};

// Class Engine.World
// Size: 0xc70 (Inherited: 0x28)
struct UWorld : UObject {
	char pad_28[0x138]; // 0x28(0x138)
	struct AParticleEventManager* *ae98578de5[0x08]; // 0x160(0x08)
	char pad_168[0x8]; // 0x168(0x08)
	struct UNavigationSystem* NavigationSystem[0x08]; // 0x170(0x08)
	struct UDirectionalLightComponent* *aa493645a4[0x08]; // 0x178(0x08)
	char pad_180[0x8]; // 0x180(0x08)
	struct U*21d3a5fd2a* *d895e2af95[0x08]; // 0x188(0x08)
	char pad_190[0xd8]; // 0x190(0xd8)
	struct TArray<struct F*b7f45c1414> *f2f8cbc728[0x10]; // 0x268(0x10)
	char pad_278[0x8]; // 0x278(0x08)
	struct TArray<struct UObject*> *fb27a17937[0x10]; // 0x280(0x10)
	char pad_290[0x20]; // 0x290(0x20)
	struct TArray<struct ULevel*> Levels[0x10]; // 0x2b0(0x10)
	char pad_2C0[0x8]; // 0x2c0(0x08)
	struct APhysicsVolume* *ed42e77274[0x08]; // 0x2c8(0x08)
	struct TArray<struct ULevelStreaming*> *48581da8ac[0x10]; // 0x2d0(0x10)
	char pad_2E0[0x50]; // 0x2e0(0x50)
	struct ULevel* CurrentLevel[0x08]; // 0x330(0x08)
	char pad_338[0x10]; // 0x338(0x10)
	struct U*21d3a5fd2a* *9a7a6cad41[0x08]; // 0x348(0x08)
	char pad_350[0x18]; // 0x350(0x18)
	struct UCanvas* *bf9f8cd5ba[0x08]; // 0x368(0x08)
	char pad_370[0x18]; // 0x370(0x18)
	struct UNetDriver* NetDriver[0x08]; // 0x388(0x08)
	char pad_390[0x10]; // 0x390(0x10)
	struct UPhysicsCollisionHandler* PhysicsCollisionHandler[0x08]; // 0x3a0(0x08)
	char pad_3A8[0x3e8]; // 0x3a8(0x3e8)
	struct UAvoidanceManager* AvoidanceManager[0x08]; // 0x790(0x08)
	struct UWorldComposition* WorldComposition[0x08]; // 0x798(0x08)
	char pad_7A0[0x8]; // 0x7a0(0x08)
	struct UCanvas* *bb4bbecad0[0x08]; // 0x7a8(0x08)
	struct UDemoNetDriver* DemoNetDriver[0x08]; // 0x7b0(0x08)
	char pad_7B8[0x10]; // 0x7b8(0x10)
	struct FString *067ae7b07f[0x10]; // 0x7c8(0x10)
	struct ULevel* *8a4fdc2050[0x08]; // 0x7d8(0x08)
	struct ULevel* *6e11098a18[0x08]; // 0x7e0(0x08)
	char pad_7E8[0x58]; // 0x7e8(0x58)
	struct TArray<struct UObject*> *d73cc1af77[0x10]; // 0x840(0x10)
	char pad_850[0x8]; // 0x850(0x08)
	struct AGameNetworkManager* *9e4c6a0201[0x08]; // 0x858(0x08)
	char pad_860[0x8]; // 0x860(0x08)
	struct UAISystemBase* AISystem[0x08]; // 0x868(0x08)
	char pad_870[0x8]; // 0x870(0x08)
	struct U*21d3a5fd2a* *2a8306bb38[0x08]; // 0x878(0x08)
	char pad_880[0xd8]; // 0x880(0xd8)
	struct TArray<struct U*8479b69472*> *ba0807b92b[0x10]; // 0x958(0x10)
	char pad_968[0x78]; // 0x968(0x78)
	struct AGameModeBase* *c9df55177b[0x08]; // 0x9e0(0x08)
	char pad_9E8[0x5a]; // 0x9e8(0x5a)
	char *68ac0b0d94 : 1; // 0xa42(0x01)
	char pad_A42_1 : 7; // 0xa42(0x01)
	char pad_A43[0x6d]; // 0xa43(0x6d)
	struct TMap<struct F*713b991027, struct F*63886a6ada> *b9e39cb495[0x50]; // 0xab0(0x50)
	char pad_B00[0x170]; // 0xb00(0x170)
};

// Class Engine.NavigationSystem
// Size: 0x4d0 (Inherited: 0x28)
struct UNavigationSystem : UBlueprintFunctionLibrary {
	struct ANavigationData* *c2b4fbbc53[0x08]; // 0x28(0x08)
	struct ANavigationData* *c28689a01b[0x08]; // 0x30(0x08)
	char bAutoCreateNavigationData : 1; // 0x38(0x01)
	char bAllowClientSideNavigation : 1; // 0x38(0x01)
	char *1e7840c609 : 1; // 0x38(0x01)
	char bInitialBuildingLocked : 1; // 0x38(0x01)
	char pad_38_4 : 1; // 0x38(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x38(0x01)
	char pad_38_6 : 2; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float ActiveTilesUpdateInterval[0x04]; // 0x44(0x04)
	struct TArray<struct F*dbc2be8864> SupportedAgents[0x10]; // 0x48(0x10)
	float DirtyAreasUpdateFreq[0x04]; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct ANavigationData*> *4bbfcdbf6c[0x10]; // 0x60(0x10)
	struct TArray<struct FBox> *1082afc001[0x10]; // 0x70(0x10)
	struct TMap<int32, struct ANavigationData*> *a10890d766[0x50]; // 0x80(0x50)
	struct TArray<struct ANavigationData*> *7c453b5668[0x10]; // 0xd0(0x10)
	char pad_E0[0x60]; // 0xe0(0x60)
	struct FMulticastDelegate *4a9806052b[0x10]; // 0x140(0x10)
	struct FMulticastDelegate OnNavigationGenerationFinishedDelegate[0x10]; // 0x150(0x10)
	char pad_160[0x124]; // 0x160(0x124)
	enum class FNavigationSystemRunMode OperationMode; // 0x284(0x01)
	char pad_285[0x243]; // 0x285(0x243)
	uint32 DynamicNavThreadNum[0x04]; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)

	void *14e16fa557(); // Function Engine.NavigationSystem.*14e16fa557 // Final|Native|Public|BlueprintCallable // @ game+0x6653b24
	void *81718ab4c0(struct UObject** WorldContext); // Function Engine.NavigationSystem.*81718ab4c0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664d784
	struct UObject* *bea9c09c2b(); // Function Engine.NavigationSystem.*bea9c09c2b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664d6c0
	struct FVector GetPathLength(float* PathLength, struct UClass** FilterClass); // Function Engine.NavigationSystem.GetPathLength // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x664b9f0
	void *b706108123(); // Function Engine.NavigationSystem.*b706108123 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664b5f0
	struct AController* *2b2eab6d71(); // Function Engine.NavigationSystem.*2b2eab6d71 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66549e0
	struct UObject* *2e6de6bd1e(struct FVector* Point, struct ANavigationData** NavData, struct FVector* QueryExtent); // Function Engine.NavigationSystem.*2e6de6bd1e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x664fd68
	struct UClass* GetRandomReachablePointInRadius(); // Function Engine.NavigationSystem.GetRandomReachablePointInRadius // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x664be64
	void *8bba30c587(struct FVector* PathStart, float* PathCost, struct UClass** FilterClass); // Function Engine.NavigationSystem.*8bba30c587 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x664b774
	void *7c33f0bcf2(); // Function Engine.NavigationSystem.*7c33f0bcf2 // Final|Native|Public|BlueprintCallable // @ game+0x6653bbc
	struct FVector ProjectPointToNavigation(struct ANavigationData** NavData, struct FVector* QueryExtent); // Function Engine.NavigationSystem.ProjectPointToNavigation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6652698
	void *55c0b54815(); // Function Engine.NavigationSystem.*55c0b54815 // Final|Native|Public|BlueprintCallable // @ game+0x665694c
	struct AActor* *535e83c2c9(struct UClass** FilterClass); // Function Engine.NavigationSystem.*535e83c2c9 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66498b4
	struct UClass* GetRandomPointInNavigableRadius(struct FVector* Origin); // Function Engine.NavigationSystem.GetRandomPointInNavigableRadius // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x664bc74
	struct FVector *a2ddc29f8e(float* Radius, struct UClass** FilterClass); // Function Engine.NavigationSystem.*a2ddc29f8e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x664f734
	void *c430a3ccdb(); // Function Engine.NavigationSystem.*c430a3ccdb // Final|Native|Public|BlueprintCallable // @ game+0x6652ecc
	void *7d70d564d9(); // Function Engine.NavigationSystem.*7d70d564d9 // Final|Native|Public|BlueprintCallable // @ game+0x6652070
	struct FVector *d91ce8fd47(struct UClass** FilterClass); // Function Engine.NavigationSystem.*d91ce8fd47 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66517fc
	void *f663414a2c(struct AActor** Invoker); // Function Engine.NavigationSystem.*f663414a2c // Final|Native|Public|BlueprintCallable // @ game+0x66528a8
	void *63bc2432b4(); // Function Engine.NavigationSystem.*63bc2432b4 // Final|Native|Public|BlueprintCallable // @ game+0x6656858
	struct UObject* *42e0d468e8(struct FVector* Origin, float* Radius, struct UClass** FilterClass); // Function Engine.NavigationSystem.*42e0d468e8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x664f504
	struct AController* *57032caa9b(); // Function Engine.NavigationSystem.*57032caa9b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6654ab8
	struct FVector *2ea61ac520(struct AActor** PathfindingContext); // Function Engine.NavigationSystem.*2ea61ac520 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6649ae0
};

// Class Engine.*7a0d8c3a1d
// Size: 0x28 (Inherited: 0x28)
struct U*7a0d8c3a1d : UBlueprintFunctionLibrary {

	void *5c3b2c949f(); // Function Engine.*7a0d8c3a1d.*5c3b2c949f // Final|Native|Static|Public|BlueprintCallable // @ game+0x66547e0
	bool *bb983209d4(struct UTexture** Texture); // Function Engine.*7a0d8c3a1d.*bb983209d4 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6654280
	void *5b4bf05ad1(); // Function Engine.*7a0d8c3a1d.*5b4bf05ad1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x664d42c
	void *fb9c42a20a(); // Function Engine.*7a0d8c3a1d.*fb9c42a20a // Final|Native|Static|Public|BlueprintCallable // @ game+0x6648948
};

// Class Engine.*16fc128e26
// Size: 0x30 (Inherited: 0x30)
struct U*16fc128e26 : U*dd0f750ac4 {
};

// Class Engine.*4ae680a340
// Size: 0x30 (Inherited: 0x30)
struct U*4ae680a340 : U*3ea9fa89b4 {
};

// Class Engine.*4b9eb38a17
// Size: 0x28 (Inherited: 0x28)
struct U*4b9eb38a17 : UBlueprintFunctionLibrary {

	struct UClass* *57ef67a591(); // Function Engine.*4b9eb38a17.*57ef67a591 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664b3a8
	struct UClass* *ace65505f9(); // Function Engine.*4b9eb38a17.*ace65505f9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664a7dc
	void *700e76686e(struct UClass** Class); // Function Engine.*4b9eb38a17.*700e76686e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664b2cc
	struct UClass* *c8185f3d6b(); // Function Engine.*4b9eb38a17.*c8185f3d6b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664d164
	struct UClass* *bdd2af07f3(); // Function Engine.*4b9eb38a17.*bdd2af07f3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x664acf8
};

// Class Engine.*dc0d74174e
// Size: 0x28 (Inherited: 0x28)
struct U*dc0d74174e : UBlueprintFunctionLibrary {

	void *f6fa84b79e(struct UObject** WorldContextObject, struct FString* Text); // Function Engine.*dc0d74174e.*f6fa84b79e // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6650a60
	float LogLocation(); // Function Engine.*dc0d74174e.LogLocation // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6650c90
	void LogText(struct UObject** WorldContextObject); // Function Engine.*dc0d74174e.LogText // Final|Native|Static|Public|BlueprintCallable // @ game+0x6650ef8
};

// Class Engine.*6a85fd07be
// Size: 0x38 (Inherited: 0x28)
struct U*6a85fd07be : UObject {
	struct UEdGraphNode* Node[0x08]; // 0x28(0x08)
	struct FColor *0b59d3eec5[0x04]; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.AnimBlueprintGeneratedClass
// Size: 0x428 (Inherited: 0x3b8)
struct UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass {
	char pad_3B8[0x8]; // 0x3b8(0x08)
	struct TArray<struct F*3e8db83ef8> *87f8836c42[0x10]; // 0x3c0(0x10)
	struct USkeleton* TargetSkeleton[0x08]; // 0x3d0(0x08)
	struct TArray<struct FAnimNotifyEvent> *2f35a73a78[0x10]; // 0x3d8(0x10)
	int32 *1130675760[0x04]; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct TArray<int32> *59b46154cb[0x10]; // 0x3f0(0x10)
	char pad_400[0x18]; // 0x400(0x18)
	struct TArray<struct FName> *5f9fa98dff[0x10]; // 0x418(0x10)
};

// Class Engine.BodySetup
// Size: 0x3a0 (Inherited: 0x28)
struct UBodySetup : UObject {
	struct F*3ef2376653 *51f17763f8[0x48]; // 0x28(0x48)
	struct FName BoneName[0x08]; // 0x70(0x08)
	enum class EPhysicsType PhysicsType; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	char bAlwaysFullAnimWeight : 1; // 0x7c(0x01)
	char bConsiderForBounds : 1; // 0x7c(0x01)
	char *1ecaca91bc : 1; // 0x7c(0x01)
	char *f528e5afe4 : 1; // 0x7c(0x01)
	char *928b84018b : 1; // 0x7c(0x01)
	char *65401acfef : 1; // 0x7c(0x01)
	char *d084683aab : 1; // 0x7c(0x01)
	char pad_7C_7 : 1; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct UPhysicalMaterial* PhysMaterial[0x08]; // 0x80(0x08)
	enum class *764a82876a CollisionReponse; // 0x88(0x01)
	enum class ECollisionTraceFlag *8162ad8f39; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct FBodyInstance DefaultInstance[0x230]; // 0x90(0x230)
	struct F*a92203063d *a92203063d[0x10]; // 0x2c0(0x10)
	float MinContactOffset[0x04]; // 0x2d0(0x04)
	float BuildScale[0x04]; // 0x2d4(0x04)
	struct FVector BuildScale3D[0x0c]; // 0x2d8(0x0c)
	char pad_2E4[0xbc]; // 0x2e4(0xbc)
};

// Class Engine.*a0cd48d0cf
// Size: 0x3d0 (Inherited: 0x3a0)
struct U*a0cd48d0cf : UBodySetup {
	struct F*dec19e3efd *46f51a97fd[0x30]; // 0x3a0(0x30)
};

// Class Engine.PhysicsAsset
// Size: 0x108 (Inherited: 0x28)
struct UPhysicsAsset : UObject {
	struct TArray<int32> *b1ea445c1e[0x10]; // 0x28(0x10)
	struct TArray<struct USkeletalBodySetup*> *c0ec18c7c6[0x10]; // 0x38(0x10)
	struct TArray<struct UPhysicsConstraintTemplate*> *22dd670309[0x10]; // 0x48(0x10)
	char pad_58[0xa0]; // 0x58(0xa0)
	struct TArray<struct UBodySetup*> BodySetup[0x10]; // 0xf8(0x10)
};

// Class Engine.SkeletalBodySetup
// Size: 0x3b0 (Inherited: 0x3a0)
struct USkeletalBodySetup : UBodySetup {
	struct TArray<struct F*61257e2b8b> *4c18852ae2[0x10]; // 0x3a0(0x10)
};

// Class Engine.*5abd69ba76
// Size: 0x38 (Inherited: 0x28)
struct U*5abd69ba76 : UObject {
	struct TArray<struct FInputBlendPose> *dc95e655cb[0x10]; // 0x28(0x10)
};

// Class Engine.*91203b4189
// Size: 0x50 (Inherited: 0x28)
struct U*91203b4189 : UObject {
	struct FVector Location[0x0c]; // 0x28(0x0c)
	struct FRotator Rotation[0x0c]; // 0x34(0x0c)
	struct TArray<struct FString> *cff50e7ab4[0x10]; // 0x40(0x10)
};

// Class Engine.*e8a1b06437
// Size: 0x38 (Inherited: 0x28)
struct U*e8a1b06437 : UObject {
	float *2ec126503c[0x04]; // 0x28(0x04)
	struct FIntPoint Location[0x08]; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.Breakpoint
// Size: 0x40 (Inherited: 0x28)
struct UBreakpoint : UObject {
	char bEnabled : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UEdGraphNode* Node[0x08]; // 0x30(0x08)
	char *f8e57c2837 : 1; // 0x38(0x01)
	char *e2fbaa53a8 : 1; // 0x38(0x01)
	char *0ccd057396 : 1; // 0x38(0x01)
	char pad_38_3 : 5; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.BrushBuilder
// Size: 0x80 (Inherited: 0x28)
struct UBrushBuilder : UObject {
	struct FString *3723341cef[0x10]; // 0x28(0x10)
	struct FString Tooltip[0x10]; // 0x38(0x10)
	char *ebb6891ccb : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FVector> Vertices[0x10]; // 0x50(0x10)
	struct TArray<struct F*8b34ed3b12> Polys[0x10]; // 0x60(0x10)
	struct FName Layer[0x08]; // 0x70(0x08)
	char *560b1bd269 : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class Engine.ButtonStyleAsset
// Size: 0x2d0 (Inherited: 0x28)
struct UButtonStyleAsset : UObject {
	struct F*7bb05e3554 *7bb05e3554[0x2a8]; // 0x28(0x2a8)
};

// Class Engine.CameraAnim
// Size: 0x5e0 (Inherited: 0x28)
struct UCameraAnim : UObject {
	struct U*681140b349* *dd76bcbceb[0x08]; // 0x28(0x08)
	float AnimLength[0x04]; // 0x30(0x04)
	struct FBox BoundingBox[0x1c]; // 0x34(0x1c)
	char *29d5c0f1d4 : 1; // 0x50(0x01)
	char *453dc1d367 : 1; // 0x50(0x01)
	char pad_50_2 : 6; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float *cbcf82ab38[0x04]; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)
	struct FPostProcessSettings *e3a69233d2[0x570]; // 0x60(0x570)
	float *f36b0c8e9c[0x04]; // 0x5d0(0x04)
	char pad_5D4[0xc]; // 0x5d4(0x0c)
};

// Class Engine.*faef588082
// Size: 0x110 (Inherited: 0x28)
struct U*faef588082 : UObject {
	struct UCameraAnim* *aec1714a72[0x08]; // 0x28(0x08)
	struct U*c8e2f74187* *c8e2f74187[0x08]; // 0x30(0x08)
	char pad_38[0x18]; // 0x38(0x18)
	float PlayRate[0x04]; // 0x50(0x04)
	char pad_54[0x14]; // 0x54(0x14)
	struct U*2cd7fc2368* *795848d2d6[0x08]; // 0x68(0x08)
	struct U*89f82d34bc* *204d384c97[0x08]; // 0x70(0x08)
	enum class ECameraAnimPlaySpace *364bfed6d3; // 0x78(0x01)
	char pad_79[0x97]; // 0x79(0x97)

	void SetScale(); // Function Engine.*faef588082.SetScale // Final|Native|Public|BlueprintCallable // @ game+0x66540d4
	void SetDuration(); // Function Engine.*faef588082.SetDuration // Final|Native|Public|BlueprintCallable // @ game+0x6653838
	void Stop(); // Function Engine.*faef588082.Stop // Final|Native|Public|BlueprintCallable // @ game+0x665509c
};

// Class Engine.*d265edd002
// Size: 0x48 (Inherited: 0x28)
struct U*d265edd002 : UObject {
	char *cd4b9587db : 1; // 0x28(0x01)
	char bExclusive : 1; // 0x28(0x01)
	char pad_28_2 : 6; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	bool Priority; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct APlayerCameraManager* CameraOwner[0x08]; // 0x30(0x08)
	float AlphaInTime[0x04]; // 0x38(0x04)
	float AlphaOutTime[0x04]; // 0x3c(0x04)
	float Alpha[0x04]; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	void *847feadcab(); // Function Engine.*d265edd002.*847feadcab // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x58ccc9c
	struct FRotator BlueprintModifyCamera(float* DeltaTime, struct FRotator* ViewRotation); // Function Engine.*d265edd002.BlueprintModifyCamera // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x2cd4ac
	void *d5f585a3f2(); // Function Engine.*d265edd002.*d5f585a3f2 // Native|Public|BlueprintCallable // @ game+0x58dcf7c
	void BlueprintModifyPostProcess(float* DeltaTime); // Function Engine.*d265edd002.BlueprintModifyPostProcess // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x2cd4ac
	void *232d2b3871(); // Function Engine.*d265edd002.*232d2b3871 // Native|Public|BlueprintCallable // @ game+0x6648750
	void *05bca2745b(); // Function Engine.*d265edd002.*05bca2745b // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xdd2394
};

// Class Engine.*50a4472fea
// Size: 0x60 (Inherited: 0x48)
struct U*50a4472fea : U*d265edd002 {
	struct TArray<struct UCameraShake*> *7118af1b73[0x10]; // 0x48(0x10)
	float *4449fe70ef[0x04]; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.Canvas
// Size: 0x2f0 (Inherited: 0x28)
struct UCanvas : UObject {
	float OrgX[0x04]; // 0x28(0x04)
	float OrgY[0x04]; // 0x2c(0x04)
	float *f722314eb1[0x04]; // 0x30(0x04)
	float *785444cbd9[0x04]; // 0x34(0x04)
	struct FColor DrawColor[0x04]; // 0x38(0x04)
	char *6e83fa1e79 : 1; // 0x3c(0x01)
	char *1d7f627d85 : 1; // 0x3c(0x01)
	char *0610c6b35a : 1; // 0x3c(0x01)
	char pad_3C_3 : 5; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32 SizeX[0x04]; // 0x40(0x04)
	int32 SizeY[0x04]; // 0x44(0x04)
	char pad_48[0x8]; // 0x48(0x08)
	struct FPlane *08e926cea3[0x10]; // 0x50(0x10)
	struct UTexture2D* DefaultTexture[0x08]; // 0x60(0x08)
	struct UTexture2D* GradientTexture0[0x08]; // 0x68(0x08)
	struct U*a07e936f57* *a07e936f57[0x08]; // 0x70(0x08)
	char pad_78[0x278]; // 0x78(0x278)

	struct FVector2D *ac69be4dca(struct UTexture** BackGroundTexture, struct UTexture** RightBorderTexture, struct UTexture** BottomBorderTexture, struct FVector2D* ScreenSize); // Function Engine.Canvas.*ac69be4dca // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x664df4c
	void *a1762380eb(struct FVector* WorldOrigin); // Function Engine.Canvas.*a1762380eb // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x664ddf8
	struct UTexture* *622fdb185a(); // Function Engine.Canvas.*622fdb185a // Final|Native|Public|BlueprintCallable // @ game+0x664f3cc
	struct FVector *4fa83138c8(); // Function Engine.Canvas.*4fa83138c8 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x664fca4
	void *321cb13a4f(); // Function Engine.Canvas.*321cb13a4f // Final|Native|Public|BlueprintCallable // @ game+0x664e988
	float *2da350bd39(struct FVector2D* ScreenPositionA); // Function Engine.Canvas.*2da350bd39 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x664e5c8
	struct FVector2D *a53910de6c(struct FVector2D* CoordinateSize); // Function Engine.Canvas.*a53910de6c // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x664e71c
	bool *09746aeaee(struct FString* RenderText); // Function Engine.Canvas.*09746aeaee // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x664ec8c
	void *95a17f8d73(struct FVector2D* ScreenPosition, int32* NumberOfSides); // Function Engine.Canvas.*95a17f8d73 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x664eac0
	struct FString *f843468320(); // Function Engine.Canvas.*f843468320 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x664ffa0
	void *100dedf4bc(struct FVector2D* ScreenPosition); // Function Engine.Canvas.*100dedf4bc // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x664e4a0
	void *67853dc011(struct FString* RenderText); // Function Engine.Canvas.*67853dc011 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66500cc
	struct FVector2D *b9f1b0479f(struct FLinearColor* RenderColor, float* Rotation); // Function Engine.Canvas.*b9f1b0479f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x664f0b0
};

// Class Engine.*d2a9303d8d
// Size: 0x80 (Inherited: 0x68)
struct U*d2a9303d8d : UChannel {
	char pad_68[0x18]; // 0x68(0x18)
};

// Class Engine.VoiceChannel
// Size: 0x78 (Inherited: 0x68)
struct UVoiceChannel : UChannel {
	char pad_68[0x10]; // 0x68(0x10)
};

// Class Engine.*22d4ce3b3f
// Size: 0x608 (Inherited: 0x28)
struct U*22d4ce3b3f : UObject {
	struct F*d23c67e4c5 *d23c67e4c5[0x5e0]; // 0x28(0x5e0)
};

// Class Engine.Commandlet
// Size: 0x80 (Inherited: 0x28)
struct UCommandlet : UObject {
	struct FString HelpDescription[0x10]; // 0x28(0x10)
	struct FString HelpUsage[0x10]; // 0x38(0x10)
	struct FString HelpWebLink[0x10]; // 0x48(0x10)
	struct TArray<struct FString> HelpParamNames[0x10]; // 0x58(0x10)
	struct TArray<struct FString> HelpParamDescriptions[0x10]; // 0x68(0x10)
	char IsServer : 1; // 0x78(0x01)
	char IsClient : 1; // 0x78(0x01)
	char IsEditor : 1; // 0x78(0x01)
	char LogToConsole : 1; // 0x78(0x01)
	char ShowErrorCount : 1; // 0x78(0x01)
	char pad_78_5 : 3; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class Engine.*8ea0475d8b
// Size: 0xc8 (Inherited: 0x28)
struct U*8ea0475d8b : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UNetDriver* NetDriver[0x08]; // 0x30(0x08)
	struct UDemoNetDriver* DemoNetDriver[0x08]; // 0x38(0x08)
	char pad_40[0x88]; // 0x40(0x88)
};

// Class Engine.GPCFakeEngine
// Size: 0xf50 (Inherited: 0xf50)
struct UGPCFakeEngine : UEngine {
};

// Class Engine.GatherPackageChainCommandlet
// Size: 0x80 (Inherited: 0x80)
struct UGatherPackageChainCommandlet : UCommandlet {
};

// Class Engine.PluginCommandlet
// Size: 0xa0 (Inherited: 0x80)
struct UPluginCommandlet : UCommandlet {
	char pad_80[0x20]; // 0x80(0x20)
};

// Class Engine.SmokeTestCommandlet
// Size: 0x80 (Inherited: 0x80)
struct USmokeTestCommandlet : UCommandlet {
};

// Class Engine.*7beabb6727
// Size: 0x28 (Inherited: 0x28)
struct U*7beabb6727 : UInterface {
};

// Class Engine.*594e4d7ca9
// Size: 0x1f0 (Inherited: 0x30)
struct U*594e4d7ca9 : UCurveBase {
	struct FRichCurve *afdd2d733a[0x70]; // 0x30(0x1c0)

	float *09b6f902bd(); // Function Engine.*594e4d7ca9.*09b6f902bd // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x664b21c
};

// Class Engine.*59a0aeaef9
// Size: 0x180 (Inherited: 0x30)
struct U*59a0aeaef9 : UCurveBase {
	struct FRichCurve *afdd2d733a[0x70]; // 0x30(0x150)

	void *3bb4dc21f6(); // Function Engine.*59a0aeaef9.*3bb4dc21f6 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x664d084
};

// Class Engine.CurveEdPresetCurve
// Size: 0x28 (Inherited: 0x28)
struct UCurveEdPresetCurve : UObject {
};

// Class Engine.*0d07c6935e
// Size: 0x28 (Inherited: 0x28)
struct U*0d07c6935e : UInterface {

	void GetCurves(); // Function Engine.*0d07c6935e.GetCurves // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x664a564
	struct FName GetCurveValue(); // Function Engine.*0d07c6935e.GetCurveValue // Native|Event|Public|BlueprintEvent|Const // @ game+0x664a4c0
	void GetBindingName(); // Function Engine.*0d07c6935e.GetBindingName // Native|Event|Public|BlueprintEvent|Const // @ game+0x58a7984
};

// Class Engine.CurveTable
// Size: 0x80 (Inherited: 0x28)
struct UCurveTable : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class Engine.PreviewMeshCollection
// Size: 0x48 (Inherited: 0x30)
struct UPreviewMeshCollection : UDataAsset {
	struct USkeleton* Skeleton[0x08]; // 0x30(0x08)
	struct TArray<struct FPreviewMeshCollectionEntry> SkeletalMeshes[0x10]; // 0x38(0x10)
};

// Class Engine.PrimaryAssetLabel
// Size: 0x68 (Inherited: 0x30)
struct UPrimaryAssetLabel : U*b7b5fc361e {
	struct F*4a161b0907 Rules[0x10]; // 0x30(0x10)
	char *552e6c5d45 : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct UObject*> *02442bbda5[0x10]; // 0x48(0x10)
	struct TArray<struct UClass*> *7a0c34b08b[0x10]; // 0x58(0x10)
};

// Class Engine.*1c2e584736
// Size: 0x38 (Inherited: 0x30)
struct U*1c2e584736 : UDataAsset {
	float *d721b555b8[0x04]; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*56b816d897
// Size: 0xb8 (Inherited: 0x28)
struct U*56b816d897 : UObject {
	int32 *b767cc8582[0x04]; // 0x28(0x04)
	struct F*d343e03b2f *12735bde0e[0x24]; // 0x2c(0x24)
	int32 RandomSeed[0x04]; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct FVector> *0a337adbfc[0x10]; // 0x58(0x10)
	int32 *ad8f1a0260[0x04]; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UMaterialInterface*> Materials[0x10]; // 0x70(0x10)
	struct TArray<struct F*d72e9b9c3a> ChunkParameters[0x10]; // 0x80(0x10)
	char pad_90[0x28]; // 0x90(0x28)
};

// Class Engine.AnimationSettings
// Size: 0x70 (Inherited: 0x38)
struct UAnimationSettings : U*6c389a598a {
	int32 CompressCommandletVersion[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FString> KeyEndEffectorsMatchNameArray[0x10]; // 0x40(0x10)
	struct UClass* DefaultCompressionAlgorithm[0x08]; // 0x50(0x08)
	enum class AnimationCompressionFormat RotationCompressionFormat; // 0x58(0x01)
	enum class AnimationCompressionFormat TranslationCompressionFormat; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	float MaxCurveError[0x04]; // 0x5c(0x04)
	float AlternativeCompressionThreshold[0x04]; // 0x60(0x04)
	bool ForceRecompression; // 0x64(0x01)
	bool bOnlyCheckForMissingSkeletalMeshes; // 0x65(0x01)
	bool bForceBelowThreshold; // 0x66(0x01)
	bool bFirstRecompressUsingCurrentOrDefault; // 0x67(0x01)
	bool bRaiseMaxErrorToExisting; // 0x68(0x01)
	bool bTryFixedBitwiseCompression; // 0x69(0x01)
	bool bTryPerTrackBitwiseCompression; // 0x6a(0x01)
	bool bTryLinearKeyRemovalCompression; // 0x6b(0x01)
	bool bTryIntervalKeyRemoval; // 0x6c(0x01)
	bool bEnablePerformanceLog; // 0x6d(0x01)
	bool bStripAnimationDataOnDedicatedServer; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
};

// Class Engine.AssetManagerSettings
// Size: 0xa0 (Inherited: 0x38)
struct UAssetManagerSettings : U*6c389a598a {
	struct TArray<struct F*a4f4171d60> PrimaryAssetTypesToScan[0x10]; // 0x38(0x10)
	struct TArray<struct FDirectoryPath> DirectoriesToExclude[0x10]; // 0x48(0x10)
	struct TArray<struct F*7be435a022> PrimaryAssetRules[0x10]; // 0x58(0x10)
	bool bOnlyCookProductionAssets; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct F*143431c4d5> PrimaryAssetIdRedirects[0x10]; // 0x70(0x10)
	struct TArray<struct F*143431c4d5> PrimaryAssetTypeRedirects[0x10]; // 0x80(0x10)
	struct TArray<struct F*143431c4d5> AssetPathRedirects[0x10]; // 0x90(0x10)
};

// Class Engine.AudioSettings
// Size: 0xb0 (Inherited: 0x38)
struct UAudioSettings : U*6c389a598a {
	struct FStringAssetReference DefaultSoundClassName[0x10]; // 0x38(0x10)
	struct FStringAssetReference DefaultSoundConcurrencyName[0x10]; // 0x48(0x10)
	struct FStringAssetReference DefaultBaseSoundMix[0x10]; // 0x58(0x10)
	struct FStringAssetReference VoiPSoundClass[0x10]; // 0x68(0x10)
	float LowPassFilterResonance[0x04]; // 0x78(0x04)
	int32 MaximumConcurrentStreams[0x04]; // 0x7c(0x04)
	struct TArray<struct F*e73312bd8f> QualityLevels[0x10]; // 0x80(0x10)
	char bAllowVirtualizedSounds : 1; // 0x90(0x01)
	char bDisableMasterEQ : 1; // 0x90(0x01)
	char bDisableMasterReverb : 1; // 0x90(0x01)
	char bAllowCenterChannel3DPanning : 1; // 0x90(0x01)
	char pad_90_4 : 4; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FString DialogueFilenameFormat[0x10]; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class Engine.ExcludedPackageSettings
// Size: 0x58 (Inherited: 0x38)
struct UExcludedPackageSettings : U*6c389a598a {
	struct TArray<struct FString> CommonExcludedPackages[0x10]; // 0x38(0x10)
	struct TArray<struct FString> MinSpecExcludedPackages[0x10]; // 0x48(0x10)
};

// Class Engine.StreamingSettings
// Size: 0x70 (Inherited: 0x38)
struct UStreamingSettings : U*6c389a598a {
	char AsyncLoadingThreadEnabled : 1; // 0x38(0x01)
	char WarnIfTimeLimitExceeded : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float TimeLimitExceededMultiplier[0x04]; // 0x3c(0x04)
	float TimeLimitExceededMinTime[0x04]; // 0x40(0x04)
	int32 MinBulkDataSizeForAsyncLoading[0x04]; // 0x44(0x04)
	float AsyncIOBandwidthLimit[0x04]; // 0x48(0x04)
	char UseBackgroundLevelStreaming : 1; // 0x4c(0x01)
	char AsyncLoadingUseFullTimeLimit : 1; // 0x4c(0x01)
	char LoadAllStreamingLevels : 1; // 0x4c(0x01)
	char pad_4C_3 : 5; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float AsyncLoadingTimeLimit[0x04]; // 0x50(0x04)
	float PriorityAsyncLoadingExtraTime[0x04]; // 0x54(0x04)
	float LevelStreamingActorsUpdateTimeLimit[0x04]; // 0x58(0x04)
	int32 LevelStreamingComponentsRegistrationGranularity[0x04]; // 0x5c(0x04)
	float LevelStreamingUnregisterComponentsTimeLimit[0x04]; // 0x60(0x04)
	int32 LevelStreamingComponentsUnregistrationGranularity[0x04]; // 0x64(0x04)
	char EventDrivenLoaderEnabled : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.GarbageCollectionSettings
// Size: 0x58 (Inherited: 0x38)
struct UGarbageCollectionSettings : U*6c389a598a {
	float TimeBetweenPurgingPendingKillObjects[0x04]; // 0x38(0x04)
	char FlushStreamingOnGC : 1; // 0x3c(0x01)
	char AllowParallelGC : 1; // 0x3c(0x01)
	char IncrementalBeginDestroyEnabled : 1; // 0x3c(0x01)
	char CreateGCClusters : 1; // 0x3c(0x01)
	char MergeGCClusters : 1; // 0x3c(0x01)
	char ActorClusteringEnabled : 1; // 0x3c(0x01)
	char BlueprintClusteringEnabled : 1; // 0x3c(0x01)
	char pad_3C_7 : 1; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32 NumRetriesBeforeForcingGC[0x04]; // 0x40(0x04)
	int32 MaxObjectsNotConsideredByGC[0x04]; // 0x44(0x04)
	int32 SizeOfPermanentObjectPool[0x04]; // 0x48(0x04)
	int32 MaxObjectsInGame[0x04]; // 0x4c(0x04)
	int32 MaxObjectsInEditor[0x04]; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.MeshSimplificationSettings
// Size: 0x40 (Inherited: 0x38)
struct UMeshSimplificationSettings : U*6c389a598a {
	struct FName MeshReductionModuleName[0x08]; // 0x38(0x08)
};

// Class Engine.NetworkSettings
// Size: 0x48 (Inherited: 0x38)
struct UNetworkSettings : U*6c389a598a {
	char bVerifyPeer : 1; // 0x38(0x01)
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 MaxRepArraySize[0x04]; // 0x3c(0x04)
	int32 MaxRepArrayMemory[0x04]; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.PhysicsSettings
// Size: 0xe8 (Inherited: 0x38)
struct UPhysicsSettings : U*6c389a598a {
	float DefaultGravityZ[0x04]; // 0x38(0x04)
	float DefaultTerminalVelocity[0x04]; // 0x3c(0x04)
	float DefaultFluidFriction[0x04]; // 0x40(0x04)
	int32 SimulateScratchMemorySize[0x04]; // 0x44(0x04)
	int32 RagdollAggregateThreshold[0x04]; // 0x48(0x04)
	float TriangleMeshTriangleMinAreaThreshold[0x04]; // 0x4c(0x04)
	bool bEnableComplexForSim; // 0x50(0x01)
	bool bEnableComplexForSimOnDedicatedServer; // 0x51(0x01)
	bool bEnablePCM; // 0x52(0x01)
	bool bEnableStabilization; // 0x53(0x01)
	bool bWarnMissingLocks; // 0x54(0x01)
	bool bEnable2DPhysics; // 0x55(0x01)
	enum class ESettingsLockedAxis LockedAxis; // 0x56(0x01)
	enum class ESettingsDOF DefaultDegreesOfFreedom; // 0x57(0x01)
	float BounceThresholdVelocity[0x04]; // 0x58(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x5c(0x01)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	float MaxAngularVelocity[0x04]; // 0x60(0x04)
	float MaxDepenetrationVelocity[0x04]; // 0x64(0x04)
	float ContactOffsetMultiplier[0x04]; // 0x68(0x04)
	float MinContactOffset[0x04]; // 0x6c(0x04)
	float MaxContactOffset[0x04]; // 0x70(0x04)
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0x74(0x01)
	enum class ECollisionTraceFlag DefaultShapeComplexity; // 0x75(0x01)
	bool bDefaultHasComplexCollision; // 0x76(0x01)
	bool bSuppressFaceRemapTable; // 0x77(0x01)
	bool bSupportUVFromHitResults; // 0x78(0x01)
	bool bDisableActiveActors; // 0x79(0x01)
	bool bDisableCCD; // 0x7a(0x01)
	char pad_7B[0x1]; // 0x7b(0x01)
	float MaxPhysicsDeltaTime[0x04]; // 0x7c(0x04)
	bool bSubstepping; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float MaxSubstepDeltaTime[0x04]; // 0x84(0x04)
	int32 MaxSubsteps[0x04]; // 0x88(0x04)
	float SyncSceneSmoothingFactor[0x04]; // 0x8c(0x04)
	float InitialAverageFrameRate[0x04]; // 0x90(0x04)
	float MaxPhysicsDeltaTimeOnDedicatedServer[0x04]; // 0x94(0x04)
	bool bSubsteppingOnDedicatedServer; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float MaxSubstepDeltaTimeOnDedicatedServer[0x04]; // 0x9c(0x04)
	int32 MaxSubstepsOnDedicatedServer[0x04]; // 0xa0(0x04)
	float SyncSceneSmoothingFactorOnDedicatedServer[0x04]; // 0xa4(0x04)
	float InitialAverageFrameRateOnDedicatedServer[0x04]; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct F*a009b7b901> PhysicalSurfaces[0x10]; // 0xb0(0x10)
	struct F*2e21c888cd DefaultBroadphaseSettings[0x28]; // 0xc0(0x28)
};

// Class Engine.RendererSettings
// Size: 0xc0 (Inherited: 0x38)
struct URendererSettings : U*6c389a598a {
	char bMobileHDR : 1; // 0x38(0x01)
	char bMobileDisableVertexFog : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 MaxMobileCascades[0x04]; // 0x3c(0x04)
	enum class EMobileMSAASampleCount MobileMSAASampleCount; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	char bDiscardUnusedQualityLevels : 1; // 0x44(0x01)
	char bOcclusionCulling : 1; // 0x44(0x01)
	char pad_44_2 : 6; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float MinScreenRadiusForLights[0x04]; // 0x48(0x04)
	float MinScreenRadiusForEarlyZPass[0x04]; // 0x4c(0x04)
	float MinScreenRadiusForCSMdepth[0x04]; // 0x50(0x04)
	char bPrecomputedVisibilityWarning : 1; // 0x54(0x01)
	char bTextureStreaming : 1; // 0x54(0x01)
	char bUseDXT5NormalMaps : 1; // 0x54(0x01)
	char bClearCoatEnableSecondNormal : 1; // 0x54(0x01)
	char pad_54_4 : 4; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32 ReflectionCaptureResolution[0x04]; // 0x58(0x04)
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1; // 0x5c(0x01)
	char bForwardShading : 1; // 0x5c(0x01)
	char bVertexFoggingForOpaque : 1; // 0x5c(0x01)
	char bAllowStaticLighting : 1; // 0x5c(0x01)
	char bUseNormalMapsForStaticLighting : 1; // 0x5c(0x01)
	char bGenerateMeshDistanceFields : 1; // 0x5c(0x01)
	char bEightBitMeshDistanceFields : 1; // 0x5c(0x01)
	char bGenerateLandscapeGIData : 1; // 0x5c(0x01)
	char bCompressMeshDistanceFields : 1; // 0x5d(0x01)
	char pad_5D_1 : 7; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	float TessellationAdaptivePixelsPerTriangle[0x04]; // 0x60(0x04)
	char bSeparateTranslucency : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	enum class *e58b828cef TranslucentSortPolicy; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FVector TranslucentSortAxis[0x0c]; // 0x6c(0x0c)
	enum class ECustomDepthStencil CustomDepthStencil; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	char bCustomDepthTaaJitter : 1; // 0x7c(0x01)
	char bDefaultFeatureBloom : 1; // 0x7c(0x01)
	char bDefaultFeatureAmbientOcclusion : 1; // 0x7c(0x01)
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1; // 0x7c(0x01)
	char bDefaultFeatureAutoExposure : 1; // 0x7c(0x01)
	char pad_7C_5 : 3; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	enum class EAutoExposureMethodUI DefaultFeatureAutoExposure; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	char bDefaultFeatureMotionBlur : 1; // 0x84(0x01)
	char bDefaultFeatureLensFlare : 1; // 0x84(0x01)
	char bTemporalUpsampling : 1; // 0x84(0x01)
	char pad_84_3 : 5; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	enum class *277c9e52b8 DefaultFeatureAntiAliasing; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	char bStencilForLODDither : 1; // 0x8c(0x01)
	char pad_8C_1 : 7; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	enum class EEarlyZPass EarlyZPass; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	char bEarlyZPassMovable : 1; // 0x94(0x01)
	char bEarlyZPassOnlyMaterialMasking : 1; // 0x94(0x01)
	char bEarlyZPassForceFull : 1; // 0x94(0x01)
	char bDBuffer : 1; // 0x94(0x01)
	char pad_94_4 : 4; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	enum class EClearSceneOptions ClearSceneMethod; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	char bBasePassOutputsVelocity : 1; // 0x9c(0x01)
	char bSelectiveBasePassOutputs : 1; // 0x9c(0x01)
	char bDefaultParticleCutouts : 1; // 0x9c(0x01)
	char bGlobalClipPlane : 1; // 0x9c(0x01)
	char pad_9C_4 : 4; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	enum class EGBufferFormat GBufferFormat; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	char bUseGPUMorphTargets : 1; // 0xa4(0x01)
	char bNvidiaAftermathEnabled : 1; // 0xa4(0x01)
	char bInstancedStereo : 1; // 0xa4(0x01)
	char bMultiView : 1; // 0xa4(0x01)
	char bMobileMultiView : 1; // 0xa4(0x01)
	char bMobileMultiViewDirect : 1; // 0xa4(0x01)
	char bMonoscopicFarField : 1; // 0xa4(0x01)
	char pad_A4_7 : 1; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	float WireframeCullThreshold[0x04]; // 0xa8(0x04)
	char bSupportStationarySkylight : 1; // 0xac(0x01)
	char bSupportLowQualityLightmaps : 1; // 0xac(0x01)
	char bSupportPointLightWholeSceneShadows : 1; // 0xac(0x01)
	char bSupportAtmosphericFog : 1; // 0xac(0x01)
	char bSupportSkinCacheShaders : 1; // 0xac(0x01)
	char bMobileEnableStaticAndCSMShadowReceivers : 1; // 0xac(0x01)
	char bMobileAllowDistanceFieldShadows : 1; // 0xac(0x01)
	char bMobileAllowMovableDirectionalLights : 1; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	uint32 MobileNumDynamicPointLights[0x04]; // 0xb0(0x04)
	char bMobileDynamicPointLightsUseStaticBranch : 1; // 0xb4(0x01)
	char pad_B4_1 : 7; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float SkinCacheSceneMemoryLimitInMB[0x04]; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class Engine.RendererOverrideSettings
// Size: 0x40 (Inherited: 0x38)
struct URendererOverrideSettings : U*6c389a598a {
	char bSupportAllShaderPermutations : 1; // 0x38(0x01)
	char bForceRecomputeTangents : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.UserInterfaceSettings
// Size: 0x208 (Inherited: 0x38)
struct UUserInterfaceSettings : U*6c389a598a {
	enum class ERenderFocusRule RenderFocusRule; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TMap<enum class EMouseCursor, struct F*98b4e18bfc> HardwareCursors[0x50]; // 0x40(0x50)
	struct TMap<enum class EMouseCursor, struct FStringClassReference> SoftwareCursors[0x50]; // 0x90(0x50)
	struct FStringClassReference DefaultCursor[0x10]; // 0xe0(0x10)
	struct FStringClassReference TextEditBeamCursor[0x10]; // 0xf0(0x10)
	struct FStringClassReference CrosshairsCursor[0x10]; // 0x100(0x10)
	struct FStringClassReference HandCursor[0x10]; // 0x110(0x10)
	struct FStringClassReference GrabHandCursor[0x10]; // 0x120(0x10)
	struct FStringClassReference GrabHandClosedCursor[0x10]; // 0x130(0x10)
	struct FStringClassReference SlashedCircleCursor[0x10]; // 0x140(0x10)
	float ApplicationScale[0x04]; // 0x150(0x04)
	enum class EUIScalingRule UIScaleRule; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	struct FStringClassReference CustomScalingRuleClass[0x10]; // 0x158(0x10)
	struct FRuntimeFloatCurve UIScaleCurve[0x78]; // 0x168(0x78)
	bool bLoadWidgetsOnDedicatedServer; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct TArray<struct UObject*> *27c486982e[0x10]; // 0x1e8(0x10)
	struct UClass* *5059247f42[0x08]; // 0x1f8(0x08)
	struct UDPICustomScalingRule* *65b77e7bb4[0x08]; // 0x200(0x08)
};

// Class Engine.DeviceProfileManager
// Size: 0x110 (Inherited: 0x28)
struct UDeviceProfileManager : UObject {
	struct TArray<struct UObject*> Profiles[0x10]; // 0x28(0x10)
	char pad_38[0xd8]; // 0x38(0xd8)
};

// Class Engine.DialogueVoice
// Size: 0x40 (Inherited: 0x28)
struct UDialogueVoice : UObject {
	enum class EGrammaticalGender Gender; // 0x28(0x01)
	enum class EGrammaticalNumber Plurality; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FGuid *0aa39126da[0x10]; // 0x2c(0x10)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.DialogueWave
// Size: 0x70 (Inherited: 0x28)
struct UDialogueWave : UObject {
	char *e1bb619dac : 1; // 0x28(0x01)
	char bOverride_SubtitleOverride : 1; // 0x28(0x01)
	char pad_28_2 : 6; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString *649b8b652a[0x10]; // 0x30(0x10)
	struct FString *ef1f30890e[0x10]; // 0x40(0x10)
	struct TArray<struct F*bb642d4e78> ContextMappings[0x10]; // 0x50(0x10)
	struct FGuid *0aa39126da[0x10]; // 0x60(0x10)
};

// Class Engine.Distribution
// Size: 0x30 (Inherited: 0x28)
struct UDistribution : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class Engine.*ca563f945f
// Size: 0x38 (Inherited: 0x30)
struct U*ca563f945f : UDistribution {
	char *9be71ea3dd : 1; // 0x30(0x01)
	char pad_30_1 : 1; // 0x30(0x01)
	char *cc44ac3bbf : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.*da4584ca0b
// Size: 0x40 (Inherited: 0x38)
struct U*da4584ca0b : U*ca563f945f {
	float Constant[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.*d38998bd44
// Size: 0x60 (Inherited: 0x40)
struct U*d38998bd44 : U*da4584ca0b {
	struct FName ParameterName[0x08]; // 0x40(0x08)
	float *54472afc8d[0x04]; // 0x48(0x04)
	float *c045c89dc5[0x04]; // 0x4c(0x04)
	float *18a4249393[0x04]; // 0x50(0x04)
	float *fdb48bf31a[0x04]; // 0x54(0x04)
	enum class *41d1961a55 *941f07403b; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class Engine.DistributionFloatParticleParameter
// Size: 0x60 (Inherited: 0x60)
struct UDistributionFloatParticleParameter : U*d38998bd44 {
};

// Class Engine.*f78a737900
// Size: 0x50 (Inherited: 0x38)
struct U*f78a737900 : U*ca563f945f {
	struct FInterpCurveFloat *ef44dc2a55[0x18]; // 0x38(0x18)
};

// Class Engine.*e4a93497a6
// Size: 0x40 (Inherited: 0x38)
struct U*e4a93497a6 : U*ca563f945f {
	float Min[0x04]; // 0x38(0x04)
	float Max[0x04]; // 0x3c(0x04)
};

// Class Engine.*ba56434602
// Size: 0x50 (Inherited: 0x38)
struct U*ba56434602 : U*ca563f945f {
	struct FInterpCurveVector2D *ef44dc2a55[0x18]; // 0x38(0x18)
};

// Class Engine.*31b44bea3d
// Size: 0x38 (Inherited: 0x30)
struct U*31b44bea3d : UDistribution {
	char *9be71ea3dd : 1; // 0x30(0x01)
	char *f468c23ffa : 1; // 0x30(0x01)
	char *cc44ac3bbf : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.*f1b7831aad
// Size: 0x50 (Inherited: 0x38)
struct U*f1b7831aad : U*31b44bea3d {
	struct FVector Constant[0x0c]; // 0x38(0x0c)
	char *850c872f22 : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	enum class *5dc8d87af2 *7a35c3be0b; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.*6c2d93f9c7
// Size: 0x90 (Inherited: 0x50)
struct U*6c2d93f9c7 : U*f1b7831aad {
	struct FName ParameterName[0x08]; // 0x50(0x08)
	struct FVector *54472afc8d[0x0c]; // 0x58(0x0c)
	struct FVector *c045c89dc5[0x0c]; // 0x64(0x0c)
	struct FVector *18a4249393[0x0c]; // 0x70(0x0c)
	struct FVector *fdb48bf31a[0x0c]; // 0x7c(0x0c)
	enum class *41d1961a55 *dd12e4e0c3; // 0x88(0x03)
	char pad_8B[0x5]; // 0x8b(0x05)
};

// Class Engine.DistributionVectorParticleParameter
// Size: 0x90 (Inherited: 0x90)
struct UDistributionVectorParticleParameter : U*6c2d93f9c7 {
};

// Class Engine.*1728e96d0a
// Size: 0x58 (Inherited: 0x38)
struct U*1728e96d0a : U*31b44bea3d {
	struct FInterpCurveVector *ef44dc2a55[0x18]; // 0x38(0x18)
	char *850c872f22 : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	enum class *5dc8d87af2 *7a35c3be0b; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Engine.*0e448efcf1
// Size: 0x60 (Inherited: 0x38)
struct U*0e448efcf1 : U*31b44bea3d {
	struct FVector Max[0x0c]; // 0x38(0x0c)
	struct FVector Min[0x0c]; // 0x44(0x0c)
	char *850c872f22 : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	enum class *5dc8d87af2 *7a35c3be0b; // 0x54(0x01)
	enum class *8f01089b5d *9302ef7485; // 0x55(0x03)
	char *e5ce313edc : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class Engine.*6b4215ee4c
// Size: 0x60 (Inherited: 0x38)
struct U*6b4215ee4c : U*31b44bea3d {
	struct FInterpCurveTwoVectors *ef44dc2a55[0x18]; // 0x38(0x18)
	char *524735a8d7 : 1; // 0x50(0x01)
	char *fdbb9b44fb : 1; // 0x50(0x01)
	char pad_50_2 : 6; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	enum class *5dc8d87af2 *7a35c3be0b; // 0x54(0x02)
	enum class *8f01089b5d *9302ef7485; // 0x56(0x03)
	char pad_59[0x3]; // 0x59(0x03)
	char *e5ce313edc : 1; // 0x5c(0x01)
	char pad_5C_1 : 7; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// Class Engine.DPICustomScalingRule
// Size: 0x28 (Inherited: 0x28)
struct UDPICustomScalingRule : UObject {
};

// Class Engine.*3df69eb1ab
// Size: 0x28 (Inherited: 0x28)
struct U*3df69eb1ab : UObject {
};

// Class Engine.*8b25ac3437
// Size: 0x38 (Inherited: 0x28)
struct U*8b25ac3437 : U*3df69eb1ab {
	struct TArray<struct F*36043f6ded> *8d7399a529[0x10]; // 0x28(0x10)
};

// Class Engine.*17427af9ef
// Size: 0x28 (Inherited: 0x28)
struct U*17427af9ef : U*3df69eb1ab {
};

// Class Engine.*8d2896a616
// Size: 0x38 (Inherited: 0x28)
struct U*8d2896a616 : U*17427af9ef {
	struct TArray<struct F*5bedd29744> *5dea5901c4[0x10]; // 0x28(0x10)
};

// Class Engine.*c7becf549b
// Size: 0x38 (Inherited: 0x28)
struct U*c7becf549b : U*17427af9ef {
	struct TArray<struct F*4831d7e4da> *2e9a0cfe4a[0x10]; // 0x28(0x10)
};

// Class Engine.*01f668a7e4
// Size: 0x38 (Inherited: 0x28)
struct U*01f668a7e4 : U*17427af9ef {
	struct TArray<struct F*700afa9b36> *95afb42cbe[0x10]; // 0x28(0x10)
};

// Class Engine.*1aabf5a682
// Size: 0x38 (Inherited: 0x38)
struct U*1aabf5a682 : U*01f668a7e4 {
};

// Class Engine.*3ad27dc38c
// Size: 0x38 (Inherited: 0x28)
struct U*3ad27dc38c : U*17427af9ef {
	struct TArray<struct F*7f074fb041> *b520a3f302[0x10]; // 0x28(0x10)
};

// Class Engine.*6fd5603f5a
// Size: 0x38 (Inherited: 0x28)
struct U*6fd5603f5a : U*17427af9ef {
	struct TArray<struct F*cbf0d20804> *533fdd6627[0x10]; // 0x28(0x10)
};

// Class Engine.EdGraph
// Size: 0xc0 (Inherited: 0x28)
struct UEdGraph : UObject {
	struct UClass* Schema[0x08]; // 0x28(0x08)
	struct TArray<struct UEdGraphNode*> Nodes[0x10]; // 0x30(0x10)
	char *ca105a880c : 1; // 0x40(0x01)
	char *cd94bb9559 : 1; // 0x40(0x01)
	char *f41c1bfd10 : 1; // 0x40(0x01)
	char pad_40_3 : 5; // 0x40(0x01)
	char pad_41[0x7f]; // 0x41(0x7f)
};

// Class Engine.*5ff41d14b7
// Size: 0xc0 (Inherited: 0xa0)
struct U*5ff41d14b7 : UEdGraphNode {
	struct FString Link[0x10]; // 0xa0(0x10)
	struct FString Excerpt[0x10]; // 0xb0(0x10)
};

// Class Engine.*b7ccfe49a1
// Size: 0x28 (Inherited: 0x28)
struct U*b7ccfe49a1 : UObject {
};

// Class Engine.*275060fdbd
// Size: 0x28 (Inherited: 0x28)
struct U*275060fdbd : UInterface {
};

// Class Engine.EndUserSettings
// Size: 0x38 (Inherited: 0x28)
struct UEndUserSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	bool bSendAnonymousUsageDataToEpic; // 0x30(0x01)
	bool bSendMeanTimeBetweenFailureDataToEpic; // 0x31(0x01)
	bool bAllowUserIdInUsageData; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
};

// Class Engine.EngineHandlerComponentFactory
// Size: 0x28 (Inherited: 0x28)
struct UEngineHandlerComponentFactory : U*662c187ec2 {
};

// Class Engine.*dfcfa50433
// Size: 0x68 (Inherited: 0x28)
struct U*dfcfa50433 : UObject {
	struct UClass* *b31dd5ac71[0x08]; // 0x28(0x08)
	struct UObject* *c0bf9f84df[0x08]; // 0x30(0x08)
	struct TArray<struct FString> *cabf896538[0x10]; // 0x38(0x10)
	struct TArray<struct FString> *ddeb4a762a[0x10]; // 0x48(0x10)
	int32 *6d9a054f7d[0x04]; // 0x58(0x04)
	int32 *e2700ff0d2[0x04]; // 0x5c(0x04)
	char *97892c7930 : 1; // 0x60(0x01)
	char *59277a8341 : 1; // 0x60(0x01)
	char *3aed8da2d9 : 1; // 0x60(0x01)
	char pad_60_3 : 5; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*da65e6fb26
// Size: 0x50 (Inherited: 0x28)
struct U*da65e6fb26 : UObject {
	char pad_28[0x28]; // 0x28(0x28)
};

// Class Engine.*5a08634c15
// Size: 0x50 (Inherited: 0x28)
struct U*5a08634c15 : U*6273c6b474 {
	struct TArray<struct FVector2D> Points[0x10]; // 0x28(0x10)
	struct TArray<struct F*ee3b57f9f0> Instances[0x10]; // 0x38(0x10)
	struct U*da65e6fb26* Manager[0x08]; // 0x48(0x08)
};

// Class Engine.*357f4504bc
// Size: 0xd8 (Inherited: 0x28)
struct U*357f4504bc : UObject {
	struct F*a6c8b92ca0 Data[0xb0]; // 0x28(0xb0)
};

// Class Engine.Font
// Size: 0x1c0 (Inherited: 0x28)
struct UFont : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	enum class EFontCacheType *71f40e039c; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct F*ac2c6700bf> Characters[0x10]; // 0x38(0x10)
	struct TArray<struct UTexture2D*> Textures[0x10]; // 0x48(0x10)
	int32 *84f210d62a[0x04]; // 0x58(0x04)
	float *8c4045198c[0x04]; // 0x5c(0x04)
	float Ascent[0x04]; // 0x60(0x04)
	float Descent[0x04]; // 0x64(0x04)
	float Leading[0x04]; // 0x68(0x04)
	int32 Kerning[0x04]; // 0x6c(0x04)
	struct F*a6c8b92ca0 ImportOptions[0xb0]; // 0x70(0xb0)
	int32 *2f21283804[0x04]; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct TArray<int32> *46a8add4a7[0x10]; // 0x128(0x10)
	float *f426e9e8d1[0x04]; // 0x138(0x04)
	int32 *d0d500c8b1[0x04]; // 0x13c(0x04)
	struct FName *2cd51cefa4[0x08]; // 0x140(0x08)
	struct F*e8eaad59bc *e8eaad59bc[0x28]; // 0x148(0x28)
	char pad_170[0x50]; // 0x170(0x50)
};

// Class Engine.FontFace
// Size: 0x58 (Inherited: 0x28)
struct UFontFace : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FString SourceFilename[0x10]; // 0x30(0x10)
	enum class EFontHinting Hinting; // 0x40(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x41(0x01)
	enum class EFontLoadingPolicy LoadingPolicyConsole; // 0x42(0x01)
	enum class EFontLayoutMethod LayoutMethod; // 0x43(0x01)
	char pad_44[0x14]; // 0x44(0x14)
};

// Class Engine.*2b7e68107f
// Size: 0x28 (Inherited: 0x28)
struct U*2b7e68107f : UObject {
};

// Class Engine.HapticFeedbackEffect_Buffer
// Size: 0x68 (Inherited: 0x28)
struct UHapticFeedbackEffect_Buffer : U*2b7e68107f {
	struct TArray<bool> *586af8ecb7[0x10]; // 0x28(0x10)
	int32 SampleRate[0x04]; // 0x38(0x04)
	char pad_3C[0x2c]; // 0x3c(0x2c)
};

// Class Engine.HapticFeedbackEffect_Curve
// Size: 0x118 (Inherited: 0x28)
struct UHapticFeedbackEffect_Curve : U*2b7e68107f {
	struct FHapticFeedbackDetails_Curve HapticDetails[0xf0]; // 0x28(0xf0)
};

// Class Engine.HapticFeedbackEffect_SoundWave
// Size: 0x60 (Inherited: 0x28)
struct UHapticFeedbackEffect_SoundWave : U*2b7e68107f {
	struct USoundWave* SoundWave[0x08]; // 0x28(0x08)
	char pad_30[0x30]; // 0x30(0x30)
};

// Class Engine.InheritableComponentHandler
// Size: 0x48 (Inherited: 0x28)
struct UInheritableComponentHandler : UObject {
	struct TArray<struct F*0f3b4987f4> Records[0x10]; // 0x28(0x10)
	struct TArray<struct UActorComponent*> *15c57b9e05[0x10]; // 0x38(0x10)
};

// Class Engine.InputSettings
// Size: 0xa8 (Inherited: 0x28)
struct UInputSettings : UObject {
	struct TArray<struct FInputAxisConfigEntry> AxisConfig[0x10]; // 0x28(0x10)
	char bAltEnterTogglesFullscreen : 1; // 0x38(0x01)
	char bF11TogglesFullscreen : 1; // 0x38(0x01)
	char bUseMouseForTouch : 1; // 0x38(0x01)
	char bEnableMouseSmoothing : 1; // 0x38(0x01)
	char bEnableFOVScaling : 1; // 0x38(0x01)
	char pad_38_5 : 3; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float FOVScale[0x04]; // 0x3c(0x04)
	float DoubleClickTime[0x04]; // 0x40(0x04)
	bool bCaptureMouseOnLaunch; // 0x44(0x01)
	enum class EMouseCaptureMode DefaultViewportMouseCaptureMode; // 0x45(0x01)
	bool bDefaultViewportMouseLock; // 0x46(0x01)
	enum class EMouseLockMode DefaultViewportMouseLockMode; // 0x47(0x01)
	struct TArray<struct FInputActionKeyMapping> ActionMappings[0x10]; // 0x48(0x10)
	struct TArray<struct FInputAxisKeyMapping> AxisMappings[0x10]; // 0x58(0x10)
	bool bAlwaysShowTouchInterface; // 0x68(0x01)
	bool bShowConsoleOnFourFingerTap; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct FStringAssetReference DefaultTouchInterface[0x10]; // 0x70(0x10)
	struct FKey ConsoleKey[0x18]; // 0x80(0x18)
	struct TArray<struct FKey> ConsoleKeys[0x10]; // 0x98(0x10)
};

// Class Engine.InterpCurveEdSetup
// Size: 0x40 (Inherited: 0x28)
struct UInterpCurveEdSetup : UObject {
	struct TArray<struct F*a2fb1c065f> Tabs[0x10]; // 0x28(0x10)
	int32 *0b0c22883b[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.InterpData
// Size: 0x70 (Inherited: 0x28)
struct UInterpData : UObject {
	float InterpLength[0x04]; // 0x28(0x04)
	float *b397e4b0e4[0x04]; // 0x2c(0x04)
	struct TArray<struct U*681140b349*> *9bd03cdd69[0x10]; // 0x30(0x10)
	struct UInterpCurveEdSetup* *2ac5360815[0x08]; // 0x40(0x08)
	float *96eccc7908[0x04]; // 0x48(0x04)
	float *87f8bd06df[0x04]; // 0x4c(0x04)
	char *5159bd3dbd : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct U*6ca78ee4e6* *82efbd9cb1[0x08]; // 0x58(0x08)
	struct TArray<struct FName> *5708534d22[0x10]; // 0x60(0x10)
};

// Class Engine.*f6bd3f463e
// Size: 0x38 (Inherited: 0x28)
struct U*f6bd3f463e : UObject {
	struct FString Caption[0x10]; // 0x28(0x10)
};

// Class Engine.*756f6e2dbe
// Size: 0x38 (Inherited: 0x38)
struct U*756f6e2dbe : U*f6bd3f463e {
};

// Class Engine.*6d50589535
// Size: 0x38 (Inherited: 0x38)
struct U*6d50589535 : U*f6bd3f463e {
};

// Class Engine.*681140b349
// Size: 0x50 (Inherited: 0x28)
struct U*681140b349 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct U*a7f7b58370*> *fcfa58b810[0x10]; // 0x30(0x10)
	struct FName GroupName[0x08]; // 0x40(0x08)
	struct FColor *11a566580d[0x04]; // 0x48(0x04)
	char *d3a59df4e9 : 1; // 0x4c(0x01)
	char bVisible : 1; // 0x4c(0x01)
	char *8f7f7a9310 : 1; // 0x4c(0x01)
	char *95c32ca932 : 1; // 0x4c(0x01)
	char *6a069b55c2 : 1; // 0x4c(0x01)
	char pad_4C_5 : 3; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.*7aa2a6c4f4
// Size: 0x60 (Inherited: 0x50)
struct U*7aa2a6c4f4 : U*681140b349 {
	struct UCameraAnim* *faef588082[0x08]; // 0x50(0x08)
	float *4f3216bf28[0x04]; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.*6ca78ee4e6
// Size: 0x50 (Inherited: 0x50)
struct U*6ca78ee4e6 : U*681140b349 {
};

// Class Engine.*c8e2f74187
// Size: 0x48 (Inherited: 0x28)
struct U*c8e2f74187 : UObject {
	struct U*681140b349* Group[0x08]; // 0x28(0x08)
	struct AActor* GroupActor[0x08]; // 0x30(0x08)
	struct TArray<struct U*227b184286*> *7f3c2be61a[0x10]; // 0x38(0x10)
};

// Class Engine.*4a60cd452c
// Size: 0x48 (Inherited: 0x48)
struct U*4a60cd452c : U*c8e2f74187 {
};

// Class Engine.*c3f47466e0
// Size: 0x48 (Inherited: 0x48)
struct U*c3f47466e0 : U*c8e2f74187 {
};

// Class Engine.*a7f7b58370
// Size: 0x70 (Inherited: 0x28)
struct U*a7f7b58370 : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct U*a7f7b58370*> *9b2517c266[0x10]; // 0x38(0x10)
	struct UClass* *454ca58d42[0x08]; // 0x48(0x08)
	enum class *3e2ef26363 *8521e26185; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString TrackTitle[0x10]; // 0x58(0x10)
	char *c32cfe51fb : 1; // 0x68(0x01)
	char *358641abc7 : 1; // 0x68(0x01)
	char *1c24efbe35 : 1; // 0x68(0x01)
	char *6a069b55c2 : 1; // 0x68(0x01)
	char *afcc20f6fd : 1; // 0x68(0x01)
	char *f8d31cd56d : 1; // 0x68(0x01)
	char bVisible : 1; // 0x68(0x01)
	char *0bd804688d : 1; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*e03df41984
// Size: 0x88 (Inherited: 0x70)
struct U*e03df41984 : U*a7f7b58370 {
	struct TArray<struct F*2bf753a285> *fc7a932dd1[0x10]; // 0x70(0x10)
	struct FName PropertyName[0x08]; // 0x80(0x08)
};

// Class Engine.*c7312ca09c
// Size: 0x88 (Inherited: 0x70)
struct U*c7312ca09c : U*a7f7b58370 {
	struct TArray<struct F*17beb675f2> *e7a87a8b95[0x10]; // 0x70(0x10)
	char *276edebb20 : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*9874235e22
// Size: 0x88 (Inherited: 0x70)
struct U*9874235e22 : U*a7f7b58370 {
	struct TArray<struct F*757b12dab9> *ddbe42e5ea[0x10]; // 0x70(0x10)
	char *0aa83bc524 : 1; // 0x80(0x01)
	char *1d2a54934d : 1; // 0x80(0x01)
	char *cb463a3795 : 1; // 0x80(0x01)
	char *f48fe3481d : 1; // 0x80(0x01)
	char pad_80_4 : 4; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*24e61502be
// Size: 0x90 (Inherited: 0x70)
struct U*24e61502be : U*a7f7b58370 {
	struct FInterpCurveFloat *36b2a97a83[0x18]; // 0x70(0x18)
	float *8b04c7f7ba[0x04]; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.*a3466a0be5
// Size: 0xb0 (Inherited: 0x90)
struct U*a3466a0be5 : U*24e61502be {
	struct FName SlotName[0x08]; // 0x90(0x08)
	struct TArray<struct F*24dc9b4692> *2184490cf9[0x10]; // 0x98(0x10)
	char *90880f67f2 : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class Engine.*d664e40a0e
// Size: 0xa8 (Inherited: 0x90)
struct U*d664e40a0e : U*24e61502be {
	char *503a5ff1d7 : 1; // 0x90(0x01)
	char *f42de07281 : 1; // 0x90(0x01)
	char pad_90_2 : 6; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FLinearColor *59ad6910df[0x10]; // 0x94(0x10)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.*916e5457cf
// Size: 0xb0 (Inherited: 0x90)
struct U*916e5457cf : U*24e61502be {
	struct UAnimBlueprintGeneratedClass* *eefd8d5476[0x08]; // 0x90(0x08)
	struct UClass* *3ce9c3bdbf[0x08]; // 0x98(0x08)
	struct FName ParamName[0x08]; // 0xa0(0x08)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class Engine.*52d681b7a6
// Size: 0xa8 (Inherited: 0x90)
struct U*52d681b7a6 : U*24e61502be {
	struct TArray<struct UMaterialInterface*> *82ef231abe[0x10]; // 0x90(0x10)
	struct FName ParamName[0x08]; // 0xa0(0x08)
};

// Class Engine.*41228bdd27
// Size: 0x98 (Inherited: 0x90)
struct U*41228bdd27 : U*24e61502be {
	struct FName ParamName[0x08]; // 0x90(0x08)
};

// Class Engine.*58ef9d2e17
// Size: 0x98 (Inherited: 0x90)
struct U*58ef9d2e17 : U*24e61502be {
	struct FName PropertyName[0x08]; // 0x90(0x08)
};

// Class Engine.*2cd7fc2368
// Size: 0xc8 (Inherited: 0x70)
struct U*2cd7fc2368 : U*a7f7b58370 {
	struct FInterpCurveVector *6627e0b8d9[0x18]; // 0x70(0x18)
	struct FInterpCurveVector *914effeb9a[0x18]; // 0x88(0x18)
	struct F*fc54882100 *7505fe591a[0x10]; // 0xa0(0x10)
	struct FName *769f61282a[0x08]; // 0xb0(0x08)
	float *6be34d1e18[0x04]; // 0xb8(0x04)
	float *fdd74d36c2[0x04]; // 0xbc(0x04)
	char *17c84eec04 : 1; // 0xc0(0x01)
	char *76ad708af4 : 1; // 0xc0(0x01)
	char *d40ecb59d8 : 1; // 0xc0(0x01)
	char *621c19dff4 : 1; // 0xc0(0x01)
	char *9eace6bbe1 : 1; // 0xc0(0x01)
	char *ebdf8de3d9 : 1; // 0xc0(0x01)
	char pad_C0_6 : 2; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	enum class *e75cac550a *a3227e9b0c; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
};

// Class Engine.*c09c477691
// Size: 0xa8 (Inherited: 0x90)
struct U*c09c477691 : U*24e61502be {
	enum class *9061b3b7f2 *78ee04ab67; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct F*fc54882100 *7505fe591a[0x10]; // 0x98(0x10)
};

// Class Engine.*87dee70756
// Size: 0x90 (Inherited: 0x90)
struct U*87dee70756 : U*24e61502be {
};

// Class Engine.*ec2df5f07c
// Size: 0x90 (Inherited: 0x70)
struct U*ec2df5f07c : U*a7f7b58370 {
	struct FInterpCurveLinearColor *1b9472ac03[0x18]; // 0x70(0x18)
	float *8b04c7f7ba[0x04]; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.*25c83c2658
// Size: 0x98 (Inherited: 0x90)
struct U*25c83c2658 : U*ec2df5f07c {
	struct FName PropertyName[0x08]; // 0x90(0x08)
};

// Class Engine.*80688e5dd7
// Size: 0x80 (Inherited: 0x70)
struct U*80688e5dd7 : U*a7f7b58370 {
	struct TArray<struct F*c2c6b9f064> *b85e7c8065[0x10]; // 0x70(0x10)
};

// Class Engine.*9fb722400c
// Size: 0x88 (Inherited: 0x70)
struct U*9fb722400c : U*a7f7b58370 {
	struct TArray<struct F*24709f3a21> *6271cfef8a[0x10]; // 0x70(0x10)
	char *0af4dfa9b7 : 1; // 0x80(0x01)
	char *b489e81436 : 1; // 0x80(0x01)
	char *0aa83bc524 : 1; // 0x80(0x01)
	char *1d2a54934d : 1; // 0x80(0x01)
	char *cb463a3795 : 1; // 0x80(0x01)
	char pad_80_5 : 3; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*ca9fa09ea0
// Size: 0x90 (Inherited: 0x70)
struct U*ca9fa09ea0 : U*a7f7b58370 {
	struct FInterpCurveVector *4323fbf91a[0x18]; // 0x70(0x18)
	float *8b04c7f7ba[0x04]; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.*9d66957aa5
// Size: 0x90 (Inherited: 0x90)
struct U*9d66957aa5 : U*ca9fa09ea0 {
};

// Class Engine.*2c73985e01
// Size: 0x98 (Inherited: 0x90)
struct U*2c73985e01 : U*ca9fa09ea0 {
	struct FName PropertyName[0x08]; // 0x90(0x08)
};

// Class Engine.*df63df7254
// Size: 0x90 (Inherited: 0x90)
struct U*df63df7254 : U*ca9fa09ea0 {
};

// Class Engine.*a0570eebe8
// Size: 0xa8 (Inherited: 0x90)
struct U*a0570eebe8 : U*ca9fa09ea0 {
	struct TArray<struct F*f81faddf4c> Sounds[0x10]; // 0x90(0x10)
	char *ccb3ac1274 : 1; // 0xa0(0x01)
	char *3a46181323 : 1; // 0xa0(0x01)
	char *ef89b4e1fa : 1; // 0xa0(0x01)
	char *b0737f5972 : 1; // 0xa0(0x01)
	char *19325b02b4 : 1; // 0xa0(0x01)
	char pad_A0_5 : 3; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class Engine.*6183549942
// Size: 0xa8 (Inherited: 0x90)
struct U*6183549942 : U*ca9fa09ea0 {
	struct TArray<struct UMaterialInterface*> *82ef231abe[0x10]; // 0x90(0x10)
	struct FName ParamName[0x08]; // 0xa0(0x08)
};

// Class Engine.*9d5653d5f4
// Size: 0x98 (Inherited: 0x90)
struct U*9d5653d5f4 : U*ca9fa09ea0 {
	struct FName PropertyName[0x08]; // 0x90(0x08)
};

// Class Engine.*b0205b4149
// Size: 0x88 (Inherited: 0x70)
struct U*b0205b4149 : U*a7f7b58370 {
	struct TArray<struct F*841bb4fa70> *933dc2a899[0x10]; // 0x70(0x10)
	char *0aa83bc524 : 1; // 0x80(0x01)
	char *1d2a54934d : 1; // 0x80(0x01)
	char *cb463a3795 : 1; // 0x80(0x01)
	char pad_80_3 : 5; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*227b184286
// Size: 0x28 (Inherited: 0x28)
struct U*227b184286 : UObject {
};

// Class Engine.*b70730bfa8
// Size: 0x30 (Inherited: 0x28)
struct U*b70730bfa8 : U*227b184286 {
	float *1038881cbc[0x04]; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.*96d61f75fa
// Size: 0x28 (Inherited: 0x28)
struct U*96d61f75fa : U*227b184286 {
};

// Class Engine.*0227ecab90
// Size: 0x28 (Inherited: 0x28)
struct U*0227ecab90 : U*227b184286 {
};

// Class Engine.*7f392fdd20
// Size: 0x30 (Inherited: 0x28)
struct U*7f392fdd20 : U*227b184286 {
	struct AActor* *231e1147a3[0x08]; // 0x28(0x08)
};

// Class Engine.*77eb082949
// Size: 0x30 (Inherited: 0x28)
struct U*77eb082949 : U*227b184286 {
	float *1038881cbc[0x04]; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.*0aa246a948
// Size: 0x28 (Inherited: 0x28)
struct U*0aa246a948 : U*227b184286 {
};

// Class Engine.*0f386c8991
// Size: 0x40 (Inherited: 0x28)
struct U*0f386c8991 : U*227b184286 {
	struct UAnimInstance* AnimScriptInstance[0x08]; // 0x28(0x08)
	float *f70a77a018[0x04]; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// Class Engine.*bcd2daa25a
// Size: 0x60 (Inherited: 0x28)
struct U*bcd2daa25a : U*227b184286 {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances[0x10]; // 0x28(0x10)
	struct TArray<float> *83a0d9bc5f[0x10]; // 0x38(0x10)
	struct TArray<struct F*e6f0dca848> *5db4ad6079[0x10]; // 0x48(0x10)
	struct U*52d681b7a6* *5af290fd3e[0x08]; // 0x58(0x08)
};

// Class Engine.*fc66923bfb
// Size: 0x30 (Inherited: 0x28)
struct U*fc66923bfb : U*227b184286 {
	float *f70a77a018[0x04]; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.*89f82d34bc
// Size: 0x40 (Inherited: 0x28)
struct U*89f82d34bc : U*227b184286 {
	struct FVector ResetLocation[0x0c]; // 0x28(0x0c)
	struct FRotator ResetRotation[0x0c]; // 0x34(0x0c)
};

// Class Engine.*26e65b89f3
// Size: 0x30 (Inherited: 0x28)
struct U*26e65b89f3 : U*227b184286 {
	float *1038881cbc[0x04]; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.*6178ba62df
// Size: 0x38 (Inherited: 0x28)
struct U*6178ba62df : U*227b184286 {
	struct UProperty* *1fb45f020a[0x08]; // 0x28(0x08)
	struct UObject* *70cb89614e[0x08]; // 0x30(0x08)
};

// Class Engine.*a713399f65
// Size: 0x50 (Inherited: 0x38)
struct U*a713399f65 : U*6178ba62df {
	char pad_38[0x8]; // 0x38(0x08)
	struct UBoolProperty* BoolProperty[0x08]; // 0x40(0x08)
	bool *2871e5aab5; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.*651c810587
// Size: 0x48 (Inherited: 0x38)
struct U*651c810587 : U*6178ba62df {
	char pad_38[0x8]; // 0x38(0x08)
	struct FColor *6a5f1b7c6d[0x04]; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.*3514fbd45d
// Size: 0x48 (Inherited: 0x38)
struct U*3514fbd45d : U*6178ba62df {
	char pad_38[0x8]; // 0x38(0x08)
	float *f70a77a018[0x04]; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.*b58579d582
// Size: 0x50 (Inherited: 0x38)
struct U*b58579d582 : U*6178ba62df {
	char pad_38[0x8]; // 0x38(0x08)
	struct FLinearColor *6a5f1b7c6d[0x10]; // 0x40(0x10)
};

// Class Engine.*9b19a12dcb
// Size: 0x50 (Inherited: 0x38)
struct U*9b19a12dcb : U*6178ba62df {
	char pad_38[0x8]; // 0x38(0x08)
	struct FVector *3c5a50dccd[0x0c]; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.*0e68c7dff5
// Size: 0x30 (Inherited: 0x28)
struct U*0e68c7dff5 : U*227b184286 {
	float *3424bd12bc[0x04]; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.*f249f3e482
// Size: 0x38 (Inherited: 0x28)
struct U*f249f3e482 : U*227b184286 {
	float *1038881cbc[0x04]; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UAudioComponent* *879fc1c3e8[0x08]; // 0x30(0x08)
};

// Class Engine.*4ebe909299
// Size: 0x38 (Inherited: 0x28)
struct U*4ebe909299 : U*227b184286 {
	enum class *43105497d2 Action; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *1038881cbc[0x04]; // 0x2c(0x04)
	char *ac637de7e6 : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.*50b2830016
// Size: 0x60 (Inherited: 0x28)
struct U*50b2830016 : U*227b184286 {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances[0x10]; // 0x28(0x10)
	struct TArray<struct FVector> *5ba9316c10[0x10]; // 0x38(0x10)
	struct TArray<struct F*e6f0dca848> *5db4ad6079[0x10]; // 0x48(0x10)
	struct U*6183549942* *5af290fd3e[0x08]; // 0x58(0x08)
};

// Class Engine.*640ab43555
// Size: 0x30 (Inherited: 0x28)
struct U*640ab43555 : U*227b184286 {
	enum class *b780822e05 Action; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *1038881cbc[0x04]; // 0x2c(0x04)
};

// Class Engine.*936b522248
// Size: 0x50 (Inherited: 0x28)
struct U*936b522248 : UObject {
	uint16 *7d7257480c[0x02]; // 0x28(0x02)
	char pad_2A[0x2]; // 0x2a(0x02)
	uint32 *6cc7ffe634[0x04]; // 0x2c(0x04)
	uint64 *56dd7bc2a3[0x08]; // 0x30(0x08)
	int8 *ece6c70c43; // 0x38(0x01)
	char pad_39[0x1]; // 0x39(0x01)
	int16 *c978301b09[0x02]; // 0x3a(0x02)
	char pad_3C[0x4]; // 0x3c(0x04)
	int64 *d35fd6661c[0x08]; // 0x40(0x08)
	bool *d07c338b17; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32 *563c1c339e[0x04]; // 0x4c(0x04)
};

// Class Engine.*7383374044
// Size: 0x48 (Inherited: 0x28)
struct U*7383374044 : U*6273c6b474 {
	struct TArray<struct U*ab2d28c427*> *5baea4f465[0x10]; // 0x28(0x10)
	struct TArray<struct F*9909879c11> Instances[0x10]; // 0x38(0x10)
};

// Class Engine.*ab2d28c427
// Size: 0x1c0 (Inherited: 0x28)
struct U*ab2d28c427 : UObject {
	struct UWorld* World[0x08]; // 0x28(0x08)
	struct ALandscape* Landscape[0x1c]; // 0x30(0x1c)
	struct FGuid *6cb6909a1b[0x10]; // 0x4c(0x10)
	struct FIntRect *53a7476241[0x10]; // 0x5c(0x10)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct F*9909879c11 *6cb7c55e16[0x110]; // 0x70(0x110)
	struct UMaterialInterface* LandscapeMaterial[0x08]; // 0x180(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial[0x08]; // 0x188(0x08)
	uint32 *5312624a19[0x04]; // 0x190(0x04)
	int32 *4118dea9ef[0x04]; // 0x194(0x04)
	struct TArray<struct F*43cbdd6c74> *142b6ba148[0x10]; // 0x198(0x10)
	struct TArray<struct F*dc21fcdb72> *b935a81767[0x10]; // 0x1a8(0x10)
	char pad_1B8[0x8]; // 0x1b8(0x08)
};

// Class Engine.Layer
// Size: 0x48 (Inherited: 0x28)
struct ULayer : UObject {
	struct FName LayerName[0x08]; // 0x28(0x08)
	char bIsVisible : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct F*efd6eb22fe> ActorStats[0x10]; // 0x38(0x10)
};

// Class Engine.*33266603e2
// Size: 0x38 (Inherited: 0x28)
struct U*33266603e2 : UObject {
	struct TArray<struct AActor*> Actors[0x10]; // 0x28(0x10)
};

// Class Engine.*0520fb9439
// Size: 0x58 (Inherited: 0x28)
struct U*0520fb9439 : U*6273c6b474 {
	struct TArray<struct F*b991655971> Variants[0x10]; // 0x28(0x10)
	struct TArray<struct FTransform> Instances[0x10]; // 0x38(0x10)
	struct TArray<struct F*6ea9fa8839> *2909632458[0x10]; // 0x48(0x10)
};

// Class Engine.*c3be53f1c6
// Size: 0x38 (Inherited: 0x28)
struct U*c3be53f1c6 : U*6273c6b474 {
	struct TArray<struct F*a42277f8f7> Instances[0x10]; // 0x28(0x10)
};

// Class Engine.*71292f11d1
// Size: 0x48 (Inherited: 0x28)
struct U*71292f11d1 : U*6273c6b474 {
	struct TArray<struct F*26f0091992> *6e68ba955d[0x10]; // 0x28(0x10)
	struct TArray<struct F*70531ce4c1> Instances[0x10]; // 0x38(0x10)
};

// Class Engine.TextureRenderTarget
// Size: 0x180 (Inherited: 0x170)
struct UTextureRenderTarget : UTexture {
	float TargetGamma[0x04]; // 0x170(0x04)
	char pad_174[0xc]; // 0x174(0x0c)
};

// Class Engine.TextureRenderTarget2D
// Size: 0x1a0 (Inherited: 0x180)
struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32 SizeX[0x04]; // 0x178(0x04)
	int32 SizeY[0x04]; // 0x17c(0x04)
	struct FLinearColor ClearColor[0x10]; // 0x180(0x10)
	enum class *8e17248832 AddressX; // 0x190(0x01)
	enum class *8e17248832 AddressY; // 0x191(0x01)
	char *1944e232d7 : 1; // 0x194(0x01)
	char *0eea58bed9 : 1; // 0x194(0x01)
	char bHDR : 1; // 0x194(0x01)
	char bGPUSharedFlag : 1; // 0x194(0x01)
	char bAutoGenerateMips : 1; // 0x194(0x01)
	enum class EPixelFormat *87366a0720; // 0x198(0x01)
	char pad_19B_5 : 3; // 0x19b(0x01)
	char pad_19C[0x4]; // 0x19c(0x04)
};

// Class Engine.*46ea2bd74a
// Size: 0x98 (Inherited: 0x28)
struct U*46ea2bd74a : UObject {
	char pad_28[0x30]; // 0x28(0x30)
	struct UTexture2D* *240ccfed83[0x08]; // 0x58(0x08)
	struct UTextureRenderTarget2D* *53564cb82d[0x08]; // 0x60(0x08)
	struct TArray<struct F*4f1611d65e> *af15504d30[0x10]; // 0x68(0x10)
	struct TArray<struct F*a84c0f7964> *113470e23f[0x10]; // 0x78(0x10)
	struct TArray<struct UObject*> *5d5693ca20[0x10]; // 0x88(0x10)
};

// Class Engine.*4173dc7674
// Size: 0x50 (Inherited: 0x28)
struct U*4173dc7674 : U*6273c6b474 {
	struct TArray<struct F*4f1611d65e> *58c9f37678[0x10]; // 0x28(0x10)
	struct TArray<struct F*a84c0f7964> *a4e8456f5a[0x10]; // 0x38(0x10)
	struct U*46ea2bd74a* Manager[0x08]; // 0x48(0x08)
};

// Class Engine.*eea4a7168a
// Size: 0x60 (Inherited: 0x28)
struct U*eea4a7168a : U*6273c6b474 {
	char pad_28[0x38]; // 0x28(0x38)
};

// Class Engine.*0448a351dd
// Size: 0x58 (Inherited: 0x28)
struct U*0448a351dd : U*6273c6b474 {
	struct TArray<struct F*09b56f2140> Variants[0x10]; // 0x28(0x10)
	struct TArray<struct FTransform> Instances[0x10]; // 0x38(0x10)
	struct TArray<struct F*6ea9fa8839> *2909632458[0x10]; // 0x48(0x10)
};

// Class Engine.*22e9965cd6
// Size: 0x38 (Inherited: 0x28)
struct U*22e9965cd6 : U*6273c6b474 {
	struct TArray<struct F*6ea9fa8839> *2909632458[0x10]; // 0x28(0x10)
};

// Class Engine.*ef44f1c5dc
// Size: 0x58 (Inherited: 0x28)
struct U*ef44f1c5dc : U*6273c6b474 {
	struct TArray<struct F*ee5b2c43a7> Variants[0x10]; // 0x28(0x10)
	struct TArray<struct F*0b58def2be> Instances[0x10]; // 0x38(0x10)
	struct TArray<struct F*6ea9fa8839> *2909632458[0x10]; // 0x48(0x10)
};

// Class Engine.LevelStreaming
// Size: 0x190 (Inherited: 0x28)
struct ULevelStreaming : UObject {
	struct FName PackageName[0x08]; // 0x28(0x08)
	struct UWorld* WorldAsset[0x20]; // 0x30(0x20)
	char pad_50[0x10]; // 0x50(0x10)
	struct FName *6c4f36be4a[0x08]; // 0x60(0x08)
	struct TArray<struct FName> *e574f05678[0x10]; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)
	char bLocked : 1; // 0x88(0x01)
	char pad_88_1 : 2; // 0x88(0x01)
	char *165e0957ff : 1; // 0x88(0x01)
	char bShouldBeLoaded : 1; // 0x88(0x01)
	char bShouldBeVisible : 1; // 0x88(0x01)
	char bShouldBlockOnLoad : 1; // 0x88(0x01)
	char pad_88_7 : 1; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32 LevelLODIndex[0x04]; // 0x8c(0x04)
	char pad_90[0x4]; // 0x90(0x04)
	struct FColor DrawColor[0x04]; // 0x94(0x04)
	struct FLinearColor LevelColor[0x10]; // 0x98(0x10)
	char pad_A8[0x10]; // 0xa8(0x10)
	struct ULevel* *06f8d17835[0x08]; // 0xb8(0x08)
	struct ULevel* *7bdf81c32b[0x08]; // 0xc0(0x08)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct ALevelStreamingVolume*> *9c901ec567[0x10]; // 0xd0(0x10)
	float *1c00cc6545[0x04]; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FMulticastDelegate OnLevelLoaded[0x10]; // 0xe8(0x10)
	struct FMulticastDelegate OnLevelUnloaded[0x10]; // 0xf8(0x10)
	struct FMulticastDelegate OnLevelShown[0x10]; // 0x108(0x10)
	struct FMulticastDelegate OnLevelHidden[0x10]; // 0x118(0x10)
	struct TArray<struct FString> Keywords[0x10]; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)
	struct FTransform LevelTransform[0x30]; // 0x140(0x30)
	char pad_170[0x14]; // 0x170(0x14)
	char *05ff519043 : 1; // 0x184(0x01)
	char pad_184_1 : 7; // 0x184(0x01)
	char pad_185[0x7]; // 0x185(0x07)
	char bDisableDistanceStreaming : 1; // 0x18c(0x01)
	char *a505c78148 : 1; // 0x18c(0x01)
	char pad_18C_2 : 6; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)

	void *07f3e42b1c(); // Function Engine.LevelStreaming.*07f3e42b1c // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664db50
	void *3736b4bae3(); // Function Engine.LevelStreaming.*3736b4bae3 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664d6a0
	void *611fc715b1(); // Function Engine.LevelStreaming.*611fc715b1 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x664b1f4
	struct FString CreateInstance(); // Function Engine.LevelStreaming.CreateInstance // Final|Native|Public|BlueprintCallable // @ game+0x6648060
	void *cb1f97e6e3(); // Function Engine.LevelStreaming.*cb1f97e6e3 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664d684
};

// Class Engine.LevelStreamingAlwaysLoaded
// Size: 0x190 (Inherited: 0x190)
struct ULevelStreamingAlwaysLoaded : ULevelStreaming {
};

// Class Engine.LevelStreamingKismet
// Size: 0x1a0 (Inherited: 0x190)
struct ULevelStreamingKismet : ULevelStreaming {
	char *43c2767784 : 1; // 0x190(0x01)
	char *503902f956 : 1; // 0x190(0x01)
	char pad_190_2 : 6; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)

	struct UObject* *6bf9792cf3(struct FString* LevelName, struct FRotator* Rotation); // Function Engine.LevelStreamingKismet.*6bf9792cf3 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x665083c
};

// Class Engine.*195aa03baa
// Size: 0x190 (Inherited: 0x190)
struct U*195aa03baa : ULevelStreaming {
};

// Class Engine.*e5b02c8593
// Size: 0x40 (Inherited: 0x28)
struct U*e5b02c8593 : UObject {
	struct UModel* *71155081dd[0x08]; // 0x28(0x08)
	struct TArray<int32> Surfaces[0x10]; // 0x30(0x10)
};

// Class Engine.*655bf1d960
// Size: 0x40 (Inherited: 0x28)
struct U*655bf1d960 : UObject {
	struct F*25888ccc71 LightmassSettings[0x18]; // 0x28(0x18)
};

// Class Engine.*4827c03b64
// Size: 0x28 (Inherited: 0x28)
struct U*4827c03b64 : UObject {
};

// Class Engine.*6bff317227
// Size: 0xa8 (Inherited: 0x28)
struct U*6bff317227 : U*4827c03b64 {
	struct FString *532cd07e6d[0x10]; // 0x28(0x10)
	struct FString *2c0c1841c6[0x10]; // 0x38(0x10)
	struct FString *39ef66de8c[0x10]; // 0x48(0x10)
	struct FString *96d3ae03aa[0x10]; // 0x58(0x10)
	struct FString *a283490049[0x10]; // 0x68(0x10)
	struct FString *5c94bc6a1e[0x10]; // 0x78(0x10)
	struct FString *08b760c69e[0x10]; // 0x88(0x10)
	struct FString *ed2aecd547[0x10]; // 0x98(0x10)
};

// Class Engine.MapBuildDataRegistry
// Size: 0x120 (Inherited: 0x28)
struct UMapBuildDataRegistry : UObject {
	enum class *490d38ab77 *297d352fba; // 0x28(0x01)
	char pad_29[0xf7]; // 0x29(0xf7)
};

// Class Engine.*a1507094ef
// Size: 0x98 (Inherited: 0x60)
struct U*a1507094ef : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*f10eb17821
// Size: 0x60 (Inherited: 0x60)
struct U*f10eb17821 : UMaterialExpression {
};

// Class Engine.MaterialExpressionAdd
// Size: 0xd8 (Inherited: 0x60)
struct UMaterialExpressionAdd : UMaterialExpression {
	struct FExpressionInput A[0x38]; // 0x60(0x38)
	struct FExpressionInput B[0x38]; // 0x98(0x38)
	float *5ce5bfecea[0x04]; // 0xd0(0x04)
	float *2aeeadef96[0x04]; // 0xd4(0x04)
};

// Class Engine.*0fda6a091c
// Size: 0xd0 (Inherited: 0x60)
struct U*0fda6a091c : UMaterialExpression {
	struct FExpressionInput A[0x38]; // 0x60(0x38)
	struct FExpressionInput B[0x38]; // 0x98(0x38)
};

// Class Engine.*8f81379f18
// Size: 0x98 (Inherited: 0x60)
struct U*8f81379f18 : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*8a5df95b71
// Size: 0x98 (Inherited: 0x60)
struct U*8a5df95b71 : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*793524b455
// Size: 0x98 (Inherited: 0x60)
struct U*793524b455 : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*7bcaad7aa0
// Size: 0x98 (Inherited: 0x60)
struct U*7bcaad7aa0 : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*587ad62d90
// Size: 0x98 (Inherited: 0x60)
struct U*587ad62d90 : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*dc0583b155
// Size: 0xd0 (Inherited: 0x60)
struct U*dc0583b155 : UMaterialExpression {
	struct FExpressionInput Y[0x38]; // 0x60(0x38)
	struct FExpressionInput X[0x38]; // 0x98(0x38)
};

// Class Engine.*edfa772f02
// Size: 0xd0 (Inherited: 0x60)
struct U*edfa772f02 : UMaterialExpression {
	struct FExpressionInput Y[0x38]; // 0x60(0x38)
	struct FExpressionInput X[0x38]; // 0x98(0x38)
};

// Class Engine.*794119e042
// Size: 0x98 (Inherited: 0x60)
struct U*794119e042 : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*633a2d7c83
// Size: 0x98 (Inherited: 0x60)
struct U*633a2d7c83 : UMaterialExpression {
	struct FExpressionInput WorldPosition[0x38]; // 0x60(0x38)
};

// Class Engine.MaterialExpressionAtmosphericLightColor
// Size: 0x60 (Inherited: 0x60)
struct UMaterialExpressionAtmosphericLightColor : UMaterialExpression {
};

// Class Engine.MaterialExpressionAtmosphericLightVector
// Size: 0x60 (Inherited: 0x60)
struct UMaterialExpressionAtmosphericLightVector : UMaterialExpression {
};

// Class Engine.MaterialExpressionBlackBody
// Size: 0x98 (Inherited: 0x60)
struct UMaterialExpressionBlackBody : UMaterialExpression {
	struct FExpressionInput Temp[0x38]; // 0x60(0x38)
};

// Class Engine.*55d1a82120
// Size: 0x120 (Inherited: 0x60)
struct U*55d1a82120 : UMaterialExpression {
	struct FMaterialAttributesInput A[0x40]; // 0x60(0x40)
	struct FMaterialAttributesInput B[0x40]; // 0xa0(0x40)
	struct FExpressionInput Alpha[0x38]; // 0xe0(0x38)
	enum class EMaterialAttributeBlend *f2e1b7c76f; // 0x118(0x01)
	enum class EMaterialAttributeBlend *16a904c5b8; // 0x119(0x01)
	char pad_11A[0x6]; // 0x11a(0x06)
};

// Class Engine.*6c2951299b
// Size: 0xa0 (Inherited: 0x60)
struct U*6c2951299b : UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes[0x40]; // 0x60(0x40)
};

// Class Engine.MaterialExpressionBumpOffset
// Size: 0x118 (Inherited: 0x60)
struct UMaterialExpressionBumpOffset : UMaterialExpression {
	struct FExpressionInput Coordinate[0x38]; // 0x60(0x38)
	struct FExpressionInput Height[0x38]; // 0x98(0x38)
	struct FExpressionInput HeightRatioInput[0x38]; // 0xd0(0x38)
	float *d1f5a54789[0x04]; // 0x108(0x04)
	float *616c6356f8[0x04]; // 0x10c(0x04)
	uint32 *b76d4888c5[0x04]; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// Class Engine.*420b07dd04
// Size: 0x60 (Inherited: 0x60)
struct U*420b07dd04 : UMaterialExpression {
};

// Class Engine.*57dce3ff64
// Size: 0x60 (Inherited: 0x60)
struct U*57dce3ff64 : UMaterialExpression {
};

// Class Engine.*4be961cdc7
// Size: 0x98 (Inherited: 0x60)
struct U*4be961cdc7 : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*08b1275de0
// Size: 0x118 (Inherited: 0x60)
struct U*08b1275de0 : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
	struct FExpressionInput Min[0x38]; // 0x98(0x38)
	struct FExpressionInput Max[0x38]; // 0xd0(0x38)
	enum class *753b669887 *10d2d0d003; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float *621b1b545c[0x04]; // 0x10c(0x04)
	float *e42f414d99[0x04]; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// Class Engine.*32cb46dd72
// Size: 0x80 (Inherited: 0x60)
struct U*32cb46dd72 : UMaterialExpression {
	struct UMaterialParameterCollection* Collection[0x08]; // 0x60(0x08)
	struct FName ParameterName[0x08]; // 0x68(0x08)
	struct FGuid *c2fef6bf89[0x10]; // 0x70(0x10)
};

// Class Engine.*0f0cf1fc01
// Size: 0x88 (Inherited: 0x60)
struct U*0f0cf1fc01 : UMaterialExpression {
	int32 SizeX[0x04]; // 0x60(0x04)
	int32 SizeY[0x04]; // 0x64(0x04)
	struct FString Text[0x10]; // 0x68(0x10)
	struct FLinearColor *299208e4aa[0x10]; // 0x78(0x10)
};

// Class Engine.*fc222a7109
// Size: 0xa0 (Inherited: 0x60)
struct U*fc222a7109 : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
	char R : 1; // 0x98(0x01)
	char G : 1; // 0x98(0x01)
	char B : 1; // 0x98(0x01)
	char A : 1; // 0x98(0x01)
	char pad_98_4 : 4; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class Engine.MaterialExpressionConstant
// Size: 0x68 (Inherited: 0x60)
struct UMaterialExpressionConstant : UMaterialExpression {
	float R[0x04]; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.MaterialExpressionConstant2Vector
// Size: 0x68 (Inherited: 0x60)
struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R[0x04]; // 0x60(0x04)
	float G[0x04]; // 0x64(0x04)
};

// Class Engine.MaterialExpressionConstant3Vector
// Size: 0x70 (Inherited: 0x60)
struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	struct FLinearColor Constant[0x10]; // 0x60(0x10)
};

// Class Engine.MaterialExpressionConstant4Vector
// Size: 0x70 (Inherited: 0x60)
struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	struct FLinearColor Constant[0x10]; // 0x60(0x10)
};

// Class Engine.*84d28bd47c
// Size: 0xa0 (Inherited: 0x60)
struct U*84d28bd47c : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
	float Bias[0x04]; // 0x98(0x04)
	float Scale[0x04]; // 0x9c(0x04)
};

// Class Engine.*245217562a
// Size: 0xa0 (Inherited: 0x60)
struct U*245217562a : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
	float Period[0x04]; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Engine.*f21dc11b43
// Size: 0xd0 (Inherited: 0x60)
struct U*f21dc11b43 : UMaterialExpression {
	struct FExpressionInput A[0x38]; // 0x60(0x38)
	struct FExpressionInput B[0x38]; // 0x98(0x38)
};

// Class Engine.*c7a25a5360
// Size: 0x98 (Inherited: 0x60)
struct U*c7a25a5360 : UMaterialExpression {
	struct FString Code[0x10]; // 0x60(0x10)
	enum class *12d2d93b2c OutputType; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString Description[0x10]; // 0x78(0x10)
	struct TArray<struct F*9087bb1d5f> Inputs[0x10]; // 0x88(0x10)
};

// Class Engine.*54b3734e0e
// Size: 0x98 (Inherited: 0x60)
struct U*54b3734e0e : U*6a03f15cb4 {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*ad4aa7a83d
// Size: 0x98 (Inherited: 0x60)
struct U*ad4aa7a83d : U*6a03f15cb4 {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*850d3fd8f3
// Size: 0xa8 (Inherited: 0x60)
struct U*850d3fd8f3 : U*6a03f15cb4 {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
	char pad_98[0x10]; // 0x98(0x10)
};

// Class Engine.*28d185e33c
// Size: 0x98 (Inherited: 0x60)
struct U*28d185e33c : UMaterialExpression {
	struct FExpressionInput Value[0x38]; // 0x60(0x38)
};

// Class Engine.*547dde26cd
// Size: 0x98 (Inherited: 0x60)
struct U*547dde26cd : UMaterialExpression {
	struct FExpressionInput Value[0x38]; // 0x60(0x38)
};

// Class Engine.*c235d61223
// Size: 0x60 (Inherited: 0x60)
struct U*c235d61223 : UMaterialExpression {
};

// Class Engine.*6f971d8dfb
// Size: 0x60 (Inherited: 0x60)
struct U*6f971d8dfb : UMaterialExpression {
};

// Class Engine.*c9eebc3804
// Size: 0xa0 (Inherited: 0x60)
struct U*c9eebc3804 : UMaterialExpression {
	struct FExpressionInput TextureSize[0x38]; // 0x60(0x38)
	float *4c487b31bf[0x04]; // 0x98(0x04)
	float *d02702455f[0x04]; // 0x9c(0x04)
};

// Class Engine.*c5d4334b6f
// Size: 0xd8 (Inherited: 0x60)
struct U*c5d4334b6f : UMaterialExpression {
	struct FExpressionInput InOpacity[0x38]; // 0x60(0x38)
	struct FExpressionInput FadeDistance[0x38]; // 0x98(0x38)
	float *057f450838[0x04]; // 0xd0(0x04)
	float *ce6784a4da[0x04]; // 0xd4(0x04)
};

// Class Engine.MaterialExpressionDepthOfFieldFunction
// Size: 0xa0 (Inherited: 0x60)
struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	enum class *c867eee3e0 *909016262e; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FExpressionInput Depth[0x38]; // 0x68(0x38)
};

// Class Engine.*9e63c76ae6
// Size: 0x98 (Inherited: 0x60)
struct U*9e63c76ae6 : UMaterialExpression {
	struct FExpressionInput *0409138c7b[0x38]; // 0x60(0x38)
};

// Class Engine.*d82b2bed64
// Size: 0xe0 (Inherited: 0x60)
struct U*d82b2bed64 : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
	struct FExpressionInput Fraction[0x38]; // 0x98(0x38)
	struct FLinearColor *c1a83cd515[0x10]; // 0xd0(0x10)
};

// Class Engine.*431491875f
// Size: 0xd0 (Inherited: 0x60)
struct U*431491875f : UMaterialExpression {
	struct FExpressionInput A[0x38]; // 0x60(0x38)
	struct FExpressionInput B[0x38]; // 0x98(0x38)
};

// Class Engine.*fd7ffc6287
// Size: 0x60 (Inherited: 0x60)
struct U*fd7ffc6287 : UMaterialExpression {
};

// Class Engine.*4ae686ad2f
// Size: 0x98 (Inherited: 0x60)
struct U*4ae686ad2f : UMaterialExpression {
	struct FExpressionInput Position[0x38]; // 0x60(0x38)
};

// Class Engine.*43e82ea1ab
// Size: 0x98 (Inherited: 0x60)
struct U*43e82ea1ab : UMaterialExpression {
	struct FExpressionInput Position[0x38]; // 0x60(0x38)
};

// Class Engine.MaterialExpressionDivide
// Size: 0xd8 (Inherited: 0x60)
struct UMaterialExpressionDivide : UMaterialExpression {
	struct FExpressionInput A[0x38]; // 0x60(0x38)
	struct FExpressionInput B[0x38]; // 0x98(0x38)
	float *5ce5bfecea[0x04]; // 0xd0(0x04)
	float *2aeeadef96[0x04]; // 0xd4(0x04)
};

// Class Engine.*046da48547
// Size: 0xd0 (Inherited: 0x60)
struct U*046da48547 : UMaterialExpression {
	struct FExpressionInput A[0x38]; // 0x60(0x38)
	struct FExpressionInput B[0x38]; // 0x98(0x38)
};

// Class Engine.*68dedba957
// Size: 0x80 (Inherited: 0x60)
struct U*68dedba957 : UMaterialExpression {
	struct TArray<struct FString> ParamNames[0x10]; // 0x60(0x10)
	struct FLinearColor DefaultValue[0x10]; // 0x70(0x10)
};

// Class Engine.*732d2c2064
// Size: 0x60 (Inherited: 0x60)
struct U*732d2c2064 : UMaterialExpression {
};

// Class Engine.*9171a0e59a
// Size: 0x178 (Inherited: 0x60)
struct U*9171a0e59a : UMaterialExpression {
	struct FExpressionInput Default[0x38]; // 0x60(0x38)
	struct FExpressionInput Inputs[0x38]; // 0x98(0xe0)
};

// Class Engine.*553e28e6de
// Size: 0x98 (Inherited: 0x60)
struct U*553e28e6de : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*25f1f2b18e
// Size: 0xd0 (Inherited: 0x60)
struct U*25f1f2b18e : UMaterialExpression {
	struct FExpressionInput A[0x38]; // 0x60(0x38)
	struct FExpressionInput B[0x38]; // 0x98(0x38)
};

// Class Engine.*d64de7df3a
// Size: 0x70 (Inherited: 0x60)
struct U*d64de7df3a : UMaterialExpression {
	struct UFont* Font[0x08]; // 0x60(0x08)
	int32 *ce123baa0d[0x04]; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.*290278708b
// Size: 0x90 (Inherited: 0x70)
struct U*290278708b : U*d64de7df3a {
	struct FName ParameterName[0x08]; // 0x70(0x08)
	struct FGuid *8f84b5e332[0x10]; // 0x78(0x10)
	struct FName Group[0x08]; // 0x88(0x08)
};

// Class Engine.*857e6b32fe
// Size: 0x98 (Inherited: 0x60)
struct U*857e6b32fe : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*7234146223
// Size: 0x118 (Inherited: 0x60)
struct U*7234146223 : UMaterialExpression {
	struct FExpressionInput ExponentIn[0x38]; // 0x60(0x38)
	float Exponent[0x04]; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FExpressionInput BaseReflectFractionIn[0x38]; // 0xa0(0x38)
	float *79c1ea8388[0x04]; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FExpressionInput Normal[0x38]; // 0xe0(0x38)
};

// Class Engine.*9927b5b33e
// Size: 0x130 (Inherited: 0x60)
struct U*9927b5b33e : UMaterialExpression {
	struct FExpressionInput Preview[0x38]; // 0x60(0x38)
	struct FString InputName[0x10]; // 0x98(0x10)
	struct FString Description[0x10]; // 0xa8(0x10)
	struct FGuid ID[0x10]; // 0xb8(0x10)
	enum class *cc3ae7f082 InputType; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FVector4 *ada9866e27[0x10]; // 0xd0(0x10)
	char *35e4ac82b7 : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	int32 *63132e9468[0x04]; // 0xe4(0x04)
	char *82d97e0ea8 : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x47]; // 0xe9(0x47)
};

// Class Engine.*5ac2273bfb
// Size: 0xd8 (Inherited: 0x60)
struct U*5ac2273bfb : UMaterialExpression {
	struct FString OutputName[0x10]; // 0x60(0x10)
	struct FString Description[0x10]; // 0x70(0x10)
	int32 *63132e9468[0x04]; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FExpressionInput A[0x38]; // 0x88(0x38)
	char *4b622f4228 : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	struct FGuid ID[0x10]; // 0xc4(0x10)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class Engine.MaterialExpressionGetMaterialAttributes
// Size: 0xb0 (Inherited: 0x60)
struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes[0x40]; // 0x60(0x40)
	struct TArray<struct FGuid> *bb6a7f2fef[0x10]; // 0xa0(0x10)
};

// Class Engine.*d0253e30aa
// Size: 0x108 (Inherited: 0x60)
struct U*d0253e30aa : UMaterialExpression {
	struct FExpressionInput Default[0x38]; // 0x60(0x38)
	struct FExpressionInput *d9073e9d9d[0x38]; // 0x98(0x38)
	struct FExpressionInput *cb030b6d2b[0x38]; // 0xd0(0x38)
};

// Class Engine.MaterialExpressionIf
// Size: 0x188 (Inherited: 0x60)
struct UMaterialExpressionIf : UMaterialExpression {
	struct FExpressionInput A[0x38]; // 0x60(0x38)
	struct FExpressionInput B[0x38]; // 0x98(0x38)
	struct FExpressionInput AGreaterThanB[0x38]; // 0xd0(0x38)
	struct FExpressionInput AEqualsB[0x38]; // 0x108(0x38)
	struct FExpressionInput ALessThanB[0x38]; // 0x140(0x38)
	float *0bff2e6f61[0x04]; // 0x178(0x04)
	float *2aeeadef96[0x04]; // 0x17c(0x04)
	float ConstAEqualsB[0x04]; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
};

// Class Engine.*ceb6f5b590
// Size: 0x60 (Inherited: 0x60)
struct U*ceb6f5b590 : UMaterialExpression {
};

// Class Engine.*08e369adb1
// Size: 0xd0 (Inherited: 0x60)
struct U*08e369adb1 : UMaterialExpression {
	struct FExpressionInput RealTime[0x38]; // 0x60(0x38)
	struct FExpressionInput Lightmass[0x38]; // 0x98(0x38)
};

// Class Engine.*9720e60570
// Size: 0x60 (Inherited: 0x60)
struct U*9720e60570 : UMaterialExpression {
};

// Class Engine.MaterialExpressionLinearInterpolate
// Size: 0x118 (Inherited: 0x60)
struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	struct FExpressionInput A[0x38]; // 0x60(0x38)
	struct FExpressionInput B[0x38]; // 0x98(0x38)
	struct FExpressionInput Alpha[0x38]; // 0xd0(0x38)
	float *5ce5bfecea[0x04]; // 0x108(0x04)
	float *2aeeadef96[0x04]; // 0x10c(0x04)
	float *920aee3a13[0x04]; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// Class Engine.*6974bd4a00
// Size: 0x98 (Inherited: 0x60)
struct U*6974bd4a00 : UMaterialExpression {
	struct FExpressionInput X[0x38]; // 0x60(0x38)
};

// Class Engine.*1ac16c60a1
// Size: 0x648 (Inherited: 0x60)
struct U*1ac16c60a1 : UMaterialExpression {
	struct FExpressionInput BaseColor[0x38]; // 0x60(0x38)
	struct FExpressionInput Metallic[0x38]; // 0x98(0x38)
	struct FExpressionInput Specular[0x38]; // 0xd0(0x38)
	struct FExpressionInput Roughness[0x38]; // 0x108(0x38)
	struct FExpressionInput EmissiveColor[0x38]; // 0x140(0x38)
	struct FExpressionInput Opacity[0x38]; // 0x178(0x38)
	struct FExpressionInput OpacityMask[0x38]; // 0x1b0(0x38)
	struct FExpressionInput Normal[0x38]; // 0x1e8(0x38)
	struct FExpressionInput WorldPositionOffset[0x38]; // 0x220(0x38)
	struct FExpressionInput WorldDisplacement[0x38]; // 0x258(0x38)
	struct FExpressionInput TessellationMultiplier[0x38]; // 0x290(0x38)
	struct FExpressionInput SubsurfaceColor[0x38]; // 0x2c8(0x38)
	struct FExpressionInput ClearCoat[0x38]; // 0x300(0x38)
	struct FExpressionInput ClearCoatRoughness[0x38]; // 0x338(0x38)
	struct FExpressionInput AmbientOcclusion[0x38]; // 0x370(0x38)
	struct FExpressionInput Refraction[0x38]; // 0x3a8(0x38)
	struct FExpressionInput *833e639604[0x38]; // 0x3e0(0x1c0)
	struct FExpressionInput PixelDepthOffset[0x38]; // 0x5a0(0x38)
	struct FExpressionInput Temperature[0x38]; // 0x5d8(0x38)
	struct FExpressionInput TemperatureAlpha[0x38]; // 0x610(0x38)
};

// Class Engine.MaterialExpressionMaterialFunctionCall
// Size: 0x88 (Inherited: 0x60)
struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	struct UMaterialFunction* MaterialFunction[0x08]; // 0x60(0x08)
	struct TArray<struct F*552e2e57dc> *137ec7f48f[0x10]; // 0x68(0x10)
	struct TArray<struct F*c000b301a5> *c994aac007[0x10]; // 0x78(0x10)
};

// Class Engine.*7d49050006
// Size: 0xd0 (Inherited: 0x60)
struct U*7d49050006 : UMaterialExpression {
	struct FExpressionInput RealTime[0x38]; // 0x60(0x38)
	struct FExpressionInput *445ce7da05[0x38]; // 0x98(0x38)
};

// Class Engine.*f15f46c5dc
// Size: 0xd8 (Inherited: 0x60)
struct U*f15f46c5dc : UMaterialExpression {
	struct FExpressionInput A[0x38]; // 0x60(0x38)
	struct FExpressionInput B[0x38]; // 0x98(0x38)
	float *5ce5bfecea[0x04]; // 0xd0(0x04)
	float *2aeeadef96[0x04]; // 0xd4(0x04)
};

// Class Engine.*f38413bf7a
// Size: 0xd8 (Inherited: 0x60)
struct U*f38413bf7a : UMaterialExpression {
	struct FExpressionInput A[0x38]; // 0x60(0x38)
	struct FExpressionInput B[0x38]; // 0x98(0x38)
	float *5ce5bfecea[0x04]; // 0xd0(0x04)
	float *2aeeadef96[0x04]; // 0xd4(0x04)
};

// Class Engine.MaterialExpressionMultiply
// Size: 0xd8 (Inherited: 0x60)
struct UMaterialExpressionMultiply : UMaterialExpression {
	struct FExpressionInput A[0x38]; // 0x60(0x38)
	struct FExpressionInput B[0x38]; // 0x98(0x38)
	float *5ce5bfecea[0x04]; // 0xd0(0x04)
	float *2aeeadef96[0x04]; // 0xd4(0x04)
};

// Class Engine.MaterialExpressionNoise
// Size: 0xf8 (Inherited: 0x60)
struct UMaterialExpressionNoise : UMaterialExpression {
	struct FExpressionInput Position[0x38]; // 0x60(0x38)
	struct FExpressionInput *49ddfa00ea[0x38]; // 0x98(0x38)
	float Scale[0x04]; // 0xd0(0x04)
	int32 Quality[0x04]; // 0xd4(0x04)
	enum class ENoiseFunction *bf3bc9a617; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	char *eea7e64f24 : 1; // 0xdc(0x01)
	char pad_DC_1 : 7; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	int32 Levels[0x04]; // 0xe0(0x04)
	float *9c2484c997[0x04]; // 0xe4(0x04)
	float *c53150ee8f[0x04]; // 0xe8(0x04)
	float *ecb05d0d1a[0x04]; // 0xec(0x04)
	char *580b8e4194 : 1; // 0xf0(0x01)
	char pad_F0_1 : 7; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	uint32 RepeatSize[0x04]; // 0xf4(0x04)
};

// Class Engine.MaterialExpressionNormalize
// Size: 0x98 (Inherited: 0x60)
struct UMaterialExpressionNormalize : UMaterialExpression {
	struct FExpressionInput *6e01c4a43f[0x38]; // 0x60(0x38)
};

// Class Engine.*b67ecde498
// Size: 0x60 (Inherited: 0x60)
struct U*b67ecde498 : UMaterialExpression {
};

// Class Engine.*0bc4995d7f
// Size: 0x60 (Inherited: 0x60)
struct U*0bc4995d7f : UMaterialExpression {
};

// Class Engine.*784efa9e2e
// Size: 0x68 (Inherited: 0x60)
struct U*784efa9e2e : UMaterialExpression {
	enum class *751784816f *1f37799973; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*7c2f17a2b8
// Size: 0x60 (Inherited: 0x60)
struct U*7c2f17a2b8 : UMaterialExpression {
};

// Class Engine.MaterialExpressionOneMinus
// Size: 0x98 (Inherited: 0x60)
struct UMaterialExpressionOneMinus : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.MaterialExpressionPanner
// Size: 0x118 (Inherited: 0x60)
struct UMaterialExpressionPanner : UMaterialExpression {
	struct FExpressionInput Coordinate[0x38]; // 0x60(0x38)
	struct FExpressionInput Time[0x38]; // 0x98(0x38)
	struct FExpressionInput Speed[0x38]; // 0xd0(0x38)
	float *6d08c6c18b[0x04]; // 0x108(0x04)
	float *8432ac5a48[0x04]; // 0x10c(0x04)
	uint32 *b76d4888c5[0x04]; // 0x110(0x04)
	bool *fc4312d9fa; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
};

// Class Engine.*c5abf59fb2
// Size: 0x80 (Inherited: 0x60)
struct U*c5abf59fb2 : UMaterialExpression {
	struct FName ParameterName[0x08]; // 0x60(0x08)
	struct FGuid *8f84b5e332[0x10]; // 0x68(0x10)
	struct FName Group[0x08]; // 0x78(0x08)
};

// Class Engine.MaterialExpressionScalarParameter
// Size: 0x90 (Inherited: 0x80)
struct UMaterialExpressionScalarParameter : U*c5abf59fb2 {
	float DefaultValue[0x04]; // 0x80(0x04)
	float SliderMin[0x04]; // 0x84(0x04)
	float SliderMax[0x04]; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.*498166c721
// Size: 0x88 (Inherited: 0x80)
struct U*498166c721 : U*c5abf59fb2 {
	char DefaultValue : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*f7357d59ae
// Size: 0xf8 (Inherited: 0x88)
struct U*f7357d59ae : U*498166c721 {
	struct FExpressionInput A[0x38]; // 0x88(0x38)
	struct FExpressionInput B[0x38]; // 0xc0(0x38)
};

// Class Engine.*2ff8831d9e
// Size: 0xc0 (Inherited: 0x80)
struct U*2ff8831d9e : U*c5abf59fb2 {
	struct FExpressionInput Input[0x38]; // 0x80(0x38)
	char *cc9e0073a6 : 1; // 0xb8(0x01)
	char *a5a0638a03 : 1; // 0xb8(0x01)
	char *333248f776 : 1; // 0xb8(0x01)
	char *3624686594 : 1; // 0xb8(0x01)
	char pad_B8_4 : 4; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class Engine.MaterialExpressionVectorParameter
// Size: 0x90 (Inherited: 0x80)
struct UMaterialExpressionVectorParameter : U*c5abf59fb2 {
	struct FLinearColor DefaultValue[0x10]; // 0x80(0x10)
};

// Class Engine.*f4f30eead1
// Size: 0x60 (Inherited: 0x60)
struct U*f4f30eead1 : UMaterialExpression {
};

// Class Engine.*e49382e192
// Size: 0x68 (Inherited: 0x60)
struct U*e49382e192 : UMaterialExpression {
	struct U*147426ac7d* Layer[0x08]; // 0x60(0x08)
};

// Class Engine.*856956e878
// Size: 0x60 (Inherited: 0x60)
struct U*856956e878 : UMaterialExpression {
};

// Class Engine.*6c7bb83cb5
// Size: 0x60 (Inherited: 0x60)
struct U*6c7bb83cb5 : UMaterialExpression {
};

// Class Engine.*de25b62ed2
// Size: 0x60 (Inherited: 0x60)
struct U*de25b62ed2 : UMaterialExpression {
};

// Class Engine.*151e5cc110
// Size: 0x60 (Inherited: 0x60)
struct U*151e5cc110 : UMaterialExpression {
};

// Class Engine.*192d00e165
// Size: 0x60 (Inherited: 0x60)
struct U*192d00e165 : UMaterialExpression {
};

// Class Engine.*3ab73b58e5
// Size: 0x60 (Inherited: 0x60)
struct U*3ab73b58e5 : UMaterialExpression {
};

// Class Engine.*6b757af9d3
// Size: 0x60 (Inherited: 0x60)
struct U*6b757af9d3 : UMaterialExpression {
};

// Class Engine.*1057afe890
// Size: 0x60 (Inherited: 0x60)
struct U*1057afe890 : UMaterialExpression {
};

// Class Engine.*cfda5ddc4a
// Size: 0x60 (Inherited: 0x60)
struct U*cfda5ddc4a : UMaterialExpression {
};

// Class Engine.*85a0959641
// Size: 0x60 (Inherited: 0x60)
struct U*85a0959641 : UMaterialExpression {
};

// Class Engine.*7b39229714
// Size: 0x60 (Inherited: 0x60)
struct U*7b39229714 : UMaterialExpression {
};

// Class Engine.*07515e834f
// Size: 0x60 (Inherited: 0x60)
struct U*07515e834f : UMaterialExpression {
};

// Class Engine.*1cc3e683dc
// Size: 0x60 (Inherited: 0x60)
struct U*1cc3e683dc : UMaterialExpression {
};

// Class Engine.*91cf05b62b
// Size: 0x60 (Inherited: 0x60)
struct U*91cf05b62b : UMaterialExpression {
};

// Class Engine.MaterialExpressionPower
// Size: 0xd8 (Inherited: 0x60)
struct UMaterialExpressionPower : UMaterialExpression {
	struct FExpressionInput Base[0x38]; // 0x60(0x38)
	struct FExpressionInput Exponent[0x38]; // 0x98(0x38)
	float *cdb02654fd[0x04]; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class Engine.*db2e89356e
// Size: 0x60 (Inherited: 0x60)
struct U*db2e89356e : UMaterialExpression {
};

// Class Engine.*cbddd262c8
// Size: 0x60 (Inherited: 0x60)
struct U*cbddd262c8 : UMaterialExpression {
};

// Class Engine.*a3dccb350e
// Size: 0x60 (Inherited: 0x60)
struct U*a3dccb350e : UMaterialExpression {
};

// Class Engine.*4160022b92
// Size: 0xd0 (Inherited: 0x60)
struct U*4160022b92 : UMaterialExpression {
	struct FExpressionInput CurrentFrame[0x38]; // 0x60(0x38)
	struct FExpressionInput *15c881ac7c[0x38]; // 0x98(0x38)
};

// Class Engine.*1201de4baa
// Size: 0x140 (Inherited: 0x60)
struct U*1201de4baa : UMaterialExpression {
	struct FExpressionInput Default[0x38]; // 0x60(0x38)
	struct FExpressionInput Inputs[0x38]; // 0x98(0xa8)
};

// Class Engine.MaterialExpressionReflectionVectorWS
// Size: 0xa0 (Inherited: 0x60)
struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	struct FExpressionInput *e6d3ec0b29[0x38]; // 0x60(0x38)
	char *2440fffcb8 : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class Engine.*28f786f1a6
// Size: 0x98 (Inherited: 0x60)
struct U*28f786f1a6 : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*cf035cfbac
// Size: 0x148 (Inherited: 0x60)
struct U*cf035cfbac : UMaterialExpression {
	struct FExpressionInput *8e5b97443e[0x38]; // 0x60(0x38)
	struct FExpressionInput RotationAngle[0x38]; // 0x98(0x38)
	struct FExpressionInput *d21dd4488a[0x38]; // 0xd0(0x38)
	struct FExpressionInput Position[0x38]; // 0x108(0x38)
	float Period[0x04]; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
};

// Class Engine.*48685c384e
// Size: 0xe0 (Inherited: 0x60)
struct U*48685c384e : UMaterialExpression {
	struct FExpressionInput Coordinate[0x38]; // 0x60(0x38)
	struct FExpressionInput Time[0x38]; // 0x98(0x38)
	float *36664f1743[0x04]; // 0xd0(0x04)
	float *b2edd7d1c8[0x04]; // 0xd4(0x04)
	float Speed[0x04]; // 0xd8(0x04)
	uint32 *b76d4888c5[0x04]; // 0xdc(0x04)
};

// Class Engine.*3220b4de6e
// Size: 0x98 (Inherited: 0x60)
struct U*3220b4de6e : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*5f62c2d3f8
// Size: 0x98 (Inherited: 0x60)
struct U*5f62c2d3f8 : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*3fad86e651
// Size: 0xe0 (Inherited: 0x60)
struct U*3fad86e651 : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FExpressionInput Input[0x38]; // 0x68(0x38)
	struct FExpressionInput OffsetFraction[0x38]; // 0xa0(0x38)
	struct FVector2D *7d6d4a1448[0x08]; // 0xd8(0x08)
};

// Class Engine.*6f12f693b8
// Size: 0xe0 (Inherited: 0x60)
struct U*6f12f693b8 : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FExpressionInput Input[0x38]; // 0x68(0x38)
	struct FExpressionInput Coordinates[0x38]; // 0xa0(0x38)
	struct FVector2D *7d6d4a1448[0x08]; // 0xd8(0x08)
};

// Class Engine.*48002ae6a7
// Size: 0x60 (Inherited: 0x60)
struct U*48002ae6a7 : UMaterialExpression {
};

// Class Engine.*1c305767ec
// Size: 0xa0 (Inherited: 0x60)
struct U*1c305767ec : UMaterialExpression {
	struct FExpressionInput Coordinates[0x38]; // 0x60(0x38)
	enum class ESceneTextureId *5267154baf; // 0x98(0x01)
	bool *0ad19bf12f; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// Class Engine.*808eba3089
// Size: 0x68 (Inherited: 0x60)
struct U*808eba3089 : UMaterialExpression {
	enum class *49cd946d8c *9726b65c14; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*81c2683129
// Size: 0x60 (Inherited: 0x60)
struct U*81c2683129 : UMaterialExpression {
};

// Class Engine.MaterialExpressionSetMaterialAttributes
// Size: 0x80 (Inherited: 0x60)
struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	struct TArray<struct FExpressionInput> Inputs[0x10]; // 0x60(0x10)
	struct TArray<struct FGuid> *b4ab63c25a[0x10]; // 0x70(0x10)
};

// Class Engine.*3b53fd415e
// Size: 0x98 (Inherited: 0x60)
struct U*3b53fd415e : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*12a71301fc
// Size: 0xa0 (Inherited: 0x60)
struct U*12a71301fc : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
	float Period[0x04]; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Engine.*8bc845825f
// Size: 0x150 (Inherited: 0x60)
struct U*8bc845825f : UMaterialExpression {
	struct FExpressionInput *6ef45d8685[0x38]; // 0x60(0x38)
	struct FExpressionInput *6583019691[0x38]; // 0x98(0x38)
	struct FExpressionInput *cbaafd0491[0x38]; // 0xd0(0x38)
	struct FExpressionInput *d3a46fb70e[0x38]; // 0x108(0x38)
	enum class *ff2e99f4be GeometryType; // 0x140(0x01)
	enum class *5f1bac80e6 *1efef5f8be; // 0x141(0x01)
	enum class *3fe163e133 LODType; // 0x142(0x01)
	char pad_143[0x1]; // 0x143(0x01)
	float BillboardThreshold[0x04]; // 0x144(0x04)
	bool *e114f9741e; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class Engine.*622be9b81c
// Size: 0x148 (Inherited: 0x60)
struct U*622be9b81c : UMaterialExpression {
	struct FExpressionInput A[0x38]; // 0x60(0x38)
	struct FExpressionInput B[0x38]; // 0x98(0x38)
	struct FExpressionInput Radius[0x38]; // 0xd0(0x38)
	struct FExpressionInput Hardness[0x38]; // 0x108(0x38)
	float AttenuationRadius[0x04]; // 0x140(0x04)
	float *3702dd1de6[0x04]; // 0x144(0x04)
};

// Class Engine.*dc86ce08f5
// Size: 0xa0 (Inherited: 0x60)
struct U*dc86ce08f5 : UMaterialExpression {
	struct FExpressionInput Density[0x38]; // 0x60(0x38)
	float *06fe4e6616[0x04]; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Engine.*81d2ccd3ec
// Size: 0x98 (Inherited: 0x60)
struct U*81d2ccd3ec : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*f756598ff8
// Size: 0x68 (Inherited: 0x60)
struct U*f756598ff8 : UMaterialExpression {
	char Value : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*bc21263bb9
// Size: 0x110 (Inherited: 0x60)
struct U*bc21263bb9 : UMaterialExpression {
	char DefaultValue : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FExpressionInput A[0x38]; // 0x68(0x38)
	struct FExpressionInput B[0x38]; // 0xa0(0x38)
	struct FExpressionInput Value[0x38]; // 0xd8(0x38)
};

// Class Engine.*467f311832
// Size: 0xd8 (Inherited: 0x60)
struct U*467f311832 : UMaterialExpression {
	struct FExpressionInput A[0x38]; // 0x60(0x38)
	struct FExpressionInput B[0x38]; // 0x98(0x38)
	float *5ce5bfecea[0x04]; // 0xd0(0x04)
	float *2aeeadef96[0x04]; // 0xd4(0x04)
};

// Class Engine.*7c345f6a42
// Size: 0xa0 (Inherited: 0x60)
struct U*7c345f6a42 : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
	float Period[0x04]; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Engine.*703f8d3355
// Size: 0xb8 (Inherited: 0x60)
struct U*703f8d3355 : U*9cae02a0c8 {
	struct FExpressionInput UV[0x38]; // 0x60(0x38)
	struct TArray<struct F*387a32966b> Inputs[0x10]; // 0x98(0x10)
	uint32 *b76d4888c5[0x04]; // 0xa8(0x04)
	char pad_AC[0xc]; // 0xac(0x0c)
};

// Class Engine.*f045301ce0
// Size: 0xc0 (Inherited: 0x60)
struct U*f045301ce0 : U*9cae02a0c8 {
	struct FExpressionInput UV[0x38]; // 0x60(0x38)
	struct TArray<struct F*943f7ed9d9> Inputs[0x10]; // 0x98(0x10)
	uint32 *b76d4888c5[0x04]; // 0xa8(0x04)
	char pad_AC[0x14]; // 0xac(0x14)
};

// Class Engine.*c0e67efa23
// Size: 0xf8 (Inherited: 0x60)
struct U*c0e67efa23 : U*9cae02a0c8 {
	struct FExpressionInput UV[0x38]; // 0x60(0x38)
	struct FExpressionInput *52589072bc[0x38]; // 0x98(0x38)
	struct TArray<struct F*391c978835> Inputs[0x10]; // 0xd0(0x10)
	uint32 *b76d4888c5[0x04]; // 0xe0(0x04)
	char pad_E4[0x14]; // 0xe4(0x14)
};

// Class Engine.*0bef821dd3
// Size: 0x70 (Inherited: 0x60)
struct U*0bef821dd3 : UMaterialExpression {
	struct UTexture* Texture[0x08]; // 0x60(0x08)
	enum class EMaterialSamplerType *2755a0310f; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	char IsDefaultMeshpaintTexture : 1; // 0x6c(0x01)
	char pad_6C_1 : 7; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.*a3d40e189f
// Size: 0x70 (Inherited: 0x70)
struct U*a3d40e189f : U*0bef821dd3 {
};

// Class Engine.MaterialExpressionTextureSample
// Size: 0x1e8 (Inherited: 0x70)
struct UMaterialExpressionTextureSample : U*0bef821dd3 {
	struct FExpressionInput Coordinates[0x38]; // 0x70(0x38)
	struct FExpressionInput TextureObject[0x38]; // 0xa8(0x38)
	struct FExpressionInput *2196c6e485[0x38]; // 0xe0(0x38)
	struct FExpressionInput *f98ba3e373[0x38]; // 0x118(0x38)
	struct FExpressionInput *a9a6bd32ce[0x38]; // 0x150(0x38)
	struct FExpressionInput SampleCondition[0x38]; // 0x188(0x38)
	enum class *646c5d88a8 MipValueMode; // 0x1c0(0x01)
	enum class *d1a7f8979e *b0dcbdc746; // 0x1c1(0x01)
	char pad_1C2[0x2]; // 0x1c2(0x02)
	uint32 *b76d4888c5[0x04]; // 0x1c4(0x04)
	int32 *ed068c9f9f[0x04]; // 0x1c8(0x04)
	char *112bd8e60f : 1; // 0x1cc(0x01)
	char pad_1CC_1 : 7; // 0x1cc(0x01)
	char pad_1CD[0x3]; // 0x1cd(0x03)
	bool *d3bac87334; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	struct FLinearColor DefaultValue[0x10]; // 0x1d4(0x10)
	char pad_1E4[0x4]; // 0x1e4(0x04)
};

// Class Engine.*a64f1015eb
// Size: 0x1f0 (Inherited: 0x1e8)
struct U*a64f1015eb : UMaterialExpressionTextureSample {
	char *ede4888ea5 : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
};

// Class Engine.*7739ebc78c
// Size: 0x208 (Inherited: 0x1e8)
struct U*7739ebc78c : UMaterialExpressionTextureSample {
	struct FName ParameterName[0x08]; // 0x1e8(0x08)
	struct FGuid *8f84b5e332[0x10]; // 0x1f0(0x10)
	struct FName Group[0x08]; // 0x200(0x08)
};

// Class Engine.*89b9285830
// Size: 0x208 (Inherited: 0x208)
struct U*89b9285830 : U*7739ebc78c {
};

// Class Engine.*54c410c5a3
// Size: 0x208 (Inherited: 0x208)
struct U*54c410c5a3 : U*7739ebc78c {
};

// Class Engine.*38f4ffba9f
// Size: 0x210 (Inherited: 0x208)
struct U*38f4ffba9f : U*54c410c5a3 {
	float Threshold[0x04]; // 0x208(0x04)
	enum class *a9591e27e3 Channel; // 0x20c(0x01)
	char pad_20D[0x3]; // 0x20d(0x03)
};

// Class Engine.*b9d3228703
// Size: 0x210 (Inherited: 0x208)
struct U*b9d3228703 : U*54c410c5a3 {
	char *ede4888ea5 : 1; // 0x208(0x01)
	char pad_208_1 : 7; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
};

// Class Engine.*de972e9486
// Size: 0x208 (Inherited: 0x208)
struct U*de972e9486 : U*7739ebc78c {
};

// Class Engine.*17852f4c53
// Size: 0x208 (Inherited: 0x208)
struct U*17852f4c53 : U*7739ebc78c {
};

// Class Engine.MaterialExpressionTextureCoordinate
// Size: 0x70 (Inherited: 0x60)
struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32 *1005d82c0f[0x04]; // 0x60(0x04)
	float *d840cb5194[0x04]; // 0x64(0x04)
	float *3b760a3aa1[0x04]; // 0x68(0x04)
	char UnMirrorU : 1; // 0x6c(0x01)
	char UnMirrorV : 1; // 0x6c(0x01)
	char pad_6C_2 : 6; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.*b409db7b75
// Size: 0xa0 (Inherited: 0x60)
struct U*b409db7b75 : UMaterialExpression {
	struct FExpressionInput TextureObject[0x38]; // 0x60(0x38)
	enum class EMaterialExposedTextureProperty Property; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class Engine.*b9a327b511
// Size: 0x68 (Inherited: 0x60)
struct U*b9a327b511 : UMaterialExpression {
	char *cae901abe9 : 1; // 0x60(0x01)
	char bOverride_Period : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float Period[0x04]; // 0x64(0x04)
};

// Class Engine.*9e84a2caaf
// Size: 0xa0 (Inherited: 0x60)
struct U*9e84a2caaf : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
	enum class EMaterialVectorCoordTransformSource *0a835cc450; // 0x98(0x01)
	enum class EMaterialVectorCoordTransform TransformType; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// Class Engine.*caeec4f479
// Size: 0xa0 (Inherited: 0x60)
struct U*caeec4f479 : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
	enum class EMaterialPositionTransformSource *0a835cc450; // 0x98(0x01)
	enum class EMaterialPositionTransformSource TransformType; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// Class Engine.*62f9fa94a2
// Size: 0x98 (Inherited: 0x60)
struct U*62f9fa94a2 : UMaterialExpression {
	struct FExpressionInput Input[0x38]; // 0x60(0x38)
};

// Class Engine.*59ccecf81e
// Size: 0x60 (Inherited: 0x60)
struct U*59ccecf81e : UMaterialExpression {
};

// Class Engine.MaterialExpressionVectorNoise
// Size: 0xa8 (Inherited: 0x60)
struct UMaterialExpressionVectorNoise : UMaterialExpression {
	struct FExpressionInput Position[0x38]; // 0x60(0x38)
	enum class *e2cad6ab46 *bf3bc9a617; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32 Quality[0x04]; // 0x9c(0x04)
	char *580b8e4194 : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	uint32 TileSize[0x04]; // 0xa4(0x04)
};

// Class Engine.*9ab8f175d2
// Size: 0x60 (Inherited: 0x60)
struct U*9ab8f175d2 : UMaterialExpression {
};

// Class Engine.*abc5680033
// Size: 0x60 (Inherited: 0x60)
struct U*abc5680033 : UMaterialExpression {
};

// Class Engine.*c90b70b662
// Size: 0x60 (Inherited: 0x60)
struct U*c90b70b662 : UMaterialExpression {
};

// Class Engine.*3cae586258
// Size: 0x68 (Inherited: 0x60)
struct U*3cae586258 : UMaterialExpression {
	enum class EMaterialExposedViewProperty Property; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*7790499f5a
// Size: 0x60 (Inherited: 0x60)
struct U*7790499f5a : UMaterialExpression {
};

// Class Engine.*6480a7511b
// Size: 0x68 (Inherited: 0x60)
struct U*6480a7511b : UMaterialExpression {
	enum class *03a10c8b8b *e3d7d72fe2; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.MaterialFunction
// Size: 0x68 (Inherited: 0x28)
struct UMaterialFunction : UObject {
	struct FGuid *1089ccbf97[0x10]; // 0x28(0x10)
	struct FString Description[0x10]; // 0x38(0x10)
	char bExposeToLibrary : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct UMaterialExpression*> *295206fc68[0x10]; // 0x50(0x10)
	char *c8d30dc882 : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.Material
// Size: 0xa80 (Inherited: 0x70)
struct UMaterial : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial[0x08]; // 0x70(0x08)
	struct FColorMaterialInput DiffuseColor[0x40]; // 0x78(0x40)
	struct FColorMaterialInput SpecularColor[0x40]; // 0xb8(0x40)
	struct FColorMaterialInput BaseColor[0x40]; // 0xf8(0x40)
	struct FScalarMaterialInput Metallic[0x40]; // 0x138(0x40)
	struct FScalarMaterialInput Specular[0x40]; // 0x178(0x40)
	struct FScalarMaterialInput Roughness[0x40]; // 0x1b8(0x40)
	struct FVectorMaterialInput Normal[0x48]; // 0x1f8(0x48)
	struct FColorMaterialInput EmissiveColor[0x40]; // 0x240(0x40)
	struct FScalarMaterialInput Opacity[0x40]; // 0x280(0x40)
	struct FScalarMaterialInput OpacityMask[0x40]; // 0x2c0(0x40)
	enum class EMaterialDomain MaterialDomain; // 0x300(0x01)
	enum class EBlendMode BlendMode; // 0x301(0x01)
	enum class *5c32b121c5 *2504f124f2; // 0x302(0x01)
	enum class *5f04f12a95 MaterialDecalResponse; // 0x303(0x01)
	enum class EMaterialShadingModel ShadingModel; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	float OpacityMaskClipValue[0x04]; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FVectorMaterialInput WorldPositionOffset[0x48]; // 0x310(0x48)
	struct FVectorMaterialInput WorldDisplacement[0x48]; // 0x358(0x48)
	struct FScalarMaterialInput TessellationMultiplier[0x40]; // 0x3a0(0x40)
	struct FColorMaterialInput SubsurfaceColor[0x40]; // 0x3e0(0x40)
	struct FScalarMaterialInput ClearCoat[0x40]; // 0x420(0x40)
	struct FScalarMaterialInput ClearCoatRoughness[0x40]; // 0x460(0x40)
	struct FScalarMaterialInput AmbientOcclusion[0x40]; // 0x4a0(0x40)
	struct FScalarMaterialInput Refraction[0x40]; // 0x4e0(0x40)
	struct FVector2MaterialInput *833e639604[0x48]; // 0x520(0x240)
	struct FMaterialAttributesInput MaterialAttributes[0x40]; // 0x760(0x40)
	struct FScalarMaterialInput PixelDepthOffset[0x40]; // 0x7a0(0x40)
	struct FScalarMaterialInput Temperature[0x40]; // 0x7e0(0x40)
	struct FScalarMaterialInput TemperatureAlpha[0x40]; // 0x820(0x40)
	char bPrepassMasked : 1; // 0x860(0x01)
	char *dc5dc2a990 : 1; // 0x860(0x01)
	char *239f90a4ca : 1; // 0x860(0x01)
	char *3e9b5bd67f : 1; // 0x860(0x01)
	char *171fece498 : 1; // 0x860(0x01)
	char TwoSided : 1; // 0x860(0x01)
	char DitheredLODTransition : 1; // 0x860(0x01)
	char *8f974834ba : 1; // 0x860(0x01)
	char *9386ff20f2 : 1; // 0x861(0x01)
	char *18f79a3e13 : 1; // 0x861(0x01)
	char pad_861_2 : 6; // 0x861(0x01)
	char pad_862[0x2]; // 0x862(0x02)
	int32 *7734c8c5f4[0x04]; // 0x864(0x04)
	enum class ETranslucencyLightingMode *6b49322879; // 0x868(0x01)
	char pad_869[0x3]; // 0x869(0x03)
	float *28d4855ab2[0x04]; // 0x86c(0x04)
	char *db00906fe4 : 1; // 0x870(0x01)
	char pad_870_1 : 7; // 0x870(0x01)
	char pad_871[0x3]; // 0x871(0x03)
	float *74fcff9564[0x04]; // 0x874(0x04)
	float *ed4a6e49a9[0x04]; // 0x878(0x04)
	float *e9e88e9452[0x04]; // 0x87c(0x04)
	float *f6393e1b05[0x04]; // 0x880(0x04)
	float *c0ab7c6346[0x04]; // 0x884(0x04)
	struct FLinearColor *e4d763ac22[0x10]; // 0x888(0x10)
	float TranslucentShadowStartOffset[0x04]; // 0x898(0x04)
	char *48379a9d42 : 1; // 0x89c(0x01)
	char *998fd0d3a9 : 1; // 0x89c(0x01)
	char *14093e3499 : 1; // 0x89c(0x01)
	char bUseEmissiveForDynamicAreaLighting : 1; // 0x89c(0x01)
	char bBlockGI : 1; // 0x89c(0x01)
	char *d070874a3c : 1; // 0x89c(0x01)
	char bUsedWithSkeletalMesh : 1; // 0x89c(0x01)
	char bUsedWithEditorCompositing : 1; // 0x89c(0x01)
	char bUsedWithParticleSprites : 1; // 0x89d(0x01)
	char bUsedWithBeamTrails : 1; // 0x89d(0x01)
	char bUsedWithMeshParticles : 1; // 0x89d(0x01)
	char bUsedWithNiagaraSprites : 1; // 0x89d(0x01)
	char bUsedWithNiagaraRibbons : 1; // 0x89d(0x01)
	char bUsedWithNiagaraMeshParticles : 1; // 0x89d(0x01)
	char bUsedWithStaticLighting : 1; // 0x89d(0x01)
	char bUsedWithMorphTargets : 1; // 0x89d(0x01)
	char bUsedWithSplineMeshes : 1; // 0x89e(0x01)
	char bUsedWithInstancedStaticMeshes : 1; // 0x89e(0x01)
	char bUsedWithInstancedSplineMeshes : 1; // 0x89e(0x01)
	char bUsedWithInstancedDeferredDecals : 1; // 0x89e(0x01)
	char bUsesDistortion : 1; // 0x89e(0x01)
	char bUsedWithClothing : 1; // 0x89e(0x01)
	char bUsedWithUI : 1; // 0x89e(0x01)
	char bAutomaticallySetUsageInEditor : 1; // 0x89e(0x01)
	char bFullyRough : 1; // 0x89f(0x01)
	char bUseFullPrecision : 1; // 0x89f(0x01)
	char bUseLightmapDirectionality : 1; // 0x89f(0x01)
	char bUseHQForwardReflections : 1; // 0x89f(0x01)
	char bUsePlanarForwardReflections : 1; // 0x89f(0x01)
	char bNormalCurvatureToRoughness : 1; // 0x89f(0x01)
	char pad_89F_6 : 2; // 0x89f(0x01)
	enum class *dfb56dedba D3D11TessellationMode; // 0x8a0(0x01)
	char pad_8A1[0x3]; // 0x8a1(0x03)
	char bEnableCrackFreeDisplacement : 1; // 0x8a4(0x01)
	char bEnableAdaptiveTessellation : 1; // 0x8a4(0x01)
	char pad_8A4_2 : 6; // 0x8a4(0x01)
	char pad_8A5[0x3]; // 0x8a5(0x03)
	float *05c3f97405[0x04]; // 0x8a8(0x04)
	char Wireframe : 1; // 0x8ac(0x01)
	char *80c1bd8149 : 1; // 0x8ac(0x01)
	char *f2355fcf25 : 1; // 0x8ac(0x01)
	char bApplyMaterialClipVolumes : 1; // 0x8ac(0x01)
	char pad_8AC_4 : 4; // 0x8ac(0x01)
	char pad_8AD[0x3]; // 0x8ad(0x03)
	struct F*992675a4e8 MaterialClipVolumeTypes[0x04]; // 0x8b0(0x04)
	enum class *2c04465ccd MaterialClipVolumeImportance; // 0x8b4(0x01)
	char pad_8B5[0x3]; // 0x8b5(0x03)
	float MaterialClipVolumeFadeRange[0x04]; // 0x8b8(0x04)
	char bMaterialClipVolumesUseDiscardForTranslucent : 1; // 0x8bc(0x01)
	char bIsMaterialClipVolumeWater : 1; // 0x8bc(0x01)
	char bUseMeshClipping : 1; // 0x8bc(0x01)
	char pad_8BC_3 : 5; // 0x8bc(0x01)
	char pad_8BD[0x3]; // 0x8bd(0x03)
	int32 *f3f7bbb04f[0x04]; // 0x8c0(0x04)
	int32 *ec1f50bbb3[0x04]; // 0x8c4(0x04)
	int32 *4a7b8886c6[0x04]; // 0x8c8(0x04)
	int32 *4f7e8ac40c[0x04]; // 0x8cc(0x04)
	struct TArray<struct UMaterialExpression*> Expressions[0x10]; // 0x8d0(0x10)
	struct TArray<struct F*09bdd24193> *3238fd7911[0x10]; // 0x8e0(0x10)
	struct TArray<struct F*39db2b6e80> *91304ff35c[0x10]; // 0x8f0(0x10)
	char *240b184cc3 : 1; // 0x900(0x01)
	char bIsMasked : 1; // 0x900(0x01)
	char *4ebe8fec96 : 1; // 0x900(0x01)
	char *c6f98edd93 : 1; // 0x900(0x01)
	char *415ed0360e : 1; // 0x900(0x01)
	char *deb8c68fea : 1; // 0x900(0x01)
	char *c4a0418de5 : 1; // 0x900(0x01)
	char *977924fb87 : 1; // 0x900(0x01)
	char *9ec9671fe6 : 1; // 0x901(0x01)
	char pad_901_1 : 7; // 0x901(0x01)
	char pad_902[0x2]; // 0x902(0x02)
	uint32 *ba490f5d0d[0x04]; // 0x904(0x04)
	enum class *d4a8eb9d2e BlendableLocation; // 0x908(0x01)
	char pad_909[0x3]; // 0x909(0x03)
	int32 BlendablePriority[0x04]; // 0x90c(0x04)
	bool BlendableOutputAlpha; // 0x910(0x01)
	enum class *fe3bf3bf18 *9198acc7cc; // 0x911(0x01)
	char pad_912[0x2]; // 0x912(0x02)
	float RefractionDepthBias[0x04]; // 0x914(0x04)
	struct FGuid *1089ccbf97[0x10]; // 0x918(0x10)
	char pad_928[0x148]; // 0x928(0x148)
	struct TArray<struct UTexture*> *bfbcea3bea[0x10]; // 0xa70(0x10)
};

// Class Engine.MaterialInstanceDynamic
// Size: 0x230 (Inherited: 0x1e0)
struct UMaterialInstanceDynamic : UMaterialInstance {
	char pad_1E0[0x50]; // 0x1e0(0x50)

	struct FName *6b0cc262b5(); // Function Engine.MaterialInstanceDynamic.*6b0cc262b5 // Final|Native|Public|BlueprintCallable // @ game+0x664f964
	void CopyInterpParameters(); // Function Engine.MaterialInstanceDynamic.CopyInterpParameters // Final|Native|Public // @ game+0x6647dd8
	void K2_InterpolateMaterialInstanceParams(struct UMaterialInstance** SourceB); // Function Engine.MaterialInstanceDynamic.K2_InterpolateMaterialInstanceParams // Final|Native|Public|BlueprintCallable // @ game+0x664fb70
	struct FName SetVectorParameterValue(); // Function Engine.MaterialInstanceDynamic.SetVectorParameterValue // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6654650
	void CopyParameterOverrides(); // Function Engine.MaterialInstanceDynamic.CopyParameterOverrides // Final|Native|Public|BlueprintCallable // @ game+0x6647e68
	void K2_CopyMaterialInstanceParameters(); // Function Engine.MaterialInstanceDynamic.K2_CopyMaterialInstanceParameters // Final|Native|Public|BlueprintCallable // @ game+0x664dd68
	void *333b54fd8b(struct FName* ParameterName); // Function Engine.MaterialInstanceDynamic.*333b54fd8b // Final|Native|Public|BlueprintCallable // @ game+0x6654444
	struct FName *9aadc40095(); // Function Engine.MaterialInstanceDynamic.*9aadc40095 // Final|Native|Public|BlueprintCallable // @ game+0x664fa0c
	struct FName SetScalarParameterValue(); // Function Engine.MaterialInstanceDynamic.SetScalarParameterValue // Final|Native|Public|BlueprintCallable // @ game+0x6653ff4
	void *c80a6e2058(); // Function Engine.MaterialInstanceDynamic.*c80a6e2058 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x664fab8
};

// Class Engine.MaterialParameterCollection
// Size: 0x68 (Inherited: 0x28)
struct UMaterialParameterCollection : UObject {
	struct FGuid *1089ccbf97[0x10]; // 0x28(0x10)
	struct TArray<struct F*5abf103b90> *fd0afffee3[0x10]; // 0x38(0x10)
	struct TArray<struct F*ead729b2e2> *f5b6331d28[0x10]; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class Engine.*8479b69472
// Size: 0xe8 (Inherited: 0x28)
struct U*8479b69472 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UMaterialParameterCollection* Collection[0x08]; // 0x30(0x08)
	struct UWorld* World[0x08]; // 0x38(0x08)
	char pad_40[0xa8]; // 0x40(0xa8)
};

// Class Engine.*bc0f6e7034
// Size: 0x28 (Inherited: 0x28)
struct U*bc0f6e7034 : UInterface {
};

// Class Engine.MorphTarget
// Size: 0x40 (Inherited: 0x28)
struct UMorphTarget : UObject {
	struct USkeletalMesh* *f81fd892d5[0x08]; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Engine.NavArea_Default
// Size: 0x40 (Inherited: 0x40)
struct UNavArea_Default : UNavArea {
};

// Class Engine.NavArea_LowHeight
// Size: 0x40 (Inherited: 0x40)
struct UNavArea_LowHeight : UNavArea {
};

// Class Engine.NavArea_Null
// Size: 0x40 (Inherited: 0x40)
struct UNavArea_Null : UNavArea {
};

// Class Engine.NavArea_Obstacle
// Size: 0x40 (Inherited: 0x40)
struct UNavArea_Obstacle : UNavArea {
};

// Class Engine.NavAreaMeta
// Size: 0x40 (Inherited: 0x40)
struct UNavAreaMeta : UNavArea {
};

// Class Engine.NavAreaMeta_SwitchByAgent
// Size: 0xc0 (Inherited: 0x40)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct UClass* *a61c817cc3[0x08]; // 0x40(0x08)
	struct UClass* *4475125439[0x08]; // 0x48(0x08)
	struct UClass* *62e2dc121a[0x08]; // 0x50(0x08)
	struct UClass* *b16364599f[0x08]; // 0x58(0x08)
	struct UClass* *b5c86f9869[0x08]; // 0x60(0x08)
	struct UClass* *76fbfe8b0d[0x08]; // 0x68(0x08)
	struct UClass* *5409baac79[0x08]; // 0x70(0x08)
	struct UClass* *c76dc43396[0x08]; // 0x78(0x08)
	struct UClass* *9462384225[0x08]; // 0x80(0x08)
	struct UClass* *7563a265d9[0x08]; // 0x88(0x08)
	struct UClass* *a91694306c[0x08]; // 0x90(0x08)
	struct UClass* *b1df057c01[0x08]; // 0x98(0x08)
	struct UClass* *e8ad46a0f0[0x08]; // 0xa0(0x08)
	struct UClass* *702b75850a[0x08]; // 0xa8(0x08)
	struct UClass* *7e86128b57[0x08]; // 0xb0(0x08)
	struct UClass* *cf355c90c4[0x08]; // 0xb8(0x08)
};

// Class Engine.NavCollision
// Size: 0x110 (Inherited: 0x28)
struct UNavCollision : UObject {
	char pad_28[0x50]; // 0x28(0x50)
	struct TArray<struct F*db04e44ac0> *ef5d447fba[0x10]; // 0x78(0x10)
	struct TArray<struct F*5b1244bed2> *85416495f0[0x10]; // 0x88(0x10)
	struct UClass* AreaClass[0x08]; // 0x98(0x08)
	char bIsDynamicObstacle : 1; // 0xa0(0x01)
	char bGatherConvexGeometry : 1; // 0xa0(0x01)
	char pad_A0_2 : 6; // 0xa0(0x01)
	char pad_A1[0x6f]; // 0xa1(0x6f)
};

// Class Engine.*d7d1d6aa13
// Size: 0x28 (Inherited: 0x28)
struct U*d7d1d6aa13 : UInterface {
};

// Class Engine.*cfe9bd80c3
// Size: 0x30 (Inherited: 0x28)
struct U*cfe9bd80c3 : UObject {
	struct FName *d12dfd573a[0x08]; // 0x28(0x08)
};

// Class Engine.*e00977eebd
// Size: 0x40 (Inherited: 0x30)
struct U*e00977eebd : U*cfe9bd80c3 {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Engine.NavigationPath
// Size: 0xc0 (Inherited: 0x28)
struct UNavigationPath : UObject {
	struct FMulticastDelegate PathUpdatedNotifier[0x10]; // 0x28(0x10)
	struct TArray<struct FVector> PathPoints[0x10]; // 0x38(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x48(0x01)
	char pad_49[0x77]; // 0x49(0x77)

	void *3b7bd4737a(); // Function Engine.NavigationPath.*3b7bd4737a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xaca7dc
	void *7c99165a0b(); // Function Engine.NavigationPath.*7c99165a0b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664a62c
	void *bae6f9f219(); // Function Engine.NavigationPath.*bae6f9f219 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664d904
	void *4e19fa8811(); // Function Engine.NavigationPath.*4e19fa8811 // Final|Native|Public|BlueprintCallable // @ game+0x6648bc0
	void *8bba30c587(); // Function Engine.NavigationPath.*8bba30c587 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664b738
	void *ea7de6d169(bool bShouldDrawDebugData); // Function Engine.NavigationPath.*ea7de6d169 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66489e0
	void IsValid(); // Function Engine.NavigationPath.IsValid // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664dbac
	void GetPathLength(); // Function Engine.NavigationPath.GetPathLength // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x664b9c8
};

// Class Engine.*6ecf0d25e9
// Size: 0x28 (Inherited: 0x28)
struct U*6ecf0d25e9 : UInterface {
};

// Class Engine.*369f623cd0
// Size: 0x48 (Inherited: 0x48)
struct U*369f623cd0 : U*1a2c4a78a0 {
};

// Class Engine.*3960f0775b
// Size: 0x50 (Inherited: 0x50)
struct U*3960f0775b : U*75c8520f7f {
};

// Class Engine.*38b546a0ac
// Size: 0x28 (Inherited: 0x28)
struct U*38b546a0ac : UInterface {
};

// Class Engine.*2d93b94eb8
// Size: 0x370 (Inherited: 0xe0)
struct U*2d93b94eb8 : UPackageMap {
	char pad_E0[0x290]; // 0xe0(0x290)
};

// Class Engine.DemoNetConnection
// Size: 0x659b8 (Inherited: 0x65848)
struct UDemoNetConnection : UNetConnection {
	char pad_65848[0x20]; // 0x65848(0x20)
	struct FStringClassReference OverrideActorChannel[0x10]; // 0x65868(0x10)
	char pad_65878[0x140]; // 0x65878(0x140)
};

// Class Engine.*69249d86d9
// Size: 0x28 (Inherited: 0x28)
struct U*69249d86d9 : UInterface {
};

// Class Engine.*98a08b4821
// Size: 0x98 (Inherited: 0x28)
struct U*98a08b4821 : UObject {
	struct TMap<struct FName, struct F*b7b64ce1c8> NodeMapping[0x50]; // 0x28(0x50)
	struct UBlueprint* *2f52ec8cb4[0x20]; // 0x78(0x20)
};

// Class Engine.ObjectLibrary
// Size: 0x160 (Inherited: 0x28)
struct UObjectLibrary : UObject {
	struct UClass* *f29bcf9ff1[0x08]; // 0x28(0x08)
	bool bHasBlueprintClasses; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct UObject*> Objects[0x10]; // 0x38(0x10)
	struct TArray<struct UObject*> *f37ac68b15[0x10]; // 0x48(0x10)
	bool *b30efaa1d5; // 0x58(0x01)
	bool *5c2273bd05; // 0x59(0x01)
	char pad_5A[0x106]; // 0x5a(0x106)
};

// Class Engine.*7c448e30ae
// Size: 0x38 (Inherited: 0x28)
struct U*7c448e30ae : UObject {
	struct TArray<struct UObject*> *58b3be54d9[0x10]; // 0x28(0x10)
};

// Class Engine.*c3bd707d45
// Size: 0x28 (Inherited: 0x28)
struct U*c3bd707d45 : UObject {

	void Activate(); // Function Engine.*c3bd707d45.Activate // Native|Public|BlueprintCallable // @ game+0x58d1c6c
};

// Class Engine.*efa98c076d
// Size: 0x28 (Inherited: 0x28)
struct U*efa98c076d : UObject {
};

// Class Engine.*07115daa65
// Size: 0x28 (Inherited: 0x28)
struct U*07115daa65 : UObject {
};

// Class Engine.ParticleEmitter
// Size: 0x180 (Inherited: 0x28)
struct UParticleEmitter : UObject {
	struct FName *5935fd0127[0x08]; // 0x28(0x08)
	int32 *5408ba3fd6[0x04]; // 0x30(0x04)
	enum class *a2a9703ae6 *6060e416b7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct TArray<struct UParticleLODLevel*> *faa9975f2c[0x10]; // 0x38(0x10)
	char *4097e6e36e : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32 *9faf86d275[0x04]; // 0x4c(0x04)
	int32 *b5cd25b667[0x04]; // 0x50(0x04)
	float MediumDetailSpawnRateScale[0x04]; // 0x54(0x04)
	float *7739037275[0x04]; // 0x58(0x04)
	enum class *8d98cbd81d DetailMode; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	char *7b6e6cd624 : 1; // 0x60(0x01)
	char *5ac56b48b5 : 1; // 0x60(0x01)
	char *48803fb991 : 1; // 0x60(0x01)
	char *2056c3fcc3 : 1; // 0x60(0x01)
	char pad_60_4 : 4; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	enum class EParticleSignificanceLevel *4610aa343a; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float *910e90bf29[0x04]; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct U*147426ac7d* *147426ac7d[0x08]; // 0x70(0x08)
	char pad_78[0x108]; // 0x78(0x108)
};

// Class Engine.*ea958a5d72
// Size: 0x180 (Inherited: 0x180)
struct U*ea958a5d72 : UParticleEmitter {
};

// Class Engine.ParticleLODLevel
// Size: 0xb8 (Inherited: 0x28)
struct UParticleLODLevel : UObject {
	int32 Level[0x04]; // 0x28(0x04)
	char bEnabled : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct UParticleModuleRequired* *b977c16f5c[0x08]; // 0x30(0x08)
	struct TArray<struct UParticleModule*> Modules[0x10]; // 0x38(0x10)
	struct UParticleModuleTypeDataBase* *75899ccbd2[0x08]; // 0x48(0x08)
	struct UParticleModuleSpawn* *01156e8659[0x08]; // 0x50(0x08)
	struct UParticleModuleEventGenerator* *bdb5d04534[0x08]; // 0x58(0x08)
	struct TArray<struct U*001fe7ab63*> *981d8e68c5[0x10]; // 0x60(0x10)
	struct TArray<struct UParticleModule*> *d8bc2b5830[0x10]; // 0x70(0x10)
	struct TArray<struct UParticleModule*> *6ba65a61e9[0x10]; // 0x80(0x10)
	struct TArray<struct UParticleModuleOrbit*> *61603e5c21[0x10]; // 0x90(0x10)
	struct TArray<struct UParticleModuleEventReceiverBase*> *7414be95aa[0x10]; // 0xa0(0x10)
	char *4097e6e36e : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	int32 *9faf86d275[0x04]; // 0xb4(0x04)
};

// Class Engine.ParticleModule
// Size: 0x30 (Inherited: 0x28)
struct UParticleModule : UObject {
	char *755680cc96 : 1; // 0x28(0x01)
	char *8e70753fdc : 1; // 0x28(0x01)
	char *dd8f6213cd : 1; // 0x28(0x01)
	char *3fe1f6122b : 1; // 0x28(0x01)
	char *94e0a5042c : 1; // 0x28(0x01)
	char *0b926b76ff : 1; // 0x28(0x01)
	char *18a222fa8f : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ca105a880c : 1; // 0x29(0x01)
	char *1d7a43e87d : 1; // 0x29(0x01)
	char *e22cfa8036 : 1; // 0x29(0x01)
	char *4e36451074 : 1; // 0x29(0x01)
	char pad_29_4 : 4; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	bool *6ab27fb7d9; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// Class Engine.*bbc41222bb
// Size: 0x38 (Inherited: 0x30)
struct U*bbc41222bb : UParticleModule {
	char *ff405586d1 : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.ParticleModuleAcceleration
// Size: 0x90 (Inherited: 0x38)
struct UParticleModuleAcceleration : U*bbc41222bb {
	struct FRawDistributionVector Acceleration[0x50]; // 0x38(0x50)
	char *0e0cbecb01 : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*1f0339f1ab
// Size: 0x48 (Inherited: 0x38)
struct U*1f0339f1ab : U*bbc41222bb {
	struct FVector Acceleration[0x0c]; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.ParticleModuleAccelerationDrag
// Size: 0x78 (Inherited: 0x38)
struct UParticleModuleAccelerationDrag : U*bbc41222bb {
	struct U*ca563f945f* DragCoefficient[0x08]; // 0x38(0x08)
	struct F*1273267ee1 *9350ee5218[0x38]; // 0x40(0x38)
};

// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// Size: 0x78 (Inherited: 0x38)
struct UParticleModuleAccelerationDragScaleOverLife : U*bbc41222bb {
	struct U*ca563f945f* DragScale[0x08]; // 0x38(0x08)
	struct F*1273267ee1 *3da1626500[0x38]; // 0x40(0x38)
};

// Class Engine.ParticleModuleAccelerationOverLifetime
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleAccelerationOverLifetime : U*bbc41222bb {
	struct FRawDistributionVector *6e168b0104[0x50]; // 0x38(0x50)
};

// Class Engine.*63c6edc2d2
// Size: 0x30 (Inherited: 0x30)
struct U*63c6edc2d2 : UParticleModule {
};

// Class Engine.ParticleModuleAttractorLine
// Size: 0xb8 (Inherited: 0x30)
struct UParticleModuleAttractorLine : U*63c6edc2d2 {
	struct FVector *c22c14e652[0x0c]; // 0x30(0x0c)
	struct FVector *e57c40697f[0x0c]; // 0x3c(0x0c)
	struct F*1273267ee1 Range[0x38]; // 0x48(0x38)
	struct F*1273267ee1 Strength[0x38]; // 0x80(0x38)
};

// Class Engine.ParticleModuleAttractorParticle
// Size: 0xc0 (Inherited: 0x30)
struct UParticleModuleAttractorParticle : U*63c6edc2d2 {
	struct FName *5935fd0127[0x08]; // 0x30(0x08)
	struct F*1273267ee1 Range[0x38]; // 0x38(0x38)
	char *3284031223 : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct F*1273267ee1 Strength[0x38]; // 0x78(0x38)
	char *a1338929d9 : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	enum class *b03a41ca16 *82c726fc3e; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	char *2f0e10d8b5 : 1; // 0xb8(0x01)
	char *3f6cd48811 : 1; // 0xb8(0x01)
	char pad_B8_2 : 6; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 *5517b164b3[0x04]; // 0xbc(0x04)
};

// Class Engine.ParticleModuleAttractorPoint
// Size: 0xf8 (Inherited: 0x30)
struct UParticleModuleAttractorPoint : U*63c6edc2d2 {
	struct FRawDistributionVector Position[0x50]; // 0x30(0x50)
	struct F*1273267ee1 Range[0x38]; // 0x80(0x38)
	struct F*1273267ee1 Strength[0x38]; // 0xb8(0x38)
	char *be8e88e4e4 : 1; // 0xf0(0x01)
	char *a1338929d9 : 1; // 0xf0(0x01)
	char *8ac8411d59 : 1; // 0xf0(0x01)
	char *06fbe1ec8d : 1; // 0xf0(0x01)
	char *e055dae19a : 1; // 0xf0(0x01)
	char *f3be325c3a : 1; // 0xf0(0x01)
	char *bac3920f47 : 1; // 0xf0(0x01)
	char *8124c492db : 1; // 0xf0(0x01)
	char *2b560567c8 : 1; // 0xf1(0x01)
	char *47682ad310 : 1; // 0xf1(0x01)
	char pad_F1_2 : 6; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
};

// Class Engine.ParticleModuleAttractorPointGravity
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleAttractorPointGravity : U*63c6edc2d2 {
	struct FVector Position[0x0c]; // 0x30(0x0c)
	float Radius[0x04]; // 0x3c(0x04)
	struct U*ca563f945f* Strength[0x08]; // 0x40(0x08)
	struct F*1273267ee1 *0ee663bf63[0x38]; // 0x48(0x38)
};

// Class Engine.ParticleModuleBeamBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleBeamBase : UParticleModule {
};

// Class Engine.*5fe9b931c7
// Size: 0x120 (Inherited: 0x30)
struct U*5fe9b931c7 : UParticleModuleBeamBase {
	enum class *3993b6d145 *a2e376e4e5; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct F*592bece9b0 *0536b76b13[0x04]; // 0x34(0x04)
	struct FRawDistributionVector Position[0x50]; // 0x38(0x50)
	struct F*592bece9b0 *8df5369cee[0x04]; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FRawDistributionVector Tangent[0x50]; // 0x90(0x50)
	char *6a3986ba75 : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct F*592bece9b0 *4010fb9fa9[0x04]; // 0xe4(0x04)
	struct F*1273267ee1 Strength[0x38]; // 0xe8(0x38)
};

// Class Engine.*20b59b7fd0
// Size: 0x1b8 (Inherited: 0x30)
struct U*20b59b7fd0 : UParticleModuleBeamBase {
	char *c5c808a9e7 : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 Frequency[0x04]; // 0x34(0x04)
	int32 *8f37053fef[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FRawDistributionVector *f979e63074[0x50]; // 0x40(0x50)
	struct F*1273267ee1 *78aef3ac36[0x38]; // 0x90(0x38)
	char *8b8d8f222b : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FRawDistributionVector *2705623c4f[0x50]; // 0xd0(0x50)
	char *88213c02c0 : 1; // 0x120(0x01)
	char pad_120_1 : 7; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float *81197adadc[0x04]; // 0x124(0x04)
	char *c11fea943f : 1; // 0x128(0x01)
	char *769e2ec99a : 1; // 0x128(0x01)
	char pad_128_2 : 6; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float *e90e10cff1[0x04]; // 0x12c(0x04)
	float *b10780c6a2[0x04]; // 0x130(0x04)
	char *742d0b7f96 : 1; // 0x134(0x01)
	char pad_134_1 : 7; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	struct F*1273267ee1 *1b79ec8143[0x38]; // 0x138(0x38)
	int32 NoiseTessellation[0x04]; // 0x170(0x04)
	char *d3de9c4396 : 1; // 0x174(0x01)
	char pad_174_1 : 7; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	float *8f29f4ce4a[0x04]; // 0x178(0x04)
	char *a516ad2f26 : 1; // 0x17c(0x01)
	char pad_17C_1 : 7; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct F*1273267ee1 NoiseScale[0x38]; // 0x180(0x38)
};

// Class Engine.*8b38096320
// Size: 0x138 (Inherited: 0x30)
struct U*8b38096320 : UParticleModuleBeamBase {
	enum class *522518234f *4f0bf355a7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FName SourceName[0x08]; // 0x38(0x08)
	char *6485d8982a : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FRawDistributionVector Source[0x50]; // 0x48(0x50)
	char *b07b06aedf : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	enum class *cf7840b2a1 *72a394235c; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	struct FRawDistributionVector *d5a4938289[0x50]; // 0xa0(0x50)
	char *e7a0592334 : 1; // 0xf0(0x01)
	char pad_F0_1 : 7; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct F*1273267ee1 *1308a65ed3[0x38]; // 0xf8(0x38)
	char *c97350649a : 1; // 0x130(0x01)
	char pad_130_1 : 7; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
};

// Class Engine.*29b4e2e572
// Size: 0x138 (Inherited: 0x30)
struct U*29b4e2e572 : UParticleModuleBeamBase {
	enum class *522518234f *a2eada52ef; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FName TargetName[0x08]; // 0x38(0x08)
	struct FRawDistributionVector Target[0x50]; // 0x40(0x50)
	char *b2457d17b3 : 1; // 0x90(0x01)
	char *652d1345d8 : 1; // 0x90(0x01)
	char pad_90_2 : 6; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	enum class *cf7840b2a1 *2d71512f58; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct FRawDistributionVector *17a520bdc7[0x50]; // 0x98(0x50)
	char *b09b3b11ff : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct F*1273267ee1 *26fa4a6e7c[0x38]; // 0xf0(0x38)
	char *6f55b57d53 : 1; // 0x128(0x01)
	char pad_128_1 : 7; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float *4a3f35b959[0x04]; // 0x12c(0x04)
	char pad_130[0x8]; // 0x130(0x08)
};

// Class Engine.ParticleModuleCameraBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleCameraBase : UParticleModule {
};

// Class Engine.*01fa96a93e
// Size: 0x70 (Inherited: 0x30)
struct U*01fa96a93e : UParticleModuleCameraBase {
	struct F*1273267ee1 *1a7b57a0c9[0x38]; // 0x30(0x38)
	char *f78a3ebd1d : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	enum class *95fb392733 *23c4f6afbc; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.*0b1a1619c5
// Size: 0x30 (Inherited: 0x30)
struct U*0b1a1619c5 : UParticleModule {
};

// Class Engine.ParticleModuleCollision
// Size: 0x1b8 (Inherited: 0x30)
struct UParticleModuleCollision : U*0b1a1619c5 {
	struct FRawDistributionVector *c4086c6841[0x50]; // 0x30(0x50)
	struct FRawDistributionVector *47d3bedea0[0x50]; // 0x80(0x50)
	struct F*1273267ee1 *7fc869eaab[0x38]; // 0xd0(0x38)
	enum class *0aea19a5c2 *ad69b14877; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<enum class EObjectTypeQuery> *3ca7dc95fd[0x10]; // 0x110(0x10)
	char pad_120[0x8]; // 0x120(0x08)
	char *8aa224a117 : 1; // 0x128(0x01)
	char *9fd4ebbd0a : 1; // 0x128(0x01)
	char pad_128_2 : 6; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct F*1273267ee1 ParticleMass[0x38]; // 0x130(0x38)
	float *95dc229051[0x04]; // 0x168(0x04)
	char *788404c810 : 1; // 0x16c(0x01)
	char *f39d25f58a : 1; // 0x16c(0x01)
	char pad_16C_2 : 6; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	float *fd084e1b28[0x04]; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct F*1273267ee1 *48dfe54a4a[0x38]; // 0x178(0x38)
	char *2bd5793ecb : 1; // 0x1b0(0x01)
	char *5627c422f4 : 1; // 0x1b0(0x01)
	char *4acdac58d3 : 1; // 0x1b0(0x01)
	char pad_1B0_3 : 5; // 0x1b0(0x01)
	char pad_1B1[0x3]; // 0x1b1(0x03)
	float *ed77d9cd44[0x04]; // 0x1b4(0x04)
};

// Class Engine.ParticleModuleCollisionGPU
// Size: 0xb8 (Inherited: 0x30)
struct UParticleModuleCollisionGPU : U*0b1a1619c5 {
	struct F*1273267ee1 *971d780c13[0x38]; // 0x30(0x38)
	struct F*1273267ee1 ResilienceScaleOverLife[0x38]; // 0x68(0x38)
	float Friction[0x04]; // 0xa0(0x04)
	float *159bd7544e[0x04]; // 0xa4(0x04)
	float *304b88e59b[0x04]; // 0xa8(0x04)
	float RadiusScale[0x04]; // 0xac(0x04)
	float *d3e020f589[0x04]; // 0xb0(0x04)
	enum class EParticleCollisionResponse Response; // 0xb4(0x01)
	enum class EParticleCollisionMode *bee0f29f88; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
};

// Class Engine.*a81a2b88ac
// Size: 0x30 (Inherited: 0x30)
struct U*a81a2b88ac : UParticleModule {
};

// Class Engine.*19674bc6dc
// Size: 0xc0 (Inherited: 0x30)
struct U*19674bc6dc : U*a81a2b88ac {
	struct FRawDistributionVector *11a75a6a78[0x50]; // 0x30(0x50)
	struct F*1273267ee1 *228f5c757d[0x38]; // 0x80(0x38)
	char bClampAlpha : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class Engine.*a550017ac2
// Size: 0xe0 (Inherited: 0xc0)
struct U*a550017ac2 : U*19674bc6dc {
	struct F*f391bfd93e *ac8c892e8e[0x20]; // 0xc0(0x20)
};

// Class Engine.*56d1f902b5
// Size: 0xc0 (Inherited: 0x30)
struct U*56d1f902b5 : U*a81a2b88ac {
	struct FRawDistributionVector *e2bd1fceb7[0x50]; // 0x30(0x50)
	struct F*1273267ee1 *19a0b5b08f[0x38]; // 0x80(0x38)
	char bClampAlpha : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class Engine.*8ac4a2d6c2
// Size: 0xc0 (Inherited: 0x30)
struct U*8ac4a2d6c2 : U*a81a2b88ac {
	struct FRawDistributionVector *e1f58196a2[0x50]; // 0x30(0x50)
	struct F*1273267ee1 *29674aaf03[0x38]; // 0x80(0x38)
	char *fa6ef8cdbe : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class Engine.*c23c46cef6
// Size: 0x30 (Inherited: 0x30)
struct U*c23c46cef6 : UParticleModule {
};

// Class Engine.ParticleModuleEventGenerator
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleEventGenerator : U*c23c46cef6 {
	struct TArray<struct F*0b5582c288> Events[0x10]; // 0x30(0x10)
};

// Class Engine.ParticleModuleEventReceiverBase
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleEventReceiverBase : U*c23c46cef6 {
	enum class EParticleEventType *80398bd545; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FName EventName[0x08]; // 0x38(0x08)
};

// Class Engine.*7ce33bc5c8
// Size: 0x48 (Inherited: 0x40)
struct U*7ce33bc5c8 : UParticleModuleEventReceiverBase {
	char *7b6e89a0ce : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.*aaf2a769bc
// Size: 0xe8 (Inherited: 0x40)
struct U*aaf2a769bc : UParticleModuleEventReceiverBase {
	struct F*1273267ee1 SpawnCount[0x38]; // 0x40(0x38)
	char *8cffd635bf : 1; // 0x78(0x01)
	char *79b7b7ff29 : 1; // 0x78(0x01)
	char *969192149d : 1; // 0x78(0x01)
	char pad_78_3 : 5; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FRawDistributionVector *ae200ffadf[0x50]; // 0x80(0x50)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials[0x10]; // 0xd0(0x10)
	char *7c3048ef77 : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
};

// Class Engine.ParticleModuleKillBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleKillBase : UParticleModule {
};

// Class Engine.*68d957a05d
// Size: 0xd8 (Inherited: 0x30)
struct U*68d957a05d : UParticleModuleKillBase {
	struct FRawDistributionVector *587a35facf[0x50]; // 0x30(0x50)
	struct FRawDistributionVector *63e147e59d[0x50]; // 0x80(0x50)
	char *b4e3a47a64 : 1; // 0xd0(0x01)
	char *ae85eb74ce : 1; // 0xd0(0x01)
	char *3c07417103 : 1; // 0xd0(0x01)
	char pad_D0_3 : 5; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// Class Engine.*c4926fff1a
// Size: 0x70 (Inherited: 0x30)
struct U*c4926fff1a : UParticleModuleKillBase {
	struct F*1273267ee1 Height[0x38]; // 0x30(0x38)
	char *b4e3a47a64 : 1; // 0x68(0x01)
	char *f3e30d7388 : 1; // 0x68(0x01)
	char *3eff14b255 : 1; // 0x68(0x01)
	char pad_68_3 : 5; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*7aa1ad1432
// Size: 0x30 (Inherited: 0x30)
struct U*7aa1ad1432 : UParticleModule {
};

// Class Engine.*1ff74864aa
// Size: 0x68 (Inherited: 0x30)
struct U*1ff74864aa : U*7aa1ad1432 {
	struct F*1273267ee1 LifeTime[0x38]; // 0x30(0x38)
};

// Class Engine.*76ef8bbbe0
// Size: 0x88 (Inherited: 0x68)
struct U*76ef8bbbe0 : U*1ff74864aa {
	struct F*f391bfd93e *ac8c892e8e[0x20]; // 0x68(0x20)
};

// Class Engine.ParticleModuleLightBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleLightBase : UParticleModule {
};

// Class Engine.*b7f4c89576
// Size: 0x148 (Inherited: 0x30)
struct U*b7f4c89576 : UParticleModuleLightBase {
	bool bUseInverseSquaredFalloff; // 0x30(0x01)
	bool *ebb822a5b0; // 0x31(0x01)
	bool *f2ac85a805; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	float *a7dc5a1dd2[0x04]; // 0x34(0x04)
	struct FRawDistributionVector *e1f58196a2[0x50]; // 0x38(0x50)
	struct F*1273267ee1 *2f05bdbc8a[0x38]; // 0x88(0x38)
	struct F*1273267ee1 RadiusScale[0x38]; // 0xc0(0x38)
	struct F*1273267ee1 *6fd108e3c6[0x38]; // 0xf8(0x38)
	struct FLightingChannels LightingChannels[0x03]; // 0x130(0x03)
	char pad_133[0x1]; // 0x133(0x01)
	float VolumetricScatteringIntensity[0x04]; // 0x134(0x04)
	bool *94177f4d8c; // 0x138(0x01)
	bool *85e713edef; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
	struct U*eafb25fbf7* IESTexture[0x08]; // 0x140(0x08)
};

// Class Engine.*b230987fba
// Size: 0x168 (Inherited: 0x148)
struct U*b230987fba : U*b7f4c89576 {
	struct F*f391bfd93e *ac8c892e8e[0x20]; // 0x148(0x20)
};

// Class Engine.*01a79b3453
// Size: 0x30 (Inherited: 0x30)
struct U*01a79b3453 : UParticleModule {
};

// Class Engine.*acdc6ae6c6
// Size: 0x88 (Inherited: 0x30)
struct U*acdc6ae6c6 : U*01a79b3453 {
	struct FRawDistributionVector StartLocation[0x50]; // 0x30(0x50)
	float *9a94befc69[0x04]; // 0x80(0x04)
	float *c88430dd63[0x04]; // 0x84(0x04)
};

// Class Engine.*52daf3bf5f
// Size: 0xa8 (Inherited: 0x88)
struct U*52daf3bf5f : U*acdc6ae6c6 {
	struct F*f391bfd93e *ac8c892e8e[0x20]; // 0x88(0x20)
};

// Class Engine.*8ee3e679dd
// Size: 0x88 (Inherited: 0x88)
struct U*8ee3e679dd : U*acdc6ae6c6 {
};

// Class Engine.*897f5c3e73
// Size: 0xa8 (Inherited: 0x88)
struct U*897f5c3e73 : U*8ee3e679dd {
	struct F*f391bfd93e *ac8c892e8e[0x20]; // 0x88(0x20)
};

// Class Engine.*0c8c790543
// Size: 0x70 (Inherited: 0x30)
struct U*0c8c790543 : U*01a79b3453 {
	enum class *f16a7c5a2e SourceType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector *26dc079b46[0x0c]; // 0x34(0x0c)
	struct TArray<struct F*4c1e1de929> *cc89e445a7[0x10]; // 0x40(0x10)
	enum class *866f576d23 *82c726fc3e; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	char *ab8288fc1d : 1; // 0x54(0x01)
	char *29c2f73dc2 : 1; // 0x54(0x01)
	char *a87be2439e : 1; // 0x54(0x01)
	char pad_54_3 : 5; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float *ae200ffadf[0x04]; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FName *0569618a84[0x08]; // 0x60(0x08)
	int32 *fe0df1506e[0x04]; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.ParticleModuleLocationDirect
// Size: 0x170 (Inherited: 0x30)
struct UParticleModuleLocationDirect : U*01a79b3453 {
	struct FRawDistributionVector Location[0x50]; // 0x30(0x50)
	struct FRawDistributionVector *34f1a04888[0x50]; // 0x80(0x50)
	struct FRawDistributionVector ScaleFactor[0x50]; // 0xd0(0x50)
	struct FRawDistributionVector Direction[0x50]; // 0x120(0x50)
};

// Class Engine.*82c43ef2f7
// Size: 0x50 (Inherited: 0x30)
struct U*82c43ef2f7 : U*01a79b3453 {
	struct FName *5935fd0127[0x08]; // 0x30(0x08)
	enum class *a4e31c534c *82c726fc3e; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	char *4b7ed3dc38 : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float *4c70186065[0x04]; // 0x40(0x04)
	char *3f23caf56c : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float *86da1abd9c[0x04]; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.ParticleModuleLocationEmitterDirect
// Size: 0x38 (Inherited: 0x30)
struct UParticleModuleLocationEmitterDirect : U*01a79b3453 {
	struct FName *5935fd0127[0x08]; // 0x30(0x08)
};

// Class Engine.ParticleModuleLocationPrimitiveBase
// Size: 0xc0 (Inherited: 0x30)
struct UParticleModuleLocationPrimitiveBase : U*01a79b3453 {
	char *e055dae19a : 1; // 0x30(0x01)
	char *f3be325c3a : 1; // 0x30(0x01)
	char *bac3920f47 : 1; // 0x30(0x01)
	char *8124c492db : 1; // 0x30(0x01)
	char *2b560567c8 : 1; // 0x30(0x01)
	char *47682ad310 : 1; // 0x30(0x01)
	char *bd11b272d4 : 1; // 0x30(0x01)
	char Velocity : 1; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct F*1273267ee1 *d824a46a33[0x38]; // 0x38(0x38)
	struct FRawDistributionVector StartLocation[0x50]; // 0x70(0x50)
};

// Class Engine.*ed0abc2183
// Size: 0x140 (Inherited: 0xc0)
struct U*ed0abc2183 : UParticleModuleLocationPrimitiveBase {
	char *f79a72d9b1 : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct F*1273267ee1 *e6a213b84d[0x38]; // 0xc8(0x38)
	struct F*1273267ee1 *94fe32a6fd[0x38]; // 0x100(0x38)
	enum class *64254ef5b7 *7810323b96; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
};

// Class Engine.*0cdc6d9442
// Size: 0x160 (Inherited: 0x140)
struct U*0cdc6d9442 : U*ed0abc2183 {
	struct F*f391bfd93e *ac8c892e8e[0x20]; // 0x140(0x20)
};

// Class Engine.*a6224193ec
// Size: 0xf8 (Inherited: 0xc0)
struct U*a6224193ec : UParticleModuleLocationPrimitiveBase {
	struct F*1273267ee1 *e6a213b84d[0x38]; // 0xc0(0x38)
};

// Class Engine.*cd6e7cd941
// Size: 0x118 (Inherited: 0xf8)
struct U*cd6e7cd941 : U*a6224193ec {
	struct F*f391bfd93e *ac8c892e8e[0x20]; // 0xf8(0x20)
};

// Class Engine.*af58f46e2a
// Size: 0x128 (Inherited: 0x30)
struct U*af58f46e2a : U*01a79b3453 {
	struct FRawDistributionVector StartOffset[0x50]; // 0x30(0x50)
	struct F*1273267ee1 Height[0x38]; // 0x80(0x38)
	struct F*1273267ee1 Angle[0x38]; // 0xb8(0x38)
	struct F*1273267ee1 Thickness[0x38]; // 0xf0(0x38)
};

// Class Engine.*bb558e1250
// Size: 0x90 (Inherited: 0x30)
struct U*bb558e1250 : U*01a79b3453 {
	enum class *3f8ea1db26 SourceType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector *26dc079b46[0x0c]; // 0x34(0x0c)
	char *ab8288fc1d : 1; // 0x40(0x01)
	char *29c2f73dc2 : 1; // 0x40(0x01)
	char *a87be2439e : 1; // 0x40(0x01)
	char pad_40_3 : 5; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float *ae200ffadf[0x04]; // 0x44(0x04)
	struct FName *0569618a84[0x08]; // 0x48(0x08)
	struct TArray<struct FName> *b955eaa1e9[0x10]; // 0x50(0x10)
	char *6c3f763d2e : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FVector *d701169d9e[0x0c]; // 0x64(0x0c)
	float NormalCheckToleranceDegrees[0x04]; // 0x70(0x04)
	float *abf16ae3b2[0x04]; // 0x74(0x04)
	struct TArray<int32> *b4d97bde99[0x10]; // 0x78(0x10)
	char *c012618813 : 1; // 0x88(0x01)
	char *55df86bab6 : 1; // 0x88(0x01)
	char pad_88_2 : 6; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	uint32 *01aa21081b[0x04]; // 0x8c(0x04)
};

// Class Engine.*f4e761e260
// Size: 0x38 (Inherited: 0x30)
struct U*f4e761e260 : U*01a79b3453 {
	struct FVector2D *8d2abf545a[0x08]; // 0x30(0x08)
};

// Class Engine.ParticleModuleSourceMovement
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleSourceMovement : U*01a79b3453 {
	struct FRawDistributionVector *3664a99067[0x50]; // 0x30(0x50)
};

// Class Engine.*47fe4af8b4
// Size: 0x30 (Inherited: 0x30)
struct U*47fe4af8b4 : UParticleModule {
};

// Class Engine.ParticleModuleMeshMaterial
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleMeshMaterial : U*47fe4af8b4 {
	struct TArray<struct UMaterialInterface*> *ff566008a8[0x10]; // 0x30(0x10)
};

// Class Engine.*b66d77120b
// Size: 0x38 (Inherited: 0x30)
struct U*b66d77120b : UParticleModule {
	char *2292a498ce : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.ParticleModuleOrbit
// Size: 0x148 (Inherited: 0x38)
struct UParticleModuleOrbit : U*b66d77120b {
	enum class *5dd05bde88 *6fc47c5c07; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FRawDistributionVector OffsetAmount[0x50]; // 0x40(0x50)
	struct F*e7860b0faf *f3b91d5624[0x04]; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FRawDistributionVector RotationAmount[0x50]; // 0x98(0x50)
	struct F*e7860b0faf *b475530496[0x04]; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FRawDistributionVector RotationRateAmount[0x50]; // 0xf0(0x50)
	struct F*e7860b0faf *18a8d7906e[0x04]; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
};

// Class Engine.*2c090c8189
// Size: 0x30 (Inherited: 0x30)
struct U*2c090c8189 : UParticleModule {
};

// Class Engine.*c5ebfc8936
// Size: 0x38 (Inherited: 0x30)
struct U*c5ebfc8936 : U*2c090c8189 {
	enum class *3f95a333e8 LockAxisFlags; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.ParticleModuleParameterBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleParameterBase : UParticleModule {
};

// Class Engine.*ea0e6748be
// Size: 0x48 (Inherited: 0x30)
struct U*ea0e6748be : UParticleModuleParameterBase {
	struct TArray<struct F*85b45f808a> *ab48571549[0x10]; // 0x30(0x10)
	int32 *ec8ad0b12a[0x04]; // 0x40(0x04)
	char *4bbaebefc6 : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class Engine.*b825b1f4a4
// Size: 0x68 (Inherited: 0x48)
struct U*b825b1f4a4 : U*ea0e6748be {
	struct F*f391bfd93e *ac8c892e8e[0x20]; // 0x48(0x20)
};

// Class Engine.SubUVAnimation
// Size: 0x60 (Inherited: 0x28)
struct USubUVAnimation : UObject {
	struct UTexture2D* *45f4c63ece[0x08]; // 0x28(0x08)
	int32 *d0eee5e023[0x04]; // 0x30(0x04)
	int32 *b866d106f2[0x04]; // 0x34(0x04)
	enum class *cf1018a8a2 *d301e32d90; // 0x38(0x01)
	enum class *319e761216 *073c1f87d7; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float *c5eda4e98d[0x04]; // 0x3c(0x04)
	char pad_40[0x20]; // 0x40(0x20)
};

// Class Engine.ParticleModuleRequired
// Size: 0x180 (Inherited: 0x30)
struct UParticleModuleRequired : UParticleModule {
	struct UMaterialInterface* Material[0x08]; // 0x30(0x08)
	struct UMaterialInterface* *a00bc0b772[0x08]; // 0x38(0x08)
	struct FVector4 *1cb29af141[0x10]; // 0x40(0x10)
	struct FVector *eabde9c6b9[0x0c]; // 0x50(0x0c)
	struct FRotator *584f715dc4[0x0c]; // 0x5c(0x0c)
	enum class *3e769a71ff *812423ae99; // 0x68(0x01)
	enum class *0eaf69bf66 SortMode; // 0x69(0x01)
	enum class *7d8e2c3b6b *ea129b6abc; // 0x6a(0x01)
	char pad_6B[0x1]; // 0x6b(0x01)
	float *21138c4628[0x04]; // 0x6c(0x04)
	float *7c2783f083[0x04]; // 0x70(0x04)
	float *1a69d40ddc[0x04]; // 0x74(0x04)
	char *04ec4fc798 : 1; // 0x78(0x01)
	char *77c6550e9c : 1; // 0x78(0x01)
	char *cec6376b23 : 1; // 0x78(0x01)
	char *54e82150ce : 1; // 0x78(0x01)
	char *689bee2ab9 : 1; // 0x78(0x01)
	char *9f0bd6f721 : 1; // 0x78(0x01)
	char *b7b44857f0 : 1; // 0x78(0x01)
	char *def009ca88 : 1; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float *15646e305a[0x04]; // 0x7c(0x04)
	float *c32a80ebd1[0x04]; // 0x80(0x04)
	int32 *0b511b58d9[0x04]; // 0x84(0x04)
	struct F*1273267ee1 SpawnRate[0x38]; // 0x88(0x38)
	struct TArray<struct F*b7ed34810a> *1b08c04e03[0x10]; // 0xc0(0x10)
	float *446d2eb434[0x04]; // 0xd0(0x04)
	float *220d19e872[0x04]; // 0xd4(0x04)
	char *5335598bb8 : 1; // 0xd8(0x01)
	char *ff9c8d592e : 1; // 0xd8(0x01)
	char pad_D8_2 : 6; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	enum class EParticleSubUVInterpMethod InterpolationMethod; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	int32 *d0eee5e023[0x04]; // 0xe0(0x04)
	int32 *b866d106f2[0x04]; // 0xe4(0x04)
	char *a9d4b49566 : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float *48e20f5c47[0x04]; // 0xec(0x04)
	int32 *b94807db4c[0x04]; // 0xf0(0x04)
	char *0252a2bb0e : 1; // 0xf4(0x01)
	char pad_F4_1 : 7; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct FVector MacroUVPosition[0x0c]; // 0xf8(0x0c)
	float MacroUVRadius[0x04]; // 0x104(0x04)
	char *c0861ef01a : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	int32 MaxDrawCount[0x04]; // 0x10c(0x04)
	enum class EParticleUVFlipMode *17cb241632; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct UTexture2D* *5a1c2e132c[0x08]; // 0x118(0x08)
	enum class *cf1018a8a2 *d301e32d90; // 0x120(0x01)
	enum class *319e761216 *073c1f87d7; // 0x121(0x01)
	char pad_122[0x2]; // 0x122(0x02)
	float *c5eda4e98d[0x04]; // 0x124(0x04)
	enum class *b9013e80e9 *df3c4e3741; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	struct FVector *43c75db7d1[0x0c]; // 0x12c(0x0c)
	struct FVector *1c676231aa[0x0c]; // 0x138(0x0c)
	char *3d323239ed : 1; // 0x144(0x01)
	char pad_144_1 : 7; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	struct TArray<struct FName> *74e0f03813[0x10]; // 0x148(0x10)
	char pad_158[0x28]; // 0x158(0x28)
};

// Class Engine.*7c305e19c2
// Size: 0x30 (Inherited: 0x30)
struct U*7c305e19c2 : UParticleModule {
};

// Class Engine.ParticleModuleMeshRotation
// Size: 0x88 (Inherited: 0x30)
struct UParticleModuleMeshRotation : U*7c305e19c2 {
	struct FRawDistributionVector *9a94b46ec6[0x50]; // 0x30(0x50)
	char *ead2fa08cb : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.ParticleModuleMeshRotation_Seeded
// Size: 0xa8 (Inherited: 0x88)
struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	struct F*f391bfd93e *ac8c892e8e[0x20]; // 0x88(0x20)
};

// Class Engine.*f4249954a4
// Size: 0x68 (Inherited: 0x30)
struct U*f4249954a4 : U*7c305e19c2 {
	struct F*1273267ee1 *9a94b46ec6[0x38]; // 0x30(0x38)
};

// Class Engine.*024854a94b
// Size: 0x88 (Inherited: 0x68)
struct U*024854a94b : U*f4249954a4 {
	struct F*f391bfd93e *ac8c892e8e[0x20]; // 0x68(0x20)
};

// Class Engine.ParticleModuleRotationOverLifetime
// Size: 0x70 (Inherited: 0x30)
struct UParticleModuleRotationOverLifetime : U*7c305e19c2 {
	struct F*1273267ee1 *063d44179f[0x38]; // 0x30(0x38)
	char Scale : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*3d17b30f35
// Size: 0x30 (Inherited: 0x30)
struct U*3d17b30f35 : UParticleModule {
};

// Class Engine.ParticleModuleMeshRotationRate
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleMeshRotationRate : U*3d17b30f35 {
	struct FRawDistributionVector *d3235c99d2[0x50]; // 0x30(0x50)
};

// Class Engine.ParticleModuleMeshRotationRate_Seeded
// Size: 0xa0 (Inherited: 0x80)
struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	struct F*f391bfd93e *ac8c892e8e[0x20]; // 0x80(0x20)
};

// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleMeshRotationRateMultiplyLife : U*3d17b30f35 {
	struct FRawDistributionVector LifeMultiplier[0x50]; // 0x30(0x50)
};

// Class Engine.ParticleModuleMeshRotationRateOverLife
// Size: 0x88 (Inherited: 0x30)
struct UParticleModuleMeshRotationRateOverLife : U*3d17b30f35 {
	struct FRawDistributionVector *c5f45b99f2[0x50]; // 0x30(0x50)
	char *9e29372bcb : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*145cff9c40
// Size: 0x68 (Inherited: 0x30)
struct U*145cff9c40 : U*3d17b30f35 {
	struct F*1273267ee1 *d3235c99d2[0x38]; // 0x30(0x38)
};

// Class Engine.*a7d9a0d6eb
// Size: 0x88 (Inherited: 0x68)
struct U*a7d9a0d6eb : U*145cff9c40 {
	struct F*f391bfd93e *ac8c892e8e[0x20]; // 0x68(0x20)
};

// Class Engine.ParticleModuleRotationRateMultiplyLife
// Size: 0x68 (Inherited: 0x30)
struct UParticleModuleRotationRateMultiplyLife : U*3d17b30f35 {
	struct F*1273267ee1 LifeMultiplier[0x38]; // 0x30(0x38)
};

// Class Engine.*9369723a5d
// Size: 0x30 (Inherited: 0x30)
struct U*9369723a5d : UParticleModule {
};

// Class Engine.*4257527455
// Size: 0x80 (Inherited: 0x30)
struct U*4257527455 : U*9369723a5d {
	struct FRawDistributionVector *7e4cac98f6[0x50]; // 0x30(0x50)
};

// Class Engine.*e3d2f9c66d
// Size: 0xa0 (Inherited: 0x80)
struct U*e3d2f9c66d : U*4257527455 {
	struct F*f391bfd93e *ac8c892e8e[0x20]; // 0x80(0x20)
};

// Class Engine.ParticleModuleSizeMultiplyLife
// Size: 0x88 (Inherited: 0x30)
struct UParticleModuleSizeMultiplyLife : U*9369723a5d {
	struct FRawDistributionVector LifeMultiplier[0x50]; // 0x30(0x50)
	char *daac0397f9 : 1; // 0x80(0x01)
	char *beda04897f : 1; // 0x80(0x01)
	char *464aa2d6d2 : 1; // 0x80(0x01)
	char pad_80_3 : 5; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.ParticleModuleSizeScale
// Size: 0x88 (Inherited: 0x30)
struct UParticleModuleSizeScale : U*9369723a5d {
	struct FRawDistributionVector SizeScale[0x50]; // 0x30(0x50)
	char *fca9f79108 : 1; // 0x80(0x01)
	char *c1d9f3181a : 1; // 0x80(0x01)
	char *3d0087899c : 1; // 0x80(0x01)
	char pad_80_3 : 5; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.ParticleModuleSizeScaleBySpeed
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleSizeScaleBySpeed : U*9369723a5d {
	struct FVector2D *62e07041dd[0x08]; // 0x30(0x08)
	struct FVector2D *66e93de536[0x08]; // 0x38(0x08)
};

// Class Engine.*001fe7ab63
// Size: 0x38 (Inherited: 0x30)
struct U*001fe7ab63 : UParticleModule {
	char *1caf60066c : 1; // 0x30(0x01)
	char *cfda28b268 : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.ParticleModuleSpawn
// Size: 0x100 (Inherited: 0x38)
struct UParticleModuleSpawn : U*001fe7ab63 {
	struct F*1273267ee1 Rate[0x38]; // 0x38(0x38)
	struct F*1273267ee1 *63b5605c53[0x38]; // 0x70(0x38)
	enum class *7d8e2c3b6b *ea129b6abc; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct F*b7ed34810a> *1b08c04e03[0x10]; // 0xb0(0x10)
	struct F*1273267ee1 *97054e2765[0x38]; // 0xc0(0x38)
	char *3f4abeb19a : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// Class Engine.*174103af1f
// Size: 0x88 (Inherited: 0x38)
struct U*174103af1f : U*001fe7ab63 {
	float *462931969d[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct F*1273267ee1 SpawnPerUnit[0x38]; // 0x40(0x38)
	char *9496595439 : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float *28dcd6093f[0x04]; // 0x7c(0x04)
	float *d08704b5ee[0x04]; // 0x80(0x04)
	char *0d7823d678 : 1; // 0x84(0x01)
	char *f2308babe0 : 1; // 0x84(0x01)
	char *3c8a712428 : 1; // 0x84(0x01)
	char pad_84_3 : 5; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// Class Engine.*9ce9e3de0d
// Size: 0x30 (Inherited: 0x30)
struct U*9ce9e3de0d : UParticleModule {
};

// Class Engine.ParticleModuleSubUV
// Size: 0x78 (Inherited: 0x30)
struct UParticleModuleSubUV : U*9ce9e3de0d {
	struct USubUVAnimation* Animation[0x08]; // 0x30(0x08)
	struct F*1273267ee1 SubImageIndex[0x38]; // 0x38(0x38)
	char *48617e27e4 : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.ParticleModuleSubUVMovie
// Size: 0xc0 (Inherited: 0x78)
struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char *2292a498ce : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct F*1273267ee1 FrameRate[0x38]; // 0x80(0x38)
	int32 *35ce5490ed[0x04]; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class Engine.ParticleModuleTrailBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleTrailBase : UParticleModule {
};

// Class Engine.*98614401c8
// Size: 0x98 (Inherited: 0x30)
struct U*98614401c8 : UParticleModuleTrailBase {
	enum class *742a09a89c *4f0bf355a7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FName SourceName[0x08]; // 0x38(0x08)
	struct F*1273267ee1 *1308a65ed3[0x38]; // 0x40(0x38)
	char *c97350649a : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32 SourceOffsetCount[0x04]; // 0x7c(0x04)
	struct TArray<struct FVector> *2816c5490c[0x10]; // 0x80(0x10)
	enum class *eb772079e1 *82c726fc3e; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	char *2086531338 : 1; // 0x94(0x01)
	char pad_94_1 : 7; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
};

// Class Engine.ParticleModuleTypeDataBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleTypeDataBase : UParticleModule {
};

// Class Engine.*d1973ea140
// Size: 0x48 (Inherited: 0x30)
struct U*d1973ea140 : UParticleModuleTypeDataBase {
	char *7f72b0dc88 : 1; // 0x30(0x01)
	char *8fe9ab09b2 : 1; // 0x30(0x01)
	char *2b572f878e : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *48f2c3e1a7[0x04]; // 0x34(0x04)
	float *7d24f9806d[0x04]; // 0x38(0x04)
	float *cf9812a780[0x04]; // 0x3c(0x04)
	float *8a7e9cff3e[0x04]; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.ParticleModuleTypeDataBeam2
// Size: 0x168 (Inherited: 0x30)
struct UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase {
	enum class *4ca547df87 *ae06c6d36e; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 *6cb00a7d2f[0x04]; // 0x34(0x04)
	float *3f1f217a29[0x04]; // 0x38(0x04)
	int32 Sheets[0x04]; // 0x3c(0x04)
	int32 MaxBeamCount[0x04]; // 0x40(0x04)
	float Speed[0x04]; // 0x44(0x04)
	int32 InterpolationPoints[0x04]; // 0x48(0x04)
	char *6ddbded538 : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32 *eaa01aee37[0x04]; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FName *c37d272b41[0x08]; // 0x58(0x08)
	struct F*1273267ee1 Distance[0x38]; // 0x60(0x38)
	enum class *faaf57805f *ceb34d6204; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct F*1273267ee1 TaperFactor[0x38]; // 0xa0(0x38)
	struct F*1273267ee1 *270cc589ff[0x38]; // 0xd8(0x38)
	char RenderGeometry : 1; // 0x110(0x01)
	char *8452804c53 : 1; // 0x110(0x01)
	char *792549498d : 1; // 0x110(0x01)
	char *f01b2d251f : 1; // 0x110(0x01)
	char pad_110_4 : 4; // 0x110(0x01)
	char pad_111[0x57]; // 0x111(0x57)
};

// Class Engine.ParticleModuleTypeDataGpu
// Size: 0x460 (Inherited: 0x30)
struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	struct F*c408766740 *8bcb1fe2a6[0x2c0]; // 0x30(0x2c0)
	struct F*8c10d2fd5d *e7bb05ec9a[0x160]; // 0x2f0(0x160)
	float *b9deab831f[0x04]; // 0x450(0x04)
	char *c723cfbc62 : 1; // 0x454(0x01)
	char pad_454_1 : 7; // 0x454(0x01)
	char pad_455[0xb]; // 0x455(0x0b)
};

// Class Engine.ParticleModuleTypeDataMesh
// Size: 0xb8 (Inherited: 0x30)
struct UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase {
	struct UStaticMesh* Mesh[0x08]; // 0x30(0x08)
	char *dd09d1d49a : 1; // 0x38(0x01)
	char *c44868cbbb : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	enum class *6dfead649b *b22233a686; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	char *de308973a7 : 1; // 0x40(0x01)
	char bOverrideDefaultMotionBlurSettings : 1; // 0x40(0x01)
	char *a9c9ab48fd : 1; // 0x40(0x01)
	char pad_40_3 : 5; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float Pitch[0x04]; // 0x44(0x04)
	float Roll[0x04]; // 0x48(0x04)
	float Yaw[0x04]; // 0x4c(0x04)
	struct FRawDistributionVector *d8e81b3bf9[0x50]; // 0x50(0x50)
	char pad_A0[0x8]; // 0xa0(0x08)
	enum class *3f95a333e8 *a3477952dd; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	char *c971d6016e : 1; // 0xac(0x01)
	char pad_AC_1 : 7; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	enum class *845843f638 CameraFacingUpAxisOption; // 0xb0(0x01)
	enum class *ac57f9f0c5 *6f48d5cd14; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	char *71f1e89b24 : 1; // 0xb4(0x01)
	char *a61128c3ca : 1; // 0xb4(0x01)
	char *b5258bf68d : 1; // 0xb4(0x01)
	char pad_B4_3 : 5; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
};

// Class Engine.ParticleModuleTypeDataRibbon
// Size: 0x60 (Inherited: 0x30)
struct UParticleModuleTypeDataRibbon : UParticleModuleTypeDataBase {
	int32 MaxTessellationBetweenParticles[0x04]; // 0x30(0x04)
	int32 SheetsPerTrail[0x04]; // 0x34(0x04)
	int32 MaxTrailCount[0x04]; // 0x38(0x04)
	int32 MaxParticleInTrailCount[0x04]; // 0x3c(0x04)
	char *7f72b0dc88 : 1; // 0x40(0x01)
	char *92625c4bbc : 1; // 0x40(0x01)
	char *527940000d : 1; // 0x40(0x01)
	char *8fe9ab09b2 : 1; // 0x40(0x01)
	char *2b572f878e : 1; // 0x40(0x01)
	char *1339ae846e : 1; // 0x40(0x01)
	char pad_40_6 : 2; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class *dd3c7d43ec *f13bebad7a; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float *461e665ec2[0x04]; // 0x48(0x04)
	char *d59e3fbcf6 : 1; // 0x4c(0x01)
	char *cae7540bac : 1; // 0x4c(0x01)
	char *0be65729aa : 1; // 0x4c(0x01)
	char *18b844637d : 1; // 0x4c(0x01)
	char pad_4C_4 : 4; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float *48f2c3e1a7[0x04]; // 0x50(0x04)
	float *7d24f9806d[0x04]; // 0x54(0x04)
	char *8f303e3c71 : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float *05f6d1af0f[0x04]; // 0x5c(0x04)
};

// Class Engine.ParticleModuleVectorFieldBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleVectorFieldBase : UParticleModule {
};

// Class Engine.*eb857906a6
// Size: 0x40 (Inherited: 0x30)
struct U*eb857906a6 : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *bb9cdfd91e[0x04]; // 0x34(0x04)
	float *ac7c0dace2[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.*a32f6278cf
// Size: 0x68 (Inherited: 0x30)
struct U*a32f6278cf : UParticleModuleVectorFieldBase {
	struct UVectorField* VectorField[0x08]; // 0x30(0x08)
	struct FVector RelativeTranslation[0x0c]; // 0x38(0x0c)
	struct FRotator RelativeRotation[0x0c]; // 0x44(0x0c)
	struct FVector RelativeScale3D[0x0c]; // 0x50(0x0c)
	float Intensity[0x04]; // 0x5c(0x04)
	float *6582773b98[0x04]; // 0x60(0x04)
	char *36fa4599fb : 1; // 0x64(0x01)
	char *a265607ff1 : 1; // 0x64(0x01)
	char *da3ea74fb0 : 1; // 0x64(0x01)
	char *f52b819104 : 1; // 0x64(0x01)
	char *76f6ece417 : 1; // 0x64(0x01)
	char pad_64_5 : 3; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class Engine.*81bf6faf42
// Size: 0x48 (Inherited: 0x30)
struct U*81bf6faf42 : UParticleModuleVectorFieldBase {
	struct FVector *d1010f4b65[0x0c]; // 0x30(0x0c)
	struct FVector *0f2f980e2e[0x0c]; // 0x3c(0x0c)
};

// Class Engine.*58b1ab7e79
// Size: 0x40 (Inherited: 0x30)
struct U*58b1ab7e79 : UParticleModuleVectorFieldBase {
	struct FVector RotationRate[0x0c]; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.ParticleModuleVectorFieldScale
// Size: 0x70 (Inherited: 0x30)
struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	struct U*ca563f945f* VectorFieldScale[0x08]; // 0x30(0x08)
	struct F*1273267ee1 *c9b2a4dade[0x38]; // 0x38(0x38)
};

// Class Engine.ParticleModuleVectorFieldScaleOverLife
// Size: 0x70 (Inherited: 0x30)
struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	struct U*ca563f945f* VectorFieldScaleOverLife[0x08]; // 0x30(0x08)
	struct F*1273267ee1 *0352d96e36[0x38]; // 0x38(0x38)
};

// Class Engine.*bcab0ec14c
// Size: 0x38 (Inherited: 0x30)
struct U*bcab0ec14c : UParticleModule {
	char *94f2ce3214 : 1; // 0x30(0x01)
	char *0e0cbecb01 : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.*cc985aa6b7
// Size: 0xc0 (Inherited: 0x38)
struct U*cc985aa6b7 : U*bcab0ec14c {
	struct FRawDistributionVector *3502d378e4[0x50]; // 0x38(0x50)
	struct F*1273267ee1 *27249e463e[0x38]; // 0x88(0x38)
};

// Class Engine.*1d17e2f7f8
// Size: 0xe0 (Inherited: 0xc0)
struct U*1d17e2f7f8 : U*cc985aa6b7 {
	struct F*f391bfd93e *ac8c892e8e[0x20]; // 0xc0(0x20)
};

// Class Engine.*32537843d3
// Size: 0xb8 (Inherited: 0x38)
struct U*32537843d3 : U*bcab0ec14c {
	struct F*1273267ee1 Angle[0x38]; // 0x38(0x38)
	struct F*1273267ee1 Velocity[0x38]; // 0x70(0x38)
	struct FVector Direction[0x0c]; // 0xa8(0x0c)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class Engine.*55758e1a9e
// Size: 0x88 (Inherited: 0x38)
struct U*55758e1a9e : U*bcab0ec14c {
	struct FRawDistributionVector Scale[0x50]; // 0x38(0x50)
};

// Class Engine.ParticleModuleVelocityOverLifetime
// Size: 0x90 (Inherited: 0x38)
struct UParticleModuleVelocityOverLifetime : U*bcab0ec14c {
	struct FRawDistributionVector *6971876fdc[0x50]; // 0x38(0x50)
	char Absolute : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*7130a8ded7
// Size: 0x40 (Inherited: 0x28)
struct U*7130a8ded7 : UObject {
	int32 *040845dfa8[0x04]; // 0x28(0x04)
	char pad_2C[0x14]; // 0x2c(0x14)
};

// Class Engine.*91760c0fb6
// Size: 0xc8 (Inherited: 0xc8)
struct U*91760c0fb6 : U*8ea0475d8b {
};

// Class Engine.PhysicalMaterial
// Size: 0x80 (Inherited: 0x28)
struct UPhysicalMaterial : UObject {
	float Friction[0x04]; // 0x28(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x2c(0x01)
	bool bOverrideFrictionCombineMode; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	float Restitution[0x04]; // 0x30(0x04)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x34(0x01)
	bool bOverrideRestitutionCombineMode; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float Density[0x04]; // 0x38(0x04)
	float RaiseMassToPower[0x04]; // 0x3c(0x04)
	float DestructibleDamageThresholdScale[0x04]; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UPhysicalMaterialPropertyBase* *9a2960aa78[0x08]; // 0x48(0x08)
	enum class EPhysicalSurface SurfaceType; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float *2ddbfe9350[0x04]; // 0x54(0x04)
	struct TArray<struct F*298cd37308> *e11ee3dc6e[0x10]; // 0x58(0x10)
	char pad_68[0x18]; // 0x68(0x18)
};

// Class Engine.PhysicalMaterialPropertyBase
// Size: 0x28 (Inherited: 0x28)
struct UPhysicalMaterialPropertyBase : UObject {
};

// Class Engine.PhysicsCollisionHandler
// Size: 0x40 (Inherited: 0x28)
struct UPhysicsCollisionHandler : UObject {
	float ImpactThreshold[0x04]; // 0x28(0x04)
	float ImpactReFireDelay[0x04]; // 0x2c(0x04)
	struct USoundBase* DefaultImpactSound[0x08]; // 0x30(0x08)
	float *1c43390169[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.PhysicsConstraintTemplate
// Size: 0x340 (Inherited: 0x28)
struct UPhysicsConstraintTemplate : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FConstraintInstance DefaultInstance[0x1f0]; // 0x30(0x1f0)
	struct TArray<struct F*deb96acac5> *67a8419381[0x10]; // 0x220(0x10)
	struct F*d847dc2ef1 DefaultProfile[0x104]; // 0x230(0x104)
	char pad_334[0xc]; // 0x334(0x0c)
};

// Class Engine.PhysicsSerializer
// Size: 0xd0 (Inherited: 0x28)
struct UPhysicsSerializer : UObject {
	char pad_28[0xa8]; // 0x28(0xa8)
};

// Class Engine.*1d03cdd2a6
// Size: 0x38 (Inherited: 0x28)
struct U*1d03cdd2a6 : UObject {
	struct TArray<struct F*9ad3af2c58> *3e2db2fdc7[0x10]; // 0x28(0x10)
};

// Class Engine.*4b3f815593
// Size: 0x50 (Inherited: 0x38)
struct U*4b3f815593 : U*1d03cdd2a6 {
	struct TArray<struct FString> *d69c2f8a49[0x10]; // 0x38(0x10)
	char *75042a9b6a : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.*bfce6dc138
// Size: 0x60 (Inherited: 0x38)
struct U*bfce6dc138 : U*1d03cdd2a6 {
	char *8cef932ca2 : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<DelegateProperty> *662fedc922[0x10]; // 0x40(0x10)
	struct TArray<DelegateProperty> *2548fe3018[0x10]; // 0x50(0x10)
};

// Class Engine.*98e8421be7
// Size: 0x68 (Inherited: 0x38)
struct U*98e8421be7 : U*1d03cdd2a6 {
	struct TArray<struct F*f579f33d1f> *03e1e81933[0x10]; // 0x38(0x10)
	struct FString LastError[0x10]; // 0x48(0x10)
	struct FString *e369af5425[0x10]; // 0x58(0x10)
};

// Class Engine.*0c65faeacb
// Size: 0x38 (Inherited: 0x38)
struct U*0c65faeacb : U*1d03cdd2a6 {

	void *a47bf45f6a(); // Function Engine.*0c65faeacb.*a47bf45f6a // Native|Public // @ game+0x58ccedc
	void Init(); // Function Engine.*0c65faeacb.Init // Native|Public // @ game+0x6b9194
	void *2d3b49da65(); // Function Engine.*0c65faeacb.*2d3b49da65 // Native|Public // @ game+0x58ccc9c
	struct FString *c82aeda465(); // Function Engine.*0c65faeacb.*c82aeda465 // Native|Public // @ game+0x6654810
	struct FString *1c503d1e6c(struct TArray<struct FString>* Param1, int32* Param3); // Function Engine.*0c65faeacb.*1c503d1e6c // Native|Public|HasOutParms // @ game+0x6656668
	void *af423b0a94(); // Function Engine.*0c65faeacb.*af423b0a94 // Native|Public // @ game+0x664b680
	int32 *c3a8d60ed4(); // Function Engine.*0c65faeacb.*c3a8d60ed4 // Native|Public // @ game+0x664a164
};

// Class Engine.*f05799c221
// Size: 0xb0 (Inherited: 0x28)
struct U*f05799c221 : UObject {
	struct FString *055d8cf00e[0x10]; // 0x28(0x10)
	int32 ResponseCode[0x04]; // 0x38(0x04)
	int32 Tag[0x04]; // 0x3c(0x04)
	struct FString *8bd034f933[0x10]; // 0x40(0x10)
	struct TArray<bool> *08b12c2db2[0x10]; // 0x50(0x10)
	char pad_60[0x50]; // 0x60(0x50)

	void *b55b6d84b8(struct FString* Param0); // Function Engine.*f05799c221.*b55b6d84b8 // Native|Public // @ game+0x664afc8
	void GetHeader(int32* Param0); // Function Engine.*f05799c221.GetHeader // Native|Public|HasOutParms // @ game+0x664ae20
	void *0c1a1cdfbe(); // Function Engine.*f05799c221.*0c1a1cdfbe // Native|Public // @ game+0x664b6a8
};

// Class Engine.ChildConnection
// Size: 0x65850 (Inherited: 0x65848)
struct UChildConnection : UNetConnection {
	struct UNetConnection* Parent[0x08]; // 0x65848(0x08)
};

// Class Engine.Polys
// Size: 0x38 (Inherited: 0x28)
struct UPolys : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Engine.*fd3ee7d582
// Size: 0x30 (Inherited: 0x28)
struct U*fd3ee7d582 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class Engine.*a07e936f57
// Size: 0xa8 (Inherited: 0x30)
struct U*a07e936f57 : U*fd3ee7d582 {
	char pad_30[0x78]; // 0x30(0x78)
};

// Class Engine.ReverbEffect
// Size: 0x58 (Inherited: 0x28)
struct UReverbEffect : UObject {
	float Density[0x04]; // 0x28(0x04)
	float Diffusion[0x04]; // 0x2c(0x04)
	float Gain[0x04]; // 0x30(0x04)
	float GainHF[0x04]; // 0x34(0x04)
	float DecayTime[0x04]; // 0x38(0x04)
	float DecayHFRatio[0x04]; // 0x3c(0x04)
	float ReflectionsGain[0x04]; // 0x40(0x04)
	float ReflectionsDelay[0x04]; // 0x44(0x04)
	float LateGain[0x04]; // 0x48(0x04)
	float LateDelay[0x04]; // 0x4c(0x04)
	float AirAbsorptionGainHF[0x04]; // 0x50(0x04)
	float RoomRolloffFactor[0x04]; // 0x54(0x04)
};

// Class Engine.Rig
// Size: 0x48 (Inherited: 0x28)
struct URig : UObject {
	struct TArray<struct F*1e26811f8e> TransformBases[0x10]; // 0x28(0x10)
	struct TArray<struct FNode> Nodes[0x10]; // 0x38(0x10)
};

// Class Engine.SimpleConstructionScript
// Size: 0xb8 (Inherited: 0x28)
struct USimpleConstructionScript : UObject {
	struct TArray<struct USCS_Node*> *548c6e05d9[0x10]; // 0x28(0x10)
	struct TArray<struct USCS_Node*> *d1c99eccaa[0x10]; // 0x38(0x10)
	struct USCS_Node* *4dc2bd65af[0x08]; // 0x48(0x08)
	struct USCS_Node* RootNode[0x08]; // 0x50(0x08)
	struct TArray<struct USCS_Node*> ActorComponentNodes[0x10]; // 0x58(0x10)
	char pad_68[0x50]; // 0x68(0x50)
};

// Class Engine.SCS_Node
// Size: 0x150 (Inherited: 0x28)
struct USCS_Node : UObject {
	struct UClass* ComponentClass[0x08]; // 0x28(0x08)
	struct UActorComponent* *930a480bfe[0x08]; // 0x30(0x08)
	struct F*76eff26226 *8d069c690c[0x50]; // 0x38(0x50)
	struct FName VariableName[0x08]; // 0x88(0x08)
	struct FName *4a9c579dda[0x08]; // 0x90(0x08)
	struct FName *5618ea73e9[0x08]; // 0x98(0x08)
	struct FName *92a5014cc6[0x08]; // 0xa0(0x08)
	bool *528405a512; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct USCS_Node*> ChildNodes[0x10]; // 0xb0(0x10)
	struct USCS_Node* *262c515cd2[0x08]; // 0xc0(0x08)
	struct TArray<struct F*58d045b1a4> *1a8a67551c[0x10]; // 0xc8(0x10)
	struct FGuid VariableGuid[0x10]; // 0xd8(0x10)
	bool bIsFalseRoot; // 0xe8(0x01)
	bool bIsNative; // 0xe9(0x01)
	char pad_EA[0x6]; // 0xea(0x06)
	struct FName NativeComponentName[0x08]; // 0xf0(0x08)
	bool bVariableNameAutoGenerated; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FName InternalVariableName[0x08]; // 0x100(0x08)
	char pad_108[0x48]; // 0x108(0x48)
};

// Class Engine.Selection
// Size: 0x90 (Inherited: 0x28)
struct USelection : UObject {
	char pad_28[0x68]; // 0x28(0x68)
};

// Class Engine.DestructibleMesh
// Size: 0x390 (Inherited: 0x2e8)
struct UDestructibleMesh : USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters[0x88]; // 0x2e8(0x88)
	struct TArray<struct F*53a1c74b57> *e3a2f927cd[0x10]; // 0x370(0x10)
	char pad_380[0x10]; // 0x380(0x10)
};

// Class Engine.SkeletalMeshReductionSettings
// Size: 0x40 (Inherited: 0x28)
struct USkeletalMeshReductionSettings : UObject {
	struct TArray<struct F*528a6b8e2c> Settings[0x10]; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class Engine.SkeletalMeshSocket
// Size: 0x60 (Inherited: 0x28)
struct USkeletalMeshSocket : UObject {
	struct FName SocketName[0x08]; // 0x28(0x08)
	struct FName BoneName[0x08]; // 0x30(0x08)
	struct FVector RelativeLocation[0x0c]; // 0x38(0x0c)
	struct FRotator RelativeRotation[0x0c]; // 0x44(0x0c)
	struct FVector RelativeScale[0x0c]; // 0x50(0x0c)
	bool bForceAlwaysAnimated; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)

	void *eb094882b1(struct FVector* WorldLocation); // Function Engine.SkeletalMeshSocket.*eb094882b1 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x664d45c
	void *e779c0903a(struct USkeletalMeshComponent** SkelComp); // Function Engine.SkeletalMeshSocket.*e779c0903a // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x664c7a0
};

// Class Engine.SlateBrushAsset
// Size: 0xb8 (Inherited: 0x28)
struct USlateBrushAsset : UObject {
	struct FSlateBrush Brush[0x90]; // 0x28(0x90)
};

// Class Engine.SlateTextureAtlasInterface
// Size: 0x28 (Inherited: 0x28)
struct USlateTextureAtlasInterface : UInterface {
};

// Class Engine.SoundConcurrency
// Size: 0x38 (Inherited: 0x28)
struct USoundConcurrency : UObject {
	struct F*3bb246ee28 Concurrency[0x10]; // 0x28(0x10)
};

// Class Engine.*9c14f48f74
// Size: 0x40 (Inherited: 0x28)
struct U*9c14f48f74 : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class Engine.*059f6ca67c
// Size: 0x40 (Inherited: 0x40)
struct U*059f6ca67c : U*9c14f48f74 {
};

// Class Engine.SoundSubmix
// Size: 0x50 (Inherited: 0x28)
struct USoundSubmix : UObject {
	struct TArray<struct USoundSubmix*> *c35c85e5eb[0x10]; // 0x28(0x10)
	struct USoundSubmix* *c05da71772[0x08]; // 0x38(0x08)
	struct TArray<struct U*059f6ca67c*> *49706d36a3[0x10]; // 0x40(0x10)
};

// Class Engine.SoundBase
// Size: 0xa0 (Inherited: 0x28)
struct USoundBase : UObject {
	struct USoundClass* *e6f1a8a451[0x08]; // 0x28(0x08)
	char *cd4b9587db : 1; // 0x30(0x01)
	char bOverrideConcurrency : 1; // 0x30(0x01)
	char bIgnoreFocus : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct USoundConcurrency* SoundConcurrencySettings[0x08]; // 0x38(0x08)
	struct F*3bb246ee28 ConcurrencyOverrides[0x10]; // 0x40(0x10)
	enum class EMaxConcurrentResolutionRule MaxConcurrentResolutionRule; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32 MaxConcurrentPlayCount[0x04]; // 0x54(0x04)
	float Duration[0x04]; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct USoundAttenuation* AttenuationSettings[0x08]; // 0x60(0x08)
	float Priority[0x04]; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct USoundSubmix* SoundSubmixObject[0x08]; // 0x70(0x08)
	struct TArray<struct F*dbabf904cf> SoundSubmixSends[0x10]; // 0x78(0x10)
	float DefaultMasterReverbSendAmount[0x04]; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct U*065aab1e6f* SourceEffectChain[0x08]; // 0x90(0x08)
	char pad_98[0x8]; // 0x98(0x08)
};

// Class Engine.*ca3a75f111
// Size: 0xc0 (Inherited: 0xa0)
struct U*ca3a75f111 : USoundBase {
	char pad_A0[0x20]; // 0xa0(0x20)
};

// Class Engine.SoundNode
// Size: 0x38 (Inherited: 0x28)
struct USoundNode : UObject {
	struct TArray<struct USoundNode*> ChildNodes[0x10]; // 0x28(0x10)
};

// Class Engine.SoundCue
// Size: 0x1f8 (Inherited: 0xa0)
struct USoundCue : USoundBase {
	char bOverrideAttenuation : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct USoundNode* *1641c07c6e[0x08]; // 0xa8(0x08)
	float *10aca907ae[0x04]; // 0xb0(0x04)
	float *a785000e4c[0x04]; // 0xb4(0x04)
	struct FSoundAttenuationSettings *07b17728de[0x130]; // 0xb8(0x130)
	char pad_1E8[0x10]; // 0x1e8(0x10)
};

// Class Engine.SoundGroups
// Size: 0x88 (Inherited: 0x28)
struct USoundGroups : UObject {
	struct TArray<struct FSoundGroup> SoundGroupProfiles[0x10]; // 0x28(0x10)
	char pad_38[0x50]; // 0x38(0x50)
};

// Class Engine.SoundWave
// Size: 0x288 (Inherited: 0xa0)
struct USoundWave : USoundBase {
	int32 CompressionQuality[0x04]; // 0xa0(0x04)
	char bLooping : 1; // 0xa4(0x01)
	char *4c2ed3435a : 1; // 0xa4(0x01)
	char pad_A4_2 : 6; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	int32 *e8943dff71[0x04]; // 0xa8(0x04)
	char pad_AC_0 : 3; // 0xac(0x01)
	char *e1bb619dac : 1; // 0xac(0x01)
	char *4b10fb9a56 : 1; // 0xac(0x01)
	char *8d7079efc8 : 1; // 0xac(0x01)
	char *930208e9e6 : 1; // 0xac(0x01)
	char pad_AC_7 : 1; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	enum class ESoundGroup SoundGroup; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FString *649b8b652a[0x10]; // 0xb8(0x10)
	float *6eb03a2cf3[0x04]; // 0xc8(0x04)
	float Volume[0x04]; // 0xcc(0x04)
	float Pitch[0x04]; // 0xd0(0x04)
	int32 *c500f930b2[0x04]; // 0xd4(0x04)
	int32 SampleRate[0x04]; // 0xd8(0x04)
	int32 *49a4041a10[0x04]; // 0xdc(0x04)
	struct TArray<struct F*b8c123cb20> Subtitles[0x10]; // 0xe0(0x10)
	struct TArray<struct F*36f94a7d1e> *5111180de2[0x10]; // 0xf0(0x10)
	struct UCurveTable* Curves[0x08]; // 0x100(0x08)
	struct UCurveTable* *1143e25d59[0x08]; // 0x108(0x08)
	char pad_110[0x178]; // 0x110(0x178)
};

// Class Engine.*8c9c6f4e51
// Size: 0x310 (Inherited: 0x288)
struct U*8c9c6f4e51 : USoundWave {
	char pad_288[0x88]; // 0x288(0x88)
};

// Class Engine.SoundClass
// Size: 0x80 (Inherited: 0x28)
struct USoundClass : UObject {
	struct F*eed253c1ce Properties[0x2c]; // 0x28(0x2c)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct USoundClass*> ChildClasses[0x10]; // 0x58(0x10)
	struct TArray<struct FPassiveSoundMixModifier> *4bef31be96[0x10]; // 0x68(0x10)
	struct USoundClass* ParentClass[0x08]; // 0x78(0x08)
};

// Class Engine.*56fc89e671
// Size: 0x40 (Inherited: 0x40)
struct U*56fc89e671 : U*9c14f48f74 {
};

// Class Engine.*065aab1e6f
// Size: 0x40 (Inherited: 0x28)
struct U*065aab1e6f : UObject {
	struct TArray<struct F*3340ad61dc> Chain[0x10]; // 0x28(0x10)
	char *73522b3f93 : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.SoundMix
// Size: 0x88 (Inherited: 0x28)
struct USoundMix : UObject {
	char *987a43d397 : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *d1336a92b8[0x04]; // 0x2c(0x04)
	struct FAudioEQEffect *102c092581[0x38]; // 0x30(0x38)
	struct TArray<struct F*35d2d122d8> *203e2e1cb2[0x10]; // 0x68(0x10)
	float InitialDelay[0x04]; // 0x78(0x04)
	float *881bc74a58[0x04]; // 0x7c(0x04)
	float Duration[0x04]; // 0x80(0x04)
	float *4c89be388c[0x04]; // 0x84(0x04)
};

// Class Engine.*751ee1218e
// Size: 0x38 (Inherited: 0x38)
struct U*751ee1218e : USoundNode {
};

// Class Engine.SoundNodeWavePlayer
// Size: 0x68 (Inherited: 0x38)
struct USoundNodeWavePlayer : U*751ee1218e {
	struct USoundWave* SoundWaveAssetPtr[0x20]; // 0x38(0x20)
	struct USoundWave* SoundWave[0x08]; // 0x58(0x08)
	char pad_60_0 : 1; // 0x60(0x01)
	char bLooping : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*3462e1eb37
// Size: 0x178 (Inherited: 0x38)
struct U*3462e1eb37 : USoundNode {
	struct USoundAttenuation* AttenuationSettings[0x08]; // 0x38(0x08)
	struct FSoundAttenuationSettings *07b17728de[0x130]; // 0x40(0x130)
	char bOverrideAttenuation : 1; // 0x170(0x01)
	char pad_170_1 : 7; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
};

// Class Engine.SoundNodeBranch
// Size: 0x40 (Inherited: 0x38)
struct USoundNodeBranch : USoundNode {
	struct FName *c4fa14e342[0x08]; // 0x38(0x08)
};

// Class Engine.*56e1b0cde6
// Size: 0x48 (Inherited: 0x38)
struct U*56e1b0cde6 : USoundNode {
	struct TArray<float> *67d9e2eae5[0x10]; // 0x38(0x10)
};

// Class Engine.*349c709a81
// Size: 0x40 (Inherited: 0x38)
struct U*349c709a81 : USoundNode {
	float *1698f8b247[0x04]; // 0x38(0x04)
	float *c2e0831513[0x04]; // 0x3c(0x04)
};

// Class Engine.SoundNodeDialoguePlayer
// Size: 0x60 (Inherited: 0x38)
struct USoundNodeDialoguePlayer : USoundNode {
	struct FDialogueWaveParameter DialogueWaveParameter[0x20]; // 0x38(0x20)
	char bLooping : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class Engine.*a2d0a8eee8
// Size: 0x48 (Inherited: 0x38)
struct U*a2d0a8eee8 : USoundNode {
	struct TArray<struct FDistanceDatum> *676a30a8bc[0x10]; // 0x38(0x10)
};

// Class Engine.*9d6ff72997
// Size: 0x50 (Inherited: 0x48)
struct U*9d6ff72997 : U*a2d0a8eee8 {
	struct FName ParamName[0x08]; // 0x48(0x08)
};

// Class Engine.*44b6bc2524
// Size: 0x40 (Inherited: 0x38)
struct U*44b6bc2524 : USoundNode {
	float *a386e241f9[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.*82d0041e72
// Size: 0x160 (Inherited: 0x38)
struct U*82d0041e72 : USoundNode {
	float *a117920c02[0x04]; // 0x38(0x04)
	float LoopEnd[0x04]; // 0x3c(0x04)
	float *021f0ce137[0x04]; // 0x40(0x04)
	int32 *32c144a2cd[0x04]; // 0x44(0x04)
	char *3a61154a17 : 1; // 0x48(0x01)
	char bLoop : 1; // 0x48(0x01)
	char pad_48_2 : 6; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct U*f78a737900* VolumeInterpCurve[0x08]; // 0x50(0x08)
	struct U*f78a737900* PitchInterpCurve[0x08]; // 0x58(0x08)
	struct FRuntimeFloatCurve VolumeCurve[0x78]; // 0x60(0x78)
	struct FRuntimeFloatCurve *d0d6715649[0x78]; // 0xd8(0x78)
	float *b87c0aa12a[0x04]; // 0x150(0x04)
	float *2f34e4d6b6[0x04]; // 0x154(0x04)
	float *796669b85f[0x04]; // 0x158(0x04)
	float *1e8a841d6c[0x04]; // 0x15c(0x04)
};

// Class Engine.*a4530877f1
// Size: 0x48 (Inherited: 0x38)
struct U*a4530877f1 : USoundNode {
	struct TArray<int32> *351e49fe63[0x10]; // 0x38(0x10)
};

// Class Engine.*ee49de76e2
// Size: 0x40 (Inherited: 0x38)
struct U*ee49de76e2 : USoundNode {
	int32 *32c144a2cd[0x04]; // 0x38(0x04)
	char *3a61154a17 : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// Class Engine.SoundNodeMature
// Size: 0x38 (Inherited: 0x38)
struct USoundNodeMature : USoundNode {
};

// Class Engine.*42cc40c95d
// Size: 0x48 (Inherited: 0x38)
struct U*42cc40c95d : USoundNode {
	struct TArray<float> *67d9e2eae5[0x10]; // 0x38(0x10)
};

// Class Engine.*bce43fcbac
// Size: 0x48 (Inherited: 0x38)
struct U*bce43fcbac : USoundNode {
	float *b87c0aa12a[0x04]; // 0x38(0x04)
	float *2f34e4d6b6[0x04]; // 0x3c(0x04)
	float *796669b85f[0x04]; // 0x40(0x04)
	float *1e8a841d6c[0x04]; // 0x44(0x04)
};

// Class Engine.*775b0140ca
// Size: 0x78 (Inherited: 0x38)
struct U*775b0140ca : USoundNode {
	struct F*fd1ea2a2f5 *ddb9f992df[0x20]; // 0x38(0x20)
	struct F*fd1ea2a2f5 *7157d40d02[0x20]; // 0x58(0x20)
};

// Class Engine.*bdc41e4554
// Size: 0x60 (Inherited: 0x38)
struct U*bdc41e4554 : USoundNode {
	char *f9891dea17 : 1; // 0x38(0x01)
	char *6fd3a421cc : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *47fcdc9e9a[0x04]; // 0x3c(0x04)
	float *1283ce8322[0x04]; // 0x40(0x04)
	float *007bf4f82a[0x04]; // 0x44(0x04)
	float *f8de572d16[0x04]; // 0x48(0x04)
	float *bb1cba22f3[0x04]; // 0x4c(0x04)
	float *49112df372[0x04]; // 0x50(0x04)
	float *ab436c0ecd[0x04]; // 0x54(0x04)
	float *9f3424b476[0x04]; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.*4cd79be7e7
// Size: 0x38 (Inherited: 0x38)
struct U*4cd79be7e7 : USoundNode {
};

// Class Engine.*77e81e4764
// Size: 0x68 (Inherited: 0x38)
struct U*77e81e4764 : USoundNode {
	struct TArray<float> Weights[0x10]; // 0x38(0x10)
	int32 *198112192a[0x04]; // 0x48(0x04)
	char *b7d75afd39 : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TArray<bool> *fed5ce1c46[0x10]; // 0x50(0x10)
	int32 *26d7e21603[0x04]; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.*cc48730208
// Size: 0x40 (Inherited: 0x38)
struct U*cc48730208 : USoundNode {
	struct USoundClass* *e2444a5810[0x08]; // 0x38(0x08)
};

// Class Engine.SoundNodeSwitch
// Size: 0x40 (Inherited: 0x38)
struct USoundNodeSwitch : USoundNode {
	struct FName *820006ffbf[0x08]; // 0x38(0x08)
};

// Class Engine.*70c840d0a4
// Size: 0x40 (Inherited: 0x38)
struct U*70c840d0a4 : USoundNode {
	struct FName *3bbb9de585[0x08]; // 0x38(0x08)
};

// Class Engine.*2ee8b8c92f
// Size: 0x68 (Inherited: 0x28)
struct U*2ee8b8c92f : UObject {
	struct FName SocketName[0x08]; // 0x28(0x08)
	struct FVector RelativeLocation[0x0c]; // 0x30(0x0c)
	struct FRotator RelativeRotation[0x0c]; // 0x3c(0x0c)
	struct FVector RelativeScale[0x0c]; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString Tag[0x10]; // 0x58(0x10)
};

// Class Engine.StringTable
// Size: 0x40 (Inherited: 0x28)
struct UStringTable : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class Engine.SubsurfaceProfile
// Size: 0x50 (Inherited: 0x28)
struct USubsurfaceProfile : UObject {
	struct FSubsurfaceProfileStruct Settings[0x24]; // 0x28(0x24)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.*5788ee1977
// Size: 0x70 (Inherited: 0x28)
struct U*5788ee1977 : UObject {
	struct FText DefaultedText[0x18]; // 0x28(0x18)
	struct FText UndefaultedText[0x18]; // 0x40(0x18)
	struct FText *79845853b4[0x18]; // 0x58(0x18)
};

// Class Engine.LightMapTexture2D
// Size: 0x270 (Inherited: 0x260)
struct ULightMapTexture2D : UTexture2D {
	char pad_260[0x10]; // 0x260(0x10)
};

// Class Engine.*f4bbc79c03
// Size: 0x270 (Inherited: 0x260)
struct U*f4bbc79c03 : UTexture2D {
	enum class *095bed0a1f *c9b6344404; // 0x260(0x01)
	char pad_261[0xf]; // 0x261(0x0f)
};

// Class Engine.Texture2DArray
// Size: 0x260 (Inherited: 0x260)
struct UTexture2DArray : UTexture2D {
};

// Class Engine.*eafb25fbf7
// Size: 0x270 (Inherited: 0x260)
struct U*eafb25fbf7 : UTexture2D {
	float Brightness[0x04]; // 0x260(0x04)
	float *45147e0c34[0x04]; // 0x264(0x04)
	char pad_268[0x8]; // 0x268(0x08)
};

// Class Engine.*0aab017b56
// Size: 0x190 (Inherited: 0x170)
struct U*0aab017b56 : UTexture {
	char pad_170[0x8]; // 0x170(0x08)
	enum class EPixelFormat Format; // 0x178(0x01)
	char pad_179[0x17]; // 0x179(0x17)
};

// Class Engine.*d8d113303f
// Size: 0x1c0 (Inherited: 0x1a0)
struct U*d8d113303f : UTextureRenderTarget2D {
	struct FMulticastDelegate OnCanvasRenderTargetUpdate[0x10]; // 0x1a0(0x10)
	struct UWorld* World[0x08]; // 0x1b0(0x08)
	bool *58083b2104; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)

	void *037afa6842(struct UClass** CanvasRenderTarget2DClass, int32* Height); // Function Engine.*d8d113303f.*037afa6842 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6647ef8
	void *d45aae3b83(); // Function Engine.*d8d113303f.*d45aae3b83 // Native|Public|BlueprintCallable // @ game+0x58d1c6c
	int32 ReceiveUpdate(); // Function Engine.*d8d113303f.ReceiveUpdate // Event|Public|BlueprintEvent // @ game+0x2cd4ac
	void GetSize(int32* Width); // Function Engine.*d8d113303f.GetSize // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x664c684
};

// Class Engine.TextureRenderTargetCube
// Size: 0x1a0 (Inherited: 0x180)
struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32 SizeX[0x04]; // 0x178(0x04)
	struct FLinearColor ClearColor[0x10]; // 0x17c(0x10)
	enum class EPixelFormat *87366a0720; // 0x18c(0x01)
	char bHDR : 1; // 0x190(0x01)
	char *1944e232d7 : 1; // 0x190(0x01)
	char pad_195_2 : 6; // 0x195(0x01)
	char pad_196[0xa]; // 0x196(0x0a)
};

// Class Engine.TextureLODSettings
// Size: 0x38 (Inherited: 0x28)
struct UTextureLODSettings : UObject {
	struct TArray<struct FTextureLODGroup> TextureLODGroups[0x10]; // 0x28(0x10)
};

// Class Engine.DeviceProfile
// Size: 0xd0 (Inherited: 0x38)
struct UDeviceProfile : UTextureLODSettings {
	struct FString DeviceType[0x10]; // 0x38(0x10)
	struct FString BaseProfileName[0x10]; // 0x48(0x10)
	struct UObject* Parent[0x08]; // 0x58(0x08)
	char pad_60[0x18]; // 0x60(0x18)
	struct TArray<struct FString> CVars[0x10]; // 0x78(0x10)
	char pad_88[0x48]; // 0x88(0x48)
};

// Class Engine.*f0a07311c5
// Size: 0x28 (Inherited: 0x28)
struct U*f0a07311c5 : UObject {
};

// Class Engine.*12776be9f9
// Size: 0x98 (Inherited: 0x28)
struct U*12776be9f9 : UObject {
	float *5a1e92eeee[0x04]; // 0x28(0x04)
	enum class *f197db0fc1 *435d348826; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	char *48ea1b0937 : 1; // 0x30(0x01)
	char bLoop : 1; // 0x30(0x01)
	char bReplicated : 1; // 0x30(0x01)
	char *853325bda1 : 1; // 0x30(0x01)
	char *cea07ee5d4 : 1; // 0x30(0x01)
	char pad_30_5 : 3; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct F*b185fedfd6> *a74e29c11f[0x10]; // 0x38(0x10)
	struct TArray<struct F*2d3b7be361> *77b561e3a2[0x10]; // 0x48(0x10)
	struct TArray<struct F*a5c715f021> *a0463095cc[0x10]; // 0x58(0x10)
	struct TArray<struct F*f5c8deeab7> *a151eb40b2[0x10]; // 0x68(0x10)
	struct TArray<struct F*58d045b1a4> *1a8a67551c[0x10]; // 0x78(0x10)
	struct FGuid *6017117d39[0x10]; // 0x88(0x10)
};

// Class Engine.TouchInterface
// Size: 0x58 (Inherited: 0x28)
struct UTouchInterface : UObject {
	struct TArray<struct F*3b464b2be8> Controls[0x10]; // 0x28(0x10)
	float *3d55383df8[0x04]; // 0x38(0x04)
	float *764eb59cf0[0x04]; // 0x3c(0x04)
	float *cc28420b57[0x04]; // 0x40(0x04)
	float *e72facdf2c[0x04]; // 0x44(0x04)
	float *c867a26557[0x04]; // 0x48(0x04)
	bool *2376ac86ce; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float StartupDelay[0x04]; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.UserDefinedEnum
// Size: 0xc0 (Inherited: 0x70)
struct UUserDefinedEnum : UEnum {
	struct TMap<struct FName, struct FText> *53186095f1[0x50]; // 0x70(0x50)
};

// Class Engine.VectorField
// Size: 0x48 (Inherited: 0x28)
struct UVectorField : UObject {
	struct FBox Bounds[0x1c]; // 0x28(0x1c)
	float Intensity[0x04]; // 0x44(0x04)
};

// Class Engine.*c9d8b1d195
// Size: 0x88 (Inherited: 0x48)
struct U*c9d8b1d195 : UVectorField {
	struct UTexture2D* Texture[0x08]; // 0x48(0x08)
	enum class *0d201c810b *c407bc2196; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32 *a57a49d12f[0x04]; // 0x54(0x04)
	int32 *7a3ccfa0d9[0x04]; // 0x58(0x04)
	int32 *a30919fabf[0x04]; // 0x5c(0x04)
	int32 *33c46b8565[0x04]; // 0x60(0x04)
	int32 *32bd0be2e7[0x04]; // 0x64(0x04)
	int32 FrameCount[0x04]; // 0x68(0x04)
	float FramesPerSecond[0x04]; // 0x6c(0x04)
	char bLoop : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct U*f0a1a553f8* NoiseField[0x08]; // 0x78(0x08)
	float NoiseScale[0x04]; // 0x80(0x04)
	float *11e10cdb0c[0x04]; // 0x84(0x04)
};

// Class Engine.*f0a1a553f8
// Size: 0xe0 (Inherited: 0x48)
struct U*f0a1a553f8 : UVectorField {
	int32 SizeX[0x04]; // 0x48(0x04)
	int32 SizeY[0x04]; // 0x4c(0x04)
	int32 *e8d53804a2[0x04]; // 0x50(0x04)
	char pad_54[0x8c]; // 0x54(0x8c)
};

// Class Engine.*91f43b01c1
// Size: 0x28 (Inherited: 0x28)
struct U*91f43b01c1 : UObject {
};

// Class Engine.*883257e6af
// Size: 0x28 (Inherited: 0x28)
struct U*883257e6af : UInterface {
};

// Class Engine.*147426ac7d
// Size: 0x58 (Inherited: 0x28)
struct U*147426ac7d : UObject {
	struct FGuid ID[0x10]; // 0x28(0x10)
	enum class EVolumetricDataFormat Format; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector VoxelSize[0x0c]; // 0x3c(0x0c)
	float SamplingScale[0x04]; // 0x48(0x04)
	float *455a36e7df[0x04]; // 0x4c(0x04)
	float MaxDrawDistance[0x04]; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.WorldComposition
// Size: 0x90 (Inherited: 0x28)
struct UWorldComposition : UObject {
	char pad_28[0x38]; // 0x28(0x38)
	struct TArray<struct ULevelStreaming*> *8345316efb[0x10]; // 0x60(0x10)
	double TilesStreamingTimeThreshold[0x08]; // 0x70(0x08)
	bool bLoadAllTilesDuringCinematic; // 0x78(0x01)
	bool bRebaseOriginIn3DSpace; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	float RebaseOriginDistance[0x04]; // 0x7c(0x04)
	struct TArray<struct FString> IgnoreStreamingPrefix[0x10]; // 0x80(0x10)
};


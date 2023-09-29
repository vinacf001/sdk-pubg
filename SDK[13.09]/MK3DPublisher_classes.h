// Class MK3DPublisher.AudioCapturer
// Size: 0x478 (Inherited: 0x3f8)
struct AAudioCapturer : AActor {
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

// Class MK3DPublisher.*092a0ea121
// Size: 0x28 (Inherited: 0x28)
struct U*092a0ea121 : UBlueprintFunctionLibrary {
};

// Class MK3DPublisher.ViewportCapturer
// Size: 0x490 (Inherited: 0x3f8)
struct AViewportCapturer : AActor {
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


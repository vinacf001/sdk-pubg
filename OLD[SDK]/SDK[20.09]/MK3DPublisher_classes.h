// Class MK3DPublisher.AudioCapturer
// Size: 0x470 (Inherited: 0x3f0)
struct AAudioCapturer : AActor {
	struct TArray<struct AActor*> Children; // 0x38(0x10)
	char pad_400_0 : 3; // 0x400(0x01)
	char *6a29209afc : 1; // 0x48(0x01)
	char *6583edce58 : 1; // 0x49(0x01)
	char bReplicates : 1; // 0x49(0x01)
	struct FName *332fd811ca; // 0x50(0x08)
	enum class ENetRole RemoteRole; // 0x58(0x01)
	struct AActor* Owner; // 0x60(0x08)
	struct FRepMovement ReplicatedMovement; // 0x68(0x34)
	struct F*e5bda3d960 *e3fb0d68ff; // 0xa0(0x40)
	int32 *2d89f8ef7f; // 0xe0(0x04)
	float NetPriority; // 0xe4(0x04)
	enum class EAutoReceiveInput *8606d93d96; // 0xe8(0x01)
	struct U*63b14265fa* *63b14265fa; // 0xf0(0x08)
	struct TArray<struct FName> Layers; // 0xf8(0x10)
	char bAutoDestroyWhenFinished : 1; // 0x108(0x01)
	char bCanBeDamaged : 1; // 0x108(0x01)
	char *50cd51ed38 : 1; // 0x108(0x01)
	char *e002b42072 : 1; // 0x108(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x108(0x01)
	char *a4c704a3e5 : 1; // 0x108(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x108(0x01)
	char *13aea9b43a : 1; // 0x108(0x01)
	char *4211b886bf : 1; // 0x109(0x01)
	enum class ENetRole Role; // 0x10a(0x01)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x110(0x10)
	enum class *66c1dada81 InputConsumeOption; // 0x120(0x01)
	float NetUpdateFrequency; // 0x124(0x04)
	uint64 *f99b84bc94; // 0x128(0x08)
	char *97cac516e7 : 1; // 0x134(0x01)
	char *cd27b8552b : 1; // 0x134(0x01)
	char *8aabd64ff4 : 1; // 0x134(0x01)
	char *3cd32b903e : 1; // 0x134(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x135(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x136(0x01)
	struct FMulticastDelegate OnInputTouchLeave; // 0x140(0x10)
	struct FMulticastDelegate OnActorEndOverlap; // 0x150(0x10)
	float NetCullDistanceSquared; // 0x160(0x04)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x164(0x01)
	int32 *2bc7f7749a; // 0x168(0x04)
	struct UChildActorComponent* *129513d23d; // 0x16c(0x08)
	struct AActor* ParentComponentActor; // 0x174(0x08)
	struct FMulticastDelegate OnActorHit; // 0x180(0x10)
	struct FMulticastDelegate OnReleased; // 0x190(0x10)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x1a0(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x1b0(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x1c0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x1d0(0x10)
	float CustomTimeDilation; // 0x1e0(0x04)
	float MinNetUpdateFrequency; // 0x1e4(0x04)
	float InitialLifeSpan; // 0x1e8(0x04)
	struct FMulticastDelegate OnBeginCursorOver; // 0x1f0(0x10)
	struct APawn* Instigator; // 0x210(0x08)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x218(0x10)
	struct TArray<struct AMatineeActor*> *6220728ad0; // 0x228(0x10)
	struct FMulticastDelegate OnTakePointDamage; // 0x238(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x260(0x10)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x270(0x10)
	char bHidden : 1; // 0x280(0x01)
	char *0854a90e26 : 1; // 0x280(0x01)
	char *013332e5c6 : 1; // 0x280(0x01)
	char bOnlyRelevantToOwner : 1; // 0x280(0x01)
	char bAlwaysRelevant : 1; // 0x280(0x01)
	char *9ddfc785f1 : 1; // 0x280(0x01)
	char *05594c4443 : 1; // 0x280(0x01)
	char *ef19f6b6c9 : 1; // 0x280(0x01)
	char *dca9d9a72a : 1; // 0x281(0x01)
	char *16d69885c9 : 1; // 0x281(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x281(0x01)
	char *59968c9633 : 1; // 0x281(0x01)
	char *02848ec998 : 1; // 0x281(0x01)
	struct FGuid DestructibleId; // 0x284(0x10)
	bool bIsDestroyedVersion; // 0x294(0x01)
	bool RemoveFromLevelLOD; // 0x295(0x01)
	struct F*2066290a18 PrimaryActorTick; // 0x298(0x58)
	struct FMulticastDelegate OnClicked; // 0x340(0x10)
	struct FMulticastDelegate OnDestroyed; // 0x3a0(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x3b0(0x10)
	struct USceneComponent* RootComponent; // 0x3c8(0x08)
	struct TArray<struct FName> Tags; // 0x3d0(0x10)
	float *ae3e81fc86; // 0x3e0(0x04)

	void SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // Final|Native|Public|BlueprintCallable // @ game+0x639e2d0
	void *43eab6a44c(struct FName InputAxisName); // Function Engine.Actor.*43eab6a44c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638f500
	void *2f371b4576(); // Function Engine.Actor.*2f371b4576 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x63a36d8
	void *e14d0605bc(); // Function Engine.Actor.*e14d0605bc // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638be14
	void *a487955527(); // Function Engine.Actor.*a487955527 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6396164
	void *724cefc729(); // Function Engine.Actor.*724cefc729 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63922cc
	struct FVector ReceiveHit(); // Function Engine.Actor.ReceiveHit // Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x1e037c
	void *17f595f9ac(); // Function Engine.Actor.*17f595f9ac // Final|Native|Public|BlueprintCallable // @ game+0x6391e84
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // Native|Public // @ game+0xbcddd0
	void *c1c64c0f03(); // Function Engine.Actor.*c1c64c0f03 // Native|Public|BlueprintCallable // @ game+0xc20868
	void *7952614099(); // Function Engine.Actor.*7952614099 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638c02c
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // Native|Public // @ game+0xb6f010
	void ActorHasTag(); // Function Engine.Actor.ActorHasTag // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6382c8c
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // Native|Public|BlueprintCallable // @ game+0x639df2c
	void *3dcb8c828c(); // Function Engine.Actor.*3dcb8c828c // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x638b78c
	void *ccaa7ce1d0(); // Function Engine.Actor.*ccaa7ce1d0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638c014
	void K2_AttachRootComponentToActor(struct FName InSocketName); // Function Engine.Actor.K2_AttachRootComponentToActor // Final|Native|Public|BlueprintCallable // @ game+0x639534c
	struct FRotator *679babdbe9(); // Function Engine.Actor.*679babdbe9 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6398b2c
	struct AActor* *58360a298b(); // Function Engine.Actor.*58360a298b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6393130
	void GetOverlappingActors(struct TArray<struct AActor*> OverlappingActors); // Function Engine.Actor.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6390a70
	float MakeNoise(); // Function Engine.Actor.MakeNoise // Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable // @ game+0x63991e0
	void HasAuthority(); // Function Engine.Actor.HasAuthority // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xa169f4
	void K2_AddActorLocalTransform(struct FTransform NewTransform, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorLocalTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6393a74
	void AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x6384924
	void *fd605f1fa8(); // Function Engine.Actor.*fd605f1fa8 // Final|Native|Public|BlueprintCallable // @ game+0x639de94
	void *eda0f1fdef(); // Function Engine.Actor.*eda0f1fdef // Final|Native|Public|BlueprintCallable // @ game+0x63a3cc0
	void *6237fb723e(); // Function Engine.Actor.*6237fb723e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63967a8
	void *8e0bd09921(); // Function Engine.Actor.*8e0bd09921 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x638e3dc
	void DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // Final|Native|Public|BlueprintCallable // @ game+0x63896c8
	struct FName *7915dcfee8(); // Function Engine.Actor.*7915dcfee8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638da8c
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorLocalOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63936c4
	enum class *42e1cdcd79 *694ac52e11(enum class *42e1cdcd79 RotationRule); // Function Engine.Actor.*694ac52e11 // Final|Native|Public|BlueprintCallable // @ game+0x6395df4
	void K2_SetActorRelativeRotation(struct FRotator NewRelativeRotation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_SetActorRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63974e8
	struct FHitResult K2_AddActorLocalRotation(); // Function Engine.Actor.K2_AddActorLocalRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x639389c
	void K2_SetActorRotation(bool bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x703458
	void *927c0af560(); // Function Engine.Actor.*927c0af560 // Native|Public|BlueprintCallable // @ game+0x638b204
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // Native|Public|BlueprintCallable // @ game+0x6395c8c
	struct AActor* *bf3d34531f(); // Function Engine.Actor.*bf3d34531f // Final|Native|Public|BlueprintCallable // @ game+0x63a4e10
	void K2_AddActorWorldTransform(bool bSweep); // Function Engine.Actor.K2_AddActorWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6394050
	struct AActor* *2a43ddf3b4(); // Function Engine.Actor.*2a43ddf3b4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638e234
	struct FHitResult ReceiveRadialDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceiveRadialDamage // BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x1e037c
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // Event|Public|BlueprintEvent // @ game+0x1e037c
	enum class EAttachmentRule *ca2fce53c9(enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*ca2fce53c9 // Final|Native|Public|BlueprintCallable // @ game+0x639564c
	void *2f98c34a3e(); // Function Engine.Actor.*2f98c34a3e // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x638c6d8
	struct AActor* *8ab522db39(); // Function Engine.Actor.*8ab522db39 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638e194
	void *2cfa65e375(); // Function Engine.Actor.*2cfa65e375 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638bb48
	void *7af955f165(); // Function Engine.Actor.*7af955f165 // Native|Public|BlueprintCallable // @ game+0x639af28
	void *77574d4d00(float Tolerance); // Function Engine.Actor.*77574d4d00 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63a61e0
	struct UClass* *3d2b57891f(); // Function Engine.Actor.*3d2b57891f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638d8a4
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // Native|Protected // @ game+0xb722bc
	void *6d495b918e(); // Function Engine.Actor.*6d495b918e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x639e230
	void K2_SetActorLocation(bool bSweep, bool bTeleport); // Function Engine.Actor.K2_SetActorLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6396ef4
	void GetTransform(); // Function Engine.Actor.GetTransform // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xad04f0
	void ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // Event|Public|BlueprintEvent // @ game+0x1e037c
	void SetOwner(); // Function Engine.Actor.SetOwner // Native|Public|BlueprintCallable // @ game+0x55d7234
	void ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FHitResult K2_SetActorRelativeTransform(); // Function Engine.Actor.K2_SetActorRelativeTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63976c0
	void *96888c26b2(); // Function Engine.Actor.*96888c26b2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638c694
	void *298b7db98d(); // Function Engine.Actor.*298b7db98d // Final|Native|Public|BlueprintCallable // @ game+0x6395ca4
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // Native|Public // @ game+0xb9cfd4
	void *b0466cb89a(); // Function Engine.Actor.*b0466cb89a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638be48
	void *4e14239fe2(struct FVector OutLocation); // Function Engine.Actor.*4e14239fe2 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638bb70
	void *76b33f89d4(struct AActor* OtherActor); // Function Engine.Actor.*76b33f89d4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6391bb8
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FKey *a84ae826d7(); // Function Engine.Actor.*a84ae826d7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638f40c
	void *1f7d6b60c4(); // Function Engine.Actor.*1f7d6b60c4 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638c054
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // Event|Public|BlueprintEvent // @ game+0x1e037c
	bool K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63970d8
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // Event|Public|BlueprintEvent // @ game+0x1e037c
	void DisableInput(); // Function Engine.Actor.DisableInput // Native|Public|BlueprintCallable // @ game+0x638975c
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // Event|Public|BlueprintEvent // @ game+0x1e037c
	void *553025a5b6(); // Function Engine.Actor.*553025a5b6 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638fdec
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // Event|Public|BlueprintEvent // @ game+0x1e037c
	void *3fb2f52d1d(); // Function Engine.Actor.*3fb2f52d1d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638ee30
	void *5c10316bc8(); // Function Engine.Actor.*5c10316bc8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6392a18
	void *12680bdeab(); // Function Engine.Actor.*12680bdeab // Native|Public|BlueprintCallable // @ game+0x63a5b00
	void *094169766b(); // Function Engine.Actor.*094169766b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638fd3c
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x1e037c
	void *a80dd65dbf(); // Function Engine.Actor.*a80dd65dbf // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6392980
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FHitResult K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6397310
	void *7664b363a1(); // Function Engine.Actor.*7664b363a1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6390e60
	struct TArray<struct AActor*> *f77af040ad(); // Function Engine.Actor.*f77af040ad // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x638c474
	void K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x638b7a0
	void *28809cb5e5(); // Function Engine.Actor.*28809cb5e5 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638bfe0
	void *d21a3baa7f(); // Function Engine.Actor.*d21a3baa7f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6390f6c
	struct FName K2_AttachRootComponentTo(enum class EAttachLocation AttachLocationType); // Function Engine.Actor.K2_AttachRootComponentTo // Final|Native|Public|BlueprintCallable // @ game+0x63951cc
	void *3a00f3bb48(); // Function Engine.Actor.*3a00f3bb48 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63916f8
	void *f2d13d9497(); // Function Engine.Actor.*f2d13d9497 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638c670
	struct UObject* AddComponent(); // Function Engine.Actor.AddComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6e6d18
	void *6f6713dfba(struct AActor* OtherActor); // Function Engine.Actor.*6f6713dfba // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638eed0
	struct UMaterialInterface* *ea2a94b7da(); // Function Engine.Actor.*ea2a94b7da // Final|Native|Public|BlueprintCallable // @ game+0x6399164
	struct UClass* *2bbda76e95(); // Function Engine.Actor.*2bbda76e95 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638d99c
	struct AActor* ReceivePointDamage(struct U*498af98d1d* DamageType, struct FVector HitNormal); // Function Engine.Actor.ReceivePointDamage // BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x1e037c
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // Event|Public|BlueprintEvent // @ game+0x1e037c
	void GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6390cd0
	void *3b635a9905(); // Function Engine.Actor.*3b635a9905 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x639e190
	enum class EAttachmentRule *e13072354b(enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*e13072354b // Final|Native|Public|BlueprintCallable // @ game+0x1fe714
	void *4aadbb23a5(); // Function Engine.Actor.*4aadbb23a5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6390f90
	struct AActor* *82b3653b7b(); // Function Engine.Actor.*82b3653b7b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6392304
	bool K2_AddActorWorldRotation(struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6393e78
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x639629c
	struct FVector GetActorBounds(); // Function Engine.Actor.GetActorBounds // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638b9a0
	void *d30428cd54(); // Function Engine.Actor.*d30428cd54 // Final|Native|Public|BlueprintCallable // @ game+0x63a3ba8
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // Native|Public // @ game+0x236e50
	void *7fc2785714(); // Function Engine.Actor.*7fc2785714 // Native|Public|BlueprintCallable // @ game+0x639ae00
	void *8df9beeffc(); // Function Engine.Actor.*8df9beeffc // Native|Public|BlueprintCallable // @ game+0x63a3640
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // Event|Public|BlueprintEvent // @ game+0x1e037c
	bool K2_AddActorWorldOffset(struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6393ca0
	void *2ad230fb6c(); // Function Engine.Actor.*2ad230fb6c // Final|Native|Public|BlueprintCallable // @ game+0x639e364
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // Native|Public // @ game+0x3fabf8
	bool K2_SetActorTransform(); // Function Engine.Actor.K2_SetActorTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63978ec
	void *b01fc0cf78(); // Function Engine.Actor.*b01fc0cf78 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638bc7c
	void *9ffc398f85(); // Function Engine.Actor.*9ffc398f85 // Native|Public|BlueprintCallable // @ game+0x6384a4c
	void *9fc33c71b8(); // Function Engine.Actor.*9fc33c71b8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6392964
	struct AController* ReceiveAnyDamage(); // Function Engine.Actor.ReceiveAnyDamage // BlueprintAuthorityOnly|Event|Public|BlueprintEvent // @ game+0x1e037c
	void *34c6511ade(); // Function Engine.Actor.*34c6511ade // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638fd24
	void ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FKey *8ff8fb0472(); // Function Engine.Actor.*8ff8fb0472 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638fb1c
};

// Class MK3DPublisher.*092a0ea121
// Size: 0x28 (Inherited: 0x28)
struct U*092a0ea121 : UBlueprintFunctionLibrary {
};

// Class MK3DPublisher.ViewportCapturer
// Size: 0x488 (Inherited: 0x3f0)
struct AViewportCapturer : AActor {
	struct TArray<struct AActor*> Children; // 0x38(0x10)
	char pad_400_0 : 3; // 0x400(0x01)
	char *6a29209afc : 1; // 0x48(0x01)
	char *6583edce58 : 1; // 0x49(0x01)
	char bReplicates : 1; // 0x49(0x01)
	struct FName *332fd811ca; // 0x50(0x08)
	enum class ENetRole RemoteRole; // 0x58(0x01)
	struct AActor* Owner; // 0x60(0x08)
	struct FRepMovement ReplicatedMovement; // 0x68(0x34)
	struct F*e5bda3d960 *e3fb0d68ff; // 0xa0(0x40)
	int32 *2d89f8ef7f; // 0xe0(0x04)
	float NetPriority; // 0xe4(0x04)
	enum class EAutoReceiveInput *8606d93d96; // 0xe8(0x01)
	struct U*63b14265fa* *63b14265fa; // 0xf0(0x08)
	struct TArray<struct FName> Layers; // 0xf8(0x10)
	char bAutoDestroyWhenFinished : 1; // 0x108(0x01)
	char bCanBeDamaged : 1; // 0x108(0x01)
	char *50cd51ed38 : 1; // 0x108(0x01)
	char *e002b42072 : 1; // 0x108(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x108(0x01)
	char *a4c704a3e5 : 1; // 0x108(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x108(0x01)
	char *13aea9b43a : 1; // 0x108(0x01)
	char *4211b886bf : 1; // 0x109(0x01)
	enum class ENetRole Role; // 0x10a(0x01)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x110(0x10)
	enum class *66c1dada81 InputConsumeOption; // 0x120(0x01)
	float NetUpdateFrequency; // 0x124(0x04)
	uint64 *f99b84bc94; // 0x128(0x08)
	char *97cac516e7 : 1; // 0x134(0x01)
	char *cd27b8552b : 1; // 0x134(0x01)
	char *8aabd64ff4 : 1; // 0x134(0x01)
	char *3cd32b903e : 1; // 0x134(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x135(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x136(0x01)
	struct FMulticastDelegate OnInputTouchLeave; // 0x140(0x10)
	struct FMulticastDelegate OnActorEndOverlap; // 0x150(0x10)
	float NetCullDistanceSquared; // 0x160(0x04)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x164(0x01)
	int32 *2bc7f7749a; // 0x168(0x04)
	struct UChildActorComponent* *129513d23d; // 0x16c(0x08)
	struct AActor* ParentComponentActor; // 0x174(0x08)
	struct FMulticastDelegate OnActorHit; // 0x180(0x10)
	struct FMulticastDelegate OnReleased; // 0x190(0x10)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x1a0(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x1b0(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x1c0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x1d0(0x10)
	float CustomTimeDilation; // 0x1e0(0x04)
	float MinNetUpdateFrequency; // 0x1e4(0x04)
	float InitialLifeSpan; // 0x1e8(0x04)
	struct FMulticastDelegate OnBeginCursorOver; // 0x1f0(0x10)
	struct APawn* Instigator; // 0x210(0x08)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x218(0x10)
	struct TArray<struct AMatineeActor*> *6220728ad0; // 0x228(0x10)
	struct FMulticastDelegate OnTakePointDamage; // 0x238(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x260(0x10)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x270(0x10)
	char bHidden : 1; // 0x280(0x01)
	char *0854a90e26 : 1; // 0x280(0x01)
	char *013332e5c6 : 1; // 0x280(0x01)
	char bOnlyRelevantToOwner : 1; // 0x280(0x01)
	char bAlwaysRelevant : 1; // 0x280(0x01)
	char *9ddfc785f1 : 1; // 0x280(0x01)
	char *05594c4443 : 1; // 0x280(0x01)
	char *ef19f6b6c9 : 1; // 0x280(0x01)
	char *dca9d9a72a : 1; // 0x281(0x01)
	char *16d69885c9 : 1; // 0x281(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x281(0x01)
	char *59968c9633 : 1; // 0x281(0x01)
	char *02848ec998 : 1; // 0x281(0x01)
	struct FGuid DestructibleId; // 0x284(0x10)
	bool bIsDestroyedVersion; // 0x294(0x01)
	bool RemoveFromLevelLOD; // 0x295(0x01)
	struct F*2066290a18 PrimaryActorTick; // 0x298(0x58)
	struct FMulticastDelegate OnClicked; // 0x340(0x10)
	struct FMulticastDelegate OnDestroyed; // 0x3a0(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x3b0(0x10)
	struct USceneComponent* RootComponent; // 0x3c8(0x08)
	struct TArray<struct FName> Tags; // 0x3d0(0x10)
	float *ae3e81fc86; // 0x3e0(0x04)

	void SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // Final|Native|Public|BlueprintCallable // @ game+0x639e2d0
	void *43eab6a44c(struct FName InputAxisName); // Function Engine.Actor.*43eab6a44c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638f500
	void *2f371b4576(); // Function Engine.Actor.*2f371b4576 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x63a36d8
	void *e14d0605bc(); // Function Engine.Actor.*e14d0605bc // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638be14
	void *a487955527(); // Function Engine.Actor.*a487955527 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6396164
	void *724cefc729(); // Function Engine.Actor.*724cefc729 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x63922cc
	struct FVector ReceiveHit(); // Function Engine.Actor.ReceiveHit // Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x1e037c
	void *17f595f9ac(); // Function Engine.Actor.*17f595f9ac // Final|Native|Public|BlueprintCallable // @ game+0x6391e84
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // Native|Public // @ game+0xbcddd0
	void *c1c64c0f03(); // Function Engine.Actor.*c1c64c0f03 // Native|Public|BlueprintCallable // @ game+0xc20868
	void *7952614099(); // Function Engine.Actor.*7952614099 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638c02c
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // Native|Public // @ game+0xb6f010
	void ActorHasTag(); // Function Engine.Actor.ActorHasTag // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6382c8c
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // Native|Public|BlueprintCallable // @ game+0x639df2c
	void *3dcb8c828c(); // Function Engine.Actor.*3dcb8c828c // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x638b78c
	void *ccaa7ce1d0(); // Function Engine.Actor.*ccaa7ce1d0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638c014
	void K2_AttachRootComponentToActor(struct FName InSocketName); // Function Engine.Actor.K2_AttachRootComponentToActor // Final|Native|Public|BlueprintCallable // @ game+0x639534c
	struct FRotator *679babdbe9(); // Function Engine.Actor.*679babdbe9 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6398b2c
	struct AActor* *58360a298b(); // Function Engine.Actor.*58360a298b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6393130
	void GetOverlappingActors(struct TArray<struct AActor*> OverlappingActors); // Function Engine.Actor.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6390a70
	float MakeNoise(); // Function Engine.Actor.MakeNoise // Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable // @ game+0x63991e0
	void HasAuthority(); // Function Engine.Actor.HasAuthority // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xa169f4
	void K2_AddActorLocalTransform(struct FTransform NewTransform, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorLocalTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6393a74
	void AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x6384924
	void *fd605f1fa8(); // Function Engine.Actor.*fd605f1fa8 // Final|Native|Public|BlueprintCallable // @ game+0x639de94
	void *eda0f1fdef(); // Function Engine.Actor.*eda0f1fdef // Final|Native|Public|BlueprintCallable // @ game+0x63a3cc0
	void *6237fb723e(); // Function Engine.Actor.*6237fb723e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63967a8
	void *8e0bd09921(); // Function Engine.Actor.*8e0bd09921 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x638e3dc
	void DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // Final|Native|Public|BlueprintCallable // @ game+0x63896c8
	struct FName *7915dcfee8(); // Function Engine.Actor.*7915dcfee8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638da8c
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorLocalOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63936c4
	enum class *42e1cdcd79 *694ac52e11(enum class *42e1cdcd79 RotationRule); // Function Engine.Actor.*694ac52e11 // Final|Native|Public|BlueprintCallable // @ game+0x6395df4
	void K2_SetActorRelativeRotation(struct FRotator NewRelativeRotation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_SetActorRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63974e8
	struct FHitResult K2_AddActorLocalRotation(); // Function Engine.Actor.K2_AddActorLocalRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x639389c
	void K2_SetActorRotation(bool bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x703458
	void *927c0af560(); // Function Engine.Actor.*927c0af560 // Native|Public|BlueprintCallable // @ game+0x638b204
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // Native|Public|BlueprintCallable // @ game+0x6395c8c
	struct AActor* *bf3d34531f(); // Function Engine.Actor.*bf3d34531f // Final|Native|Public|BlueprintCallable // @ game+0x63a4e10
	void K2_AddActorWorldTransform(bool bSweep); // Function Engine.Actor.K2_AddActorWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6394050
	struct AActor* *2a43ddf3b4(); // Function Engine.Actor.*2a43ddf3b4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638e234
	struct FHitResult ReceiveRadialDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceiveRadialDamage // BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x1e037c
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // Event|Public|BlueprintEvent // @ game+0x1e037c
	enum class EAttachmentRule *ca2fce53c9(enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*ca2fce53c9 // Final|Native|Public|BlueprintCallable // @ game+0x639564c
	void *2f98c34a3e(); // Function Engine.Actor.*2f98c34a3e // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x638c6d8
	struct AActor* *8ab522db39(); // Function Engine.Actor.*8ab522db39 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638e194
	void *2cfa65e375(); // Function Engine.Actor.*2cfa65e375 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638bb48
	void *7af955f165(); // Function Engine.Actor.*7af955f165 // Native|Public|BlueprintCallable // @ game+0x639af28
	void *77574d4d00(float Tolerance); // Function Engine.Actor.*77574d4d00 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63a61e0
	struct UClass* *3d2b57891f(); // Function Engine.Actor.*3d2b57891f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638d8a4
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // Native|Protected // @ game+0xb722bc
	void *6d495b918e(); // Function Engine.Actor.*6d495b918e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x639e230
	void K2_SetActorLocation(bool bSweep, bool bTeleport); // Function Engine.Actor.K2_SetActorLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6396ef4
	void GetTransform(); // Function Engine.Actor.GetTransform // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xad04f0
	void ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // Event|Public|BlueprintEvent // @ game+0x1e037c
	void SetOwner(); // Function Engine.Actor.SetOwner // Native|Public|BlueprintCallable // @ game+0x55d7234
	void ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FHitResult K2_SetActorRelativeTransform(); // Function Engine.Actor.K2_SetActorRelativeTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63976c0
	void *96888c26b2(); // Function Engine.Actor.*96888c26b2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638c694
	void *298b7db98d(); // Function Engine.Actor.*298b7db98d // Final|Native|Public|BlueprintCallable // @ game+0x6395ca4
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // Native|Public // @ game+0xb9cfd4
	void *b0466cb89a(); // Function Engine.Actor.*b0466cb89a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638be48
	void *4e14239fe2(struct FVector OutLocation); // Function Engine.Actor.*4e14239fe2 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638bb70
	void *76b33f89d4(struct AActor* OtherActor); // Function Engine.Actor.*76b33f89d4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6391bb8
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FKey *a84ae826d7(); // Function Engine.Actor.*a84ae826d7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638f40c
	void *1f7d6b60c4(); // Function Engine.Actor.*1f7d6b60c4 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638c054
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x1e037c
	void K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // Event|Public|BlueprintEvent // @ game+0x1e037c
	bool K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63970d8
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // Event|Public|BlueprintEvent // @ game+0x1e037c
	void DisableInput(); // Function Engine.Actor.DisableInput // Native|Public|BlueprintCallable // @ game+0x638975c
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // Event|Public|BlueprintEvent // @ game+0x1e037c
	void *553025a5b6(); // Function Engine.Actor.*553025a5b6 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638fdec
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // Event|Public|BlueprintEvent // @ game+0x1e037c
	void *3fb2f52d1d(); // Function Engine.Actor.*3fb2f52d1d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638ee30
	void *5c10316bc8(); // Function Engine.Actor.*5c10316bc8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6392a18
	void *12680bdeab(); // Function Engine.Actor.*12680bdeab // Native|Public|BlueprintCallable // @ game+0x63a5b00
	void *094169766b(); // Function Engine.Actor.*094169766b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638fd3c
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x1e037c
	void *a80dd65dbf(); // Function Engine.Actor.*a80dd65dbf // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6392980
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FHitResult K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6397310
	void *7664b363a1(); // Function Engine.Actor.*7664b363a1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6390e60
	struct TArray<struct AActor*> *f77af040ad(); // Function Engine.Actor.*f77af040ad // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x638c474
	void K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // Event|Public|BlueprintEvent // @ game+0x1e037c
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x638b7a0
	void *28809cb5e5(); // Function Engine.Actor.*28809cb5e5 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638bfe0
	void *d21a3baa7f(); // Function Engine.Actor.*d21a3baa7f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6390f6c
	struct FName K2_AttachRootComponentTo(enum class EAttachLocation AttachLocationType); // Function Engine.Actor.K2_AttachRootComponentTo // Final|Native|Public|BlueprintCallable // @ game+0x63951cc
	void *3a00f3bb48(); // Function Engine.Actor.*3a00f3bb48 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x63916f8
	void *f2d13d9497(); // Function Engine.Actor.*f2d13d9497 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638c670
	struct UObject* AddComponent(); // Function Engine.Actor.AddComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6e6d18
	void *6f6713dfba(struct AActor* OtherActor); // Function Engine.Actor.*6f6713dfba // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638eed0
	struct UMaterialInterface* *ea2a94b7da(); // Function Engine.Actor.*ea2a94b7da // Final|Native|Public|BlueprintCallable // @ game+0x6399164
	struct UClass* *2bbda76e95(); // Function Engine.Actor.*2bbda76e95 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638d99c
	struct AActor* ReceivePointDamage(struct U*498af98d1d* DamageType, struct FVector HitNormal); // Function Engine.Actor.ReceivePointDamage // BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x1e037c
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // Event|Public|BlueprintEvent // @ game+0x1e037c
	void GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6390cd0
	void *3b635a9905(); // Function Engine.Actor.*3b635a9905 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x639e190
	enum class EAttachmentRule *e13072354b(enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*e13072354b // Final|Native|Public|BlueprintCallable // @ game+0x1fe714
	void *4aadbb23a5(); // Function Engine.Actor.*4aadbb23a5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6390f90
	struct AActor* *82b3653b7b(); // Function Engine.Actor.*82b3653b7b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6392304
	bool K2_AddActorWorldRotation(struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6393e78
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x639629c
	struct FVector GetActorBounds(); // Function Engine.Actor.GetActorBounds // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638b9a0
	void *d30428cd54(); // Function Engine.Actor.*d30428cd54 // Final|Native|Public|BlueprintCallable // @ game+0x63a3ba8
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // Native|Public // @ game+0x236e50
	void *7fc2785714(); // Function Engine.Actor.*7fc2785714 // Native|Public|BlueprintCallable // @ game+0x639ae00
	void *8df9beeffc(); // Function Engine.Actor.*8df9beeffc // Native|Public|BlueprintCallable // @ game+0x63a3640
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // Event|Public|BlueprintEvent // @ game+0x1e037c
	bool K2_AddActorWorldOffset(struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6393ca0
	void *2ad230fb6c(); // Function Engine.Actor.*2ad230fb6c // Final|Native|Public|BlueprintCallable // @ game+0x639e364
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // Native|Public // @ game+0x3fabf8
	bool K2_SetActorTransform(); // Function Engine.Actor.K2_SetActorTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x63978ec
	void *b01fc0cf78(); // Function Engine.Actor.*b01fc0cf78 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638bc7c
	void *9ffc398f85(); // Function Engine.Actor.*9ffc398f85 // Native|Public|BlueprintCallable // @ game+0x6384a4c
	void *9fc33c71b8(); // Function Engine.Actor.*9fc33c71b8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6392964
	struct AController* ReceiveAnyDamage(); // Function Engine.Actor.ReceiveAnyDamage // BlueprintAuthorityOnly|Event|Public|BlueprintEvent // @ game+0x1e037c
	void *34c6511ade(); // Function Engine.Actor.*34c6511ade // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x638fd24
	void ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // Event|Public|BlueprintEvent // @ game+0x1e037c
	struct FKey *8ff8fb0472(); // Function Engine.Actor.*8ff8fb0472 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x638fb1c
};

